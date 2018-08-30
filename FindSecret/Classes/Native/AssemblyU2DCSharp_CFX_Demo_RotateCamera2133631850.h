#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.Transform
struct Transform_t3600365921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CFX_Demo_RotateCamera
struct  CFX_Demo_RotateCamera_t2133631850  : public MonoBehaviour_t3962482529
{
public:
	// System.Single CFX_Demo_RotateCamera::speed
	float ___speed_3;
	// UnityEngine.Transform CFX_Demo_RotateCamera::rotationCenter
	Transform_t3600365921 * ___rotationCenter_4;

public:
	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(CFX_Demo_RotateCamera_t2133631850, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_rotationCenter_4() { return static_cast<int32_t>(offsetof(CFX_Demo_RotateCamera_t2133631850, ___rotationCenter_4)); }
	inline Transform_t3600365921 * get_rotationCenter_4() const { return ___rotationCenter_4; }
	inline Transform_t3600365921 ** get_address_of_rotationCenter_4() { return &___rotationCenter_4; }
	inline void set_rotationCenter_4(Transform_t3600365921 * value)
	{
		___rotationCenter_4 = value;
		Il2CppCodeGenWriteBarrier(&___rotationCenter_4, value);
	}
};

struct CFX_Demo_RotateCamera_t2133631850_StaticFields
{
public:
	// System.Boolean CFX_Demo_RotateCamera::rotating
	bool ___rotating_2;

public:
	inline static int32_t get_offset_of_rotating_2() { return static_cast<int32_t>(offsetof(CFX_Demo_RotateCamera_t2133631850_StaticFields, ___rotating_2)); }
	inline bool get_rotating_2() const { return ___rotating_2; }
	inline bool* get_address_of_rotating_2() { return &___rotating_2; }
	inline void set_rotating_2(bool value)
	{
		___rotating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
