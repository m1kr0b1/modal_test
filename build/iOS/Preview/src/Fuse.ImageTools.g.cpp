// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.ImageTools.BoolP-6b212329.h>
#include <Fuse.ImageTools.Image.h>
#include <Fuse.ImageTools.Image-3344558a.h>
#include <Fuse.ImageTools.ImageTools.h>
#include <Fuse.ImageTools.iOSImageUtils.h>
#include <Fuse.ImageTools.Promi-47f46f5b.h>
#include <Fuse.ImageTools.ResizeMode.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.JSObjectUtils.h>
#include <Fuse.Scripting.Native-c8feecef.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Result-92713bce.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dicti-87d2e37d.h>
#include <Uno.Collections.Dicti-894ef3c3.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[31];
static uType* TYPES[22];

namespace g{
namespace Fuse{
namespace ImageTools{

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/0.47.7/$.uno
// ----------------------------------------------------------------------------------------

// internal sealed class BoolPromiseCallback :571
// {
static void BoolPromiseCallback_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::Fuse::ImageTools::BoolPromiseCallback, _p), 0);
}

uType* BoolPromiseCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(BoolPromiseCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.ImageTools.BoolPromiseCallback", options);
    type->fp_build_ = BoolPromiseCallback_build;
    return type;
}

// public BoolPromiseCallback(Uno.Threading.Promise<bool> p) :574
void BoolPromiseCallback__ctor__fn(BoolPromiseCallback* __this, ::g::Uno::Threading::Promise* p)
{
    __this->ctor_(p);
}

// public BoolPromiseCallback New(Uno.Threading.Promise<bool> p) :574
void BoolPromiseCallback__New1_fn(::g::Uno::Threading::Promise* p, BoolPromiseCallback** __retval)
{
    *__retval = BoolPromiseCallback::New1(p);
}

// public void Reject(string reason) :584
void BoolPromiseCallback__Reject_fn(BoolPromiseCallback* __this, uString* reason)
{
    __this->Reject(reason);
}

// public void Resolve() :579
void BoolPromiseCallback__Resolve_fn(BoolPromiseCallback* __this)
{
    __this->Resolve();
}

// public BoolPromiseCallback(Uno.Threading.Promise<bool> p) [instance] :574
void BoolPromiseCallback::ctor_(::g::Uno::Threading::Promise* p)
{
    _p = p;
}

// public void Reject(string reason) [instance] :584
void BoolPromiseCallback::Reject(uString* reason)
{
    uStackFrame __("Fuse.ImageTools.BoolPromiseCallback", "Reject(string)");
    uPtr(_p)->Reject(::g::Uno::Exception::New2(reason));
}

// public void Resolve() [instance] :579
void BoolPromiseCallback::Resolve()
{
    uStackFrame __("Fuse.ImageTools.BoolPromiseCallback", "Resolve()");
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_p), uCRef(true));
}

