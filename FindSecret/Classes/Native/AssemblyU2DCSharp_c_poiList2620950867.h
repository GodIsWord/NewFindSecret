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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// c_poiList
struct  c_poiList_t2620950867  : public Il2CppObject
{
public:
	// System.String c_poiList::name
	String_t* ___name_0;
	// System.String c_poiList::type
	String_t* ___type_1;
	// System.String c_poiList::typecode
	String_t* ___typecode_2;
	// System.String c_poiList::location
	String_t* ___location_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(c_poiList_t2620950867, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(c_poiList_t2620950867, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_typecode_2() { return static_cast<int32_t>(offsetof(c_poiList_t2620950867, ___typecode_2)); }
	inline String_t* get_typecode_2() const { return ___typecode_2; }
	inline String_t** get_address_of_typecode_2() { return &___typecode_2; }
	inline void set_typecode_2(String_t* value)
	{
		___typecode_2 = value;
		Il2CppCodeGenWriteBarrier(&___typecode_2, value);
	}

	inline static int32_t get_offset_of_location_3() { return static_cast<int32_t>(offsetof(c_poiList_t2620950867, ___location_3)); }
	inline String_t* get_location_3() const { return ___location_3; }
	inline String_t** get_address_of_location_3() { return &___location_3; }
	inline void set_location_3(String_t* value)
	{
		___location_3 = value;
		Il2CppCodeGenWriteBarrier(&___location_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
