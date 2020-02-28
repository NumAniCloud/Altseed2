#include "Common/Assertion.h"
#include "FPS.h"
#include <thread>

namespace Altseed {

FPS::FPS() {
    previousTime_ = std::chrono::system_clock::now();
    SetTarget(60);
}

void FPS::Update() {
    auto currentTime = std::chrono::system_clock::now();
    auto deltans = std::chrono::duration_cast<std::chrono::nanoseconds>(currentTime - previousTime_);

    // 更新時間に余裕がある時は待機処理をする
    if(deltans < framens_) {
        auto sleepns = ((previousTime_ + framens_) - currentTime);

        // milliseconds単位でsleepする
        std::this_thread::sleep_for(std::chrono::milliseconds((sleepns.count() / 1000000) - 1));

        // busy loopで調節
        do {
            currentTime = std::chrono::system_clock::now();
            deltans = std::chrono::duration_cast<std::chrono::nanoseconds>(currentTime - previousTime_);
        } while (deltans < framens_);
    }

    // 計測処理を行う
    deltaSecond_ = static_cast<float>(deltans.count()) / nano;
    currentFPS_ = 1.0f / deltaSecond_;

    // 固定FPSでは経過時間は一定として扱う。
    if (framerateMode_ == FramerateMode::Constant) {
        deltaSecond_ = 1.0f / targetFPS_;
    }

    previousTime_ = currentTime;
}

const float FPS::GetDeltaSecond() { return deltaSecond_; }
const float FPS::GetCurrentFPS() { return currentFPS_; }

const int32_t FPS::GetTargetFPS() { return targetFPS_; }
void FPS::SetTarget(int32_t fps) {
    targetFPS_ = fps;
    framens_ = std::chrono::nanoseconds(nano / fps);
}

const FramerateMode FPS::GetFramerateMode() { return framerateMode_; }
void FPS::SetFramerateMode(FramerateMode framerateMode) { framerateMode_ = framerateMode; }

} // namespace Altseed