// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Maps/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.MapMarker.h>
#include <Fuse.Controls.MapStyle.h>
#include <Fuse.Controls.MapView.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Maps.iOS.FuseMapView.h>
#include <Fuse.Maps.iOS.MapView.h>
#include <Fuse.Maps.iOS.MapViewContainer.h>
#include <Fuse.Maps.MarkerIconCache.h>
#include <iOS/MapViewDelegate.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.Obser-ca008b9a.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[5];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Maps{
namespace iOS{

// public sealed extern class MapView :142
// {
static void MapView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("showsUserLocation");
    ::STRINGS[1] = uString::Const("rotateEnabled");
    ::STRINGS[2] = uString::Const("pitchEnabled");
    ::STRINGS[3] = uString::Const("zoomEnabled");
    ::STRINGS[4] = uString::Const("mapType");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action3_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[5] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Controls::MapMarker_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(MapView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(MapView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(MapView_type, interface2),
        ::g::Fuse::Controls::IMapView_typeof(), offsetof(MapView_type, interface3));
    type->SetFields(7,
        ::g::Fuse::Maps::iOS::MapViewContainer_typeof(), offsetof(::g::Fuse::Maps::iOS::MapView, _container), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Maps::iOS::MapView, _isReady), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Maps::iOS::MapView, _latInternal), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Maps::iOS::MapView, _lngInternal), 0,
        ::g::Fuse::Controls::MapStyle_typeof(), offsetof(::g::Fuse::Maps::iOS::MapView, _mapStyle), 0,
        ::g::Fuse::Maps::iOS::FuseMapView_typeof(), offsetof(::g::Fuse::Maps::iOS::MapView, _mapView), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Maps::iOS::MapView, _mapViewDelegate), 0,
        ::g::Fuse::Controls::MapView_typeof(), offsetof(::g::Fuse::Maps::iOS::MapView, _mapViewHost), 0,
        ::g::Fuse::Maps::MarkerIconCache_typeof(), offsetof(::g::Fuse::Maps::iOS::MapView, _markerGraphicsCache), 0,
        ::TYPES[0/*Uno.Action*/], offsetof(::g::Fuse::Maps::iOS::MapView, _OnReady), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Maps::iOS::MapView, _ShowCompass), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Maps::iOS::MapView, _ShowMyLocationButton), 0);
    type->Reflection.SetFunctions(31,
        new uFunction("get_AllowRotate", NULL, (void*)MapView__get_AllowRotate_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowRotate", NULL, (void*)MapView__set_AllowRotate_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_AllowTilt", NULL, (void*)MapView__get_AllowTilt_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowTilt", NULL, (void*)MapView__set_AllowTilt_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_AllowZoom", NULL, (void*)MapView__get_AllowZoom_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowZoom", NULL, (void*)MapView__set_AllowZoom_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Bearing", NULL, (void*)MapView__get_Bearing_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("Create", NULL, (void*)MapView__Create_fn, 0, true, type, 1, ::g::Fuse::Controls::MapView_typeof()),
        new uFunction("HandleLocationLongPress", NULL, (void*)MapView__HandleLocationLongPress_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("HandleLocationTapped", NULL, (void*)MapView__HandleLocationTapped_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("HandleMarkerTapped", NULL, (void*)MapView__HandleMarkerTapped_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_IsReady", NULL, (void*)MapView__get_IsReady_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Latitude", NULL, (void*)MapView__get_Latitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Longitude", NULL, (void*)MapView__get_Longitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Markers", NULL, (void*)MapView__get_Markers_fn, 0, false, ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Controls::MapMarker_typeof(), NULL), 0),
        new uFunction("MoveTo", NULL, (void*)MapView__MoveTo_fn, 0, false, uVoid_typeof(), 5, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("get_OnReady", NULL, (void*)MapView__get_OnReady_fn, 0, false, ::TYPES[0/*Uno.Action*/], 0),
        new uFunction("set_OnReady", NULL, (void*)MapView__set_OnReady_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Uno.Action*/]),
        new uFunction("RequestLocationAuth", NULL, (void*)MapView__RequestLocationAuth_fn, 0, false, uVoid_typeof(), 1, ::TYPES[1/*Uno.Action<bool>*/]),
        new uFunction("SetLocation", NULL, (void*)MapView__SetLocation_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("get_ShowCompass", NULL, (void*)MapView__get_ShowCompass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowCompass", NULL, (void*)MapView__set_ShowCompass_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ShowMyLocation", NULL, (void*)MapView__get_ShowMyLocation_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowMyLocation", NULL, (void*)MapView__set_ShowMyLocation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ShowMyLocationButton", NULL, (void*)MapView__get_ShowMyLocationButton_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowMyLocationButton", NULL, (void*)MapView__set_ShowMyLocationButton_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Style", NULL, (void*)MapView__get_Style_fn, 0, false, ::g::Fuse::Controls::MapStyle_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)MapView__set_Style_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::MapStyle_typeof()),
        new uFunction("get_Tilt", NULL, (void*)MapView__get_Tilt_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("UpdateMarkers", NULL, (void*)MapView__UpdateMarkers_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Zoom", NULL, (void*)MapView__get_Zoom_fn, 0, false, ::g::Uno::Double_typeof(), 0));
}

MapView_type* MapView_typeof()
{
    static uSStrong<MapView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(MapView);
    options.TypeSize = sizeof(MapView_type);
    type = (MapView_type*)uClassType::New("Fuse.Maps.iOS.MapView", options);
    type->fp_build_ = MapView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))MapView__Dispose_fn;
    type->interface3.fp_SetLocation = (void(*)(uObject*, double*, double*))MapView__SetLocation_fn;
    type->interface3.fp_MoveTo = (void(*)(uObject*, double*, double*, double*, double*, double*))MapView__MoveTo_fn;
    type->interface3.fp_UpdateMarkers = (void(*)(uObject*))MapView__UpdateMarkers_fn;
    type->interface3.fp_HandleMarkerTapped = (void(*)(uObject*, uString*))MapView__HandleMarkerTapped_fn;
    type->interface3.fp_HandleLocationTapped = (void(*)(uObject*, double*, double*))MapView__HandleLocationTapped_fn;
    type->interface3.fp_HandleLocationLongPress = (void(*)(uObject*, double*, double*))MapView__HandleLocationLongPress_fn;
    type->interface3.fp_get_Markers = (void(*)(uObject*, ::g::Uno::Collections::ObservableList**))MapView__get_Markers_fn;
    type->interface3.fp_get_Style = (void(*)(uObject*, int*))MapView__get_Style_fn;
    type->interface3.fp_set_Style = (void(*)(uObject*, int*))MapView__set_Style_fn;
    type->interface3.fp_get_Latitude = (void(*)(uObject*, double*))MapView__get_Latitude_fn;
    type->interface3.fp_get_Longitude = (void(*)(uObject*, double*))MapView__get_Longitude_fn;
    type->interface3.fp_get_Bearing = (void(*)(uObject*, double*))MapView__get_Bearing_fn;
    type->interface3.fp_get_Tilt = (void(*)(uObject*, double*))MapView__get_Tilt_fn;
    type->interface3.fp_get_Zoom = (void(*)(uObject*, double*))MapView__get_Zoom_fn;
    type->interface3.fp_get_IsReady = (void(*)(uObject*, bool*))MapView__get_IsReady_fn;
    type->interface3.fp_get_ShowMyLocation = (void(*)(uObject*, bool*))MapView__get_ShowMyLocation_fn;
    type->interface3.fp_set_ShowMyLocation = (void(*)(uObject*, bool*))MapView__set_ShowMyLocation_fn;
    type->interface3.fp_get_ShowMyLocationButton = (void(*)(uObject*, bool*))MapView__get_ShowMyLocationButton_fn;
    type->interface3.fp_set_ShowMyLocationButton = (void(*)(uObject*, bool*))MapView__set_ShowMyLocationButton_fn;
    type->interface3.fp_get_ShowCompass = (void(*)(uObject*, bool*))MapView__get_ShowCompass_fn;
    type->interface3.fp_set_ShowCompass = (void(*)(uObject*, bool*))MapView__set_ShowCompass_fn;
    type->interface3.fp_get_AllowZoom = (void(*)(uObject*, bool*))MapView__get_AllowZoom_fn;
    type->interface3.fp_set_AllowZoom = (void(*)(uObject*, bool*))MapView__set_AllowZoom_fn;
    type->interface3.fp_get_AllowTilt = (void(*)(uObject*, bool*))MapView__get_AllowTilt_fn;
    type->interface3.fp_set_AllowTilt = (void(*)(uObject*, bool*))MapView__set_AllowTilt_fn;
    type->interface3.fp_get_AllowRotate = (void(*)(uObject*, bool*))MapView__get_AllowRotate_fn;
    type->interface3.fp_set_AllowRotate = (void(*)(uObject*, bool*))MapView__set_AllowRotate_fn;
    type->interface3.fp_get_OnReady = (void(*)(uObject*, uDelegate**))MapView__get_OnReady_fn;
    type->interface3.fp_set_OnReady = (void(*)(uObject*, uDelegate*))MapView__set_OnReady_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))MapView__Dispose_fn;
    return type;
}