// public BoolPromiseCallback New(Uno.Threading.Promise<bool> p) [static] :574
BoolPromiseCallback* BoolPromiseCallback::New1(::g::Uno::Threading::Promise* p)
{
    BoolPromiseCallback* obj1 = (BoolPromiseCallback*)uNew(BoolPromiseCallback_typeof());
    obj1->ctor_(p);
    return obj1;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/0.47.7/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class Image :10
// {
static void Image_build(uType* type)
{
    ::STRINGS[0] = uString::Const("No path");
    ::STRINGS[1] = uString::Const("path");
    ::STRINGS[2] = uString::Const("name");
    ::STRINGS[3] = uString::Const("width");
    ::STRINGS[4] = uString::Const("height");
    ::STRINGS[5] = uString::Const("info");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[3] = ::g::Uno::Collections::Dictionary__KeyCollection__Enumerator_typeof()->MakeType(::TYPES[1/*string*/], uObject_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::ImageTools::Image, _dims), 0,
        ::TYPES[0/*Uno.Collections.Dictionary<string, object>*/], offsetof(::g::Fuse::ImageTools::Image, _Info), 0,
        ::TYPES[1/*string*/], offsetof(::g::Fuse::ImageTools::Image, _Name), 0,
        ::TYPES[1/*string*/], offsetof(::g::Fuse::ImageTools::Image, _Path), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("Converter", NULL, (void*)Image__Converter_fn, 0, true, ::TYPES[2/*Fuse.Scripting.Object*/], 2, ::g::Fuse::Scripting::Context_typeof(), type),
        new uFunction("FromObject", NULL, (void*)Image__FromObject_fn, 0, true, type, 1, ::TYPES[2/*Fuse.Scripting.Object*/]),
        new uFunction("FromObject", NULL, (void*)Image__FromObject1_fn, 0, true, type, 1, uObject_typeof()),
        new uFunction("get_Height", NULL, (void*)Image__get_Height_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Info", NULL, (void*)Image__get_Info_fn, 0, false, ::TYPES[0/*Uno.Collections.Dictionary<string, object>*/], 0),
        new uFunction("get_Name", NULL, (void*)Image__get_Name_fn, 0, false, ::TYPES[1/*string*/], 0),
        new uFunction(".ctor", NULL, (void*)Image__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)Image__New2_fn, 0, true, type, 1, ::TYPES[1/*string*/]),
        new uFunction("get_Path", NULL, (void*)Image__get_Path_fn, 0, false, ::TYPES[1/*string*/], 0),
        new uFunction("Rename", NULL, (void*)Image__Rename_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::TYPES[1/*string*/], ::g::Uno::Bool_typeof()),
        new uFunction("ToObject", NULL, (void*)Image__ToObject_fn, 0, false, ::TYPES[2/*Fuse.Scripting.Object*/], 1, ::g::Fuse::Scripting::Context_typeof()),
        new uFunction("get_Width", NULL, (void*)Image__get_Width_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

uType* Image_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Image);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.ImageTools.Image", options);
    type->fp_build_ = Image_build;
    type->fp_ctor_ = (void*)Image__New1_fn;
    return type;
}

// public Image() :57
void Image__ctor__fn(Image* __this)
{
    __this->ctor_();
}

// public Image(string path) :59
void Image__ctor_1_fn(Image* __this, uString* path)
{
    __this->ctor_1(path);
}

// private extern void CheckDims() :36
void Image__CheckDims_fn(Image* __this)
{
    __this->CheckDims();
}

// public static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.ImageTools.Image result) :104
void Image__Converter_fn(::g::Fuse::Scripting::Context* context, Image* result, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = Image::Converter(context, result);
}

// public static Fuse.ImageTools.Image FromObject(Fuse.Scripting.Object o) :71
void Image__FromObject_fn(::g::Fuse::Scripting::Object* o, Image** __retval)
{
    *__retval = Image::FromObject(o);
}

// public static Fuse.ImageTools.Image FromObject(object o) :66
void Image__FromObject1_fn(uObject* o, Image** __retval)
{
    *__retval = Image::FromObject1(o);
}

// public int get_Height() :24
void Image__get_Height_fn(Image* __this, int* __retval)
{
    *__retval = __this->Height();
}

// public generated Uno.Collections.Dictionary<string, object> get_Info() :55
void Image__get_Info_fn(Image* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->Info();
}

// private generated void set_Info(Uno.Collections.Dictionary<string, object> value) :55
void Image__set_Info_fn(Image* __this, ::g::Uno::Collections::Dictionary* value)
{
    __this->Info(value);
}

// private Fuse.Scripting.Object InfoToObject(Fuse.Scripting.Context c) :78
void Image__InfoToObject_fn(Image* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->InfoToObject(c);
}

// public generated string get_Name() :13
void Image__get_Name_fn(Image* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :13
void Image__set_Name_fn(Image* __this, uString* value)
{
    __this->Name(value);
}

// public Image New() :57
void Image__New1_fn(Image** __retval)
{
    *__retval = Image::New1();
}

// public Image New(string path) :59
void Image__New2_fn(uString* path, Image** __retval)
{
    *__retval = Image::New2(path);
}

// public generated string get_Path() :12
void Image__get_Path_fn(Image* __this, uString** __retval)
{
    *__retval = __this->Path();
}

// private generated void set_Path(string value) :12
void Image__set_Path_fn(Image* __this, uString* value)
{
    __this->Path(value);
}

// public bool Rename(string newName, [bool overwrite]) :42
void Image__Rename_fn(Image* __this, uString* newName, bool* overwrite, bool* __retval)
{
    *__retval = __this->Rename(newName, *overwrite);
}

// public Fuse.Scripting.Object ToObject(Fuse.Scripting.Context c) :88
void Image__ToObject_fn(Image* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->ToObject(c);
}

// public int get_Width() :17
void Image__get_Width_fn(Image* __this, int* __retval)
{
    *__retval = __this->Width();
}

// public Image() [instance] :57
void Image::ctor_()
{
    ctor_1(::STRINGS[0/*"No path"*/]);
}

// public Image(string path) [instance] :59
void Image::ctor_1(uString* path)
{
    uStackFrame __("Fuse.ImageTools.Image", ".ctor(string)");
    Path(path);
    Name(::g::Uno::IO::Path::GetFileName(Path()));
    Info((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, object>*/]));
}

// private extern void CheckDims() [instance] :36
void Image::CheckDims()
{
    uStackFrame __("Fuse.ImageTools.Image", "CheckDims()");

    if ((_dims.X == 0) && (_dims.Y == 0))
        _dims = ::g::Fuse::ImageTools::iOSImageUtils::GetSize(this);
}

// public int get_Height() [instance] :24
int Image::Height()
{
    uStackFrame __("Fuse.ImageTools.Image", "get_Height()");
    CheckDims();
    return _dims.Y;
}

// public generated Uno.Collections.Dictionary<string, object> get_Info() [instance] :55
::g::Uno::Collections::Dictionary* Image::Info()
{
    return _Info;
}

// private generated void set_Info(Uno.Collections.Dictionary<string, object> value) [instance] :55
void Image::Info(::g::Uno::Collections::Dictionary* value)
{
    _Info = value;
}

// private Fuse.Scripting.Object InfoToObject(Fuse.Scripting.Context c) [instance] :78
::g::Fuse::Scripting::Object* Image::InfoToObject(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.ImageTools.Image", "InfoToObject(Fuse.Scripting.Context)");
    ::g::Uno::Collections::Dictionary__KeyCollection__Enumerator<uStrong<uString*> > ret4;
    uObject* ret5;
    ::g::Fuse::Scripting::Object* outValue = uPtr(c)->NewObject();

    for (::g::Uno::Collections::Dictionary__KeyCollection__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::Dictionary__KeyCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__KeyCollection*)uPtr(Info())->Keys()), &ret4), ret4); enum1.MoveNext(::TYPES[3/*Uno.Collections.Dictionary<string, object>.KeyCollection.Enumerator*/]); )
    {
        uString* key = enum1.Current(::TYPES[3/*Uno.Collections.Dictionary<string, object>.KeyCollection.Enumerator*/]);
        uPtr(outValue)->Item(key, (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Info()), key, &ret5), ret5));
    }

    return outValue;
}

