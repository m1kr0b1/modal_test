// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView__Template3;}
namespace g{struct MainView__Template3__Template4;}

namespace g{

// public partial sealed class MainView.Template3.Template4 :148
// {
::g::Uno::UX::Template_type* MainView__Template3__Template4_typeof();
void MainView__Template3__Template4__ctor_1_fn(MainView__Template3__Template4* __this, ::g::MainView__Template3* parent, ::g::Fuse::Reactive::Each* parentInstance);
void MainView__Template3__Template4__New1_fn(MainView__Template3__Template4* __this, uObject** __retval);
void MainView__Template3__Template4__New2_fn(::g::MainView__Template3* parent, ::g::Fuse::Reactive::Each* parentInstance, MainView__Template3__Template4** __retval);

struct MainView__Template3__Template4 : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView__Template3__Template4_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::MainView__Template3*> __parent1;
    uWeak< ::g::Fuse::Reactive::Each*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView__Template3__Template4_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MainView__Template3__Template4_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MainView__Template3__Template4_typeof()->Init(), __selector2_; }
    uStrong< ::g::Uno::UX::Property1*> __self_Label_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_Latitude_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_Longitude_inst1;

    void ctor_1(::g::MainView__Template3* parent, ::g::Fuse::Reactive::Each* parentInstance);
    static MainView__Template3__Template4* New2(::g::MainView__Template3* parent, ::g::Fuse::Reactive::Each* parentInstance);
};
// }

} // ::g
