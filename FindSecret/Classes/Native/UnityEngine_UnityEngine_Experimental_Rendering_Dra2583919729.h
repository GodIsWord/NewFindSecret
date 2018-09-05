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
#include "UnityEngine_UnityEngine_Vector33722313464.h"
#include "UnityEngine_UnityEngine_Experimental_Rendering_Sor3532376738.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.DrawRendererSortSettings
struct  DrawRendererSortSettings_t2583919729 
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.DrawRendererSortSettings::worldToCameraMatrix
	Matrix4x4_t1817901843  ___worldToCameraMatrix_0;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.DrawRendererSortSettings::cameraPosition
	Vector3_t3722313464  ___cameraPosition_1;
	// UnityEngine.Experimental.Rendering.SortFlags UnityEngine.Experimental.Rendering.DrawRendererSortSettings::flags
	int32_t ___flags_2;
	// System.Int32 UnityEngine.Experimental.Rendering.DrawRendererSortSettings::_sortOrthographic
	int32_t ____sortOrthographic_3;

public:
	inline static int32_t get_offset_of_worldToCameraMatrix_0() { return static_cast<int32_t>(offsetof(DrawRendererSortSettings_t2583919729, ___worldToCameraMatrix_0)); }
	inline Matrix4x4_t1817901843  get_worldToCameraMatrix_0() const { return ___worldToCameraMatrix_0; }
	inline Matrix4x4_t1817901843 * get_address_of_worldToCameraMatrix_0() { return &___worldToCameraMatrix_0; }
	inline void set_worldToCameraMatrix_0(Matrix4x4_t1817901843  value)
	{
		___worldToCameraMatrix_0 = value;
	}

	inline static int32_t get_offset_of_cameraPosition_1() { return static_cast<int32_t>(offsetof(DrawRendererSortSettings_t2583919729, ___cameraPosition_1)); }
	inline Vector3_t3722313464  get_cameraPosition_1() const { return ___cameraPosition_1; }
	inline Vector3_t3722313464 * get_address_of_cameraPosition_1() { return &___cameraPosition_1; }
	inline void set_cameraPosition_1(Vector3_t3722313464  value)
	{
		___cameraPosition_1 = value;
	}

	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(DrawRendererSortSettings_t2583919729, ___flags_2)); }
	inline int32_t get_flags_2() const { return ___flags_2; }
	inline int32_t* get_address_of_flags_2() { return &___flags_2; }
	inline void set_flags_2(int32_t value)
	{
		___flags_2 = value;
	}

	inline static int32_t get_offset_of__sortOrthographic_3() { return static_cast<int32_t>(offsetof(DrawRendererSortSettings_t2583919729, ____sortOrthographic_3)); }
	inline int32_t get__sortOrthographic_3() const { return ____sortOrthographic_3; }
	inline int32_t* get_address_of__sortOrthographic_3() { return &____sortOrthographic_3; }
	inline void set__sortOrthographic_3(int32_t value)
	{
		____sortOrthographic_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
