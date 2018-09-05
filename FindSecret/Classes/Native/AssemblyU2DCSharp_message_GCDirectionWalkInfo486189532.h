#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// message.DirectionWalkingRoute
struct DirectionWalkingRoute_t1612066669;
// ProtoBuf.IExtension
struct IExtension_t3291225028;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// message.GCDirectionWalkInfo
struct  GCDirectionWalkInfo_t486189532  : public Il2CppObject
{
public:
	// message.DirectionWalkingRoute message.GCDirectionWalkInfo::_directionWalkingRoute
	DirectionWalkingRoute_t1612066669 * ____directionWalkingRoute_0;
	// ProtoBuf.IExtension message.GCDirectionWalkInfo::extensionObject
	Il2CppObject * ___extensionObject_1;

public:
	inline static int32_t get_offset_of__directionWalkingRoute_0() { return static_cast<int32_t>(offsetof(GCDirectionWalkInfo_t486189532, ____directionWalkingRoute_0)); }
	inline DirectionWalkingRoute_t1612066669 * get__directionWalkingRoute_0() const { return ____directionWalkingRoute_0; }
	inline DirectionWalkingRoute_t1612066669 ** get_address_of__directionWalkingRoute_0() { return &____directionWalkingRoute_0; }
	inline void set__directionWalkingRoute_0(DirectionWalkingRoute_t1612066669 * value)
	{
		____directionWalkingRoute_0 = value;
		Il2CppCodeGenWriteBarrier(&____directionWalkingRoute_0, value);
	}

	inline static int32_t get_offset_of_extensionObject_1() { return static_cast<int32_t>(offsetof(GCDirectionWalkInfo_t486189532, ___extensionObject_1)); }
	inline Il2CppObject * get_extensionObject_1() const { return ___extensionObject_1; }
	inline Il2CppObject ** get_address_of_extensionObject_1() { return &___extensionObject_1; }
	inline void set_extensionObject_1(Il2CppObject * value)
	{
		___extensionObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
