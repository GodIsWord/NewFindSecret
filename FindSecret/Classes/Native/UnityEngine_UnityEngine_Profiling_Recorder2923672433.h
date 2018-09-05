#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "mscorlib_System_IntPtr840150181.h"

// UnityEngine.Profiling.Recorder
struct Recorder_t2923672433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Profiling.Recorder
struct  Recorder_t2923672433  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.Profiling.Recorder::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Recorder_t2923672433, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Recorder_t2923672433_StaticFields
{
public:
	// UnityEngine.Profiling.Recorder UnityEngine.Profiling.Recorder::s_InvalidRecorder
	Recorder_t2923672433 * ___s_InvalidRecorder_1;

public:
	inline static int32_t get_offset_of_s_InvalidRecorder_1() { return static_cast<int32_t>(offsetof(Recorder_t2923672433_StaticFields, ___s_InvalidRecorder_1)); }
	inline Recorder_t2923672433 * get_s_InvalidRecorder_1() const { return ___s_InvalidRecorder_1; }
	inline Recorder_t2923672433 ** get_address_of_s_InvalidRecorder_1() { return &___s_InvalidRecorder_1; }
	inline void set_s_InvalidRecorder_1(Recorder_t2923672433 * value)
	{
		___s_InvalidRecorder_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_InvalidRecorder_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
