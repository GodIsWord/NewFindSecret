#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "UnityEngine_UnityEngine_MeshSubsetCombineUtility_M1852286768.h"

// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>
struct List_1_t572252189;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshSubsetCombineUtility/MeshContainer
struct  MeshContainer_t2572561050 
{
public:
	// UnityEngine.GameObject UnityEngine.MeshSubsetCombineUtility/MeshContainer::gameObject
	GameObject_t1113636619 * ___gameObject_0;
	// UnityEngine.MeshSubsetCombineUtility/MeshInstance UnityEngine.MeshSubsetCombineUtility/MeshContainer::instance
	MeshInstance_t1852286768  ___instance_1;
	// System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance> UnityEngine.MeshSubsetCombineUtility/MeshContainer::subMeshInstances
	List_1_t572252189 * ___subMeshInstances_2;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(MeshContainer_t2572561050, ___gameObject_0)); }
	inline GameObject_t1113636619 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_t1113636619 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_0, value);
	}

	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(MeshContainer_t2572561050, ___instance_1)); }
	inline MeshInstance_t1852286768  get_instance_1() const { return ___instance_1; }
	inline MeshInstance_t1852286768 * get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(MeshInstance_t1852286768  value)
	{
		___instance_1 = value;
	}

	inline static int32_t get_offset_of_subMeshInstances_2() { return static_cast<int32_t>(offsetof(MeshContainer_t2572561050, ___subMeshInstances_2)); }
	inline List_1_t572252189 * get_subMeshInstances_2() const { return ___subMeshInstances_2; }
	inline List_1_t572252189 ** get_address_of_subMeshInstances_2() { return &___subMeshInstances_2; }
	inline void set_subMeshInstances_2(List_1_t572252189 * value)
	{
		___subMeshInstances_2 = value;
		Il2CppCodeGenWriteBarrier(&___subMeshInstances_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.MeshSubsetCombineUtility/MeshContainer
struct MeshContainer_t2572561050_marshaled_pinvoke
{
	GameObject_t1113636619 * ___gameObject_0;
	MeshInstance_t1852286768  ___instance_1;
	List_1_t572252189 * ___subMeshInstances_2;
};
// Native definition for COM marshalling of UnityEngine.MeshSubsetCombineUtility/MeshContainer
struct MeshContainer_t2572561050_marshaled_com
{
	GameObject_t1113636619 * ___gameObject_0;
	MeshInstance_t1852286768  ___instance_1;
	List_1_t572252189 * ___subMeshInstances_2;
};
