// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace GeoLocation{

// private abstract interface LocationTracker.BufferedCall :401
// {
uInterfaceType* LocationTracker__BufferedCall_typeof();

struct LocationTracker__BufferedCall
{
    void(*fp_Apply)(uObject*, uObject*);
    static void Apply(const uInterface& __this, uObject* tracker) { __this.VTable<LocationTracker__BufferedCall>()->fp_Apply(__this, tracker); }
};
// }

}}} // ::g::Fuse::GeoLocation
