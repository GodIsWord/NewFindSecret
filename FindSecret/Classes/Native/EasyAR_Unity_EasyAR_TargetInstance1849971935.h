#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_Base1500127977.h"
#include "EasyAR_Unity_EasyAR_TargetInstance_TrackStatus1585428402.h"
#include "UnityEngine_UnityEngine_Quaternion2301928331.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"

// EasyAR.Target
struct Target_t4113221852;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.TargetInstance
struct  TargetInstance_t1849971935  : public Base_t1500127977
{
public:
	// EasyAR.TargetInstance/TrackStatus EasyAR.TargetInstance::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_2;
	// EasyAR.Target EasyAR.TargetInstance::<Target>k__BackingField
	Target_t4113221852 * ___U3CTargetU3Ek__BackingField_3;
	// UnityEngine.Quaternion EasyAR.TargetInstance::<Rotation>k__BackingField
	Quaternion_t2301928331  ___U3CRotationU3Ek__BackingField_4;
	// UnityEngine.Vector3 EasyAR.TargetInstance::<Position>k__BackingField
	Vector3_t3722313464  ___U3CPositionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TargetInstance_t1849971935, ___U3CStatusU3Ek__BackingField_2)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_2() const { return ___U3CStatusU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_2() { return &___U3CStatusU3Ek__BackingField_2; }
	inline void set_U3CStatusU3Ek__BackingField_2(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TargetInstance_t1849971935, ___U3CTargetU3Ek__BackingField_3)); }
	inline Target_t4113221852 * get_U3CTargetU3Ek__BackingField_3() const { return ___U3CTargetU3Ek__BackingField_3; }
	inline Target_t4113221852 ** get_address_of_U3CTargetU3Ek__BackingField_3() { return &___U3CTargetU3Ek__BackingField_3; }
	inline void set_U3CTargetU3Ek__BackingField_3(Target_t4113221852 * value)
	{
		___U3CTargetU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTargetU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TargetInstance_t1849971935, ___U3CRotationU3Ek__BackingField_4)); }
	inline Quaternion_t2301928331  get_U3CRotationU3Ek__BackingField_4() const { return ___U3CRotationU3Ek__BackingField_4; }
	inline Quaternion_t2301928331 * get_address_of_U3CRotationU3Ek__BackingField_4() { return &___U3CRotationU3Ek__BackingField_4; }
	inline void set_U3CRotationU3Ek__BackingField_4(Quaternion_t2301928331  value)
	{
		___U3CRotationU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TargetInstance_t1849971935, ___U3CPositionU3Ek__BackingField_5)); }
	inline Vector3_t3722313464  get_U3CPositionU3Ek__BackingField_5() const { return ___U3CPositionU3Ek__BackingField_5; }
	inline Vector3_t3722313464 * get_address_of_U3CPositionU3Ek__BackingField_5() { return &___U3CPositionU3Ek__BackingField_5; }
	inline void set_U3CPositionU3Ek__BackingField_5(Vector3_t3722313464  value)
	{
		___U3CPositionU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
