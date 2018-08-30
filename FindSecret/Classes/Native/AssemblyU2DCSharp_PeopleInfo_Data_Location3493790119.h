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

// PeopleInfo/Data/Location
struct  Location_t3493790119  : public Il2CppObject
{
public:
	// System.String PeopleInfo/Data/Location::<latitude>k__BackingField
	String_t* ___U3ClatitudeU3Ek__BackingField_0;
	// System.String PeopleInfo/Data/Location::<longitude>k__BackingField
	String_t* ___U3ClongitudeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3ClatitudeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Location_t3493790119, ___U3ClatitudeU3Ek__BackingField_0)); }
	inline String_t* get_U3ClatitudeU3Ek__BackingField_0() const { return ___U3ClatitudeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3ClatitudeU3Ek__BackingField_0() { return &___U3ClatitudeU3Ek__BackingField_0; }
	inline void set_U3ClatitudeU3Ek__BackingField_0(String_t* value)
	{
		___U3ClatitudeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3ClatitudeU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3ClongitudeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Location_t3493790119, ___U3ClongitudeU3Ek__BackingField_1)); }
	inline String_t* get_U3ClongitudeU3Ek__BackingField_1() const { return ___U3ClongitudeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3ClongitudeU3Ek__BackingField_1() { return &___U3ClongitudeU3Ek__BackingField_1; }
	inline void set_U3ClongitudeU3Ek__BackingField_1(String_t* value)
	{
		___U3ClongitudeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3ClongitudeU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
