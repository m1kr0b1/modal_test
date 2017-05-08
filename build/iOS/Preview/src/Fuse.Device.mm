// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.iOS/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Device.h>
#include <UIKit/UIKit.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{

// internal static extern class Device :232
// {
static void Device_build(uType* type)
{
}

uClassType* Device_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Device", options);
    type->fp_build_ = Device_build;
    return type;
}

// private static int GetCurrentOrientation() :245
void Device__GetCurrentOrientation_fn(int* __retval)
{
    *__retval = Device::GetCurrentOrientation();
}

// private static int GetStatusBarOrientation() :251
void Device__GetStatusBarOrientation_fn(int* __retval)
{
    *__retval = Device::GetStatusBarOrientation();
}

// public static int get_Orientation() :236
void Device__get_Orientation_fn(int* __retval)
{
    *__retval = Device::Orientation();
}

// public static int get_StatusBarOrientation() :241
void Device__get_StatusBarOrientation_fn(int* __retval)
{
    *__retval = Device::StatusBarOrientation();
}

// private static int GetCurrentOrientation() [static] :245
int Device::GetCurrentOrientation()
{
    @autoreleasepool
    {
        return (int)[[UIDevice currentDevice] orientation];
    }
    
}

// private static int GetStatusBarOrientation() [static] :251
int Device::GetStatusBarOrientation()
{
    @autoreleasepool
    {
        return (int)[[UIApplication sharedApplication] statusBarOrientation];
    }
    
}

// public static int get_Orientation() [static] :236
int Device::Orientation()
{
    return Device::GetCurrentOrientation();
}

// public static int get_StatusBarOrientation() [static] :241
int Device::StatusBarOrientation()
{
    return Device::GetStatusBarOrientation();
}
// }

}} // ::g::Fuse
