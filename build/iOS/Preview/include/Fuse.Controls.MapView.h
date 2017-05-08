// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Maps/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Controls{struct MapCameraState;}}}
namespace g{namespace Fuse{namespace Controls{struct MapConfig;}}}
namespace g{namespace Fuse{namespace Controls{struct MapMarker;}}}
namespace g{namespace Fuse{namespace Controls{struct MapView;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class MapView :271
// {
::g::Fuse::Controls::Control_type* MapView_typeof();
void MapView__ctor_7_fn(MapView* __this);
void MapView__AddMarker_fn(MapView* __this, ::g::Fuse::Controls::MapMarker* m);
void MapView__get_AllowRotate_fn(MapView* __this, bool* __retval);
void MapView__set_AllowRotate_fn(MapView* __this, bool* value);
void MapView__get_AllowTilt_fn(MapView* __this, bool* __retval);
void MapView__set_AllowTilt_fn(MapView* __this, bool* value);
void MapView__get_AllowZoom_fn(MapView* __this, bool* __retval);
void MapView__set_AllowZoom_fn(MapView* __this, bool* value);
void MapView__ApplyCameraState_fn(MapView* __this);
void MapView__get_Bearing_fn(MapView* __this, double* __retval);
void MapView__set_Bearing_fn(MapView* __this, double* value);
void MapView__ClearMarkers_fn(MapView* __this);
void MapView__CreateNativeView_fn(MapView* __this, uObject** __retval);
void MapView__DeferredMarkerUpdate_fn(MapView* __this);
void MapView__HandleLocationLongPress_fn(MapView* __this, double* latitude, double* longitude);
void MapView__HandleLocationTapped_fn(MapView* __this, double* latitude, double* longitude);
void MapView__HandleMarkerTapped_fn(MapView* __this, uString* label);
void MapView__get_Latitude_fn(MapView* __this, double* __retval);
void MapView__set_Latitude_fn(MapView* __this, double* value);
void MapView__add_LocationLongPressed_fn(MapView* __this, uDelegate* value);
void MapView__remove_LocationLongPressed_fn(MapView* __this, uDelegate* value);
void MapView__add_LocationTapped_fn(MapView* __this, uDelegate* value);
void MapView__remove_LocationTapped_fn(MapView* __this, uDelegate* value);
void MapView__get_Longitude_fn(MapView* __this, double* __retval);
void MapView__set_Longitude_fn(MapView* __this, double* value);
void MapView__get_MapIsReady_fn(MapView* __this, bool* __retval);
void MapView__get_MapViewClient_fn(MapView* __this, uObject** __retval);
void MapView__set_MapViewClient_fn(MapView* __this, uObject* value);
void MapView__MarkerFromObject_fn(::g::Fuse::Scripting::Object* o, ::g::Fuse::Controls::MapMarker** __retval);
void MapView__get_Markers_fn(MapView* __this, ::g::Uno::Collections::ObservableList** __retval);
void MapView__add_MarkerTapped_fn(MapView* __this, uDelegate* value);
void MapView__remove_MarkerTapped_fn(MapView* __this, uDelegate* value);
void MapView__New4_fn(MapView** __retval);
void MapView__OnMapInteractionEnd_fn(MapView* __this);
void MapView__OnMapInteractionStart_fn(MapView* __this);
void MapView__OnMapReady_fn(MapView* __this);
void MapView__OnMarkerAdded_fn(MapView* __this, ::g::Fuse::Controls::MapMarker* marker);
void MapView__OnMarkerRemoved_fn(MapView* __this, ::g::Fuse::Controls::MapMarker* marker);
void MapView__RemoveMarker_fn(MapView* __this, ::g::Fuse::Controls::MapMarker* m);
void MapView__setBearing_fn(::g::Fuse::Scripting::Context* c, MapView* view, uArray* args);
void MapView__SetBearing_fn(MapView* __this, double* value, uObject* origin);
void MapView__SetLatitude_fn(MapView* __this, double* value, uObject* origin);
void MapView__setLocation_fn(::g::Fuse::Scripting::Context* c, MapView* view, uArray* args);
void MapView__SetLocation_fn(MapView* __this, double* latitude, double* longitude);
void MapView__SetLongitude_fn(MapView* __this, double* value, uObject* origin);
void MapView__setMarkers_fn(::g::Fuse::Scripting::Context* c, MapView* view, uArray* args);
void MapView__SetMarkersWithArray_fn(MapView* view, ::g::Fuse::Scripting::Array* a);
void MapView__setTilt_fn(::g::Fuse::Scripting::Context* c, MapView* view, uArray* args);
void MapView__SetTilt_fn(MapView* __this, double* value, uObject* origin);
void MapView__setZoom_fn(::g::Fuse::Scripting::Context* c, MapView* view, uArray* args);
void MapView__SetZoom_fn(MapView* __this, double* value, uObject* origin);
void MapView__get_ShowCompass_fn(MapView* __this, bool* __retval);
void MapView__set_ShowCompass_fn(MapView* __this, bool* value);
void MapView__get_ShowMyLocation_fn(MapView* __this, bool* __retval);
void MapView__set_ShowMyLocation_fn(MapView* __this, bool* value);
void MapView__get_ShowMyLocationButton_fn(MapView* __this, bool* __retval);
void MapView__set_ShowMyLocationButton_fn(MapView* __this, bool* value);
void MapView__get_Style_fn(MapView* __this, int* __retval);
void MapView__set_Style_fn(MapView* __this, int* value);
void MapView__get_Tilt_fn(MapView* __this, double* __retval);
void MapView__set_Tilt_fn(MapView* __this, double* value);
void MapView__UpdateCameraNextFrame_fn(MapView* __this);
void MapView__UpdateMarkers_fn(MapView* __this);
void MapView__UpdateMarkersNextFrame_fn(MapView* __this);
void MapView__UpdateRestState_fn(MapView* __this);
void MapView__get_UserInteractingWithMap_fn(MapView* __this, bool* __retval);
void MapView__set_UserInteractingWithMap_fn(MapView* __this, bool* value);
void MapView__get_Zoom_fn(MapView* __this, double* __retval);
void MapView__set_Zoom_fn(MapView* __this, double* value);

struct MapView : ::g::Fuse::Controls::Panel
{
    ::g::Uno::UX::Selector _bearingName;
    uStrong< ::g::Fuse::Controls::MapCameraState*> _cameraState;
    ::g::Uno::UX::Selector _latitudeName;
    ::g::Uno::UX::Selector _longitudeName;
    uStrong< ::g::Fuse::Controls::MapConfig*> _mapConfig;
    bool _mapReady;
    uStrong<uObject*> _mapViewClient;
    uStrong< ::g::Uno::Collections::ObservableList*> _markers;
    ::g::Uno::UX::Selector _tiltName;
    bool _willUpdateCameraNextFrame;
    bool _willUpdateMarkersNextFrame;
    ::g::Uno::UX::Selector _zoomName;
    bool _UserInteractingWithMap;
    uStrong<uDelegate*> LocationLongPressed1;
    uStrong<uDelegate*> LocationTapped1;
    uStrong<uDelegate*> MarkerTapped1;