// private MapView(Fuse.Controls.MapView mapViewHost, Fuse.Maps.iOS.MapViewContainer mvc) :165
void MapView__ctor_5_fn(MapView* __this, ::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::Maps::iOS::MapViewContainer* mvc)
{
    __this->ctor_5(mapViewHost, mvc);
}

// private int AddMarker(string label, double lat, double lng, string iconPath, double iconAnchorX, double iconAnchorY) :271
void MapView__AddMarker_fn(MapView* __this, uString* label, double* lat, double* lng, uString* iconPath, double* iconAnchorX, double* iconAnchorY, int* __retval)
{
    *__retval = __this->AddMarker(label, *lat, *lng, iconPath, *iconAnchorX, *iconAnchorY);
}

// public bool get_AllowRotate() :440
void MapView__get_AllowRotate_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowRotate();
}

// public void set_AllowRotate(bool value) :441
void MapView__set_AllowRotate_fn(MapView* __this, bool* value)
{
    __this->AllowRotate(*value);
}

// public bool get_AllowTilt() :434
void MapView__get_AllowTilt_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowTilt();
}

// public void set_AllowTilt(bool value) :435
void MapView__set_AllowTilt_fn(MapView* __this, bool* value)
{
    __this->AllowTilt(*value);
}

// public bool get_AllowZoom() :428
void MapView__get_AllowZoom_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowZoom();
}

