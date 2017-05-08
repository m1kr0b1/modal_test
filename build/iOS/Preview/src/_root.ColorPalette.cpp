// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/ColorPalette.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ColorPalette.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[5];

namespace g{

// public partial sealed class ColorPalette :2
// {
// static ColorPalette() :9
static void ColorPalette__cctor_4_fn(uType* __type)
{
    ColorPalette::color0_ = ::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f);
    ColorPalette::color1_ = ::g::Uno::Float4__New2(0.2156863f, 0.6313726f, 0.8431373f, 1.0f);
    ColorPalette::color2_ = ::g::Uno::Float4__New2(1.0f, 0.5960785f, 0.01176471f, 1.0f);
    ColorPalette::color3_ = ::g::Uno::Float4__New2(0.9607843f, 0.5607843f, 0.5294118f, 1.0f);
    ColorPalette::color4_ = ::g::Uno::Float4__New2(0.5215687f, 0.5333334f, 0.5294118f, 1.0f);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ColorPalette::color0_), ::STRINGS[0/*"color0"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ColorPalette::color1_), ::STRINGS[1/*"color1"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ColorPalette::color2_), ::STRINGS[2/*"color2"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ColorPalette::color3_), ::STRINGS[3/*"color3"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ColorPalette::color4_), ::STRINGS[4/*"color4"*/]);
}

static void ColorPalette_build(uType* type)
{
    ::STRINGS[0] = uString::Const("color0");
    ::STRINGS[1] = uString::Const("color1");
    ::STRINGS[2] = uString::Const("color2");
    ::STRINGS[3] = uString::Const("color3");
    ::STRINGS[4] = uString::Const("color4");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface14));
    type->SetFields(103,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::ColorPalette::color0_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::ColorPalette::color1_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::ColorPalette::color2_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::ColorPalette::color3_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::ColorPalette::color4_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("color0", 103),
        new uField("color1", 104),
        new uField("color2", 105),
        new uField("color3", 106),
        new uField("color4", 107));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ColorPalette__New4_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Control_type* ColorPalette_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 108;
    options.InterfaceCount = 15;
    options.ObjectSize = sizeof(ColorPalette);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("ColorPalette", options);
    type->fp_build_ = ColorPalette_build;
    type->fp_ctor_ = (void*)ColorPalette__New4_fn;
    type->fp_cctor_ = ColorPalette__cctor_4_fn;
    type->interface10.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface12.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface11.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface14.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface13.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface13.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface13.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface13.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ColorPalette() :23
void ColorPalette__ctor_7_fn(ColorPalette* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :27
void ColorPalette__InitializeUX_fn(ColorPalette* __this)
{
    __this->InitializeUX();
}

// public ColorPalette New() :23
void ColorPalette__New4_fn(ColorPalette** __retval)
{
    *__retval = ColorPalette::New4();
}

::g::Uno::Float4 ColorPalette::color0_;
::g::Uno::Float4 ColorPalette::color1_;
::g::Uno::Float4 ColorPalette::color2_;
::g::Uno::Float4 ColorPalette::color3_;
::g::Uno::Float4 ColorPalette::color4_;

// public ColorPalette() [instance] :23
void ColorPalette::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :27
void ColorPalette::InitializeUX()
{
}

// public ColorPalette New() [static] :23
ColorPalette* ColorPalette::New4()
{
    ColorPalette* obj1 = (ColorPalette*)uNew(ColorPalette_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
