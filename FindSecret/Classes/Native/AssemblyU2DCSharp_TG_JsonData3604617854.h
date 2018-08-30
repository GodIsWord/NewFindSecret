#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// TG_JsonData
struct TG_JsonData_t3604617854;
// System.String
struct String_t;
// TG_Data
struct TG_Data_t3968433373;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TG_JsonData
struct  TG_JsonData_t3604617854  : public Il2CppObject
{
public:
	// System.String TG_JsonData::_JsonData
	String_t* ____JsonData_1;

public:
	inline static int32_t get_offset_of__JsonData_1() { return static_cast<int32_t>(offsetof(TG_JsonData_t3604617854, ____JsonData_1)); }
	inline String_t* get__JsonData_1() const { return ____JsonData_1; }
	inline String_t** get_address_of__JsonData_1() { return &____JsonData_1; }
	inline void set__JsonData_1(String_t* value)
	{
		____JsonData_1 = value;
		Il2CppCodeGenWriteBarrier(&____JsonData_1, value);
	}
};

struct TG_JsonData_t3604617854_StaticFields
{
public:
	// TG_JsonData TG_JsonData::_TG_JsonData
	TG_JsonData_t3604617854 * ____TG_JsonData_0;
	// TG_Data TG_JsonData::TGData
	TG_Data_t3968433373 * ___TGData_2;

public:
	inline static int32_t get_offset_of__TG_JsonData_0() { return static_cast<int32_t>(offsetof(TG_JsonData_t3604617854_StaticFields, ____TG_JsonData_0)); }
	inline TG_JsonData_t3604617854 * get__TG_JsonData_0() const { return ____TG_JsonData_0; }
	inline TG_JsonData_t3604617854 ** get_address_of__TG_JsonData_0() { return &____TG_JsonData_0; }
	inline void set__TG_JsonData_0(TG_JsonData_t3604617854 * value)
	{
		____TG_JsonData_0 = value;
		Il2CppCodeGenWriteBarrier(&____TG_JsonData_0, value);
	}

	inline static int32_t get_offset_of_TGData_2() { return static_cast<int32_t>(offsetof(TG_JsonData_t3604617854_StaticFields, ___TGData_2)); }
	inline TG_Data_t3968433373 * get_TGData_2() const { return ___TGData_2; }
	inline TG_Data_t3968433373 ** get_address_of_TGData_2() { return &___TGData_2; }
	inline void set_TGData_2(TG_Data_t3968433373 * value)
	{
		___TGData_2 = value;
		Il2CppCodeGenWriteBarrier(&___TGData_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
