#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "mscorlib_System_Reflection_Emit_Label2281661643.h"

// System.Reflection.Emit.ILExceptionBlock[]
struct ILExceptionBlockU5BU5D_t2996808915;
struct ILExceptionBlock_t3961874966_marshaled_pinvoke;
struct ILExceptionBlock_t3961874966_marshaled_com;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILExceptionInfo
struct  ILExceptionInfo_t237856010 
{
public:
	// System.Reflection.Emit.ILExceptionBlock[] System.Reflection.Emit.ILExceptionInfo::handlers
	ILExceptionBlockU5BU5D_t2996808915* ___handlers_0;
	// System.Int32 System.Reflection.Emit.ILExceptionInfo::start
	int32_t ___start_1;
	// System.Int32 System.Reflection.Emit.ILExceptionInfo::len
	int32_t ___len_2;
	// System.Reflection.Emit.Label System.Reflection.Emit.ILExceptionInfo::end
	Label_t2281661643  ___end_3;

public:
	inline static int32_t get_offset_of_handlers_0() { return static_cast<int32_t>(offsetof(ILExceptionInfo_t237856010, ___handlers_0)); }
	inline ILExceptionBlockU5BU5D_t2996808915* get_handlers_0() const { return ___handlers_0; }
	inline ILExceptionBlockU5BU5D_t2996808915** get_address_of_handlers_0() { return &___handlers_0; }
	inline void set_handlers_0(ILExceptionBlockU5BU5D_t2996808915* value)
	{
		___handlers_0 = value;
		Il2CppCodeGenWriteBarrier(&___handlers_0, value);
	}

	inline static int32_t get_offset_of_start_1() { return static_cast<int32_t>(offsetof(ILExceptionInfo_t237856010, ___start_1)); }
	inline int32_t get_start_1() const { return ___start_1; }
	inline int32_t* get_address_of_start_1() { return &___start_1; }
	inline void set_start_1(int32_t value)
	{
		___start_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(ILExceptionInfo_t237856010, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_end_3() { return static_cast<int32_t>(offsetof(ILExceptionInfo_t237856010, ___end_3)); }
	inline Label_t2281661643  get_end_3() const { return ___end_3; }
	inline Label_t2281661643 * get_address_of_end_3() { return &___end_3; }
	inline void set_end_3(Label_t2281661643  value)
	{
		___end_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.ILExceptionInfo
struct ILExceptionInfo_t237856010_marshaled_pinvoke
{
	ILExceptionBlock_t3961874966_marshaled_pinvoke* ___handlers_0;
	int32_t ___start_1;
	int32_t ___len_2;
	Label_t2281661643  ___end_3;
};
// Native definition for COM marshalling of System.Reflection.Emit.ILExceptionInfo
struct ILExceptionInfo_t237856010_marshaled_com
{
	ILExceptionBlock_t3961874966_marshaled_com* ___handlers_0;
	int32_t ___start_1;
	int32_t ___len_2;
	Label_t2281661643  ___end_3;
};
