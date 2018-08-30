#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "SimpleGif_SimpleGif_Enums_DisposalMethod2007431263.h"

// SimpleGif.Data.Texture2D
struct Texture2D_t1690817120;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleGif.Data.GifFrame
struct  GifFrame_t1833165212  : public Il2CppObject
{
public:
	// SimpleGif.Data.Texture2D SimpleGif.Data.GifFrame::Texture
	Texture2D_t1690817120 * ___Texture_0;
	// System.Single SimpleGif.Data.GifFrame::Delay
	float ___Delay_1;
	// SimpleGif.Enums.DisposalMethod SimpleGif.Data.GifFrame::DisposalMethod
	int32_t ___DisposalMethod_2;

public:
	inline static int32_t get_offset_of_Texture_0() { return static_cast<int32_t>(offsetof(GifFrame_t1833165212, ___Texture_0)); }
	inline Texture2D_t1690817120 * get_Texture_0() const { return ___Texture_0; }
	inline Texture2D_t1690817120 ** get_address_of_Texture_0() { return &___Texture_0; }
	inline void set_Texture_0(Texture2D_t1690817120 * value)
	{
		___Texture_0 = value;
		Il2CppCodeGenWriteBarrier(&___Texture_0, value);
	}

	inline static int32_t get_offset_of_Delay_1() { return static_cast<int32_t>(offsetof(GifFrame_t1833165212, ___Delay_1)); }
	inline float get_Delay_1() const { return ___Delay_1; }
	inline float* get_address_of_Delay_1() { return &___Delay_1; }
	inline void set_Delay_1(float value)
	{
		___Delay_1 = value;
	}

	inline static int32_t get_offset_of_DisposalMethod_2() { return static_cast<int32_t>(offsetof(GifFrame_t1833165212, ___DisposalMethod_2)); }
	inline int32_t get_DisposalMethod_2() const { return ___DisposalMethod_2; }
	inline int32_t* get_address_of_DisposalMethod_2() { return &___DisposalMethod_2; }
	inline void set_DisposalMethod_2(int32_t value)
	{
		___DisposalMethod_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
