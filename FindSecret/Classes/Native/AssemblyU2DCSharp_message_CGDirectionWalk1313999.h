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
// ProtoBuf.IExtension
struct IExtension_t3291225028;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// message.CGDirectionWalk
struct  CGDirectionWalk_t1313999  : public Il2CppObject
{
public:
	// message.Location message.CGDirectionWalk::_originGpsLocation
	Location_t880560587 * ____originGpsLocation_0;
	// message.Location message.CGDirectionWalk::_destinationLocation
	Location_t880560587 * ____destinationLocation_1;
	// ProtoBuf.IExtension message.CGDirectionWalk::extensionObject
	Il2CppObject * ___extensionObject_2;

public:
	inline static int32_t get_offset_of__originGpsLocation_0() { return static_cast<int32_t>(offsetof(CGDirectionWalk_t1313999, ____originGpsLocation_0)); }
	inline Location_t880560587 * get__originGpsLocation_0() const { return ____originGpsLocation_0; }
	inline Location_t880560587 ** get_address_of__originGpsLocation_0() { return &____originGpsLocation_0; }
	inline void set__originGpsLocation_0(Location_t880560587 * value)
	{
		____originGpsLocation_0 = value;
		Il2CppCodeGenWriteBarrier(&____originGpsLocation_0, value);
	}

	inline static int32_t get_offset_of__destinationLocation_1() { return static_cast<int32_t>(offsetof(CGDirectionWalk_t1313999, ____destinationLocation_1)); }
	inline Location_t880560587 * get__destinationLocation_1() const { return ____destinationLocation_1; }
	inline Location_t880560587 ** get_address_of__destinationLocation_1() { return &____destinationLocation_1; }
	inline void set__destinationLocation_1(Location_t880560587 * value)
	{
		____destinationLocation_1 = value;
		Il2CppCodeGenWriteBarrier(&____destinationLocation_1, value);
	}

	inline static int32_t get_offset_of_extensionObject_2() { return static_cast<int32_t>(offsetof(CGDirectionWalk_t1313999, ___extensionObject_2)); }
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