// public generated string get_Name() [instance] :13
uString* Image::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :13
void Image::Name(uString* value)
{
    _Name = value;
}

// public generated string get_Path() [instance] :12
uString* Image::Path()
{
    return _Path;
}

// private generated void set_Path(string value) [instance] :12
void Image::Path(uString* value)
{
    _Path = value;
}

// public bool Rename(string newName, [bool overwrite]) [instance] :42
bool Image::Rename(uString* newName, bool overwrite)
{
    uStackFrame __("Fuse.ImageTools.Image", "Rename(string,[bool])");

    if (::g::Uno::String::op_Equality(newName, Name()))
        return true;

    uString* newPath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Path::GetDirectoryName(Path()), newName);

    if (!overwrite && ::g::Uno::IO::File::Exists(newPath))
        return false;

    ::g::Uno::IO::File::Move(Path(), newPath);
    Path(newPath);
    Name(newName);
    return true;
}

// public Fuse.Scripting.Object ToObject(Fuse.Scripting.Context c) [instance] :88
::g::Fuse::Scripting::Object* Image::ToObject(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.ImageTools.Image", "ToObject(Fuse.Scripting.Context)");
    ::g::Fuse::Scripting::Object* outValue = uPtr(c)->NewObject();
    uPtr(outValue)->Item(::STRINGS[1/*"path"*/], Path());
    outValue->Item(::STRINGS[2/*"name"*/], ::g::Uno::IO::Path::GetFileName(Path()));
    outValue->Item(::STRINGS[3/*"width"*/], uBox<int>(::g::Uno::Int_typeof(), Width()));
    outValue->Item(::STRINGS[4/*"height"*/], uBox<int>(::g::Uno::Int_typeof(), Height()));
    outValue->Item(::STRINGS[5/*"info"*/], InfoToObject(c));
    ::g::Fuse::Scripting::JSObjectUtils::Freeze(outValue, c);
    return outValue;
}

// public int get_Width() [instance] :17
int Image::Width()
{
    uStackFrame __("Fuse.ImageTools.Image", "get_Width()");
    CheckDims();
    return _dims.X;
}

// public static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.ImageTools.Image result) [static] :104
::g::Fuse::Scripting::Object* Image::Converter(::g::Fuse::Scripting::Context* context, Image* result)
{
    uStackFrame __("Fuse.ImageTools.Image", "Converter(Fuse.Scripting.Context,Fuse.ImageTools.Image)");
    return uPtr(result)->ToObject(context);
}

// public static Fuse.ImageTools.Image FromObject(Fuse.Scripting.Object o) [static] :71
Image* Image::FromObject(::g::Fuse::Scripting::Object* o)
{
    uStackFrame __("Fuse.ImageTools.Image", "FromObject(Fuse.Scripting.Object)");
    uString* path = uCast<uString*>(uPtr(o)->Item(::STRINGS[1/*"path"*/]), ::TYPES[1/*string*/]);
    Image* outValue = Image::New2(path);
    return outValue;
}

// public static Fuse.ImageTools.Image FromObject(object o) [static] :66
Image* Image::FromObject1(uObject* o)
{
    uStackFrame __("Fuse.ImageTools.Image", "FromObject(object)");
    return Image::FromObject(uCast< ::g::Fuse::Scripting::Object*>(o, ::TYPES[2/*Fuse.Scripting.Object*/]));
}

// public Image New() [static] :57
Image* Image::New1()
{
    Image* obj2 = (Image*)uNew(Image_typeof());
    obj2->ctor_();
    return obj2;
}

// public Image New(string path) [static] :59
Image* Image::New2(uString* path)
{
    Image* obj3 = (Image*)uNew(Image_typeof());
    obj3->ctor_1(path);
    return obj3;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/0.47.7/$.uno
// ----------------------------------------------------------------------------------------

// internal sealed class ImagePromiseCallback :552
// {
static void ImagePromiseCallback_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL), offsetof(::g::Fuse::ImageTools::ImagePromiseCallback, _p), 0);
}

