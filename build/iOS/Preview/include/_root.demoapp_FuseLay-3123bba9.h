// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/demo-app.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct demoapp_FuseLayoutsColumn_Width_Property;}

namespace g{

// internal sealed class demoapp_FuseLayoutsColumn_Width_Property :85
// {
::g::Uno::UX::Property1_type* demoapp_FuseLayoutsColumn_Width_Property_typeof();
void demoapp_FuseLayoutsColumn_Width_Property__ctor_3_fn(demoapp_FuseLayoutsColumn_Width_Property* __this, ::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector* name);
void demoapp_FuseLayoutsColumn_Width_Property__Get1_fn(demoapp_FuseLayoutsColumn_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void demoapp_FuseLayoutsColumn_Width_Property__New1_fn(::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector* name, demoapp_FuseLayoutsColumn_Width_Property** __retval);
void demoapp_FuseLayoutsColumn_Width_Property__get_Object_fn(demoapp_FuseLayoutsColumn_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void demoapp_FuseLayoutsColumn_Width_Property__Set1_fn(demoapp_FuseLayoutsColumn_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct demoapp_FuseLayoutsColumn_Width_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Layouts::Column*> _obj;

    void ctor_3(::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector name);
    static demoapp_FuseLayoutsColumn_Width_Property* New1(::g::Fuse::Layouts::Column* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
