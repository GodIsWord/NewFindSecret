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

// UnityEngine.Experimental.Rendering.VisibleLight[]
struct VisibleLightU5BU5D_t3751479945;
// UnityEngine.Experimental.Rendering.VisibleReflectionProbe[]
struct VisibleReflectionProbeU5BU5D_t1913340585;
struct VisibleLight_t704066072 ;
struct VisibleReflectionProbe_t1453491320 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.CullResults
struct  CullResults_t76141518 
{
public:
	// UnityEngine.Experimental.Rendering.VisibleLight[] UnityEngine.Experimental.Rendering.CullResults::visibleLights
	VisibleLightU5BU5D_t3751479945* ___visibleLights_0;
	// UnityEngine.Experimental.Rendering.VisibleReflectionProbe[] UnityEngine.Experimental.Rendering.CullResults::visibleReflectionProbes
	VisibleReflectionProbeU5BU5D_t1913340585* ___visibleReflectionProbes_1;
	// System.IntPtr UnityEngine.Experimental.Rendering.CullResults::cullResults
	IntPtr_t ___cullResults_2;

public:
	inline static int32_t get_offset_of_visibleLights_0() { return static_cast<int32_t>(offsetof(CullResults_t76141518, ___visibleLights_0)); }
	inline VisibleLightU5BU5D_t3751479945* get_visibleLights_0() const { return ___visibleLights_0; }
	inline VisibleLightU5BU5D_t3751479945** get_address_of_visibleLights_0() { return &___visibleLights_0; }
	inline void set_visibleLights_0(VisibleLightU5BU5D_t3751479945* value)
	{
		___visibleLights_0 = value;
		Il2CppCodeGenWriteBarrier(&___visibleLights_0, value);
	}

	inline static int32_t get_offset_of_visibleReflectionProbes_1() { return static_cast<int32_t>(offsetof(CullResults_t76141518, ___visibleReflectionProbes_1)); }
	inline VisibleReflectionProbeU5BU5D_t1913340585* get_visibleReflectionProbes_1() const { return ___visibleReflectionProbes_1; }
	inline VisibleReflectionProbeU5BU5D_t1913340585** get_address_of_visibleReflectionProbes_1() { return &___visibleReflectionProbes_1; }
	inline void set_visibleReflectionProbes_1(VisibleReflectionProbeU5BU5D_t1913340585* value)
	{
		___visibleReflectionProbes_1 = value;
		Il2CppCodeGenWriteBarrier(&___visibleReflectionProbes_1, value);
	}

	inline static int32_t get_offset_of_cullResults_2() { return static_cast<int32_t>(offsetof(CullResults_t76141518, ___cullResults_2)); }
	inline IntPtr_t get_cullResults_2() const { return ___cullResults_2; }
	inline IntPtr_t* get_address_of_cullResults_2() { return &___cullResults_2; }
	inline void set_cullResults_2(IntPtr_t value)
	{
		___cullResults_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.CullResults
struct CullResults_t76141518_marshaled_pinvoke
{
	VisibleLight_t704066072 * ___visibleLights_0;
	VisibleReflectionProbe_t1453491320 * ___visibleReflectionProbes_1;
	intptr_t ___cullResults_2;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.CullResults
struct CullResults_t76141518_marshaled_com
{
	VisibleLight_t704066072 * ___visibleLights_0;
	VisibleReflectionProbe_t1453491320 * ___visibleReflectionProbes_1;
	intptr_t ___cullResults_2;
};