uType* ImagePromiseCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ImagePromiseCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.ImageTools.ImagePromiseCallback", options);
    type->fp_build_ = ImagePromiseCallback_build;
    return type;
}

// public ImagePromiseCallback(Uno.Threading.Promise<Fuse.ImageTools.Image> p) :555
void ImagePromiseCallback__ctor__fn(ImagePromiseCallback* __this, ::g::Uno::Threading::Promise* p)
{
    __this->ctor_(p);
}

// public ImagePromiseCallback New(Uno.Threading.Promise<Fuse.ImageTools.Image> p) :555
void ImagePromiseCallback__New1_fn(::g::Uno::Threading::Promise* p, ImagePromiseCallback** __retval)
{
    *__retval = ImagePromiseCallback::New1(p);
}

// public void Reject(string reason) :565
void ImagePromiseCallback__Reject_fn(ImagePromiseCallback* __this, uString* reason)
{
    __this->Reject(reason);
}

// public void Resolve(string path) :560
void ImagePromiseCallback__Resolve_fn(ImagePromiseCallback* __this, uString* path)
{
    __this->Resolve(path);
}

// public ImagePromiseCallback(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [instance] :555
void ImagePromiseCallback::ctor_(::g::Uno::Threading::Promise* p)
{
    _p = p;
}

// public void Reject(string reason) [instance] :565
void ImagePromiseCallback::Reject(uString* reason)
{
    uStackFrame __("Fuse.ImageTools.ImagePromiseCallback", "Reject(string)");
    uPtr(_p)->Reject(::g::Uno::Exception::New2(reason));
}

// public void Resolve(string path) [instance] :560
void ImagePromiseCallback::Resolve(uString* path)
{
    uStackFrame __("Fuse.ImageTools.ImagePromiseCallback", "Resolve(string)");
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_p), ::g::Fuse::ImageTools::Image::New2(path));
}

// public ImagePromiseCallback New(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [static] :555
ImagePromiseCallback* ImagePromiseCallback::New1(::g::Uno::Threading::Promise* p)
{
    ImagePromiseCallback* obj1 = (ImagePromiseCallback*)uNew(ImagePromiseCallback_typeof());
    obj1->ctor_(p);
    return obj1;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/0.47.7/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class ImageTools :162
// {
static void ImageTools_build(uType* type)
{
    ::STRINGS[6] = uString::Const("FuseJS/ImageTools");
    ::STRINGS[7] = uString::Const("resize");
    ::STRINGS[8] = uString::Const("crop");
    ::STRINGS[9] = uString::Const("getImageFromBase64");
    ::STRINGS[10] = uString::Const("getBase64FromImage");
    ::STRINGS[11] = uString::Const("getImageFromBuffer");
    ::STRINGS[12] = uString::Const("getBufferFromImage");
    ::STRINGS[13] = uString::Const("IGNORE_ASPECT");
    ::STRINGS[14] = uString::Const("KEEP_ASPECT");
    ::STRINGS[15] = uString::Const("SCALE_AND_CROP");
    ::STRINGS[16] = uString::Const("base64FromImage needs a Image argument");
    ::STRINGS[17] = uString::Const("Invalid image reference");
    ::STRINGS[18] = uString::Const("Invalid arguments");
    ::STRINGS[19] = uString::Const("crop takes 2 arguments: An Image and an options object");
    ::STRINGS[20] = uString::Const("x");
    ::STRINGS[21] = uString::Const("y");
    ::STRINGS[3] = uString::Const("width");
    ::STRINGS[22] = uString::Const("performInPlace");
    ::STRINGS[23] = uString::Const("Width and height must be larger than 0");
    ::STRINGS[24] = uString::Const("imageFromBase64 needs a base64 string argument");
    ::STRINGS[25] = uString::Const("getImageFromBuffer requires an arraybuffer argument");
    ::STRINGS[26] = uString::Const("resize takes 2 arguments: An Image and an Object of options");
    ::STRINGS[27] = uString::Const("desiredWidth");
    ::STRINGS[28] = uString::Const("desiredWidth must be defined");
    ::STRINGS[29] = uString::Const("desiredHeight");
    ::STRINGS[30] = uString::Const("mode");
    ::TYPES[4] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[11] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[13] = ::g::Uno::Exception_typeof();
    ::TYPES[14] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[16] = ::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(2/*ValueOrDefault<int>*/, ::g::Uno::Int_typeof(), NULL);
    ::TYPES[17] = ::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(2/*ValueOrDefault<bool>*/, ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[18] = ::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(3/*ValueOrDefault<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[20] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[21] = ::g::Fuse::ImageTools::PromiseCallback_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::Fuse::ImageTools::ImageTools::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("Crop", NULL, (void*)ImageTools__Crop_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL), 6, ::g::Fuse::ImageTools::Image_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("ImageFromBase64", NULL, (void*)ImageTools__ImageFromBase64_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL), 1, ::g::Uno::String_typeof()),
        new uFunction("ImageFromByteArray", NULL, (void*)ImageTools__ImageFromByteArray_fn, 0, true, ::g::Fuse::ImageTools::Image_typeof(), 1, ::TYPES[19/*byte[]*/]),
        new uFunction("ImageToBase64", NULL, (void*)ImageTools__ImageToBase64_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), 1, ::g::Fuse::ImageTools::Image_typeof()),
        new uFunction(".ctor", NULL, (void*)ImageTools__New2_fn, 0, true, type, 0),
        new uFunction("Resize", NULL, (void*)ImageTools__Resize_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL), 5, ::g::Fuse::ImageTools::Image_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Fuse::ImageTools::ResizeMode_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Fuse::Scripting::NativeModule_type* ImageTools_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ImageTools);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.ImageTools.ImageTools", options);
    type->fp_build_ = ImageTools_build;
    type->fp_ctor_ = (void*)ImageTools__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public ImageTools() :167
