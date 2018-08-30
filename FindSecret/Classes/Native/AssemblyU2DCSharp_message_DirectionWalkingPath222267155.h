#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.List`1<message.DirectionWalkingStep>
struct List_1_t4076592319;
// ProtoBuf.IExtension
struct IExtension_t3291225028;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// message.DirectionWalkingPath
struct  DirectionWalkingPath_t222267155  : public Il2CppObject
{
public:
	// System.Int32 message.DirectionWalkingPath::_distance
	int32_t ____distance_0;
	// System.Int32 message.DirectionWalkingPath::_duration
	int32_t ____duration_1;
	// System.Collections.Generic.List`1<message.DirectionWalkingStep> message.DirectionWalkingPath::_step
	List_1_t4076592319 * ____step_2;
	// ProtoBuf.IExtension message.DirectionWalkingPath::extensionObject
	Il2CppObject * ___extensionObject_3;

public:
	inline static int32_t get_offset_of__distance_0() { return static_cast<int32_t>(offsetof(DirectionWalkingPath_t222267155, ____distance_0)); }
	inline int32_t get__distance_0() const { return ____distance_0; }
	inline int32_t* get_address_of__distance_0() { return &____distance_0; }
	inline void set__distance_0(int32_t value)
	{
		____distance_0 = value;
	}

	inline static int32_t get_offset_of__duration_1() { return static_cast<int32_t>(offsetof(DirectionWalkingPath_t222267155, ____duration_1)); }
	inline int32_t get__duration_1() const { return ____duration_1; }
	inline int32_t* get_address_of__duration_1() { return &____duration_1; }
	inline void set__duration_1(int32_t value)
	{
		____duration_1 = value;
	}

	inline static int32_t get_offset_of__step_2() { return static_cast<int32_t>(offsetof(DirectionWalkingPath_t222267155, ____step_2)); }
	inline List_1_t4076592319 * get__step_2() const { return ____step_2; }
	inline List_1_t4076592319 ** get_address_of__step_2() { return &____step_2; }
	inline void set__step_2(List_1_t4076592319 * value)
	{
		____step_2 = value;
		Il2CppCodeGenWriteBarrier(&____step_2, value);
	}

	inline static int32_t get_offset_of_extensionObject_3() { return static_cast<int32_t>(offsetof(DirectionWalkingPath_t222267155, ___extensionObject_3)); }
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
