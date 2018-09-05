#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "UnityEngine_UnityEngine_Bounds2266837910.h"
#include "UnityEngine_UnityEngine_Matrix4x41817901843.h"
#include "UnityEngine_UnityEngine_Vector43319028937.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.VisibleReflectionProbe
struct  VisibleReflectionProbe_t1453491320 
{
public:
	// UnityEngine.Bounds UnityEngine.Experimental.Rendering.VisibleReflectionProbe::bounds
	Bounds_t2266837910  ___bounds_0;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.VisibleReflectionProbe::localToWorld
	Matrix4x4_t1817901843  ___localToWorld_1;
	// UnityEngine.Vector4 UnityEngine.Experimental.Rendering.VisibleReflectionProbe::hdr
	Vector4_t3319028937  ___hdr_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.VisibleReflectionProbe::center
	Vector3_t3722313464  ___center_3;
	// System.Single UnityEngine.Experimental.Rendering.VisibleReflectionProbe::blendDistance
	float ___blendDistance_4;
	// System.Int32 UnityEngine.Experimental.Rendering.VisibleReflectionProbe::importance
	int32_t ___importance_5;
	// System.Int32 UnityEngine.Experimental.Rendering.VisibleReflectionProbe::boxProjection
	int32_t ___boxProjection_6;
	// System.Int32 UnityEngine.Experimental.Rendering.VisibleReflectionProbe::instanceId
	int32_t ___instanceId_7;
	// System.Int32 UnityEngine.Experimental.Rendering.VisibleReflectionProbe::textureId
	int32_t ___textureId_8;

public:
	inline static int32_t get_offset_of_bounds_0() { return static_cast<int32_t>(offsetof(VisibleReflectionProbe_t1453491320, ___bounds_0)); }
	inline Bounds_t2266837910  get_bounds_0() const { return ___bounds_0; }
	inline Bounds_t2266837910 * get_address_of_bounds_0() { return &___bounds_0; }
	inline void set_bounds_0(Bounds_t2266837910  value)
	{
		___bounds_0 = value;
	}

	inline static int32_t get_offset_of_localToWorld_1() { return static_cast<int32_t>(offsetof(VisibleReflectionProbe_t1453491320, ___localToWorld_1)); }
	inline Matrix4x4_t1817901843  get_localToWorld_1() const { return ___localToWorld_1; }
	inline Matrix4x4_t1817901843 * get_address_of_localToWorld_1() { return &___localToWorld_1; }
	inline void set_localToWorld_1(Matrix4x4_t1817901843  value)
	{
		___localToWorld_1 = value;
	}

	inline static int32_t get_offset_of_hdr_2() { return static_cast<int32_t>(offsetof(VisibleReflectionProbe_t1453491320, ___hdr_2)); }
	inline Vector4_t3319028937  get_hdr_2() const { return ___hdr_2; }
	inline Vector4_t3319028937 * get_address_of_hdr_2() { return &___hdr_2; }
	inline void set_hdr_2(Vector4_t3319028937  value)
	{
		___hdr_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(VisibleReflectionProbe_t1453491320, ___center_3)); }
	inline Vector3_t3722313464  get_center_3() const { return ___center_3; }
	inline Vector3_t3722313464 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector3_t3722313464  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_blendDistance_4() { return static_cast<int32_t>(offsetof(VisibleReflectionProbe_t1453491320, ___blendDistance_4)); }
	inline float get_blendDistance_4() const { return ___blendDistance_4; }
	inline float* get_address_of_blendDistance_4() { return &___blendDistance_4; }
	inline void set_blendDistance_4(float value)
	{
		___blendDistance_4 = value;
	}

	inline static int32_t get_offset_of_importance_5() { return static_cast<int32_t>(offsetof(VisibleReflectionProbe_t1453491320, ___importance_5)); }
	inline int32_t get_importance_5() const { return ___importance_5; }
	inline int32_t* get_address_of_importance_5() { return &___importance_5; }
	inline void set_importance_5(int32_t value)
	{
		___importance_5 = value;
	}

	inline static int32_t get_offset_of_boxProjection_6() { return static_cast<int32_t>(offsetof(VisibleReflectionProbe_t1453491320, ___boxProjection_6)); }
	inline int32_t get_boxProjection_6() const { return ___boxProjection_6; }
	inline int32_t* get_address_of_boxProjection_6() { return &___boxProjection_6; }
	inline void set_boxProjection_6(int32_t value)
	{
		___boxProjection_6 = value;
	}

	inline static int32_t get_offset_of_instanceId_7() { return static_cast<int32_t>(offsetof(VisibleReflectionProbe_t1453491320, ___instanceId_7)); }
	inline int32_t get_instanceId_7() const { return ___instanceId_7; }
	inline int32_t* get_address_of_instanceId_7() { return &___instanceId_7; }
	inline void set_instanceId_7(int32_t value)
	{
		___instanceId_7 = value;
	}

	inline static int32_t get_offset_of_textureId_8() { return static_cast<int32_t>(offsetof(VisibleReflectionProbe_t1453491320, ___textureId_8)); }
	inline int32_t get_textureId_8() const { return ___textureId_8; }
	inline int32_t* get_address_of_textureId_8() { return &___textureId_8; }
	inline void set_textureId_8(int32_t value)
	{
		___textureId_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
