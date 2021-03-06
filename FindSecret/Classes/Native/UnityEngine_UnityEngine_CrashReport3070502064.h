﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "mscorlib_System_DateTime3738529785.h"

// System.Collections.Generic.List`1<UnityEngine.CrashReport>
struct List_1_t247609510;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Comparison`1<UnityEngine.CrashReport>
struct Comparison_1_t2845433243;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CrashReport
struct  CrashReport_t3070502064  : public Il2CppObject
{
public:
	// System.String UnityEngine.CrashReport::id
	String_t* ___id_2;
	// System.DateTime UnityEngine.CrashReport::time
	DateTime_t3738529785  ___time_3;
	// System.String UnityEngine.CrashReport::text
	String_t* ___text_4;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(CrashReport_t3070502064, ___id_2)); }
	inline String_t* get_id_2() const { return ___id_2; }
	inline String_t** get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(String_t* value)
	{
		___id_2 = value;
		Il2CppCodeGenWriteBarrier(&___id_2, value);
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(CrashReport_t3070502064, ___time_3)); }
	inline DateTime_t3738529785  get_time_3() const { return ___time_3; }
	inline DateTime_t3738529785 * get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(DateTime_t3738529785  value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(CrashReport_t3070502064, ___text_4)); }
	inline String_t* get_text_4() const { return ___text_4; }
	inline String_t** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(String_t* value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier(&___text_4, value);
	}
};

struct CrashReport_t3070502064_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.CrashReport> UnityEngine.CrashReport::internalReports
	List_1_t247609510 * ___internalReports_0;
	// System.Object UnityEngine.CrashReport::reportsLock
	Il2CppObject * ___reportsLock_1;
	// System.Comparison`1<UnityEngine.CrashReport> UnityEngine.CrashReport::<>f__mg$cache0
	Comparison_1_t2845433243 * ___U3CU3Ef__mgU24cache0_5;

public:
	inline static int32_t get_offset_of_internalReports_0() { return static_cast<int32_t>(offsetof(CrashReport_t3070502064_StaticFields, ___internalReports_0)); }
	inline List_1_t247609510 * get_internalReports_0() const { return ___internalReports_0; }
	inline List_1_t247609510 ** get_address_of_internalReports_0() { return &___internalReports_0; }
	inline void set_internalReports_0(List_1_t247609510 * value)
	{
		___internalReports_0 = value;
		Il2CppCodeGenWriteBarrier(&___internalReports_0, value);
	}

	inline static int32_t get_offset_of_reportsLock_1() { return static_cast<int32_t>(offsetof(CrashReport_t3070502064_StaticFields, ___reportsLock_1)); }
	inline Il2CppObject * get_reportsLock_1() const { return ___reportsLock_1; }
	inline Il2CppObject ** get_address_of_reportsLock_1() { return &___reportsLock_1; }
	inline void set_reportsLock_1(Il2CppObject * value)
	{
		___reportsLock_1 = value;
		Il2CppCodeGenWriteBarrier(&___reportsLock_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(CrashReport_t3070502064_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline Comparison_1_t2845433243 * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline Comparison_1_t2845433243 ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(Comparison_1_t2845433243 * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