// public void set_AllowZoom(bool value) :429
void MapView__set_AllowZoom_fn(MapView* __this, bool* value)
{
    __this->AllowZoom(*value);
}

// public double get_Bearing() :364
void MapView__get_Bearing_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Bearing();
}

// private void ClearMarkers() :285
void MapView__ClearMarkers_fn(MapView* __this)
{
    __this->ClearMarkers();
}

// private ObjC.Object Configure(ObjC.Object mapView, Uno.Action<bool> onMapMove, Uno.Action<int, double, double> onMapTouch, Uno.Action<string> onMarkerTouch) :205
void MapView__Configure_fn(MapView* __this, ::g::ObjC::Object* mapView, uDelegate* onMapMove, uDelegate* onMapTouch, uDelegate* onMarkerTouch, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Configure(mapView, onMapMove, onMapTouch, onMarkerTouch);
}

// public static Fuse.Maps.iOS.MapView Create(Fuse.Controls.MapView mapViewHost) :159
void MapView__Create_fn(::g::Fuse::Controls::MapView* mapViewHost, MapView** __retval)
{
    *__retval = MapView::Create(mapViewHost);
}

// public override sealed void Dispose() :145
void MapView__Dispose_fn(MapView* __this)
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "Dispose()");
    uPtr(__this->_mapViewHost)->MapViewClient(NULL);
    __this->_mapViewHost = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private double GetZoomLevel() :227
