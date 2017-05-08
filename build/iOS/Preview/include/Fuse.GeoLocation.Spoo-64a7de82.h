// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/spoof/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.GeoLocation.ILoc-89084c59.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct SpoofLocationProvider;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// public sealed class SpoofLocationProvider :10
// {
struct SpoofLocationProvider_type : uType
{
    ::g::Fuse::GeoLocation::ILocationTracker interface0;
};

SpoofLocationProvider_type* SpoofLocationProvider_typeof();
void SpoofLocationProvider__ctor__fn(SpoofLocationProvider* __this);
void SpoofLocationProvider__GetLastKnownPosition_fn(SpoofLocationProvider* __this, ::g::Fuse::GeoLocation::Location** __retval);
void SpoofLocationProvider__GetLocation_fn(SpoofLocationProvider* __this, ::g::Uno::Threading::Promise* promise, double* timeout);
void SpoofLocationProvider__Init_fn(SpoofLocationProvider* __this, uDelegate* onReady);
void SpoofLocationProvider__New1_fn(SpoofLocationProvider** __retval);
void SpoofLocationProvider__RequestAuthorization_fn(SpoofLocationProvider* __this, int* type);
void SpoofLocationProvider__StartListening_fn(SpoofLocationProvider* __this, uDelegate* onLocationChanged, uDelegate* onLocationError, int* minimumReportInterval, double* desiredAccuracyInMeters);
void SpoofLocationProvider__StopListening_fn(SpoofLocationProvider* __this);

struct SpoofLocationProvider : uObject
{
    uStrong< ::g::Fuse::GeoLocation::Location*> SpoofLocation;

    void ctor_();
    ::g::Fuse::GeoLocation::Location* GetLastKnownPosition();
    void GetLocation(::g::Uno::Threading::Promise* promise, double timeout);
    void Init(uDelegate* onReady);
    void RequestAuthorization(int type);
    void StartListening(uDelegate* onLocationChanged, uDelegate* onLocationError, int minimumReportInterval, double desiredAccuracyInMeters);
    void StopListening();
    static SpoofLocationProvider* New1();
};
// }

}}} // ::g::Fuse::GeoLocation
