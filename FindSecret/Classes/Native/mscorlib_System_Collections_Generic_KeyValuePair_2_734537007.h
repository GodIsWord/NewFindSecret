#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// A.m
struct m_t2556790365;
// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<A.m,System.Byte[]>
struct  KeyValuePair_2_t734537007 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	m_t2556790365 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ByteU5BU5D_t4116647657* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t734537007, ___key_0)); }
	inline m_t2556790365 * get_key_0() const { return ___key_0; }
	inline m_t2556790365 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(m_t2556790365 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t734537007, ___value_1)); }
	inline ByteU5BU5D_t4116647657* get_value_1() const { return ___value_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ByteU5BU5D_t4116647657* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
