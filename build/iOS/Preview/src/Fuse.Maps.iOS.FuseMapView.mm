// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Maps/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Maps.iOS.FuseMapView.h>
#include <MapKit/MapKit.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Maps{
namespace iOS{

// internal sealed extern class FuseMapView :17
// {
static void FuseMapView_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Maps::iOS::FuseMapView, Container), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Maps::iOS::FuseMapView, Handle), 0);
}

uType* FuseMapView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseMapView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Maps.iOS.FuseMapView", options);
    type->fp_build_ = FuseMapView_build;
    type->fp_ctor_ = (void*)FuseMapView__New1_fn;
    return type;
}

// public FuseMapView() :21
void FuseMapView__ctor__fn(FuseMapView* __this)
{
    __this->ctor_();
}

// private ObjC.Object CreateContainer() :28
void FuseMapView__CreateContainer_fn(FuseMapView* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->CreateContainer();
}

// private ObjC.Object CreateMap(ObjC.Object container) :35
void FuseMapView__CreateMap_fn(FuseMapView* __this, ::g::ObjC::Object* container, ::g::ObjC::Object** __retval)
{
    *__retval = __this->CreateMap(container);
}

// public bool GetBoolValue(string key) :47
void FuseMapView__GetBoolValue_fn(FuseMapView* __this, uString* key, bool* __retval)
{
    *__retval = __this->GetBoolValue(key);
}

// public double GetHeading() :72
void FuseMapView__GetHeading_fn(FuseMapView* __this, double* __retval)
{
    *__retval = __this->GetHeading();
}

// public double GetLatitude() :86
void FuseMapView__GetLatitude_fn(FuseMapView* __this, double* __retval)
{
    *__retval = __this->GetLatitude();
}

// public double GetLongitude() :93
void FuseMapView__GetLongitude_fn(FuseMapView* __this, double* __retval)
{
    *__retval = __this->GetLongitude();
}

// public double GetPitch() :79
void FuseMapView__GetPitch_fn(FuseMapView* __this, double* __retval)
{
    *__retval = __this->GetPitch();
}

// public string GetStringValue(string key) :54
void FuseMapView__GetStringValue_fn(FuseMapView* __this, uString* key, uString** __retval)
{
    *__retval = __this->GetStringValue(key);
}

// public FuseMapView New() :21
void FuseMapView__New1_fn(FuseMapView** __retval)
{
    *__retval = FuseMapView::New1();
}

// public void SetBoolValue(string key, bool val) :60
void FuseMapView__SetBoolValue_fn(FuseMapView* __this, uString* key, bool* val)
{
    __this->SetBoolValue(key, *val);
}

// public void SetIntValue(string key, int val) :66
void FuseMapView__SetIntValue_fn(FuseMapView* __this, uString* key, int* val)
{
    __this->SetIntValue(key, *val);
}

// public FuseMapView() [instance] :21
void FuseMapView::ctor_()
{
    Container = CreateContainer();
    Handle = CreateMap(Container);
}

// private ObjC.Object CreateContainer() [instance] :28
::g::ObjC::Object* FuseMapView::CreateContainer()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIView* view = [[UIView alloc] init];
            return view;
        } ());
        
    }
    
}

// private ObjC.Object CreateMap(ObjC.Object container) [instance] :35
::g::ObjC::Object* FuseMapView::CreateMap(::g::ObjC::Object* container)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id container) -> ::id
        {
            MKMapView* mv = [[MKMapView alloc] init];
            UIView* mvc = container;
            mv.frame = mvc.bounds;
            mv.translatesAutoresizingMaskIntoConstraints = YES;
            mv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
            [mvc addSubview:mv];
            return mv;
        } (::g::ObjC::Object::GetHandle(container)));
        
    }
    
}

// public bool GetBoolValue(string key) [instance] :47
bool FuseMapView::GetBoolValue(uString* key)
{
    @autoreleasepool
    {
        return [] (id<UnoObject> _this, ::NSString* key) -> bool
        {
            id result = [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<FuseMapView*>((_this).unoObject, FuseMapView_typeof())->Handle); }() valueForKey:key];
            return [result boolValue];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(key));
        
    }
    
}

// public double GetHeading() [instance] :72
double FuseMapView::GetHeading()
{
    @autoreleasepool
    {
        return [] (id<UnoObject> _this) -> double
        {
            MKMapView* mv = [&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<FuseMapView*>((_this).unoObject, FuseMapView_typeof())->Handle); }();
            return mv.camera.heading;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public double GetLatitude() [instance] :86
double FuseMapView::GetLatitude()
{
    @autoreleasepool
    {
        return [] (id<UnoObject> _this) -> double
        {
            MKMapView* mv = [&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<FuseMapView*>((_this).unoObject, FuseMapView_typeof())->Handle); }();
            return mv.centerCoordinate.latitude;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public double GetLongitude() [instance] :93
double FuseMapView::GetLongitude()
{
    @autoreleasepool
    {
        return [] (id<UnoObject> _this) -> double
        {
            MKMapView* mv = [&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<FuseMapView*>((_this).unoObject, FuseMapView_typeof())->Handle); }();
            return mv.centerCoordinate.longitude;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public double GetPitch() [instance] :79
double FuseMapView::GetPitch()
{
    @autoreleasepool
    {
        return [] (id<UnoObject> _this) -> double
        {
            MKMapView* mv = [&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<FuseMapView*>((_this).unoObject, FuseMapView_typeof())->Handle); }();
            return mv.camera.pitch;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public string GetStringValue(string key) [instance] :54
uString* FuseMapView::GetStringValue(uString* key)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (id<UnoObject> _this, ::NSString* key) -> ::NSString*
        {
            return [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<FuseMapView*>((_this).unoObject, FuseMapView_typeof())->Handle); }() valueForKey:key];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(key)));
        
    }
    
}

// public void SetBoolValue(string key, bool val) [instance] :60
void FuseMapView::SetBoolValue(uString* key, bool val)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::NSString* key, bool val) -> void
        {
            [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<FuseMapView*>((_this).unoObject, FuseMapView_typeof())->Handle); }() setValue:[NSNumber numberWithBool:val] forKey:key];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(key), val);
        
    }
    
}

// public void SetIntValue(string key, int val) [instance] :66
void FuseMapView::SetIntValue(uString* key, int val)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::NSString* key, int val) -> void
        {
            [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<FuseMapView*>((_this).unoObject, FuseMapView_typeof())->Handle); }() setValue:[NSNumber numberWithInt:val] forKey:key];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(key), val);
        
    }
    
}

// public FuseMapView New() [static] :21
FuseMapView* FuseMapView::New1()
{
    FuseMapView* obj1 = (FuseMapView*)uNew(FuseMapView_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}} // ::g::Fuse::Maps::iOS