void MapView__GetZoomLevel_fn(MapView* __this, double* __retval)
{
    *__retval = __this->GetZoomLevel();
}

// private void HandleLocationAuthChange(bool status) :391
void MapView__HandleLocationAuthChange_fn(MapView* __this, bool* status)
{
    __this->HandleLocationAuthChange(*status);
}

// public void HandleLocationLongPress(double lat, double lng) :259
void MapView__HandleLocationLongPress_fn(MapView* __this, double* lat, double* lng)
{
    __this->HandleLocationLongPress(*lat, *lng);
}

// public void HandleLocationTapped(double lat, double lng) :254
void MapView__HandleLocationTapped_fn(MapView* __this, double* lat, double* lng)
{
    __this->HandleLocationTapped(*lat, *lng);
}

// public void HandleMarkerTapped(string label) :291
void MapView__HandleMarkerTapped_fn(MapView* __this, uString* label)
{
    __this->HandleMarkerTapped(label);
}

// public bool get_IsReady() :190
void MapView__get_IsReady_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->IsReady();
}

// public double get_Latitude() :345
void MapView__get_Latitude_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Latitude();
}

// public double get_Longitude() :355
void MapView__get_Longitude_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Longitude();
}

// public Uno.Collections.ObservableList<Fuse.Controls.MapMarker> get_Markers() :313
void MapView__get_Markers_fn(MapView* __this, ::g::Uno::Collections::ObservableList** __retval)
{
    *__retval = __this->Markers();
}

// public void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation) :385
void MapView__MoveTo_fn(MapView* __this, double* latitude, double* longitude, double* zoomlevel, double* tilt, double* orientation)
{
    __this->MoveTo(*latitude, *longitude, *zoomlevel, *tilt, *orientation);
}

// private MapView New(Fuse.Controls.MapView mapViewHost, Fuse.Maps.iOS.MapViewContainer mvc) :165
void MapView__New3_fn(::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::Maps::iOS::MapViewContainer* mvc, MapView** __retval)
{
    *__retval = MapView::New3(mapViewHost, mvc);
}

// private void OnCameraMoved(bool animated) :264
void MapView__OnCameraMoved_fn(MapView* __this, bool* animated)
{
    __this->OnCameraMoved(*animated);
}

// private void OnMapTouch(int type, double lat, double lng) :233
void MapView__OnMapTouch_fn(MapView* __this, int* type, double* lat, double* lng)
{
    __this->OnMapTouch(*type, *lat, *lng);
}

// public generated Uno.Action get_OnReady() :195
void MapView__get_OnReady_fn(MapView* __this, uDelegate** __retval)
{
    *__retval = __this->OnReady();
}

// public generated void set_OnReady(Uno.Action value) :195
void MapView__set_OnReady_fn(MapView* __this, uDelegate* value)
{
    __this->OnReady(value);
}

// private void OnReadyInternal() :197
void MapView__OnReadyInternal_fn(MapView* __this)
{
    __this->OnReadyInternal();
}

// public void RequestLocationAuth(Uno.Action<bool> onAuthorizationResult) :413
void MapView__RequestLocationAuth_fn(MapView* __this, uDelegate* onAuthorizationResult)
{
    __this->RequestLocationAuth(onAuthorizationResult);
}

// public void SetLocation(double latitude, double longitude) :444
void MapView__SetLocation_fn(MapView* __this, double* latitude, double* longitude)
{
    __this->SetLocation(*latitude, *longitude);
}

// public generated bool get_ShowCompass() :422
void MapView__get_ShowCompass_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowCompass();
}

// public generated void set_ShowCompass(bool value) :423
void MapView__set_ShowCompass_fn(MapView* __this, bool* value)
{
    __this->ShowCompass(*value);
}

// public bool get_ShowMyLocation() :398
void MapView__get_ShowMyLocation_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowMyLocation();
}

