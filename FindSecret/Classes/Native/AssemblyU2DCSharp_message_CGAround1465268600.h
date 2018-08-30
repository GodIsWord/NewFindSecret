#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// message.Location
struct Location_t880560587;
// System.Collections.Generic.List`1<message.POIType>
struct List_1_t3917903508;
// ProtoBuf.IExtension
struct IExtension_t3291225028;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// message.CGAround
struct  CGAround_t1465268600  : public Il2CppObject
{
public:
	// message.Location message.CGAround::_gpsLocation
	Location_t880560587 * ____gpsLocation_0;
	// System.Collections.Generic.List`1<message.POIType> message.CGAround::_types
	List_1_t3917903508 * ____types_1;
	// System.Int32 message.CGAround::_radius
	int32_t ____radius_2;
	// ProtoBuf.IExtension message.CGAround::extensionObject
	Il2CppObject * ___extensionObject_3;

public:
	inline static int32_t get_offset_of__gpsLocation_0() { return static_cast<int32_t>(offsetof(CGAround_t1465268600, ____gpsLocation_0)); }
	inline Location_t880560587 * get__gpsLocation_0() const { return ____gpsLocation_0; }
	inline Location_t880560587 ** get_address_of__gpsLocation_0() { return &____gpsLocation_0; }
	inline void set__gpsLocation_0(Location_t880560587 * value)
	{
		____gpsLocation_0 = value;
		Il2CppCodeGenWriteBarrier(&____gpsLocation_0, value);
	}

	inline static int32_t get_offset_of__types_1() { return static_cast<int32_t>(offsetof(CGAround_t1465268600, ____types_1)); }
	inline List_1_t3917903508 * get__types_1() const { return ____types_1; }
	inline List_1_t3917903508 ** get_address_of__types_1() { return &____types_1; }
	inline void set__types_1(List_1_t3917903508 * value)
	{
		____types_1 = value;
		Il2CppCodeGenWriteBarrier(&____types_1, value);
	}

	inline static int32_t get_offset_of__radius_2() { return static_cast<int32_t>(offsetof(CGAround_t1465268600, ____radius_2)); }
	inline int32_t get__radius_2() const { return ____radius_2; }
	inline int32_t* get_address_of__radius_2() { return &____radius_2; }
	inline void set__radius_2(int32_t value)
	{
		____radius_2 = value;
	}

	inline static int32_t get_offset_of_extensionObject_3() { return static_cast<int32_t>(offsetof(CGAround_t1465268600, ___extensionObject_3)); }
	inline Il2CppObject * get_extensionObject_3() const { return ___extensionObject_3; }
	inline Il2CppObject ** get_address_of_extensionObject_3() { return &___extensionObject_3; }
	inline void set_extensionObject_3(Il2CppObject * value)
	{
		___extensionObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
