// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Maps/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.IMapView.h>
#include <Fuse.Controls.Native.-98c3244c.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{struct MapMarker;}}}
namespace g{namespace Fuse{namespace Controls{struct MapView;}}}
namespace g{namespace Fuse{namespace Maps{namespace iOS{struct FuseMapView;}}}}
namespace g{namespace Fuse{namespace Maps{namespace iOS{struct MapView;}}}}
namespace g{namespace Fuse{namespace Maps{namespace iOS{struct MapViewContainer;}}}}
namespace g{namespace Fuse{namespace Maps{struct MarkerIconCache;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}

namespace g{
namespace Fuse{
namespace Maps{
namespace iOS{

// public sealed extern class MapView :142
// {
struct MapView_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::IMapView interface3;
};

MapView_type* MapView_typeof();
void MapView__ctor_5_fn(MapView* __this, ::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::Maps::iOS::MapViewContainer* mvc);
void MapView__AddMarker_fn(MapView* __this, uString* label, double* lat, double* lng, uString* iconPath, double* iconAnchorX, double* iconAnchorY, int* __retval);
void MapView__get_AllowRotate_fn(MapView* __this, bool* __retval);
void MapView__set_AllowRotate_fn(MapView* __this, bool* value);
void MapView__get_AllowTilt_fn(MapView* __this, bool* __retval);
void MapView__set_AllowTilt_fn(MapView* __this, bool* value);
void MapView__get_AllowZoom_fn(MapView* __this, bool* __retval);
void MapView__set_AllowZoom_fn(MapView* __this, bool* value);
void MapView__get_Bearing_fn(MapView* __this, double* __retval);
void MapView__ClearMarkers_fn(MapView* __this);
void MapView__Configure_fn(MapView* __this, ::g::ObjC::Object* mapView, uDelegate* onMapMove, uDelegate* onMapTouch, uDelegate* onMarkerTouch, ::g::ObjC::Object** __retval);
void MapView__Create_fn(::g::Fuse::Controls::MapView* mapViewHost, MapView** __retval);
void MapView__Dispose_fn(MapView* __this);
void MapView__GetZoomLevel_fn(MapView* __this, double* __retval);
void MapView__HandleLocationAuthChange_fn(MapView* __this, bool* status);
void MapView__HandleLocationLongPress_fn(MapView* __this, double* lat, double* lng);
void MapView__HandleLocationTapped_fn(MapView* __this, double* lat, double* lng);
void MapView__HandleMarkerTapped_fn(MapView* __this, uString* label);
void MapView__get_IsReady_fn(MapView* __this, bool* __retval);
void MapView__get_Latitude_fn(MapView* __this, double* __retval);
void MapView__get_Longitude_fn(MapView* __this, double* __retval);
void MapView__get_Markers_fn(MapView* __this, ::g::Uno::Collections::ObservableList** __retval);
void MapView__MoveTo_fn(MapView* __this, double* latitude, double* longitude, double* zoomlevel, double* tilt, double* orientation);
void MapView__New3_fn(::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::Maps::iOS::MapViewContainer* mvc, MapView** __retval);
void MapView__OnCameraMoved_fn(MapView* __this, bool* animated);
void MapView__OnMapTouch_fn(MapView* __this, int* type, double* lat, double* lng);
void MapView__get_OnReady_fn(MapView* __this, uDelegate** __retval);
void MapView__set_OnReady_fn(MapView* __this, uDelegate* value);
void MapView__OnReadyInternal_fn(MapView* __this);
void MapView__RequestLocationAuth_fn(MapView* __this, uDelegate* onAuthorizationResult);
void MapView__SetLocation_fn(MapView* __this, double* latitude, double* longitude);
void MapView__get_ShowCompass_fn(MapView* __this, bool* __retval);
void MapView__set_ShowCompass_fn(MapView* __this, bool* value);
void MapView__get_ShowMyLocation_fn(MapView* __this, bool* __retval);
void MapView__set_ShowMyLocation_fn(MapView* __this, bool* value);
void MapView__get_ShowMyLocationButton_fn(MapView* __this, bool* __retval);
void MapView__set_ShowMyLocationButton_fn(MapView* __this, bool* value);
void MapView__get_Style_fn(MapView* __this, int* __retval);
void MapView__set_Style_fn(MapView* __this, int* value);
void MapView__get_Tilt_fn(MapView* __this, double* __retval);
void MapView__UpdateMarkers_fn(MapView* __this);
void MapView__get_Zoom_fn(MapView* __this, double* __retval);

struct MapView : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong< ::g::Fuse::Maps::iOS::MapViewContainer*> _container;
    bool _isReady;
    double _latInternal;
    double _lngInternal;
    int _mapStyle;
    uStrong< ::g::Fuse::Maps::iOS::FuseMapView*> _mapView;
    uStrong< ::g::ObjC::Object*> _mapViewDelegate;
    uStrong< ::g::Fuse::Controls::MapView*> _mapViewHost;
    uStrong< ::g::Fuse::Maps::MarkerIconCache*> _markerGraphicsCache;
    uStrong<uDelegate*> _OnReady;
    bool _ShowCompass;
    bool _ShowMyLocationButton;

    void ctor_5(::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::Maps::iOS::MapViewContainer* mvc);
    int AddMarker(uString* label, double lat, double lng, uString* iconPath, double iconAnchorX, double iconAnchorY);
    bool AllowRotate();
    void AllowRotate(bool value);
    bool AllowTilt();
    void AllowTilt(bool value);
    bool AllowZoom();
    void AllowZoom(bool value);
    double Bearing();
    void ClearMarkers();
    ::g::ObjC::Object* Configure(::g::ObjC::Object* mapView, uDelegate* onMapMove, uDelegate* onMapTouch, uDelegate* onMarkerTouch);
    double GetZoomLevel();
    void HandleLocationAuthChange(bool status);
    void HandleLocationLongPress(double lat, double lng);
    void HandleLocationTapped(double lat, double lng);
    void HandleMarkerTapped(uString* label);
    bool IsReady();
    double Latitude();
    double Longitude();
    ::g::Uno::Collections::ObservableList* Markers();
    void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation);
    void OnCameraMoved(bool animated);
    void OnMapTouch(int type, double lat, double lng);
    uDelegate* OnReady();
    void OnReady(uDelegate* value);
    void OnReadyInternal();
    void RequestLocationAuth(uDelegate* onAuthorizationResult);
    void SetLocation(double latitude, double longitude);
    bool ShowCompass();
    void ShowCompass(bool value);
    bool ShowMyLocation();
    void ShowMyLocation(bool value);
    bool ShowMyLocationButton();
    void ShowMyLocationButton(bool value);
    int Style();
    void Style(int value);
    double Tilt();
    void UpdateMarkers();
    double Zoom();
    static MapView* Create(::g::Fuse::Controls::MapView* mapViewHost);
    static MapView* New3(::g::Fuse::Controls::MapView* mapViewHost, ::g::Fuse::Maps::iOS::MapViewContainer* mvc);
};
// }

}}}} // ::g::Fuse::Maps::iOS
