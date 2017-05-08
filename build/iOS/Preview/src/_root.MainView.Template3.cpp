// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.demoapp_FuseRea-de2ecc20.h>
#include <_root.MainView.h>
#include <_root.MainView.Templa-6a421cf6.h>
#include <_root.MainView.Template3.h>
#include <Fuse.Binding.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[2];
static uType* TYPES[3];

namespace g{

// public partial sealed class MainView.Template3 :138
// {
// static Template3() :192
static void MainView__Template3__cctor__fn(uType* __type)
{
    MainView__Template3::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    MainView__Template3::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Items"*/]);
}

static void MainView__Template3_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Items");
    ::STRINGS[1] = uString::Const("Locations");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView__Template3, __g_nametable1), 0,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template3, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template3, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView__Template3, __self_Items_inst1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView__Template3::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template3::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template3__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(MainView__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template3", options);
    type->fp_build_ = MainView__Template3_build;
    type->fp_cctor_ = MainView__Template3__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template3__New1_fn;
    return type;
}

// public Template3(MainView parent, MainView parentInstance) :142
void MainView__Template3__ctor_1_fn(MainView__Template3* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :195
void MainView__Template3__New1_fn(MainView__Template3* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template3", "New()");
    ::g::Fuse::Reactive::Each* __self1 = ::g::Fuse::Reactive::Each::New4();
    __this->__self_Items_inst1 = ::g::demoapp_FuseReactiveEach_Items_Property::New1(__self1, MainView__Template3::__selector0());
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"Locations"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, MainView__Template3::__g_static_nametable1());
    MainView__Template3__Template4* temp1 = MainView__Template3__Template4::New2(__this, __self1);
    ::g::Fuse::Reactive::DataBinding* temp2 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Items_inst1, (uObject*)temp, __this->__g_nametable1, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Templates()), ::TYPES[1/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    return *__retval = __self1, void();
}

// public Template3 New(MainView parent, MainView parentInstance) :142
void MainView__Template3__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template3** __retval)
{
    *__retval = MainView__Template3::New2(parent, parentInstance);
}

uSStrong<uArray*> MainView__Template3::__g_static_nametable1_;
::g::Uno::UX::Selector MainView__Template3::__selector0_;

// public Template3(MainView parent, MainView parentInstance) [instance] :142
void MainView__Template3::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template3 New(MainView parent, MainView parentInstance) [static] :142
MainView__Template3* MainView__Template3::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template3* obj1 = (MainView__Template3*)uNew(MainView__Template3_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
