// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/demo-app.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct demoapp_FuseElementsElement_Width_Property;}

namespace g{

// internal sealed class demoapp_FuseElementsElement_Width_Property :44
// {
::g::Uno::UX::Property1_type* demoapp_FuseElementsElement_Width_Property_typeof();
void demoapp_FuseElementsElement_Width_Property__ctor_3_fn(demoapp_FuseElementsElement_Width_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void demoapp_FuseElementsElement_Width_Property__Get1_fn(demoapp_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* __retval);
void demoapp_FuseElementsElement_Width_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, demoapp_FuseElementsElement_Width_Property** __retval);
void demoapp_FuseElementsElement_Width_Property__get_Object_fn(demoapp_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void demoapp_FuseElementsElement_Width_Property__Set1_fn(demoapp_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* v, uObject* origin);

struct demoapp_FuseElementsElement_Width_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static demoapp_FuseElementsElement_Width_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
