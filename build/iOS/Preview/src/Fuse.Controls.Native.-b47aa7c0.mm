// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-4016d338.h>
#include <Fuse.Controls.Native.-5999be91.h>
#include <Fuse.Controls.Native.-b47aa7c0.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action-2.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <uObjC.Foreign.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Slider :2145
// {
static void Slider_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Native::IRangeViewHost_typeof();
    type->SetInterfaces(
        ::TYPES[1/*Uno.IDisposable*/], offsetof(Slider_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Slider_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Slider_type, interface2),
        ::g::Fuse::Controls::Native::IRangeView_typeof(), offsetof(Slider_type, interface3));
    type->SetFields(7,
        ::TYPES[2/*Fuse.Controls.Native.IRangeViewHost*/], offsetof(::g::Fuse::Controls::Native::iOS::Slider, _host), 0,
        ::TYPES[1/*Uno.IDisposable*/], offsetof(::g::Fuse::Controls::Native::iOS::Slider, _valueChangedEvent), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Slider__New3_fn, 0, true, type, 1, ::TYPES[2/*Fuse.Controls.Native.IRangeViewHost*/]),
        new uFunction("set_Progress", NULL, (void*)Slider__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Slider_type* Slider_typeof()
{
    static uSStrong<Slider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(Slider_type);
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.iOS.Slider", options);
    type->fp_build_ = Slider_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))Slider__Dispose_fn;
    type->interface3.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Slider__Dispose_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) :2157
void Slider__ctor_5_fn(Slider* __this, uObject* host)
{
    __this->ctor_5(host);
}

// private static ObjC.Object Create() :2172
void Slider__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = Slider::Create();
}

// public override sealed void Dispose() :2163
void Slider__Dispose_fn(Slider* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Slider", "Dispose()");
    __this->_host = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_valueChangedEvent), ::TYPES[1/*Uno.IDisposable*/]));
    __this->_valueChangedEvent = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static float GetValue(ObjC.Object handle) :2192
void Slider__GetValue_fn(::g::ObjC::Object* handle, float* __retval)
{
    *__retval = Slider::GetValue(handle);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) :2157
void Slider__New3_fn(uObject* host, Slider** __retval)
{
    *__retval = Slider::New3(host);
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object uiEvent) :2180
void Slider__OnValueChanged_fn(Slider* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent)
{
    __this->OnValueChanged(sender, uiEvent);
}

// public void set_Progress(double value) :2150
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// private static void SetValue(ObjC.Object handle, float value) :2199
void Slider__SetValue_fn(::g::ObjC::Object* handle, float* value)
{
    Slider::SetValue(handle, *value);
}

// private float get_Value() :2187
void Slider__get_Value_fn(Slider* __this, float* __retval)
{
    *__retval = __this->Value();
}

// private void set_Value(float value) :2188
void Slider__set_Value_fn(Slider* __this, float* value)
{
    __this->Value(*value);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) [instance] :2157
void Slider::ctor_5(uObject* host)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Slider", ".ctor(Fuse.Controls.Native.IRangeViewHost)");
    ctor_4(Slider::Create());
    _host = host;
    _valueChangedEvent = ::g::Fuse::Controls::Native::iOS::UIControlEvent::AddValueChangedCallback(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)Slider__OnValueChanged_fn, this));
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object uiEvent) [instance] :2180
void Slider::OnValueChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Slider", "OnValueChanged(ObjC.Object,ObjC.Object)");
    ::g::Fuse::Controls::Native::IRangeViewHost::OnProgressChanged(uInterface(uPtr(_host), ::TYPES[2/*Fuse.Controls.Native.IRangeViewHost*/]), (double)(Value() / 100.0f));
}

// public void set_Progress(double value) [instance] :2150
void Slider::Progress(double value)
{
    Value((float)value * 100.0f);
}

// private float get_Value() [instance] :2187
float Slider::Value()
{
    return Slider::GetValue(Handle());
}

// private void set_Value(float value) [instance] :2188
void Slider::Value(float value)
{
    Slider::SetValue(Handle(), value);
}

// private static ObjC.Object Create() [static] :2172
::g::ObjC::Object* Slider::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            ::UISlider* slider = [[::UISlider alloc] init];
            [slider setMinimumValue:   0.0f];
            [slider setMaximumValue: 100.0f];
            return slider;
        } ());
        
    }
    
}

// private static float GetValue(ObjC.Object handle) [static] :2192
float Slider::GetValue(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> float
        {
            ::UISlider* slider = (::UISlider*)handle;
            return [slider value];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) [static] :2157
Slider* Slider::New3(uObject* host)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_5(host);
    return obj1;
}

// private static void SetValue(ObjC.Object handle, float value) [static] :2199
void Slider::SetValue(::g::ObjC::Object* handle, float value)
{
    @autoreleasepool
    {
        [] (::id handle, float value) -> void
        {
            ::UISlider* slider = (::UISlider*)handle;
            [slider setValue:value animated:false];
        } (::g::ObjC::Object::GetHandle(handle), value);
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
