// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/demo-app.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.demoapp_FuseCon-bb7323b5.h>
#include <Fuse.Controls.MapMarker.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class demoapp_FuseControlsMapMarker_Longitude_Property :117
// {
static void demoapp_FuseControlsMapMarker_Longitude_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::MapMarker_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.MapMarker*/], offsetof(::g::demoapp_FuseControlsMapMarker_Longitude_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* demoapp_FuseControlsMapMarker_Longitude_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(demoapp_FuseControlsMapMarker_Longitude_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("demoapp_FuseControlsMapMarker_Longitude_Property", options);
    type->fp_build_ = demoapp_FuseControlsMapMarker_Longitude_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))demoapp_FuseControlsMapMarker_Longitude_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))demoapp_FuseControlsMapMarker_Longitude_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))demoapp_FuseControlsMapMarker_Longitude_Property__Set1_fn;
    return type;
}

// public demoapp_FuseControlsMapMarker_Longitude_Property(Fuse.Controls.MapMarker obj, Uno.UX.Selector name) :120
void demoapp_FuseControlsMapMarker_Longitude_Property__ctor_3_fn(demoapp_FuseControlsMapMarker_Longitude_Property* __this, ::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed double Get(Uno.UX.PropertyObject obj) :122
void demoapp_FuseControlsMapMarker_Longitude_Property__Get1_fn(demoapp_FuseControlsMapMarker_Longitude_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval)
{
    uStackFrame __("demoapp_FuseControlsMapMarker_Longitude_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::MapMarker*>(obj, ::TYPES[0/*Fuse.Controls.MapMarker*/]))->Longitude(), void();
}

// public demoapp_FuseControlsMapMarker_Longitude_Property New(Fuse.Controls.MapMarker obj, Uno.UX.Selector name) :120
void demoapp_FuseControlsMapMarker_Longitude_Property__New1_fn(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector* name, demoapp_FuseControlsMapMarker_Longitude_Property** __retval)
{
    *__retval = demoapp_FuseControlsMapMarker_Longitude_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :121
void demoapp_FuseControlsMapMarker_Longitude_Property__get_Object_fn(demoapp_FuseControlsMapMarker_Longitude_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, double v, Uno.UX.IPropertyListener origin) :123
void demoapp_FuseControlsMapMarker_Longitude_Property__Set1_fn(demoapp_FuseControlsMapMarker_Longitude_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin)
{
    uStackFrame __("demoapp_FuseControlsMapMarker_Longitude_Property", "Set(Uno.UX.PropertyObject,double,Uno.UX.IPropertyListener)");
    double v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::MapMarker*>(obj, ::TYPES[0/*Fuse.Controls.MapMarker*/]))->Longitude(v_);
}

// public demoapp_FuseControlsMapMarker_Longitude_Property(Fuse.Controls.MapMarker obj, Uno.UX.Selector name) [instance] :120
void demoapp_FuseControlsMapMarker_Longitude_Property::ctor_3(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public demoapp_FuseControlsMapMarker_Longitude_Property New(Fuse.Controls.MapMarker obj, Uno.UX.Selector name) [static] :120
demoapp_FuseControlsMapMarker_Longitude_Property* demoapp_FuseControlsMapMarker_Longitude_Property::New1(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector name)
{
    demoapp_FuseControlsMapMarker_Longitude_Property* obj1 = (demoapp_FuseControlsMapMarker_Longitude_Property*)uNew(demoapp_FuseControlsMapMarker_Longitude_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
