#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// SimpleGif.Data.GifFrame
struct GifFrame_t1833165212;
// SimpleGif.Gif/E
struct E_t3714578548;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleGif.Gif/e
struct  e_t844532692  : public Il2CppObject
{
public:
	// SimpleGif.Data.GifFrame SimpleGif.Gif/e::A
	GifFrame_t1833165212 * ___A_0;
	// SimpleGif.Gif/E SimpleGif.Gif/e::A
	E_t3714578548 * ___A_1;

public:
	inline static int32_t get_offset_of_A_0() { return static_cast<int32_t>(offsetof(e_t844532692, ___A_0)); }
	inline GifFrame_t1833165212 * get_A_0() const { return ___A_0; }
	inline GifFrame_t1833165212 ** get_address_of_A_0() { return &___A_0; }
	inline void set_A_0(GifFrame_t1833165212 * value)
	{
		___A_0 = value;
		Il2CppCodeGenWriteBarrier(&___A_0, value);
	}

	inline static int32_t get_offset_of_A_1() { return static_cast<int32_t>(offsetof(e_t844532692, ___A_1)); }
	inline E_t3714578548 * get_A_1() const { return ___A_1; }
	inline E_t3714578548 ** get_address_of_A_1() { return &___A_1; }
	inline void set_A_1(E_t3714578548 * value)
	{
		___A_1 = value;
		Il2CppCodeGenWriteBarrier(&___A_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
