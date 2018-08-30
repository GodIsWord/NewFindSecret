#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.GameObject
struct GameObject_t1113636619;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TreePrototype
struct  TreePrototype_t3052645628  : public Il2CppObject
{
public:
	// UnityEngine.GameObject UnityEngine.TreePrototype::m_Prefab
	GameObject_t1113636619 * ___m_Prefab_0;
	// System.Single UnityEngine.TreePrototype::m_BendFactor
	float ___m_BendFactor_1;

public:
	inline static int32_t get_offset_of_m_Prefab_0() { return static_cast<int32_t>(offsetof(TreePrototype_t3052645628, ___m_Prefab_0)); }
	inline GameObject_t1113636619 * get_m_Prefab_0() const { return ___m_Prefab_0; }
	inline GameObject_t1113636619 ** get_address_of_m_Prefab_0() { return &___m_Prefab_0; }
	inline void set_m_Prefab_0(GameObject_t1113636619 * value)
	{
		___m_Prefab_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Prefab_0, value);
	}

	inline static int32_t get_offset_of_m_BendFactor_1() { return static_cast<int32_t>(offsetof(TreePrototype_t3052645628, ___m_BendFactor_1)); }
	inline float get_m_BendFactor_1() const { return ___m_BendFactor_1; }
	inline float* get_address_of_m_BendFactor_1() { return &___m_BendFactor_1; }
	inline void set_m_BendFactor_1(float value)
	{
		___m_BendFactor_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TreePrototype
struct TreePrototype_t3052645628_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_Prefab_0;
	float ___m_BendFactor_1;
};
// Native definition for COM marshalling of UnityEngine.TreePrototype
struct TreePrototype_t3052645628_marshaled_com
{
	GameObject_t1113636619 * ___m_Prefab_0;
	float ___m_BendFactor_1;
};