// public void set_ShowMyLocation(bool value) :402
void MapView__set_ShowMyLocation_fn(MapView* __this, bool* value)
{
    __this->ShowMyLocation(*value);
}

// public generated bool get_ShowMyLocationButton() :410
void MapView__get_ShowMyLocationButton_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowMyLocationButton();
}

// public generated void set_ShowMyLocationButton(bool value) :410
void MapView__set_ShowMyLocationButton_fn(MapView* __this, bool* value)
{
    __this->ShowMyLocationButton(*value);
}

// public Fuse.Controls.MapStyle get_Style() :322
void MapView__get_Style_fn(MapView* __this, int* __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(Fuse.Controls.MapStyle value) :325
void MapView__set_Style_fn(MapView* __this, int* value)
{
    __this->Style(*value);
}

// public double get_Tilt() :371
void MapView__get_Tilt_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Tilt();
}

// public void UpdateMarkers() :296
void MapView__UpdateMarkers_fn(MapView* __this)
{
    __this->UpdateMarkers();
}

// public double get_Zoom() :378
void MapView__get_Zoom_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Zoom();
}

// private MapView(Fuse.Controls.MapView mapViewHost, Fuse.Maps.iOS.MapViewContainer mvc) [instance] :165
void MapView::ctor_5(::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::Maps::iOS::MapViewContainer* mvc)
{
    uStackFrame __("Fuse.Maps.iOS.MapView", ".ctor(Fuse.Controls.MapView,Fuse.Maps.iOS.MapViewContainer)");
    ctor_4(uPtr(mvc)->GetView());
    _mapViewHost = mapViewHost;
    _container = mvc;
    uPtr(_container)->OnResize = uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)MapView__OnReadyInternal_fn, this);
    _mapView = uPtr(_container)->Map;
    _mapViewDelegate = Configure(uPtr(_mapView)->Handle, uDelegate::New(::TYPES[1/*Uno.Action<bool>*/], (void*)MapView__OnCameraMoved_fn, this), uDelegate::New(::TYPES[2/*Uno.Action<int, double, double>*/], (void*)MapView__OnMapTouch_fn, this), uDelegate::New(::TYPES[3/*Uno.Action<string>*/], (void*)MapView__HandleMarkerTapped_fn, this));
    uPtr(_mapViewHost)->MapViewClient((uObject*)this);
    _markerGraphicsCache = ::g::Fuse::Maps::MarkerIconCache::New1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)MapView__UpdateMarkers_fn, this));
}

// private int AddMarker(string label, double lat, double lng, string iconPath, double iconAnchorX, double iconAnchorY) [instance] :271
int MapView::AddMarker(uString* label, double lat, double lng, uString* iconPath, double iconAnchorX, double iconAnchorY)
{
    @autoreleasepool
    {
        return [] (id<UnoObject> _this, ::NSString* label, double lat, double lng, ::NSString* iconPath, double iconAnchorX, double iconAnchorY) -> int
        {
            MapViewDelegate* dg = (MapViewDelegate*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<MapView*>((_this).unoObject, MapView_typeof())->_mapViewDelegate); }();
            return [dg addMarker:label latitude:lat longitude:lng icon:iconPath iconX:iconAnchorX iconY:iconAnchorY];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(label), lat, lng, ::uObjC::NativeString(iconPath), iconAnchorX, iconAnchorY);
        
    }
    
}

// public bool get_AllowRotate() [instance] :440
bool MapView::AllowRotate()
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "get_AllowRotate()");
    return uPtr(_mapView)->GetBoolValue(::STRINGS[1/*"rotateEnabled"*/]);
}

// public void set_AllowRotate(bool value) [instance] :441
void MapView::AllowRotate(bool value)
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "set_AllowRotate(bool)");
    uPtr(_mapView)->SetBoolValue(::STRINGS[1/*"rotateEnabled"*/], value);
}

// public bool get_AllowTilt() [instance] :434
bool MapView::AllowTilt()
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "get_AllowTilt()");
    return uPtr(_mapView)->GetBoolValue(::STRINGS[2/*"pitchEnabled"*/]);
}

