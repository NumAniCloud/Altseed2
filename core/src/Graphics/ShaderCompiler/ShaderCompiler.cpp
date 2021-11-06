#include "ShaderCompiler.h"

#include "../../Common/StringHelper.h"
#include "../../IO/File.h"
#include "../../IO/StaticFile.h"
#include "../../Logger/Log.h"
#include "../Graphics.h"

namespace Altseed2 {

ShaderCompileResult::ShaderCompileResult(const std::shared_ptr<Shader> value, const std::u16string message)
    : value_(value), message_(message) {}

std::shared_ptr<ShaderCompiler> ShaderCompiler::instance_ = nullptr;

std::shared_ptr<ShaderCompiler>& ShaderCompiler::GetInstance() { return instance_; }

bool ShaderCompiler::Initialize(std::shared_ptr<Graphics>& graphics, std::shared_ptr<File>& file) {
    instance_ = CreateSharedPtr(new ShaderCompiler(graphics, file));
    return true;
}

void ShaderCompiler::Terminate() { instance_ = nullptr; }

ShaderCompiler::ShaderCompiler(std::shared_ptr<Graphics>& graphics, std::shared_ptr<File>& file) : graphics_(graphics), file_(file) {
    auto loadFunc = [file](std::string s) -> std::vector<uint8_t> {
        auto path = utf8_to_utf16(s.c_str());
        auto sf = StaticFile::Create(path.c_str());

        if (sf == nullptr) {
            return std::vector<uint8_t>();
        }

        std::vector<uint8_t> ret;
        ret.resize(sf->GetSize());

        auto p = static_cast<const uint8_t*>(sf->GetData());
        ret.assign(p, p + sf->GetSize());
        return ret;
    };

    spirvGenerator_ = std::make_shared<LLGI::SPIRVGenerator>(loadFunc);
    compiler_ = LLGI::CreateSharedPtr(LLGI::CreateCompiler(LLGI::DeviceType::Default));

#ifdef _WIN32
    spirvTranspiler_ = std::make_shared<LLGI::SPIRVToHLSLTranspiler>(50, true);
#elif __APPLE__
    spirvTranspiler_ = std::make_shared<LLGI::SPIRVToMSLTranspiler>();
#else
    spirvTranspiler_ = std::make_shared<LLGI::SPIRVToGLSLTranspiler>(true);
#endif

    spirvReflection_ = std::make_shared<LLGI::SPIRVReflection>();
}

ShaderCompiler::~ShaderCompiler() {}

std::shared_ptr<ShaderCompileResult> ShaderCompiler::Compile(const char* path, const char* name, const char* code, ShaderStageType shaderStage) {
    std::string availableCode;

    std::vector<LLGI::SPIRVGeneratorMacro> macros;

#if defined(_WIN32) || defined(__APPLE__)
    auto spirv = spirvGenerator_->Generate(path, code, macros, static_cast<LLGI::ShaderStageType>(shaderStage), false);
#else
    auto spirv = spirvGenerator_->Generate(path, code, macros, static_cast<LLGI::ShaderStageType>(shaderStage), true);
#endif

    if (spirv->GetData().empty()) {
        Log::GetInstance()->Error(LogCategory::Core, u"ShaderCompiler::Compile: parse error {0} : {1}", name, spirv->GetError());
        Log::GetInstance()->Error(LogCategory::Core, u"Code :\n{}", code);
        return MakeAsdShared<ShaderCompileResult>(nullptr, utf8_to_utf16(spirv->GetError()));
    }

    // convert a code or use raw code
    if (spirvTranspiler_ != nullptr) {
        if (!spirvTranspiler_->Transpile(spirv)) {
            Log::GetInstance()->Error(LogCategory::Core, u"Shader transpile error {} : {}", name, spirvTranspiler_->GetErrorCode());
            return MakeAsdShared<ShaderCompileResult>(nullptr, utf8_to_utf16(spirvTranspiler_->GetErrorCode()));
        }

        availableCode = spirvTranspiler_->GetCode();
    } else {
        availableCode = code;
    }

    LLGI::ShaderStageType shaderStageLLGI = LLGI::ShaderStageType::Vertex;
    if (shaderStage == ShaderStageType::Vertex) {
        shaderStageLLGI = LLGI::ShaderStageType::Vertex;
    } else if (shaderStage == ShaderStageType::Pixel) {
        shaderStageLLGI = LLGI::ShaderStageType::Pixel;
    } else if (shaderStage == ShaderStageType::Compute) {
        shaderStageLLGI = LLGI::ShaderStageType::Compute;
    }

    // compile actually
    LLGI::CompilerResult result;
    compiler_->Compile(result, availableCode.c_str(), shaderStageLLGI);

    if (result.Binary.size() == 0) {
        Log::GetInstance()->Error(LogCategory::Core, u"Shader compile error {} : {}", name, result.Message);
        Log::GetInstance()->Error(LogCategory::Core, u"Code :\n{}", code);
        return MakeAsdShared<ShaderCompileResult>(nullptr, utf8_to_utf16(result.Message));
    }

    if (!spirvReflection_->Transpile(spirv)) {
        Log::GetInstance()->Error(LogCategory::Core, u"Shader error {} : Failed to refrect.", name);
        return MakeAsdShared<ShaderCompileResult>(nullptr, utf8_to_utf16(result.Message + "\nFailed to refrect"));
    }

    std::vector<LLGI::DataStructure> data;

    for (auto& b : result.Binary) {
        LLGI::DataStructure d;
        d.Data = b.data();
        d.Size = static_cast<int32_t>(b.size());
        data.push_back(d);
    }

    auto shaderLLGI = LLGI::CreateSharedPtr(graphics_->GetGraphicsLLGI()->CreateShader(data.data(), static_cast<int32_t>(data.size())));

    std::vector<ShaderReflectionTexture> textures;
    std::vector<ShaderReflectionUniform> uniforms;
    Vector3I numThreads;

    for (auto& t : spirvReflection_->Textures) {
        auto _ = ShaderReflectionTexture{utf8_to_utf16(t.Name), t.Offset};
        textures.emplace_back(_);
    }

    for (auto& t : spirvReflection_->Uniforms) {
        auto _ = ShaderReflectionUniform{utf8_to_utf16(t.Name), t.Offset, t.Size};
        uniforms.emplace_back(_);
    }

    numThreads.X = spirvReflection_->NumThreads.X;
    numThreads.Y = spirvReflection_->NumThreads.Y;
    numThreads.Z = spirvReflection_->NumThreads.Z;

    auto shader = MakeAsdShared<Shader>(
            utf8_to_utf16(code),
            utf8_to_utf16(name),
            textures,
            uniforms,
            numThreads,
            shaderLLGI,
            shaderStage);
    return MakeAsdShared<ShaderCompileResult>(shader, utf8_to_utf16(result.Message));
}

std::shared_ptr<ShaderCompileResult> ShaderCompiler::Compile(const char* path, const char* name, ShaderStageType shaderStage) {
    auto sf = StaticFile::Create(utf8_to_utf16(path).c_str());

    if (sf == nullptr) {
        return MakeAsdShared<ShaderCompileResult>(nullptr, std::u16string(u"File not found"));
    }

    std::vector<char> strvec;
    strvec.resize(sf->GetSize());

    auto p = static_cast<const char*>(sf->GetData());
    strvec.assign(p, p + sf->GetSize());
    strvec.push_back(0);

    return Compile(path, name, strvec.data(), shaderStage);
}

}  // namespace Altseed2
