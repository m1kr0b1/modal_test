// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/demo-app.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct demoapp_FuseReactiveEach_Items_Property;}

namespace g{

// internal sealed class demoapp_FuseReactiveEach_Items_Property :52
// {
::g::Uno::UX::Property1_type* demoapp_FuseReactiveEach_Items_Property_typeof();
void demoapp_FuseReactiveEach_Items_Property__ctor_3_fn(demoapp_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name);
void demoapp_FuseReactiveEach_Items_Property__Get1_fn(demoapp_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void demoapp_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, demoapp_FuseReactiveEach_Items_Property** __retval);
void demoapp_FuseReactiveEach_Items_Property__get_Object_fn(demoapp_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void demoapp_FuseReactiveEach_Items_Property__Set1_fn(demoapp_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);

struct demoapp_FuseReactiveEach_Items_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Reactive::Each*> _obj;

    void ctor_3(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
    static demoapp_FuseReactiveEach_Items_Property* New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
