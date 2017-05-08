// This file was generated based on '/Users/ognen/Documents/Ognen/DBTv2 copy/build/iOS/Preview/preamble/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.IPointerEv-f0232aef.h>
#include <Fuse.IProperties.h>
#include <Outracks.Simulator.Application.h>
namespace g{namespace Outracks{namespace Simulator{struct GeneratedApplication;}}}
namespace g{namespace Uno{namespace IO{struct Bundle;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class GeneratedApplication :217
// {
::g::Outracks::Simulator::Application_type* GeneratedApplication_typeof();
void GeneratedApplication__ctor_5_fn(GeneratedApplication* __this);
void GeneratedApplication__GetBundle_fn(::g::Uno::IO::Bundle** __retval);
void GeneratedApplication__New3_fn(GeneratedApplication** __retval);

struct GeneratedApplication : ::g::Outracks::Simulator::Application
{
    void ctor_5();
    static ::g::Uno::IO::Bundle* GetBundle();
    static GeneratedApplication* New3();
};
// }

}}} // ::g::Outracks::Simulator
