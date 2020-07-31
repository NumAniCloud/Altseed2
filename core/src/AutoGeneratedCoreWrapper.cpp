// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//
//   このファイルは自動生成されました。
//   このファイルへの変更は消失することがあります。
//
//   THIS FILE IS AUTO GENERATED.
//   YOUR COMMITMENT ON THIS FILE WILL BE WIPED.
//
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <stdint.h>
#include <stdio.h>

#if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#include <Windows.h>
#endif

#ifndef CBGEXPORT
#if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#define CBGEXPORT __declspec(dllexport)
#else
#define CBGEXPORT
#endif
#endif

#ifndef CBGSTDCALL
#if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#define CBGSTDCALL __stdcall
#else
#define CBGSTDCALL
#endif
#endif

#include "BaseObject.h"
#include "Common/Array.h"
#include "Common/Resource.h"
#include "Common/ResourceContainer.h"
#include "Common/Resources.h"
#include "Core.h"
#include "Graphics/BuiltinShader.h"
#include "Graphics/CommandList.h"
#include "Graphics/Font.h"
#include "Graphics/Graphics.h"
#include "Graphics/ImageFont.h"
#include "Graphics/RenderTexture.h"
#include "Graphics/Renderer/RenderedCamera.h"
#include "Graphics/Renderer/RenderedPolygon.h"
#include "Graphics/Renderer/RenderedSprite.h"
#include "Graphics/Renderer/RenderedText.h"
#include "Graphics/Renderer/Renderer.h"
#include "Graphics/Texture2D.h"
#include "IO/BaseFileReader.h"
#include "IO/File.h"
#include "IO/FileRoot.h"
#include "IO/PackFile.h"
#include "IO/PackFileReader.h"
#include "IO/StaticFile.h"
#include "IO/StreamFile.h"
#include "Input/ButtonState.h"
#include "Input/Joystick.h"
#include "Input/Keyboard.h"
#include "Input/Mouse.h"
#include "Logger/Log.h"
#include "Physics/Collider/CircleCollider.h"
#include "Physics/Collider/Collider.h"
#include "Physics/Collider/PolygonCollider.h"
#include "Physics/Collider/RectangleCollider.h"
#include "Sound/Sound.h"
#include "Sound/SoundMixer.h"
#include "Tool/Tool.h"
#include "Window/Window.h"