// public void set_AllowTilt(bool value) [instance] :435
void MapView::AllowTilt(bool value)
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "set_AllowTilt(bool)");
    uPtr(_mapView)->SetBoolValue(::STRINGS[2/*"pitchEnabled"*/], value);
}

// public bool get_AllowZoom() [instance] :428
bool MapView::AllowZoom()
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "get_AllowZoom()");
    return uPtr(_mapView)->GetBoolValue(::STRINGS[3/*"zoomEnabled"*/]);
}

// public void set_AllowZoom(bool value) [instance] :429
void MapView::AllowZoom(bool value)
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "set_AllowZoom(bool)");
    uPtr(_mapView)->SetBoolValue(::STRINGS[3/*"zoomEnabled"*/], value);
}

// public double get_Bearing() [instance] :364
double MapView::Bearing()
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "get_Bearing()");
    return uPtr(_mapView)->GetHeading();
}

// private void ClearMarkers() [instance] :285
void MapView::ClearMarkers()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            MapViewDelegate* dg = (MapViewDelegate*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<MapView*>((_this).unoObject, MapView_typeof())->_mapViewDelegate); }();
            [dg clearMarkers];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// private ObjC.Object Configure(ObjC.Object mapView, Uno.Action<bool> onMapMove, Uno.Action<int, double, double> onMapTouch, Uno.Action<string> onMarkerTouch) [instance] :205
::g::ObjC::Object* MapView::Configure(::g::ObjC::Object* mapView, uDelegate* onMapMove, uDelegate* onMapTouch, uDelegate* onMarkerTouch)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id mapView, ::uObjC::Function<void, bool> onMapMove, ::uObjC::Function<void, int, double, double> onMapTouch, ::uObjC::Function<void, ::NSString*> onMarkerTouch) -> ::id
        {
            MKMapView* mv = mapView;
            MapViewDelegate* dg = [[MapViewDelegate alloc] init];
            [dg setAsDelegate:mv];
            [dg setMapMoveAction:onMapMove];
            [dg setMapTouchAction:onMapTouch];
            [dg setMarkerSelectAction:onMarkerTouch];
            return dg;
        } (::g::ObjC::Object::GetHandle(mapView), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, bool>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, bool>)nil : (^ void (bool arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(uCRef(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onMapMove]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, int, double, double>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, int, double, double>)nil : (^ void (int arg1, double arg2, double arg3)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->Invoke(3, uCRef<int>(arg1), uCRef(arg2), uCRef(arg3));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onMapTouch]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onMarkerTouch])));
        
    }
    
}

// private double GetZoomLevel() [instance] :227
double MapView::GetZoomLevel()
{
    @autoreleasepool
    {
        return [] (id<UnoObject> _this) -> double
        {
            MapViewDelegate* dg = (MapViewDelegate*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<MapView*>((_this).unoObject, MapView_typeof())->_mapViewDelegate); }();
            return [dg getZoomLevel];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// private void HandleLocationAuthChange(bool status) [instance] :391
void MapView::HandleLocationAuthChange(bool status)
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "HandleLocationAuthChange(bool)");
    uPtr(_mapView)->SetBoolValue(::STRINGS[0/*"showsUserLo...*/], status);
}

// public void HandleLocationLongPress(double lat, double lng) [instance] :259
void MapView::HandleLocationLongPress(double lat, double lng)
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "HandleLocationLongPress(double,double)");
    uPtr(_mapViewHost)->HandleLocationLongPress(lat, lng);
}

// public void HandleLocationTapped(double lat, double lng) [instance] :254
void MapView::HandleLocationTapped(double lat, double lng)
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "HandleLocationTapped(double,double)");
    uPtr(_mapViewHost)->HandleLocationTapped(lat, lng);
}

// public void HandleMarkerTapped(string label) [instance] :291
void MapView::HandleMarkerTapped(uString* label)
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "HandleMarkerTapped(string)");
    uPtr(_mapViewHost)->HandleMarkerTapped(label);
}

