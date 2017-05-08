// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.GeoLocation.GeoC-86dbdb21.h>
#include <Fuse.GeoLocation.GeoL-8054bfb4.h>
#include <Fuse.GeoLocation.GeoLocation.h>
#include <Fuse.GeoLocation.ILoc-89084c59.h>
#include <Fuse.GeoLocation.IOSL-56a5583.h>
#include <Fuse.GeoLocation.IOSL-f14d54d2.h>
#include <Fuse.GeoLocation.Loca-6668a8b3.h>
#include <Fuse.GeoLocation.Loca-739f1605.h>
#include <Fuse.GeoLocation.Loca-d10f171.h>
#include <Fuse.GeoLocation.Loca-d6a23e3d.h>
#include <Fuse.GeoLocation.Loca-fad8f858.h>
#include <Fuse.GeoLocation.Location.h>
#include <Fuse.GeoLocation.Spoo-64a7de82.h>
#include <Fuse.Marshal.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.Native-c8feecef.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Result-92713bce.h>
#include <Fuse.Scripting.ValueC-23d67df6.h>
#include <Fuse.UpdateManager.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.DateTime.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.FutureState.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[21];
static uType* TYPES[28];

namespace g{
namespace Fuse{
namespace GeoLocation{

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/$.uno
// -----------------------------------------------------------------------------------------

// private abstract interface LocationTracker.BufferedCall :401
// {
uInterfaceType* LocationTracker__BufferedCall_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.GeoLocation.LocationTracker.BufferedCall", 0, 0);
    return type;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/$.uno
// -----------------------------------------------------------------------------------------

// public sealed class GeoCoordinates :7
// {
static void GeoCoordinates_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" - ");
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::GeoCoordinates, _lat), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::GeoCoordinates, _long), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Latitude", NULL, (void*)GeoCoordinates__get_Latitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Longitude", NULL, (void*)GeoCoordinates__get_Longitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)GeoCoordinates__New1_fn, 0, true, type, 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()));
}

uType* GeoCoordinates_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(GeoCoordinates);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.GeoCoordinates", options);
    type->fp_build_ = GeoCoordinates_build;
    type->fp_ToString = (void(*)(uObject*, uString**))GeoCoordinates__ToString_fn;
    return type;
}

// public GeoCoordinates(double latitude, double longitude) :15
void GeoCoordinates__ctor__fn(GeoCoordinates* __this, double* latitude, double* longitude)
{
    __this->ctor_(*latitude, *longitude);
}

// public double get_Latitude() :12
void GeoCoordinates__get_Latitude_fn(GeoCoordinates* __this, double* __retval)
{
    *__retval = __this->Latitude();
}

// public double get_Longitude() :13
void GeoCoordinates__get_Longitude_fn(GeoCoordinates* __this, double* __retval)
{
    *__retval = __this->Longitude();
}

// public GeoCoordinates New(double latitude, double longitude) :15
void GeoCoordinates__New1_fn(double* latitude, double* longitude, GeoCoordinates** __retval)
{
    *__retval = GeoCoordinates::New1(*latitude, *longitude);
}

// public override sealed string ToString() :21
void GeoCoordinates__ToString_fn(GeoCoordinates* __this, uString** __retval)
{
    uStackFrame __("Fuse.GeoLocation.GeoCoordinates", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox(::g::Uno::Double_typeof(), __this->Latitude()), ::STRINGS[0/*" - "*/]), uBox(::g::Uno::Double_typeof(), __this->Longitude())), void();
}

// public GeoCoordinates(double latitude, double longitude) [instance] :15
void GeoCoordinates::ctor_(double latitude, double longitude)
{
    _lat = latitude;
    _long = longitude;
}

// public double get_Latitude() [instance] :12
double GeoCoordinates::Latitude()
{
    return _lat;
}

// public double get_Longitude() [instance] :13
double GeoCoordinates::Longitude()
{
    return _long;
}

// public GeoCoordinates New(double latitude, double longitude) [static] :15
GeoCoordinates* GeoCoordinates::New1(double latitude, double longitude)
{
    GeoCoordinates* obj1 = (GeoCoordinates*)uNew(GeoCoordinates_typeof());
    obj1->ctor_(latitude, longitude);
    return obj1;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/$.uno
// -----------------------------------------------------------------------------------------

// public sealed class GeoLocation :123
// {
static void GeoLocation_build(uType* type)
{
    ::STRINGS[1] = uString::Const("changed");
    ::STRINGS[2] = uString::Const("FuseJS/GeoLocation");
    ::STRINGS[3] = uString::Const("onChanged");
    ::STRINGS[4] = uString::Const("onError");
    ::STRINGS[5] = uString::Const("location");
    ::STRINGS[6] = uString::Const("getLocation");
    ::STRINGS[7] = uString::Const("authorizationRequest");
    ::STRINGS[8] = uString::Const("startListening");
    ::STRINGS[9] = uString::Const("stopListening");
    ::STRINGS[10] = uString::Const("latitude");
    ::STRINGS[11] = uString::Const("longitude");
    ::STRINGS[12] = uString::Const("accuracy");
    ::STRINGS[13] = uString::Const("altitude");
    ::STRINGS[14] = uString::Const("speed");
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[14] = ::g::Fuse::Scripting::NativeEventEmitterModule_typeof()->MakeMethod(0/*EmitFactory<Fuse.GeoLocation.Location>*/, ::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::g::Fuse::GeoLocation::Location_typeof(), ::TYPES[0/*object[]*/], NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(12,
        ::g::Fuse::GeoLocation::LocationTracker_typeof(), offsetof(::g::Fuse::GeoLocation::GeoLocation, _locationTracker), 0,
        type, (uintptr_t)&::g::Fuse::GeoLocation::GeoLocation::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GeoLocation__New3_fn, 0, true, type, 0));
}

::g::Fuse::Scripting::NativeModule_type* GeoLocation_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeEventEmitterModule_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(GeoLocation);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.GeoLocation.GeoLocation", options);
    type->fp_build_ = GeoLocation_build;
    type->fp_ctor_ = (void*)GeoLocation__New3_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public GeoLocation() :128
void GeoLocation__ctor_3_fn(GeoLocation* __this)
{
    __this->ctor_3();
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) :236
void GeoLocation__AuthorizationRequestConverter_fn(::g::Fuse::Scripting::Context* context, int* type, int* __retval)
{
    *__retval = GeoLocation::AuthorizationRequestConverter(context, *type);
}

// private static object[] ChangedArgsFactory(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) :219
void GeoLocation__ChangedArgsFactory_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location, uArray** __retval)
{
    *__retval = GeoLocation::ChangedArgsFactory(context, location);
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) :332
void GeoLocation__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = GeoLocation::Converter(context, location);
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuthorizationRequest() :275
void GeoLocation__GetAuthorizationRequest_fn(GeoLocation* __this, int* __retval)
{
    *__retval = __this->GetAuthorizationRequest();
}

