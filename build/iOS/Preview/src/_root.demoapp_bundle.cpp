// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/demo-app.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.demoapp_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[9];

namespace g{

// public static generated class demoapp_bundle :0
// {
// static demoapp_bundle() :0
static void demoapp_bundle__cctor__fn(uType* __type)
{
    demoapp_bundle::accountbalancea63e1179_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"demo-app"*/]))->GetFile(::STRINGS[1/*"accountbala...*/]);
    demoapp_bundle::baskete101f124_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"demo-app"*/]))->GetFile(::STRINGS[2/*"basket-7304...*/]);
    demoapp_bundle::personcd6912b3_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"demo-app"*/]))->GetFile(::STRINGS[3/*"person-c62f...*/]);
    demoapp_bundle::playcabaa09c_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"demo-app"*/]))->GetFile(::STRINGS[4/*"play-74171b...*/]);
    demoapp_bundle::RobotoBlack4005ad37_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"demo-app"*/]))->GetFile(::STRINGS[5/*"roboto-blac...*/]);
    demoapp_bundle::screen31945e341_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"demo-app"*/]))->GetFile(::STRINGS[6/*"screen3-1f2...*/]);
    demoapp_bundle::screen4ede03c70_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"demo-app"*/]))->GetFile(::STRINGS[7/*"screen4-87d...*/]);
    demoapp_bundle::searchf6216496_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"demo-app"*/]))->GetFile(::STRINGS[8/*"search-9113...*/]);
}

static void demoapp_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("demo-app");
    ::STRINGS[1] = uString::Const("accountbalance-1519109c.png");
    ::STRINGS[2] = uString::Const("basket-7304dbc9.png");
    ::STRINGS[3] = uString::Const("person-c62f29a4.png");
    ::STRINGS[4] = uString::Const("play-74171ba3.png");
    ::STRINGS[5] = uString::Const("roboto-black-db688930.ttf");
    ::STRINGS[6] = uString::Const("screen3-1f238664.png");
    ::STRINGS[7] = uString::Const("screen4-87de5827.png");
    ::STRINGS[8] = uString::Const("search-91137df9.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::demoapp_bundle::accountbalancea63e1179_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::demoapp_bundle::baskete101f124_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::demoapp_bundle::personcd6912b3_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::demoapp_bundle::playcabaa09c_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::demoapp_bundle::RobotoBlack4005ad37_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::demoapp_bundle::screen31945e341_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::demoapp_bundle::screen4ede03c70_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::demoapp_bundle::searchf6216496_, uFieldFlagsStatic);
    type->Reflection.SetFields(8,
        new uField("accountbalancea63e1179", 0),
        new uField("baskete101f124", 1),
        new uField("personcd6912b3", 2),
        new uField("playcabaa09c", 3),
        new uField("RobotoBlack4005ad37", 4),
        new uField("screen31945e341", 5),
        new uField("screen4ede03c70", 6),
        new uField("searchf6216496", 7));
}

uClassType* demoapp_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("demoapp_bundle", options);
    type->fp_build_ = demoapp_bundle_build;
    type->fp_cctor_ = demoapp_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> demoapp_bundle::accountbalancea63e1179_;
uSStrong< ::g::Uno::IO::BundleFile*> demoapp_bundle::baskete101f124_;
uSStrong< ::g::Uno::IO::BundleFile*> demoapp_bundle::personcd6912b3_;
uSStrong< ::g::Uno::IO::BundleFile*> demoapp_bundle::playcabaa09c_;
uSStrong< ::g::Uno::IO::BundleFile*> demoapp_bundle::RobotoBlack4005ad37_;
uSStrong< ::g::Uno::IO::BundleFile*> demoapp_bundle::screen31945e341_;
uSStrong< ::g::Uno::IO::BundleFile*> demoapp_bundle::screen4ede03c70_;
uSStrong< ::g::Uno::IO::BundleFile*> demoapp_bundle::searchf6216496_;
// }

} // ::g