// public bool get_IsReady() [instance] :190
bool MapView::IsReady()
{
    return _isReady;
}

// public double get_Latitude() [instance] :345
double MapView::Latitude()
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "get_Latitude()");
    return ::g::Uno::Double::IsNaN(uPtr(_mapView)->GetLatitude()) ? _latInternal : uPtr(_mapView)->GetLatitude();
}

// public double get_Longitude() [instance] :355
double MapView::Longitude()
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "get_Longitude()");
    return ::g::Uno::Double::IsNaN(uPtr(_mapView)->GetLongitude()) ? _lngInternal : uPtr(_mapView)->GetLongitude();
}

// public Uno.Collections.ObservableList<Fuse.Controls.MapMarker> get_Markers() [instance] :313
::g::Uno::Collections::ObservableList* MapView::Markers()
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "get_Markers()");
    return uPtr(_mapViewHost)->Markers();
}

// public void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation) [instance] :385
void MapView::MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, double latitude, double longitude, double zoomlevel, double tilt, double orientation) -> void
        {
            MapViewDelegate* dg = (MapViewDelegate*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<MapView*>((_this).unoObject, MapView_typeof())->_mapViewDelegate); }();
            [dg moveTo:latitude longitude:longitude zoom:zoomlevel tilt:tilt orientation:orientation];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], latitude, longitude, zoomlevel, tilt, orientation);
        
    }
    
}

// private void OnCameraMoved(bool animated) [instance] :264
void MapView::OnCameraMoved(bool animated)
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "OnCameraMoved(bool)");

    if (animated)
        uPtr(_mapViewHost)->OnMapInteractionEnd();
}

// private void OnMapTouch(int type, double lat, double lng) [instance] :233
void MapView::OnMapTouch(int type, double lat, double lng)
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "OnMapTouch(int,double,double)");

    switch (type)
    {
        case 0:
        {
            uPtr(_mapViewHost)->OnMapInteractionStart();
            break;
        }
        case 1:
            break;
        case 2:
        {
            HandleLocationTapped(lat, lng);
            break;
        }
        case 3:
        {
            HandleLocationLongPress(lat, lng);
            break;
        }
        case 4:
        {
            uPtr(_mapViewHost)->OnMapInteractionEnd();
            break;
        }
    }
}

// public generated Uno.Action get_OnReady() [instance] :195
uDelegate* MapView::OnReady()
{
    return _OnReady;
}

// public generated void set_OnReady(Uno.Action value) [instance] :195
void MapView::OnReady(uDelegate* value)
{
    _OnReady = value;
}

// private void OnReadyInternal() [instance] :197
void MapView::OnReadyInternal()
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "OnReadyInternal()");
    _isReady = true;

    if (::g::Uno::Delegate::op_Inequality(OnReady(), NULL))
        uPtr(OnReady())->InvokeVoid();
}

// public void RequestLocationAuth(Uno.Action<bool> onAuthorizationResult) [instance] :413
void MapView::RequestLocationAuth(uDelegate* onAuthorizationResult)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::uObjC::Function<void, bool> onAuthorizationResult) -> void
        {
            MapViewDelegate* dg = (MapViewDelegate*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<MapView*>((_this).unoObject, MapView_typeof())->_mapViewDelegate); }();
            [dg requestLocationAuthentication:onAuthorizationResult];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, bool>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, bool>)nil : (^ void (bool arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(uCRef(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onAuthorizationResult]));
        
    }
    
}

// public void SetLocation(double latitude, double longitude) [instance] :444
void MapView::SetLocation(double latitude, double longitude)
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "SetLocation(double,double)");
    MoveTo(latitude, longitude, Zoom(), Tilt(), Bearing());
}

// public generated bool get_ShowCompass() [instance] :422
bool MapView::ShowCompass()
{
    return _ShowCompass;
}

// public generated void set_ShowCompass(bool value) [instance] :423
void MapView::ShowCompass(bool value)
{
    _ShowCompass = value;
}

