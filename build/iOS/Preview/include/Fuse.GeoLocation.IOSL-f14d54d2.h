// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.GeoLocation.ILoc-89084c59.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace GeoLocation{struct IOSLocationProvider;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct Queue;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// internal sealed extern class IOSLocationProvider :13
// {
struct IOSLocationProvider_type : uType
{
    ::g::Fuse::GeoLocation::ILocationTracker interface0;
};

IOSLocationProvider_type* IOSLocationProvider_typeof();
void IOSLocationProvider__ctor__fn(IOSLocationProvider* __this);
void IOSLocationProvider__ConvertLocation_fn(::g::ObjC::Object* location, ::g::Fuse::GeoLocation::Location** __retval);
void IOSLocationProvider__GetCLLocationProperties_fn(::g::ObjC::Object* handle, double* timeIntervalSince1970, double* latitude, double* longitude, double* horizontalAccuracy, double* altitude, double* speed);
void IOSLocationProvider__GetLastKnownPosition_fn(IOSLocationProvider* __this, ::g::Fuse::GeoLocation::Location** __retval);
void IOSLocationProvider__GetLastKnownPosition1_fn(::g::ObjC::Object* handle, ::g::ObjC::Object** __retval);
void IOSLocationProvider__GetLocation_fn(IOSLocationProvider* __this, ::g::Uno::Threading::Promise* promise, double* timeout);
void IOSLocationProvider__Init_fn(IOSLocationProvider* __this, uDelegate* onReady);
void IOSLocationProvider__New1_fn(IOSLocationProvider** __retval);
void IOSLocationProvider__OnError_fn(IOSLocationProvider* __this, uString* errorString);
void IOSLocationProvider__OnListenerRemoved_fn(IOSLocationProvider* __this);
void IOSLocationProvider__OnLocationChanged_fn(IOSLocationProvider* __this, ::g::ObjC::Object* clLocation);
void IOSLocationProvider__RequestAuthorization_fn(IOSLocationProvider* __this, int* type);
void IOSLocationProvider__RequestAuthorization1_fn(::g::ObjC::Object* handle, int* type);
void IOSLocationProvider__SetCLLocationManagerParams_fn(::g::ObjC::Object* handle, double* desiredAccuracyInMeters);
void IOSLocationProvider__StartListening_fn(IOSLocationProvider* __this, uDelegate* onLocationChanged, uDelegate* onLocationError, int* minimumReportInterval, double* desiredAccuracyInMeters);
void IOSLocationProvider__StartUpdatingLocation_fn(::g::ObjC::Object* handle);
void IOSLocationProvider__StopListening_fn(IOSLocationProvider* __this);
void IOSLocationProvider__StopUpdatingLocation_fn(::g::ObjC::Object* handle);

struct IOSLocationProvider : uObject
{
    uStrong<uDelegate*> _continuousErrorListener;
    uStrong<uDelegate*> _continuousLocationListener;
    double _desiredAccuracyInMeters;
    uStrong< ::g::ObjC::Object*> _lm;
    uStrong< ::g::ObjC::Object*> _lmDelegate;
    uStrong< ::g::Uno::Collections::Queue*> _waitingPromises;

    void ctor_();
    ::g::Fuse::GeoLocation::Location* GetLastKnownPosition();
    void GetLocation(::g::Uno::Threading::Promise* promise, double timeout);
    void Init(uDelegate* onReady);
    void OnError(uString* errorString);
    void OnListenerRemoved();
    void OnLocationChanged(::g::ObjC::Object* clLocation);
    void RequestAuthorization(int type);
    void StartListening(uDelegate* onLocationChanged, uDelegate* onLocationError, int minimumReportInterval, double desiredAccuracyInMeters);
    void StopListening();
    static ::g::Fuse::GeoLocation::Location* ConvertLocation(::g::ObjC::Object* location);
    static void GetCLLocationProperties(::g::ObjC::Object* handle, double* timeIntervalSince1970, double* latitude, double* longitude, double* horizontalAccuracy, double* altitude, double* speed);
    static ::g::ObjC::Object* GetLastKnownPosition1(::g::ObjC::Object* handle);
    static IOSLocationProvider* New1();
    static void RequestAuthorization1(::g::ObjC::Object* handle, int type);
    static void SetCLLocationManagerParams(::g::ObjC::Object* handle, double desiredAccuracyInMeters);
    static void StartUpdatingLocation(::g::ObjC::Object* handle);
    static void StopUpdatingLocation(::g::ObjC::Object* handle);
};
// }

}}} // ::g::Fuse::GeoLocation
