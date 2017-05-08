// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace GeoLocation{struct IOSLocationProvider__The;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// private sealed class IOSLocationProvider.The :175
// {
uType* IOSLocationProvider__The_typeof();
void IOSLocationProvider__The__ctor__fn(IOSLocationProvider__The* __this, ::g::Uno::Threading::Promise* promise);
void IOSLocationProvider__The__New1_fn(::g::Uno::Threading::Promise* promise, IOSLocationProvider__The** __retval);
void IOSLocationProvider__The__TimedOut_fn(IOSLocationProvider__The* __this);

struct IOSLocationProvider__The : uObject
{
    uStrong< ::g::Uno::Threading::Promise*> _promise;

    void ctor_(::g::Uno::Threading::Promise* promise);
    void TimedOut();
    static IOSLocationProvider__The* New1(::g::Uno::Threading::Promise* promise);
};
// }

}}} // ::g::Fuse::GeoLocation
