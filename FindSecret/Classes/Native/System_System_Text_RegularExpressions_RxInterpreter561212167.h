﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// System.Int32[]
struct Int32U5BU5D_t385246372;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RxInterpreter/IntStack
struct  IntStack_t561212167 
{
public:
	// System.Int32[] System.Text.RegularExpressions.RxInterpreter/IntStack::values
	Int32U5BU5D_t385246372* ___values_0;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter/IntStack::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(IntStack_t561212167, ___values_0)); }
	inline Int32U5BU5D_t385246372* get_values_0() const { return ___values_0; }
	inline Int32U5BU5D_t385246372** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(Int32U5BU5D_t385246372* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier(&___values_0, value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(IntStack_t561212167, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.RxInterpreter/IntStack
struct IntStack_t561212167_marshaled_pinvoke
{
	int32_t* ___values_0;
	int32_t ___count_1;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.RxInterpreter/IntStack
struct IntStack_t561212167_marshaled_com
{
	int32_t* ___values_0;
	int32_t ___count_1;
};
