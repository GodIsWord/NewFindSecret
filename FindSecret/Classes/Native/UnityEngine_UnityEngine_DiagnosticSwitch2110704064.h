#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "UnityEngine_UnityEngine_DiagnosticSwitchFlags1577216330.h"

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.EnumInfo
struct EnumInfo_t93260550;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DiagnosticSwitch
struct  DiagnosticSwitch_t2110704064 
{
public:
	// System.String UnityEngine.DiagnosticSwitch::name
	String_t* ___name_0;
	// System.String UnityEngine.DiagnosticSwitch::description
	String_t* ___description_1;
	// UnityEngine.DiagnosticSwitchFlags UnityEngine.DiagnosticSwitch::flags
	int32_t ___flags_2;
	// System.Object UnityEngine.DiagnosticSwitch::value
	Il2CppObject * ___value_3;
	// System.Object UnityEngine.DiagnosticSwitch::minValue
	Il2CppObject * ___minValue_4;
	// System.Object UnityEngine.DiagnosticSwitch::maxValue
	Il2CppObject * ___maxValue_5;
	// System.Object UnityEngine.DiagnosticSwitch::persistentValue
	Il2CppObject * ___persistentValue_6;
	// UnityEngine.EnumInfo UnityEngine.DiagnosticSwitch::enumInfo
	EnumInfo_t93260550 * ___enumInfo_7;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t2110704064, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t2110704064, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier(&___description_1, value);
	}

	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t2110704064, ___flags_2)); }
	inline int32_t get_flags_2() const { return ___flags_2; }
	inline int32_t* get_address_of_flags_2() { return &___flags_2; }
	inline void set_flags_2(int32_t value)
	{
		___flags_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t2110704064, ___value_3)); }
	inline Il2CppObject * get_value_3() const { return ___value_3; }
	inline Il2CppObject ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(Il2CppObject * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier(&___value_3, value);
	}

	inline static int32_t get_offset_of_minValue_4() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t2110704064, ___minValue_4)); }
	inline Il2CppObject * get_minValue_4() const { return ___minValue_4; }
	inline Il2CppObject ** get_address_of_minValue_4() { return &___minValue_4; }
	inline void set_minValue_4(Il2CppObject * value)
	{
		___minValue_4 = value;
		Il2CppCodeGenWriteBarrier(&___minValue_4, value);
	}

	inline static int32_t get_offset_of_maxValue_5() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t2110704064, ___maxValue_5)); }
	inline Il2CppObject * get_maxValue_5() const { return ___maxValue_5; }
	inline Il2CppObject ** get_address_of_maxValue_5() { return &___maxValue_5; }
	inline void set_maxValue_5(Il2CppObject * value)
	{
		___maxValue_5 = value;
		Il2CppCodeGenWriteBarrier(&___maxValue_5, value);
	}

	inline static int32_t get_offset_of_persistentValue_6() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t2110704064, ___persistentValue_6)); }
	inline Il2CppObject * get_persistentValue_6() const { return ___persistentValue_6; }
	inline Il2CppObject ** get_address_of_persistentValue_6() { return &___persistentValue_6; }
	inline void set_persistentValue_6(Il2CppObject * value)
	{
		___persistentValue_6 = value;
		Il2CppCodeGenWriteBarrier(&___persistentValue_6, value);
	}

	inline static int32_t get_offset_of_enumInfo_7() { return static_cast<int32_t>(offsetof(DiagnosticSwitch_t2110704064, ___enumInfo_7)); }
	inline EnumInfo_t93260550 * get_enumInfo_7() const { return ___enumInfo_7; }
	inline EnumInfo_t93260550 ** get_address_of_enumInfo_7() { return &___enumInfo_7; }
	inline void set_enumInfo_7(EnumInfo_t93260550 * value)
	{
		___enumInfo_7 = value;
		Il2CppCodeGenWriteBarrier(&___enumInfo_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.DiagnosticSwitch
struct DiagnosticSwitch_t2110704064_marshaled_pinvoke
{
	char* ___name_0;
	char* ___description_1;
	int32_t ___flags_2;
	Il2CppIUnknown* ___value_3;
	Il2CppIUnknown* ___minValue_4;
	Il2CppIUnknown* ___maxValue_5;
	Il2CppIUnknown* ___persistentValue_6;
	EnumInfo_t93260550 * ___enumInfo_7;
};
// Native definition for COM marshalling of UnityEngine.DiagnosticSwitch
struct DiagnosticSwitch_t2110704064_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___description_1;
	int32_t ___flags_2;
	Il2CppIUnknown* ___value_3;
	Il2CppIUnknown* ___minValue_4;
	Il2CppIUnknown* ___maxValue_5;
	Il2CppIUnknown* ___persistentValue_6;
	EnumInfo_t93260550 * ___enumInfo_7;
};