    void ctor_7();
    void AddMarker(::g::Fuse::Controls::MapMarker* m);
    bool AllowRotate();
    void AllowRotate(bool value);
    bool AllowTilt();
    void AllowTilt(bool value);
    bool AllowZoom();
    void AllowZoom(bool value);
    void ApplyCameraState();
    double Bearing();
    void Bearing(double value);
    void ClearMarkers();
    void DeferredMarkerUpdate();
    void HandleLocationLongPress(double latitude, double longitude);
    void HandleLocationTapped(double latitude, double longitude);
    void HandleMarkerTapped(uString* label);
    double Latitude();
    void Latitude(double value);
    void add_LocationLongPressed(uDelegate* value);
    void remove_LocationLongPressed(uDelegate* value);
    void add_LocationTapped(uDelegate* value);
    void remove_LocationTapped(uDelegate* value);
    double Longitude();
    void Longitude(double value);
    bool MapIsReady();
    uObject* MapViewClient();
    void MapViewClient(uObject* value);
    ::g::Uno::Collections::ObservableList* Markers();
    void add_MarkerTapped(uDelegate* value);
    void remove_MarkerTapped(uDelegate* value);
    void OnMapInteractionEnd();
    void OnMapInteractionStart();
    void OnMapReady();
    void OnMarkerAdded(::g::Fuse::Controls::MapMarker* marker);
    void OnMarkerRemoved(::g::Fuse::Controls::MapMarker* marker);
    void RemoveMarker(::g::Fuse::Controls::MapMarker* m);
    void SetBearing(double value, uObject* origin);
    void SetLatitude(double value, uObject* origin);
    void SetLocation(double latitude, double longitude);
    void SetLongitude(double value, uObject* origin);
    void SetTilt(double value, uObject* origin);
    void SetZoom(double value, uObject* origin);
    bool ShowCompass();
    void ShowCompass(bool value);
    bool ShowMyLocation();
    void ShowMyLocation(bool value);
    bool ShowMyLocationButton();
    void ShowMyLocationButton(bool value);
    int Style();
    void Style(int value);
    double Tilt();
    void Tilt(double value);
    void UpdateCameraNextFrame();
    void UpdateMarkers();
    void UpdateMarkersNextFrame();
    void UpdateRestState();
    bool UserInteractingWithMap();
    void UserInteractingWithMap(bool value);
    double Zoom();
    void Zoom(double value);
    static ::g::Fuse::Controls::MapMarker* MarkerFromObject(::g::Fuse::Scripting::Object* o);
    static MapView* New4();
    static void setBearing(::g::Fuse::Scripting::Context* c, MapView* view, uArray* args);
    static void setLocation(::g::Fuse::Scripting::Context* c, MapView* view, uArray* args);
    static void setMarkers(::g::Fuse::Scripting::Context* c, MapView* view, uArray* args);
    static void SetMarkersWithArray(MapView* view, ::g::Fuse::Scripting::Array* a);
    static void setTilt(::g::Fuse::Scripting::Context* c, MapView* view, uArray* args);
    static void setZoom(::g::Fuse::Scripting::Context* c, MapView* view, uArray* args);
};
// }

}}} // ::g::Fuse::Controls
