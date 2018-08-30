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
// ProtoBuf.IExtension
struct IExtension_t3291225028;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// message.Location
struct  Location_t880560587  : public Il2CppObject
{
public:
	// System.String message.Location::_longitude
	String_t* ____longitude_0;
	// System.String message.Location::_latitude
	String_t* ____latitude_1;
	// ProtoBuf.IExtension message.Location::extensionObject
	Il2CppObject * ___extensionObject_2;

public:
	inline static int32_t get_offset_of__longitude_0() { return static_cast<int32_t>(offsetof(Location_t880560587, ____longitude_0)); }
	inline String_t* get__longitude_0() const { return ____longitude_0; }
	inline String_t** get_address_of__longitude_0() { return &____longitude_0; }
	inline void set__longitude_0(String_t* value)
	{
		____longitude_0 = value;
		Il2CppCodeGenWriteBarrier(&____longitude_0, value);
	}

	inline static int32_t get_offset_of__latitude_1() { return static_cast<int32_t>(offsetof(Location_t880560587, ____latitude_1)); }
	inline String_t* get__latitude_1() const { return ____latitude_1; }
	inline String_t** get_address_of__latitude_1() { return &____latitude_1; }
	inline void set__latitude_1(String_t* value)
	{
		____latitude_1 = value;
		Il2CppCodeGenWriteBarrier(&____latitude_1, value);
	}

	inline static int32_t get_offset_of_extensionObject_2() { return static_cast<int32_t>(offsetof(Location_t880560587, ___extensionObject_2)); }
	inline Il2CppObject * get_extensionObject_2() const { return ___extensionObject_2; }
	inline Il2CppObject ** get_address_of_extensionObject_2() { return &___extensionObject_2; }
	inline void set_extensionObject_2(Il2CppObject * value)
	{
		___extensionObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