// private Fuse.GeoLocation.Location GetLocation() :298
void GeoLocation__GetLocation_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->GetLocation();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) :326
void GeoLocation__GetLocationAsync_fn(GeoLocation* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetLocationAsync(args);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) :214
void GeoLocation__LocationChanged_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location* location)
{
    __this->LocationChanged(location);
}

// private void LocationError(string error) :231
void GeoLocation__LocationError_fn(GeoLocation* __this, uString* error)
{
    __this->LocationError(error);
}

// public GeoLocation New() :128
void GeoLocation__New3_fn(GeoLocation** __retval)
{
    *__retval = GeoLocation::New3();
}

// private void SetAuthorizationRequest(int value) :270
void GeoLocation__SetAuthorizationRequest_fn(GeoLocation* __this, int* value)
{
    __this->SetAuthorizationRequest(*value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) :171
void GeoLocation__StartListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StartListening(c, args);
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) :187
void GeoLocation__StopListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StopListening(c, args);
}

uSStrong<GeoLocation*> GeoLocation::_instance_;

// public GeoLocation() [instance] :128
void GeoLocation::ctor_3()
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", ".ctor()");
    ctor_2(false, uArray::Init<uObject*>(::TYPES[0/*object[]*/], 1, ::STRINGS[1/*"changed"*/]));

    if (GeoLocation::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(GeoLocation::_instance_ = this, ::STRINGS[2/*"FuseJS/GeoL...*/]);
    _locationTracker = ::g::Fuse::GeoLocation::LocationTracker::New1();
    ::g::Fuse::Scripting::NativeEvent* onChangedEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[3/*"onChanged"*/], true);
    ::g::Fuse::Scripting::NativeEvent* onErrorEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[4/*"onError"*/], true);
    AddMember(onChangedEvent);
    AddMember(onErrorEvent);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[1/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[5/*"location"*/], uDelegate::New(::TYPES[2/*Uno.Func<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocation_fn, this), NULL, uDelegate::New(::TYPES[3/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[4/*Fuse.Scripting.NativePromise<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[6/*"getLocation"*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.FutureFactory<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocationAsync_fn, this), uDelegate::New(::TYPES[6/*Fuse.Scripting.ResultConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[7/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], ::STRINGS[7/*"authorizati...*/], uDelegate::New(::TYPES[8/*Uno.Func<Fuse.GeoLocation.GeoLocationAuthorizationType>*/], (void*)GeoLocation__GetAuthorizationRequest_fn, this), uDelegate::New(::TYPES[9/*Uno.Action<int>*/], (void*)GeoLocation__SetAuthorizationRequest_fn, this), uDelegate::New(::TYPES[10/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], (void*)GeoLocation__AuthorizationRequestConverter_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[8/*"startListen...*/], uDelegate::New(::TYPES[11/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StartListening_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[9/*"stopListening"*/], uDelegate::New(::TYPES[11/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StopListening_fn, this)));
    uPtr(_locationTracker)->add_LocationChanged(uDelegate::New(::TYPES[12/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__LocationChanged_fn, this));
    uPtr(_locationTracker)->add_LocationError(uDelegate::New(::TYPES[13/*Uno.Action<string>*/], (void*)GeoLocation__LocationError_fn, this));
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuthorizationRequest() [instance] :275
int GeoLocation::GetAuthorizationRequest()
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "GetAuthorizationRequest()");
    return uPtr(_locationTracker)->AuthorizationType();
}

// private Fuse.GeoLocation.Location GetLocation() [instance] :298
::g::Fuse::GeoLocation::Location* GeoLocation::GetLocation()
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "GetLocation()");
    return uPtr(_locationTracker)->Location();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) [instance] :326
::g::Uno::Threading::Future1* GeoLocation::GetLocationAsync(uArray* args)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "GetLocationAsync(object[])");
    double timeout = (uPtr(args)->Length() > 0) ? ::g::Fuse::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)) : 20000.0;
    return uPtr(_locationTracker)->GetLocationAsync(timeout);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) [instance] :214
void GeoLocation::LocationChanged(::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "LocationChanged(Fuse.GeoLocation.Location)");
    ::g::Fuse::Scripting::NativeEventEmitterModule__EmitFactory1_fn(this, ::TYPES[14/*Fuse.Scripting.NativeEventEmitterModule.EmitFactory<Fuse.GeoLocation.Location>*/], uDelegate::New(::TYPES[15/*Uno.Func<Fuse.Scripting.Context, Fuse.GeoLocation.Location, object[]>*/], (void*)GeoLocation__ChangedArgsFactory_fn), location);
}

// private void LocationError(string error) [instance] :231
void GeoLocation::LocationError(uString* error)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "LocationError(string)");
    EmitError(error);
}

// private void SetAuthorizationRequest(int value) [instance] :270
void GeoLocation::SetAuthorizationRequest(int value)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "SetAuthorizationRequest(int)");
    uPtr(_locationTracker)->AuthorizationType(value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) [instance] :171
uObject* GeoLocation::StartListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "StartListening(Fuse.Scripting.Context,object[])");
    int minimumReportInterval = (uPtr(args)->Length() > 0) ? ::g::Fuse::Marshal::ToInt(uPtr(args)->Strong<uObject*>(0)) : 0;
    double desiredAccuracyInMeters = (args->Length() > 1) ? ::g::Fuse::Marshal::ToDouble(args->Strong<uObject*>(1)) : 0.0;
    uPtr(_locationTracker)->StartListening(minimumReportInterval, desiredAccuracyInMeters);
    return NULL;
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) [instance] :187
uObject* GeoLocation::StopListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "StopListening(Fuse.Scripting.Context,object[])");
    uPtr(_locationTracker)->StopListening();
    return NULL;
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) [static] :236
int GeoLocation::AuthorizationRequestConverter(::g::Fuse::Scripting::Context* context, int type)
{
    return type;
}

