#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "UnityEngine_UnityEngine_Color2555686324.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GradientColorKey
struct  GradientColorKey_t812552589 
{
public:
	// UnityEngine.Color UnityEngine.GradientColorKey::color
	Color_t2555686324  ___color_0;
	// System.Single UnityEngine.GradientColorKey::time
	float ___time_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(GradientColorKey_t812552589, ___color_0)); }
	inline Color_t2555686324  get_color_0() const { return ___color_0; }
	inline Color_t2555686324 * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color_t2555686324  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(GradientColorKey_t812552589, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
