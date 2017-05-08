// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>

namespace g{

// public partial sealed class MainView.Template :5
// {
// static Template() :14
static void MainView__Template__cctor__fn(uType* __type)
{
}

static void MainView__Template_build(uType* type)
{
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MainView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template", options);
    type->fp_build_ = MainView__Template_build;
    type->fp_cctor_ = MainView__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template__New1_fn;
    return type;
}

// public Template(MainView parent, MainView parentInstance) :9
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :17
void MainView__Template__New1_fn(MainView__Template* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template", "New()");
    ::g::Fuse::Controls::Circle* __self1 = ::g::Fuse::Controls::Circle::New3();
    __self1->Color(::g::Uno::Float4__New2(0.5215687f, 0.5333334f, 0.5294118f, 1.0f));
    __self1->Margin(::g::Uno::Float4__New2(1.5f, 1.5f, 1.5f, 1.5f));
    return *__retval = __self1, void();
}

// public Template New(MainView parent, MainView parentInstance) :9
void MainView__Template__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template** __retval)
{
    *__retval = MainView__Template::New2(parent, parentInstance);
}

// public Template(MainView parent, MainView parentInstance) [instance] :9
void MainView__Template::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(MainView parent, MainView parentInstance) [static] :9
MainView__Template* MainView__Template::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template* obj1 = (MainView__Template*)uNew(MainView__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