// private static object[] ChangedArgsFactory(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) [static] :219
uArray* GeoLocation::ChangedArgsFactory(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "ChangedArgsFactory(Fuse.Scripting.Context,Fuse.GeoLocation.Location)");
    return uArray::Init<uObject*>(::TYPES[0/*object[]*/], 2, ::STRINGS[1/*"changed"*/], (::g::Fuse::Scripting::Object*)GeoLocation::Converter(context, location));
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) [static] :332
::g::Fuse::Scripting::Object* GeoLocation::Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location)
{
    uStackFrame __("Fuse.GeoLocation.GeoLocation", "Converter(Fuse.Scripting.Context,Fuse.GeoLocation.Location)");
    ::g::Fuse::Scripting::Object* obj = uPtr(context)->NewObject();

    if (location != NULL)
    {
        uPtr(obj)->Item(::STRINGS[10/*"latitude"*/], uBox(::g::Uno::Double_typeof(), uPtr(uPtr(location)->Coordinates())->Latitude()));
        obj->Item(::STRINGS[11/*"longitude"*/], uBox(::g::Uno::Double_typeof(), uPtr(location->Coordinates())->Longitude()));
        obj->Item(::STRINGS[12/*"accuracy"*/], uBox(::g::Uno::Double_typeof(), location->Accuracy()));
        obj->Item(::STRINGS[13/*"altitude"*/], uBox(::g::Uno::Double_typeof(), location->Altitude()));
        obj->Item(::STRINGS[14/*"speed"*/], uBox(::g::Uno::Double_typeof(), location->Speed()));
    }

    return obj;
}

// public GeoLocation New() [static] :128
GeoLocation* GeoLocation::New3()
{
    GeoLocation* obj1 = (GeoLocation*)uNew(GeoLocation_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/$.uno
// -----------------------------------------------------------------------------------------

// public enum GeoLocationAuthorizationType :475
uEnumType* GeoLocationAuthorizationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.GeoLocation.GeoLocationAuthorizationType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Never", 0LL,
        "WhenInUse", 1LL,
        "Always", 2LL);
    return type;
}

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/$.uno
// -----------------------------------------------------------------------------------------

// private sealed class LocationTracker.GetLocationCall :435
// {
static void LocationTracker__GetLocationCall_build(uType* type)
{
    ::TYPES[16] = ::g::Fuse::GeoLocation::ILocationTracker_typeof();
    type->SetInterfaces(
        ::g::Fuse::GeoLocation::LocationTracker__BufferedCall_typeof(), offsetof(LocationTracker__GetLocationCall_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL), offsetof(::g::Fuse::GeoLocation::LocationTracker__GetLocationCall, promise), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker__GetLocationCall, timeout), 0);
}

LocationTracker__GetLocationCall_type* LocationTracker__GetLocationCall_typeof()
{
    static uSStrong<LocationTracker__GetLocationCall_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LocationTracker__GetLocationCall);
    options.TypeSize = sizeof(LocationTracker__GetLocationCall_type);
    type = (LocationTracker__GetLocationCall_type*)uClassType::New("Fuse.GeoLocation.LocationTracker.GetLocationCall", options);
    type->fp_build_ = LocationTracker__GetLocationCall_build;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*))LocationTracker__GetLocationCall__Apply_fn;
    return type;
}

// public GetLocationCall(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) :438
void LocationTracker__GetLocationCall__ctor__fn(LocationTracker__GetLocationCall* __this, ::g::Uno::Threading::Promise* promise1, double* timeout1)
{
    __this->ctor_(promise1, *timeout1);
}

// public void Apply(Fuse.GeoLocation.ILocationTracker tracker) :443
void LocationTracker__GetLocationCall__Apply_fn(LocationTracker__GetLocationCall* __this, uObject* tracker)
{
    __this->Apply(tracker);
}

// public GetLocationCall New(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) :438
void LocationTracker__GetLocationCall__New1_fn(::g::Uno::Threading::Promise* promise1, double* timeout1, LocationTracker__GetLocationCall** __retval)
{
    *__retval = LocationTracker__GetLocationCall::New1(promise1, *timeout1);
}

// public GetLocationCall(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) [instance] :438
void LocationTracker__GetLocationCall::ctor_(::g::Uno::Threading::Promise* promise1, double timeout1)
{
    promise = promise1;
    timeout = timeout1;
}

// public void Apply(Fuse.GeoLocation.ILocationTracker tracker) [instance] :443
void LocationTracker__GetLocationCall::Apply(uObject* tracker)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker.GetLocationCall", "Apply(Fuse.GeoLocation.ILocationTracker)");
    ::g::Fuse::GeoLocation::ILocationTracker::GetLocation(uInterface(uPtr(tracker), ::TYPES[16/*Fuse.GeoLocation.ILocationTracker*/]), promise, timeout);
}

// public GetLocationCall New(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) [static] :438
LocationTracker__GetLocationCall* LocationTracker__GetLocationCall::New1(::g::Uno::Threading::Promise* promise1, double timeout1)
{
    LocationTracker__GetLocationCall* obj1 = (LocationTracker__GetLocationCall*)uNew(LocationTracker__GetLocationCall_typeof());
    obj1->ctor_(promise1, timeout1);
    return obj1;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/$.uno
// -----------------------------------------------------------------------------------------

// internal abstract interface ILocationTracker :460
// {
uInterfaceType* ILocationTracker_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.GeoLocation.ILocationTracker", 0, 0);
    return type;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/$.uno
// -----------------------------------------------------------------------------------------

// public sealed class Location :355
// {
static void Location_build(uType* type)
{
    ::STRINGS[15] = uString::Const(" ");
    ::STRINGS[16] = uString::Const(" (");
    ::STRINGS[17] = uString::Const("/");
    ::STRINGS[18] = uString::Const(":");
    ::STRINGS[19] = uString::Const(")");
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _accuracy), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _altitude), 0,
        ::g::Fuse::GeoLocation::GeoCoordinates_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _coordinates), 0,
        ::g::Uno::Time::LocalDateTime_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _dateTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _speed), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Accuracy", NULL, (void*)Location__get_Accuracy_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Altitude", NULL, (void*)Location__get_Altitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Coordinates", NULL, (void*)Location__get_Coordinates_fn, 0, false, ::g::Fuse::GeoLocation::GeoCoordinates_typeof(), 0),
        new uFunction("get_DateTime", NULL, (void*)Location__get_DateTime_fn, 0, false, ::g::Uno::Time::LocalDateTime_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Location__New1_fn, 0, true, type, 5, ::g::Fuse::GeoLocation::GeoCoordinates_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Time::LocalDateTime_typeof()),
        new uFunction("get_Speed", NULL, (void*)Location__get_Speed_fn, 0, false, ::g::Uno::Double_typeof(), 0));
}

uType* Location_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Location);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.Location", options);
    type->fp_build_ = Location_build;
    type->fp_ToString = (void(*)(uObject*, uString**))Location__ToString_fn;
    return type;
}

// public Location(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, double altitude, double speed, Uno.Time.LocalDateTime dateTime) :375
void Location__ctor__fn(Location* __this, ::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double* accuracy, double* altitude, double* speed, ::g::Uno::Time::LocalDateTime* dateTime)
{
    __this->ctor_(coordinates, *accuracy, *altitude, *speed, dateTime);
}