void ImageTools__ctor_2_fn(ImageTools* __this)
{
    __this->ctor_2();
}

// private Uno.Threading.Future<string> Base64FromImageInterface(object[] args) :430
void ImageTools__Base64FromImageInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Base64FromImageInterface(args);
}

// private Uno.Threading.Future<byte[]> BufferFromImageInterface(object[] args) :262
void ImageTools__BufferFromImageInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->BufferFromImageInterface(args);
}

// public static Uno.Threading.Future<Fuse.ImageTools.Image> Crop(Fuse.ImageTools.Image img, int width, int height, int x, int y, [bool inPlace]) :458
void ImageTools__Crop_fn(::g::Fuse::ImageTools::Image* img, int* width, int* height, int* x, int* y, bool* inPlace, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ImageTools::Crop(img, *width, *height, *x, *y, *inPlace);
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> CropImageInterface(object[] args) :364
void ImageTools__CropImageInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->CropImageInterface(args);
}

// public static Uno.Threading.Future<Fuse.ImageTools.Image> ImageFromBase64(string b64) :526
void ImageTools__ImageFromBase64_fn(uString* b64, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ImageTools::ImageFromBase64(b64);
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> ImageFromBase64Interface(object[] args) :408
void ImageTools__ImageFromBase64Interface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ImageFromBase64Interface(args);
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> ImageFromBufferInterface(object[] args) :215
void ImageTools__ImageFromBufferInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ImageFromBufferInterface(args);
}

// public static Fuse.ImageTools.Image ImageFromByteArray(byte[] bytes) :182
void ImageTools__ImageFromByteArray_fn(uArray* bytes, ::g::Fuse::ImageTools::Image** __retval)
{
    *__retval = ImageTools::ImageFromByteArray(bytes);
}

// public static Uno.Threading.Future<string> ImageToBase64(Fuse.ImageTools.Image img) :492
void ImageTools__ImageToBase64_fn(::g::Fuse::ImageTools::Image* img, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ImageTools::ImageToBase64(img);
}

// public ImageTools New() :167
void ImageTools__New2_fn(ImageTools** __retval)
{
    *__retval = ImageTools::New2();
}

// public static Uno.Threading.Future<Fuse.ImageTools.Image> Resize(Fuse.ImageTools.Image img, int desiredWidth, int desiredHeight, Fuse.ImageTools.ResizeMode mode, [bool inPlace]) :439
void ImageTools__Resize_fn(::g::Fuse::ImageTools::Image* img, int* desiredWidth, int* desiredHeight, int* mode, bool* inPlace, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ImageTools::Resize(img, *desiredWidth, *desiredHeight, *mode, *inPlace);
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> ResizeImageInterface(object[] args) :318
void ImageTools__ResizeImageInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ResizeImageInterface(args);
}

uSStrong<ImageTools*> ImageTools::_instance_;

