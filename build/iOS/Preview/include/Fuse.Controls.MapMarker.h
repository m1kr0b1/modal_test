// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Maps/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct MapMarker;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class MapMarker :45
// {
::g::Fuse::Node_type* MapMarker_typeof();
void MapMarker__ctor_2_fn(MapMarker* __this);
void MapMarker__get_IconAnchorX_fn(MapMarker* __this, float* __retval);
void MapMarker__set_IconAnchorX_fn(MapMarker* __this, float* value);
void MapMarker__get_IconAnchorY_fn(MapMarker* __this, float* __retval);
void MapMarker__set_IconAnchorY_fn(MapMarker* __this, float* value);
void MapMarker__get_IconFile_fn(MapMarker* __this, ::g::Uno::UX::FileSource** __retval);
void MapMarker__set_IconFile_fn(MapMarker* __this, ::g::Uno::UX::FileSource* value);
void MapMarker__get_Label_fn(MapMarker* __this, uString** __retval);
void MapMarker__set_Label_fn(MapMarker* __this, uString* value);
void MapMarker__get_Latitude_fn(MapMarker* __this, double* __retval);
void MapMarker__set_Latitude_fn(MapMarker* __this, double* value);
void MapMarker__get_Longitude_fn(MapMarker* __this, double* __retval);
void MapMarker__set_Longitude_fn(MapMarker* __this, double* value);
void MapMarker__MarkDirty_fn(MapMarker* __this);
void MapMarker__New2_fn(MapMarker** __retval);
void MapMarker__OnRooted_fn(MapMarker* __this);
void MapMarker__OnUnrooted_fn(MapMarker* __this);

struct MapMarker : ::g::Fuse::Node
{
    uStrong< ::g::Uno::UX::FileSource*> _icon;
    ::g::Uno::Float2 _iconAnchor;
    uStrong<uString*> _label;
    double _latitude;
    double _longitude;

    void ctor_2();
    float IconAnchorX();
    void IconAnchorX(float value);
    float IconAnchorY();
    void IconAnchorY(float value);
    ::g::Uno::UX::FileSource* IconFile();
    void IconFile(::g::Uno::UX::FileSource* value);
    uString* Label();
    void Label(uString* value);
    double Latitude();
    void Latitude(double value);
    double Longitude();
    void Longitude(double value);
    void MarkDirty();
    static MapMarker* New2();
};
// }

}}} // ::g::Fuse::Controls
