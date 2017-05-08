// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/demo-app.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.demoapp_FuseCon-9d0d393b.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class demoapp_FuseControlsTextControl_Color_Property :35
// {
static void demoapp_FuseControlsTextControl_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.TextControl*/], offsetof(::g::demoapp_FuseControlsTextControl_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* demoapp_FuseControlsTextControl_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(demoapp_FuseControlsTextControl_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("demoapp_FuseControlsTextControl_Color_Property", options);
    type->fp_build_ = demoapp_FuseControlsTextControl_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))demoapp_FuseControlsTextControl_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))demoapp_FuseControlsTextControl_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))demoapp_FuseControlsTextControl_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))demoapp_FuseControlsTextControl_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public demoapp_FuseControlsTextControl_Color_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :38
void demoapp_FuseControlsTextControl_Color_Property__ctor_3_fn(demoapp_FuseControlsTextControl_Color_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :40
void demoapp_FuseControlsTextControl_Color_Property__Get1_fn(demoapp_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("demoapp_FuseControlsTextControl_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[0/*Fuse.Controls.TextControl*/]))->Color(), void();
}

// public demoapp_FuseControlsTextControl_Color_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :38
void demoapp_FuseControlsTextControl_Color_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, demoapp_FuseControlsTextControl_Color_Property** __retval)
{
    *__retval = demoapp_FuseControlsTextControl_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :39
void demoapp_FuseControlsTextControl_Color_Property__get_Object_fn(demoapp_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :41
void demoapp_FuseControlsTextControl_Color_Property__Set1_fn(demoapp_FuseControlsTextControl_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("demoapp_FuseControlsTextControl_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[0/*Fuse.Controls.TextControl*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :42
void demoapp_FuseControlsTextControl_Color_Property__get_SupportsOriginSetter_fn(demoapp_FuseControlsTextControl_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public demoapp_FuseControlsTextControl_Color_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :38
void demoapp_FuseControlsTextControl_Color_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public demoapp_FuseControlsTextControl_Color_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :38
demoapp_FuseControlsTextControl_Color_Property* demoapp_FuseControlsTextControl_Color_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    demoapp_FuseControlsTextControl_Color_Property* obj1 = (demoapp_FuseControlsTextControl_Color_Property*)uNew(demoapp_FuseControlsTextControl_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
