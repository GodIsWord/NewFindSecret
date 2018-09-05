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

// N_JsonData/c_polyline
struct  c_polyline_t1459694163  : public Il2CppObject
{
public:
	// System.String N_JsonData/c_polyline::latitude
	String_t* ___latitude_0;
	// System.String N_JsonData/c_polyline::longitude
	String_t* ___longitude_1;

public:
	inline static int32_t get_offset_of_latitude_0() { return static_cast<int32_t>(offsetof(c_polyline_t1459694163, ___latitude_0)); }
	inline String_t* get_latitude_0() const { return ___latitude_0; }
	inline String_t** get_address_of_latitude_0() { return &___latitude_0; }
	inline void set_latitude_0(String_t* value)
	{
		___latitude_0 = value;
		Il2CppCodeGenWriteBarrier(&___latitude_0, value);
	}

	inline static int32_t get_offset_of_longitude_1() { return static_cast<int32_t>(offsetof(c_polyline_t1459694163, ___longitude_1)); }
	inline String_t* get_longitude_1() const { return ___longitude_1; }
	inline String_t** get_address_of_longitude_1() { return &___longitude_1; }
	inline void set_longitude_1(String_t* value)
	{
		___longitude_1 = value;
		Il2CppCodeGenWriteBarrier(&___longitude_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
