// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Fuse{namespace ImageTools{struct iOSImageUtils;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace ImageTools{

// internal static extern class iOSImageUtils :10
// {
uClassType* iOSImageUtils_typeof();
void iOSImageUtils__Crop_fn(uString* path, int* x, int* y, int* width, int* height, uDelegate* onSuccess, uDelegate* onFail, bool* inPlace);
void iOSImageUtils__GetBase64FromImage_fn(uString* path, uDelegate* onSuccess, uDelegate* onFail);
void iOSImageUtils__GetImageFromBase64_fn(uString* b64, uDelegate* onSuccess, uDelegate* onFail);
void iOSImageUtils__GetImageFromBuffer_fn(uArray* byteArray, uDelegate* onSuccess, uDelegate* onFail);
void iOSImageUtils__GetImageFromBufferSync_fn(uArray* byteArray, uString** __retval);
void iOSImageUtils__GetSize_fn(::g::Fuse::ImageTools::Image* p, ::g::Uno::Int2* __retval);
void iOSImageUtils__GetSizeInternal_fn(uString* path, uArray* values);
void iOSImageUtils__Resize_fn(uString* path, int* width, int* height, int* mode, uDelegate* onSuccess, uDelegate* onFail, bool* inPlace);

struct iOSImageUtils : uObject
{
    static void Crop(uString* path, int x, int y, int width, int height, uDelegate* onSuccess, uDelegate* onFail, bool inPlace);
    static void GetBase64FromImage(uString* path, uDelegate* onSuccess, uDelegate* onFail);
    static void GetImageFromBase64(uString* b64, uDelegate* onSuccess, uDelegate* onFail);
    static void GetImageFromBuffer(uArray* byteArray, uDelegate* onSuccess, uDelegate* onFail);
    static uString* GetImageFromBufferSync(uArray* byteArray);
    static ::g::Uno::Int2 GetSize(::g::Fuse::ImageTools::Image* p);
    static void GetSizeInternal(uString* path, uArray* values);
    static void Resize(uString* path, int width, int height, int mode, uDelegate* onSuccess, uDelegate* onFail, bool inPlace);
};
// }

}}} // ::g::Fuse::ImageTools
