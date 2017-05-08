// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.ImageTools.Image.h>
#include <Fuse.ImageTools.iOSImageUtils.h>
#include <iOS/ImageHelper.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <Uno.Int2.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace ImageTools{

// internal static extern class iOSImageUtils :10
// {
static void iOSImageUtils_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Int_typeof()->Array();
}

uClassType* iOSImageUtils_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.ImageTools.iOSImageUtils", options);
    type->fp_build_ = iOSImageUtils_build;
    return type;
}

// public static void Crop(string path, int x, int y, int width, int height, Uno.Action<string> onSuccess, Uno.Action<string> onFail, bool inPlace) :36
void iOSImageUtils__Crop_fn(uString* path, int* x, int* y, int* width, int* height, uDelegate* onSuccess, uDelegate* onFail, bool* inPlace)
{
    iOSImageUtils::Crop(path, *x, *y, *width, *height, onSuccess, onFail, *inPlace);
}

// public static void GetBase64FromImage(string path, Uno.Action<string> onSuccess, Uno.Action<string> onFail) :53
void iOSImageUtils__GetBase64FromImage_fn(uString* path, uDelegate* onSuccess, uDelegate* onFail)
{
    iOSImageUtils::GetBase64FromImage(path, onSuccess, onFail);
}

// public static void GetImageFromBase64(string b64, Uno.Action<string> onSuccess, Uno.Action<string> onFail) :45
void iOSImageUtils__GetImageFromBase64_fn(uString* b64, uDelegate* onSuccess, uDelegate* onFail)
{
    iOSImageUtils::GetImageFromBase64(b64, onSuccess, onFail);
}

// public static void GetImageFromBuffer(byte[] byteArray, Uno.Action<string> onSuccess, Uno.Action<string> onFail) :61
void iOSImageUtils__GetImageFromBuffer_fn(uArray* byteArray, uDelegate* onSuccess, uDelegate* onFail)
{
    iOSImageUtils::GetImageFromBuffer(byteArray, onSuccess, onFail);
}

// public static string GetImageFromBufferSync(byte[] byteArray) :71
void iOSImageUtils__GetImageFromBufferSync_fn(uArray* byteArray, uString** __retval)
{
    *__retval = iOSImageUtils::GetImageFromBufferSync(byteArray);
}

// public static int2 GetSize(Fuse.ImageTools.Image p) :12
void iOSImageUtils__GetSize_fn(::g::Fuse::ImageTools::Image* p, ::g::Uno::Int2* __retval)
{
    *__retval = iOSImageUtils::GetSize(p);
}

// private static void GetSizeInternal(string path, int[] values) :20
void iOSImageUtils__GetSizeInternal_fn(uString* path, uArray* values)
{
    iOSImageUtils::GetSizeInternal(path, values);
}

// public static void Resize(string path, int width, int height, int mode, Uno.Action<string> onSuccess, Uno.Action<string> onFail, bool inPlace) :28
void iOSImageUtils__Resize_fn(uString* path, int* width, int* height, int* mode, uDelegate* onSuccess, uDelegate* onFail, bool* inPlace)
{
    iOSImageUtils::Resize(path, *width, *height, *mode, onSuccess, onFail, *inPlace);
}

// public static void Crop(string path, int x, int y, int width, int height, Uno.Action<string> onSuccess, Uno.Action<string> onFail, bool inPlace) [static] :36
void iOSImageUtils::Crop(uString* path, int x, int y, int width, int height, uDelegate* onSuccess, uDelegate* onFail, bool inPlace)
{
    @autoreleasepool
    {
        [] (::NSString* path, int x, int y, int width, int height, ::uObjC::Function<void, ::NSString*> onSuccess, ::uObjC::Function<void, ::NSString*> onFail, bool inPlace) -> void
        {
            CGRect rect = CGRectMake((float)x, (float)y, (float)width, (float)height);
            dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            	[ImageHelper cropImage:path desiredRect:rect onComplete:onSuccess onFail:onFail performInPlace:inPlace];
            });
        } (::uObjC::NativeString(path), x, y, width, height, [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onSuccess]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onFail]), inPlace);
        
    }
    
}

// public static void GetBase64FromImage(string path, Uno.Action<string> onSuccess, Uno.Action<string> onFail) [static] :53
void iOSImageUtils::GetBase64FromImage(uString* path, uDelegate* onSuccess, uDelegate* onFail)
{
    @autoreleasepool
    {
        [] (::NSString* path, ::uObjC::Function<void, ::NSString*> onSuccess, ::uObjC::Function<void, ::NSString*> onFail) -> void
        {
            dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            	[ImageHelper base64FromImageAtPath:path onComplete:onSuccess onFail:onFail];
            });
        } (::uObjC::NativeString(path), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onSuccess]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onFail]));
        
    }
    
}