// public double get_Accuracy() :369
void Location__get_Accuracy_fn(Location* __this, double* __retval)
{
    *__retval = __this->Accuracy();
}

// public double get_Altitude() :371
void Location__get_Altitude_fn(Location* __this, double* __retval)
{
    *__retval = __this->Altitude();
}

// public Fuse.GeoLocation.GeoCoordinates get_Coordinates() :363
void Location__get_Coordinates_fn(Location* __this, ::g::Fuse::GeoLocation::GeoCoordinates** __retval)
{
    *__retval = __this->Coordinates();
}

// public Uno.Time.LocalDateTime get_DateTime() :364
void Location__get_DateTime_fn(Location* __this, ::g::Uno::Time::LocalDateTime** __retval)
{
    *__retval = __this->DateTime();
}

// public Location New(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, double altitude, double speed, Uno.Time.LocalDateTime dateTime) :375
void Location__New1_fn(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double* accuracy, double* altitude, double* speed, ::g::Uno::Time::LocalDateTime* dateTime, Location** __retval)
{
    *__retval = Location::New1(coordinates, *accuracy, *altitude, *speed, dateTime);
}

// public double get_Speed() :373
void Location__get_Speed_fn(Location* __this, double* __retval)
{
    *__retval = __this->Speed();
}

// public override sealed string ToString() :384
void Location__ToString_fn(Location* __this, uString** __retval)
{
    uStackFrame __("Fuse.GeoLocation.Location", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(__this->Coordinates(), ::STRINGS[15/*" "*/]), uBox(::g::Uno::Double_typeof(), __this->Accuracy())), ::STRINGS[16/*" ("*/]), uBox<int>(::g::Uno::Int_typeof(), uPtr(__this->DateTime())->Month())), ::STRINGS[17/*"/"*/]), uBox<int>(::g::Uno::Int_typeof(), uPtr(__this->DateTime())->Day())), ::STRINGS[15/*" "*/]), uBox<int>(::g::Uno::Int_typeof(), uPtr(__this->DateTime())->Hour())), ::STRINGS[18/*":"*/]), uBox<int>(::g::Uno::Int_typeof(), uPtr(__this->DateTime())->Minute())), ::STRINGS[19/*")"*/]), void();
}

// public Location(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, double altitude, double speed, Uno.Time.LocalDateTime dateTime) [instance] :375
void Location::ctor_(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double accuracy, double altitude, double speed, ::g::Uno::Time::LocalDateTime* dateTime)
{
    _coordinates = coordinates;
    _accuracy = accuracy;
    _dateTime = dateTime;
    _altitude = altitude;
    _speed = speed;
}

// public double get_Accuracy() [instance] :369
double Location::Accuracy()
{
    return _accuracy;
}

// public double get_Altitude() [instance] :371
double Location::Altitude()
{
    return _altitude;
}

// public Fuse.GeoLocation.GeoCoordinates get_Coordinates() [instance] :363
::g::Fuse::GeoLocation::GeoCoordinates* Location::Coordinates()
{
    return _coordinates;
}

// public Uno.Time.LocalDateTime get_DateTime() [instance] :364
::g::Uno::Time::LocalDateTime* Location::DateTime()
{
    return _dateTime;
}

// public double get_Speed() [instance] :373
double Location::Speed()
{
    return _speed;
}

// public Location New(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, double altitude, double speed, Uno.Time.LocalDateTime dateTime) [static] :375
Location* Location::New1(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double accuracy, double altitude, double speed, ::g::Uno::Time::LocalDateTime* dateTime)
{
    Location* obj1 = (Location*)uNew(Location_typeof());
    obj1->ctor_(coordinates, accuracy, altitude, speed, dateTime);
    return obj1;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/$.uno
// -----------------------------------------------------------------------------------------

// public partial sealed class LocationTracker :399
// {
static void LocationTracker_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::Collections::List_typeof()->MakeType(LocationTracker__BufferedCall_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[19] = ::g::Uno::Action_typeof();
    ::TYPES[20] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(LocationTracker__BufferedCall_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[22] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(LocationTracker__BufferedCall_typeof(), NULL);
    ::TYPES[23] = LocationTracker__BufferedCall_typeof();
    ::TYPES[24] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[25] = ::g::Uno::Exception_typeof();
    ::TYPES[26] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.GeoLocation.LocationTracker.BufferedCall*/], NULL);
    ::TYPES[16] = ::g::Fuse::GeoLocation::ILocationTracker_typeof();
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[25/*Uno.Exception*/], NULL);
    ::TYPES[13] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[23/*Fuse.GeoLocation.LocationTracker.BufferedCall*/], NULL), offsetof(::g::Fuse::GeoLocation::LocationTracker, _bufferedCalls), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker, _isReady), 0,
        ::g::Fuse::GeoLocation::Location_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker, _lastLocation), 0,
        ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker, _AuthorizationType), 0,
        ::TYPES[12/*Uno.Action<Fuse.GeoLocation.Location>*/], offsetof(::g::Fuse::GeoLocation::LocationTracker, LocationChanged1), 0,
        ::TYPES[13/*Uno.Action<string>*/], offsetof(::g::Fuse::GeoLocation::LocationTracker, LocationError1), 0,
        ::TYPES[16/*Fuse.GeoLocation.ILocationTracker*/], (uintptr_t)&::g::Fuse::GeoLocation::LocationTracker::_locationTracker_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(11,
        new uFunction("get_AuthorizationType", NULL, (void*)LocationTracker__get_AuthorizationType_fn, 0, false, ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), 0),
        new uFunction("set_AuthorizationType", NULL, (void*)LocationTracker__set_AuthorizationType_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof()),
        new uFunction("GetLocationAsync", NULL, (void*)LocationTracker__GetLocationAsync_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Location", NULL, (void*)LocationTracker__get_Location_fn, 0, false, ::g::Fuse::GeoLocation::Location_typeof(), 0),
        new uFunction("add_LocationChanged", NULL, (void*)LocationTracker__add_LocationChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[12/*Uno.Action<Fuse.GeoLocation.Location>*/]),
        new uFunction("remove_LocationChanged", NULL, (void*)LocationTracker__remove_LocationChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[12/*Uno.Action<Fuse.GeoLocation.Location>*/]),
        new uFunction("add_LocationError", NULL, (void*)LocationTracker__add_LocationError_fn, 0, false, uVoid_typeof(), 1, ::TYPES[13/*Uno.Action<string>*/]),
        new uFunction("remove_LocationError", NULL, (void*)LocationTracker__remove_LocationError_fn, 0, false, uVoid_typeof(), 1, ::TYPES[13/*Uno.Action<string>*/]),
        new uFunction(".ctor", NULL, (void*)LocationTracker__New1_fn, 0, true, type, 0),
        new uFunction("StartListening", NULL, (void*)LocationTracker__StartListening_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("StopListening", NULL, (void*)LocationTracker__StopListening_fn, 0, false, uVoid_typeof(), 0));
}

