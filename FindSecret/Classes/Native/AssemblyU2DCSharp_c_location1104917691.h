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

// c_location
struct  c_location_t1104917691  : public Il2CppObject
{
public:
	// System.String c_location::longitude
	String_t* ___longitude_0;
	// System.String c_location::latitude
	String_t* ___latitude_1;

public:
	inline static int32_t get_offset_of_longitude_0() { return static_cast<int32_t>(offsetof(c_location_t1104917691, ___longitude_0)); }
	inline String_t* get_longitude_0() const { return ___longitude_0; }
	inline String_t** get_address_of_longitude_0() { return &___longitude_0; }
	inline void set_longitude_0(String_t* value)
	{
		___longitude_0 = value;
		Il2CppCodeGenWriteBarrier(&___longitude_0, value);
	}

	inline static int32_t get_offset_of_latitude_1() { return static_cast<int32_t>(offsetof(c_location_t1104917691, ___latitude_1)); }
	inline String_t* get_latitude_1() const { return ___latitude_1; }
	inline String_t** get_address_of_latitude_1() { return &___latitude_1; }
	inline void set_latitude_1(String_t* value)
	{
		___latitude_1 = value;
		Il2CppCodeGenWriteBarrier(&___latitude_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
