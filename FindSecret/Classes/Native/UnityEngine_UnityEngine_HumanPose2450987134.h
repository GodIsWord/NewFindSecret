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
#include "UnityEngine_UnityEngine_Quaternion2301928331.h"

// System.Single[]
struct SingleU5BU5D_t1444911251;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanPose
struct  HumanPose_t2450987134 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanPose::bodyPosition
	Vector3_t3722313464  ___bodyPosition_0;
	// UnityEngine.Quaternion UnityEngine.HumanPose::bodyRotation
	Quaternion_t2301928331  ___bodyRotation_1;
	// System.Single[] UnityEngine.HumanPose::muscles
	SingleU5BU5D_t1444911251* ___muscles_2;

public:
	inline static int32_t get_offset_of_bodyPosition_0() { return static_cast<int32_t>(offsetof(HumanPose_t2450987134, ___bodyPosition_0)); }
	inline Vector3_t3722313464  get_bodyPosition_0() const { return ___bodyPosition_0; }
	inline Vector3_t3722313464 * get_address_of_bodyPosition_0() { return &___bodyPosition_0; }
	inline void set_bodyPosition_0(Vector3_t3722313464  value)
	{
		___bodyPosition_0 = value;
	}

	inline static int32_t get_offset_of_bodyRotation_1() { return static_cast<int32_t>(offsetof(HumanPose_t2450987134, ___bodyRotation_1)); }
	inline Quaternion_t2301928331  get_bodyRotation_1() const { return ___bodyRotation_1; }
	inline Quaternion_t2301928331 * get_address_of_bodyRotation_1() { return &___bodyRotation_1; }
	inline void set_bodyRotation_1(Quaternion_t2301928331  value)
	{
		___bodyRotation_1 = value;
	}

	inline static int32_t get_offset_of_muscles_2() { return static_cast<int32_t>(offsetof(HumanPose_t2450987134, ___muscles_2)); }
	inline SingleU5BU5D_t1444911251* get_muscles_2() const { return ___muscles_2; }
	inline SingleU5BU5D_t1444911251** get_address_of_muscles_2() { return &___muscles_2; }
	inline void set_muscles_2(SingleU5BU5D_t1444911251* value)
	{
		___muscles_2 = value;
		Il2CppCodeGenWriteBarrier(&___muscles_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HumanPose
struct HumanPose_t2450987134_marshaled_pinvoke
{
	Vector3_t3722313464  ___bodyPosition_0;
	Quaternion_t2301928331  ___bodyRotation_1;
	float* ___muscles_2;
};
// Native definition for COM marshalling of UnityEngine.HumanPose
struct HumanPose_t2450987134_marshaled_com
{
	Vector3_t3722313464  ___bodyPosition_0;
	Quaternion_t2301928331  ___bodyRotation_1;
	float* ___muscles_2;
};
