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
#include "UnityEngine_UnityEngine_Vector43319028937.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshSubsetCombineUtility/MeshInstance
struct  MeshInstance_t1852286768 
{
public:
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/MeshInstance::meshInstanceID
	int32_t ___meshInstanceID_0;
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/MeshInstance::rendererInstanceID
	int32_t ___rendererInstanceID_1;
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/MeshInstance::additionalVertexStreamsMeshInstanceID
	int32_t ___additionalVertexStreamsMeshInstanceID_2;
	// UnityEngine.Matrix4x4 UnityEngine.MeshSubsetCombineUtility/MeshInstance::transform
	Matrix4x4_t1817901843  ___transform_3;
	// UnityEngine.Vector4 UnityEngine.MeshSubsetCombineUtility/MeshInstance::lightmapScaleOffset
	Vector4_t3319028937  ___lightmapScaleOffset_4;
	// UnityEngine.Vector4 UnityEngine.MeshSubsetCombineUtility/MeshInstance::realtimeLightmapScaleOffset
	Vector4_t3319028937  ___realtimeLightmapScaleOffset_5;

public:
	inline static int32_t get_offset_of_meshInstanceID_0() { return static_cast<int32_t>(offsetof(MeshInstance_t1852286768, ___meshInstanceID_0)); }
	inline int32_t get_meshInstanceID_0() const { return ___meshInstanceID_0; }
	inline int32_t* get_address_of_meshInstanceID_0() { return &___meshInstanceID_0; }
	inline void set_meshInstanceID_0(int32_t value)
	{
		___meshInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_rendererInstanceID_1() { return static_cast<int32_t>(offsetof(MeshInstance_t1852286768, ___rendererInstanceID_1)); }
	inline int32_t get_rendererInstanceID_1() const { return ___rendererInstanceID_1; }
	inline int32_t* get_address_of_rendererInstanceID_1() { return &___rendererInstanceID_1; }
	inline void set_rendererInstanceID_1(int32_t value)
	{
		___rendererInstanceID_1 = value;
	}

	inline static int32_t get_offset_of_additionalVertexStreamsMeshInstanceID_2() { return static_cast<int32_t>(offsetof(MeshInstance_t1852286768, ___additionalVertexStreamsMeshInstanceID_2)); }
	inline int32_t get_additionalVertexStreamsMeshInstanceID_2() const { return ___additionalVertexStreamsMeshInstanceID_2; }
	inline int32_t* get_address_of_additionalVertexStreamsMeshInstanceID_2() { return &___additionalVertexStreamsMeshInstanceID_2; }
	inline void set_additionalVertexStreamsMeshInstanceID_2(int32_t value)
	{
		___additionalVertexStreamsMeshInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_transform_3() { return static_cast<int32_t>(offsetof(MeshInstance_t1852286768, ___transform_3)); }
	inline Matrix4x4_t1817901843  get_transform_3() const { return ___transform_3; }
	inline Matrix4x4_t1817901843 * get_address_of_transform_3() { return &___transform_3; }
	inline void set_transform_3(Matrix4x4_t1817901843  value)
	{
		___transform_3 = value;
	}

	inline static int32_t get_offset_of_lightmapScaleOffset_4() { return static_cast<int32_t>(offsetof(MeshInstance_t1852286768, ___lightmapScaleOffset_4)); }
	inline Vector4_t3319028937  get_lightmapScaleOffset_4() const { return ___lightmapScaleOffset_4; }
	inline Vector4_t3319028937 * get_address_of_lightmapScaleOffset_4() { return &___lightmapScaleOffset_4; }
	inline void set_lightmapScaleOffset_4(Vector4_t3319028937  value)
	{
		___lightmapScaleOffset_4 = value;
	}

	inline static int32_t get_offset_of_realtimeLightmapScaleOffset_5() { return static_cast<int32_t>(offsetof(MeshInstance_t1852286768, ___realtimeLightmapScaleOffset_5)); }
	inline Vector4_t3319028937  get_realtimeLightmapScaleOffset_5() const { return ___realtimeLightmapScaleOffset_5; }
	inline Vector4_t3319028937 * get_address_of_realtimeLightmapScaleOffset_5() { return &___realtimeLightmapScaleOffset_5; }
	inline void set_realtimeLightmapScaleOffset_5(Vector4_t3319028937  value)
	{
		___realtimeLightmapScaleOffset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
