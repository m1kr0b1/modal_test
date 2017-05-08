// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace ImageTools{struct BoolPromiseCallback;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace ImageTools{

// internal sealed class BoolPromiseCallback :571
// {
uType* BoolPromiseCallback_typeof();
void BoolPromiseCallback__ctor__fn(BoolPromiseCallback* __this, ::g::Uno::Threading::Promise* p);
void BoolPromiseCallback__New1_fn(::g::Uno::Threading::Promise* p, BoolPromiseCallback** __retval);
void BoolPromiseCallback__Reject_fn(BoolPromiseCallback* __this, uString* reason);
void BoolPromiseCallback__Resolve_fn(BoolPromiseCallback* __this);

struct BoolPromiseCallback : uObject
{
    uStrong< ::g::Uno::Threading::Promise*> _p;

    void ctor_(::g::Uno::Threading::Promise* p);
    void Reject(uString* reason);
    void Resolve();
    static BoolPromiseCallback* New1(::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::ImageTools
