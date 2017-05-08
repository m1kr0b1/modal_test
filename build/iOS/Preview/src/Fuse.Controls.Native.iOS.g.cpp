// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsNat-fa0facbc.h>
#include <Fuse.Controls.Native.-4c195cb7.h>
#include <Fuse.Controls.Native.-87450d8.h>
#include <Fuse.Controls.Native.-8c20fe6.h>
#include <Fuse.Controls.Native.-98c3244c.h>
#include <Fuse.Controls.Native.-9b8fa15e.h>
#include <Fuse.Controls.Native.-a3bae2d8.h>
#include <Fuse.Controls.Native.-a609c410.h>
#include <Fuse.Controls.Native.-e7f294af.h>
#include <Fuse.Controls.Native.-f73efeee.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Float.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAt-4a875e1d.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Runtime.Implement-6e9df330.h>
#include <Uno.Runtime.Implement-81e7ab4c.h>
#include <Uno.String.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// -------------------------------------------------------------------------------------------------

// internal abstract extern interface INativeFocusListener :147
// {
uInterfaceType* INativeFocusListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.iOS.INativeFocusListener", 0, 0);
    return type;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed extern class iOSBlitter :1499
// {
// static iOSBlitter() :1499
static void iOSBlitter__cctor__fn(uType* __type)
{
    iOSBlitter::Singleton_ = iOSBlitter::New1();
}

static void iOSBlitter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::iOSBlitter, _draw_fbdb836b), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::iOSBlitter, Blit_v_fbdb836b_3_4_1), 0,
        ::TYPES[0/*float2[]*/], offsetof(::g::Fuse::Controls::Native::iOS::iOSBlitter, Blit_verts_fbdb836b_3_3_5), 0,
        type, (uintptr_t)&::g::Fuse::Controls::Native::iOS::iOSBlitter::Singleton_, uFieldFlagsStatic);
}

uType* iOSBlitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(iOSBlitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.iOSBlitter", options);
    type->fp_build_ = iOSBlitter_build;
    type->fp_ctor_ = (void*)iOSBlitter__New1_fn;
    type->fp_cctor_ = iOSBlitter__cctor__fn;
    return type;
}

// public generated iOSBlitter() :1499
void iOSBlitter__ctor__fn(iOSBlitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :1503
void iOSBlitter__Blit_fn(iOSBlitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :1499
void iOSBlitter__init_DrawCalls_fn(iOSBlitter* __this)
{
    __this->init_DrawCalls();
}

// public generated iOSBlitter New() :1499
void iOSBlitter__New1_fn(iOSBlitter** __retval)
{
    *__retval = iOSBlitter::New1();
}

uSStrong<iOSBlitter*> iOSBlitter::Singleton_;

// public generated iOSBlitter() [instance] :1499
void iOSBlitter::ctor_()
{
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :1503
void iOSBlitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.Controls.Native.iOS.iOSBlitter", "Blit(texture2D,float2,float2,float4x4)");
    _draw_fbdb836b.BlendEnabled(true);
    _draw_fbdb836b.DepthTestEnabled(false);
    _draw_fbdb836b.CullFace(0);
    _draw_fbdb836b.BlendSrcAlpha(7);
    _draw_fbdb836b.BlendDstRgb(3);
    _draw_fbdb836b.Use();
    _draw_fbdb836b.Attrib1(0, 2, Blit_v_fbdb836b_3_4_1, 8, 0);
    _draw_fbdb836b.Uniform2(1, size);
    _draw_fbdb836b.Uniform2(2, pos);
    _draw_fbdb836b.Uniform12(3, localToClipTransform);
    _draw_fbdb836b.Sampler3(4, vt, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_fbdb836b.DrawArrays(uPtr(Blit_verts_fbdb836b_3_3_5)->Length());
}

// private generated void init_DrawCalls() [instance] :1499
void iOSBlitter::init_DrawCalls()
{
    uStackFrame __("Fuse.Controls.Native.iOS.iOSBlitter", "init_DrawCalls()");
    uArray* verts_fbdb836b_3_3_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[0/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_fbdb836b_3_4_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_fbdb836b_3_3_0), 0);
    Blit_verts_fbdb836b_3_3_5 = verts_fbdb836b_3_3_0;
    _draw_fbdb836b = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControlsNative_bundle::iOSBlitter0a63f4bb());
}

// public generated iOSBlitter New() [static] :1499
iOSBlitter* iOSBlitter::New1()
{
    iOSBlitter* obj1 = (iOSBlitter*)uNew(iOSBlitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// -------------------------------------------------------------------------------------------------

// public abstract extern class LeafView :1319
// {
static void LeafView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(LeafView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(LeafView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(LeafView_type, interface2));
    type->SetFields(7);
}

LeafView_type* LeafView_typeof()
{
    static uSStrong<LeafView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LeafView);
    options.TypeSize = sizeof(LeafView_type);
    type = (LeafView_type*)uClassType::New("Fuse.Controls.Native.iOS.LeafView", options);
    type->fp_build_ = LeafView_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected LeafView(ObjC.Object handle) :1321
void LeafView__ctor_4_fn(LeafView* __this, ::g::ObjC::Object* handle)
{
    __this->ctor_4(handle);
}

// protected LeafView(ObjC.Object handle) [instance] :1321
void LeafView::ctor_4(::g::ObjC::Object* handle)
{
    ctor_3(handle, true);
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// -------------------------------------------------------------------------------------------------

// internal static extern class NativeFocus :153
// {
// static NativeFocus() :153
static void NativeFocus__cctor__fn(uType* __type)
{
    NativeFocus::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/]));
}

static void NativeFocus_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof();
    type->SetFields(0,
        ::TYPES[1/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/], (uintptr_t)&::g::Fuse::Controls::Native::iOS::NativeFocus::_listeners_, uFieldFlagsStatic);
}

