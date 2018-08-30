#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<PeopleInfo/Data>
struct List_1_t4036517173;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PeopleInfo
struct  PeopleInfo_t3854324837  : public Il2CppObject
{
public:
	// System.String PeopleInfo::code
	String_t* ___code_0;
	// System.String PeopleInfo::msg
	String_t* ___msg_1;
	// System.Collections.Generic.List`1<PeopleInfo/Data> PeopleInfo::data
	List_1_t4036517173 * ___data_2;

public:
	inline static int32_t get_offset_of_code_0() { return static_cast<int32_t>(offsetof(PeopleInfo_t3854324837, ___code_0)); }
	inline String_t* get_code_0() const { return ___code_0; }
	inline String_t** get_address_of_code_0() { return &___code_0; }
	inline void set_code_0(String_t* value)
	{
		___code_0 = value;
		Il2CppCodeGenWriteBarrier(&___code_0, value);
	}

	inline static int32_t get_offset_of_msg_1() { return static_cast<int32_t>(offsetof(PeopleInfo_t3854324837, ___msg_1)); }
	inline String_t* get_msg_1() const { return ___msg_1; }
	inline String_t** get_address_of_msg_1() { return &___msg_1; }
	inline void set_msg_1(String_t* value)
	{
		___msg_1 = value;
		Il2CppCodeGenWriteBarrier(&___msg_1, value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(PeopleInfo_t3854324837, ___data_2)); }
	inline List_1_t4036517173 * get_data_2() const { return ___data_2; }
	inline List_1_t4036517173 ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(List_1_t4036517173 * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier(&___data_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
