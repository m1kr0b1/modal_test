// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Maps.Android.TouchAction.h>
#include <Uno.Bool.h>

namespace g{
namespace Fuse{
namespace Maps{
namespace Android{

// /Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Maps/0.47.7/android/$.uno
// ------------------------------------------------------------------------------------------

// internal enum TouchAction :227
uEnumType* TouchAction_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Maps.Android.TouchAction", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "DOWN", 0LL,
        "UP", 1LL,
        "MOVE", 2LL);
    return type;
}

}}}} // ::g::Fuse::Maps::Android
