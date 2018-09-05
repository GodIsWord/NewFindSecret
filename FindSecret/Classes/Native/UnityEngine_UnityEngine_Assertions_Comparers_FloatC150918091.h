#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.Assertions.Comparers.FloatComparer
struct FloatComparer_t150918091;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Assertions.Comparers.FloatComparer
struct  FloatComparer_t150918091  : public Il2CppObject
{
public:
	// System.Single UnityEngine.Assertions.Comparers.FloatComparer::m_Error
	float ___m_Error_0;
	// System.Boolean UnityEngine.Assertions.Comparers.FloatComparer::m_Relative
	bool ___m_Relative_1;

public:
	inline static int32_t get_offset_of_m_Error_0() { return static_cast<int32_t>(offsetof(FloatComparer_t150918091, ___m_Error_0)); }
	inline float get_m_Error_0() const { return ___m_Error_0; }
	inline float* get_address_of_m_Error_0() { return &___m_Error_0; }
	inline void set_m_Error_0(float value)
	{
		___m_Error_0 = value;
	}

	inline static int32_t get_offset_of_m_Relative_1() { return static_cast<int32_t>(offsetof(FloatComparer_t150918091, ___m_Relative_1)); }
	inline bool get_m_Relative_1() const { return ___m_Relative_1; }
	inline bool* get_address_of_m_Relative_1() { return &___m_Relative_1; }
	inline void set_m_Relative_1(bool value)
	{
		___m_Relative_1 = value;
	}
};

struct FloatComparer_t150918091_StaticFields
{
public:
	// UnityEngine.Assertions.Comparers.FloatComparer UnityEngine.Assertions.Comparers.FloatComparer::s_ComparerWithDefaultTolerance
	FloatComparer_t150918091 * ___s_ComparerWithDefaultTolerance_2;

public:
	inline static int32_t get_offset_of_s_ComparerWithDefaultTolerance_2() { return static_cast<int32_t>(offsetof(FloatComparer_t150918091_StaticFields, ___s_ComparerWithDefaultTolerance_2)); }
	inline FloatComparer_t150918091 * get_s_ComparerWithDefaultTolerance_2() const { return ___s_ComparerWithDefaultTolerance_2; }
	inline FloatComparer_t150918091 ** get_address_of_s_ComparerWithDefaultTolerance_2() { return &___s_ComparerWithDefaultTolerance_2; }
	inline void set_s_ComparerWithDefaultTolerance_2(FloatComparer_t150918091 * value)
	{
		___s_ComparerWithDefaultTolerance_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_ComparerWithDefaultTolerance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
