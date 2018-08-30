#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Exampl1710376396.h"

// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t1017553631;
// Assets.GifAssets.PowerGif.AnimatedImage
struct AnimatedImage_t455440388;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.GifAssets.PowerGif.Examples.Scripts.EncodeExample
struct  EncodeExample_t3847581738  : public ExampleBase_t1710376396
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> Assets.GifAssets.PowerGif.Examples.Scripts.EncodeExample::Frames
	List_1_t1017553631 * ___Frames_5;
	// Assets.GifAssets.PowerGif.AnimatedImage Assets.GifAssets.PowerGif.Examples.Scripts.EncodeExample::AnimatedImage
	AnimatedImage_t455440388 * ___AnimatedImage_6;

public:
	inline static int32_t get_offset_of_Frames_5() { return static_cast<int32_t>(offsetof(EncodeExample_t3847581738, ___Frames_5)); }
	inline List_1_t1017553631 * get_Frames_5() const { return ___Frames_5; }
	inline List_1_t1017553631 ** get_address_of_Frames_5() { return &___Frames_5; }
	inline void set_Frames_5(List_1_t1017553631 * value)
	{
		___Frames_5 = value;
		Il2CppCodeGenWriteBarrier(&___Frames_5, value);
	}

	inline static int32_t get_offset_of_AnimatedImage_6() { return static_cast<int32_t>(offsetof(EncodeExample_t3847581738, ___AnimatedImage_6)); }
	inline AnimatedImage_t455440388 * get_AnimatedImage_6() const { return ___AnimatedImage_6; }
	inline AnimatedImage_t455440388 ** get_address_of_AnimatedImage_6() { return &___AnimatedImage_6; }
	inline void set_AnimatedImage_6(AnimatedImage_t455440388 * value)
	{
		___AnimatedImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___AnimatedImage_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
