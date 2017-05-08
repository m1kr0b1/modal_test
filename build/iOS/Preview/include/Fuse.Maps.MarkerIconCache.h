// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Maps/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Maps{struct MarkerIconCache;}}}
namespace g{namespace Fuse{namespace Maps{struct MarkerSource;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Maps{

// internal sealed class MarkerIconCache :905
// {
uType* MarkerIconCache_typeof();
void MarkerIconCache__ctor__fn(MarkerIconCache* __this, uDelegate* changeHandler);
void MarkerIconCache__Get_fn(MarkerIconCache* __this, ::g::Uno::UX::FileSource* src, uString** __retval);
void MarkerIconCache__MakeKey_fn(::g::Uno::UX::FileSource* src, uString** __retval);
void MarkerIconCache__New1_fn(uDelegate* changeHandler, MarkerIconCache** __retval);
void MarkerIconCache__OnChanged_fn(MarkerIconCache* __this);

struct MarkerIconCache : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _cache;
    uStrong<uDelegate*> _changeHandler;

    void ctor_(uDelegate* changeHandler);
    uString* Get(::g::Uno::UX::FileSource* src);
    void OnChanged();
    static uString* MakeKey(::g::Uno::UX::FileSource* src);
    static MarkerIconCache* New1(uDelegate* changeHandler);
};
// }

}}} // ::g::Fuse::Maps
