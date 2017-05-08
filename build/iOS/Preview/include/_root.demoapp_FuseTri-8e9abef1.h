// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/demo-app.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileBool;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct demoapp_FuseTriggersWhileBool_Value_Property;}

namespace g{

// internal sealed class demoapp_FuseTriggersWhileBool_Value_Property :1
// {
::g::Uno::UX::Property1_type* demoapp_FuseTriggersWhileBool_Value_Property_typeof();
void demoapp_FuseTriggersWhileBool_Value_Property__ctor_3_fn(demoapp_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name);
void demoapp_FuseTriggersWhileBool_Value_Property__Get1_fn(demoapp_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void demoapp_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, demoapp_FuseTriggersWhileBool_Value_Property** __retval);
void demoapp_FuseTriggersWhileBool_Value_Property__get_Object_fn(demoapp_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void demoapp_FuseTriggersWhileBool_Value_Property__Set1_fn(demoapp_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct demoapp_FuseTriggersWhileBool_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::WhileBool*> _obj;

    void ctor_3(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name);
    static demoapp_FuseTriggersWhileBool_Value_Property* New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
