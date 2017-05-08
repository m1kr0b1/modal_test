// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.demoapp_FuseCon-893e192d.h>
#include <_root.demoapp_FuseCon-b90eb05d.h>
#include <_root.MainView.h>
#include <_root.MainView.Template4.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[5];
static uType* TYPES[3];

namespace g{

// public partial sealed class MainView.Template4 :210
// {
// static Template4() :225
static void MainView__Template4__cctor__fn(uType* __type)
{
    MainView__Template4::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    MainView__Template4::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"File"*/]);
    MainView__Template4::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void MainView__Template4_build(uType* type)
{
    ::STRINGS[0] = uString::Const("File");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("LocalPhoto");
    ::STRINGS[3] = uString::Const("Title");
    ::STRINGS[4] = uString::Const("Description");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView__Template4, __g_nametable1), 0,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template4, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template4, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::MainView__Template4, temp_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template4, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template4, temp2_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView__Template4::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template4::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template4::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template4__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template4_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(MainView__Template4);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template4", options);
    type->fp_build_ = MainView__Template4_build;
    type->fp_cctor_ = MainView__Template4__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template4__New1_fn;
    return type;
}

// public Template4(MainView parent, MainView parentInstance) :214
void MainView__Template4__ctor_1_fn(MainView__Template4* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :228
void MainView__Template4__New1_fn(MainView__Template4* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template4", "New()");
    ::g::Fuse::Controls::StackPanel* __self1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    __this->temp_File_inst = ::g::demoapp_FuseControlsImage_File_Property::New1(temp, MainView__Template4::__selector0());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"LocalPhoto"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, MainView__Template4::__g_static_nametable1());
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::demoapp_FuseControlsTextControl_Value_Property::New1(temp1, MainView__Template4::__selector1());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"Title"*/]);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    __this->temp2_Value_inst = ::g::demoapp_FuseControlsTextControl_Value_Property::New1(temp2, MainView__Template4::__selector1());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"Description"*/]);
    ::g::Fuse::Controls::Rectangle* temp6 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp7 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp8 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_File_inst, (uObject*)temp3, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp4, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Value_inst, (uObject*)temp5, __this->__g_nametable1, 3);
    __self1->Height(::g::Uno::UX::Size__New1(300.0f, 1));
    __self1->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    __self1->Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp6->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp6->Layer(1);
    temp6->Fill(temp7);
    temp8->Padding(::g::Uno::Float4__New2(-10.0f, -10.0f, -10.0f, -10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    temp1->TextWrapping(1);
    temp1->FontSize(22.0f);
    temp1->TextAlignment(0);
    temp1->Alignment(1);
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    temp2->TextWrapping(1);
    temp2->TextAlignment(0);
    temp2->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    return *__retval = __self1, void();
}

// public Template4 New(MainView parent, MainView parentInstance) :214
void MainView__Template4__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template4** __retval)
{
    *__retval = MainView__Template4::New2(parent, parentInstance);
}

uSStrong<uArray*> MainView__Template4::__g_static_nametable1_;
::g::Uno::UX::Selector MainView__Template4::__selector0_;
::g::Uno::UX::Selector MainView__Template4::__selector1_;

// public Template4(MainView parent, MainView parentInstance) [instance] :214
void MainView__Template4::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template4 New(MainView parent, MainView parentInstance) [static] :214
MainView__Template4* MainView__Template4::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template4* obj1 = (MainView__Template4*)uNew(MainView__Template4_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
