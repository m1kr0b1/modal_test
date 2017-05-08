// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreLocation/CoreLocation.h>
#include <Fuse.GeoLocation.GeoC-86dbdb21.h>
#include <Fuse.GeoLocation.GeoL-8054bfb4.h>
#include <Fuse.GeoLocation.IOSL-56a5583.h>
#include <Fuse.GeoLocation.IOSL-f14d54d2.h>
#include <Fuse.GeoLocation.Location.h>
#include <Fuse.Timer.h>
#include <iOS/LocationManagerDelegate.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.String.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.FutureState.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Time.CalendarSystem.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.LocalDateTime.h>
#include <uObjC.Foreign.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace GeoLocation{

// internal sealed extern class IOSLocationProvider :13
// {
static void IOSLocationProvider_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL), NULL);
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::GeoLocation::ILocationTracker_typeof(), offsetof(IOSLocationProvider_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), offsetof(::g::Fuse::GeoLocation::IOSLocationProvider, _continuousErrorListener), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL), offsetof(::g::Fuse::GeoLocation::IOSLocationProvider, _continuousLocationListener), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::IOSLocationProvider, _desiredAccuracyInMeters), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::GeoLocation::IOSLocationProvider, _lm), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::GeoLocation::IOSLocationProvider, _lmDelegate), 0,
        ::TYPES[0/*Uno.Collections.Queue<Uno.Threading.Promise<Fuse.GeoLocation.Location>>*/], offsetof(::g::Fuse::GeoLocation::IOSLocationProvider, _waitingPromises), 0);
}

IOSLocationProvider_type* IOSLocationProvider_typeof()
{
    static uSStrong<IOSLocationProvider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IOSLocationProvider);
    options.TypeSize = sizeof(IOSLocationProvider_type);
    type = (IOSLocationProvider_type*)uClassType::New("Fuse.GeoLocation.IOSLocationProvider", options);
    type->fp_build_ = IOSLocationProvider_build;
    type->fp_ctor_ = (void*)IOSLocationProvider__New1_fn;
    type->interface0.fp_GetLastKnownPosition = (void(*)(uObject*, ::g::Fuse::GeoLocation::Location**))IOSLocationProvider__GetLastKnownPosition_fn;
    type->interface0.fp_GetLocation = (void(*)(uObject*, ::g::Uno::Threading::Promise*, double*))IOSLocationProvider__GetLocation_fn;
    type->interface0.fp_StartListening = (void(*)(uObject*, uDelegate*, uDelegate*, int*, double*))IOSLocationProvider__StartListening_fn;
    type->interface0.fp_StopListening = (void(*)(uObject*))IOSLocationProvider__StopListening_fn;
    type->interface0.fp_RequestAuthorization = (void(*)(uObject*, int*))IOSLocationProvider__RequestAuthorization_fn;
    type->interface0.fp_Init = (void(*)(uObject*, uDelegate*))IOSLocationProvider__Init_fn;
    return type;
}

// public IOSLocationProvider() :23
void IOSLocationProvider__ctor__fn(IOSLocationProvider* __this)
{
    __this->ctor_();
}

// private static Fuse.GeoLocation.Location ConvertLocation(ObjC.Object location) :191
void IOSLocationProvider__ConvertLocation_fn(::g::ObjC::Object* location, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = IOSLocationProvider::ConvertLocation(location);
}

// private static void GetCLLocationProperties(ObjC.Object handle, double& timeIntervalSince1970, double& latitude, double& longitude, double& horizontalAccuracy, double& altitude, double& speed) :209
void IOSLocationProvider__GetCLLocationProperties_fn(::g::ObjC::Object* handle, double* timeIntervalSince1970, double* latitude, double* longitude, double* horizontalAccuracy, double* altitude, double* speed)
{
    IOSLocationProvider::GetCLLocationProperties(handle, timeIntervalSince1970, latitude, longitude, horizontalAccuracy, altitude, speed);
}

// public Fuse.GeoLocation.Location GetLastKnownPosition() :154
void IOSLocationProvider__GetLastKnownPosition_fn(IOSLocationProvider* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->GetLastKnownPosition();
}

// private static ObjC.Object GetLastKnownPosition(ObjC.Object handle) :160
void IOSLocationProvider__GetLastKnownPosition1_fn(::g::ObjC::Object* handle, ::g::ObjC::Object** __retval)
{
    *__retval = IOSLocationProvider::GetLastKnownPosition1(handle);
}

// public void GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) :165
void IOSLocationProvider__GetLocation_fn(IOSLocationProvider* __this, ::g::Uno::Threading::Promise* promise, double* timeout)
{
    __this->GetLocation(promise, *timeout);
}

