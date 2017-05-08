// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/demo-app.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Double.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct MapMarker;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct demoapp_FuseControlsMapMarker_Longitude_Property;}

namespace g{

// internal sealed class demoapp_FuseControlsMapMarker_Longitude_Property :117
// {
::g::Uno::UX::Property1_type* demoapp_FuseControlsMapMarker_Longitude_Property_typeof();
void demoapp_FuseControlsMapMarker_Longitude_Property__ctor_3_fn(demoapp_FuseControlsMapMarker_Longitude_Property* __this, ::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector* name);
void demoapp_FuseControlsMapMarker_Longitude_Property__Get1_fn(demoapp_FuseControlsMapMarker_Longitude_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval);
void demoapp_FuseControlsMapMarker_Longitude_Property__New1_fn(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector* name, demoapp_FuseControlsMapMarker_Longitude_Property** __retval);
void demoapp_FuseControlsMapMarker_Longitude_Property__get_Object_fn(demoapp_FuseControlsMapMarker_Longitude_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void demoapp_FuseControlsMapMarker_Longitude_Property__Set1_fn(demoapp_FuseControlsMapMarker_Longitude_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin);

struct demoapp_FuseControlsMapMarker_Longitude_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::MapMarker*> _obj;

    void ctor_3(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector name);
    static demoapp_FuseControlsMapMarker_Longitude_Property* New1(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
