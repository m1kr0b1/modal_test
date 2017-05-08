// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/demo-app.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Visual.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct NavigationControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct demoapp_FuseControlsNavigationControl_Active_Property;}

namespace g{

// internal sealed class demoapp_FuseControlsNavigationControl_Active_Property :18
// {
::g::Uno::UX::Property1_type* demoapp_FuseControlsNavigationControl_Active_Property_typeof();
void demoapp_FuseControlsNavigationControl_Active_Property__ctor_3_fn(demoapp_FuseControlsNavigationControl_Active_Property* __this, ::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector* name);
void demoapp_FuseControlsNavigationControl_Active_Property__Get1_fn(demoapp_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual** __retval);
void demoapp_FuseControlsNavigationControl_Active_Property__New1_fn(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector* name, demoapp_FuseControlsNavigationControl_Active_Property** __retval);
void demoapp_FuseControlsNavigationControl_Active_Property__get_Object_fn(demoapp_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void demoapp_FuseControlsNavigationControl_Active_Property__Set1_fn(demoapp_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual* v, uObject* origin);

struct demoapp_FuseControlsNavigationControl_Active_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::NavigationControl*> _obj;

    void ctor_3(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector name);
    static demoapp_FuseControlsNavigationControl_Active_Property* New1(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