// public void Init(Uno.Action onReady) :227
void IOSLocationProvider__Init_fn(IOSLocationProvider* __this, uDelegate* onReady)
{
    __this->Init(onReady);
}

// public IOSLocationProvider New() :23
void IOSLocationProvider__New1_fn(IOSLocationProvider** __retval)
{
    *__retval = IOSLocationProvider::New1();
}

// private void OnError(string errorString) :60
void IOSLocationProvider__OnError_fn(IOSLocationProvider* __this, uString* errorString)
{
    __this->OnError(errorString);
}

// private void OnListenerRemoved() :78
void IOSLocationProvider__OnListenerRemoved_fn(IOSLocationProvider* __this)
{
    __this->OnListenerRemoved();
}

// private void OnLocationChanged(ObjC.Object clLocation) :42
void IOSLocationProvider__OnLocationChanged_fn(IOSLocationProvider* __this, ::g::ObjC::Object* clLocation)
{
    __this->OnLocationChanged(clLocation);
}

// public void RequestAuthorization(Fuse.GeoLocation.GeoLocationAuthorizationType type) :135
void IOSLocationProvider__RequestAuthorization_fn(IOSLocationProvider* __this, int* type)
{
    __this->RequestAuthorization(*type);
}

// private static void RequestAuthorization(ObjC.Object handle, Fuse.GeoLocation.GeoLocationAuthorizationType type) :141
void IOSLocationProvider__RequestAuthorization1_fn(::g::ObjC::Object* handle, int* type)
{
    IOSLocationProvider::RequestAuthorization1(handle, *type);
}

// private static void SetCLLocationManagerParams(ObjC.Object handle, double desiredAccuracyInMeters) :106
void IOSLocationProvider__SetCLLocationManagerParams_fn(::g::ObjC::Object* handle, double* desiredAccuracyInMeters)
{
    IOSLocationProvider::SetCLLocationManagerParams(handle, *desiredAccuracyInMeters);
}

// public void StartListening(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) :91
void IOSLocationProvider__StartListening_fn(IOSLocationProvider* __this, uDelegate* onLocationChanged, uDelegate* onLocationError, int* minimumReportInterval, double* desiredAccuracyInMeters)
{
    __this->StartListening(onLocationChanged, onLocationError, *minimumReportInterval, *desiredAccuracyInMeters);
}

// private static void StartUpdatingLocation(ObjC.Object handle) :115
void IOSLocationProvider__StartUpdatingLocation_fn(::g::ObjC::Object* handle)
{
    IOSLocationProvider::StartUpdatingLocation(handle);
}

// public void StopListening() :121
void IOSLocationProvider__StopListening_fn(IOSLocationProvider* __this)
{
    __this->StopListening();
}

// private static void StopUpdatingLocation(ObjC.Object handle) :129
void IOSLocationProvider__StopUpdatingLocation_fn(::g::ObjC::Object* handle)
{
    IOSLocationProvider::StopUpdatingLocation(handle);
}

// public IOSLocationProvider() [instance] :23
void IOSLocationProvider::ctor_()
{
    _waitingPromises = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[0/*Uno.Collections.Queue<Uno.Threading.Promise<Fuse.GeoLocation.Location>>*/]));
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            CLLocationManager* lm = [[CLLocationManager alloc] init];
            lm.pausesLocationUpdatesAutomatically = false;
            LocationManagerDelegate* lmDelegate = [[LocationManagerDelegate alloc] initWithBlock: ^void (CLLocation* location)
            {
            	[&]() -> void { ::uForeignPool __foreignPool; uCast<IOSLocationProvider*>((_this).unoObject, IOSLocationProvider_typeof())->OnLocationChanged(::g::ObjC::Object::Create(location)); }();
            }
            error: ^void (NSError* err)
            {
            	[&]() -> void { ::uForeignPool __foreignPool; uCast<IOSLocationProvider*>((_this).unoObject, IOSLocationProvider_typeof())->OnError(::uObjC::UnoString(err.localizedDescription)); }();
            }];
            
            lm.delegate = lmDelegate;
            
            uCast<IOSLocationProvider*>((_this).unoObject, IOSLocationProvider_typeof())->_lm = ::g::ObjC::Object::Create(lm);
            uCast<IOSLocationProvider*>((_this).unoObject, IOSLocationProvider_typeof())->_lmDelegate = ::g::ObjC::Object::Create(lmDelegate);
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public Fuse.GeoLocation.Location GetLastKnownPosition() [instance] :154
::g::Fuse::GeoLocation::Location* IOSLocationProvider::GetLastKnownPosition()
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", "GetLastKnownPosition()");
    return IOSLocationProvider::ConvertLocation(IOSLocationProvider::GetLastKnownPosition1(_lm));
}

