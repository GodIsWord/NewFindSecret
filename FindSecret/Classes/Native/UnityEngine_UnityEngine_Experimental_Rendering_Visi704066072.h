#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "UnityEngine_UnityEngine_LightType1494112716.h"
#include "UnityEngine_UnityEngine_Color2555686324.h"
#include "UnityEngine_UnityEngine_Rect2360479859.h"
#include "UnityEngine_UnityEngine_Matrix4x41817901843.h"
#include "UnityEngine_UnityEngine_Experimental_Rendering_Vis3157829005.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.VisibleLight
struct  VisibleLight_t704066072 
{
public:
	// UnityEngine.LightType UnityEngine.Experimental.Rendering.VisibleLight::lightType
	int32_t ___lightType_0;
	// UnityEngine.Color UnityEngine.Experimental.Rendering.VisibleLight::finalColor
	Color_t2555686324  ___finalColor_1;
	// UnityEngine.Rect UnityEngine.Experimental.Rendering.VisibleLight::screenRect
	Rect_t2360479859  ___screenRect_2;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.VisibleLight::localToWorld
	Matrix4x4_t1817901843  ___localToWorld_3;
	// System.Single UnityEngine.Experimental.Rendering.VisibleLight::range
	float ___range_4;
	// System.Single UnityEngine.Experimental.Rendering.VisibleLight::spotAngle
	float ___spotAngle_5;
	// System.Int32 UnityEngine.Experimental.Rendering.VisibleLight::instanceId
	int32_t ___instanceId_6;
	// UnityEngine.Experimental.Rendering.VisibleLightFlags UnityEngine.Experimental.Rendering.VisibleLight::flags
	int32_t ___flags_7;

public:
	inline static int32_t get_offset_of_lightType_0() { return static_cast<int32_t>(offsetof(VisibleLight_t704066072, ___lightType_0)); }
	inline int32_t get_lightType_0() const { return ___lightType_0; }
	inline int32_t* get_address_of_lightType_0() { return &___lightType_0; }
	inline void set_lightType_0(int32_t value)
	{
		___lightType_0 = value;
	}

	inline static int32_t get_offset_of_finalColor_1() { return static_cast<int32_t>(offsetof(VisibleLight_t704066072, ___finalColor_1)); }
	inline Color_t2555686324  get_finalColor_1() const { return ___finalColor_1; }
	inline Color_t2555686324 * get_address_of_finalColor_1() { return &___finalColor_1; }
	inline void set_finalColor_1(Color_t2555686324  value)
	{
		___finalColor_1 = value;
	}

	inline static int32_t get_offset_of_screenRect_2() { return static_cast<int32_t>(offsetof(VisibleLight_t704066072, ___screenRect_2)); }
	inline Rect_t2360479859  get_screenRect_2() const { return ___screenRect_2; }
	inline Rect_t2360479859 * get_address_of_screenRect_2() { return &___screenRect_2; }
	inline void set_screenRect_2(Rect_t2360479859  value)
	{
		___screenRect_2 = value;
	}

	inline static int32_t get_offset_of_localToWorld_3() { return static_cast<int32_t>(offsetof(VisibleLight_t704066072, ___localToWorld_3)); }
	inline Matrix4x4_t1817901843  get_localToWorld_3() const { return ___localToWorld_3; }
	inline Matrix4x4_t1817901843 * get_address_of_localToWorld_3() { return &___localToWorld_3; }
	inline void set_localToWorld_3(Matrix4x4_t1817901843  value)
	{
		___localToWorld_3 = value;
	}

	inline static int32_t get_offset_of_range_4() { return static_cast<int32_t>(offsetof(VisibleLight_t704066072, ___range_4)); }
	inline float get_range_4() const { return ___range_4; }
	inline float* get_address_of_range_4() { return &___range_4; }
	inline void set_range_4(float value)
	{
		___range_4 = value;
	}

	inline static int32_t get_offset_of_spotAngle_5() { return static_cast<int32_t>(offsetof(VisibleLight_t704066072, ___spotAngle_5)); }
	inline float get_spotAngle_5() const { return ___spotAngle_5; }
	inline float* get_address_of_spotAngle_5() { return &___spotAngle_5; }
	inline void set_spotAngle_5(float value)
	{
		___spotAngle_5 = value;
	}

	inline static int32_t get_offset_of_instanceId_6() { return static_cast<int32_t>(offsetof(VisibleLight_t704066072, ___instanceId_6)); }
	inline int32_t get_instanceId_6() const { return ___instanceId_6; }
	inline int32_t* get_address_of_instanceId_6() { return &___instanceId_6; }
	inline void set_instanceId_6(int32_t value)
	{
		___instanceId_6 = value;
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(VisibleLight_t704066072, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
