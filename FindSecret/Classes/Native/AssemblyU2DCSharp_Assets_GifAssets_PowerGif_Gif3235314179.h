#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.List`1<Assets.GifAssets.PowerGif.GifFrame>
struct List_1_t3555083388;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.GifAssets.PowerGif.Gif
struct  Gif_t3235314179  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Assets.GifAssets.PowerGif.GifFrame> Assets.GifAssets.PowerGif.Gif::Frames
	List_1_t3555083388 * ___Frames_0;

public:
	inline static int32_t get_offset_of_Frames_0() { return static_cast<int32_t>(offsetof(Gif_t3235314179, ___Frames_0)); }
	inline List_1_t3555083388 * get_Frames_0() const { return ___Frames_0; }
	inline List_1_t3555083388 ** get_address_of_Frames_0() { return &___Frames_0; }
	inline void set_Frames_0(List_1_t3555083388 * value)
	{
		___Frames_0 = value;
		Il2CppCodeGenWriteBarrier(&___Frames_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
