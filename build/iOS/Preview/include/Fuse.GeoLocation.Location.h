// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace GeoLocation{struct GeoCoordinates;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Uno{namespace Time{struct LocalDateTime;}}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// public sealed class Location :355
// {
uType* Location_typeof();
void Location__ctor__fn(Location* __this, ::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double* accuracy, double* altitude, double* speed, ::g::Uno::Time::LocalDateTime* dateTime);
void Location__get_Accuracy_fn(Location* __this, double* __retval);
void Location__get_Altitude_fn(Location* __this, double* __retval);
void Location__get_Coordinates_fn(Location* __this, ::g::Fuse::GeoLocation::GeoCoordinates** __retval);
void Location__get_DateTime_fn(Location* __this, ::g::Uno::Time::LocalDateTime** __retval);
void Location__New1_fn(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double* accuracy, double* altitude, double* speed, ::g::Uno::Time::LocalDateTime* dateTime, Location** __retval);
void Location__get_Speed_fn(Location* __this, double* __retval);
void Location__ToString_fn(Location* __this, uString** __retval);

struct Location : uObject
{
    double _accuracy;
    double _altitude;
    uStrong< ::g::Fuse::GeoLocation::GeoCoordinates*> _coordinates;
    uStrong< ::g::Uno::Time::LocalDateTime*> _dateTime;
    double _speed;

    void ctor_(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double accuracy, double altitude, double speed, ::g::Uno::Time::LocalDateTime* dateTime);
    double Accuracy();
    double Altitude();
    ::g::Fuse::GeoLocation::GeoCoordinates* Coordinates();
    ::g::Uno::Time::LocalDateTime* DateTime();
    double Speed();
    static Location* New1(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double accuracy, double altitude, double speed, ::g::Uno::Time::LocalDateTime* dateTime);
};
// }

}}} // ::g::Fuse::GeoLocation
