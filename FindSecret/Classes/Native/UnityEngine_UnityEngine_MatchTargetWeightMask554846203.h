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

// UnityEngine.MatchTargetWeightMask
struct  MatchTargetWeightMask_t554846203 
{
public:
	// UnityEngine.Vector3 UnityEngine.MatchTargetWeightMask::m_PositionXYZWeight
	Vector3_t3722313464  ___m_PositionXYZWeight_0;
	// System.Single UnityEngine.MatchTargetWeightMask::m_RotationWeight
	float ___m_RotationWeight_1;

public:
	inline static int32_t get_offset_of_m_PositionXYZWeight_0() { return static_cast<int32_t>(offsetof(MatchTargetWeightMask_t554846203, ___m_PositionXYZWeight_0)); }
	inline Vector3_t3722313464  get_m_PositionXYZWeight_0() const { return ___m_PositionXYZWeight_0; }
	inline Vector3_t3722313464 * get_address_of_m_PositionXYZWeight_0() { return &___m_PositionXYZWeight_0; }
	inline void set_m_PositionXYZWeight_0(Vector3_t3722313464  value)
	{
		___m_PositionXYZWeight_0 = value;
	}

	inline static int32_t get_offset_of_m_RotationWeight_1() { return static_cast<int32_t>(offsetof(MatchTargetWeightMask_t554846203, ___m_RotationWeight_1)); }
	inline float get_m_RotationWeight_1() const { return ___m_RotationWeight_1; }
	inline float* get_address_of_m_RotationWeight_1() { return &___m_RotationWeight_1; }
	inline void set_m_RotationWeight_1(float value)
	{
		___m_RotationWeight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