extern "C" {

CBGEXPORT void* CBGSTDCALL cbg_Configuration_Constructor_0() {
    return new Altseed2::Configuration();
}

CBGEXPORT bool CBGSTDCALL cbg_Configuration_GetIsFullscreen(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    bool cbg_ret = cbg_self_->GetIsFullscreen();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Configuration_SetIsFullscreen(void* cbg_self, bool value) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    bool cbg_arg0 = value;
    cbg_self_->SetIsFullscreen(cbg_arg0);
}

CBGEXPORT bool CBGSTDCALL cbg_Configuration_GetIsResizable(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    bool cbg_ret = cbg_self_->GetIsResizable();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Configuration_SetIsResizable(void* cbg_self, bool value) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    bool cbg_arg0 = value;
    cbg_self_->SetIsResizable(cbg_arg0);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Configuration_GetDeviceType(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    Altseed2::GraphicsDeviceType cbg_ret = cbg_self_->GetDeviceType();
    return (int32_t)cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Configuration_SetDeviceType(void* cbg_self, int32_t value) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    Altseed2::GraphicsDeviceType cbg_arg0 = (Altseed2::GraphicsDeviceType)value;
    cbg_self_->SetDeviceType(cbg_arg0);
}

CBGEXPORT bool CBGSTDCALL cbg_Configuration_GetWaitVSync(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    bool cbg_ret = cbg_self_->GetWaitVSync();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Configuration_SetWaitVSync(void* cbg_self, bool value) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    bool cbg_arg0 = value;
    cbg_self_->SetWaitVSync(cbg_arg0);
}

CBGEXPORT bool CBGSTDCALL cbg_Configuration_GetIsGraphicsOnly(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    bool cbg_ret = cbg_self_->GetIsGraphicsOnly();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Configuration_SetIsGraphicsOnly(void* cbg_self, bool value) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    bool cbg_arg0 = value;
    cbg_self_->SetIsGraphicsOnly(cbg_arg0);
}

CBGEXPORT bool CBGSTDCALL cbg_Configuration_GetConsoleLoggingEnabled(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    bool cbg_ret = cbg_self_->GetConsoleLoggingEnabled();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Configuration_SetConsoleLoggingEnabled(void* cbg_self, bool value) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    bool cbg_arg0 = value;
    cbg_self_->SetConsoleLoggingEnabled(cbg_arg0);
}

CBGEXPORT bool CBGSTDCALL cbg_Configuration_GetFileLoggingEnabled(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    bool cbg_ret = cbg_self_->GetFileLoggingEnabled();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Configuration_SetFileLoggingEnabled(void* cbg_self, bool value) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    bool cbg_arg0 = value;
    cbg_self_->SetFileLoggingEnabled(cbg_arg0);
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Configuration_GetLogFileName(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetLogFileName();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Configuration_SetLogFileName(void* cbg_self, const char16_t* value) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    const char16_t* cbg_arg0 = value;
    cbg_self_->SetLogFileName(cbg_arg0);
}

CBGEXPORT bool CBGSTDCALL cbg_Configuration_GetToolEnabled(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    bool cbg_ret = cbg_self_->GetToolEnabled();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Configuration_SetToolEnabled(void* cbg_self, bool value) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    bool cbg_arg0 = value;
    cbg_self_->SetToolEnabled(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Configuration_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Configuration*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT int32_t CBGSTDCALL cbg_Core_GetBaseObjectCount(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Core*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetBaseObjectCount();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Core_PrintAllBaseObjectName(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Core*)(cbg_self);

    cbg_self_->PrintAllBaseObjectName();
}

CBGEXPORT bool CBGSTDCALL cbg_Core_Initialize(const char16_t* title, int32_t width, int32_t height, void* config) {
    const char16_t* cbg_arg0 = title;
    int32_t cbg_arg1 = width;
    int32_t cbg_arg2 = height;
    std::shared_ptr<Altseed2::Configuration> cbg_arg3 = Altseed2::CreateAndAddSharedPtr<Altseed2::Configuration>((Altseed2::Configuration*)config);
    bool cbg_ret = Altseed2::Core::Initialize(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Core_DoEvent(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Core*)(cbg_self);

    bool cbg_ret = cbg_self_->DoEvent();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Core_Terminate() {
    Altseed2::Core::Terminate();
}

CBGEXPORT void* CBGSTDCALL cbg_Core_GetInstance() {
    std::shared_ptr<Altseed2::Core> cbg_ret = Altseed2::Core::GetInstance();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Core>(cbg_ret);
}

CBGEXPORT float CBGSTDCALL cbg_Core_GetDeltaSecond(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Core*)(cbg_self);

    float cbg_ret = cbg_self_->GetDeltaSecond();
    return cbg_ret;
}

CBGEXPORT float CBGSTDCALL cbg_Core_GetCurrentFPS(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Core*)(cbg_self);

    float cbg_ret = cbg_self_->GetCurrentFPS();
    return cbg_ret;
}

CBGEXPORT float CBGSTDCALL cbg_Core_GetTargetFPS(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Core*)(cbg_self);

    float cbg_ret = cbg_self_->GetTargetFPS();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Core_SetTargetFPS(void* cbg_self, float value) {
    auto cbg_self_ = (Altseed2::Core*)(cbg_self);

    float cbg_arg0 = value;
    cbg_self_->SetTargetFPS(cbg_arg0);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Core_GetFramerateMode(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Core*)(cbg_self);

    Altseed2::FramerateMode cbg_ret = cbg_self_->GetFramerateMode();
    return (int32_t)cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Core_SetFramerateMode(void* cbg_self, int32_t value) {
    auto cbg_self_ = (Altseed2::Core*)(cbg_self);

    Altseed2::FramerateMode cbg_arg0 = (Altseed2::FramerateMode)value;
    cbg_self_->SetFramerateMode(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Core_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Core*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void CBGSTDCALL cbg_Int8Array_Clear(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Int8Array*)(cbg_self);

    cbg_self_->Clear();
}

CBGEXPORT void CBGSTDCALL cbg_Int8Array_Resize(void* cbg_self, int32_t size) {
    auto cbg_self_ = (Altseed2::Int8Array*)(cbg_self);

    int32_t cbg_arg0 = size;
    cbg_self_->Resize(cbg_arg0);
}

CBGEXPORT void* CBGSTDCALL cbg_Int8Array_GetData(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Int8Array*)(cbg_self);

    void* cbg_ret = cbg_self_->GetData();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Int8Array_Assign(void* cbg_self, void* ptr, int32_t size) {
    auto cbg_self_ = (Altseed2::Int8Array*)(cbg_self);

    void* cbg_arg0 = ptr;
    int32_t cbg_arg1 = size;
    cbg_self_->Assign(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Int8Array_CopyTo(void* cbg_self, void* ptr) {
    auto cbg_self_ = (Altseed2::Int8Array*)(cbg_self);

    void* cbg_arg0 = ptr;
    cbg_self_->CopyTo(cbg_arg0);
}

CBGEXPORT int8_t CBGSTDCALL cbg_Int8Array_GetAt(void* cbg_self, int32_t index) {
    auto cbg_self_ = (Altseed2::Int8Array*)(cbg_self);

    int32_t cbg_arg0 = index;
    int8_t cbg_ret = cbg_self_->GetAt(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Int8Array_SetAt(void* cbg_self, int32_t index, int8_t value) {
    auto cbg_self_ = (Altseed2::Int8Array*)(cbg_self);

    int32_t cbg_arg0 = index;
    int8_t cbg_arg1 = value;
    cbg_self_->SetAt(cbg_arg0, cbg_arg1);
}

CBGEXPORT void* CBGSTDCALL cbg_Int8Array_Create(int32_t size) {
    int32_t cbg_arg0 = size;
    std::shared_ptr<Altseed2::Int8Array> cbg_ret = Altseed2::Int8Array::Create(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Int8Array>(cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Int8Array_GetCount(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Int8Array*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetCount();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Int8Array_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Int8Array*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void CBGSTDCALL cbg_Int32Array_Clear(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Int32Array*)(cbg_self);

    cbg_self_->Clear();
}

CBGEXPORT void CBGSTDCALL cbg_Int32Array_Resize(void* cbg_self, int32_t size) {
    auto cbg_self_ = (Altseed2::Int32Array*)(cbg_self);

    int32_t cbg_arg0 = size;
    cbg_self_->Resize(cbg_arg0);
}

CBGEXPORT void* CBGSTDCALL cbg_Int32Array_GetData(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Int32Array*)(cbg_self);

    void* cbg_ret = cbg_self_->GetData();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Int32Array_Assign(void* cbg_self, void* ptr, int32_t size) {
    auto cbg_self_ = (Altseed2::Int32Array*)(cbg_self);

    void* cbg_arg0 = ptr;
    int32_t cbg_arg1 = size;
    cbg_self_->Assign(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Int32Array_CopyTo(void* cbg_self, void* ptr) {
    auto cbg_self_ = (Altseed2::Int32Array*)(cbg_self);

    void* cbg_arg0 = ptr;
    cbg_self_->CopyTo(cbg_arg0);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Int32Array_GetAt(void* cbg_self, int32_t index) {
    auto cbg_self_ = (Altseed2::Int32Array*)(cbg_self);

    int32_t cbg_arg0 = index;
    int32_t cbg_ret = cbg_self_->GetAt(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Int32Array_SetAt(void* cbg_self, int32_t index, int32_t value) {
    auto cbg_self_ = (Altseed2::Int32Array*)(cbg_self);

    int32_t cbg_arg0 = index;
    int32_t cbg_arg1 = value;
    cbg_self_->SetAt(cbg_arg0, cbg_arg1);
}

CBGEXPORT void* CBGSTDCALL cbg_Int32Array_Create(int32_t size) {
    int32_t cbg_arg0 = size;
    std::shared_ptr<Altseed2::Int32Array> cbg_ret = Altseed2::Int32Array::Create(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Int32Array>(cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Int32Array_GetCount(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Int32Array*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetCount();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Int32Array_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Int32Array*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void CBGSTDCALL cbg_VertexArray_Clear(void* cbg_self) {
    auto cbg_self_ = (Altseed2::VertexArray*)(cbg_self);

    cbg_self_->Clear();
}

CBGEXPORT void CBGSTDCALL cbg_VertexArray_Resize(void* cbg_self, int32_t size) {
    auto cbg_self_ = (Altseed2::VertexArray*)(cbg_self);

    int32_t cbg_arg0 = size;
    cbg_self_->Resize(cbg_arg0);
}

CBGEXPORT void* CBGSTDCALL cbg_VertexArray_GetData(void* cbg_self) {
    auto cbg_self_ = (Altseed2::VertexArray*)(cbg_self);

    void* cbg_ret = cbg_self_->GetData();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_VertexArray_Assign(void* cbg_self, void* ptr, int32_t size) {
    auto cbg_self_ = (Altseed2::VertexArray*)(cbg_self);

    void* cbg_arg0 = ptr;
    int32_t cbg_arg1 = size;
    cbg_self_->Assign(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_VertexArray_CopyTo(void* cbg_self, void* ptr) {
    auto cbg_self_ = (Altseed2::VertexArray*)(cbg_self);

    void* cbg_arg0 = ptr;
    cbg_self_->CopyTo(cbg_arg0);
}

CBGEXPORT Altseed2::BatchVertex CBGSTDCALL cbg_VertexArray_GetAt(void* cbg_self, int32_t index) {
    auto cbg_self_ = (Altseed2::VertexArray*)(cbg_self);

    int32_t cbg_arg0 = index;
    Altseed2::BatchVertex cbg_ret = cbg_self_->GetAt(cbg_arg0);
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_VertexArray_SetAt(void* cbg_self, int32_t index, Altseed2::BatchVertex value) {
    auto cbg_self_ = (Altseed2::VertexArray*)(cbg_self);

    int32_t cbg_arg0 = index;
    Altseed2::BatchVertex cbg_arg1 = value;
    cbg_self_->SetAt(cbg_arg0, cbg_arg1);
}

CBGEXPORT void* CBGSTDCALL cbg_VertexArray_Create(int32_t size) {
    int32_t cbg_arg0 = size;
    std::shared_ptr<Altseed2::VertexArray> cbg_ret = Altseed2::VertexArray::Create(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::VertexArray>(cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_VertexArray_GetCount(void* cbg_self) {
    auto cbg_self_ = (Altseed2::VertexArray*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetCount();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_VertexArray_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::VertexArray*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void CBGSTDCALL cbg_FloatArray_Clear(void* cbg_self) {
    auto cbg_self_ = (Altseed2::FloatArray*)(cbg_self);

    cbg_self_->Clear();
}

CBGEXPORT void CBGSTDCALL cbg_FloatArray_Resize(void* cbg_self, int32_t size) {
    auto cbg_self_ = (Altseed2::FloatArray*)(cbg_self);

    int32_t cbg_arg0 = size;
    cbg_self_->Resize(cbg_arg0);
}

CBGEXPORT void* CBGSTDCALL cbg_FloatArray_GetData(void* cbg_self) {
    auto cbg_self_ = (Altseed2::FloatArray*)(cbg_self);

    void* cbg_ret = cbg_self_->GetData();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_FloatArray_Assign(void* cbg_self, void* ptr, int32_t size) {
    auto cbg_self_ = (Altseed2::FloatArray*)(cbg_self);

    void* cbg_arg0 = ptr;
    int32_t cbg_arg1 = size;
    cbg_self_->Assign(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_FloatArray_CopyTo(void* cbg_self, void* ptr) {
    auto cbg_self_ = (Altseed2::FloatArray*)(cbg_self);

    void* cbg_arg0 = ptr;
    cbg_self_->CopyTo(cbg_arg0);
}

CBGEXPORT float CBGSTDCALL cbg_FloatArray_GetAt(void* cbg_self, int32_t index) {
    auto cbg_self_ = (Altseed2::FloatArray*)(cbg_self);

    int32_t cbg_arg0 = index;
    float cbg_ret = cbg_self_->GetAt(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_FloatArray_SetAt(void* cbg_self, int32_t index, float value) {
    auto cbg_self_ = (Altseed2::FloatArray*)(cbg_self);

    int32_t cbg_arg0 = index;
    float cbg_arg1 = value;
    cbg_self_->SetAt(cbg_arg0, cbg_arg1);
}

CBGEXPORT void* CBGSTDCALL cbg_FloatArray_Create(int32_t size) {
    int32_t cbg_arg0 = size;
    std::shared_ptr<Altseed2::FloatArray> cbg_ret = Altseed2::FloatArray::Create(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::FloatArray>(cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_FloatArray_GetCount(void* cbg_self) {
    auto cbg_self_ = (Altseed2::FloatArray*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetCount();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_FloatArray_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::FloatArray*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void CBGSTDCALL cbg_Vector2FArray_Clear(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Vector2FArray*)(cbg_self);

    cbg_self_->Clear();
}

CBGEXPORT void CBGSTDCALL cbg_Vector2FArray_Resize(void* cbg_self, int32_t size) {
    auto cbg_self_ = (Altseed2::Vector2FArray*)(cbg_self);

    int32_t cbg_arg0 = size;
    cbg_self_->Resize(cbg_arg0);
}

CBGEXPORT void* CBGSTDCALL cbg_Vector2FArray_GetData(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Vector2FArray*)(cbg_self);

    void* cbg_ret = cbg_self_->GetData();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Vector2FArray_Assign(void* cbg_self, void* ptr, int32_t size) {
    auto cbg_self_ = (Altseed2::Vector2FArray*)(cbg_self);

    void* cbg_arg0 = ptr;
    int32_t cbg_arg1 = size;
    cbg_self_->Assign(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Vector2FArray_CopyTo(void* cbg_self, void* ptr) {
    auto cbg_self_ = (Altseed2::Vector2FArray*)(cbg_self);

    void* cbg_arg0 = ptr;
    cbg_self_->CopyTo(cbg_arg0);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Vector2FArray_GetAt(void* cbg_self, int32_t index) {
    auto cbg_self_ = (Altseed2::Vector2FArray*)(cbg_self);

    int32_t cbg_arg0 = index;
    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetAt(cbg_arg0);
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Vector2FArray_SetAt(void* cbg_self, int32_t index, Altseed2::Vector2F_C value) {
    auto cbg_self_ = (Altseed2::Vector2FArray*)(cbg_self);

    int32_t cbg_arg0 = index;
    Altseed2::Vector2F_C cbg_arg1 = value;
    cbg_self_->SetAt(cbg_arg0, cbg_arg1);
}

CBGEXPORT void* CBGSTDCALL cbg_Vector2FArray_Create(int32_t size) {
    int32_t cbg_arg0 = size;
    std::shared_ptr<Altseed2::Vector2FArray> cbg_ret = Altseed2::Vector2FArray::Create(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Vector2FArray>(cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Vector2FArray_GetCount(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Vector2FArray*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetCount();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Vector2FArray_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Vector2FArray*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_Resources_GetInstance() {
    std::shared_ptr<Altseed2::Resources> cbg_ret = Altseed2::Resources::GetInstance();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Resources>(cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Resources_GetResourcesCount(void* cbg_self, int32_t type) {
    auto cbg_self_ = (Altseed2::Resources*)(cbg_self);

    Altseed2::ResourceType cbg_arg0 = (Altseed2::ResourceType)type;
    int32_t cbg_ret = cbg_self_->GetResourcesCount(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Resources_Clear(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Resources*)(cbg_self);

    cbg_self_->Clear();
}

CBGEXPORT void CBGSTDCALL cbg_Resources_Reload(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Resources*)(cbg_self);

    cbg_self_->Reload();
}

CBGEXPORT void CBGSTDCALL cbg_Resources_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Resources*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_Cursor_Create(const char16_t* path, Altseed2::Vector2I_C hot) {
    const char16_t* cbg_arg0 = path;
    Altseed2::Vector2I_C cbg_arg1 = hot;
    std::shared_ptr<Altseed2::Cursor> cbg_ret = Altseed2::Cursor::Create(cbg_arg0, cbg_arg1);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Cursor>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Cursor_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Cursor*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT int32_t CBGSTDCALL cbg_Keyboard_GetKeyState(void* cbg_self, int32_t key) {
    auto cbg_self_ = (Altseed2::Keyboard*)(cbg_self);

    Altseed2::Key cbg_arg0 = (Altseed2::Key)key;
    Altseed2::ButtonState cbg_ret = cbg_self_->GetKeyState(cbg_arg0);
    return (int32_t)cbg_ret;
}

CBGEXPORT void* CBGSTDCALL cbg_Keyboard_GetInstance() {
    std::shared_ptr<Altseed2::Keyboard> cbg_ret = Altseed2::Keyboard::GetInstance();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Keyboard>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Keyboard_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Keyboard*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_Mouse_GetInstance() {
    std::shared_ptr<Altseed2::Mouse> cbg_ret = Altseed2::Mouse::GetInstance();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Mouse>(cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Mouse_GetMouseButtonState(void* cbg_self, int32_t button) {
    auto cbg_self_ = (Altseed2::Mouse*)(cbg_self);

    Altseed2::MouseButton cbg_arg0 = (Altseed2::MouseButton)button;
    Altseed2::ButtonState cbg_ret = cbg_self_->GetMouseButtonState(cbg_arg0);
    return (int32_t)cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Mouse_SetCursorImage(void* cbg_self, void* cursor) {
    auto cbg_self_ = (Altseed2::Mouse*)(cbg_self);

    std::shared_ptr<Altseed2::Cursor> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::Cursor>((Altseed2::Cursor*)cursor);
    cbg_self_->SetCursorImage(cbg_arg0);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Mouse_GetPosition(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Mouse*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetPosition();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Mouse_SetPosition(void* cbg_self, Altseed2::Vector2F_C value) {
    auto cbg_self_ = (Altseed2::Mouse*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = value;
    cbg_self_->SetPosition(cbg_arg0);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Mouse_GetCursorMode(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Mouse*)(cbg_self);

    Altseed2::CursorMode cbg_ret = cbg_self_->GetCursorMode();
    return (int32_t)cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Mouse_SetCursorMode(void* cbg_self, int32_t value) {
    auto cbg_self_ = (Altseed2::Mouse*)(cbg_self);

    Altseed2::CursorMode cbg_arg0 = (Altseed2::CursorMode)value;
    cbg_self_->SetCursorMode(cbg_arg0);
}

CBGEXPORT float CBGSTDCALL cbg_Mouse_GetWheel(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Mouse*)(cbg_self);

    float cbg_ret = cbg_self_->GetWheel();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Mouse_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Mouse*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT bool CBGSTDCALL cbg_JoystickInfo_IsJoystickType(void* cbg_self, int32_t type) {
    auto cbg_self_ = (Altseed2::JoystickInfo*)(cbg_self);

    Altseed2::JoystickType cbg_arg0 = (Altseed2::JoystickType)type;
    bool cbg_ret = cbg_self_->IsJoystickType(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_JoystickInfo_GetName(void* cbg_self) {
    auto cbg_self_ = (Altseed2::JoystickInfo*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetName();
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_JoystickInfo_GetButtonCount(void* cbg_self) {
    auto cbg_self_ = (Altseed2::JoystickInfo*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetButtonCount();
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_JoystickInfo_GetAxisCount(void* cbg_self) {
    auto cbg_self_ = (Altseed2::JoystickInfo*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetAxisCount();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_JoystickInfo_GetIsGamepad(void* cbg_self) {
    auto cbg_self_ = (Altseed2::JoystickInfo*)(cbg_self);

    bool cbg_ret = cbg_self_->GetIsGamepad();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_JoystickInfo_GetGamepadName(void* cbg_self) {
    auto cbg_self_ = (Altseed2::JoystickInfo*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetGamepadName();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_JoystickInfo_GetGUID(void* cbg_self) {
    auto cbg_self_ = (Altseed2::JoystickInfo*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetGUID();
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_JoystickInfo_GetBustype(void* cbg_self) {
    auto cbg_self_ = (Altseed2::JoystickInfo*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetBustype();
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_JoystickInfo_GetVendor(void* cbg_self) {
    auto cbg_self_ = (Altseed2::JoystickInfo*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetVendor();
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_JoystickInfo_GetProduct(void* cbg_self) {
    auto cbg_self_ = (Altseed2::JoystickInfo*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetProduct();
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_JoystickInfo_GetVersion(void* cbg_self) {
    auto cbg_self_ = (Altseed2::JoystickInfo*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetVersion();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_JoystickInfo_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::JoystickInfo*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_Joystick_GetInstance() {
    std::shared_ptr<Altseed2::Joystick> cbg_ret = Altseed2::Joystick::GetInstance();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Joystick>(cbg_ret);
}

CBGEXPORT bool CBGSTDCALL cbg_Joystick_IsPresent(void* cbg_self, int32_t joystickIndex) {
    auto cbg_self_ = (Altseed2::Joystick*)(cbg_self);

    int32_t cbg_arg0 = joystickIndex;
    bool cbg_ret = cbg_self_->IsPresent(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void* CBGSTDCALL cbg_Joystick_GetJoystickInfo(void* cbg_self, int32_t joystickIndex) {
    auto cbg_self_ = (Altseed2::Joystick*)(cbg_self);

    int32_t cbg_arg0 = joystickIndex;
    std::shared_ptr<Altseed2::JoystickInfo> cbg_ret = cbg_self_->GetJoystickInfo(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::JoystickInfo>(cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Joystick_GetButtonStateByIndex(void* cbg_self, int32_t joystickIndex, int32_t buttonIndex) {
    auto cbg_self_ = (Altseed2::Joystick*)(cbg_self);

    int32_t cbg_arg0 = joystickIndex;
    int32_t cbg_arg1 = buttonIndex;
    Altseed2::ButtonState cbg_ret = cbg_self_->GetButtonStateByIndex(cbg_arg0, cbg_arg1);
    return (int32_t)cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_Joystick_GetButtonStateByType(void* cbg_self, int32_t joystickIndex, int32_t type) {
    auto cbg_self_ = (Altseed2::Joystick*)(cbg_self);

    int32_t cbg_arg0 = joystickIndex;
    Altseed2::JoystickButton cbg_arg1 = (Altseed2::JoystickButton)type;
    Altseed2::ButtonState cbg_ret = cbg_self_->GetButtonStateByType(cbg_arg0, cbg_arg1);
    return (int32_t)cbg_ret;
}

CBGEXPORT float CBGSTDCALL cbg_Joystick_GetAxisStateByIndex(void* cbg_self, int32_t joystickIndex, int32_t axisIndex) {
    auto cbg_self_ = (Altseed2::Joystick*)(cbg_self);

    int32_t cbg_arg0 = joystickIndex;
    int32_t cbg_arg1 = axisIndex;
    float cbg_ret = cbg_self_->GetAxisStateByIndex(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT float CBGSTDCALL cbg_Joystick_GetAxisStateByType(void* cbg_self, int32_t joystickIndex, int32_t type) {
    auto cbg_self_ = (Altseed2::Joystick*)(cbg_self);

    int32_t cbg_arg0 = joystickIndex;
    Altseed2::JoystickAxis cbg_arg1 = (Altseed2::JoystickAxis)type;
    float cbg_ret = cbg_self_->GetAxisStateByType(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_Joystick_GetConnectedJoystickCount(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Joystick*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetConnectedJoystickCount();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Joystick_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Joystick*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_Graphics_GetInstance() {
    std::shared_ptr<Altseed2::Graphics> cbg_ret = Altseed2::Graphics::GetInstance();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Graphics>(cbg_ret);
}

CBGEXPORT bool CBGSTDCALL cbg_Graphics_BeginFrame(void* cbg_self, Altseed2::RenderPassParameter_C renderPassParmeter) {
    auto cbg_self_ = (Altseed2::Graphics*)(cbg_self);

    Altseed2::RenderPassParameter_C cbg_arg0 = renderPassParmeter;
    bool cbg_ret = cbg_self_->BeginFrame(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Graphics_EndFrame(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Graphics*)(cbg_self);

    bool cbg_ret = cbg_self_->EndFrame();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Graphics_DoEvents(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Graphics*)(cbg_self);

    bool cbg_ret = cbg_self_->DoEvents();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Graphics_SaveScreenshot(void* cbg_self, const char16_t* path) {
    auto cbg_self_ = (Altseed2::Graphics*)(cbg_self);

    const char16_t* cbg_arg0 = path;
    cbg_self_->SaveScreenshot(cbg_arg0);
}

CBGEXPORT void* CBGSTDCALL cbg_Graphics_GetCommandList(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Graphics*)(cbg_self);

    std::shared_ptr<Altseed2::CommandList> cbg_ret = cbg_self_->GetCommandList();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::CommandList>(cbg_ret);
}

CBGEXPORT void* CBGSTDCALL cbg_Graphics_GetBuiltinShader(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Graphics*)(cbg_self);

    std::shared_ptr<Altseed2::BuiltinShader> cbg_ret = cbg_self_->GetBuiltinShader();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::BuiltinShader>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Graphics_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Graphics*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT bool CBGSTDCALL cbg_TextureBase_Save(void* cbg_self, const char16_t* path) {
    auto cbg_self_ = (Altseed2::TextureBase*)(cbg_self);

    const char16_t* cbg_arg0 = path;
    bool cbg_ret = cbg_self_->Save(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT Altseed2::Vector2I_C CBGSTDCALL cbg_TextureBase_GetSize(void* cbg_self) {
    auto cbg_self_ = (Altseed2::TextureBase*)(cbg_self);

    Altseed2::Vector2I_C cbg_ret = cbg_self_->GetSize();
    return (cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_TextureBase_GetWrapMode(void* cbg_self) {
    auto cbg_self_ = (Altseed2::TextureBase*)(cbg_self);

    Altseed2::TextureWrapMode cbg_ret = cbg_self_->GetWrapMode();
    return (int32_t)cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_TextureBase_SetWrapMode(void* cbg_self, int32_t value) {
    auto cbg_self_ = (Altseed2::TextureBase*)(cbg_self);

    Altseed2::TextureWrapMode cbg_arg0 = (Altseed2::TextureWrapMode)value;
    cbg_self_->SetWrapMode(cbg_arg0);
}

CBGEXPORT int32_t CBGSTDCALL cbg_TextureBase_GetFilterType(void* cbg_self) {
    auto cbg_self_ = (Altseed2::TextureBase*)(cbg_self);

    Altseed2::TextureFilterType cbg_ret = cbg_self_->GetFilterType();
    return (int32_t)cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_TextureBase_SetFilterType(void* cbg_self, int32_t value) {
    auto cbg_self_ = (Altseed2::TextureBase*)(cbg_self);

    Altseed2::TextureFilterType cbg_arg0 = (Altseed2::TextureFilterType)value;
    cbg_self_->SetFilterType(cbg_arg0);
}

CBGEXPORT int32_t CBGSTDCALL cbg_TextureBase_GetFormat(void* cbg_self) {
    auto cbg_self_ = (Altseed2::TextureBase*)(cbg_self);

    Altseed2::TextureFormatType cbg_ret = cbg_self_->GetFormat();
    return (int32_t)cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_TextureBase_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::TextureBase*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_Texture2D_Load(const char16_t* path) {
    const char16_t* cbg_arg0 = path;
    std::shared_ptr<Altseed2::Texture2D> cbg_ret = Altseed2::Texture2D::Load(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Texture2D>(cbg_ret);
}

CBGEXPORT bool CBGSTDCALL cbg_Texture2D_Reload(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Texture2D*)(cbg_self);

    bool cbg_ret = cbg_self_->Reload();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Texture2D_GetPath(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Texture2D*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetPath();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Texture2D_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Texture2D*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_RenderTexture_Create(Altseed2::Vector2I_C size, int32_t format) {
    Altseed2::Vector2I_C cbg_arg0 = size;
    Altseed2::TextureFormatType cbg_arg1 = (Altseed2::TextureFormatType)format;
    std::shared_ptr<Altseed2::RenderTexture> cbg_ret = Altseed2::RenderTexture::Create(cbg_arg0, cbg_arg1);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::RenderTexture>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderTexture_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderTexture*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_Material_Create() {
    std::shared_ptr<Altseed2::Material> cbg_ret = Altseed2::Material::Create();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Material>(cbg_ret);
}

CBGEXPORT Altseed2::Vector4F_C CBGSTDCALL cbg_Material_GetVector4F(void* cbg_self, const char16_t* key) {
    auto cbg_self_ = (Altseed2::Material*)(cbg_self);

    const char16_t* cbg_arg0 = key;
    Altseed2::Vector4F_C cbg_ret = cbg_self_->GetVector4F(cbg_arg0);
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Material_SetVector4F(void* cbg_self, const char16_t* key, Altseed2::Vector4F_C value) {
    auto cbg_self_ = (Altseed2::Material*)(cbg_self);

    const char16_t* cbg_arg0 = key;
    Altseed2::Vector4F_C cbg_arg1 = value;
    cbg_self_->SetVector4F(cbg_arg0, cbg_arg1);
}

CBGEXPORT Altseed2::Matrix44F_C CBGSTDCALL cbg_Material_GetMatrix44F(void* cbg_self, const char16_t* key) {
    auto cbg_self_ = (Altseed2::Material*)(cbg_self);

    const char16_t* cbg_arg0 = key;
    Altseed2::Matrix44F_C cbg_ret = cbg_self_->GetMatrix44F(cbg_arg0);
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Material_SetMatrix44F(void* cbg_self, const char16_t* key, Altseed2::Matrix44F_C value) {
    auto cbg_self_ = (Altseed2::Material*)(cbg_self);

    const char16_t* cbg_arg0 = key;
    Altseed2::Matrix44F_C cbg_arg1 = value;
    cbg_self_->SetMatrix44F(cbg_arg0, cbg_arg1);
}

CBGEXPORT void* CBGSTDCALL cbg_Material_GetTexture(void* cbg_self, const char16_t* key) {
    auto cbg_self_ = (Altseed2::Material*)(cbg_self);

    const char16_t* cbg_arg0 = key;
    std::shared_ptr<Altseed2::TextureBase> cbg_ret = cbg_self_->GetTexture(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::TextureBase>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Material_SetTexture(void* cbg_self, const char16_t* key, void* value) {
    auto cbg_self_ = (Altseed2::Material*)(cbg_self);

    const char16_t* cbg_arg0 = key;
    std::shared_ptr<Altseed2::TextureBase> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::TextureBase>((Altseed2::TextureBase*)value);
    cbg_self_->SetTexture(cbg_arg0, cbg_arg1);
}

CBGEXPORT void* CBGSTDCALL cbg_Material_GetShader(void* cbg_self, int32_t shaderStage) {
    auto cbg_self_ = (Altseed2::Material*)(cbg_self);

    Altseed2::ShaderStageType cbg_arg0 = (Altseed2::ShaderStageType)shaderStage;
    std::shared_ptr<Altseed2::Shader> cbg_ret = cbg_self_->GetShader(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Shader>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Material_SetShader(void* cbg_self, void* shader) {
    auto cbg_self_ = (Altseed2::Material*)(cbg_self);

    std::shared_ptr<Altseed2::Shader> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::Shader>((Altseed2::Shader*)shader);
    cbg_self_->SetShader(cbg_arg0);
}

CBGEXPORT Altseed2::AlphaBlend_C CBGSTDCALL cbg_Material_GetAlphaBlend(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Material*)(cbg_self);

    Altseed2::AlphaBlend_C cbg_ret = cbg_self_->GetAlphaBlend();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Material_SetAlphaBlend(void* cbg_self, Altseed2::AlphaBlend_C value) {
    auto cbg_self_ = (Altseed2::Material*)(cbg_self);

    Altseed2::AlphaBlend_C cbg_arg0 = value;
    cbg_self_->SetAlphaBlend(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Material_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Material*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_Renderer_GetInstance() {
    std::shared_ptr<Altseed2::Renderer> cbg_ret = Altseed2::Renderer::GetInstance();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Renderer>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Renderer_DrawSprite(void* cbg_self, void* sprite) {
    auto cbg_self_ = (Altseed2::Renderer*)(cbg_self);

    std::shared_ptr<Altseed2::RenderedSprite> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::RenderedSprite>((Altseed2::RenderedSprite*)sprite);
    cbg_self_->DrawSprite(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Renderer_DrawText(void* cbg_self, void* text) {
    auto cbg_self_ = (Altseed2::Renderer*)(cbg_self);

    std::shared_ptr<Altseed2::RenderedText> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::RenderedText>((Altseed2::RenderedText*)text);
    cbg_self_->DrawText(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Renderer_DrawPolygon(void* cbg_self, void* polygon) {
    auto cbg_self_ = (Altseed2::Renderer*)(cbg_self);

    std::shared_ptr<Altseed2::RenderedPolygon> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::RenderedPolygon>((Altseed2::RenderedPolygon*)polygon);
    cbg_self_->DrawPolygon(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Renderer_Render(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Renderer*)(cbg_self);

    cbg_self_->Render();
}

CBGEXPORT void CBGSTDCALL cbg_Renderer_SetCamera(void* cbg_self, void* camera) {
    auto cbg_self_ = (Altseed2::Renderer*)(cbg_self);

    std::shared_ptr<Altseed2::RenderedCamera> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::RenderedCamera>((Altseed2::RenderedCamera*)camera);
    cbg_self_->SetCamera(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Renderer_ResetCamera(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Renderer*)(cbg_self);

    cbg_self_->ResetCamera();
}

CBGEXPORT void CBGSTDCALL cbg_Renderer_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Renderer*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_CommandList_GetScreenTexture(void* cbg_self) {
    auto cbg_self_ = (Altseed2::CommandList*)(cbg_self);

    std::shared_ptr<Altseed2::RenderTexture> cbg_ret = cbg_self_->GetScreenTexture();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::RenderTexture>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_CommandList_SetRenderTarget(void* cbg_self, void* target, Altseed2::RenderPassParameter_C renderPassParameter) {
    auto cbg_self_ = (Altseed2::CommandList*)(cbg_self);

    std::shared_ptr<Altseed2::RenderTexture> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::RenderTexture>((Altseed2::RenderTexture*)target);
    Altseed2::RenderPassParameter_C cbg_arg1 = renderPassParameter;
    cbg_self_->SetRenderTarget(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_CommandList_RenderToRenderTexture(void* cbg_self, void* material, void* target, Altseed2::RenderPassParameter_C renderPassparameter) {
    auto cbg_self_ = (Altseed2::CommandList*)(cbg_self);

    std::shared_ptr<Altseed2::Material> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::Material>((Altseed2::Material*)material);
    std::shared_ptr<Altseed2::RenderTexture> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::RenderTexture>((Altseed2::RenderTexture*)target);
    Altseed2::RenderPassParameter_C cbg_arg2 = renderPassparameter;
    cbg_self_->RenderToRenderTexture(cbg_arg0, cbg_arg1, cbg_arg2);
}

CBGEXPORT void CBGSTDCALL cbg_CommandList_RenderToRenderTarget(void* cbg_self, void* material) {
    auto cbg_self_ = (Altseed2::CommandList*)(cbg_self);

    std::shared_ptr<Altseed2::Material> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::Material>((Altseed2::Material*)material);
    cbg_self_->RenderToRenderTarget(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_CommandList_CopyTexture(void* cbg_self, void* src, void* dst) {
    auto cbg_self_ = (Altseed2::CommandList*)(cbg_self);

    std::shared_ptr<Altseed2::RenderTexture> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::RenderTexture>((Altseed2::RenderTexture*)src);
    std::shared_ptr<Altseed2::RenderTexture> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::RenderTexture>((Altseed2::RenderTexture*)dst);
    cbg_self_->CopyTexture(cbg_arg0, cbg_arg1);
}

CBGEXPORT int32_t CBGSTDCALL cbg_CommandList_GetScreenTextureFormat(void* cbg_self) {
    auto cbg_self_ = (Altseed2::CommandList*)(cbg_self);

    Altseed2::TextureFormatType cbg_ret = cbg_self_->GetScreenTextureFormat();
    return (int32_t)cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_CommandList_SetScreenTextureFormat(void* cbg_self, int32_t value) {
    auto cbg_self_ = (Altseed2::CommandList*)(cbg_self);

    Altseed2::TextureFormatType cbg_arg0 = (Altseed2::TextureFormatType)value;
    cbg_self_->SetScreenTextureFormat(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_CommandList_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::CommandList*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT Altseed2::Matrix44F_C CBGSTDCALL cbg_Rendered_GetTransform(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Rendered*)(cbg_self);

    Altseed2::Matrix44F_C cbg_ret = cbg_self_->GetTransform();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Rendered_SetTransform(void* cbg_self, Altseed2::Matrix44F_C value) {
    auto cbg_self_ = (Altseed2::Rendered*)(cbg_self);

    Altseed2::Matrix44F_C cbg_arg0 = value;
    cbg_self_->SetTransform(cbg_arg0);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Rendered_GetId(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Rendered*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetId();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Rendered_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Rendered*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_RenderedSprite_Create() {
    std::shared_ptr<Altseed2::RenderedSprite> cbg_ret = Altseed2::RenderedSprite::Create();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::RenderedSprite>(cbg_ret);
}

CBGEXPORT void* CBGSTDCALL cbg_RenderedSprite_GetTexture(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedSprite*)(cbg_self);

    std::shared_ptr<Altseed2::TextureBase> cbg_ret = cbg_self_->GetTexture();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::TextureBase>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedSprite_SetTexture(void* cbg_self, void* value) {
    auto cbg_self_ = (Altseed2::RenderedSprite*)(cbg_self);

    std::shared_ptr<Altseed2::TextureBase> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::TextureBase>((Altseed2::TextureBase*)value);
    cbg_self_->SetTexture(cbg_arg0);
}

CBGEXPORT Altseed2::RectF_C CBGSTDCALL cbg_RenderedSprite_GetSrc(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedSprite*)(cbg_self);

    Altseed2::RectF_C cbg_ret = cbg_self_->GetSrc();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedSprite_SetSrc(void* cbg_self, Altseed2::RectF_C value) {
    auto cbg_self_ = (Altseed2::RenderedSprite*)(cbg_self);

    Altseed2::RectF_C cbg_arg0 = value;
    cbg_self_->SetSrc(cbg_arg0);
}

CBGEXPORT void* CBGSTDCALL cbg_RenderedSprite_GetMaterial(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedSprite*)(cbg_self);

    std::shared_ptr<Altseed2::Material> cbg_ret = cbg_self_->GetMaterial();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Material>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedSprite_SetMaterial(void* cbg_self, void* value) {
    auto cbg_self_ = (Altseed2::RenderedSprite*)(cbg_self);

    std::shared_ptr<Altseed2::Material> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::Material>((Altseed2::Material*)value);
    cbg_self_->SetMaterial(cbg_arg0);
}

CBGEXPORT Altseed2::Color_C CBGSTDCALL cbg_RenderedSprite_GetColor(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedSprite*)(cbg_self);

    Altseed2::Color_C cbg_ret = cbg_self_->GetColor();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedSprite_SetColor(void* cbg_self, Altseed2::Color_C value) {
    auto cbg_self_ = (Altseed2::RenderedSprite*)(cbg_self);

    Altseed2::Color_C cbg_arg0 = value;
    cbg_self_->SetColor(cbg_arg0);
}

CBGEXPORT Altseed2::AlphaBlend_C CBGSTDCALL cbg_RenderedSprite_GetAlphaBlend(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedSprite*)(cbg_self);

    Altseed2::AlphaBlend_C cbg_ret = cbg_self_->GetAlphaBlend();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedSprite_SetAlphaBlend(void* cbg_self, Altseed2::AlphaBlend_C value) {
    auto cbg_self_ = (Altseed2::RenderedSprite*)(cbg_self);

    Altseed2::AlphaBlend_C cbg_arg0 = value;
    cbg_self_->SetAlphaBlend(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedSprite_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedSprite*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_RenderedText_Create() {
    std::shared_ptr<Altseed2::RenderedText> cbg_ret = Altseed2::RenderedText::Create();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::RenderedText>(cbg_ret);
}

CBGEXPORT void* CBGSTDCALL cbg_RenderedText_GetMaterialGlyph(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    std::shared_ptr<Altseed2::Material> cbg_ret = cbg_self_->GetMaterialGlyph();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Material>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedText_SetMaterialGlyph(void* cbg_self, void* value) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    std::shared_ptr<Altseed2::Material> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::Material>((Altseed2::Material*)value);
    cbg_self_->SetMaterialGlyph(cbg_arg0);
}

CBGEXPORT void* CBGSTDCALL cbg_RenderedText_GetMaterialImage(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    std::shared_ptr<Altseed2::Material> cbg_ret = cbg_self_->GetMaterialImage();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Material>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedText_SetMaterialImage(void* cbg_self, void* value) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    std::shared_ptr<Altseed2::Material> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::Material>((Altseed2::Material*)value);
    cbg_self_->SetMaterialImage(cbg_arg0);
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_RenderedText_GetText(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetText();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_RenderedText_SetText(void* cbg_self, const char16_t* value) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    const char16_t* cbg_arg0 = value;
    cbg_self_->SetText(cbg_arg0);
}

CBGEXPORT void* CBGSTDCALL cbg_RenderedText_GetFont(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    std::shared_ptr<Altseed2::Font> cbg_ret = cbg_self_->GetFont();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Font>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedText_SetFont(void* cbg_self, void* value) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    std::shared_ptr<Altseed2::Font> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::Font>((Altseed2::Font*)value);
    cbg_self_->SetFont(cbg_arg0);
}

CBGEXPORT float CBGSTDCALL cbg_RenderedText_GetWeight(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    float cbg_ret = cbg_self_->GetWeight();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_RenderedText_SetWeight(void* cbg_self, float value) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    float cbg_arg0 = value;
    cbg_self_->SetWeight(cbg_arg0);
}

CBGEXPORT bool CBGSTDCALL cbg_RenderedText_GetIsEnableKerning(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    bool cbg_ret = cbg_self_->GetIsEnableKerning();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_RenderedText_SetIsEnableKerning(void* cbg_self, bool value) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    bool cbg_arg0 = value;
    cbg_self_->SetIsEnableKerning(cbg_arg0);
}

CBGEXPORT int32_t CBGSTDCALL cbg_RenderedText_GetWritingDirection(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    Altseed2::WritingDirection cbg_ret = cbg_self_->GetWritingDirection();
    return (int32_t)cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_RenderedText_SetWritingDirection(void* cbg_self, int32_t value) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    Altseed2::WritingDirection cbg_arg0 = (Altseed2::WritingDirection)value;
    cbg_self_->SetWritingDirection(cbg_arg0);
}

CBGEXPORT float CBGSTDCALL cbg_RenderedText_GetCharacterSpace(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    float cbg_ret = cbg_self_->GetCharacterSpace();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_RenderedText_SetCharacterSpace(void* cbg_self, float value) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    float cbg_arg0 = value;
    cbg_self_->SetCharacterSpace(cbg_arg0);
}

CBGEXPORT float CBGSTDCALL cbg_RenderedText_GetLineGap(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    float cbg_ret = cbg_self_->GetLineGap();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_RenderedText_SetLineGap(void* cbg_self, float value) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    float cbg_arg0 = value;
    cbg_self_->SetLineGap(cbg_arg0);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_RenderedText_GetTextureSize(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetTextureSize();
    return (cbg_ret);
}

CBGEXPORT Altseed2::Color_C CBGSTDCALL cbg_RenderedText_GetColor(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    Altseed2::Color_C cbg_ret = cbg_self_->GetColor();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedText_SetColor(void* cbg_self, Altseed2::Color_C value) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    Altseed2::Color_C cbg_arg0 = value;
    cbg_self_->SetColor(cbg_arg0);
}

CBGEXPORT Altseed2::AlphaBlend_C CBGSTDCALL cbg_RenderedText_GetAlphaBlend(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    Altseed2::AlphaBlend_C cbg_ret = cbg_self_->GetAlphaBlend();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedText_SetAlphaBlend(void* cbg_self, Altseed2::AlphaBlend_C value) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    Altseed2::AlphaBlend_C cbg_arg0 = value;
    cbg_self_->SetAlphaBlend(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedText_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedText*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_RenderedPolygon_Create() {
    std::shared_ptr<Altseed2::RenderedPolygon> cbg_ret = Altseed2::RenderedPolygon::Create();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::RenderedPolygon>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedPolygon_CreateVertexesByVector2F(void* cbg_self, void* vertexes) {
    auto cbg_self_ = (Altseed2::RenderedPolygon*)(cbg_self);

    std::shared_ptr<Altseed2::Vector2FArray> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::Vector2FArray>((Altseed2::Vector2FArray*)vertexes);
    cbg_self_->CreateVertexesByVector2F(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedPolygon_OverwriteVertexesColor(void* cbg_self, Altseed2::Color_C color) {
    auto cbg_self_ = (Altseed2::RenderedPolygon*)(cbg_self);

    Altseed2::Color_C cbg_arg0 = color;
    cbg_self_->OverwriteVertexesColor(cbg_arg0);
}

CBGEXPORT void* CBGSTDCALL cbg_RenderedPolygon_GetVertexes(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedPolygon*)(cbg_self);

    std::shared_ptr<Altseed2::VertexArray> cbg_ret = cbg_self_->GetVertexes();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::VertexArray>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedPolygon_SetVertexes(void* cbg_self, void* value) {
    auto cbg_self_ = (Altseed2::RenderedPolygon*)(cbg_self);

    std::shared_ptr<Altseed2::VertexArray> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::VertexArray>((Altseed2::VertexArray*)value);
    cbg_self_->SetVertexes(cbg_arg0);
}

CBGEXPORT void* CBGSTDCALL cbg_RenderedPolygon_GetTexture(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedPolygon*)(cbg_self);

    std::shared_ptr<Altseed2::TextureBase> cbg_ret = cbg_self_->GetTexture();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::TextureBase>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedPolygon_SetTexture(void* cbg_self, void* value) {
    auto cbg_self_ = (Altseed2::RenderedPolygon*)(cbg_self);

    std::shared_ptr<Altseed2::TextureBase> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::TextureBase>((Altseed2::TextureBase*)value);
    cbg_self_->SetTexture(cbg_arg0);
}

CBGEXPORT Altseed2::RectF_C CBGSTDCALL cbg_RenderedPolygon_GetSrc(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedPolygon*)(cbg_self);

    Altseed2::RectF_C cbg_ret = cbg_self_->GetSrc();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedPolygon_SetSrc(void* cbg_self, Altseed2::RectF_C value) {
    auto cbg_self_ = (Altseed2::RenderedPolygon*)(cbg_self);

    Altseed2::RectF_C cbg_arg0 = value;
    cbg_self_->SetSrc(cbg_arg0);
}

CBGEXPORT void* CBGSTDCALL cbg_RenderedPolygon_GetMaterial(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedPolygon*)(cbg_self);

    std::shared_ptr<Altseed2::Material> cbg_ret = cbg_self_->GetMaterial();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Material>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedPolygon_SetMaterial(void* cbg_self, void* value) {
    auto cbg_self_ = (Altseed2::RenderedPolygon*)(cbg_self);

    std::shared_ptr<Altseed2::Material> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::Material>((Altseed2::Material*)value);
    cbg_self_->SetMaterial(cbg_arg0);
}

CBGEXPORT Altseed2::AlphaBlend_C CBGSTDCALL cbg_RenderedPolygon_GetAlphaBlend(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedPolygon*)(cbg_self);

    Altseed2::AlphaBlend_C cbg_ret = cbg_self_->GetAlphaBlend();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedPolygon_SetAlphaBlend(void* cbg_self, Altseed2::AlphaBlend_C value) {
    auto cbg_self_ = (Altseed2::RenderedPolygon*)(cbg_self);

    Altseed2::AlphaBlend_C cbg_arg0 = value;
    cbg_self_->SetAlphaBlend(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedPolygon_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedPolygon*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_RenderedCamera_Create() {
    std::shared_ptr<Altseed2::RenderedCamera> cbg_ret = Altseed2::RenderedCamera::Create();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::RenderedCamera>(cbg_ret);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_RenderedCamera_GetCenterOffset(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedCamera*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetCenterOffset();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedCamera_SetCenterOffset(void* cbg_self, Altseed2::Vector2F_C value) {
    auto cbg_self_ = (Altseed2::RenderedCamera*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = value;
    cbg_self_->SetCenterOffset(cbg_arg0);
}

CBGEXPORT void* CBGSTDCALL cbg_RenderedCamera_GetTargetTexture(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedCamera*)(cbg_self);

    std::shared_ptr<Altseed2::RenderTexture> cbg_ret = cbg_self_->GetTargetTexture();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::RenderTexture>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedCamera_SetTargetTexture(void* cbg_self, void* value) {
    auto cbg_self_ = (Altseed2::RenderedCamera*)(cbg_self);

    std::shared_ptr<Altseed2::RenderTexture> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::RenderTexture>((Altseed2::RenderTexture*)value);
    cbg_self_->SetTargetTexture(cbg_arg0);
}

CBGEXPORT Altseed2::RenderPassParameter_C CBGSTDCALL cbg_RenderedCamera_GetRenderPassParameter(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedCamera*)(cbg_self);

    Altseed2::RenderPassParameter_C cbg_ret = cbg_self_->GetRenderPassParameter();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedCamera_SetRenderPassParameter(void* cbg_self, Altseed2::RenderPassParameter_C value) {
    auto cbg_self_ = (Altseed2::RenderedCamera*)(cbg_self);

    Altseed2::RenderPassParameter_C cbg_arg0 = value;
    cbg_self_->SetRenderPassParameter(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_RenderedCamera_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RenderedCamera*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_BuiltinShader_Create(void* cbg_self, int32_t type) {
    auto cbg_self_ = (Altseed2::BuiltinShader*)(cbg_self);

    Altseed2::BuiltinShaderType cbg_arg0 = (Altseed2::BuiltinShaderType)type;
    std::shared_ptr<Altseed2::Shader> cbg_ret = cbg_self_->Create(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Shader>(cbg_ret);
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_BuiltinShader_GetDownsampleShader(void* cbg_self) {
    auto cbg_self_ = (Altseed2::BuiltinShader*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetDownsampleShader();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_BuiltinShader_GetSepiaShader(void* cbg_self) {
    auto cbg_self_ = (Altseed2::BuiltinShader*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetSepiaShader();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_BuiltinShader_GetGrayScaleShader(void* cbg_self) {
    auto cbg_self_ = (Altseed2::BuiltinShader*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetGrayScaleShader();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_BuiltinShader_GetGaussianBlurShader(void* cbg_self) {
    auto cbg_self_ = (Altseed2::BuiltinShader*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetGaussianBlurShader();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_BuiltinShader_GetHighLuminanceShader(void* cbg_self) {
    auto cbg_self_ = (Altseed2::BuiltinShader*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetHighLuminanceShader();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_BuiltinShader_GetLightBloomShader(void* cbg_self) {
    auto cbg_self_ = (Altseed2::BuiltinShader*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetLightBloomShader();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_BuiltinShader_GetTextureMixShader(void* cbg_self) {
    auto cbg_self_ = (Altseed2::BuiltinShader*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetTextureMixShader();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_BuiltinShader_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::BuiltinShader*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_Shader_Create(const char16_t* name, const char16_t* code, int32_t shaderStage) {
    const char16_t* cbg_arg0 = name;
    const char16_t* cbg_arg1 = code;
    Altseed2::ShaderStageType cbg_arg2 = (Altseed2::ShaderStageType)shaderStage;
    std::shared_ptr<Altseed2::Shader> cbg_ret = Altseed2::Shader::Create(cbg_arg0, cbg_arg1, cbg_arg2);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Shader>(cbg_ret);
}

CBGEXPORT void* CBGSTDCALL cbg_Shader_CreateFromFile(const char16_t* name, const char16_t* path, int32_t shaderStage) {
    const char16_t* cbg_arg0 = name;
    const char16_t* cbg_arg1 = path;
    Altseed2::ShaderStageType cbg_arg2 = (Altseed2::ShaderStageType)shaderStage;
    std::shared_ptr<Altseed2::Shader> cbg_ret = Altseed2::Shader::CreateFromFile(cbg_arg0, cbg_arg1, cbg_arg2);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Shader>(cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Shader_GetStageType(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Shader*)(cbg_self);

    Altseed2::ShaderStageType cbg_ret = cbg_self_->GetStageType();
    return (int32_t)cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Shader_GetCode(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Shader*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetCode();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Shader_GetName(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Shader*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetName();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Shader_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Shader*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT Altseed2::Vector2I_C CBGSTDCALL cbg_Glyph_GetTextureSize(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Glyph*)(cbg_self);

    Altseed2::Vector2I_C cbg_ret = cbg_self_->GetTextureSize();
    return (cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Glyph_GetTextureIndex(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Glyph*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetTextureIndex();
    return cbg_ret;
}

CBGEXPORT Altseed2::Vector2I_C CBGSTDCALL cbg_Glyph_GetPosition(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Glyph*)(cbg_self);

    Altseed2::Vector2I_C cbg_ret = cbg_self_->GetPosition();
    return (cbg_ret);
}

CBGEXPORT Altseed2::Vector2I_C CBGSTDCALL cbg_Glyph_GetSize(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Glyph*)(cbg_self);

    Altseed2::Vector2I_C cbg_ret = cbg_self_->GetSize();
    return (cbg_ret);
}

CBGEXPORT Altseed2::Vector2I_C CBGSTDCALL cbg_Glyph_GetOffset(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Glyph*)(cbg_self);

    Altseed2::Vector2I_C cbg_ret = cbg_self_->GetOffset();
    return (cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Glyph_GetGlyphWidth(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Glyph*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetGlyphWidth();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Glyph_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Glyph*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_Font_LoadDynamicFont(const char16_t* path, int32_t size) {
    const char16_t* cbg_arg0 = path;
    int32_t cbg_arg1 = size;
    std::shared_ptr<Altseed2::Font> cbg_ret = Altseed2::Font::LoadDynamicFont(cbg_arg0, cbg_arg1);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Font>(cbg_ret);
}

CBGEXPORT void* CBGSTDCALL cbg_Font_LoadStaticFont(const char16_t* path) {
    const char16_t* cbg_arg0 = path;
    std::shared_ptr<Altseed2::Font> cbg_ret = Altseed2::Font::LoadStaticFont(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Font>(cbg_ret);
}

CBGEXPORT bool CBGSTDCALL cbg_Font_GenerateFontFile(const char16_t* dynamicFontPath, const char16_t* staticFontPath, int32_t size, const char16_t* characters) {
    const char16_t* cbg_arg0 = dynamicFontPath;
    const char16_t* cbg_arg1 = staticFontPath;
    int32_t cbg_arg2 = size;
    const char16_t* cbg_arg3 = characters;
    bool cbg_ret = Altseed2::Font::GenerateFontFile(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3);
    return cbg_ret;
}

CBGEXPORT void* CBGSTDCALL cbg_Font_GetGlyph(void* cbg_self, int32_t character) {
    auto cbg_self_ = (Altseed2::Font*)(cbg_self);

    int32_t cbg_arg0 = character;
    std::shared_ptr<Altseed2::Glyph> cbg_ret = cbg_self_->GetGlyph(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Glyph>(cbg_ret);
}

CBGEXPORT void* CBGSTDCALL cbg_Font_GetFontTexture(void* cbg_self, int32_t index) {
    auto cbg_self_ = (Altseed2::Font*)(cbg_self);

    int32_t cbg_arg0 = index;
    std::shared_ptr<Altseed2::Texture2D> cbg_ret = cbg_self_->GetFontTexture(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Texture2D>(cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Font_GetKerning(void* cbg_self, int32_t c1, int32_t c2) {
    auto cbg_self_ = (Altseed2::Font*)(cbg_self);

    int32_t cbg_arg0 = c1;
    int32_t cbg_arg1 = c2;
    int32_t cbg_ret = cbg_self_->GetKerning(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT void* CBGSTDCALL cbg_Font_CreateImageFont(void* baseFont) {
    std::shared_ptr<Altseed2::Font> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::Font>((Altseed2::Font*)baseFont);
    std::shared_ptr<Altseed2::Font> cbg_ret = Altseed2::Font::CreateImageFont(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Font>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Font_AddImageGlyph(void* cbg_self, int32_t character, void* texture) {
    auto cbg_self_ = (Altseed2::Font*)(cbg_self);

    int32_t cbg_arg0 = character;
    std::shared_ptr<Altseed2::Texture2D> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::Texture2D>((Altseed2::Texture2D*)texture);
    cbg_self_->AddImageGlyph(cbg_arg0, cbg_arg1);
}

CBGEXPORT void* CBGSTDCALL cbg_Font_GetImageGlyph(void* cbg_self, int32_t character) {
    auto cbg_self_ = (Altseed2::Font*)(cbg_self);

    int32_t cbg_arg0 = character;
    std::shared_ptr<Altseed2::Texture2D> cbg_ret = cbg_self_->GetImageGlyph(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Texture2D>(cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Font_GetSize(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Font*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetSize();
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_Font_GetAscent(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Font*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetAscent();
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_Font_GetDescent(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Font*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetDescent();
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_Font_GetLineGap(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Font*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetLineGap();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Font_GetIsStaticFont(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Font*)(cbg_self);

    bool cbg_ret = cbg_self_->GetIsStaticFont();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Font_GetPath(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Font*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetPath();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Font_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Font*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_CullingSystem_GetInstance() {
    std::shared_ptr<Altseed2::CullingSystem> cbg_ret = Altseed2::CullingSystem::GetInstance();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::CullingSystem>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_CullingSystem_UpdateAABB(void* cbg_self) {
    auto cbg_self_ = (Altseed2::CullingSystem*)(cbg_self);

    cbg_self_->UpdateAABB();
}

CBGEXPORT int32_t CBGSTDCALL cbg_CullingSystem_GetDrawingRenderedCount(void* cbg_self) {
    auto cbg_self_ = (Altseed2::CullingSystem*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetDrawingRenderedCount();
    return cbg_ret;
}

CBGEXPORT void* CBGSTDCALL cbg_CullingSystem_GetDrawingRenderedIds(void* cbg_self) {
    auto cbg_self_ = (Altseed2::CullingSystem*)(cbg_self);

    std::shared_ptr<Altseed2::Int32Array> cbg_ret = cbg_self_->GetDrawingRenderedIds();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Int32Array>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_CullingSystem_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::CullingSystem*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_Tool_GetInstance() {
    std::shared_ptr<Altseed2::Tool> cbg_ret = Altseed2::Tool::GetInstance();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Tool>(cbg_ret);
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_AddFontFromFileTTF(void* cbg_self, const char16_t* path, float sizePixels, int32_t ranges) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = path;
    float cbg_arg1 = sizePixels;
    Altseed2::ToolGlyphRange cbg_arg2 = (Altseed2::ToolGlyphRange)ranges;
    bool cbg_ret = cbg_self_->AddFontFromFileTTF(cbg_arg0, cbg_arg1, cbg_arg2);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_Begin(void* cbg_self, const char16_t* name, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = name;
    Altseed2::ToolWindowFlags cbg_arg1 = (Altseed2::ToolWindowFlags)flags;
    bool cbg_ret = cbg_self_->Begin(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_End(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->End();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_NewFrame(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->NewFrame();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_Render(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->Render();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_Dummy(void* cbg_self, Altseed2::Vector2F_C size) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = size;
    cbg_self_->Dummy(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_Text(void* cbg_self, const char16_t* text) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = text;
    cbg_self_->Text(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_TextUnformatted(void* cbg_self, const char16_t* text) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = text;
    cbg_self_->TextUnformatted(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_TextWrapped(void* cbg_self, const char16_t* text) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = text;
    cbg_self_->TextWrapped(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_TextColored(void* cbg_self, Altseed2::Color_C color, const char16_t* text) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Color_C cbg_arg0 = color;
    const char16_t* cbg_arg1 = text;
    cbg_self_->TextColored(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_TextDisabled(void* cbg_self, const char16_t* text) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = text;
    cbg_self_->TextDisabled(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_BulletText(void* cbg_self, const char16_t* text) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = text;
    cbg_self_->BulletText(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_LabelText(void* cbg_self, const char16_t* label, const char16_t* text) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    const char16_t* cbg_arg1 = text;
    cbg_self_->LabelText(cbg_arg0, cbg_arg1);
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_CollapsingHeader(void* cbg_self, const char16_t* label, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    Altseed2::ToolTreeNodeFlags cbg_arg1 = (Altseed2::ToolTreeNodeFlags)flags;
    bool cbg_ret = cbg_self_->CollapsingHeader(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_TreeNode(void* cbg_self, const char16_t* label) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    bool cbg_ret = cbg_self_->TreeNode(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_TreeNodeEx(void* cbg_self, const char16_t* label, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    Altseed2::ToolTreeNodeFlags cbg_arg1 = (Altseed2::ToolTreeNodeFlags)flags;
    bool cbg_ret = cbg_self_->TreeNodeEx(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_TreePop(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->TreePop();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetNextItemOpen(void* cbg_self, bool isOpen, int32_t cond) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_arg0 = isOpen;
    Altseed2::ToolCond cbg_arg1 = (Altseed2::ToolCond)cond;
    cbg_self_->SetNextItemOpen(cbg_arg0, cbg_arg1);
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_Button(void* cbg_self, const char16_t* label, Altseed2::Vector2F_C size) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    Altseed2::Vector2F_C cbg_arg1 = size;
    bool cbg_ret = cbg_self_->Button(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_CheckBox(void* cbg_self, const char16_t* label, bool* v) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    bool* cbg_arg1 = v;
    bool cbg_ret = cbg_self_->CheckBox(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_RadioButton(void* cbg_self, const char16_t* label, bool active) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    bool cbg_arg1 = active;
    bool cbg_ret = cbg_self_->RadioButton(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_RadioButton_2(void* cbg_self, const char16_t* label, int32_t* v, int32_t v_button) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    int32_t* cbg_arg1 = v;
    int32_t cbg_arg2 = v_button;
    bool cbg_ret = cbg_self_->RadioButton_2(cbg_arg0, cbg_arg1, cbg_arg2);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_ArrowButton(void* cbg_self, const char16_t* label, int32_t dir) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    Altseed2::ToolDir cbg_arg1 = (Altseed2::ToolDir)dir;
    bool cbg_ret = cbg_self_->ArrowButton(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_InvisibleButton(void* cbg_self, const char16_t* label, Altseed2::Vector2F_C size) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    Altseed2::Vector2F_C cbg_arg1 = size;
    bool cbg_ret = cbg_self_->InvisibleButton(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_ListBox(void* cbg_self, const char16_t* label, int32_t* current, const char16_t* items, int32_t popupMaxHeightInItems) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    int32_t* cbg_arg1 = current;
    const char16_t* cbg_arg2 = items;
    int32_t cbg_arg3 = popupMaxHeightInItems;
    bool cbg_ret = cbg_self_->ListBox(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_Selectable(void* cbg_self, const char16_t* label, bool* selected, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    bool* cbg_arg1 = selected;
    Altseed2::ToolSelectableFlags cbg_arg2 = (Altseed2::ToolSelectableFlags)flags;
    bool cbg_ret = cbg_self_->Selectable(cbg_arg0, cbg_arg1, cbg_arg2);
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Tool_InputText(void* cbg_self, const char16_t* label, const char16_t* input, int32_t maxLength, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    const char16_t* cbg_arg1 = input;
    int32_t cbg_arg2 = maxLength;
    Altseed2::ToolInputTextFlags cbg_arg3 = (Altseed2::ToolInputTextFlags)flags;
    const char16_t* cbg_ret = cbg_self_->InputText(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3);
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Tool_InputTextWithHint(void* cbg_self, const char16_t* label, const char16_t* hit, const char16_t* input, int32_t maxLength, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    const char16_t* cbg_arg1 = hit;
    const char16_t* cbg_arg2 = input;
    int32_t cbg_arg3 = maxLength;
    Altseed2::ToolInputTextFlags cbg_arg4 = (Altseed2::ToolInputTextFlags)flags;
    const char16_t* cbg_ret = cbg_self_->InputTextWithHint(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4);
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Tool_InputTextMultiline(void* cbg_self, const char16_t* label, const char16_t* input, int32_t maxLength, Altseed2::Vector2F_C size, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    const char16_t* cbg_arg1 = input;
    int32_t cbg_arg2 = maxLength;
    Altseed2::Vector2F_C cbg_arg3 = size;
    Altseed2::ToolInputTextFlags cbg_arg4 = (Altseed2::ToolInputTextFlags)flags;
    const char16_t* cbg_ret = cbg_self_->InputTextMultiline(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_InputInt(void* cbg_self, const char16_t* label, int32_t* value) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    int32_t* cbg_arg1 = value;
    bool cbg_ret = cbg_self_->InputInt(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_InputInt2(void* cbg_self, const char16_t* label, void* array) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    std::shared_ptr<Altseed2::Int32Array> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::Int32Array>((Altseed2::Int32Array*)array);
    bool cbg_ret = cbg_self_->InputInt2(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_InputInt3(void* cbg_self, const char16_t* label, void* array) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    std::shared_ptr<Altseed2::Int32Array> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::Int32Array>((Altseed2::Int32Array*)array);
    bool cbg_ret = cbg_self_->InputInt3(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_InputInt4(void* cbg_self, const char16_t* label, void* array) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    std::shared_ptr<Altseed2::Int32Array> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::Int32Array>((Altseed2::Int32Array*)array);
    bool cbg_ret = cbg_self_->InputInt4(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_InputFloat(void* cbg_self, const char16_t* label, float* value) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    float* cbg_arg1 = value;
    bool cbg_ret = cbg_self_->InputFloat(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_InputFloat2(void* cbg_self, const char16_t* label, void* array) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    std::shared_ptr<Altseed2::FloatArray> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::FloatArray>((Altseed2::FloatArray*)array);
    bool cbg_ret = cbg_self_->InputFloat2(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_InputFloat3(void* cbg_self, const char16_t* label, void* array) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    std::shared_ptr<Altseed2::FloatArray> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::FloatArray>((Altseed2::FloatArray*)array);
    bool cbg_ret = cbg_self_->InputFloat3(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_InputFloat4(void* cbg_self, const char16_t* label, void* array) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    std::shared_ptr<Altseed2::FloatArray> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::FloatArray>((Altseed2::FloatArray*)array);
    bool cbg_ret = cbg_self_->InputFloat4(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_SliderInt(void* cbg_self, const char16_t* label, int32_t* value, float speed, int32_t valueMin, int32_t valueMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    int32_t* cbg_arg1 = value;
    float cbg_arg2 = speed;
    int32_t cbg_arg3 = valueMin;
    int32_t cbg_arg4 = valueMax;
    bool cbg_ret = cbg_self_->SliderInt(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_SliderInt2(void* cbg_self, const char16_t* label, void* array, float speed, int32_t valueMin, int32_t valueMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    std::shared_ptr<Altseed2::Int32Array> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::Int32Array>((Altseed2::Int32Array*)array);
    float cbg_arg2 = speed;
    int32_t cbg_arg3 = valueMin;
    int32_t cbg_arg4 = valueMax;
    bool cbg_ret = cbg_self_->SliderInt2(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_SliderInt3(void* cbg_self, const char16_t* label, void* array, float speed, int32_t valueMin, int32_t valueMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    std::shared_ptr<Altseed2::Int32Array> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::Int32Array>((Altseed2::Int32Array*)array);
    float cbg_arg2 = speed;
    int32_t cbg_arg3 = valueMin;
    int32_t cbg_arg4 = valueMax;
    bool cbg_ret = cbg_self_->SliderInt3(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_SliderInt4(void* cbg_self, const char16_t* label, void* array, float speed, int32_t valueMin, int32_t valueMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    std::shared_ptr<Altseed2::Int32Array> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::Int32Array>((Altseed2::Int32Array*)array);
    float cbg_arg2 = speed;
    int32_t cbg_arg3 = valueMin;
    int32_t cbg_arg4 = valueMax;
    bool cbg_ret = cbg_self_->SliderInt4(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_SliderFloat(void* cbg_self, const char16_t* label, float* value, float speed, float valueMin, float valueMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    float* cbg_arg1 = value;
    float cbg_arg2 = speed;
    float cbg_arg3 = valueMin;
    float cbg_arg4 = valueMax;
    bool cbg_ret = cbg_self_->SliderFloat(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_SliderFloat2(void* cbg_self, const char16_t* label, void* array, float speed, float valueMin, float valueMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    std::shared_ptr<Altseed2::FloatArray> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::FloatArray>((Altseed2::FloatArray*)array);
    float cbg_arg2 = speed;
    float cbg_arg3 = valueMin;
    float cbg_arg4 = valueMax;
    bool cbg_ret = cbg_self_->SliderFloat2(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_SliderFloat3(void* cbg_self, const char16_t* label, void* array, float speed, float valueMin, float valueMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    std::shared_ptr<Altseed2::FloatArray> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::FloatArray>((Altseed2::FloatArray*)array);
    float cbg_arg2 = speed;
    float cbg_arg3 = valueMin;
    float cbg_arg4 = valueMax;
    bool cbg_ret = cbg_self_->SliderFloat3(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_SliderFloat4(void* cbg_self, const char16_t* label, void* array, float speed, float valueMin, float valueMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    std::shared_ptr<Altseed2::FloatArray> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::FloatArray>((Altseed2::FloatArray*)array);
    float cbg_arg2 = speed;
    float cbg_arg3 = valueMin;
    float cbg_arg4 = valueMax;
    bool cbg_ret = cbg_self_->SliderFloat4(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_SliderAngle(void* cbg_self, const char16_t* label, float* angle) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    float* cbg_arg1 = angle;
    bool cbg_ret = cbg_self_->SliderAngle(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_VSliderInt(void* cbg_self, const char16_t* label, Altseed2::Vector2F_C size, int32_t* value, int32_t valueMin, int32_t valueMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    Altseed2::Vector2F_C cbg_arg1 = size;
    int32_t* cbg_arg2 = value;
    int32_t cbg_arg3 = valueMin;
    int32_t cbg_arg4 = valueMax;
    bool cbg_ret = cbg_self_->VSliderInt(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_VSliderFloat(void* cbg_self, const char16_t* label, Altseed2::Vector2F_C size, float* value, float valueMin, float valueMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    Altseed2::Vector2F_C cbg_arg1 = size;
    float* cbg_arg2 = value;
    float cbg_arg3 = valueMin;
    float cbg_arg4 = valueMax;
    bool cbg_ret = cbg_self_->VSliderFloat(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_DragInt(void* cbg_self, const char16_t* label, int32_t* value, float speed, int32_t valueMin, int32_t valueMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    int32_t* cbg_arg1 = value;
    float cbg_arg2 = speed;
    int32_t cbg_arg3 = valueMin;
    int32_t cbg_arg4 = valueMax;
    bool cbg_ret = cbg_self_->DragInt(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_DragFloat(void* cbg_self, const char16_t* label, float* value, float speed, float valueMin, float valueMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    float* cbg_arg1 = value;
    float cbg_arg2 = speed;
    float cbg_arg3 = valueMin;
    float cbg_arg4 = valueMax;
    bool cbg_ret = cbg_self_->DragFloat(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_DragIntRange2(void* cbg_self, const char16_t* label, int32_t* currentMin, int32_t* currentMax, float speed, int32_t valueMin, int32_t valueMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    int32_t* cbg_arg1 = currentMin;
    int32_t* cbg_arg2 = currentMax;
    float cbg_arg3 = speed;
    int32_t cbg_arg4 = valueMin;
    int32_t cbg_arg5 = valueMax;
    bool cbg_ret = cbg_self_->DragIntRange2(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4, cbg_arg5);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_DragFloatRange2(void* cbg_self, const char16_t* label, float* currentMin, float* currentMax, float speed, float valueMin, float valueMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    float* cbg_arg1 = currentMin;
    float* cbg_arg2 = currentMax;
    float cbg_arg3 = speed;
    float cbg_arg4 = valueMin;
    float cbg_arg5 = valueMax;
    bool cbg_ret = cbg_self_->DragFloatRange2(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4, cbg_arg5);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_ColorEdit3(void* cbg_self, const char16_t* label, Altseed2::Color_C* color, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    Altseed2::Color* cbg_arg1 = (Altseed2::Color*)color;
    Altseed2::ToolColorEditFlags cbg_arg2 = (Altseed2::ToolColorEditFlags)flags;
    bool cbg_ret = cbg_self_->ColorEdit3(cbg_arg0, cbg_arg1, cbg_arg2);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_ColorEdit4(void* cbg_self, const char16_t* label, Altseed2::Color_C* color, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    Altseed2::Color* cbg_arg1 = (Altseed2::Color*)color;
    Altseed2::ToolColorEditFlags cbg_arg2 = (Altseed2::ToolColorEditFlags)flags;
    bool cbg_ret = cbg_self_->ColorEdit4(cbg_arg0, cbg_arg1, cbg_arg2);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_OpenPopup(void* cbg_self, const char16_t* label) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    cbg_self_->OpenPopup(cbg_arg0);
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_BeginPopup(void* cbg_self, const char16_t* label) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    bool cbg_ret = cbg_self_->BeginPopup(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_BeginPopupModal(void* cbg_self, const char16_t* label) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    bool cbg_ret = cbg_self_->BeginPopupModal(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_EndPopup(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->EndPopup();
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_BeginChild(void* cbg_self, const char16_t* label, Altseed2::Vector2F_C size, bool border, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    Altseed2::Vector2F_C cbg_arg1 = size;
    bool cbg_arg2 = border;
    Altseed2::ToolWindowFlags cbg_arg3 = (Altseed2::ToolWindowFlags)flags;
    bool cbg_ret = cbg_self_->BeginChild(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_EndChild(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->EndChild();
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_BeginMenuBar(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->BeginMenuBar();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_EndMenuBar(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->EndMenuBar();
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_BeginMenu(void* cbg_self, const char16_t* label, bool enabled) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    bool cbg_arg1 = enabled;
    bool cbg_ret = cbg_self_->BeginMenu(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_EndMenu(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->EndMenu();
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_MenuItem(void* cbg_self, const char16_t* label, const char16_t* shortcut, bool selected, bool enabled) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    const char16_t* cbg_arg1 = shortcut;
    bool cbg_arg2 = selected;
    bool cbg_arg3 = enabled;
    bool cbg_ret = cbg_self_->MenuItem(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_BeginTabBar(void* cbg_self, const char16_t* label, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    Altseed2::ToolTabBarFlags cbg_arg1 = (Altseed2::ToolTabBarFlags)flags;
    bool cbg_ret = cbg_self_->BeginTabBar(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_EndTabBar(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->EndTabBar();
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_BeginTabItem(void* cbg_self, const char16_t* label) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    bool cbg_ret = cbg_self_->BeginTabItem(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_EndTabItem(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->EndTabItem();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_Indent(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->Indent();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_Unindent(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->Unindent();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_Separator(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->Separator();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetTooltip(void* cbg_self, const char16_t* text) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = text;
    cbg_self_->SetTooltip(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_BeginTooltip(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->BeginTooltip();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_EndTooltip(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->EndTooltip();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_NewLine(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->NewLine();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SameLine(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->SameLine();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PushTextWrapPos(void* cbg_self, float wrapLocalPosX) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_arg0 = wrapLocalPosX;
    cbg_self_->PushTextWrapPos(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PopTextWrapPos(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->PopTextWrapPos();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PushItemWidth(void* cbg_self, float width) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_arg0 = width;
    cbg_self_->PushItemWidth(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PopItemWidth(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->PopItemWidth();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PushButtonRepeat(void* cbg_self, bool repeat) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_arg0 = repeat;
    cbg_self_->PushButtonRepeat(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PopButtonRepeat(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->PopButtonRepeat();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_Columns(void* cbg_self, int32_t count, bool border) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_arg0 = count;
    bool cbg_arg1 = border;
    cbg_self_->Columns(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_NextColumn(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->NextColumn();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PushID(void* cbg_self, int32_t id) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_arg0 = id;
    cbg_self_->PushID(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PopID(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->PopID();
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsItemActive(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsItemActive();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsItemHovered(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsItemHovered();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetScrollHere(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->SetScrollHere();
}

CBGEXPORT float CBGSTDCALL cbg_Tool_GetTextLineHeight(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_ret = cbg_self_->GetTextLineHeight();
    return cbg_ret;
}

CBGEXPORT float CBGSTDCALL cbg_Tool_GetFontSize(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_ret = cbg_self_->GetFontSize();
    return cbg_ret;
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Tool_GetWindowSize(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetWindowSize();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetWindowSize(void* cbg_self, Altseed2::Vector2F_C size) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = size;
    cbg_self_->SetWindowSize(cbg_arg0);
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsMousePosValid(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsMousePosValid();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsMouseDragging(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsMouseDragging();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsMouseDoubleClicked(void* cbg_self, int32_t button) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_arg0 = button;
    bool cbg_ret = cbg_self_->IsMouseDoubleClicked(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Tool_GetMouseDragDelta(void* cbg_self, int32_t button) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_arg0 = button;
    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetMouseDragDelta(cbg_arg0);
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_ResetMouseDragDelta(void* cbg_self, int32_t button) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_arg0 = button;
    cbg_self_->ResetMouseDragDelta(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetNextWindowContentSize(void* cbg_self, Altseed2::Vector2F_C size) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = size;
    cbg_self_->SetNextWindowContentSize(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetNextWindowSize(void* cbg_self, Altseed2::Vector2F_C size, int32_t cond) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = size;
    Altseed2::ToolCond cbg_arg1 = (Altseed2::ToolCond)cond;
    cbg_self_->SetNextWindowSize(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetNextWindowPos(void* cbg_self, Altseed2::Vector2F_C pos, int32_t cond) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = pos;
    Altseed2::ToolCond cbg_arg1 = (Altseed2::ToolCond)cond;
    cbg_self_->SetNextWindowPos(cbg_arg0, cbg_arg1);
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsWindowAppearing(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsWindowAppearing();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsWindowCollapsed(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsWindowCollapsed();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsWindowFocused(void* cbg_self, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::ToolFocused cbg_arg0 = (Altseed2::ToolFocused)flags;
    bool cbg_ret = cbg_self_->IsWindowFocused(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsWindowHovered(void* cbg_self, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::ToolFocused cbg_arg0 = (Altseed2::ToolFocused)flags;
    bool cbg_ret = cbg_self_->IsWindowHovered(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Tool_GetWindowPos(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetWindowPos();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetNextWindowCollapsed(void* cbg_self, bool collapsed, int32_t cond) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_arg0 = collapsed;
    Altseed2::ToolCond cbg_arg1 = (Altseed2::ToolCond)cond;
    cbg_self_->SetNextWindowCollapsed(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetNextWindowFocus(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->SetNextWindowFocus();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetNextWindowBgAlpha(void* cbg_self, float alpha) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_arg0 = alpha;
    cbg_self_->SetNextWindowBgAlpha(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetWindowPosWithCond(void* cbg_self, Altseed2::Vector2F_C pos, int32_t cond) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = pos;
    Altseed2::ToolCond cbg_arg1 = (Altseed2::ToolCond)cond;
    cbg_self_->SetWindowPosWithCond(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetWindowSizeWithCond(void* cbg_self, Altseed2::Vector2F_C pos, int32_t cond) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = pos;
    Altseed2::ToolCond cbg_arg1 = (Altseed2::ToolCond)cond;
    cbg_self_->SetWindowSizeWithCond(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetWindowCollapsedWithCond(void* cbg_self, bool collapsed, int32_t cond) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_arg0 = collapsed;
    Altseed2::ToolCond cbg_arg1 = (Altseed2::ToolCond)cond;
    cbg_self_->SetWindowCollapsedWithCond(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetWindowFocus(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->SetWindowFocus();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetWindowFontScale(void* cbg_self, float scale) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_arg0 = scale;
    cbg_self_->SetWindowFontScale(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetWindowPosByName(void* cbg_self, const char16_t* name, Altseed2::Vector2F_C pos, int32_t cond) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = name;
    Altseed2::Vector2F_C cbg_arg1 = pos;
    Altseed2::ToolCond cbg_arg2 = (Altseed2::ToolCond)cond;
    cbg_self_->SetWindowPosByName(cbg_arg0, cbg_arg1, cbg_arg2);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetWindowSizeByName(void* cbg_self, const char16_t* name, Altseed2::Vector2F_C pos, int32_t cond) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = name;
    Altseed2::Vector2F_C cbg_arg1 = pos;
    Altseed2::ToolCond cbg_arg2 = (Altseed2::ToolCond)cond;
    cbg_self_->SetWindowSizeByName(cbg_arg0, cbg_arg1, cbg_arg2);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetWindowCollapsedByName(void* cbg_self, const char16_t* name, bool collapsed, int32_t cond) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = name;
    bool cbg_arg1 = collapsed;
    Altseed2::ToolCond cbg_arg2 = (Altseed2::ToolCond)cond;
    cbg_self_->SetWindowCollapsedByName(cbg_arg0, cbg_arg1, cbg_arg2);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetWindowFocusByName(void* cbg_self, const char16_t* name) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = name;
    cbg_self_->SetWindowFocusByName(cbg_arg0);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Tool_GetContentRegionMax(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetContentRegionMax();
    return (cbg_ret);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Tool_GetContentRegionAvail(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetContentRegionAvail();
    return (cbg_ret);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Tool_GetWindowContentRegionMin(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetWindowContentRegionMin();
    return (cbg_ret);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Tool_GetWindowContentRegionMax(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetWindowContentRegionMax();
    return (cbg_ret);
}

CBGEXPORT float CBGSTDCALL cbg_Tool_GetWindowContentRegionWidth(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_ret = cbg_self_->GetWindowContentRegionWidth();
    return cbg_ret;
}

CBGEXPORT float CBGSTDCALL cbg_Tool_GetScrollX(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_ret = cbg_self_->GetScrollX();
    return cbg_ret;
}

CBGEXPORT float CBGSTDCALL cbg_Tool_GetScrollY(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_ret = cbg_self_->GetScrollY();
    return cbg_ret;
}

CBGEXPORT float CBGSTDCALL cbg_Tool_GetScrollMaxX(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_ret = cbg_self_->GetScrollMaxX();
    return cbg_ret;
}

CBGEXPORT float CBGSTDCALL cbg_Tool_GetScrollMaxY(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_ret = cbg_self_->GetScrollMaxY();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetScrollX(void* cbg_self, float scrollX) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_arg0 = scrollX;
    cbg_self_->SetScrollX(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetScrollY(void* cbg_self, float scrollY) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_arg0 = scrollY;
    cbg_self_->SetScrollY(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetScrollHereX(void* cbg_self, float centerXRatio) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_arg0 = centerXRatio;
    cbg_self_->SetScrollHereX(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetScrollHereY(void* cbg_self, float centerYRatio) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_arg0 = centerYRatio;
    cbg_self_->SetScrollHereY(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetScrollFromPosX(void* cbg_self, float localX, float centerXRatio) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_arg0 = localX;
    float cbg_arg1 = centerXRatio;
    cbg_self_->SetScrollFromPosX(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetScrollFromPosY(void* cbg_self, float localY, float centerYRatio) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_arg0 = localY;
    float cbg_arg1 = centerYRatio;
    cbg_self_->SetScrollFromPosY(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PushStyleColor(void* cbg_self, int32_t idx, Altseed2::Color_C col) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::ToolColor cbg_arg0 = (Altseed2::ToolColor)idx;
    Altseed2::Color_C cbg_arg1 = col;
    cbg_self_->PushStyleColor(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PopStyleColor(void* cbg_self, int32_t count) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_arg0 = count;
    cbg_self_->PopStyleColor(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PushStyleVarFloat(void* cbg_self, int32_t idx, float val) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::ToolStyleVar cbg_arg0 = (Altseed2::ToolStyleVar)idx;
    float cbg_arg1 = val;
    cbg_self_->PushStyleVarFloat(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PushStyleVarVector2F(void* cbg_self, int32_t idx, Altseed2::Vector2F_C val) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::ToolStyleVar cbg_arg0 = (Altseed2::ToolStyleVar)idx;
    Altseed2::Vector2F_C cbg_arg1 = val;
    cbg_self_->PushStyleVarVector2F(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PopStyleVar(void* cbg_self, int32_t count) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_arg0 = count;
    cbg_self_->PopStyleVar(cbg_arg0);
}

CBGEXPORT Altseed2::Color_C CBGSTDCALL cbg_Tool_GetStyleColor(void* cbg_self, int32_t idx) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::ToolColor cbg_arg0 = (Altseed2::ToolColor)idx;
    Altseed2::Color_C cbg_ret = cbg_self_->GetStyleColor(cbg_arg0);
    return (cbg_ret);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Tool_GetFontTexUvWhitePixel(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetFontTexUvWhitePixel();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetNextItemWidth(void* cbg_self, float itemWidth) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_arg0 = itemWidth;
    cbg_self_->SetNextItemWidth(cbg_arg0);
}

CBGEXPORT float CBGSTDCALL cbg_Tool_CalcItemWidth(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_ret = cbg_self_->CalcItemWidth();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PushAllowKeyboardFocus(void* cbg_self, bool allowKeyboardFocus) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_arg0 = allowKeyboardFocus;
    cbg_self_->PushAllowKeyboardFocus(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PopAllowKeyboardFocus(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->PopAllowKeyboardFocus();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_Spacing(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->Spacing();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_BeginGroup(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->BeginGroup();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_EndGroup(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->EndGroup();
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Tool_GetCursorPos(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetCursorPos();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetCursorPos(void* cbg_self, Altseed2::Vector2F_C localPos) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = localPos;
    cbg_self_->SetCursorPos(cbg_arg0);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Tool_GetCursorStartPos(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetCursorStartPos();
    return (cbg_ret);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Tool_GetCursorScreenPos(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetCursorScreenPos();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_AlignTextToFramePadding(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->AlignTextToFramePadding();
}

CBGEXPORT float CBGSTDCALL cbg_Tool_GetTextLineHeightWithSpacing(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_ret = cbg_self_->GetTextLineHeightWithSpacing();
    return cbg_ret;
}

CBGEXPORT float CBGSTDCALL cbg_Tool_GetFrameHeight(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_ret = cbg_self_->GetFrameHeight();
    return cbg_ret;
}

CBGEXPORT float CBGSTDCALL cbg_Tool_GetFrameHeightWithSpacing(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_ret = cbg_self_->GetFrameHeightWithSpacing();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_SmallButton(void* cbg_self, const char16_t* label) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    bool cbg_ret = cbg_self_->SmallButton(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_Image(void* cbg_self, void* texture, Altseed2::Vector2F_C size, Altseed2::Vector2F_C uv0, Altseed2::Vector2F_C uv1, Altseed2::Color_C tintColor, Altseed2::Color_C borderColor) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    std::shared_ptr<Altseed2::TextureBase> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::TextureBase>((Altseed2::TextureBase*)texture);
    Altseed2::Vector2F_C cbg_arg1 = size;
    Altseed2::Vector2F_C cbg_arg2 = uv0;
    Altseed2::Vector2F_C cbg_arg3 = uv1;
    Altseed2::Color_C cbg_arg4 = tintColor;
    Altseed2::Color_C cbg_arg5 = borderColor;
    cbg_self_->Image(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4, cbg_arg5);
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_ImageButton(void* cbg_self, void* texture, Altseed2::Vector2F_C size, Altseed2::Vector2F_C uv0, Altseed2::Vector2F_C uv1, int32_t framePadding, Altseed2::Color_C tintColor, Altseed2::Color_C borderColor) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    std::shared_ptr<Altseed2::TextureBase> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::TextureBase>((Altseed2::TextureBase*)texture);
    Altseed2::Vector2F_C cbg_arg1 = size;
    Altseed2::Vector2F_C cbg_arg2 = uv0;
    Altseed2::Vector2F_C cbg_arg3 = uv1;
    int32_t cbg_arg4 = framePadding;
    Altseed2::Color_C cbg_arg5 = tintColor;
    Altseed2::Color_C cbg_arg6 = borderColor;
    bool cbg_ret = cbg_self_->ImageButton(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4, cbg_arg5, cbg_arg6);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_ProgressBar(void* cbg_self, float fraction, Altseed2::Vector2F_C sizeArg, const char16_t* overlay) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_arg0 = fraction;
    Altseed2::Vector2F_C cbg_arg1 = sizeArg;
    const char16_t* cbg_arg2 = overlay;
    cbg_self_->ProgressBar(cbg_arg0, cbg_arg1, cbg_arg2);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_Bullet(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->Bullet();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_BeginCombo(void* cbg_self, const char16_t* label, const char16_t* previewValue, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    const char16_t* cbg_arg1 = previewValue;
    Altseed2::ToolComboFlags cbg_arg2 = (Altseed2::ToolComboFlags)flags;
    cbg_self_->BeginCombo(cbg_arg0, cbg_arg1, cbg_arg2);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_EndCombo(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->EndCombo();
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_Combo(void* cbg_self, const char16_t* label, int32_t* current_item, const char16_t* items, int32_t popupMaxHeightInItems) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    int32_t* cbg_arg1 = current_item;
    const char16_t* cbg_arg2 = items;
    int32_t cbg_arg3 = popupMaxHeightInItems;
    bool cbg_ret = cbg_self_->Combo(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_ColorButton(void* cbg_self, const char16_t* descId, Altseed2::Color_C* col, int32_t flags, Altseed2::Vector2F_C size) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = descId;
    Altseed2::Color* cbg_arg1 = (Altseed2::Color*)col;
    Altseed2::ToolColorEditFlags cbg_arg2 = (Altseed2::ToolColorEditFlags)flags;
    Altseed2::Vector2F_C cbg_arg3 = size;
    bool cbg_ret = cbg_self_->ColorButton(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetColorEditOptions(void* cbg_self, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::ToolColorEditFlags cbg_arg0 = (Altseed2::ToolColorEditFlags)flags;
    cbg_self_->SetColorEditOptions(cbg_arg0);
}

CBGEXPORT float CBGSTDCALL cbg_Tool_GetTreeNodeToLabelSpacing(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_ret = cbg_self_->GetTreeNodeToLabelSpacing();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_ListBoxHeader(void* cbg_self, const char16_t* flags, Altseed2::Vector2F_C size) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = flags;
    Altseed2::Vector2F_C cbg_arg1 = size;
    bool cbg_ret = cbg_self_->ListBoxHeader(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_ListBoxFooter(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->ListBoxFooter();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PlotLines(void* cbg_self, const char16_t* label, void* values, int32_t valuesCount, int32_t valuesOffset, const char16_t* overlayText, float scaleMin, float scaleMax, Altseed2::Vector2F_C graphSize, int32_t stride) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    std::shared_ptr<Altseed2::FloatArray> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::FloatArray>((Altseed2::FloatArray*)values);
    int32_t cbg_arg2 = valuesCount;
    int32_t cbg_arg3 = valuesOffset;
    const char16_t* cbg_arg4 = overlayText;
    float cbg_arg5 = scaleMin;
    float cbg_arg6 = scaleMax;
    Altseed2::Vector2F_C cbg_arg7 = graphSize;
    int32_t cbg_arg8 = stride;
    cbg_self_->PlotLines(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4, cbg_arg5, cbg_arg6, cbg_arg7, cbg_arg8);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PlotHistogram(void* cbg_self, const char16_t* label, void* values, int32_t valuesCount, int32_t valuesOffset, const char16_t* overlayText, float scaleMin, float scaleMax, Altseed2::Vector2F_C graphSize, int32_t stride) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = label;
    std::shared_ptr<Altseed2::FloatArray> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::FloatArray>((Altseed2::FloatArray*)values);
    int32_t cbg_arg2 = valuesCount;
    int32_t cbg_arg3 = valuesOffset;
    const char16_t* cbg_arg4 = overlayText;
    float cbg_arg5 = scaleMin;
    float cbg_arg6 = scaleMax;
    Altseed2::Vector2F_C cbg_arg7 = graphSize;
    int32_t cbg_arg8 = stride;
    cbg_self_->PlotHistogram(cbg_arg0, cbg_arg1, cbg_arg2, cbg_arg3, cbg_arg4, cbg_arg5, cbg_arg6, cbg_arg7, cbg_arg8);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_ValueBool(void* cbg_self, const char16_t* prefix, bool b) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = prefix;
    bool cbg_arg1 = b;
    cbg_self_->ValueBool(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_ValueInt(void* cbg_self, const char16_t* prefix, int32_t v) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = prefix;
    int32_t cbg_arg1 = v;
    cbg_self_->ValueInt(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_ValueFloat(void* cbg_self, const char16_t* prefix, float v, const char16_t* floatFormat) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = prefix;
    float cbg_arg1 = v;
    const char16_t* cbg_arg2 = floatFormat;
    cbg_self_->ValueFloat(cbg_arg0, cbg_arg1, cbg_arg2);
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_BeginMainMenuBar(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->BeginMainMenuBar();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_EndMainMenuBar(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->EndMainMenuBar();
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_BeginPopupContextItem(void* cbg_self, const char16_t* strId, int32_t mouseButton) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = strId;
    int32_t cbg_arg1 = mouseButton;
    bool cbg_ret = cbg_self_->BeginPopupContextItem(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_BeginPopupContextWindow(void* cbg_self, const char16_t* strId, int32_t mouseButton, bool alsoOverItems) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = strId;
    int32_t cbg_arg1 = mouseButton;
    bool cbg_arg2 = alsoOverItems;
    bool cbg_ret = cbg_self_->BeginPopupContextWindow(cbg_arg0, cbg_arg1, cbg_arg2);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_BeginPopupContextVoid(void* cbg_self, const char16_t* strId, int32_t mouseButton) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = strId;
    int32_t cbg_arg1 = mouseButton;
    bool cbg_ret = cbg_self_->BeginPopupContextVoid(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_BeginPopupModalEx(void* cbg_self, const char16_t* name, bool* isOpen, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = name;
    bool* cbg_arg1 = isOpen;
    Altseed2::ToolWindowFlags cbg_arg2 = (Altseed2::ToolWindowFlags)flags;
    bool cbg_ret = cbg_self_->BeginPopupModalEx(cbg_arg0, cbg_arg1, cbg_arg2);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_OpenPopupOnItemClick(void* cbg_self, const char16_t* strId, int32_t mouseButton) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = strId;
    int32_t cbg_arg1 = mouseButton;
    bool cbg_ret = cbg_self_->OpenPopupOnItemClick(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsPopupOpen(void* cbg_self, const char16_t* strId) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = strId;
    bool cbg_ret = cbg_self_->IsPopupOpen(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_CloseCurrentPopup(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->CloseCurrentPopup();
}

CBGEXPORT int32_t CBGSTDCALL cbg_Tool_GetColumnIndex(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetColumnIndex();
    return cbg_ret;
}

CBGEXPORT float CBGSTDCALL cbg_Tool_GetColumnWidth(void* cbg_self, int32_t columnIndex) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_arg0 = columnIndex;
    float cbg_ret = cbg_self_->GetColumnWidth(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetColumnWidth(void* cbg_self, int32_t columnIndex, float width) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_arg0 = columnIndex;
    float cbg_arg1 = width;
    cbg_self_->SetColumnWidth(cbg_arg0, cbg_arg1);
}

CBGEXPORT float CBGSTDCALL cbg_Tool_GetColumnOffset(void* cbg_self, int32_t columnIndex) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_arg0 = columnIndex;
    float cbg_ret = cbg_self_->GetColumnOffset(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetColumnOffset(void* cbg_self, int32_t columnIndex, float offsetX) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_arg0 = columnIndex;
    float cbg_arg1 = offsetX;
    cbg_self_->SetColumnOffset(cbg_arg0, cbg_arg1);
}

CBGEXPORT int32_t CBGSTDCALL cbg_Tool_GetColumnsCount(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetColumnsCount();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetTabItemClosed(void* cbg_self, const char16_t* tabOrDockedWindowLabel) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = tabOrDockedWindowLabel;
    cbg_self_->SetTabItemClosed(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PushClipRect(void* cbg_self, Altseed2::Vector2F_C clipRectMin, Altseed2::Vector2F_C clipRectMax, bool intersectWithCurrentClipRect) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = clipRectMin;
    Altseed2::Vector2F_C cbg_arg1 = clipRectMax;
    bool cbg_arg2 = intersectWithCurrentClipRect;
    cbg_self_->PushClipRect(cbg_arg0, cbg_arg1, cbg_arg2);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_PopClipRect(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->PopClipRect();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetItemDefaultFocus(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->SetItemDefaultFocus();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetKeyboardFocusHere(void* cbg_self, int32_t offset) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_arg0 = offset;
    cbg_self_->SetKeyboardFocusHere(cbg_arg0);
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsItemHoveredWithFlags(void* cbg_self, int32_t flags) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::ToolHoveredFlags cbg_arg0 = (Altseed2::ToolHoveredFlags)flags;
    bool cbg_ret = cbg_self_->IsItemHoveredWithFlags(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsItemFocused(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsItemFocused();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsItemClicked(void* cbg_self, int32_t mouseButton) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    int32_t cbg_arg0 = mouseButton;
    bool cbg_ret = cbg_self_->IsItemClicked(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsItemVisible(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsItemVisible();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsItemEdited(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsItemEdited();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsItemActivated(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsItemActivated();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsItemDeactivated(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsItemDeactivated();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsItemDeactivatedAfterEdit(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsItemDeactivatedAfterEdit();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsAnyItemHovered(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsAnyItemHovered();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsAnyItemActive(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsAnyItemActive();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Tool_IsAnyItemFocused(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    bool cbg_ret = cbg_self_->IsAnyItemFocused();
    return cbg_ret;
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Tool_GetItemRectMin(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetItemRectMin();
    return (cbg_ret);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Tool_GetItemRectMax(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetItemRectMax();
    return (cbg_ret);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Tool_GetItemRectSize(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetItemRectSize();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetItemAllowOverlap(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->SetItemAllowOverlap();
}

CBGEXPORT void CBGSTDCALL cbg_Tool_IsRectVisible(void* cbg_self, Altseed2::Vector2F_C size) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = size;
    cbg_self_->IsRectVisible(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_IsRectVisibleVector2F2(void* cbg_self, Altseed2::Vector2F_C rectMin, Altseed2::Vector2F_C rectMax) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = rectMin;
    Altseed2::Vector2F_C cbg_arg1 = rectMax;
    cbg_self_->IsRectVisibleVector2F2(cbg_arg0, cbg_arg1);
}

CBGEXPORT float CBGSTDCALL cbg_Tool_GetTime(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    float cbg_ret = cbg_self_->GetTime();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Tool_GetClipboardText(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetClipboardText();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetClipboardText(void* cbg_self, const char16_t* text) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = text;
    cbg_self_->SetClipboardText(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_LoadIniSettingsFromDisk(void* cbg_self, const char16_t* iniFilename) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = iniFilename;
    cbg_self_->LoadIniSettingsFromDisk(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SaveIniSettingsToDisk(void* cbg_self, const char16_t* iniFilename) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = iniFilename;
    cbg_self_->SaveIniSettingsToDisk(cbg_arg0);
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Tool_OpenDialog(void* cbg_self, const char16_t* filter, const char16_t* defaultPath) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = filter;
    const char16_t* cbg_arg1 = defaultPath;
    const char16_t* cbg_ret = cbg_self_->OpenDialog(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Tool_OpenDialogMultiple(void* cbg_self, const char16_t* filter, const char16_t* defaultPath) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = filter;
    const char16_t* cbg_arg1 = defaultPath;
    const char16_t* cbg_ret = cbg_self_->OpenDialogMultiple(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Tool_SaveDialog(void* cbg_self, const char16_t* filter, const char16_t* defaultPath) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = filter;
    const char16_t* cbg_arg1 = defaultPath;
    const char16_t* cbg_ret = cbg_self_->SaveDialog(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Tool_PickFolder(void* cbg_self, const char16_t* defaultPath) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    const char16_t* cbg_arg0 = defaultPath;
    const char16_t* cbg_ret = cbg_self_->PickFolder(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_Tool_GetToolUsage(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::ToolUsage cbg_ret = cbg_self_->GetToolUsage();
    return (int32_t)cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Tool_SetToolUsage(void* cbg_self, int32_t value) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    Altseed2::ToolUsage cbg_arg0 = (Altseed2::ToolUsage)value;
    cbg_self_->SetToolUsage(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Tool_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Tool*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_StreamFile_Create(const char16_t* path) {
    const char16_t* cbg_arg0 = path;
    std::shared_ptr<Altseed2::StreamFile> cbg_ret = Altseed2::StreamFile::Create(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::StreamFile>(cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_StreamFile_Read(void* cbg_self, int32_t size) {
    auto cbg_self_ = (Altseed2::StreamFile*)(cbg_self);

    int32_t cbg_arg0 = size;
    int32_t cbg_ret = cbg_self_->Read(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void* CBGSTDCALL cbg_StreamFile_GetTempBuffer(void* cbg_self) {
    auto cbg_self_ = (Altseed2::StreamFile*)(cbg_self);

    std::shared_ptr<Altseed2::Int8Array> cbg_ret = cbg_self_->GetTempBuffer();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Int8Array>(cbg_ret);
}

CBGEXPORT bool CBGSTDCALL cbg_StreamFile_Reload(void* cbg_self) {
    auto cbg_self_ = (Altseed2::StreamFile*)(cbg_self);

    bool cbg_ret = cbg_self_->Reload();
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_StreamFile_GetSize(void* cbg_self) {
    auto cbg_self_ = (Altseed2::StreamFile*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetSize();
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_StreamFile_GetCurrentPosition(void* cbg_self) {
    auto cbg_self_ = (Altseed2::StreamFile*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetCurrentPosition();
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_StreamFile_GetTempBufferSize(void* cbg_self) {
    auto cbg_self_ = (Altseed2::StreamFile*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetTempBufferSize();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_StreamFile_GetIsInPackage(void* cbg_self) {
    auto cbg_self_ = (Altseed2::StreamFile*)(cbg_self);

    bool cbg_ret = cbg_self_->GetIsInPackage();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_StreamFile_GetPath(void* cbg_self) {
    auto cbg_self_ = (Altseed2::StreamFile*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetPath();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_StreamFile_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::StreamFile*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_StaticFile_Create(const char16_t* path) {
    const char16_t* cbg_arg0 = path;
    std::shared_ptr<Altseed2::StaticFile> cbg_ret = Altseed2::StaticFile::Create(cbg_arg0);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::StaticFile>(cbg_ret);
}

CBGEXPORT void* CBGSTDCALL cbg_StaticFile_GetBuffer(void* cbg_self) {
    auto cbg_self_ = (Altseed2::StaticFile*)(cbg_self);

    std::shared_ptr<Altseed2::Int8Array> cbg_ret = cbg_self_->GetBuffer();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Int8Array>(cbg_ret);
}

CBGEXPORT bool CBGSTDCALL cbg_StaticFile_Reload(void* cbg_self) {
    auto cbg_self_ = (Altseed2::StaticFile*)(cbg_self);

    bool cbg_ret = cbg_self_->Reload();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_StaticFile_GetPath(void* cbg_self) {
    auto cbg_self_ = (Altseed2::StaticFile*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetPath();
    return cbg_ret;
}

CBGEXPORT int32_t CBGSTDCALL cbg_StaticFile_GetSize(void* cbg_self) {
    auto cbg_self_ = (Altseed2::StaticFile*)(cbg_self);

    int32_t cbg_ret = cbg_self_->GetSize();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_StaticFile_GetIsInPackage(void* cbg_self) {
    auto cbg_self_ = (Altseed2::StaticFile*)(cbg_self);

    bool cbg_ret = cbg_self_->GetIsInPackage();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_StaticFile_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::StaticFile*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_File_GetInstance() {
    std::shared_ptr<Altseed2::File> cbg_ret = Altseed2::File::GetInstance();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::File>(cbg_ret);
}

CBGEXPORT bool CBGSTDCALL cbg_File_AddRootDirectory(void* cbg_self, const char16_t* path) {
    auto cbg_self_ = (Altseed2::File*)(cbg_self);

    const char16_t* cbg_arg0 = path;
    bool cbg_ret = cbg_self_->AddRootDirectory(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_File_AddRootPackageWithPassword(void* cbg_self, const char16_t* path, const char16_t* password) {
    auto cbg_self_ = (Altseed2::File*)(cbg_self);

    const char16_t* cbg_arg0 = path;
    const char16_t* cbg_arg1 = password;
    bool cbg_ret = cbg_self_->AddRootPackageWithPassword(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_File_AddRootPackage(void* cbg_self, const char16_t* path) {
    auto cbg_self_ = (Altseed2::File*)(cbg_self);

    const char16_t* cbg_arg0 = path;
    bool cbg_ret = cbg_self_->AddRootPackage(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_File_ClearRootDirectories(void* cbg_self) {
    auto cbg_self_ = (Altseed2::File*)(cbg_self);

    cbg_self_->ClearRootDirectories();
}

CBGEXPORT bool CBGSTDCALL cbg_File_Exists(void* cbg_self, const char16_t* path) {
    auto cbg_self_ = (Altseed2::File*)(cbg_self);

    const char16_t* cbg_arg0 = path;
    bool cbg_ret = cbg_self_->Exists(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_File_Pack(void* cbg_self, const char16_t* srcPath, const char16_t* dstPath) {
    auto cbg_self_ = (Altseed2::File*)(cbg_self);

    const char16_t* cbg_arg0 = srcPath;
    const char16_t* cbg_arg1 = dstPath;
    bool cbg_ret = cbg_self_->Pack(cbg_arg0, cbg_arg1);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_File_PackWithPassword(void* cbg_self, const char16_t* srcPath, const char16_t* dstPath, const char16_t* password) {
    auto cbg_self_ = (Altseed2::File*)(cbg_self);

    const char16_t* cbg_arg0 = srcPath;
    const char16_t* cbg_arg1 = dstPath;
    const char16_t* cbg_arg2 = password;
    bool cbg_ret = cbg_self_->PackWithPassword(cbg_arg0, cbg_arg1, cbg_arg2);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_File_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::File*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_Sound_Load(const char16_t* path, bool isDecompressed) {
    const char16_t* cbg_arg0 = path;
    bool cbg_arg1 = isDecompressed;
    std::shared_ptr<Altseed2::Sound> cbg_ret = Altseed2::Sound::Load(cbg_arg0, cbg_arg1);
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Sound>(cbg_ret);
}

CBGEXPORT float CBGSTDCALL cbg_Sound_GetLoopStartingPoint(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Sound*)(cbg_self);

    float cbg_ret = cbg_self_->GetLoopStartingPoint();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Sound_SetLoopStartingPoint(void* cbg_self, float value) {
    auto cbg_self_ = (Altseed2::Sound*)(cbg_self);

    float cbg_arg0 = value;
    cbg_self_->SetLoopStartingPoint(cbg_arg0);
}

CBGEXPORT float CBGSTDCALL cbg_Sound_GetLoopEndPoint(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Sound*)(cbg_self);

    float cbg_ret = cbg_self_->GetLoopEndPoint();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Sound_SetLoopEndPoint(void* cbg_self, float value) {
    auto cbg_self_ = (Altseed2::Sound*)(cbg_self);

    float cbg_arg0 = value;
    cbg_self_->SetLoopEndPoint(cbg_arg0);
}

CBGEXPORT bool CBGSTDCALL cbg_Sound_GetIsLoopingMode(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Sound*)(cbg_self);

    bool cbg_ret = cbg_self_->GetIsLoopingMode();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Sound_SetIsLoopingMode(void* cbg_self, bool value) {
    auto cbg_self_ = (Altseed2::Sound*)(cbg_self);

    bool cbg_arg0 = value;
    cbg_self_->SetIsLoopingMode(cbg_arg0);
}

CBGEXPORT float CBGSTDCALL cbg_Sound_GetLength(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Sound*)(cbg_self);

    float cbg_ret = cbg_self_->GetLength();
    return cbg_ret;
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Sound_GetPath(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Sound*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetPath();
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_Sound_GetIsDecompressed(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Sound*)(cbg_self);

    bool cbg_ret = cbg_self_->GetIsDecompressed();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Sound_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Sound*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_SoundMixer_GetInstance() {
    std::shared_ptr<Altseed2::SoundMixer> cbg_ret = Altseed2::SoundMixer::GetInstance();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::SoundMixer>(cbg_ret);
}

CBGEXPORT int32_t CBGSTDCALL cbg_SoundMixer_Play(void* cbg_self, void* sound) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    std::shared_ptr<Altseed2::Sound> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::Sound>((Altseed2::Sound*)sound);
    int32_t cbg_ret = cbg_self_->Play(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT bool CBGSTDCALL cbg_SoundMixer_GetIsPlaying(void* cbg_self, int32_t id) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    bool cbg_ret = cbg_self_->GetIsPlaying(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_SoundMixer_StopAll(void* cbg_self) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    cbg_self_->StopAll();
}

CBGEXPORT void CBGSTDCALL cbg_SoundMixer_Stop(void* cbg_self, int32_t id) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    cbg_self_->Stop(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_SoundMixer_Pause(void* cbg_self, int32_t id) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    cbg_self_->Pause(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_SoundMixer_Resume(void* cbg_self, int32_t id) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    cbg_self_->Resume(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_SoundMixer_SetVolume(void* cbg_self, int32_t id, float volume) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    float cbg_arg1 = volume;
    cbg_self_->SetVolume(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_SoundMixer_FadeIn(void* cbg_self, int32_t id, float second) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    float cbg_arg1 = second;
    cbg_self_->FadeIn(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_SoundMixer_FadeOut(void* cbg_self, int32_t id, float second) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    float cbg_arg1 = second;
    cbg_self_->FadeOut(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_SoundMixer_Fade(void* cbg_self, int32_t id, float second, float targetedVolume) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    float cbg_arg1 = second;
    float cbg_arg2 = targetedVolume;
    cbg_self_->Fade(cbg_arg0, cbg_arg1, cbg_arg2);
}

CBGEXPORT bool CBGSTDCALL cbg_SoundMixer_GetIsPlaybackSpeedEnabled(void* cbg_self, int32_t id) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    bool cbg_ret = cbg_self_->GetIsPlaybackSpeedEnabled(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_SoundMixer_SetIsPlaybackSpeedEnabled(void* cbg_self, int32_t id, bool isPlaybackSpeedEnabled) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    bool cbg_arg1 = isPlaybackSpeedEnabled;
    cbg_self_->SetIsPlaybackSpeedEnabled(cbg_arg0, cbg_arg1);
}

CBGEXPORT float CBGSTDCALL cbg_SoundMixer_GetPlaybackSpeed(void* cbg_self, int32_t id) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    float cbg_ret = cbg_self_->GetPlaybackSpeed(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_SoundMixer_SetPlaybackSpeed(void* cbg_self, int32_t id, float playbackSpeed) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    float cbg_arg1 = playbackSpeed;
    cbg_self_->SetPlaybackSpeed(cbg_arg0, cbg_arg1);
}

CBGEXPORT float CBGSTDCALL cbg_SoundMixer_GetPanningPosition(void* cbg_self, int32_t id) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    float cbg_ret = cbg_self_->GetPanningPosition(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_SoundMixer_SetPanningPosition(void* cbg_self, int32_t id, float panningPosition) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    float cbg_arg1 = panningPosition;
    cbg_self_->SetPanningPosition(cbg_arg0, cbg_arg1);
}

CBGEXPORT float CBGSTDCALL cbg_SoundMixer_GetPlaybackPosition(void* cbg_self, int32_t id) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    float cbg_ret = cbg_self_->GetPlaybackPosition(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_SoundMixer_SetPlaybackPosition(void* cbg_self, int32_t id, float position) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    float cbg_arg1 = position;
    cbg_self_->SetPlaybackPosition(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_SoundMixer_GetSpectrum(void* cbg_self, int32_t id, void* spectrums, int32_t window) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    int32_t cbg_arg0 = id;
    std::shared_ptr<Altseed2::FloatArray> cbg_arg1 = Altseed2::CreateAndAddSharedPtr<Altseed2::FloatArray>((Altseed2::FloatArray*)spectrums);
    Altseed2::FFTWindow cbg_arg2 = (Altseed2::FFTWindow)window;
    cbg_self_->GetSpectrum(cbg_arg0, cbg_arg1, cbg_arg2);
}

CBGEXPORT void CBGSTDCALL cbg_SoundMixer_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::SoundMixer*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_Log_GetInstance() {
    std::shared_ptr<Altseed2::Log> cbg_ret = Altseed2::Log::GetInstance();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Log>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Log_Write(void* cbg_self, int32_t category, int32_t level, const char16_t* message) {
    auto cbg_self_ = (Altseed2::Log*)(cbg_self);

    Altseed2::LogCategory cbg_arg0 = (Altseed2::LogCategory)category;
    Altseed2::LogLevel cbg_arg1 = (Altseed2::LogLevel)level;
    const char16_t* cbg_arg2 = message;
    cbg_self_->Write(cbg_arg0, cbg_arg1, cbg_arg2);
}

CBGEXPORT void CBGSTDCALL cbg_Log_Trace(void* cbg_self, int32_t category, const char16_t* message) {
    auto cbg_self_ = (Altseed2::Log*)(cbg_self);

    Altseed2::LogCategory cbg_arg0 = (Altseed2::LogCategory)category;
    const char16_t* cbg_arg1 = message;
    cbg_self_->Trace(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Log_Debug(void* cbg_self, int32_t category, const char16_t* message) {
    auto cbg_self_ = (Altseed2::Log*)(cbg_self);

    Altseed2::LogCategory cbg_arg0 = (Altseed2::LogCategory)category;
    const char16_t* cbg_arg1 = message;
    cbg_self_->Debug(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Log_Info(void* cbg_self, int32_t category, const char16_t* message) {
    auto cbg_self_ = (Altseed2::Log*)(cbg_self);

    Altseed2::LogCategory cbg_arg0 = (Altseed2::LogCategory)category;
    const char16_t* cbg_arg1 = message;
    cbg_self_->Info(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Log_Warn(void* cbg_self, int32_t category, const char16_t* message) {
    auto cbg_self_ = (Altseed2::Log*)(cbg_self);

    Altseed2::LogCategory cbg_arg0 = (Altseed2::LogCategory)category;
    const char16_t* cbg_arg1 = message;
    cbg_self_->Warn(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Log_Error(void* cbg_self, int32_t category, const char16_t* message) {
    auto cbg_self_ = (Altseed2::Log*)(cbg_self);

    Altseed2::LogCategory cbg_arg0 = (Altseed2::LogCategory)category;
    const char16_t* cbg_arg1 = message;
    cbg_self_->Error(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Log_Critical(void* cbg_self, int32_t category, const char16_t* message) {
    auto cbg_self_ = (Altseed2::Log*)(cbg_self);

    Altseed2::LogCategory cbg_arg0 = (Altseed2::LogCategory)category;
    const char16_t* cbg_arg1 = message;
    cbg_self_->Critical(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Log_SetLevel(void* cbg_self, int32_t category, int32_t level) {
    auto cbg_self_ = (Altseed2::Log*)(cbg_self);

    Altseed2::LogCategory cbg_arg0 = (Altseed2::LogCategory)category;
    Altseed2::LogLevel cbg_arg1 = (Altseed2::LogLevel)level;
    cbg_self_->SetLevel(cbg_arg0, cbg_arg1);
}

CBGEXPORT void CBGSTDCALL cbg_Log_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Log*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_Window_GetInstance() {
    std::shared_ptr<Altseed2::Window> cbg_ret = Altseed2::Window::GetInstance();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Window>(cbg_ret);
}

CBGEXPORT const char16_t* CBGSTDCALL cbg_Window_GetTitle(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Window*)(cbg_self);

    const char16_t* cbg_ret = cbg_self_->GetTitle();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Window_SetTitle(void* cbg_self, const char16_t* value) {
    auto cbg_self_ = (Altseed2::Window*)(cbg_self);

    const char16_t* cbg_arg0 = value;
    cbg_self_->SetTitle(cbg_arg0);
}

CBGEXPORT Altseed2::Vector2I_C CBGSTDCALL cbg_Window_GetSize(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Window*)(cbg_self);

    Altseed2::Vector2I_C cbg_ret = cbg_self_->GetSize();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Window_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Window*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT bool CBGSTDCALL cbg_Collider_GetIsCollidedWith(void* cbg_self, void* collider) {
    auto cbg_self_ = (Altseed2::Collider*)(cbg_self);

    std::shared_ptr<Altseed2::Collider> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::Collider>((Altseed2::Collider*)collider);
    bool cbg_ret = cbg_self_->GetIsCollidedWith(cbg_arg0);
    return cbg_ret;
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_Collider_GetPosition(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Collider*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetPosition();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_Collider_SetPosition(void* cbg_self, Altseed2::Vector2F_C value) {
    auto cbg_self_ = (Altseed2::Collider*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = value;
    cbg_self_->SetPosition(cbg_arg0);
}

CBGEXPORT float CBGSTDCALL cbg_Collider_GetRotation(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Collider*)(cbg_self);

    float cbg_ret = cbg_self_->GetRotation();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_Collider_SetRotation(void* cbg_self, float value) {
    auto cbg_self_ = (Altseed2::Collider*)(cbg_self);

    float cbg_arg0 = value;
    cbg_self_->SetRotation(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_Collider_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::Collider*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_CircleCollider_Create() {
    std::shared_ptr<Altseed2::CircleCollider> cbg_ret = Altseed2::CircleCollider::Create();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::CircleCollider>(cbg_ret);
}

CBGEXPORT float CBGSTDCALL cbg_CircleCollider_GetRadius(void* cbg_self) {
    auto cbg_self_ = (Altseed2::CircleCollider*)(cbg_self);

    float cbg_ret = cbg_self_->GetRadius();
    return cbg_ret;
}

CBGEXPORT void CBGSTDCALL cbg_CircleCollider_SetRadius(void* cbg_self, float value) {
    auto cbg_self_ = (Altseed2::CircleCollider*)(cbg_self);

    float cbg_arg0 = value;
    cbg_self_->SetRadius(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_CircleCollider_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::CircleCollider*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_RectangleCollider_Create() {
    std::shared_ptr<Altseed2::RectangleCollider> cbg_ret = Altseed2::RectangleCollider::Create();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::RectangleCollider>(cbg_ret);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_RectangleCollider_GetSize(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RectangleCollider*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetSize();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RectangleCollider_SetSize(void* cbg_self, Altseed2::Vector2F_C value) {
    auto cbg_self_ = (Altseed2::RectangleCollider*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = value;
    cbg_self_->SetSize(cbg_arg0);
}

CBGEXPORT Altseed2::Vector2F_C CBGSTDCALL cbg_RectangleCollider_GetCenterPosition(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RectangleCollider*)(cbg_self);

    Altseed2::Vector2F_C cbg_ret = cbg_self_->GetCenterPosition();
    return (cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_RectangleCollider_SetCenterPosition(void* cbg_self, Altseed2::Vector2F_C value) {
    auto cbg_self_ = (Altseed2::RectangleCollider*)(cbg_self);

    Altseed2::Vector2F_C cbg_arg0 = value;
    cbg_self_->SetCenterPosition(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_RectangleCollider_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::RectangleCollider*)(cbg_self);

    cbg_self_->Release();
}

CBGEXPORT void* CBGSTDCALL cbg_PolygonCollider_Create() {
    std::shared_ptr<Altseed2::PolygonCollider> cbg_ret = Altseed2::PolygonCollider::Create();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::PolygonCollider>(cbg_ret);
}

CBGEXPORT void* CBGSTDCALL cbg_PolygonCollider_GetVertexes(void* cbg_self) {
    auto cbg_self_ = (Altseed2::PolygonCollider*)(cbg_self);

    std::shared_ptr<Altseed2::Vector2FArray> cbg_ret = cbg_self_->GetVertexes();
    return (void*)Altseed2::AddAndGetSharedPtr<Altseed2::Vector2FArray>(cbg_ret);
}

CBGEXPORT void CBGSTDCALL cbg_PolygonCollider_SetVertexes(void* cbg_self, void* value) {
    auto cbg_self_ = (Altseed2::PolygonCollider*)(cbg_self);

    std::shared_ptr<Altseed2::Vector2FArray> cbg_arg0 = Altseed2::CreateAndAddSharedPtr<Altseed2::Vector2FArray>((Altseed2::Vector2FArray*)value);
    cbg_self_->SetVertexes(cbg_arg0);
}

CBGEXPORT void CBGSTDCALL cbg_PolygonCollider_Release(void* cbg_self) {
    auto cbg_self_ = (Altseed2::PolygonCollider*)(cbg_self);

    cbg_self_->Release();
}
}