// public void GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) [instance] :165
void IOSLocationProvider::GetLocation(::g::Uno::Threading::Promise* promise, double timeout)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", "GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location>,double)");
    ::g::Fuse::Timer::Wait(timeout / 1000.0, uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)IOSLocationProvider__The__TimedOut_fn, IOSLocationProvider__The::New1(promise)));
    ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_waitingPromises), promise);
    IOSLocationProvider::SetCLLocationManagerParams(_lm, 0.0);
    IOSLocationProvider::StopUpdatingLocation(_lm);
    IOSLocationProvider::StartUpdatingLocation(_lm);
}

// public void Init(Uno.Action onReady) [instance] :227
void IOSLocationProvider::Init(uDelegate* onReady)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", "Init(Uno.Action)");
    uPtr(onReady)->InvokeVoid();
}

// private void OnError(string errorString) [instance] :60
void IOSLocationProvider::OnError(uString* errorString)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", "OnError(string)");
    ::g::Uno::Threading::Promise* ret2;
    ::g::Uno::Exception* exception = ::g::Uno::Exception::New2(errorString);

    if (::g::Uno::Delegate::op_Inequality(_continuousErrorListener, NULL))
        uPtr(_continuousErrorListener)->InvokeVoid(exception);

    bool promisesResolved = uPtr(_waitingPromises)->Count() > 0;

    while (uPtr(_waitingPromises)->Count() > 0)
    {
        ::g::Uno::Threading::Promise* p = (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_waitingPromises), &ret2), ret2);

        if (uPtr(p)->State() == 0)
            uPtr(p)->Reject(exception);
    }

    if (promisesResolved)
        OnListenerRemoved();
}

// private void OnListenerRemoved() [instance] :78
void IOSLocationProvider::OnListenerRemoved()
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", "OnListenerRemoved()");

    if (::g::Uno::Delegate::op_Inequality(_continuousLocationListener, NULL) || ::g::Uno::Delegate::op_Inequality(_continuousErrorListener, NULL))
        IOSLocationProvider::SetCLLocationManagerParams(_lm, _desiredAccuracyInMeters);
    else if (uPtr(_waitingPromises)->Count() == 0)
        IOSLocationProvider::StopUpdatingLocation(_lm);
}

// private void OnLocationChanged(ObjC.Object clLocation) [instance] :42
void IOSLocationProvider::OnLocationChanged(::g::ObjC::Object* clLocation)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", "OnLocationChanged(ObjC.Object)");
    ::g::Uno::Threading::Promise* ret3;
    ::g::Fuse::GeoLocation::Location* location = IOSLocationProvider::ConvertLocation(clLocation);

    if (::g::Uno::Delegate::op_Inequality(_continuousLocationListener, NULL))
        uPtr(_continuousLocationListener)->InvokeVoid(location);

    bool promisesResolved = uPtr(_waitingPromises)->Count() > 0;

    while (uPtr(_waitingPromises)->Count() > 0)
    {
        ::g::Uno::Threading::Promise* p = (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_waitingPromises), &ret3), ret3);

        if (uPtr(p)->State() == 0)
            ::g::Uno::Threading::Promise__Resolve_fn(uPtr(p), location);
    }

    if (promisesResolved)
        OnListenerRemoved();
}

// public void RequestAuthorization(Fuse.GeoLocation.GeoLocationAuthorizationType type) [instance] :135
void IOSLocationProvider::RequestAuthorization(int type)
{
    IOSLocationProvider::RequestAuthorization1(_lm, type);
}

// public void StartListening(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) [instance] :91
void IOSLocationProvider::StartListening(uDelegate* onLocationChanged, uDelegate* onLocationError, int minimumReportInterval, double desiredAccuracyInMeters)
{
    _desiredAccuracyInMeters = desiredAccuracyInMeters;
    _continuousLocationListener = onLocationChanged;
    _continuousErrorListener = onLocationError;
    IOSLocationProvider::SetCLLocationManagerParams(_lm, _desiredAccuracyInMeters);
    IOSLocationProvider::StartUpdatingLocation(_lm);
}

// public void StopListening() [instance] :121
void IOSLocationProvider::StopListening()
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", "StopListening()");
    _continuousLocationListener = NULL;
    _continuousErrorListener = NULL;
    OnListenerRemoved();
}

