#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// SimpleGif.Data.Color32[]
struct Color32U5BU5D_t3128258492;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleGif.Data.Texture2D
struct  Texture2D_t1690817120  : public Il2CppObject
{
public:
	// System.Int32 SimpleGif.Data.Texture2D::width
	int32_t ___width_0;
	// System.Int32 SimpleGif.Data.Texture2D::height
	int32_t ___height_1;
	// SimpleGif.Data.Color32[] SimpleGif.Data.Texture2D::A
	Color32U5BU5D_t3128258492* ___A_2;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(Texture2D_t1690817120, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(Texture2D_t1690817120, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_A_2() { return static_cast<int32_t>(offsetof(Texture2D_t1690817120, ___A_2)); }
	inline Color32U5BU5D_t3128258492* get_A_2() const { return ___A_2; }
	inline Color32U5BU5D_t3128258492** get_address_of_A_2() { return &___A_2; }
	inline void set_A_2(Color32U5BU5D_t3128258492* value)
	{
		___A_2 = value;
		Il2CppCodeGenWriteBarrier(&___A_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
