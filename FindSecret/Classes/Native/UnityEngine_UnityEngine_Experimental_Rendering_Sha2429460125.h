#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "UnityEngine_UnityEngine_Experimental_Rendering_Sha3172482026.h"
#include "UnityEngine_UnityEngine_Vector43319028937.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ShadowSplitData
struct  ShadowSplitData_t2429460125 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.ShadowSplitData::cullingPlaneCount
	int32_t ___cullingPlaneCount_0;
	// UnityEngine.Experimental.Rendering.ShadowSplitData/<_cullingPlanes>__FixedBuffer2 UnityEngine.Experimental.Rendering.ShadowSplitData::_cullingPlanes
	U3C_cullingPlanesU3E__FixedBuffer2_t3172482026  ____cullingPlanes_1;
	// UnityEngine.Vector4 UnityEngine.Experimental.Rendering.ShadowSplitData::cullingSphere
	Vector4_t3319028937  ___cullingSphere_2;

public:
	inline static int32_t get_offset_of_cullingPlaneCount_0() { return static_cast<int32_t>(offsetof(ShadowSplitData_t2429460125, ___cullingPlaneCount_0)); }
	inline int32_t get_cullingPlaneCount_0() const { return ___cullingPlaneCount_0; }
	inline int32_t* get_address_of_cullingPlaneCount_0() { return &___cullingPlaneCount_0; }
	inline void set_cullingPlaneCount_0(int32_t value)
	{
		___cullingPlaneCount_0 = value;
	}

	inline static int32_t get_offset_of__cullingPlanes_1() { return static_cast<int32_t>(offsetof(ShadowSplitData_t2429460125, ____cullingPlanes_1)); }
	inline U3C_cullingPlanesU3E__FixedBuffer2_t3172482026  get__cullingPlanes_1() const { return ____cullingPlanes_1; }
	inline U3C_cullingPlanesU3E__FixedBuffer2_t3172482026 * get_address_of__cullingPlanes_1() { return &____cullingPlanes_1; }
	inline void set__cullingPlanes_1(U3C_cullingPlanesU3E__FixedBuffer2_t3172482026  value)
	{
		____cullingPlanes_1 = value;
	}

	inline static int32_t get_offset_of_cullingSphere_2() { return static_cast<int32_t>(offsetof(ShadowSplitData_t2429460125, ___cullingSphere_2)); }
	inline Vector4_t3319028937  get_cullingSphere_2() const { return ___cullingSphere_2; }
	inline Vector4_t3319028937 * get_address_of_cullingSphere_2() { return &___cullingSphere_2; }
	inline void set_cullingSphere_2(Vector4_t3319028937  value)
	{
		___cullingSphere_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
