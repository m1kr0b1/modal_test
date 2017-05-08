// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.ImageTools.Image.h>
#include <Fuse.ImageTools.ImageTools.h>
#include <Fuse.Maps.MarkerIconCache.h>
#include <Fuse.Maps.MarkerSource.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler-1.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Maps{

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Maps/0.47.7/$.uno
// ----------------------------------------------------------------------------------

// internal sealed class MarkerIconCache :905
// {
static void MarkerIconCache_build(uType* type)
{
    ::STRINGS[0] = uString::Const("marker_");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Maps::MarkerSource_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary<string, Fuse.Maps.MarkerSource>*/], offsetof(::g::Fuse::Maps::MarkerIconCache, _cache), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Maps::MarkerIconCache, _changeHandler), 0);
}

uType* MarkerIconCache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(MarkerIconCache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Maps.MarkerIconCache", options);
    type->fp_build_ = MarkerIconCache_build;
    return type;
}

// public MarkerIconCache(Uno.Action changeHandler) :910
void MarkerIconCache__ctor__fn(MarkerIconCache* __this, uDelegate* changeHandler)
{
    __this->ctor_(changeHandler);
}

// public string Get(Uno.UX.FileSource src) :916
void MarkerIconCache__Get_fn(MarkerIconCache* __this, ::g::Uno::UX::FileSource* src, uString** __retval)
{
    *__retval = __this->Get(src);
}

// internal static string MakeKey(Uno.UX.FileSource src) :933
void MarkerIconCache__MakeKey_fn(::g::Uno::UX::FileSource* src, uString** __retval)
{
    *__retval = MarkerIconCache::MakeKey(src);
}

// public MarkerIconCache New(Uno.Action changeHandler) :910
void MarkerIconCache__New1_fn(uDelegate* changeHandler, MarkerIconCache** __retval)
{
    *__retval = MarkerIconCache::New1(changeHandler);
}

// internal void OnChanged() :927
void MarkerIconCache__OnChanged_fn(MarkerIconCache* __this)
{
    __this->OnChanged();
}

// public MarkerIconCache(Uno.Action changeHandler) [instance] :910
void MarkerIconCache::ctor_(uDelegate* changeHandler)
{
    _cache = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, Fuse.Maps.MarkerSource>*/]));
    _changeHandler = changeHandler;
}

// public string Get(Uno.UX.FileSource src) [instance] :916
uString* MarkerIconCache::Get(::g::Uno::UX::FileSource* src)
{
    uStackFrame __("Fuse.Maps.MarkerIconCache", "Get(Uno.UX.FileSource)");
    bool ret2;
    ::g::Fuse::Maps::MarkerSource* ret3;

    if (src == NULL)
        return NULL;

    uString* key = MarkerIconCache::MakeKey(src);

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_cache), key, &ret2), ret2))
        return uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_cache), key, &ret3), ret3))->Path();

    ::g::Fuse::Maps::MarkerSource* markerSource = ::g::Fuse::Maps::MarkerSource::New1(key, src, this);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_cache), key, markerSource);
    return markerSource->Path();
}

// internal void OnChanged() [instance] :927
void MarkerIconCache::OnChanged()
{
    uStackFrame __("Fuse.Maps.MarkerIconCache", "OnChanged()");

    if (::g::Uno::Delegate::op_Inequality(_changeHandler, NULL))
        uPtr(_changeHandler)->InvokeVoid();
}

// internal static string MakeKey(Uno.UX.FileSource src) [static] :933
uString* MarkerIconCache::MakeKey(::g::Uno::UX::FileSource* src)
{
    uStackFrame __("Fuse.Maps.MarkerIconCache", "MakeKey(Uno.UX.FileSource)");
    return ::g::Uno::String::op_Addition2(::STRINGS[0/*"marker_"*/], ::g::Uno::String::Replace(uPtr(uPtr(src)->Name), '/', '_'));
}

// public MarkerIconCache New(Uno.Action changeHandler) [static] :910
MarkerIconCache* MarkerIconCache::New1(uDelegate* changeHandler)
{
    MarkerIconCache* obj1 = (MarkerIconCache*)uNew(MarkerIconCache_typeof());
    obj1->ctor_(changeHandler);
    return obj1;
}
// }

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Maps/0.47.7/$.uno
// ----------------------------------------------------------------------------------

