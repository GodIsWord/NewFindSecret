#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// N_JsonData/c_destination
struct c_destination_t2766511879;
// N_JsonData/c_origin
struct c_origin_t2694173588;
// N_JsonData/c_step[]
struct c_stepU5BU5D_t1173698039;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// N_JsonData/N_Data
struct  N_Data_t517852244  : public Il2CppObject
{
public:
	// N_JsonData/c_destination N_JsonData/N_Data::destination
	c_destination_t2766511879 * ___destination_0;
	// N_JsonData/c_origin N_JsonData/N_Data::origin
	c_origin_t2694173588 * ___origin_1;
	// N_JsonData/c_step[] N_JsonData/N_Data::steps
	c_stepU5BU5D_t1173698039* ___steps_2;

public:
	inline static int32_t get_offset_of_destination_0() { return static_cast<int32_t>(offsetof(N_Data_t517852244, ___destination_0)); }
	inline c_destination_t2766511879 * get_destination_0() const { return ___destination_0; }
	inline c_destination_t2766511879 ** get_address_of_destination_0() { return &___destination_0; }
	inline void set_destination_0(c_destination_t2766511879 * value)
	{
		___destination_0 = value;
		Il2CppCodeGenWriteBarrier(&___destination_0, value);
	}

	inline static int32_t get_offset_of_origin_1() { return static_cast<int32_t>(offsetof(N_Data_t517852244, ___origin_1)); }
	inline c_origin_t2694173588 * get_origin_1() const { return ___origin_1; }
	inline c_origin_t2694173588 ** get_address_of_origin_1() { return &___origin_1; }
	inline void set_origin_1(c_origin_t2694173588 * value)
	{
		___origin_1 = value;
		Il2CppCodeGenWriteBarrier(&___origin_1, value);
	}

	inline static int32_t get_offset_of_steps_2() { return static_cast<int32_t>(offsetof(N_Data_t517852244, ___steps_2)); }
	inline c_stepU5BU5D_t1173698039* get_steps_2() const { return ___steps_2; }
	inline c_stepU5BU5D_t1173698039** get_address_of_steps_2() { return &___steps_2; }
	inline void set_steps_2(c_stepU5BU5D_t1173698039* value)
	{
		___steps_2 = value;
		Il2CppCodeGenWriteBarrier(&___steps_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
