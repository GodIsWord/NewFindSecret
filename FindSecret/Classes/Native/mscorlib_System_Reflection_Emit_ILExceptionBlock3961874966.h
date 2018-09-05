#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILExceptionBlock
struct  ILExceptionBlock_t3961874966 
{
public:
	// System.Type System.Reflection.Emit.ILExceptionBlock::extype
	Type_t * ___extype_0;
	// System.Int32 System.Reflection.Emit.ILExceptionBlock::type
	int32_t ___type_1;
	// System.Int32 System.Reflection.Emit.ILExceptionBlock::start
	int32_t ___start_2;
	// System.Int32 System.Reflection.Emit.ILExceptionBlock::len
	int32_t ___len_3;
	// System.Int32 System.Reflection.Emit.ILExceptionBlock::filter_offset
	int32_t ___filter_offset_4;

public:
	inline static int32_t get_offset_of_extype_0() { return static_cast<int32_t>(offsetof(ILExceptionBlock_t3961874966, ___extype_0)); }
	inline Type_t * get_extype_0() const { return ___extype_0; }
	inline Type_t ** get_address_of_extype_0() { return &___extype_0; }
	inline void set_extype_0(Type_t * value)
	{
		___extype_0 = value;
		Il2CppCodeGenWriteBarrier(&___extype_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ILExceptionBlock_t3961874966, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_start_2() { return static_cast<int32_t>(offsetof(ILExceptionBlock_t3961874966, ___start_2)); }
	inline int32_t get_start_2() const { return ___start_2; }
	inline int32_t* get_address_of_start_2() { return &___start_2; }
	inline void set_start_2(int32_t value)
	{
		___start_2 = value;
	}

	inline static int32_t get_offset_of_len_3() { return static_cast<int32_t>(offsetof(ILExceptionBlock_t3961874966, ___len_3)); }
	inline int32_t get_len_3() const { return ___len_3; }
	inline int32_t* get_address_of_len_3() { return &___len_3; }
	inline void set_len_3(int32_t value)
	{
		___len_3 = value;
	}

	inline static int32_t get_offset_of_filter_offset_4() { return static_cast<int32_t>(offsetof(ILExceptionBlock_t3961874966, ___filter_offset_4)); }
	inline int32_t get_filter_offset_4() const { return ___filter_offset_4; }
	inline int32_t* get_address_of_filter_offset_4() { return &___filter_offset_4; }
	inline void set_filter_offset_4(int32_t value)
	{
		___filter_offset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.ILExceptionBlock
struct ILExceptionBlock_t3961874966_marshaled_pinvoke
{
	Type_t * ___extype_0;
	int32_t ___type_1;
	int32_t ___start_2;
	int32_t ___len_3;
	int32_t ___filter_offset_4;
};
// Native definition for COM marshalling of System.Reflection.Emit.ILExceptionBlock
struct ILExceptionBlock_t3961874966_marshaled_com
{
	Type_t * ___extype_0;
	int32_t ___type_1;
	int32_t ___start_2;
	int32_t ___len_3;
	int32_t ___filter_offset_4;
};