uType* LocationTracker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(LocationTracker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.LocationTracker", options);
    type->fp_build_ = LocationTracker_build;
    type->fp_ctor_ = (void*)LocationTracker__New1_fn;
    return type;
}

// public LocationTracker() :486
void LocationTracker__ctor__fn(LocationTracker* __this)
{
    __this->ctor_();
}

// public generated Fuse.GeoLocation.GeoLocationAuthorizationType get_AuthorizationType() :523
void LocationTracker__get_AuthorizationType_fn(LocationTracker* __this, int* __retval)
{
    *__retval = __this->AuthorizationType();
}

// public generated void set_AuthorizationType(Fuse.GeoLocation.GeoLocationAuthorizationType value) :523
void LocationTracker__set_AuthorizationType_fn(LocationTracker* __this, int* value)
{
    __this->AuthorizationType(*value);
}

// private void FlushBufferedCalls() :507
void LocationTracker__FlushBufferedCalls_fn(LocationTracker* __this)
{
    __this->FlushBufferedCalls();
}

// public Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync([double timeout]) :574
void LocationTracker__GetLocationAsync_fn(LocationTracker* __this, double* timeout, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetLocationAsync(*timeout);
}

// private void Init() :493
void LocationTracker__Init_fn(LocationTracker* __this)
{
    __this->Init();
}

// public Fuse.GeoLocation.Location get_Location() :527
void LocationTracker__get_Location_fn(LocationTracker* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->Location();
}

// public generated void add_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) :515
void LocationTracker__add_LocationChanged_fn(LocationTracker* __this, uDelegate* value)
{
    __this->add_LocationChanged(value);
}

// public generated void remove_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) :515
void LocationTracker__remove_LocationChanged_fn(LocationTracker* __this, uDelegate* value)
{
    __this->remove_LocationChanged(value);
}

// public generated void add_LocationError(Uno.Action<string> value) :517
void LocationTracker__add_LocationError_fn(LocationTracker* __this, uDelegate* value)
{
    __this->add_LocationError(value);
}

// public generated void remove_LocationError(Uno.Action<string> value) :517
void LocationTracker__remove_LocationError_fn(LocationTracker* __this, uDelegate* value)
{
    __this->remove_LocationError(value);
}

// public LocationTracker New() :486
void LocationTracker__New1_fn(LocationTracker** __retval)
{
    *__retval = LocationTracker::New1();
}

// private void OnLocationChanged(Fuse.GeoLocation.Location newLocation) :539
void LocationTracker__OnLocationChanged_fn(LocationTracker* __this, ::g::Fuse::GeoLocation::Location* newLocation)
{
    __this->OnLocationChanged(newLocation);
}

// private void OnLocationError(Uno.Exception error) :545
void LocationTracker__OnLocationError_fn(LocationTracker* __this, ::g::Uno::Exception* error)
{
    __this->OnLocationError(error);
}

// public void StartListening([int minimumReportInterval], [double desiredAccuracyInMeters]) :551
void LocationTracker__StartListening_fn(LocationTracker* __this, int* minimumReportInterval, double* desiredAccuracyInMeters)
{
    __this->StartListening(*minimumReportInterval, *desiredAccuracyInMeters);
}

// public void StopListening() :563
void LocationTracker__StopListening_fn(LocationTracker* __this)
{
    __this->StopListening();
}

uSStrong<uObject*> LocationTracker::_locationTracker_;

// public LocationTracker() [instance] :486
void LocationTracker::ctor_()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", ".ctor()");
    _bufferedCalls = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[17/*Uno.Collections.List<Fuse.GeoLocation.LocationTracker.BufferedCall>*/]));
    AuthorizationType(1);
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(::g::Fuse::UpdateManager::Dispatcher()), ::TYPES[18/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[19/*Uno.Action*/], (void*)LocationTracker__Init_fn, this));
}

// public generated Fuse.GeoLocation.GeoLocationAuthorizationType get_AuthorizationType() [instance] :523
int LocationTracker::AuthorizationType()
{
    return _AuthorizationType;
}

// public generated void set_AuthorizationType(Fuse.GeoLocation.GeoLocationAuthorizationType value) [instance] :523
void LocationTracker::AuthorizationType(int value)
{
    _AuthorizationType = value;
}

// private void FlushBufferedCalls() [instance] :507
void LocationTracker::FlushBufferedCalls()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "FlushBufferedCalls()");
    uObject* ret3;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_bufferedCalls), ::TYPES[20/*Uno.Collections.IEnumerable<Fuse.GeoLocation.LocationTracker.BufferedCall>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[21/*Uno.Collections.IEnumerator*/])); )
    {
        uObject* call = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[22/*Uno.Collections.IEnumerator<Fuse.GeoLocation.LocationTracker.BufferedCall>*/]), &ret3), ret3);
        LocationTracker__BufferedCall::Apply(uInterface(uPtr(call), ::TYPES[23/*Fuse.GeoLocation.LocationTracker.BufferedCall*/]), LocationTracker::_locationTracker_);
    }

    _bufferedCalls = NULL;
    _isReady = true;
}

// public Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync([double timeout]) [instance] :574
::g::Uno::Threading::Future1* LocationTracker::GetLocationAsync(double timeout)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "GetLocationAsync([double])");
    ::g::Uno::Threading::Promise* promise = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[24/*Uno.Threading.Promise<Fuse.GeoLocation.Location>*/]);

    try
    {
        if (!_isReady)
        {
            ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(_bufferedCalls), ::TYPES[26/*Uno.Collections.ICollection<Fuse.GeoLocation.LocationTracker.BufferedCall>*/]), (uObject*)LocationTracker__GetLocationCall::New1(promise, timeout));
            return promise;
        }

        ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[16/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());
        ::g::Fuse::GeoLocation::ILocationTracker::GetLocation(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[16/*Fuse.GeoLocation.ILocationTracker*/]), promise, timeout);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(promise)->Reject(e);
    }

    return promise;
}

// private void Init() [instance] :493
void LocationTracker::Init()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "Init()");

    if (LocationTracker::_locationTracker_ != NULL)
        return;

    LocationTracker::_locationTracker_ = (uObject*)::g::Fuse::GeoLocation::IOSLocationProvider::New1();
    ::g::Fuse::GeoLocation::ILocationTracker::Init(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[16/*Fuse.GeoLocation.ILocationTracker*/]), uDelegate::New(::TYPES[19/*Uno.Action*/], (void*)LocationTracker__FlushBufferedCalls_fn, this));
}

