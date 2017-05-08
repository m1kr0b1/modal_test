// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/cache/ux11/ColorPalette.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{struct Float4;}}
namespace g{struct ColorPalette;}

namespace g{

// public partial sealed class ColorPalette :2
// {
::g::Fuse::Controls::Control_type* ColorPalette_typeof();
void ColorPalette__ctor_7_fn(ColorPalette* __this);
void ColorPalette__InitializeUX_fn(ColorPalette* __this);
void ColorPalette__New4_fn(ColorPalette** __retval);

struct ColorPalette : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::Float4 color0_;
    static ::g::Uno::Float4& color0() { return ColorPalette_typeof()->Init(), color0_; }
    static ::g::Uno::Float4 color1_;
    static ::g::Uno::Float4& color1() { return ColorPalette_typeof()->Init(), color1_; }
    static ::g::Uno::Float4 color2_;
    static ::g::Uno::Float4& color2() { return ColorPalette_typeof()->Init(), color2_; }
    static ::g::Uno::Float4 color3_;
    static ::g::Uno::Float4& color3() { return ColorPalette_typeof()->Init(), color3_; }
    static ::g::Uno::Float4 color4_;
    static ::g::Uno::Float4& color4() { return ColorPalette_typeof()->Init(), color4_; }

    void ctor_7();
    void InitializeUX();
    static ColorPalette* New4();
};
// }

} // ::g
