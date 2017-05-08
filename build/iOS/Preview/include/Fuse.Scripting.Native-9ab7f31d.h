// This file was generated based on '/Users/ognen/Library/Application Support/Fusetools/Packages/Fuse.Scripting/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEventEmitterModule__FactoryClosure1;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class NativeEventEmitterModule.FactoryClosure1<T> :1103
// {
uType* NativeEventEmitterModule__FactoryClosure1_typeof();
void NativeEventEmitterModule__FactoryClosure1__ctor__fn(NativeEventEmitterModule__FactoryClosure1* __this, uDelegate* argsFactory, void* t);
void NativeEventEmitterModule__FactoryClosure1__Emit_fn(NativeEventEmitterModule__FactoryClosure1* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o);
void NativeEventEmitterModule__FactoryClosure1__New1_fn(uType* __type, uDelegate* argsFactory, void* t, NativeEventEmitterModule__FactoryClosure1** __retval);

struct NativeEventEmitterModule__FactoryClosure1 : uObject
{
    uStrong<uDelegate*> _argsFactory;
    uTField _t() { return __type->Field(this, 1); }

    template<class T>
    void ctor_(uDelegate* argsFactory, T t) { NativeEventEmitterModule__FactoryClosure1__ctor__fn(this, argsFactory, uConstrain(__type->T(0), t)); }
    void Emit(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o);
    template<class T>
    static NativeEventEmitterModule__FactoryClosure1* New1(uType* __type, uDelegate* argsFactory, T t) { NativeEventEmitterModule__FactoryClosure1* __retval; return NativeEventEmitterModule__FactoryClosure1__New1_fn(__type, argsFactory, uConstrain(__type->T(0), t), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
