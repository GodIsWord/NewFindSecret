#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Exampl1710376396.h"

// Assets.GifAssets.PowerGif.AnimatedImage
struct AnimatedImage_t455440388;
// System.Diagnostics.Stopwatch
struct Stopwatch_t305734070;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.GifAssets.PowerGif.Examples.Scripts.PerformanceExample
struct  PerformanceExample_t308899077  : public ExampleBase_t1710376396
{
public:
	// Assets.GifAssets.PowerGif.AnimatedImage Assets.GifAssets.PowerGif.Examples.Scripts.PerformanceExample::AnimatedImage
	AnimatedImage_t455440388 * ___AnimatedImage_5;
	// System.Diagnostics.Stopwatch Assets.GifAssets.PowerGif.Examples.Scripts.PerformanceExample::_stopwatch
	Stopwatch_t305734070 * ____stopwatch_6;

public:
	inline static int32_t get_offset_of_AnimatedImage_5() { return static_cast<int32_t>(offsetof(PerformanceExample_t308899077, ___AnimatedImage_5)); }
	inline AnimatedImage_t455440388 * get_AnimatedImage_5() const { return ___AnimatedImage_5; }
	inline AnimatedImage_t455440388 ** get_address_of_AnimatedImage_5() { return &___AnimatedImage_5; }
	inline void set_AnimatedImage_5(AnimatedImage_t455440388 * value)
	{
		___AnimatedImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___AnimatedImage_5, value);
	}

	inline static int32_t get_offset_of__stopwatch_6() { return static_cast<int32_t>(offsetof(PerformanceExample_t308899077, ____stopwatch_6)); }
	inline Stopwatch_t305734070 * get__stopwatch_6() const { return ____stopwatch_6; }
	inline Stopwatch_t305734070 ** get_address_of__stopwatch_6() { return &____stopwatch_6; }
	inline void set__stopwatch_6(Stopwatch_t305734070 * value)
	{
		____stopwatch_6 = value;
		Il2CppCodeGenWriteBarrier(&____stopwatch_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
