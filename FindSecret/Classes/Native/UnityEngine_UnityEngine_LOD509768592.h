#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LOD
struct  LOD_t509768592 
{
public:
	// System.Single UnityEngine.LOD::screenRelativeTransitionHeight
	float ___screenRelativeTransitionHeight_0;
	// System.Single UnityEngine.LOD::fadeTransitionWidth
	float ___fadeTransitionWidth_1;
	// UnityEngine.Renderer[] UnityEngine.LOD::renderers
	RendererU5BU5D_t3210418286* ___renderers_2;

public:
	inline static int32_t get_offset_of_screenRelativeTransitionHeight_0() { return static_cast<int32_t>(offsetof(LOD_t509768592, ___screenRelativeTransitionHeight_0)); }
	inline float get_screenRelativeTransitionHeight_0() const { return ___screenRelativeTransitionHeight_0; }
	inline float* get_address_of_screenRelativeTransitionHeight_0() { return &___screenRelativeTransitionHeight_0; }
	inline void set_screenRelativeTransitionHeight_0(float value)
	{
		___screenRelativeTransitionHeight_0 = value;
	}

	inline static int32_t get_offset_of_fadeTransitionWidth_1() { return static_cast<int32_t>(offsetof(LOD_t509768592, ___fadeTransitionWidth_1)); }
	inline float get_fadeTransitionWidth_1() const { return ___fadeTransitionWidth_1; }
	inline float* get_address_of_fadeTransitionWidth_1() { return &___fadeTransitionWidth_1; }
	inline void set_fadeTransitionWidth_1(float value)
	{
		___fadeTransitionWidth_1 = value;
	}

	inline static int32_t get_offset_of_renderers_2() { return static_cast<int32_t>(offsetof(LOD_t509768592, ___renderers_2)); }
	inline RendererU5BU5D_t3210418286* get_renderers_2() const { return ___renderers_2; }
	inline RendererU5BU5D_t3210418286** get_address_of_renderers_2() { return &___renderers_2; }
	inline void set_renderers_2(RendererU5BU5D_t3210418286* value)
	{
		___renderers_2 = value;
		Il2CppCodeGenWriteBarrier(&___renderers_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.LOD
struct LOD_t509768592_marshaled_pinvoke
{
	float ___screenRelativeTransitionHeight_0;
	float ___fadeTransitionWidth_1;
	RendererU5BU5D_t3210418286* ___renderers_2;
};
// Native definition for COM marshalling of UnityEngine.LOD
struct LOD_t509768592_marshaled_com
{
	float ___screenRelativeTransitionHeight_0;
	float ___fadeTransitionWidth_1;
	RendererU5BU5D_t3210418286* ___renderers_2;
};
