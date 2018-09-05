#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_EasyAR_ImageTargetBehaviour4107554070.h"

// UnityEngine.GameObject
struct GameObject_t1113636619;
// DTarget
struct DTarget_t299473616;
// UnityEngine.Transform
struct Transform_t3600365921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RealImageTarget
struct  RealImageTarget_t23565925  : public ImageTargetBehaviour_t4107554070
{
public:
	// UnityEngine.GameObject RealImageTarget::go
	GameObject_t1113636619 * ___go_23;
	// DTarget RealImageTarget::<mTarget>k__BackingField
	DTarget_t299473616 * ___U3CmTargetU3Ek__BackingField_24;
	// UnityEngine.Transform RealImageTarget::pointRoot
	Transform_t3600365921 * ___pointRoot_25;

public:
	inline static int32_t get_offset_of_go_23() { return static_cast<int32_t>(offsetof(RealImageTarget_t23565925, ___go_23)); }
	inline GameObject_t1113636619 * get_go_23() const { return ___go_23; }
	inline GameObject_t1113636619 ** get_address_of_go_23() { return &___go_23; }
	inline void set_go_23(GameObject_t1113636619 * value)
	{
		___go_23 = value;
		Il2CppCodeGenWriteBarrier(&___go_23, value);
	}

	inline static int32_t get_offset_of_U3CmTargetU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(RealImageTarget_t23565925, ___U3CmTargetU3Ek__BackingField_24)); }
	inline DTarget_t299473616 * get_U3CmTargetU3Ek__BackingField_24() const { return ___U3CmTargetU3Ek__BackingField_24; }
	inline DTarget_t299473616 ** get_address_of_U3CmTargetU3Ek__BackingField_24() { return &___U3CmTargetU3Ek__BackingField_24; }
	inline void set_U3CmTargetU3Ek__BackingField_24(DTarget_t299473616 * value)
	{
		___U3CmTargetU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmTargetU3Ek__BackingField_24, value);
	}

	inline static int32_t get_offset_of_pointRoot_25() { return static_cast<int32_t>(offsetof(RealImageTarget_t23565925, ___pointRoot_25)); }
	inline Transform_t3600365921 * get_pointRoot_25() const { return ___pointRoot_25; }
	inline Transform_t3600365921 ** get_address_of_pointRoot_25() { return &___pointRoot_25; }
	inline void set_pointRoot_25(Transform_t3600365921 * value)
	{
		___pointRoot_25 = value;
		Il2CppCodeGenWriteBarrier(&___pointRoot_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
