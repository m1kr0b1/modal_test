// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Maps/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Maps{namespace iOS{struct FuseMapView;}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Maps{
namespace iOS{

// internal sealed extern class FuseMapView :17
// {
uType* FuseMapView_typeof();
void FuseMapView__ctor__fn(FuseMapView* __this);
void FuseMapView__CreateContainer_fn(FuseMapView* __this, ::g::ObjC::Object** __retval);
void FuseMapView__CreateMap_fn(FuseMapView* __this, ::g::ObjC::Object* container, ::g::ObjC::Object** __retval);
void FuseMapView__GetBoolValue_fn(FuseMapView* __this, uString* key, bool* __retval);
void FuseMapView__GetHeading_fn(FuseMapView* __this, double* __retval);
void FuseMapView__GetLatitude_fn(FuseMapView* __this, double* __retval);
void FuseMapView__GetLongitude_fn(FuseMapView* __this, double* __retval);
void FuseMapView__GetPitch_fn(FuseMapView* __this, double* __retval);
void FuseMapView__GetStringValue_fn(FuseMapView* __this, uString* key, uString** __retval);
void FuseMapView__New1_fn(FuseMapView** __retval);
void FuseMapView__SetBoolValue_fn(FuseMapView* __this, uString* key, bool* val);
void FuseMapView__SetIntValue_fn(FuseMapView* __this, uString* key, int* val);

struct FuseMapView : uObject
{
    uStrong< ::g::ObjC::Object*> Container;
    uStrong< ::g::ObjC::Object*> Handle;

    void ctor_();
    ::g::ObjC::Object* CreateContainer();
    ::g::ObjC::Object* CreateMap(::g::ObjC::Object* container);
    bool GetBoolValue(uString* key);
    double GetHeading();
    double GetLatitude();
    double GetLongitude();
    double GetPitch();
    uString* GetStringValue(uString* key);
    void SetBoolValue(uString* key, bool val);
    void SetIntValue(uString* key, int val);
    static FuseMapView* New1();
};
// }

}}}} // ::g::Fuse::Maps::iOS
