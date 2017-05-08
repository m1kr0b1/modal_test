// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Fuse{namespace ImageTools{struct ImagePromiseCallback;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace ImageTools{

// internal sealed class ImagePromiseCallback :552
// {
uType* ImagePromiseCallback_typeof();
void ImagePromiseCallback__ctor__fn(ImagePromiseCallback* __this, ::g::Uno::Threading::Promise* p);
void ImagePromiseCallback__New1_fn(::g::Uno::Threading::Promise* p, ImagePromiseCallback** __retval);
void ImagePromiseCallback__Reject_fn(ImagePromiseCallback* __this, uString* reason);
void ImagePromiseCallback__Resolve_fn(ImagePromiseCallback* __this, uString* path);

struct ImagePromiseCallback : uObject
{
    uStrong< ::g::Uno::Threading::Promise*> _p;

    void ctor_(::g::Uno::Threading::Promise* p);
    void Reject(uString* reason);
    void Resolve(uString* path);
    static ImagePromiseCallback* New1(::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::ImageTools
