// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Maps/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Maps.iOS.FuseMapView.h>
#include <Fuse.Maps.iOS.MapViewContainer.h>
#include <iOS/MapViewController.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <uObjC.Foreign.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Maps{
namespace iOS{

// internal sealed extern class MapViewContainer :101
// {
static void MapViewContainer_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Maps::iOS::MapViewContainer, Handle), 0,
        ::g::Fuse::Maps::iOS::FuseMapView_typeof(), offsetof(::g::Fuse::Maps::iOS::MapViewContainer, Map), 0,
        ::TYPES[0/*Uno.Action*/], offsetof(::g::Fuse::Maps::iOS::MapViewContainer, OnReady), 0,
        ::TYPES[0/*Uno.Action*/], offsetof(::g::Fuse::Maps::iOS::MapViewContainer, OnResize), 0);
}

uType* MapViewContainer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MapViewContainer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Maps.iOS.MapViewContainer", options);
    type->fp_build_ = MapViewContainer_build;
    return type;
}

// public MapViewContainer(Fuse.Maps.iOS.FuseMapView map) :108
void MapViewContainer__ctor__fn(MapViewContainer* __this, ::g::Fuse::Maps::iOS::FuseMapView* map)
{
    __this->ctor_(map);
}

// private ObjC.Object Create(ObjC.Object view, Uno.Action onReady, Uno.Action onResize) :115
void MapViewContainer__Create_fn(MapViewContainer* __this, ::g::ObjC::Object* view, uDelegate* onReady, uDelegate* onResize, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Create(view, onReady, onResize);
}

// public ObjC.Object GetView() :133
void MapViewContainer__GetView_fn(MapViewContainer* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->GetView();
}

// public MapViewContainer New(Fuse.Maps.iOS.FuseMapView map) :108
void MapViewContainer__New1_fn(::g::Fuse::Maps::iOS::FuseMapView* map, MapViewContainer** __retval)
{
    *__retval = MapViewContainer::New1(map);
}

// private void viewDidAppear() :120
void MapViewContainer__viewDidAppear_fn(MapViewContainer* __this)
{
    __this->viewDidAppear();
}

// private void viewDidResize() :126
void MapViewContainer__viewDidResize_fn(MapViewContainer* __this)
{
    __this->viewDidResize();
}

// public MapViewContainer(Fuse.Maps.iOS.FuseMapView map) [instance] :108
void MapViewContainer::ctor_(::g::Fuse::Maps::iOS::FuseMapView* map)
{
    uStackFrame __("Fuse.Maps.iOS.MapViewContainer", ".ctor(Fuse.Maps.iOS.FuseMapView)");
    Map = map;
    Handle = Create(uPtr(Map)->Container, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)MapViewContainer__viewDidAppear_fn, this), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)MapViewContainer__viewDidResize_fn, this));
}

// private ObjC.Object Create(ObjC.Object view, Uno.Action onReady, Uno.Action onResize) [instance] :115
::g::ObjC::Object* MapViewContainer::Create(::g::ObjC::Object* view, uDelegate* onReady, uDelegate* onResize)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id view, ::uObjC::Function<void> onReady, ::uObjC::Function<void> onResize) -> ::id
        {
            return [[MapViewController alloc] initWithView:view onAppeared:onReady onResize:onResize];
        } (::g::ObjC::Object::GetHandle(view), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onReady]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onResize])));
        
    }
    
}

// public ObjC.Object GetView() [instance] :133
::g::ObjC::Object* MapViewContainer::GetView()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (id<UnoObject> _this) -> ::id
        {
            UIViewController* vc = [&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<MapViewContainer*>((_this).unoObject, MapViewContainer_typeof())->Handle); }();
            return vc.view;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]));
        
    }
    
}

// private void viewDidAppear() [instance] :120
void MapViewContainer::viewDidAppear()
{
    uStackFrame __("Fuse.Maps.iOS.MapViewContainer", "viewDidAppear()");

    if (::g::Uno::Delegate::op_Inequality(OnReady, NULL))
        uPtr(OnReady)->InvokeVoid();
}

// private void viewDidResize() [instance] :126
void MapViewContainer::viewDidResize()
{
    uStackFrame __("Fuse.Maps.iOS.MapViewContainer", "viewDidResize()");

    if (::g::Uno::Delegate::op_Inequality(OnResize, NULL))
        uPtr(OnResize)->InvokeVoid();
}

// public MapViewContainer New(Fuse.Maps.iOS.FuseMapView map) [static] :108
MapViewContainer* MapViewContainer::New1(::g::Fuse::Maps::iOS::FuseMapView* map)
{
    MapViewContainer* obj1 = (MapViewContainer*)uNew(MapViewContainer_typeof());
    obj1->ctor_(map);
    return obj1;
}
// }

}}}} // ::g::Fuse::Maps::iOS
