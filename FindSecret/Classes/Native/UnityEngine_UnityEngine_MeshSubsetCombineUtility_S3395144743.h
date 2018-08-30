#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "UnityEngine_UnityEngine_Matrix4x41817901843.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshSubsetCombineUtility/SubMeshInstance
struct  SubMeshInstance_t3395144743 
{
public:
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/SubMeshInstance::meshInstanceID
	int32_t ___meshInstanceID_0;
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/SubMeshInstance::vertexOffset
	int32_t ___vertexOffset_1;
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/SubMeshInstance::gameObjectInstanceID
	int32_t ___gameObjectInstanceID_2;
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/SubMeshInstance::subMeshIndex
	int32_t ___subMeshIndex_3;
	// UnityEngine.Matrix4x4 UnityEngine.MeshSubsetCombineUtility/SubMeshInstance::transform
	Matrix4x4_t1817901843  ___transform_4;

public:
	inline static int32_t get_offset_of_meshInstanceID_0() { return static_cast<int32_t>(offsetof(SubMeshInstance_t3395144743, ___meshInstanceID_0)); }
	inline int32_t get_meshInstanceID_0() const { return ___meshInstanceID_0; }
	inline int32_t* get_address_of_meshInstanceID_0() { return &___meshInstanceID_0; }
	inline void set_meshInstanceID_0(int32_t value)
	{
		___meshInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_vertexOffset_1() { return static_cast<int32_t>(offsetof(SubMeshInstance_t3395144743, ___vertexOffset_1)); }
	inline int32_t get_vertexOffset_1() const { return ___vertexOffset_1; }
	inline int32_t* get_address_of_vertexOffset_1() { return &___vertexOffset_1; }
	inline void set_vertexOffset_1(int32_t value)
	{
		___vertexOffset_1 = value;
	}

	inline static int32_t get_offset_of_gameObjectInstanceID_2() { return static_cast<int32_t>(offsetof(SubMeshInstance_t3395144743, ___gameObjectInstanceID_2)); }
	inline int32_t get_gameObjectInstanceID_2() const { return ___gameObjectInstanceID_2; }
	inline int32_t* get_address_of_gameObjectInstanceID_2() { return &___gameObjectInstanceID_2; }
	inline void set_gameObjectInstanceID_2(int32_t value)
	{
		___gameObjectInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_subMeshIndex_3() { return static_cast<int32_t>(offsetof(SubMeshInstance_t3395144743, ___subMeshIndex_3)); }
	inline int32_t get_subMeshIndex_3() const { return ___subMeshIndex_3; }
	inline int32_t* get_address_of_subMeshIndex_3() { return &___subMeshIndex_3; }
	inline void set_subMeshIndex_3(int32_t value)
	{
		___subMeshIndex_3 = value;
	}

	inline static int32_t get_offset_of_transform_4() { return static_cast<int32_t>(offsetof(SubMeshInstance_t3395144743, ___transform_4)); }
	inline Matrix4x4_t1817901843  get_transform_4() const { return ___transform_4; }
	inline Matrix4x4_t1817901843 * get_address_of_transform_4() { return &___transform_4; }
	inline void set_transform_4(Matrix4x4_t1817901843  value)
	{
		___transform_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