// public ImageTools() [instance] :167
void ImageTools::ctor_2()
{
    uStackFrame __("Fuse.ImageTools.ImageTools", ".ctor()");
    ::g::Fuse::Scripting::NativeProperty* ret2;
    ::g::Fuse::Scripting::NativeProperty* ret3;
    ::g::Fuse::Scripting::NativeProperty* ret4;
    ctor_1();

    if (ImageTools::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(ImageTools::_instance_ = this, ::STRINGS[6/*"FuseJS/Imag...*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[4/*Fuse.Scripting.NativePromise<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], ::STRINGS[7/*"resize"*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.FutureFactory<Fuse.ImageTools.Image>*/], (void*)ImageTools__ResizeImageInterface_fn, this), uDelegate::New(::TYPES[6/*Fuse.Scripting.ResultConverter<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], (void*)::g::Fuse::ImageTools::Image__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[4/*Fuse.Scripting.NativePromise<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], ::STRINGS[8/*"crop"*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.FutureFactory<Fuse.ImageTools.Image>*/], (void*)ImageTools__CropImageInterface_fn, this), uDelegate::New(::TYPES[6/*Fuse.Scripting.ResultConverter<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], (void*)::g::Fuse::ImageTools::Image__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[4/*Fuse.Scripting.NativePromise<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], ::STRINGS[9/*"getImageFro...*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.FutureFactory<Fuse.ImageTools.Image>*/], (void*)ImageTools__ImageFromBase64Interface_fn, this), uDelegate::New(::TYPES[6/*Fuse.Scripting.ResultConverter<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], (void*)::g::Fuse::ImageTools::Image__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<string, Fuse.Scripting.Object>*/], ::STRINGS[10/*"getBase64Fr...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<string>*/], (void*)ImageTools__Base64FromImageInterface_fn, this), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[4/*Fuse.Scripting.NativePromise<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], ::STRINGS[11/*"getImageFro...*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.FutureFactory<Fuse.ImageTools.Image>*/], (void*)ImageTools__ImageFromBufferInterface_fn, this), uDelegate::New(::TYPES[6/*Fuse.Scripting.ResultConverter<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], (void*)::g::Fuse::ImageTools::Image__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[9/*Fuse.Scripting.NativePromise<byte[], Fuse.Scripting.Object>*/], ::STRINGS[12/*"getBufferFr...*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.FutureFactory<byte[]>*/], (void*)ImageTools__BufferFromImageInterface_fn, this), NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[11/*Fuse.Scripting.NativeProperty<object, int>*/], ::STRINGS[13/*"IGNORE_ASPECT"*/], uCRef<int>(0), &ret2), ret2));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[11/*Fuse.Scripting.NativeProperty<object, int>*/], ::STRINGS[14/*"KEEP_ASPECT"*/], uCRef<int>(1), &ret3), ret3));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[11/*Fuse.Scripting.NativeProperty<object, int>*/], ::STRINGS[15/*"SCALE_AND_C...*/], uCRef<int>(2), &ret4), ret4));
}

// private Uno.Threading.Future<string> Base64FromImageInterface(object[] args) [instance] :430
::g::Uno::Threading::Future1* ImageTools::Base64FromImageInterface(uArray* args)
{
    uStackFrame __("Fuse.ImageTools.ImageTools", "Base64FromImageInterface(object[])");

    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[16/*"base64FromI...*/]));

    ::g::Fuse::ImageTools::Image* image = ::g::Fuse::ImageTools::Image::FromObject1(uPtr(args)->Strong<uObject*>(0));
    return ImageTools::ImageToBase64(image);
}