// public Fuse.GeoLocation.Location get_Location() [instance] :527
::g::Fuse::GeoLocation::Location* LocationTracker::Location()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "get_Location()");

    if ((_lastLocation == NULL) && _isReady)
    {
        ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[16/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());
        _lastLocation = ::g::Fuse::GeoLocation::ILocationTracker::GetLastKnownPosition(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[16/*Fuse.GeoLocation.ILocationTracker*/]));
    }

    return _lastLocation;
}

// public generated void add_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) [instance] :515
void LocationTracker::add_LocationChanged(uDelegate* value)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "add_LocationChanged(Uno.Action<Fuse.GeoLocation.Location>)");
    LocationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LocationChanged1, value), ::TYPES[12/*Uno.Action<Fuse.GeoLocation.Location>*/]);
}

// public generated void remove_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) [instance] :515
void LocationTracker::remove_LocationChanged(uDelegate* value)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "remove_LocationChanged(Uno.Action<Fuse.GeoLocation.Location>)");
    LocationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LocationChanged1, value), ::TYPES[12/*Uno.Action<Fuse.GeoLocation.Location>*/]);
}

// public generated void add_LocationError(Uno.Action<string> value) [instance] :517
void LocationTracker::add_LocationError(uDelegate* value)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "add_LocationError(Uno.Action<string>)");
    LocationError1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LocationError1, value), ::TYPES[13/*Uno.Action<string>*/]);
}

// public generated void remove_LocationError(Uno.Action<string> value) [instance] :517
void LocationTracker::remove_LocationError(uDelegate* value)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "remove_LocationError(Uno.Action<string>)");
    LocationError1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LocationError1, value), ::TYPES[13/*Uno.Action<string>*/]);
}

// private void OnLocationChanged(Fuse.GeoLocation.Location newLocation) [instance] :539
void LocationTracker::OnLocationChanged(::g::Fuse::GeoLocation::Location* newLocation)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "OnLocationChanged(Fuse.GeoLocation.Location)");

    if (::g::Uno::Delegate::op_Inequality(LocationChanged1, NULL))
        uPtr(LocationChanged1)->InvokeVoid(newLocation);
}

// private void OnLocationError(Uno.Exception error) [instance] :545
void LocationTracker::OnLocationError(::g::Uno::Exception* error)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "OnLocationError(Uno.Exception)");

    if (::g::Uno::Delegate::op_Inequality(LocationError1, NULL))
        uPtr(LocationError1)->InvokeVoid(uPtr(error)->Message());
}

// public void StartListening([int minimumReportInterval], [double desiredAccuracyInMeters]) [instance] :551
void LocationTracker::StartListening(int minimumReportInterval, double desiredAccuracyInMeters)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "StartListening([int],[double])");

    if (!_isReady)
    {
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(_bufferedCalls), ::TYPES[26/*Uno.Collections.ICollection<Fuse.GeoLocation.LocationTracker.BufferedCall>*/]), (uObject*)LocationTracker__StartListeningCall::New1(uDelegate::New(::TYPES[12/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)LocationTracker__OnLocationChanged_fn, this), uDelegate::New(::TYPES[27/*Uno.Action<Uno.Exception>*/], (void*)LocationTracker__OnLocationError_fn, this), minimumReportInterval, desiredAccuracyInMeters));
        return;
    }

    ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[16/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());
    ::g::Fuse::GeoLocation::ILocationTracker::StartListening(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[16/*Fuse.GeoLocation.ILocationTracker*/]), uDelegate::New(::TYPES[12/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)LocationTracker__OnLocationChanged_fn, this), uDelegate::New(::TYPES[27/*Uno.Action<Uno.Exception>*/], (void*)LocationTracker__OnLocationError_fn, this), minimumReportInterval, desiredAccuracyInMeters);
}

// public void StopListening() [instance] :563
void LocationTracker::StopListening()
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker", "StopListening()");

    if (!_isReady)
    {
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(_bufferedCalls), ::TYPES[26/*Uno.Collections.ICollection<Fuse.GeoLocation.LocationTracker.BufferedCall>*/]), (uObject*)LocationTracker__StopListeningCall::New1());
        return;
    }

    ::g::Fuse::GeoLocation::ILocationTracker::StopListening(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[16/*Fuse.GeoLocation.ILocationTracker*/]));
}

// public LocationTracker New() [static] :486
LocationTracker* LocationTracker::New1()
{
    LocationTracker* obj2 = (LocationTracker*)uNew(LocationTracker_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/spoof/$.uno
// -----------------------------------------------------------------------------------------------

// public sealed class SpoofLocationProvider :10
// {
static void SpoofLocationProvider_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::GeoLocation::ILocationTracker_typeof(), offsetof(SpoofLocationProvider_type, interface0));
    type->SetFields(0,
        ::g::Fuse::GeoLocation::Location_typeof(), offsetof(::g::Fuse::GeoLocation::SpoofLocationProvider, SpoofLocation), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("GetLastKnownPosition", NULL, (void*)SpoofLocationProvider__GetLastKnownPosition_fn, 0, false, ::g::Fuse::GeoLocation::Location_typeof(), 0),
        new uFunction("GetLocation", NULL, (void*)SpoofLocationProvider__GetLocation_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL), ::g::Uno::Double_typeof()),
        new uFunction("Init", NULL, (void*)SpoofLocationProvider__Init_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction(".ctor", NULL, (void*)SpoofLocationProvider__New1_fn, 0, true, type, 0),
        new uFunction("RequestAuthorization", NULL, (void*)SpoofLocationProvider__RequestAuthorization_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof()),
        new uFunction("StartListening", NULL, (void*)SpoofLocationProvider__StartListening_fn, 0, false, uVoid_typeof(), 4, ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), ::g::Uno::Int_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("StopListening", NULL, (void*)SpoofLocationProvider__StopListening_fn, 0, false, uVoid_typeof(), 0));
}

SpoofLocationProvider_type* SpoofLocationProvider_typeof()
{
    static uSStrong<SpoofLocationProvider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SpoofLocationProvider);
    options.TypeSize = sizeof(SpoofLocationProvider_type);
    type = (SpoofLocationProvider_type*)uClassType::New("Fuse.GeoLocation.SpoofLocationProvider", options);
    type->fp_build_ = SpoofLocationProvider_build;
    type->fp_ctor_ = (void*)SpoofLocationProvider__New1_fn;
    type->interface0.fp_GetLastKnownPosition = (void(*)(uObject*, ::g::Fuse::GeoLocation::Location**))SpoofLocationProvider__GetLastKnownPosition_fn;
    type->interface0.fp_GetLocation = (void(*)(uObject*, ::g::Uno::Threading::Promise*, double*))SpoofLocationProvider__GetLocation_fn;
    type->interface0.fp_StartListening = (void(*)(uObject*, uDelegate*, uDelegate*, int*, double*))SpoofLocationProvider__StartListening_fn;
    type->interface0.fp_StopListening = (void(*)(uObject*))SpoofLocationProvider__StopListening_fn;
    type->interface0.fp_RequestAuthorization = (void(*)(uObject*, int*))SpoofLocationProvider__RequestAuthorization_fn;
    type->interface0.fp_Init = (void(*)(uObject*, uDelegate*))SpoofLocationProvider__Init_fn;
    return type;
}

