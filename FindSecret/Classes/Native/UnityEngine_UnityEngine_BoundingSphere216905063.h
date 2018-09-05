#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoundingSphere
struct  BoundingSphere_t216905063 
{
public:
	// UnityEngine.Vector3 UnityEngine.BoundingSphere::position
	Vector3_t3722313464  ___position_0;
	// System.Single UnityEngine.BoundingSphere::radius
	float ___radius_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(BoundingSphere_t216905063, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_radius_1() { return static_cast<int32_t>(offsetof(BoundingSphere_t216905063, ___radius_1)); }
	inline float get_radius_1() const { return ___radius_1; }
	inline float* get_address_of_radius_1() { return &___radius_1; }
	inline void set_radius_1(float value)
	{
		___radius_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
