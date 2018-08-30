#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// N_JsonData
struct N_JsonData_t1446504119;
// System.String
struct String_t;
// N_JsonData/N_Data
struct N_Data_t517852244;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// N_JsonData
struct  N_JsonData_t1446504119  : public Il2CppObject
{
public:
	// System.String N_JsonData::_JsonData
	String_t* ____JsonData_1;

public:
	inline static int32_t get_offset_of__JsonData_1() { return static_cast<int32_t>(offsetof(N_JsonData_t1446504119, ____JsonData_1)); }
	inline String_t* get__JsonData_1() const { return ____JsonData_1; }
	inline String_t** get_address_of__JsonData_1() { return &____JsonData_1; }
	inline void set__JsonData_1(String_t* value)
	{
		____JsonData_1 = value;
		Il2CppCodeGenWriteBarrier(&____JsonData_1, value);
	}
};

struct N_JsonData_t1446504119_StaticFields
{
public:
	// N_JsonData N_JsonData::_N_JsonData
	N_JsonData_t1446504119 * ____N_JsonData_0;
	// N_JsonData/N_Data N_JsonData::NData
	N_Data_t517852244 * ___NData_2;

public:
	inline static int32_t get_offset_of__N_JsonData_0() { return static_cast<int32_t>(offsetof(N_JsonData_t1446504119_StaticFields, ____N_JsonData_0)); }
	inline N_JsonData_t1446504119 * get__N_JsonData_0() const { return ____N_JsonData_0; }
	inline N_JsonData_t1446504119 ** get_address_of__N_JsonData_0() { return &____N_JsonData_0; }
	inline void set__N_JsonData_0(N_JsonData_t1446504119 * value)
	{
		____N_JsonData_0 = value;
		Il2CppCodeGenWriteBarrier(&____N_JsonData_0, value);
	}

	inline static int32_t get_offset_of_NData_2() { return static_cast<int32_t>(offsetof(N_JsonData_t1446504119_StaticFields, ___NData_2)); }
	inline N_Data_t517852244 * get_NData_2() const { return ___NData_2; }
	inline N_Data_t517852244 ** get_address_of_NData_2() { return &___NData_2; }
	inline void set_NData_2(N_Data_t517852244 * value)
	{
		___NData_2 = value;
		Il2CppCodeGenWriteBarrier(&___NData_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
