// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/demo-app.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.demoapp_FuseLay-3123bba9.h>
#include <Fuse.Layouts.Column.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class demoapp_FuseLayoutsColumn_Width_Property :85
// {
static void demoapp_FuseLayoutsColumn_Width_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Layouts::Column_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Layouts.Column*/], offsetof(::g::demoapp_FuseLayoutsColumn_Width_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* demoapp_FuseLayoutsColumn_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(demoapp_FuseLayoutsColumn_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("demoapp_FuseLayoutsColumn_Width_Property", options);
    type->fp_build_ = demoapp_FuseLayoutsColumn_Width_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))demoapp_FuseLayoutsColumn_Width_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))demoapp_FuseLayoutsColumn_Width_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))demoapp_FuseLayoutsColumn_Width_Property__Set1_fn;
    return type;
}

// public demoapp_FuseLayoutsColumn_Width_Property(Fuse.Layouts.Column obj, Uno.UX.Selector name) :88
void demoapp_FuseLayoutsColumn_Width_Property__ctor_3_fn(demoapp_FuseLayoutsColumn_Width_Property* __this, ::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :90
void demoapp_FuseLayoutsColumn_Width_Property__Get1_fn(demoapp_FuseLayoutsColumn_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("demoapp_FuseLayoutsColumn_Width_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Layouts::Column*>(obj, ::TYPES[0/*Fuse.Layouts.Column*/]))->Width(), void();
}

// public demoapp_FuseLayoutsColumn_Width_Property New(Fuse.Layouts.Column obj, Uno.UX.Selector name) :88
void demoapp_FuseLayoutsColumn_Width_Property__New1_fn(::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector* name, demoapp_FuseLayoutsColumn_Width_Property** __retval)
{
    *__retval = demoapp_FuseLayoutsColumn_Width_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :89
void demoapp_FuseLayoutsColumn_Width_Property__get_Object_fn(demoapp_FuseLayoutsColumn_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :91
void demoapp_FuseLayoutsColumn_Width_Property__Set1_fn(demoapp_FuseLayoutsColumn_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("demoapp_FuseLayoutsColumn_Width_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Layouts::Column*>(obj, ::TYPES[0/*Fuse.Layouts.Column*/]))->Width(v_);
}

// public demoapp_FuseLayoutsColumn_Width_Property(Fuse.Layouts.Column obj, Uno.UX.Selector name) [instance] :88
void demoapp_FuseLayoutsColumn_Width_Property::ctor_3(::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public demoapp_FuseLayoutsColumn_Width_Property New(Fuse.Layouts.Column obj, Uno.UX.Selector name) [static] :88
demoapp_FuseLayoutsColumn_Width_Property* demoapp_FuseLayoutsColumn_Width_Property::New1(::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector name)
{
    demoapp_FuseLayoutsColumn_Width_Property* obj1 = (demoapp_FuseLayoutsColumn_Width_Property*)uNew(demoapp_FuseLayoutsColumn_Width_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