// public SpoofLocationProvider() :13
void SpoofLocationProvider__ctor__fn(SpoofLocationProvider* __this)
{
    __this->ctor_();
}

// public Fuse.GeoLocation.Location GetLastKnownPosition() :17
void SpoofLocationProvider__GetLastKnownPosition_fn(SpoofLocationProvider* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->GetLastKnownPosition();
}

// public void GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) :21
void SpoofLocationProvider__GetLocation_fn(SpoofLocationProvider* __this, ::g::Uno::Threading::Promise* promise, double* timeout)
{
    __this->GetLocation(promise, *timeout);
}

// public void Init(Uno.Action onReady) :38
void SpoofLocationProvider__Init_fn(SpoofLocationProvider* __this, uDelegate* onReady)
{
    __this->Init(onReady);
}

// public SpoofLocationProvider New() :13
void SpoofLocationProvider__New1_fn(SpoofLocationProvider** __retval)
{
    *__retval = SpoofLocationProvider::New1();
}

// public void RequestAuthorization(Fuse.GeoLocation.GeoLocationAuthorizationType type) :34
void SpoofLocationProvider__RequestAuthorization_fn(SpoofLocationProvider* __this, int* type)
{
    __this->RequestAuthorization(*type);
}

// public void StartListening(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) :26
void SpoofLocationProvider__StartListening_fn(SpoofLocationProvider* __this, uDelegate* onLocationChanged, uDelegate* onLocationError, int* minimumReportInterval, double* desiredAccuracyInMeters)
{
    __this->StartListening(onLocationChanged, onLocationError, *minimumReportInterval, *desiredAccuracyInMeters);
}

// public void StopListening() :30
void SpoofLocationProvider__StopListening_fn(SpoofLocationProvider* __this)
{
    __this->StopListening();
}

// public SpoofLocationProvider() [instance] :13
void SpoofLocationProvider::ctor_()
{
    uStackFrame __("Fuse.GeoLocation.SpoofLocationProvider", ".ctor()");
    SpoofLocation = ::g::Fuse::GeoLocation::Location::New1(::g::Fuse::GeoLocation::GeoCoordinates::New1(59.9115546, 10.73888), 100.0, 50.0, 0.5, uPtr(::g::Uno::DateTime::Now())->LocalDateTime());
}

// public Fuse.GeoLocation.Location GetLastKnownPosition() [instance] :17
::g::Fuse::GeoLocation::Location* SpoofLocationProvider::GetLastKnownPosition()
{
    return SpoofLocation;
}

// public void GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) [instance] :21
void SpoofLocationProvider::GetLocation(::g::Uno::Threading::Promise* promise, double timeout)
{
    uStackFrame __("Fuse.GeoLocation.SpoofLocationProvider", "GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location>,double)");
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(promise), SpoofLocation);
}

// public void Init(Uno.Action onReady) [instance] :38
void SpoofLocationProvider::Init(uDelegate* onReady)
{
    uStackFrame __("Fuse.GeoLocation.SpoofLocationProvider", "Init(Uno.Action)");
    uPtr(onReady)->InvokeVoid();
}

// public void RequestAuthorization(Fuse.GeoLocation.GeoLocationAuthorizationType type) [instance] :34
void SpoofLocationProvider::RequestAuthorization(int type)
{
}

// public void StartListening(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) [instance] :26
void SpoofLocationProvider::StartListening(uDelegate* onLocationChanged, uDelegate* onLocationError, int minimumReportInterval, double desiredAccuracyInMeters)
{
}

// public void StopListening() [instance] :30
void SpoofLocationProvider::StopListening()
{
}

// public SpoofLocationProvider New() [static] :13
SpoofLocationProvider* SpoofLocationProvider::New1()
{
    SpoofLocationProvider* obj1 = (SpoofLocationProvider*)uNew(SpoofLocationProvider_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/$.uno
// -----------------------------------------------------------------------------------------

// private sealed class LocationTracker.StartListeningCall :405
// {
static void LocationTracker__StartListeningCall_build(uType* type)
{
    ::TYPES[16] = ::g::Fuse::GeoLocation::ILocationTracker_typeof();
    type->SetInterfaces(
        ::g::Fuse::GeoLocation::LocationTracker__BufferedCall_typeof(), offsetof(LocationTracker__StartListeningCall_type, interface0));
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker__StartListeningCall, desiredAccuracyInMeters), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker__StartListeningCall, minimumReportInterval), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL), offsetof(::g::Fuse::GeoLocation::LocationTracker__StartListeningCall, onLocationChanged), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), offsetof(::g::Fuse::GeoLocation::LocationTracker__StartListeningCall, onLocationError), 0);
}

LocationTracker__StartListeningCall_type* LocationTracker__StartListeningCall_typeof()
{
    static uSStrong<LocationTracker__StartListeningCall_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LocationTracker__StartListeningCall);
    options.TypeSize = sizeof(LocationTracker__StartListeningCall_type);
    type = (LocationTracker__StartListeningCall_type*)uClassType::New("Fuse.GeoLocation.LocationTracker.StartListeningCall", options);
    type->fp_build_ = LocationTracker__StartListeningCall_build;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*))LocationTracker__StartListeningCall__Apply_fn;
    return type;
}

// public StartListeningCall(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) :411
void LocationTracker__StartListeningCall__ctor__fn(LocationTracker__StartListeningCall* __this, uDelegate* onLocationChanged1, uDelegate* onLocationError1, int* minimumReportInterval1, double* desiredAccuracyInMeters1)
{
    __this->ctor_(onLocationChanged1, onLocationError1, *minimumReportInterval1, *desiredAccuracyInMeters1);
}

// public void Apply(Fuse.GeoLocation.ILocationTracker tracker) :418
void LocationTracker__StartListeningCall__Apply_fn(LocationTracker__StartListeningCall* __this, uObject* tracker)
{
    __this->Apply(tracker);
}

