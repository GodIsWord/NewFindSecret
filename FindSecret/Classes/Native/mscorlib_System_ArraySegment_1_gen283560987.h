﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArraySegment`1<System.Byte>
struct  ArraySegment_1_t283560987 
{
public:
	// T[] System.ArraySegment`1::array
	ByteU5BU5D_t4116647657* ___array_0;
	// System.Int32 System.ArraySegment`1::offset
	int32_t ___offset_1;
	// System.Int32 System.ArraySegment`1::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t283560987, ___array_0)); }
	inline ByteU5BU5D_t4116647657* get_array_0() const { return ___array_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(ByteU5BU5D_t4116647657* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier(&___array_0, value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t283560987, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t283560987, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif