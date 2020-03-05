#include "BuiltinShader.h"
#include "ShaderCompiler/ShaderCompiler.h"
#include "../Logger/Log.h"

namespace Altseed {

const char* SpriteUnlitVS = R"(
cbuffer Consts : register(b0)
{
    float4x4 matView;
    float4x4 matProjection;
};

struct VS_INPUT{
    float3 Position : POSITION0;
    float4 Color : COLOR0;
    float2 UV1 : UV0;
    float2 UV2 : UV1;
};
struct VS_OUTPUT{
    float4  Position : SV_POSITION;
    float4  Color    : COLOR0;
    float2  UV1 : UV0;
    float2  UV2 : UV1;
};
    
VS_OUTPUT main(VS_INPUT input){
    VS_OUTPUT output;
    float4 pos = float4(input.Position, 1.0f);

    pos = mul(matView, pos);
    pos = mul(matProjection, pos);

    output.Position = pos;
    output.UV1 = input.UV1;
    output.UV2 = input.UV2;
    output.Color = input.Color;
        
    return output;
}
)";

const char* SpriteUnlitPS = R"(
Texture2D mainTex : register(t0);
SamplerState mainSamp : register(s0);
struct PS_INPUT
{
    float4  Position : SV_POSITION;
    float4  Color    : COLOR0;
    float2  UV1 : UV0;
    float2  UV2 : UV1;
};
float4 main(PS_INPUT input) : SV_TARGET 
{ 
    float4 c;
    c = mainTex.Sample(mainSamp, input.UV1) * input.Color;
    return c;
}
)";

const char* FontUnlitPS = R"(
Texture2D mainTex : register(t0);
SamplerState mainSamp : register(s0);
cbuffer Consts : register(b1)
{
    float4 weight;
};
struct PS_INPUT
{
    float4  Position : SV_POSITION;
    float4  Color    : COLOR0;
    float2  UV1 : UV0;
    float2  UV2 : UV1;
};
float4 main(PS_INPUT input) : SV_TARGET 
{ 
    float4 c;
    c = mainTex.Sample(mainSamp, input.UV1);

    c = lerp(float4(0, 0, 0, 0), float4(1, 1, 1, 1), (c - weight.xxxx) * 255);
    c = lerp(float4(0, 0, 0, 0), float4(1, 1, 1, 1), c + weight.xxxx);

    if (c.r <= 0) discard;

    return lerp(input.Color * c.r, input.Color, c.r > 1.0f);
}
)";

std::shared_ptr<Shader> BuiltinShader::Create(BuiltinShaderType type) {
    auto found = shaders_.find(type);
    if (found != shaders_.end()) return found->second;

    if (type == BuiltinShaderType::SpriteUnlitVS) {
        auto shader = ShaderCompiler::GetInstance()->Compile("SpriteUnlitVS", SpriteUnlitVS, ShaderStageType::Vertex);
        shaders_[type] = shader;
        return shader;
    } else if (type == BuiltinShaderType::SpriteUnlitPS) {
        auto shader = ShaderCompiler::GetInstance()->Compile("SpriteUnlitPS", SpriteUnlitPS, ShaderStageType::Pixel);
        shaders_[type] = shader;
        return shader;
    } else if (type == BuiltinShaderType::FontUnlitPS) {
        auto shader = ShaderCompiler::GetInstance()->Compile("FontUnlitPS", FontUnlitPS, ShaderStageType::Pixel);
        shaders_[type] = shader;
        return shader;
    } else {
        LOG_CRITICAL(u"type is not found");
        assert(0);
    }
    return nullptr;
}

}  // namespace Altseed