// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace ImageTools{

// public sealed class Image :10
// {
uType* Image_typeof();
void Image__ctor__fn(Image* __this);
void Image__ctor_1_fn(Image* __this, uString* path);
void Image__CheckDims_fn(Image* __this);
void Image__Converter_fn(::g::Fuse::Scripting::Context* context, Image* result, ::g::Fuse::Scripting::Object** __retval);
void Image__FromObject_fn(::g::Fuse::Scripting::Object* o, Image** __retval);
void Image__FromObject1_fn(uObject* o, Image** __retval);
void Image__get_Height_fn(Image* __this, int* __retval);
void Image__get_Info_fn(Image* __this, ::g::Uno::Collections::Dictionary** __retval);
void Image__set_Info_fn(Image* __this, ::g::Uno::Collections::Dictionary* value);
void Image__InfoToObject_fn(Image* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object** __retval);
void Image__get_Name_fn(Image* __this, uString** __retval);
void Image__set_Name_fn(Image* __this, uString* value);
void Image__New1_fn(Image** __retval);
void Image__New2_fn(uString* path, Image** __retval);
void Image__get_Path_fn(Image* __this, uString** __retval);
void Image__set_Path_fn(Image* __this, uString* value);
void Image__Rename_fn(Image* __this, uString* newName, bool* overwrite, bool* __retval);
void Image__ToObject_fn(Image* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object** __retval);
void Image__get_Width_fn(Image* __this, int* __retval);

struct Image : uObject
{
    ::g::Uno::Int2 _dims;
    uStrong< ::g::Uno::Collections::Dictionary*> _Info;
    uStrong<uString*> _Name;
    uStrong<uString*> _Path;

    void ctor_();
    void ctor_1(uString* path);
    void CheckDims();
    int Height();
    ::g::Uno::Collections::Dictionary* Info();
    void Info(::g::Uno::Collections::Dictionary* value);
    ::g::Fuse::Scripting::Object* InfoToObject(::g::Fuse::Scripting::Context* c);
    uString* Name();
    void Name(uString* value);
    uString* Path();
    void Path(uString* value);
    bool Rename(uString* newName, bool overwrite);
    ::g::Fuse::Scripting::Object* ToObject(::g::Fuse::Scripting::Context* c);
    int Width();
    static ::g::Fuse::Scripting::Object* Converter(::g::Fuse::Scripting::Context* context, Image* result);
    static Image* FromObject(::g::Fuse::Scripting::Object* o);
    static Image* FromObject1(uObject* o);
    static Image* New1();
    static Image* New2(uString* path);
};
// }

}}} // ::g::Fuse::ImageTools
