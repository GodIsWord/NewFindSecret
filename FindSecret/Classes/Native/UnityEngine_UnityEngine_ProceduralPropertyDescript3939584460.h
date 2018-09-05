#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "UnityEngine_UnityEngine_ProceduralPropertyType1677522055.h"

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ProceduralPropertyDescription
struct  ProceduralPropertyDescription_t3939584460  : public Il2CppObject
{
public:
	// System.String UnityEngine.ProceduralPropertyDescription::name
	String_t* ___name_0;
	// System.String UnityEngine.ProceduralPropertyDescription::label
	String_t* ___label_1;
	// System.String UnityEngine.ProceduralPropertyDescription::group
	String_t* ___group_2;
	// UnityEngine.ProceduralPropertyType UnityEngine.ProceduralPropertyDescription::type
	int32_t ___type_3;
	// System.Boolean UnityEngine.ProceduralPropertyDescription::hasRange
	bool ___hasRange_4;
	// System.Single UnityEngine.ProceduralPropertyDescription::minimum
	float ___minimum_5;
	// System.Single UnityEngine.ProceduralPropertyDescription::maximum
	float ___maximum_6;
	// System.Single UnityEngine.ProceduralPropertyDescription::step
	float ___step_7;
	// System.String[] UnityEngine.ProceduralPropertyDescription::enumOptions
	StringU5BU5D_t1281789340* ___enumOptions_8;
	// System.String[] UnityEngine.ProceduralPropertyDescription::componentLabels
	StringU5BU5D_t1281789340* ___componentLabels_9;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ProceduralPropertyDescription_t3939584460, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_label_1() { return static_cast<int32_t>(offsetof(ProceduralPropertyDescription_t3939584460, ___label_1)); }
	inline String_t* get_label_1() const { return ___label_1; }
	inline String_t** get_address_of_label_1() { return &___label_1; }
	inline void set_label_1(String_t* value)
	{
		___label_1 = value;
		Il2CppCodeGenWriteBarrier(&___label_1, value);
	}

	inline static int32_t get_offset_of_group_2() { return static_cast<int32_t>(offsetof(ProceduralPropertyDescription_t3939584460, ___group_2)); }
	inline String_t* get_group_2() const { return ___group_2; }
	inline String_t** get_address_of_group_2() { return &___group_2; }
	inline void set_group_2(String_t* value)
	{
		___group_2 = value;
		Il2CppCodeGenWriteBarrier(&___group_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(ProceduralPropertyDescription_t3939584460, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_hasRange_4() { return static_cast<int32_t>(offsetof(ProceduralPropertyDescription_t3939584460, ___hasRange_4)); }
	inline bool get_hasRange_4() const { return ___hasRange_4; }
	inline bool* get_address_of_hasRange_4() { return &___hasRange_4; }
	inline void set_hasRange_4(bool value)
	{
		___hasRange_4 = value;
	}

	inline static int32_t get_offset_of_minimum_5() { return static_cast<int32_t>(offsetof(ProceduralPropertyDescription_t3939584460, ___minimum_5)); }
	inline float get_minimum_5() const { return ___minimum_5; }
	inline float* get_address_of_minimum_5() { return &___minimum_5; }
	inline void set_minimum_5(float value)
	{
		___minimum_5 = value;
	}

	inline static int32_t get_offset_of_maximum_6() { return static_cast<int32_t>(offsetof(ProceduralPropertyDescription_t3939584460, ___maximum_6)); }
	inline float get_maximum_6() const { return ___maximum_6; }
	inline float* get_address_of_maximum_6() { return &___maximum_6; }
	inline void set_maximum_6(float value)
	{
		___maximum_6 = value;
	}

	inline static int32_t get_offset_of_step_7() { return static_cast<int32_t>(offsetof(ProceduralPropertyDescription_t3939584460, ___step_7)); }
	inline float get_step_7() const { return ___step_7; }
	inline float* get_address_of_step_7() { return &___step_7; }
	inline void set_step_7(float value)
	{
		___step_7 = value;
	}

	inline static int32_t get_offset_of_enumOptions_8() { return static_cast<int32_t>(offsetof(ProceduralPropertyDescription_t3939584460, ___enumOptions_8)); }
	inline StringU5BU5D_t1281789340* get_enumOptions_8() const { return ___enumOptions_8; }
	inline StringU5BU5D_t1281789340** get_address_of_enumOptions_8() { return &___enumOptions_8; }
	inline void set_enumOptions_8(StringU5BU5D_t1281789340* value)
	{
		___enumOptions_8 = value;
		Il2CppCodeGenWriteBarrier(&___enumOptions_8, value);
	}

	inline static int32_t get_offset_of_componentLabels_9() { return static_cast<int32_t>(offsetof(ProceduralPropertyDescription_t3939584460, ___componentLabels_9)); }
	inline StringU5BU5D_t1281789340* get_componentLabels_9() const { return ___componentLabels_9; }
	inline StringU5BU5D_t1281789340** get_address_of_componentLabels_9() { return &___componentLabels_9; }
	inline void set_componentLabels_9(StringU5BU5D_t1281789340* value)
	{
		___componentLabels_9 = value;
		Il2CppCodeGenWriteBarrier(&___componentLabels_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ProceduralPropertyDescription
struct ProceduralPropertyDescription_t3939584460_marshaled_pinvoke
{
	char* ___name_0;
	char* ___label_1;
	char* ___group_2;
	int32_t ___type_3;
	int32_t ___hasRange_4;
	float ___minimum_5;
	float ___maximum_6;
	float ___step_7;
	char** ___enumOptions_8;
	char** ___componentLabels_9;
};
// Native definition for COM marshalling of UnityEngine.ProceduralPropertyDescription
struct ProceduralPropertyDescription_t3939584460_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___label_1;
	Il2CppChar* ___group_2;
	int32_t ___type_3;
	int32_t ___hasRange_4;
	float ___minimum_5;
	float ___maximum_6;
	float ___step_7;
	Il2CppChar** ___enumOptions_8;
	Il2CppChar** ___componentLabels_9;
};