// private Uno.Threading.Future<byte[]> BufferFromImageInterface(object[] args) [instance] :262
::g::Uno::Threading::Future1* ImageTools::BufferFromImageInterface(uArray* args)
{
    uStackFrame __("Fuse.ImageTools.ImageTools", "BufferFromImageInterface(object[])");
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[12/*Uno.Threading.Promise<byte[]>*/]);

    if (uPtr(args)->Length() == 1)
    {
        ::g::Fuse::ImageTools::Image* img = ::g::Fuse::ImageTools::Image::FromObject1(uPtr(args)->Strong<uObject*>(0));

        if (img != NULL)
        {
            try
            {
                uArray* bytes = ::g::Uno::IO::File::ReadAllBytes(uPtr(img)->Path());
                ::g::Uno::Threading::Promise__Resolve_fn(uPtr(p), bytes);
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;
                uPtr(p)->Reject(e);
            }
        }
        else
            uPtr(p)->Reject(::g::Uno::Exception::New2(::STRINGS[17/*"Invalid ima...*/]));
    }
    else
        uPtr(p)->Reject(::g::Uno::Exception::New2(::STRINGS[18/*"Invalid arg...*/]));

    return p;
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> CropImageInterface(object[] args) [instance] :364
::g::Uno::Threading::Future1* ImageTools::CropImageInterface(uArray* args)
{
    uStackFrame __("Fuse.ImageTools.ImageTools", "CropImageInterface(object[])");
    int ret5;
    int ret6;
    int ret7;
    int ret8;
    bool ret9;

    if (uPtr(args)->Length() != 2)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[19/*"crop takes ...*/]));

    ::g::Fuse::ImageTools::Image* image = ::g::Fuse::ImageTools::Image::FromObject1(uPtr(args)->Strong<uObject*>(0));
    ::g::Fuse::Scripting::Object* opts = uAs< ::g::Fuse::Scripting::Object*>(args->Strong<uObject*>(1), ::TYPES[2/*Fuse.Scripting.Object*/]);
    int width = 0;
    int height = 0;
    int x = 0;
    int y = 0;
    bool inPlace = true;

    if (opts != NULL)
    {
        x = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[16/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], opts, ::STRINGS[20/*"x"*/], uCRef<int>(0), &ret5), ret5);
        y = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[16/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], opts, ::STRINGS[21/*"y"*/], uCRef<int>(0), &ret6), ret6);
        width = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[16/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], opts, ::STRINGS[3/*"width"*/], uCRef<int>(0), &ret7), ret7);
        height = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[16/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], opts, ::STRINGS[3/*"width"*/], uCRef<int>(width), &ret8), ret8);
        inPlace = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[17/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<bool>*/], opts, ::STRINGS[22/*"performInPl...*/], uCRef(true), &ret9), ret9);
    }

    if ((width == 0) || (height == 0))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[23/*"Width and h...*/]));

    return ImageTools::Crop(image, width, height, x, y, inPlace);
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> ImageFromBase64Interface(object[] args) [instance] :408
::g::Uno::Threading::Future1* ImageTools::ImageFromBase64Interface(uArray* args)
{
    uStackFrame __("Fuse.ImageTools.ImageTools", "ImageFromBase64Interface(object[])");
    uString* ret10;

    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[24/*"imageFromBa...*/]));

    uString* str = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::TYPES[18/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<string>*/], args, uCRef<int>(0), NULL, &ret10), ret10);
    return ImageTools::ImageFromBase64(str);
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> ImageFromBufferInterface(object[] args) [instance] :215
::g::Uno::Threading::Future1* ImageTools::ImageFromBufferInterface(uArray* args)
{
    uStackFrame __("Fuse.ImageTools.ImageTools", "ImageFromBufferInterface(object[])");
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[14/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]);
    ::g::Fuse::ImageTools::ImagePromiseCallback* cb = ::g::Fuse::ImageTools::ImagePromiseCallback::New1(p);

    if (uPtr(args)->Length() == 1)
    {
        uArray* bytes = uAs<uArray*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[19/*byte[]*/]);

        if (bytes != NULL)
            ::g::Fuse::ImageTools::iOSImageUtils::GetImageFromBuffer(bytes, uDelegate::New(::TYPES[15/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Resolve_fn, uPtr(cb)), uDelegate::New(::TYPES[15/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Reject_fn, uPtr(cb)));
        else
            uPtr(cb)->Reject(::STRINGS[25/*"getImageFro...*/]);
    }
    else
        uPtr(cb)->Reject(::STRINGS[25/*"getImageFro...*/]);

    return p;
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> ResizeImageInterface(object[] args) [instance] :318
::g::Uno::Threading::Future1* ImageTools::ResizeImageInterface(uArray* args)
{
    uStackFrame __("Fuse.ImageTools.ImageTools", "ResizeImageInterface(object[])");
    int ret11;
    int ret12;
    int ret13;
    bool ret14;

    if (uPtr(args)->Length() != 2)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[26/*"resize take...*/]));

    ::g::Fuse::ImageTools::Image* image = ::g::Fuse::ImageTools::Image::FromObject1(uPtr(args)->Strong<uObject*>(0));
    ::g::Fuse::Scripting::Object* opts = uAs< ::g::Fuse::Scripting::Object*>(args->Strong<uObject*>(1), ::TYPES[2/*Fuse.Scripting.Object*/]);
    int w = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[16/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], opts, ::STRINGS[27/*"desiredWidth"*/], uCRef<int>(-1), &ret11), ret11);

    if (w == -1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[28/*"desiredWidt...*/]));

    int h = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[16/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], opts, ::STRINGS[29/*"desiredHeight"*/], uCRef<int>(w), &ret12), ret12);
    int m = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[16/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], opts, ::STRINGS[30/*"mode"*/], uCRef<int>(3), &ret13), ret13);
    bool inPlace = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[17/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<bool>*/], opts, ::STRINGS[22/*"performInPl...*/], uCRef(true), &ret14), ret14);
    return ImageTools::Resize(image, w, h, m, inPlace);
}

