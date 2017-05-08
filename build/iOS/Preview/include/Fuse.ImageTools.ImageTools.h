// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Fuse{namespace ImageTools{struct ImageTools;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace ImageTools{

// public sealed class ImageTools :162
// {
::g::Fuse::Scripting::NativeModule_type* ImageTools_typeof();
void ImageTools__ctor_2_fn(ImageTools* __this);
void ImageTools__Base64FromImageInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void ImageTools__BufferFromImageInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void ImageTools__Crop_fn(::g::Fuse::ImageTools::Image* img, int* width, int* height, int* x, int* y, bool* inPlace, ::g::Uno::Threading::Future1** __retval);
void ImageTools__CropImageInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void ImageTools__ImageFromBase64_fn(uString* b64, ::g::Uno::Threading::Future1** __retval);
void ImageTools__ImageFromBase64Interface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void ImageTools__ImageFromBufferInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void ImageTools__ImageFromByteArray_fn(uArray* bytes, ::g::Fuse::ImageTools::Image** __retval);
void ImageTools__ImageToBase64_fn(::g::Fuse::ImageTools::Image* img, ::g::Uno::Threading::Future1** __retval);
void ImageTools__New2_fn(ImageTools** __retval);
void ImageTools__Resize_fn(::g::Fuse::ImageTools::Image* img, int* desiredWidth, int* desiredHeight, int* mode, bool* inPlace, ::g::Uno::Threading::Future1** __retval);
void ImageTools__ResizeImageInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);

struct ImageTools : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<ImageTools*> _instance_;
    static uSStrong<ImageTools*>& _instance() { return _instance_; }

    void ctor_2();
    ::g::Uno::Threading::Future1* Base64FromImageInterface(uArray* args);
    ::g::Uno::Threading::Future1* BufferFromImageInterface(uArray* args);
    ::g::Uno::Threading::Future1* CropImageInterface(uArray* args);
    ::g::Uno::Threading::Future1* ImageFromBase64Interface(uArray* args);
    ::g::Uno::Threading::Future1* ImageFromBufferInterface(uArray* args);
    ::g::Uno::Threading::Future1* ResizeImageInterface(uArray* args);
    static ::g::Uno::Threading::Future1* Crop(::g::Fuse::ImageTools::Image* img, int width, int height, int x, int y, bool inPlace);
    static ::g::Uno::Threading::Future1* ImageFromBase64(uString* b64);
    static ::g::Fuse::ImageTools::Image* ImageFromByteArray(uArray* bytes);
    static ::g::Uno::Threading::Future1* ImageToBase64(::g::Fuse::ImageTools::Image* img);
    static ImageTools* New2();
    static ::g::Uno::Threading::Future1* Resize(::g::Fuse::ImageTools::Image* img, int desiredWidth, int desiredHeight, int mode, bool inPlace);
};
// }

}}} // ::g::Fuse::ImageTools
