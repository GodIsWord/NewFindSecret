#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "mscorlib_System_IntPtr840150181.h"
#include "UnityEngine_UnityEngine_Experimental_Rendering_Sha2429460125.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.DrawShadowsSettings
struct  DrawShadowsSettings_t3949492755 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.DrawShadowsSettings::_cullResults
	IntPtr_t ____cullResults_0;
	// System.Int32 UnityEngine.Experimental.Rendering.DrawShadowsSettings::lightIndex
	int32_t ___lightIndex_1;
	// UnityEngine.Experimental.Rendering.ShadowSplitData UnityEngine.Experimental.Rendering.DrawShadowsSettings::splitData
	ShadowSplitData_t2429460125  ___splitData_2;

public:
	inline static int32_t get_offset_of__cullResults_0() { return static_cast<int32_t>(offsetof(DrawShadowsSettings_t3949492755, ____cullResults_0)); }
	inline IntPtr_t get__cullResults_0() const { return ____cullResults_0; }
	inline IntPtr_t* get_address_of__cullResults_0() { return &____cullResults_0; }
	inline void set__cullResults_0(IntPtr_t value)
	{
		____cullResults_0 = value;
	}

	inline static int32_t get_offset_of_lightIndex_1() { return static_cast<int32_t>(offsetof(DrawShadowsSettings_t3949492755, ___lightIndex_1)); }
	inline int32_t get_lightIndex_1() const { return ___lightIndex_1; }
	inline int32_t* get_address_of_lightIndex_1() { return &___lightIndex_1; }
	inline void set_lightIndex_1(int32_t value)
	{
		___lightIndex_1 = value;
	}

	inline static int32_t get_offset_of_splitData_2() { return static_cast<int32_t>(offsetof(DrawShadowsSettings_t3949492755, ___splitData_2)); }
	inline ShadowSplitData_t2429460125  get_splitData_2() const { return ___splitData_2; }
	inline ShadowSplitData_t2429460125 * get_address_of_splitData_2() { return &___splitData_2; }
	inline void set_splitData_2(ShadowSplitData_t2429460125  value)
	{
		___splitData_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