// internal sealed class MarkerSource :939
// {
// ~MarkerSource() :969
static void MarkerSource__Finalize_fn(MarkerSource* __this)
{
    uStackFrame __("Fuse.Maps.MarkerSource", "Finalize()");
    uPtr(__this->_src)->remove_DataChanged(uDelegate::New(::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/], (void*)MarkerSource__OnDataChanged_fn, __this));
}

static void MarkerSource_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Maps::MarkerIconCache_typeof(), offsetof(::g::Fuse::Maps::MarkerSource, _cache), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Maps::MarkerSource, _path), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Maps::MarkerSource, _src), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Maps::MarkerSource, dirty), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Maps::MarkerSource, _Name), 0);
}

uType* MarkerSource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MarkerSource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Maps.MarkerSource", options);
    type->fp_build_ = MarkerSource_build;
    type->fp_Finalize = (void(*)(uObject*))MarkerSource__Finalize_fn;
    return type;
}

// public MarkerSource(string name, Uno.UX.FileSource input, Fuse.Maps.MarkerIconCache cache) :960
void MarkerSource__ctor__fn(MarkerSource* __this, uString* name, ::g::Uno::UX::FileSource* input, ::g::Fuse::Maps::MarkerIconCache* cache)
{
    __this->ctor_(name, input, cache);
}

// public generated string get_Name() :957
void MarkerSource__get_Name_fn(MarkerSource* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :957
void MarkerSource__set_Name_fn(MarkerSource* __this, uString* value)
{
    __this->Name(value);
}

// public MarkerSource New(string name, Uno.UX.FileSource input, Fuse.Maps.MarkerIconCache cache) :960
void MarkerSource__New1_fn(uString* name, ::g::Uno::UX::FileSource* input, ::g::Fuse::Maps::MarkerIconCache* cache, MarkerSource** __retval)
{
    *__retval = MarkerSource::New1(name, input, cache);
}

// private void OnDataChanged(object sender, Uno.EventArgs args) :974
void MarkerSource__OnDataChanged_fn(MarkerSource* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnDataChanged(sender, args);
}

// public string get_Path() :947
void MarkerSource__get_Path_fn(MarkerSource* __this, uString** __retval)
{
    *__retval = __this->Path();
}

// public MarkerSource(string name, Uno.UX.FileSource input, Fuse.Maps.MarkerIconCache cache) [instance] :960
void MarkerSource::ctor_(uString* name, ::g::Uno::UX::FileSource* input, ::g::Fuse::Maps::MarkerIconCache* cache)
{
    uStackFrame __("Fuse.Maps.MarkerSource", ".ctor(string,Uno.UX.FileSource,Fuse.Maps.MarkerIconCache)");
    dirty = true;
    _cache = cache;
    _src = input;
    uPtr(_src)->add_DataChanged(uDelegate::New(::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/], (void*)MarkerSource__OnDataChanged_fn, this));
    Name(name);
}

// public generated string get_Name() [instance] :957
uString* MarkerSource::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :957
void MarkerSource::Name(uString* value)
{
    _Name = value;
}

// private void OnDataChanged(object sender, Uno.EventArgs args) [instance] :974
void MarkerSource::OnDataChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Maps.MarkerSource", "OnDataChanged(object,Uno.EventArgs)");
    dirty = true;
    uPtr(_cache)->OnChanged();
}

// public string get_Path() [instance] :947
uString* MarkerSource::Path()
{
    uStackFrame __("Fuse.Maps.MarkerSource", "get_Path()");

    if (!dirty)
        return _path;

    ::g::Fuse::ImageTools::Image* image = ::g::Fuse::ImageTools::ImageTools::ImageFromByteArray(uPtr(_src)->ReadAllBytes());
    uPtr(image)->Rename(Name(), true);
    dirty = false;
    return _path = image->Path();
}

// public MarkerSource New(string name, Uno.UX.FileSource input, Fuse.Maps.MarkerIconCache cache) [static] :960
MarkerSource* MarkerSource::New1(uString* name, ::g::Uno::UX::FileSource* input, ::g::Fuse::Maps::MarkerIconCache* cache)
{
    MarkerSource* obj1 = (MarkerSource*)uNew(MarkerSource_typeof());
    obj1->ctor_(name, input, cache);
    return obj1;
}
// }

}}} // ::g::Fuse::Maps
