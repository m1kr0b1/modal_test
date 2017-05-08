// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.demoapp_FuseCon-bb7323b5.h>
#include <_root.demoapp_FuseCon-e7092af2.h>
#include <_root.demoapp_FuseCon-fb269b0.h>
#include <_root.MainView.Templa-6a421cf6.h>
#include <_root.MainView.Template3.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.MapMarker.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.IExpression.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[6];
static uType* TYPES[2];

namespace g{

// public partial sealed class MainView.Template3.Template4 :148
// {
// static Template4() :163
static void MainView__Template3__Template4__cctor__fn(uType* __type)
{
    MainView__Template3__Template4::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    MainView__Template3__Template4::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Latitude"*/]);
    MainView__Template3__Template4::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Longitude"*/]);
    MainView__Template3__Template4::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Label"*/]);
}

static void MainView__Template3__Template4_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Latitude");
    ::STRINGS[1] = uString::Const("Longitude");
    ::STRINGS[2] = uString::Const("Label");
    ::STRINGS[3] = uString::Const("lat");
    ::STRINGS[4] = uString::Const("lon");
    ::STRINGS[5] = uString::Const("Title");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView__Template3__Template4, __g_nametable1), 0,
        ::g::MainView__Template3_typeof(), offsetof(::g::MainView__Template3__Template4, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Reactive::Each_typeof(), offsetof(::g::MainView__Template3__Template4, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template3__Template4, __self_Label_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(::g::MainView__Template3__Template4, __self_Latitude_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(::g::MainView__Template3__Template4, __self_Longitude_inst1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView__Template3__Template4::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template3__Template4::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template3__Template4::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template3__Template4::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template3__Template4__New2_fn, 0, true, type, 2, ::g::MainView__Template3_typeof(), ::g::Fuse::Reactive::Each_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template3__Template4_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 12;
    options.ObjectSize = sizeof(MainView__Template3__Template4);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template3.Template4", options);
    type->fp_build_ = MainView__Template3__Template4_build;
    type->fp_cctor_ = MainView__Template3__Template4__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template3__Template4__New1_fn;
    return type;
}

// public Template4(MainView.Template3 parent, Fuse.Reactive.Each parentInstance) :152
void MainView__Template3__Template4__ctor_1_fn(MainView__Template3__Template4* __this, ::g::MainView__Template3* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :166
void MainView__Template3__Template4__New1_fn(MainView__Template3__Template4* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template3.Template4", "New()");
    ::g::Fuse::Controls::MapMarker* __self1 = ::g::Fuse::Controls::MapMarker::New2();
    __this->__self_Latitude_inst1 = ::g::demoapp_FuseControlsMapMarker_Latitude_Property::New1(__self1, MainView__Template3__Template4::__selector0());
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"lat"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, MainView__Template3__Template4::__g_static_nametable1());
    __this->__self_Longitude_inst1 = ::g::demoapp_FuseControlsMapMarker_Longitude_Property::New1(__self1, MainView__Template3__Template4::__selector1());
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"lon"*/]);
    __this->__self_Label_inst1 = ::g::demoapp_FuseControlsMapMarker_Label_Property::New1(__self1, MainView__Template3__Template4::__selector2());
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"Title"*/]);
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Latitude_inst1, (uObject*)temp, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp4 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Longitude_inst1, (uObject*)temp1, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Label_inst1, (uObject*)temp2, __this->__g_nametable1, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    return *__retval = __self1, void();
}

// public Template4 New(MainView.Template3 parent, Fuse.Reactive.Each parentInstance) :152
void MainView__Template3__Template4__New2_fn(::g::MainView__Template3* parent, ::g::Fuse::Reactive::Each* parentInstance, MainView__Template3__Template4** __retval)
{
    *__retval = MainView__Template3__Template4::New2(parent, parentInstance);
}

uSStrong<uArray*> MainView__Template3__Template4::__g_static_nametable1_;
::g::Uno::UX::Selector MainView__Template3__Template4::__selector0_;
::g::Uno::UX::Selector MainView__Template3__Template4::__selector1_;
::g::Uno::UX::Selector MainView__Template3__Template4::__selector2_;

// public Template4(MainView.Template3 parent, Fuse.Reactive.Each parentInstance) [instance] :152
void MainView__Template3__Template4::ctor_1(::g::MainView__Template3* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template4 New(MainView.Template3 parent, Fuse.Reactive.Each parentInstance) [static] :152
MainView__Template3__Template4* MainView__Template3__Template4::New2(::g::MainView__Template3* parent, ::g::Fuse::Reactive::Each* parentInstance)
{
    MainView__Template3__Template4* obj1 = (MainView__Template3__Template4*)uNew(MainView__Template3__Template4_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
