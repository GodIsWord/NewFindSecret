#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "SimpleGif_SimpleGif_Enums_MasterPalette862144925.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// SimpleGif.Gif
struct Gif_t2407357289;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleGif.Gif/C
struct  C_t2908009494  : public Il2CppObject
{
public:
	// SimpleGif.Enums.MasterPalette SimpleGif.Gif/C::A
	int32_t ___A_0;
	// System.Collections.Generic.List`1<System.Object> SimpleGif.Gif/C::A
	List_1_t257213610 * ___A_1;
	// SimpleGif.Gif SimpleGif.Gif/C::A
	Gif_t2407357289 * ___A_2;
	// System.Threading.ManualResetEvent SimpleGif.Gif/C::A
	ManualResetEvent_t451242010 * ___A_3;

public:
	inline static int32_t get_offset_of_A_0() { return static_cast<int32_t>(offsetof(C_t2908009494, ___A_0)); }
	inline int32_t get_A_0() const { return ___A_0; }
	inline int32_t* get_address_of_A_0() { return &___A_0; }
	inline void set_A_0(int32_t value)
	{
		___A_0 = value;
	}

	inline static int32_t get_offset_of_A_1() { return static_cast<int32_t>(offsetof(C_t2908009494, ___A_1)); }
	inline List_1_t257213610 * get_A_1() const { return ___A_1; }
	inline List_1_t257213610 ** get_address_of_A_1() { return &___A_1; }
	inline void set_A_1(List_1_t257213610 * value)
	{
		___A_1 = value;
		Il2CppCodeGenWriteBarrier(&___A_1, value);
	}

	inline static int32_t get_offset_of_A_2() { return static_cast<int32_t>(offsetof(C_t2908009494, ___A_2)); }
	inline Gif_t2407357289 * get_A_2() const { return ___A_2; }
	inline Gif_t2407357289 ** get_address_of_A_2() { return &___A_2; }
	inline void set_A_2(Gif_t2407357289 * value)
	{
		___A_2 = value;
		Il2CppCodeGenWriteBarrier(&___A_2, value);
	}

	inline static int32_t get_offset_of_A_3() { return static_cast<int32_t>(offsetof(C_t2908009494, ___A_3)); }
	inline ManualResetEvent_t451242010 * get_A_3() const { return ___A_3; }
	inline ManualResetEvent_t451242010 ** get_address_of_A_3() { return &___A_3; }
	inline void set_A_3(ManualResetEvent_t451242010 * value)
	{
		___A_3 = value;
		Il2CppCodeGenWriteBarrier(&___A_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
