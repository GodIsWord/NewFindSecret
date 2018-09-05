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
#include "UnityEngine_UnityEngine_AtomicSafetyHandleVersionM1814109538.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AtomicSafetyHandle
struct  AtomicSafetyHandle_t3796697737 
{
public:
	// System.IntPtr UnityEngine.AtomicSafetyHandle::versionNode
	IntPtr_t ___versionNode_0;
	// UnityEngine.AtomicSafetyHandleVersionMask UnityEngine.AtomicSafetyHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_versionNode_0() { return static_cast<int32_t>(offsetof(AtomicSafetyHandle_t3796697737, ___versionNode_0)); }
	inline IntPtr_t get_versionNode_0() const { return ___versionNode_0; }
	inline IntPtr_t* get_address_of_versionNode_0() { return &___versionNode_0; }
	inline void set_versionNode_0(IntPtr_t value)
	{
		___versionNode_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(AtomicSafetyHandle_t3796697737, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
