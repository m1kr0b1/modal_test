// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.String.h>

namespace g{
namespace Uno{
namespace Permissions{

// /Users/ognen/Library/Application Support/Fusetools/Packages/Uno.Permissions/0.47.13/$.uno
// -----------------------------------------------------------------------------------------

// public struct PlatformPermission :11
// {
static void PlatformPermission_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Permissions::PlatformPermission, Name), 0);
    type->Reflection.SetFields(1,
        new uField("Name", 0));
}

uStructType* PlatformPermission_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(PlatformPermission);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Permissions.PlatformPermission", options);
    type->fp_build_ = PlatformPermission_build;
    return type;
}
// }

}}} // ::g::Uno::Permissions
