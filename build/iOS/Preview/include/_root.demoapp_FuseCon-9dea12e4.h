// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/demo-app.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Shape;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct demoapp_FuseControlsShape_Color_Property;}

namespace g{

// internal sealed class demoapp_FuseControlsShape_Color_Property :26
// {
::g::Uno::UX::Property1_type* demoapp_FuseControlsShape_Color_Property_typeof();
void demoapp_FuseControlsShape_Color_Property__ctor_3_fn(demoapp_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name);
void demoapp_FuseControlsShape_Color_Property__Get1_fn(demoapp_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void demoapp_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, demoapp_FuseControlsShape_Color_Property** __retval);
void demoapp_FuseControlsShape_Color_Property__get_Object_fn(demoapp_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void demoapp_FuseControlsShape_Color_Property__Set1_fn(demoapp_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void demoapp_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(demoapp_FuseControlsShape_Color_Property* __this, bool* __retval);

struct demoapp_FuseControlsShape_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Shape*> _obj;

    void ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
    static demoapp_FuseControlsShape_Color_Property* New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