// public StartListeningCall New(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) :411
void LocationTracker__StartListeningCall__New1_fn(uDelegate* onLocationChanged1, uDelegate* onLocationError1, int* minimumReportInterval1, double* desiredAccuracyInMeters1, LocationTracker__StartListeningCall** __retval)
{
    *__retval = LocationTracker__StartListeningCall::New1(onLocationChanged1, onLocationError1, *minimumReportInterval1, *desiredAccuracyInMeters1);
}

// public StartListeningCall(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) [instance] :411
void LocationTracker__StartListeningCall::ctor_(uDelegate* onLocationChanged1, uDelegate* onLocationError1, int minimumReportInterval1, double desiredAccuracyInMeters1)
{
    minimumReportInterval = minimumReportInterval1;
    desiredAccuracyInMeters = desiredAccuracyInMeters1;
    onLocationError = onLocationError1;
    onLocationChanged = onLocationChanged1;
}

// public void Apply(Fuse.GeoLocation.ILocationTracker tracker) [instance] :418
void LocationTracker__StartListeningCall::Apply(uObject* tracker)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker.StartListeningCall", "Apply(Fuse.GeoLocation.ILocationTracker)");
    ::g::Fuse::GeoLocation::ILocationTracker::StartListening(uInterface(uPtr(tracker), ::TYPES[16/*Fuse.GeoLocation.ILocationTracker*/]), onLocationChanged, onLocationError, minimumReportInterval, desiredAccuracyInMeters);
}

// public StartListeningCall New(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) [static] :411
LocationTracker__StartListeningCall* LocationTracker__StartListeningCall::New1(uDelegate* onLocationChanged1, uDelegate* onLocationError1, int minimumReportInterval1, double desiredAccuracyInMeters1)
{
    LocationTracker__StartListeningCall* obj1 = (LocationTracker__StartListeningCall*)uNew(LocationTracker__StartListeningCall_typeof());
    obj1->ctor_(onLocationChanged1, onLocationError1, minimumReportInterval1, desiredAccuracyInMeters1);
    return obj1;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/$.uno
// -----------------------------------------------------------------------------------------

// private sealed class LocationTracker.StopListeningCall :424
// {
static void LocationTracker__StopListeningCall_build(uType* type)
{
    ::TYPES[16] = ::g::Fuse::GeoLocation::ILocationTracker_typeof();
    type->SetInterfaces(
        ::g::Fuse::GeoLocation::LocationTracker__BufferedCall_typeof(), offsetof(LocationTracker__StopListeningCall_type, interface0));
}

LocationTracker__StopListeningCall_type* LocationTracker__StopListeningCall_typeof()
{
    static uSStrong<LocationTracker__StopListeningCall_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LocationTracker__StopListeningCall);
    options.TypeSize = sizeof(LocationTracker__StopListeningCall_type);
    type = (LocationTracker__StopListeningCall_type*)uClassType::New("Fuse.GeoLocation.LocationTracker.StopListeningCall", options);
    type->fp_build_ = LocationTracker__StopListeningCall_build;
    type->fp_ctor_ = (void*)LocationTracker__StopListeningCall__New1_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*))LocationTracker__StopListeningCall__Apply_fn;
    return type;
}

// public StopListeningCall() :426
void LocationTracker__StopListeningCall__ctor__fn(LocationTracker__StopListeningCall* __this)
{
    __this->ctor_();
}

// public void Apply(Fuse.GeoLocation.ILocationTracker tracker) :429
void LocationTracker__StopListeningCall__Apply_fn(LocationTracker__StopListeningCall* __this, uObject* tracker)
{
    __this->Apply(tracker);
}

// public StopListeningCall New() :426
void LocationTracker__StopListeningCall__New1_fn(LocationTracker__StopListeningCall** __retval)
{
    *__retval = LocationTracker__StopListeningCall::New1();
}

// public StopListeningCall() [instance] :426
void LocationTracker__StopListeningCall::ctor_()
{
}

// public void Apply(Fuse.GeoLocation.ILocationTracker tracker) [instance] :429
void LocationTracker__StopListeningCall::Apply(uObject* tracker)
{
    uStackFrame __("Fuse.GeoLocation.LocationTracker.StopListeningCall", "Apply(Fuse.GeoLocation.ILocationTracker)");
    ::g::Fuse::GeoLocation::ILocationTracker::StopListening(uInterface(uPtr(tracker), ::TYPES[16/*Fuse.GeoLocation.ILocationTracker*/]));
}

// public StopListeningCall New() [static] :426
LocationTracker__StopListeningCall* LocationTracker__StopListeningCall::New1()
{
    LocationTracker__StopListeningCall* obj1 = (LocationTracker__StopListeningCall*)uNew(LocationTracker__StopListeningCall_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/ios/$.uno
// ---------------------------------------------------------------------------------------------

// private sealed class IOSLocationProvider.The :175
// {
static void IOSLocationProvider__The_build(uType* type)
{
    ::STRINGS[20] = uString::Const("Location request timed out");
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL), offsetof(::g::Fuse::GeoLocation::IOSLocationProvider__The, _promise), 0);
}

uType* IOSLocationProvider__The_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(IOSLocationProvider__The);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.IOSLocationProvider.The", options);
    type->fp_build_ = IOSLocationProvider__The_build;
    return type;
}

// public The(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) :179
void IOSLocationProvider__The__ctor__fn(IOSLocationProvider__The* __this, ::g::Uno::Threading::Promise* promise)
{
    __this->ctor_(promise);
}

// public The New(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) :179
void IOSLocationProvider__The__New1_fn(::g::Uno::Threading::Promise* promise, IOSLocationProvider__The** __retval)
{
    *__retval = IOSLocationProvider__The::New1(promise);
}

// public void TimedOut() :184
void IOSLocationProvider__The__TimedOut_fn(IOSLocationProvider__The* __this)
{
    __this->TimedOut();
}

// public The(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) [instance] :179
void IOSLocationProvider__The::ctor_(::g::Uno::Threading::Promise* promise)
{
    _promise = promise;
}

// public void TimedOut() [instance] :184
void IOSLocationProvider__The::TimedOut()
{
    uStackFrame __("Fuse.GeoLocation.IOSLocationProvider.The", "TimedOut()");

    if (uPtr(_promise)->State() == 0)
        uPtr(_promise)->Reject(::g::Uno::Exception::New2(::STRINGS[20/*"Location re...*/]));
}

// public The New(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) [static] :179
IOSLocationProvider__The* IOSLocationProvider__The::New1(::g::Uno::Threading::Promise* promise)
{
    IOSLocationProvider__The* obj1 = (IOSLocationProvider__The*)uNew(IOSLocationProvider__The_typeof());
    obj1->ctor_(promise);
    return obj1;
}
// }

}}} // ::g::Fuse::GeoLocation
