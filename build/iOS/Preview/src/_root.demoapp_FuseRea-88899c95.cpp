// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/demo-app.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.demoapp_FuseRea-88899c95.h>
#include <Fuse.Reactive.With.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class demoapp_FuseReactiveWith_Data_Property :101
// {
static void demoapp_FuseReactiveWith_Data_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::With_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Reactive.With*/], offsetof(::g::demoapp_FuseReactiveWith_Data_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* demoapp_FuseReactiveWith_Data_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(demoapp_FuseReactiveWith_Data_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("demoapp_FuseReactiveWith_Data_Property", options);
    type->fp_build_ = demoapp_FuseReactiveWith_Data_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))demoapp_FuseReactiveWith_Data_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))demoapp_FuseReactiveWith_Data_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))demoapp_FuseReactiveWith_Data_Property__Set1_fn;
    return type;
}

// public demoapp_FuseReactiveWith_Data_Property(Fuse.Reactive.With obj, Uno.UX.Selector name) :104
void demoapp_FuseReactiveWith_Data_Property__ctor_3_fn(demoapp_FuseReactiveWith_Data_Property* __this, ::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed object Get(Uno.UX.PropertyObject obj) :106
void demoapp_FuseReactiveWith_Data_Property__Get1_fn(demoapp_FuseReactiveWith_Data_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("demoapp_FuseReactiveWith_Data_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Reactive::With*>(obj, ::TYPES[0/*Fuse.Reactive.With*/]))->Data(), void();
}

// public demoapp_FuseReactiveWith_Data_Property New(Fuse.Reactive.With obj, Uno.UX.Selector name) :104
void demoapp_FuseReactiveWith_Data_Property__New1_fn(::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector* name, demoapp_FuseReactiveWith_Data_Property** __retval)
{
    *__retval = demoapp_FuseReactiveWith_Data_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :105
void demoapp_FuseReactiveWith_Data_Property__get_Object_fn(demoapp_FuseReactiveWith_Data_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :107
void demoapp_FuseReactiveWith_Data_Property__Set1_fn(demoapp_FuseReactiveWith_Data_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("demoapp_FuseReactiveWith_Data_Property", "Set(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Reactive::With*>(obj, ::TYPES[0/*Fuse.Reactive.With*/]))->Data(v);
}

// public demoapp_FuseReactiveWith_Data_Property(Fuse.Reactive.With obj, Uno.UX.Selector name) [instance] :104
void demoapp_FuseReactiveWith_Data_Property::ctor_3(::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public demoapp_FuseReactiveWith_Data_Property New(Fuse.Reactive.With obj, Uno.UX.Selector name) [static] :104
demoapp_FuseReactiveWith_Data_Property* demoapp_FuseReactiveWith_Data_Property::New1(::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector name)
{
    demoapp_FuseReactiveWith_Data_Property* obj1 = (demoapp_FuseReactiveWith_Data_Property*)uNew(demoapp_FuseReactiveWith_Data_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
