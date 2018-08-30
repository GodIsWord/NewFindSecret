#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.GameObject
struct GameObject_t1113636619;
// TargetManager
struct TargetManager_t3847878240;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TargetManager
struct  TargetManager_t3847878240  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject TargetManager::CurrentObject
	GameObject_t1113636619 * ___CurrentObject_2;
	// UnityEngine.GameObject TargetManager::RealityPlane
	GameObject_t1113636619 * ___RealityPlane_3;

public:
	inline static int32_t get_offset_of_CurrentObject_2() { return static_cast<int32_t>(offsetof(TargetManager_t3847878240, ___CurrentObject_2)); }
	inline GameObject_t1113636619 * get_CurrentObject_2() const { return ___CurrentObject_2; }
	inline GameObject_t1113636619 ** get_address_of_CurrentObject_2() { return &___CurrentObject_2; }
	inline void set_CurrentObject_2(GameObject_t1113636619 * value)
	{
		___CurrentObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentObject_2, value);
	}

	inline static int32_t get_offset_of_RealityPlane_3() { return static_cast<int32_t>(offsetof(TargetManager_t3847878240, ___RealityPlane_3)); }
	inline GameObject_t1113636619 * get_RealityPlane_3() const { return ___RealityPlane_3; }
	inline GameObject_t1113636619 ** get_address_of_RealityPlane_3() { return &___RealityPlane_3; }
	inline void set_RealityPlane_3(GameObject_t1113636619 * value)
	{
		___RealityPlane_3 = value;
		Il2CppCodeGenWriteBarrier(&___RealityPlane_3, value);
	}
};

struct TargetManager_t3847878240_StaticFields
{
public:
	// TargetManager TargetManager::Target_Manager
	TargetManager_t3847878240 * ___Target_Manager_4;

public:
	inline static int32_t get_offset_of_Target_Manager_4() { return static_cast<int32_t>(offsetof(TargetManager_t3847878240_StaticFields, ___Target_Manager_4)); }
	inline TargetManager_t3847878240 * get_Target_Manager_4() const { return ___Target_Manager_4; }
	inline TargetManager_t3847878240 ** get_address_of_Target_Manager_4() { return &___Target_Manager_4; }
	inline void set_Target_Manager_4(TargetManager_t3847878240 * value)
	{
		___Target_Manager_4 = value;
		Il2CppCodeGenWriteBarrier(&___Target_Manager_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
