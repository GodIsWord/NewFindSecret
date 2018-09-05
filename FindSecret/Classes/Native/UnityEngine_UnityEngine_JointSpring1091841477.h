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

// UnityEngine.JointSpring
struct  JointSpring_t1091841477 
{
public:
	// System.Single UnityEngine.JointSpring::spring
	float ___spring_0;
	// System.Single UnityEngine.JointSpring::damper
	float ___damper_1;
	// System.Single UnityEngine.JointSpring::targetPosition
	float ___targetPosition_2;

public:
	inline static int32_t get_offset_of_spring_0() { return static_cast<int32_t>(offsetof(JointSpring_t1091841477, ___spring_0)); }
	inline float get_spring_0() const { return ___spring_0; }
	inline float* get_address_of_spring_0() { return &___spring_0; }
	inline void set_spring_0(float value)
	{
		___spring_0 = value;
	}

	inline static int32_t get_offset_of_damper_1() { return static_cast<int32_t>(offsetof(JointSpring_t1091841477, ___damper_1)); }
	inline float get_damper_1() const { return ___damper_1; }
	inline float* get_address_of_damper_1() { return &___damper_1; }
	inline void set_damper_1(float value)
	{
		___damper_1 = value;
	}

	inline static int32_t get_offset_of_targetPosition_2() { return static_cast<int32_t>(offsetof(JointSpring_t1091841477, ___targetPosition_2)); }
	inline float get_targetPosition_2() const { return ___targetPosition_2; }
	inline float* get_address_of_targetPosition_2() { return &___targetPosition_2; }
	inline void set_targetPosition_2(float value)
	{
		___targetPosition_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