// public static void GetImageFromBase64(string b64, Uno.Action<string> onSuccess, Uno.Action<string> onFail) [static] :45
void iOSImageUtils::GetImageFromBase64(uString* b64, uDelegate* onSuccess, uDelegate* onFail)
{
    @autoreleasepool
    {
        [] (::NSString* b64, ::uObjC::Function<void, ::NSString*> onSuccess, ::uObjC::Function<void, ::NSString*> onFail) -> void
        {
            dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            	[ImageHelper imageFromBase64String:b64 onComplete:onSuccess onFail:onFail];
            });
        } (::uObjC::NativeString(b64), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onSuccess]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onFail]));
        
    }
    
}

// public static void GetImageFromBuffer(byte[] byteArray, Uno.Action<string> onSuccess, Uno.Action<string> onFail) [static] :61
void iOSImageUtils::GetImageFromBuffer(uArray* byteArray, uDelegate* onSuccess, uDelegate* onFail)
{
    @autoreleasepool
    {
        [] (id<UnoArray> byteArray, ::uObjC::Function<void, ::NSString*> onSuccess, ::uObjC::Function<void, ::NSString*> onFail) -> void
        {
            uArray* arr = [byteArray unoArray];
            NSData* data = [NSData dataWithBytes:arr->Ptr() length:[byteArray count]];
            dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            	[ImageHelper imageFromData:data onComplete:onSuccess onFail:onFail];
            });
        } ([::StrongUnoArray strongUnoArrayWithUnoArray: byteArray getAt: ^ id (::uArray* arr, int i) { return ::uObjC::Box<uint8_t>(arr->Item<uint8_t>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Item<uint8_t>(i) = ::uObjC::Unbox<uint8_t>(obj); }], [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onSuccess]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onFail]));
        
    }
    
}

// public static string GetImageFromBufferSync(byte[] byteArray) [static] :71
uString* iOSImageUtils::GetImageFromBufferSync(uArray* byteArray)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (id<UnoArray> byteArray) -> ::NSString*
        {
            uArray* arr = [byteArray unoArray];
            NSData* data = [NSData dataWithBytes:arr->Ptr() length:[byteArray count]];
            return [ImageHelper imageFromDataSync:data];
        } ([::StrongUnoArray strongUnoArrayWithUnoArray: byteArray getAt: ^ id (::uArray* arr, int i) { return ::uObjC::Box<uint8_t>(arr->Item<uint8_t>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Item<uint8_t>(i) = ::uObjC::Unbox<uint8_t>(obj); }]));
        
    }
    
}

// public static int2 GetSize(Fuse.ImageTools.Image p) [static] :12
::g::Uno::Int2 iOSImageUtils::GetSize(::g::Fuse::ImageTools::Image* p)
{
    uStackFrame __("Fuse.ImageTools.iOSImageUtils", "GetSize(Fuse.ImageTools.Image)");
    uArray* size = uArray::Init<int>(::TYPES[0/*int[]*/], 2, 0, 0);
    iOSImageUtils::GetSizeInternal(uPtr(p)->Path(), size);
    return ::g::Uno::Int2__New2(size->Item<int>(0), size->Item<int>(1));
}

// private static void GetSizeInternal(string path, int[] values) [static] :20
void iOSImageUtils::GetSizeInternal(uString* path, uArray* values)
{
    @autoreleasepool
    {
        [] (::NSString* path, id<UnoArray> values) -> void
        {
            NSArray* dims = [ImageHelper getImageSize:path];
            values[0] = dims[0];
            values[1] = dims[1];
        } (::uObjC::NativeString(path), [::StrongUnoArray strongUnoArrayWithUnoArray: values getAt: ^ id (::uArray* arr, int i) { return ::uObjC::Box<int>(arr->Item<int>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Item<int>(i) = ::uObjC::Unbox<int>(obj); }]);
        
    }
    
}

// public static void Resize(string path, int width, int height, int mode, Uno.Action<string> onSuccess, Uno.Action<string> onFail, bool inPlace) [static] :28
void iOSImageUtils::Resize(uString* path, int width, int height, int mode, uDelegate* onSuccess, uDelegate* onFail, bool inPlace)
{
    @autoreleasepool
    {
        [] (::NSString* path, int width, int height, int mode, ::uObjC::Function<void, ::NSString*> onSuccess, ::uObjC::Function<void, ::NSString*> onFail, bool inPlace) -> void
        {
            dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            	[ImageHelper resizeImage:path width:width height:height mode:mode onComplete:onSuccess onFail:onFail performInPlace:inPlace];
            });
        } (::uObjC::NativeString(path), width, height, mode, [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onSuccess]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onFail]), inPlace);
        
    }
    
}
// }

}}} // ::g::Fuse::ImageTools
