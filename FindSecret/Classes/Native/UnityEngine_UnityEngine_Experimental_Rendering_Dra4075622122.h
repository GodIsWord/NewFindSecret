#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "UnityEngine_UnityEngine_Experimental_Rendering_Dra2583919729.h"
#include "UnityEngine_UnityEngine_Experimental_Rendering_Shade93928621.h"
#include "UnityEngine_UnityEngine_Experimental_Rendering_Inp1184148113.h"
#include "UnityEngine_UnityEngine_Experimental_Rendering_Rend426365263.h"
#include "UnityEngine_UnityEngine_Experimental_Rendering_Dra1369343893.h"
#include "mscorlib_System_IntPtr840150181.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.DrawRendererSettings
struct  DrawRendererSettings_t4075622122 
{
public:
	// UnityEngine.Experimental.Rendering.DrawRendererSortSettings UnityEngine.Experimental.Rendering.DrawRendererSettings::sorting
	DrawRendererSortSettings_t2583919729  ___sorting_0;
	// UnityEngine.Experimental.Rendering.ShaderPassName UnityEngine.Experimental.Rendering.DrawRendererSettings::shaderPassName
	ShaderPassName_t93928621  ___shaderPassName_1;
	// UnityEngine.Experimental.Rendering.InputFilter UnityEngine.Experimental.Rendering.DrawRendererSettings::inputFilter
	InputFilter_t1184148113  ___inputFilter_2;
	// UnityEngine.Experimental.Rendering.RendererConfiguration UnityEngine.Experimental.Rendering.DrawRendererSettings::rendererConfiguration
	int32_t ___rendererConfiguration_3;
	// UnityEngine.Experimental.Rendering.DrawRendererFlags UnityEngine.Experimental.Rendering.DrawRendererSettings::flags
	int32_t ___flags_4;
	// System.IntPtr UnityEngine.Experimental.Rendering.DrawRendererSettings::_cullResults
	IntPtr_t ____cullResults_5;

public:
	inline static int32_t get_offset_of_sorting_0() { return static_cast<int32_t>(offsetof(DrawRendererSettings_t4075622122, ___sorting_0)); }
	inline DrawRendererSortSettings_t2583919729  get_sorting_0() const { return ___sorting_0; }
	inline DrawRendererSortSettings_t2583919729 * get_address_of_sorting_0() { return &___sorting_0; }
	inline void set_sorting_0(DrawRendererSortSettings_t2583919729  value)
	{
		___sorting_0 = value;
	}

	inline static int32_t get_offset_of_shaderPassName_1() { return static_cast<int32_t>(offsetof(DrawRendererSettings_t4075622122, ___shaderPassName_1)); }
	inline ShaderPassName_t93928621  get_shaderPassName_1() const { return ___shaderPassName_1; }
	inline ShaderPassName_t93928621 * get_address_of_shaderPassName_1() { return &___shaderPassName_1; }
	inline void set_shaderPassName_1(ShaderPassName_t93928621  value)
	{
		___shaderPassName_1 = value;
	}

	inline static int32_t get_offset_of_inputFilter_2() { return static_cast<int32_t>(offsetof(DrawRendererSettings_t4075622122, ___inputFilter_2)); }
	inline InputFilter_t1184148113  get_inputFilter_2() const { return ___inputFilter_2; }
	inline InputFilter_t1184148113 * get_address_of_inputFilter_2() { return &___inputFilter_2; }
	inline void set_inputFilter_2(InputFilter_t1184148113  value)
	{
		___inputFilter_2 = value;
	}

	inline static int32_t get_offset_of_rendererConfiguration_3() { return static_cast<int32_t>(offsetof(DrawRendererSettings_t4075622122, ___rendererConfiguration_3)); }
	inline int32_t get_rendererConfiguration_3() const { return ___rendererConfiguration_3; }
	inline int32_t* get_address_of_rendererConfiguration_3() { return &___rendererConfiguration_3; }
	inline void set_rendererConfiguration_3(int32_t value)
	{
		___rendererConfiguration_3 = value;
	}

	inline static int32_t get_offset_of_flags_4() { return static_cast<int32_t>(offsetof(DrawRendererSettings_t4075622122, ___flags_4)); }
	inline int32_t get_flags_4() const { return ___flags_4; }
	inline int32_t* get_address_of_flags_4() { return &___flags_4; }
	inline void set_flags_4(int32_t value)
	{
		___flags_4 = value;
	}

	inline static int32_t get_offset_of__cullResults_5() { return static_cast<int32_t>(offsetof(DrawRendererSettings_t4075622122, ____cullResults_5)); }
	inline IntPtr_t get__cullResults_5() const { return ____cullResults_5; }
	inline IntPtr_t* get_address_of__cullResults_5() { return &____cullResults_5; }
	inline void set__cullResults_5(IntPtr_t value)
	{
		____cullResults_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
