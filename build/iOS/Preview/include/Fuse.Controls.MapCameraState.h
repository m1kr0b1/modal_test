// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Maps/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct MapCameraState;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class MapCameraState :174
// {
uType* MapCameraState_typeof();
void MapCameraState__ctor__fn(MapCameraState* __this);
void MapCameraState__get_Bearing_fn(MapCameraState* __this, double* __retval);
void MapCameraState__set_Bearing_fn(MapCameraState* __this, double* value);
void MapCameraState__CopyFrom_fn(MapCameraState* __this, uObject* mv);
void MapCameraState__get_Latitude_fn(MapCameraState* __this, double* __retval);
void MapCameraState__set_Latitude_fn(MapCameraState* __this, double* value);
void MapCameraState__get_Longitude_fn(MapCameraState* __this, double* __retval);
void MapCameraState__set_Longitude_fn(MapCameraState* __this, double* value);
void MapCameraState__New1_fn(MapCameraState** __retval);
void MapCameraState__get_Tilt_fn(MapCameraState* __this, double* __retval);
void MapCameraState__set_Tilt_fn(MapCameraState* __this, double* value);
void MapCameraState__ToString_fn(MapCameraState* __this, uString** __retval);
void MapCameraState__get_Zoom_fn(MapCameraState* __this, double* __retval);
void MapCameraState__set_Zoom_fn(MapCameraState* __this, double* value);

struct MapCameraState : uObject
{
    double _Bearing;
    double _Latitude;
    double _Longitude;
    double _Tilt;
    double _Zoom;

    void ctor_();
    double Bearing();
    void Bearing(double value);
    void CopyFrom(uObject* mv);
    double Latitude();
    void Latitude(double value);
    double Longitude();
    void Longitude(double value);
    double Tilt();
    void Tilt(double value);
    double Zoom();
    void Zoom(double value);
    static MapCameraState* New1();
};
// }

}}} // ::g::Fuse::Controls
