// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/demo-app.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.demoapp_FuseCon-50a990e4.h>
#include <Fuse.Controls.Image.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class demoapp_FuseControlsImage_Color_Property :93
// {
static void demoapp_FuseControlsImage_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Image_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Image*/], offsetof(::g::demoapp_FuseControlsImage_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* demoapp_FuseControlsImage_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(demoapp_FuseControlsImage_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("demoapp_FuseControlsImage_Color_Property", options);
    type->fp_build_ = demoapp_FuseControlsImage_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))demoapp_FuseControlsImage_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))demoapp_FuseControlsImage_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))demoapp_FuseControlsImage_Color_Property__Set1_fn;
    return type;
}

// public demoapp_FuseControlsImage_Color_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) :96
void demoapp_FuseControlsImage_Color_Property__ctor_3_fn(demoapp_FuseControlsImage_Color_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :98
void demoapp_FuseControlsImage_Color_Property__Get1_fn(demoapp_FuseControlsImage_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("demoapp_FuseControlsImage_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->Color(), void();
}

// public demoapp_FuseControlsImage_Color_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) :96
void demoapp_FuseControlsImage_Color_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, demoapp_FuseControlsImage_Color_Property** __retval)
{
    *__retval = demoapp_FuseControlsImage_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :97
void demoapp_FuseControlsImage_Color_Property__get_Object_fn(demoapp_FuseControlsImage_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :99
void demoapp_FuseControlsImage_Color_Property__Set1_fn(demoapp_FuseControlsImage_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("demoapp_FuseControlsImage_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->Color(v_);
}

// public demoapp_FuseControlsImage_Color_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) [instance] :96
void demoapp_FuseControlsImage_Color_Property::ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public demoapp_FuseControlsImage_Color_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) [static] :96
demoapp_FuseControlsImage_Color_Property* demoapp_FuseControlsImage_Color_Property::New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    demoapp_FuseControlsImage_Color_Property* obj1 = (demoapp_FuseControlsImage_Color_Property*)uNew(demoapp_FuseControlsImage_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
