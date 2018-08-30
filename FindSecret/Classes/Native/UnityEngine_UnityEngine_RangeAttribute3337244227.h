#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_PropertyAttribute3677895545.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeAttribute
struct  RangeAttribute_t3337244227  : public PropertyAttribute_t3677895545
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_1;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_2;

public:
	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t3337244227, ___min_1)); }
	inline float get_min_1() const { return ___min_1; }
	inline float* get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(float value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(RangeAttribute_t3337244227, ___max_2)); }
	inline float get_max_2() const { return ___max_2; }
	inline float* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(float value)
	{
		___max_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
