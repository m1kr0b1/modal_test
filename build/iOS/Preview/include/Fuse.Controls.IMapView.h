// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Maps/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct MapMarker;}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface IMapView :238
// {
uInterfaceType* IMapView_typeof();

struct IMapView
{
    void(*fp_get_AllowRotate)(uObject*, bool*);
    void(*fp_set_AllowRotate)(uObject*, bool*);
    void(*fp_get_AllowTilt)(uObject*, bool*);
    void(*fp_set_AllowTilt)(uObject*, bool*);
    void(*fp_get_AllowZoom)(uObject*, bool*);
    void(*fp_set_AllowZoom)(uObject*, bool*);
    void(*fp_get_Bearing)(uObject*, double*);
    void(*fp_HandleLocationLongPress)(uObject*, double*, double*);
    void(*fp_HandleLocationTapped)(uObject*, double*, double*);
    void(*fp_HandleMarkerTapped)(uObject*, uString*);
    void(*fp_get_IsReady)(uObject*, bool*);
    void(*fp_get_Latitude)(uObject*, double*);
    void(*fp_get_Longitude)(uObject*, double*);
    void(*fp_get_Markers)(uObject*, ::g::Uno::Collections::ObservableList**);
    void(*fp_MoveTo)(uObject*, double*, double*, double*, double*, double*);
    void(*fp_get_OnReady)(uObject*, uDelegate**);
    void(*fp_set_OnReady)(uObject*, uDelegate*);
    void(*fp_SetLocation)(uObject*, double*, double*);
    void(*fp_get_ShowCompass)(uObject*, bool*);
    void(*fp_set_ShowCompass)(uObject*, bool*);
    void(*fp_get_ShowMyLocation)(uObject*, bool*);
    void(*fp_set_ShowMyLocation)(uObject*, bool*);
    void(*fp_get_ShowMyLocationButton)(uObject*, bool*);
    void(*fp_set_ShowMyLocationButton)(uObject*, bool*);
    void(*fp_get_Style)(uObject*, int*);
    void(*fp_set_Style)(uObject*, int*);
    void(*fp_get_Tilt)(uObject*, double*);
    void(*fp_UpdateMarkers)(uObject*);
    void(*fp_get_Zoom)(uObject*, double*);
    static bool AllowRotate(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_AllowRotate(__this, &__retval), __retval; }
    static void AllowRotate(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_AllowRotate(__this, &value); }
    static bool AllowTilt(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_AllowTilt(__this, &__retval), __retval; }
    static void AllowTilt(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_AllowTilt(__this, &value); }
    static bool AllowZoom(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_AllowZoom(__this, &__retval), __retval; }
    static void AllowZoom(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_AllowZoom(__this, &value); }
    static double Bearing(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Bearing(__this, &__retval), __retval; }
    static void HandleLocationLongPress(const uInterface& __this, double latitude, double longitude) { __this.VTable<IMapView>()->fp_HandleLocationLongPress(__this, &latitude, &longitude); }
    static void HandleLocationTapped(const uInterface& __this, double latitude, double longitude) { __this.VTable<IMapView>()->fp_HandleLocationTapped(__this, &latitude, &longitude); }
    static void HandleMarkerTapped(const uInterface& __this, uString* label) { __this.VTable<IMapView>()->fp_HandleMarkerTapped(__this, label); }
    static bool IsReady(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_IsReady(__this, &__retval), __retval; }
    static double Latitude(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Latitude(__this, &__retval), __retval; }
    static double Longitude(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Longitude(__this, &__retval), __retval; }
    static ::g::Uno::Collections::ObservableList* Markers(const uInterface& __this) { ::g::Uno::Collections::ObservableList* __retval; return __this.VTable<IMapView>()->fp_get_Markers(__this, &__retval), __retval; }
    static void MoveTo(const uInterface& __this, double latitude, double longitude, double zoomlevel, double tilt, double orientation) { __this.VTable<IMapView>()->fp_MoveTo(__this, &latitude, &longitude, &zoomlevel, &tilt, &orientation); }
    static uDelegate* OnReady(const uInterface& __this) { uDelegate* __retval; return __this.VTable<IMapView>()->fp_get_OnReady(__this, &__retval), __retval; }
    static void OnReady(const uInterface& __this, uDelegate* value) { __this.VTable<IMapView>()->fp_set_OnReady(__this, value); }
    static void SetLocation(const uInterface& __this, double latitude, double longitude) { __this.VTable<IMapView>()->fp_SetLocation(__this, &latitude, &longitude); }
    static bool ShowCompass(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_ShowCompass(__this, &__retval), __retval; }
    static void ShowCompass(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_ShowCompass(__this, &value); }
    static bool ShowMyLocation(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_ShowMyLocation(__this, &__retval), __retval; }
    static void ShowMyLocation(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_ShowMyLocation(__this, &value); }
    static bool ShowMyLocationButton(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_ShowMyLocationButton(__this, &__retval), __retval; }
    static void ShowMyLocationButton(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_ShowMyLocationButton(__this, &value); }
    static int Style(const uInterface& __this) { int __retval; return __this.VTable<IMapView>()->fp_get_Style(__this, &__retval), __retval; }
    static void Style(const uInterface& __this, int value) { __this.VTable<IMapView>()->fp_set_Style(__this, &value); }
    static double Tilt(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Tilt(__this, &__retval), __retval; }
    static void UpdateMarkers(const uInterface& __this) { __this.VTable<IMapView>()->fp_UpdateMarkers(__this); }
    static double Zoom(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Zoom(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Controls
