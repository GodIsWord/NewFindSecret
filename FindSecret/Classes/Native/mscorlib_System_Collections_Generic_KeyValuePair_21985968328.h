﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// message.POIData
struct POIData_t2628924658;
// UnityEngine.GameObject
struct GameObject_t1113636619;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<message.POIData,UnityEngine.GameObject>
struct  KeyValuePair_2_t1985968328 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	POIData_t2628924658 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GameObject_t1113636619 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1985968328, ___key_0)); }
	inline POIData_t2628924658 * get_key_0() const { return ___key_0; }
	inline POIData_t2628924658 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(POIData_t2628924658 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1985968328, ___value_1)); }
	inline GameObject_t1113636619 * get_value_1() const { return ___value_1; }
	inline GameObject_t1113636619 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(GameObject_t1113636619 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif