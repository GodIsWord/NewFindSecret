﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute861562559.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Bindings.NativeConditionalAttribute
struct  NativeConditionalAttribute_t2223307045  : public Attribute_t861562559
{
public:
	// System.String Unity.Bindings.NativeConditionalAttribute::<Condition>k__BackingField
	String_t* ___U3CConditionU3Ek__BackingField_0;
	// System.Boolean Unity.Bindings.NativeConditionalAttribute::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CConditionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeConditionalAttribute_t2223307045, ___U3CConditionU3Ek__BackingField_0)); }
	inline String_t* get_U3CConditionU3Ek__BackingField_0() const { return ___U3CConditionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CConditionU3Ek__BackingField_0() { return &___U3CConditionU3Ek__BackingField_0; }
	inline void set_U3CConditionU3Ek__BackingField_0(String_t* value)
	{
		___U3CConditionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConditionU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NativeConditionalAttribute_t2223307045, ___U3CEnabledU3Ek__BackingField_1)); }
	inline bool get_U3CEnabledU3Ek__BackingField_1() const { return ___U3CEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_1() { return &___U3CEnabledU3Ek__BackingField_1; }
	inline void set_U3CEnabledU3Ek__BackingField_1(bool value)
	{
		___U3CEnabledU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