uClassType* NativeFocus_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.NativeFocus", options);
    type->fp_build_ = NativeFocus_build;
    type->fp_cctor_ = NativeFocus__cctor__fn;
    return type;
}

// public static void AddListener(ObjC.Object handle, Fuse.Controls.Native.iOS.INativeFocusListener listener) :159
void NativeFocus__AddListener_fn(::g::ObjC::Object* handle, uObject* listener)
{
    NativeFocus::AddListener(handle, listener);
}

// public static void RaiseFocusGained(ObjC.Object handle) :169
void NativeFocus__RaiseFocusGained_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RaiseFocusGained(handle);
}

// public static void RaiseFocusLost(ObjC.Object handle) :177
void NativeFocus__RaiseFocusLost_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RaiseFocusLost(handle);
}

// public static void RemoveListener(ObjC.Object handle) :164
void NativeFocus__RemoveListener_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RemoveListener(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NativeFocus::_listeners_;

// public static void AddListener(ObjC.Object handle, Fuse.Controls.Native.iOS.INativeFocusListener listener) [static] :159
void NativeFocus::AddListener(::g::ObjC::Object* handle, uObject* listener)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "AddListener(ObjC.Object,Fuse.Controls.Native.iOS.INativeFocusListener)");
    NativeFocus_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NativeFocus::_listeners()), handle, listener);
}

// public static void RaiseFocusGained(ObjC.Object handle) [static] :169
void NativeFocus::RaiseFocusGained(::g::ObjC::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "RaiseFocusGained(ObjC.Object)");
    NativeFocus_typeof()->Init();
    bool ret1;
    uObject* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret1), ret1))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusGained(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret2), ret2)), ::TYPES[2/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}

// public static void RaiseFocusLost(ObjC.Object handle) [static] :177
void NativeFocus::RaiseFocusLost(::g::ObjC::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "RaiseFocusLost(ObjC.Object)");
    NativeFocus_typeof()->Init();
    bool ret3;
    uObject* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret3), ret3))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusLost(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret4), ret4)), ::TYPES[2/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}

// public static void RemoveListener(ObjC.Object handle) [static] :164
void NativeFocus::RemoveListener(::g::ObjC::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "RemoveListener(ObjC.Object)");
    NativeFocus_typeof()->Init();
    bool ret5;
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NativeFocus::_listeners()), handle, &ret5);
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed extern class OSVersion :1157
// {
static void OSVersion_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Major), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Minor), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Patch), 0);
    type->Reflection.SetFields(3,
        new uField("Major", 0),
        new uField("Minor", 1),
        new uField("Patch", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OSVersion__New1_fn, 0, true, type, 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
}

uType* OSVersion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(OSVersion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.OSVersion", options);
    type->fp_build_ = OSVersion_build;
    type->fp_ToString = (void(*)(uObject*, uString**))OSVersion__ToString_fn;
    return type;
}

// public OSVersion(int major, int minor, int patch) :1162
void OSVersion__ctor__fn(OSVersion* __this, int* major, int* minor, int* patch)
{
    __this->ctor_(*major, *minor, *patch);
}

// public OSVersion New(int major, int minor, int patch) :1162
void OSVersion__New1_fn(int* major, int* minor, int* patch, OSVersion** __retval)
{
    *__retval = OSVersion::New1(*major, *minor, *patch);
}

// public override sealed string ToString() :1168
void OSVersion__ToString_fn(OSVersion* __this, uString** __retval)
{
    uStackFrame __("Fuse.Controls.Native.iOS.OSVersion", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox<int>(::g::Uno::Int_typeof(), __this->Major), ::STRINGS[0/*"."*/]), uBox<int>(::g::Uno::Int_typeof(), __this->Minor)), ::STRINGS[0/*"."*/]), uBox<int>(::g::Uno::Int_typeof(), __this->Patch)), void();
}