// private static Fuse.GeoLocation.Location ConvertLocation(ObjC.Object location) [static] :191
::g::Fuse::GeoLocation::Location* IOSLocationProvider::ConvertLocation(::g::ObjC::Object* location)
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider", "ConvertLocation(ObjC.Object)");
    double timeIntervalSince1970, latitude, longitude, horizontalAccuracy, altitude, speed;
    IOSLocationProvider::GetCLLocationProperties(location, &timeIntervalSince1970, &latitude, &longitude, &horizontalAccuracy, &altitude, &speed);
    ::g::Uno::Time::Instant instant = ::g::Uno::Time::Instant__FromMillisecondsSinceUnixEpoch((int64_t)timeIntervalSince1970 * 1000LL);
    ::g::Uno::Time::LocalDateTime* dateTime = ::g::Uno::Time::LocalDateTime::New10(instant, ::g::Uno::Time::CalendarSystem::Iso());
    return ::g::Fuse::GeoLocation::Location::New1(::g::Fuse::GeoLocation::GeoCoordinates::New1(latitude, longitude), horizontalAccuracy, altitude, speed, dateTime);
}

// private static void GetCLLocationProperties(ObjC.Object handle, double& timeIntervalSince1970, double& latitude, double& longitude, double& horizontalAccuracy, double& altitude, double& speed) [static] :209
void IOSLocationProvider::GetCLLocationProperties(::g::ObjC::Object* handle, double* timeIntervalSince1970, double* latitude, double* longitude, double* horizontalAccuracy, double* altitude, double* speed)
{
    @autoreleasepool
    {
        [] (::id handle, double* timeIntervalSince1970, double* latitude, double* longitude, double* horizontalAccuracy, double* altitude, double* speed) -> void
        {
            CLLocation* location = (CLLocation*)handle;
            *timeIntervalSince1970 = location.timestamp.timeIntervalSince1970;
            *latitude = location.coordinate.latitude;
            *longitude = location.coordinate.longitude;
            *horizontalAccuracy = location.horizontalAccuracy;
            *altitude = location.altitude;
            *speed = location.speed;
        } (::g::ObjC::Object::GetHandle(handle), timeIntervalSince1970, latitude, longitude, horizontalAccuracy, altitude, speed);
        
    }
    
}

// private static ObjC.Object GetLastKnownPosition(ObjC.Object handle) [static] :160
::g::ObjC::Object* IOSLocationProvider::GetLastKnownPosition1(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle) -> ::id
        {
            return ((CLLocationManager*)handle).location;
        } (::g::ObjC::Object::GetHandle(handle)));
        
    }
    
}

// public IOSLocationProvider New() [static] :23
IOSLocationProvider* IOSLocationProvider::New1()
{
    IOSLocationProvider* obj1 = (IOSLocationProvider*)uNew(IOSLocationProvider_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void RequestAuthorization(ObjC.Object handle, Fuse.GeoLocation.GeoLocationAuthorizationType type) [static] :141
void IOSLocationProvider::RequestAuthorization1(::g::ObjC::Object* handle, int type)
{
    @autoreleasepool
    {
        [] (::id handle, int type) -> void
        {
            CLLocationManager* lm = (CLLocationManager*)handle;
            
            if (type == 1 &&
            	[lm respondsToSelector:@selector(requestWhenInUseAuthorization)])
            		[lm requestWhenInUseAuthorization];
            
            if (type == 2 &&
            	[lm respondsToSelector:@selector(requestAlwaysAuthorization)])
            		[lm requestAlwaysAuthorization];
        } (::g::ObjC::Object::GetHandle(handle), type);
        
    }
    
}

// private static void SetCLLocationManagerParams(ObjC.Object handle, double desiredAccuracyInMeters) [static] :106
void IOSLocationProvider::SetCLLocationManagerParams(::g::ObjC::Object* handle, double desiredAccuracyInMeters)
{
    @autoreleasepool
    {
        [] (::id handle, double desiredAccuracyInMeters) -> void
        {
            CLLocationManager* lm = (CLLocationManager*)handle;
            lm.desiredAccuracy = desiredAccuracyInMeters;
        } (::g::ObjC::Object::GetHandle(handle), desiredAccuracyInMeters);
        
    }
    
}

// private static void StartUpdatingLocation(ObjC.Object handle) [static] :115
void IOSLocationProvider::StartUpdatingLocation(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            CLLocationManager* lm = (CLLocationManager*)handle;
            [lm startUpdatingLocation];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static void StopUpdatingLocation(ObjC.Object handle) [static] :129
void IOSLocationProvider::StopUpdatingLocation(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            CLLocationManager* lm = (CLLocationManager*)handle;
            [lm stopUpdatingLocation];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}
// }

}}} // ::g::Fuse::GeoLocation
