#include "Profiler.h"

namespace Altseed2 {

ProfilerBlock::ProfilerBlock(const ::profiler::BaseBlockDescriptor* descriptor, const char* name) : descriptor_(descriptor), name_(name) {}

std::shared_ptr<Profiler> Profiler::instance_;

std::shared_ptr<Profiler>& Profiler::GetInstance() {
    return instance_;
}

bool Profiler::Initialize() {
    if (instance_ != nullptr) {
        return false;
    }

    instance_ = MakeAsdShared<Profiler>();

    return true;
}

void Profiler::Terminate() {
    instance_.reset();
}

std::shared_ptr<ProfilerBlock> Profiler::CreateBlock(const char* name, const char* _filename, int _line, const Color& color) {
    uint32_t c = 0xff << 24;
    c += (color.R << 16);
    c += (color.G << 8);
    c += (color.B << 0);

    auto desc = ::profiler::registerDescription(profiler::EasyBlockStatus::ON, name, name, _filename, _line, ::profiler::BlockType::Block, c, true);
    return MakeAsdShared<ProfilerBlock>(desc, name);
};

void Profiler::BeginBlock(const char* name, const char* _filename, int _line, const Color& color) {
    auto uniqueName = std::string(_filename) + ":" + std::to_string(_line);
    auto it = blocks_.find(uniqueName);
    if (it != blocks_.end()) {
        ::profiler::beginNonScopedBlock(it->second->GetDescriptor(), it->second->GetName().c_str());
    } else {
        auto block = CreateBlock(name, _filename, _line, color);
        blocks_.emplace(uniqueName, block);
        ::profiler::beginNonScopedBlock(block->GetDescriptor(), block->GetName().c_str());
    }
}

void Profiler::EndBlock() {
    ::profiler::endBlock();
}

void Profiler::StartCapture() {
    ::profiler::setEnabled(true);
}

void Profiler::StopCapture() {
    ::profiler::setEnabled(false);
}

void Profiler::StartListen(int port) {
    ::profiler::startListen(port);
}

void Profiler::DumpToFileAndStopCapture(const char16_t* path) {
    ::profiler::dumpBlocksToFile(utf16_to_utf8(path).c_str());
}
}  // namespace Altseed2