// public bool get_ShowMyLocation() [instance] :398
bool MapView::ShowMyLocation()
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "get_ShowMyLocation()");
    return uPtr(_mapView)->GetBoolValue(::STRINGS[0/*"showsUserLo...*/]);
}

// public void set_ShowMyLocation(bool value) [instance] :402
void MapView::ShowMyLocation(bool value)
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "set_ShowMyLocation(bool)");

    if (value)
        RequestLocationAuth(uDelegate::New(::TYPES[1/*Uno.Action<bool>*/], (void*)MapView__HandleLocationAuthChange_fn, this));
    else
        uPtr(_mapView)->SetBoolValue(::STRINGS[0/*"showsUserLo...*/], value);
}

// public generated bool get_ShowMyLocationButton() [instance] :410
bool MapView::ShowMyLocationButton()
{
    return _ShowMyLocationButton;
}

// public generated void set_ShowMyLocationButton(bool value) [instance] :410
void MapView::ShowMyLocationButton(bool value)
{
    _ShowMyLocationButton = value;
}

// public Fuse.Controls.MapStyle get_Style() [instance] :322
int MapView::Style()
{
    return _mapStyle;
}

// public void set_Style(Fuse.Controls.MapStyle value) [instance] :325
void MapView::Style(int value)
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "set_Style(Fuse.Controls.MapStyle)");
    _mapStyle = value;

    switch (_mapStyle)
    {
        case 1:
        {
            uPtr(_mapView)->SetIntValue(::STRINGS[4/*"mapType"*/], 1);
            break;
        }
        case 2:
        {
            uPtr(_mapView)->SetIntValue(::STRINGS[4/*"mapType"*/], 2);
            break;
        }
        default:
        {
            uPtr(_mapView)->SetIntValue(::STRINGS[4/*"mapType"*/], 0);
            break;
        }
    }
}

// public double get_Tilt() [instance] :371
double MapView::Tilt()
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "get_Tilt()");
    return uPtr(_mapView)->GetPitch();
}

// public void UpdateMarkers() [instance] :296
void MapView::UpdateMarkers()
{
    uStackFrame __("Fuse.Maps.iOS.MapView", "UpdateMarkers()");
    ::g::Fuse::Controls::MapMarker* ret3;
    ClearMarkers();

    for (uObject* enum1 = (uObject*)uPtr(Markers())->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[4/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Controls::MapMarker* m = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[5/*Uno.Collections.IEnumerator<Fuse.Controls.MapMarker>*/]), &ret3), ret3);
        AddMarker(uPtr(m)->Label(), uPtr(m)->Latitude(), uPtr(m)->Longitude(), uPtr(_markerGraphicsCache)->Get(uPtr(m)->IconFile()), (double)uPtr(m)->IconAnchorX(), (double)uPtr(m)->IconAnchorY());
    }
}

// public double get_Zoom() [instance] :378
double MapView::Zoom()
{
    return GetZoomLevel();
}

// public static Fuse.Maps.iOS.MapView Create(Fuse.Controls.MapView mapViewHost) [static] :159
MapView* MapView::Create(::g::Fuse::Controls::MapView* mapViewHost)
{
    ::g::Fuse::Maps::iOS::FuseMapView* v = ::g::Fuse::Maps::iOS::FuseMapView::New1();
    ::g::Fuse::Maps::iOS::MapViewContainer* mvc = ::g::Fuse::Maps::iOS::MapViewContainer::New1(v);
    return MapView::New3(mapViewHost, mvc);
}

// private MapView New(Fuse.Controls.MapView mapViewHost, Fuse.Maps.iOS.MapViewContainer mvc) [static] :165
MapView* MapView::New3(::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::Maps::iOS::MapViewContainer* mvc)
{
    MapView* obj2 = (MapView*)uNew(MapView_typeof());
    obj2->ctor_5(mapViewHost, mvc);
    return obj2;
}
// }

}}}} // ::g::Fuse::Maps::iOS
