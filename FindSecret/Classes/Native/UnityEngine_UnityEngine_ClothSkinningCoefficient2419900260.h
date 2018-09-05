#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ClothSkinningCoefficient
struct  ClothSkinningCoefficient_t2419900260 
{
public:
	// System.Single UnityEngine.ClothSkinningCoefficient::maxDistance
	float ___maxDistance_0;
	// System.Single UnityEngine.ClothSkinningCoefficient::collisionSphereDistance
	float ___collisionSphereDistance_1;

public:
	inline static int32_t get_offset_of_maxDistance_0() { return static_cast<int32_t>(offsetof(ClothSkinningCoefficient_t2419900260, ___maxDistance_0)); }
	inline float get_maxDistance_0() const { return ___maxDistance_0; }
	inline float* get_address_of_maxDistance_0() { return &___maxDistance_0; }
	inline void set_maxDistance_0(float value)
	{
		___maxDistance_0 = value;
	}

	inline static int32_t get_offset_of_collisionSphereDistance_1() { return static_cast<int32_t>(offsetof(ClothSkinningCoefficient_t2419900260, ___collisionSphereDistance_1)); }
	inline float get_collisionSphereDistance_1() const { return ___collisionSphereDistance_1; }
	inline float* get_address_of_collisionSphereDistance_1() { return &___collisionSphereDistance_1; }
	inline void set_collisionSphereDistance_1(float value)
	{
		___collisionSphereDistance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