// public OSVersion(int major, int minor, int patch) [instance] :1162
void OSVersion::ctor_(int major, int minor, int patch)
{
    Major = major;
    Minor = minor;
    Patch = patch;
}

// public OSVersion New(int major, int minor, int patch) [static] :1162
OSVersion* OSVersion::New1(int major, int minor, int patch)
{
    OSVersion* obj1 = (OSVersion*)uNew(OSVersion_typeof());
    obj1->ctor_(major, minor, patch);
    return obj1;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// -------------------------------------------------------------------------------------------------

// private sealed class FocusHelpers.PerformBecomeFirstResponder :264
// {
static void FocusHelpers__PerformBecomeFirstResponder_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::FocusHelpers__PerformBecomeFirstResponder, _target), 0);
}

uType* FocusHelpers__PerformBecomeFirstResponder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FocusHelpers__PerformBecomeFirstResponder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FocusHelpers.PerformBecomeFirstResponder", options);
    type->fp_build_ = FocusHelpers__PerformBecomeFirstResponder_build;
    return type;
}

// public PerformBecomeFirstResponder(ObjC.Object target) :268
void FocusHelpers__PerformBecomeFirstResponder__ctor__fn(FocusHelpers__PerformBecomeFirstResponder* __this, ::g::ObjC::Object* target)
{
    __this->ctor_(target);
}

// public void BecomeFirstResponder() :273
void FocusHelpers__PerformBecomeFirstResponder__BecomeFirstResponder_fn(FocusHelpers__PerformBecomeFirstResponder* __this)
{
    __this->BecomeFirstResponder();
}

// public PerformBecomeFirstResponder New(ObjC.Object target) :268
void FocusHelpers__PerformBecomeFirstResponder__New1_fn(::g::ObjC::Object* target, FocusHelpers__PerformBecomeFirstResponder** __retval)
{
    *__retval = FocusHelpers__PerformBecomeFirstResponder::New1(target);
}

// public PerformBecomeFirstResponder(ObjC.Object target) [instance] :268
void FocusHelpers__PerformBecomeFirstResponder::ctor_(::g::ObjC::Object* target)
{
    _target = target;
}

// public void BecomeFirstResponder() [instance] :273
void FocusHelpers__PerformBecomeFirstResponder::BecomeFirstResponder()
{
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::BecomeFirstResponder(_target);
}

// public PerformBecomeFirstResponder New(ObjC.Object target) [static] :268
FocusHelpers__PerformBecomeFirstResponder* FocusHelpers__PerformBecomeFirstResponder::New1(::g::ObjC::Object* target)
{
    FocusHelpers__PerformBecomeFirstResponder* obj1 = (FocusHelpers__PerformBecomeFirstResponder*)uNew(FocusHelpers__PerformBecomeFirstResponder_typeof());
    obj1->ctor_(target);
    return obj1;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// -------------------------------------------------------------------------------------------------

// public enum iOSDevice.ScreenOrientation :1177
uEnumType* iOSDevice__ScreenOrientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Portrait", 0LL,
        "Landscape", 1LL);
    return type;
}

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// -------------------------------------------------------------------------------------------------

// public enum UITouch.TouchPhase :1006
uEnumType* UITouch__TouchPhase_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.UITouch.TouchPhase", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Began", 0LL,
        "Moved", 1LL,
        "Stationary", 2LL,
        "Ended", 3LL,
        "Cancelled", 4LL);
    return type;
}

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno
// -------------------------------------------------------------------------------------------------

// public abstract extern class View :3245
// {
static void View_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface1));
    type->SetFields(6,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View, _handle), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Handle", NULL, (void*)View__get_Handle_fn, 0, false, ::g::ObjC::Object_typeof(), 0));
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.iOS.View", options);
    type->fp_build_ = View_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected View(ObjC.Object handle) :3251
void View__ctor_2_fn(View* __this, ::g::ObjC::Object* handle)
{
    __this->ctor_2(handle);
}

// protected View(ObjC.Object handle, bool isLeafView) :3253
void View__ctor_3_fn(View* __this, ::g::ObjC::Object* handle, bool* isLeafView)
{
    __this->ctor_3(handle, *isLeafView);
}

// public ObjC.Object get_Handle() :3247
void View__get_Handle_fn(View* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Handle();
}

// protected View(ObjC.Object handle) [instance] :3251
void View::ctor_2(::g::ObjC::Object* handle)
{
    ctor_3(handle, false);
}

// protected View(ObjC.Object handle, bool isLeafView) [instance] :3253
void View::ctor_3(::g::ObjC::Object* handle, bool isLeafView)
{
    ctor_1(handle, isLeafView);
    _handle = handle;
}

// public ObjC.Object get_Handle() [instance] :3247
::g::ObjC::Object* View::Handle()
{
    return _handle;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
