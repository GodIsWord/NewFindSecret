#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// UnityEngine.ReflectionProbe
struct ReflectionProbe_t175708936;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ReflectionProbeBlendInfo
struct  ReflectionProbeBlendInfo_t288657778 
{
public:
	// UnityEngine.ReflectionProbe UnityEngine.Rendering.ReflectionProbeBlendInfo::probe
	ReflectionProbe_t175708936 * ___probe_0;
	// System.Single UnityEngine.Rendering.ReflectionProbeBlendInfo::weight
	float ___weight_1;

public:
	inline static int32_t get_offset_of_probe_0() { return static_cast<int32_t>(offsetof(ReflectionProbeBlendInfo_t288657778, ___probe_0)); }
	inline ReflectionProbe_t175708936 * get_probe_0() const { return ___probe_0; }
	inline ReflectionProbe_t175708936 ** get_address_of_probe_0() { return &___probe_0; }
	inline void set_probe_0(ReflectionProbe_t175708936 * value)
	{
		___probe_0 = value;
		Il2CppCodeGenWriteBarrier(&___probe_0, value);
	}

	inline static int32_t get_offset_of_weight_1() { return static_cast<int32_t>(offsetof(ReflectionProbeBlendInfo_t288657778, ___weight_1)); }
	inline float get_weight_1() const { return ___weight_1; }
	inline float* get_address_of_weight_1() { return &___weight_1; }
	inline void set_weight_1(float value)
	{
		___weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.ReflectionProbeBlendInfo
struct ReflectionProbeBlendInfo_t288657778_marshaled_pinvoke
{
	ReflectionProbe_t175708936 * ___probe_0;
	float ___weight_1;
};
// Native definition for COM marshalling of UnityEngine.Rendering.ReflectionProbeBlendInfo
struct ReflectionProbeBlendInfo_t288657778_marshaled_com
{
	ReflectionProbe_t175708936 * ___probe_0;
	float ___weight_1;
};
