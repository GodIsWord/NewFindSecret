#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// N_JsonData/c_polyline[]
struct c_polylineU5BU5D_t2480257794;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// N_JsonData/c_step
struct  c_step_t604841154  : public Il2CppObject
{
public:
	// System.Int32 N_JsonData/c_step::distance
	int32_t ___distance_0;
	// N_JsonData/c_polyline[] N_JsonData/c_step::polylines
	c_polylineU5BU5D_t2480257794* ___polylines_1;

public:
	inline static int32_t get_offset_of_distance_0() { return static_cast<int32_t>(offsetof(c_step_t604841154, ___distance_0)); }
	inline int32_t get_distance_0() const { return ___distance_0; }
	inline int32_t* get_address_of_distance_0() { return &___distance_0; }
	inline void set_distance_0(int32_t value)
	{
		___distance_0 = value;
	}

	inline static int32_t get_offset_of_polylines_1() { return static_cast<int32_t>(offsetof(c_step_t604841154, ___polylines_1)); }
	inline c_polylineU5BU5D_t2480257794* get_polylines_1() const { return ___polylines_1; }
	inline c_polylineU5BU5D_t2480257794** get_address_of_polylines_1() { return &___polylines_1; }
	inline void set_polylines_1(c_polylineU5BU5D_t2480257794* value)
	{
		___polylines_1 = value;
		Il2CppCodeGenWriteBarrier(&___polylines_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