// public static Uno.Threading.Future<Fuse.ImageTools.Image> Crop(Fuse.ImageTools.Image img, int width, int height, int x, int y, [bool inPlace]) [static] :458
::g::Uno::Threading::Future1* ImageTools::Crop(::g::Fuse::ImageTools::Image* img, int width, int height, int x, int y, bool inPlace)
{
    uStackFrame __("Fuse.ImageTools.ImageTools", "Crop(Fuse.ImageTools.Image,int,int,int,int,[bool])");
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[14/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]);
    ::g::Fuse::ImageTools::ImagePromiseCallback* closure = ::g::Fuse::ImageTools::ImagePromiseCallback::New1(p);
    ::g::Fuse::ImageTools::iOSImageUtils::Crop(uPtr(img)->Path(), x, y, width, height, uDelegate::New(::TYPES[15/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Resolve_fn, closure), uDelegate::New(::TYPES[15/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Reject_fn, closure), inPlace);
    return p;
}

// public static Uno.Threading.Future<Fuse.ImageTools.Image> ImageFromBase64(string b64) [static] :526
::g::Uno::Threading::Future1* ImageTools::ImageFromBase64(uString* b64)
{
    uStackFrame __("Fuse.ImageTools.ImageTools", "ImageFromBase64(string)");
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[14/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]);
    ::g::Fuse::ImageTools::ImagePromiseCallback* closure = ::g::Fuse::ImageTools::ImagePromiseCallback::New1(p);
    ::g::Fuse::ImageTools::iOSImageUtils::GetImageFromBase64(b64, uDelegate::New(::TYPES[15/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Resolve_fn, closure), uDelegate::New(::TYPES[15/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Reject_fn, closure));
    return p;
}

// public static Fuse.ImageTools.Image ImageFromByteArray(byte[] bytes) [static] :182
::g::Fuse::ImageTools::Image* ImageTools::ImageFromByteArray(uArray* bytes)
{
    uStackFrame __("Fuse.ImageTools.ImageTools", "ImageFromByteArray(byte[])");
    return ::g::Fuse::ImageTools::Image::New2(::g::Fuse::ImageTools::iOSImageUtils::GetImageFromBufferSync(bytes));
}

// public static Uno.Threading.Future<string> ImageToBase64(Fuse.ImageTools.Image img) [static] :492
::g::Uno::Threading::Future1* ImageTools::ImageToBase64(::g::Fuse::ImageTools::Image* img)
{
    uStackFrame __("Fuse.ImageTools.ImageTools", "ImageToBase64(Fuse.ImageTools.Image)");
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[20/*Uno.Threading.Promise<string>*/]);
    ::g::Fuse::ImageTools::PromiseCallback* closure = (::g::Fuse::ImageTools::PromiseCallback*)::g::Fuse::ImageTools::PromiseCallback::New1(::TYPES[21/*Fuse.ImageTools.PromiseCallback<string>*/], p);
    ::g::Fuse::ImageTools::iOSImageUtils::GetBase64FromImage(uPtr(img)->Path(), uDelegate::New(::TYPES[15/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::PromiseCallback__Resolve_fn, closure), uDelegate::New(::TYPES[15/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::PromiseCallback__Reject_fn, closure));
    return p;
}

// public ImageTools New() [static] :167
ImageTools* ImageTools::New2()
{
    ImageTools* obj1 = (ImageTools*)uNew(ImageTools_typeof());
    obj1->ctor_2();
    return obj1;
}

// public static Uno.Threading.Future<Fuse.ImageTools.Image> Resize(Fuse.ImageTools.Image img, int desiredWidth, int desiredHeight, Fuse.ImageTools.ResizeMode mode, [bool inPlace]) [static] :439
::g::Uno::Threading::Future1* ImageTools::Resize(::g::Fuse::ImageTools::Image* img, int desiredWidth, int desiredHeight, int mode, bool inPlace)
{
    uStackFrame __("Fuse.ImageTools.ImageTools", "Resize(Fuse.ImageTools.Image,int,int,Fuse.ImageTools.ResizeMode,[bool])");
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[14/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]);
    ::g::Fuse::ImageTools::ImagePromiseCallback* closure = ::g::Fuse::ImageTools::ImagePromiseCallback::New1(p);
    ::g::Fuse::ImageTools::iOSImageUtils::Resize(uPtr(img)->Path(), desiredWidth, desiredHeight, mode, uDelegate::New(::TYPES[15/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Resolve_fn, uPtr(closure)), uDelegate::New(::TYPES[15/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Reject_fn, uPtr(closure)), inPlace);
    return p;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/0.47.7/$.uno
// ----------------------------------------------------------------------------------------

// internal sealed class PromiseCallback<T> :590
// {
static void PromiseCallback_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::ImageTools::PromiseCallback, _p), 0);
}

uType* PromiseCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(PromiseCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.ImageTools.PromiseCallback`1", options);
    type->fp_build_ = PromiseCallback_build;
    return type;
}

// public PromiseCallback(Uno.Threading.Promise<T> p) :593
void PromiseCallback__ctor__fn(PromiseCallback* __this, ::g::Uno::Threading::Promise* p)
{
    __this->ctor_(p);
}

// public PromiseCallback New(Uno.Threading.Promise<T> p) :593
void PromiseCallback__New1_fn(uType* __type, ::g::Uno::Threading::Promise* p, PromiseCallback** __retval)
{
    *__retval = PromiseCallback::New1(__type, p);
}

// public void Reject(string reason) :603
void PromiseCallback__Reject_fn(PromiseCallback* __this, uString* reason)
{
    __this->Reject(reason);
}

// public void Resolve(T v) :598
void PromiseCallback__Resolve_fn(PromiseCallback* __this, void* v)
{
    uStackFrame __("Fuse.ImageTools.PromiseCallback`1", "Resolve(T)");
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(__this->_p), v);
}

// public PromiseCallback(Uno.Threading.Promise<T> p) [instance] :593
void PromiseCallback::ctor_(::g::Uno::Threading::Promise* p)
{
    _p = p;
}

// public void Reject(string reason) [instance] :603
void PromiseCallback::Reject(uString* reason)
{
    uStackFrame __("Fuse.ImageTools.PromiseCallback`1", "Reject(string)");
    uPtr(_p)->Reject(::g::Uno::Exception::New2(reason));
}

// public PromiseCallback New(Uno.Threading.Promise<T> p) [static] :593
PromiseCallback* PromiseCallback::New1(uType* __type, ::g::Uno::Threading::Promise* p)
{
    PromiseCallback* obj1 = (PromiseCallback*)uNew(__type);
    obj1->ctor_(p);
    return obj1;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/0.47.7/$.uno
// ----------------------------------------------------------------------------------------

// public enum ResizeMode :123
uEnumType* ResizeMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.ImageTools.ResizeMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "IgnoreAspect", 0LL,
        "KeepAspect", 1LL,
        "ScaleAndCrop", 2LL);
    return type;
}

}}} // ::g::Fuse::ImageTools
