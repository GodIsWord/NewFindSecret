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
// System.Collections.Generic.List`1<message.DirectionWalkingPath>
struct List_1_t1694341897;
// ProtoBuf.IExtension
struct IExtension_t3291225028;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// message.DirectionWalkingRoute
struct  DirectionWalkingRoute_t1612066669  : public Il2CppObject
{
public:
	// message.Location message.DirectionWalkingRoute::_originLocation
	Location_t880560587 * ____originLocation_0;
	// message.Location message.DirectionWalkingRoute::_destinationLocation
	Location_t880560587 * ____destinationLocation_1;
	// System.Collections.Generic.List`1<message.DirectionWalkingPath> message.DirectionWalkingRoute::_path
	List_1_t1694341897 * ____path_2;
	// ProtoBuf.IExtension message.DirectionWalkingRoute::extensionObject
	Il2CppObject * ___extensionObject_3;

public:
	inline static int32_t get_offset_of__originLocation_0() { return static_cast<int32_t>(offsetof(DirectionWalkingRoute_t1612066669, ____originLocation_0)); }
	inline Location_t880560587 * get__originLocation_0() const { return ____originLocation_0; }
	inline Location_t880560587 ** get_address_of__originLocation_0() { return &____originLocation_0; }
	inline void set__originLocation_0(Location_t880560587 * value)
	{
		____originLocation_0 = value;
		Il2CppCodeGenWriteBarrier(&____originLocation_0, value);
	}

	inline static int32_t get_offset_of__destinationLocation_1() { return static_cast<int32_t>(offsetof(DirectionWalkingRoute_t1612066669, ____destinationLocation_1)); }
	inline Location_t880560587 * get__destinationLocation_1() const { return ____destinationLocation_1; }
	inline Location_t880560587 ** get_address_of__destinationLocation_1() { return &____destinationLocation_1; }
	inline void set__destinationLocation_1(Location_t880560587 * value)
	{
		____destinationLocation_1 = value;
		Il2CppCodeGenWriteBarrier(&____destinationLocation_1, value);
	}

	inline static int32_t get_offset_of__path_2() { return static_cast<int32_t>(offsetof(DirectionWalkingRoute_t1612066669, ____path_2)); }
	inline List_1_t1694341897 * get__path_2() const { return ____path_2; }
	inline List_1_t1694341897 ** get_address_of__path_2() { return &____path_2; }
	inline void set__path_2(List_1_t1694341897 * value)
	{
		____path_2 = value;
		Il2CppCodeGenWriteBarrier(&____path_2, value);
	}

	inline static int32_t get_offset_of_extensionObject_3() { return static_cast<int32_t>(offsetof(DirectionWalkingRoute_t1612066669, ___extensionObject_3)); }
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
