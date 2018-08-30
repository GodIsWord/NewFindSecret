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
// System.Collections.Generic.List`1<message.Location>
struct List_1_t2352635329;
// ProtoBuf.IExtension
struct IExtension_t3291225028;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// message.DirectionWalkingStep
struct  DirectionWalkingStep_t2604517577  : public Il2CppObject
{
public:
	// System.String message.DirectionWalkingStep::_instruction
	String_t* ____instruction_0;
	// System.String message.DirectionWalkingStep::_instruction1
	String_t* ____instruction1_1;
	// System.String message.DirectionWalkingStep::_road
	String_t* ____road_2;
	// System.Int32 message.DirectionWalkingStep::_distance
	int32_t ____distance_3;
	// System.Int32 message.DirectionWalkingStep::_distanceall
	int32_t ____distanceall_4;
	// System.String message.DirectionWalkingStep::_orientation
	String_t* ____orientation_5;
	// System.Int32 message.DirectionWalkingStep::_duration
	int32_t ____duration_6;
	// System.Collections.Generic.List`1<message.Location> message.DirectionWalkingStep::_polyline
	List_1_t2352635329 * ____polyline_7;
	// System.String message.DirectionWalkingStep::_action
	String_t* ____action_8;
	// System.String message.DirectionWalkingStep::_assistant_action
	String_t* ____assistant_action_9;
	// ProtoBuf.IExtension message.DirectionWalkingStep::extensionObject
	Il2CppObject * ___extensionObject_10;

public:
	inline static int32_t get_offset_of__instruction_0() { return static_cast<int32_t>(offsetof(DirectionWalkingStep_t2604517577, ____instruction_0)); }
	inline String_t* get__instruction_0() const { return ____instruction_0; }
	inline String_t** get_address_of__instruction_0() { return &____instruction_0; }
	inline void set__instruction_0(String_t* value)
	{
		____instruction_0 = value;
		Il2CppCodeGenWriteBarrier(&____instruction_0, value);
	}

	inline static int32_t get_offset_of__instruction1_1() { return static_cast<int32_t>(offsetof(DirectionWalkingStep_t2604517577, ____instruction1_1)); }
	inline String_t* get__instruction1_1() const { return ____instruction1_1; }
	inline String_t** get_address_of__instruction1_1() { return &____instruction1_1; }
	inline void set__instruction1_1(String_t* value)
	{
		____instruction1_1 = value;
		Il2CppCodeGenWriteBarrier(&____instruction1_1, value);
	}

	inline static int32_t get_offset_of__road_2() { return static_cast<int32_t>(offsetof(DirectionWalkingStep_t2604517577, ____road_2)); }
	inline String_t* get__road_2() const { return ____road_2; }
	inline String_t** get_address_of__road_2() { return &____road_2; }
	inline void set__road_2(String_t* value)
	{
		____road_2 = value;
		Il2CppCodeGenWriteBarrier(&____road_2, value);
	}

	inline static int32_t get_offset_of__distance_3() { return static_cast<int32_t>(offsetof(DirectionWalkingStep_t2604517577, ____distance_3)); }
	inline int32_t get__distance_3() const { return ____distance_3; }
	inline int32_t* get_address_of__distance_3() { return &____distance_3; }
	inline void set__distance_3(int32_t value)
	{
		____distance_3 = value;
	}

	inline static int32_t get_offset_of__distanceall_4() { return static_cast<int32_t>(offsetof(DirectionWalkingStep_t2604517577, ____distanceall_4)); }
	inline int32_t get__distanceall_4() const { return ____distanceall_4; }
	inline int32_t* get_address_of__distanceall_4() { return &____distanceall_4; }
	inline void set__distanceall_4(int32_t value)
	{
		____distanceall_4 = value;
	}

	inline static int32_t get_offset_of__orientation_5() { return static_cast<int32_t>(offsetof(DirectionWalkingStep_t2604517577, ____orientation_5)); }
	inline String_t* get__orientation_5() const { return ____orientation_5; }
	inline String_t** get_address_of__orientation_5() { return &____orientation_5; }
	inline void set__orientation_5(String_t* value)
	{
		____orientation_5 = value;
		Il2CppCodeGenWriteBarrier(&____orientation_5, value);
	}

	inline static int32_t get_offset_of__duration_6() { return static_cast<int32_t>(offsetof(DirectionWalkingStep_t2604517577, ____duration_6)); }
	inline int32_t get__duration_6() const { return ____duration_6; }
	inline int32_t* get_address_of__duration_6() { return &____duration_6; }
	inline void set__duration_6(int32_t value)
	{
		____duration_6 = value;
	}

	inline static int32_t get_offset_of__polyline_7() { return static_cast<int32_t>(offsetof(DirectionWalkingStep_t2604517577, ____polyline_7)); }
	inline List_1_t2352635329 * get__polyline_7() const { return ____polyline_7; }
	inline List_1_t2352635329 ** get_address_of__polyline_7() { return &____polyline_7; }
	inline void set__polyline_7(List_1_t2352635329 * value)
	{
		____polyline_7 = value;
		Il2CppCodeGenWriteBarrier(&____polyline_7, value);
	}

	inline static int32_t get_offset_of__action_8() { return static_cast<int32_t>(offsetof(DirectionWalkingStep_t2604517577, ____action_8)); }
	inline String_t* get__action_8() const { return ____action_8; }
	inline String_t** get_address_of__action_8() { return &____action_8; }
	inline void set__action_8(String_t* value)
	{
		____action_8 = value;
		Il2CppCodeGenWriteBarrier(&____action_8, value);
	}

	inline static int32_t get_offset_of__assistant_action_9() { return static_cast<int32_t>(offsetof(DirectionWalkingStep_t2604517577, ____assistant_action_9)); }
	inline String_t* get__assistant_action_9() const { return ____assistant_action_9; }
	inline String_t** get_address_of__assistant_action_9() { return &____assistant_action_9; }
	inline void set__assistant_action_9(String_t* value)
	{
		____assistant_action_9 = value;
		Il2CppCodeGenWriteBarrier(&____assistant_action_9, value);
	}

	inline static int32_t get_offset_of_extensionObject_10() { return static_cast<int32_t>(offsetof(DirectionWalkingStep_t2604517577, ___extensionObject_10)); }
	inline Il2CppObject * get_extensionObject_10() const { return ___extensionObject_10; }
	inline Il2CppObject ** get_address_of_extensionObject_10() { return &___extensionObject_10; }
	inline void set_extensionObject_10(Il2CppObject * value)
	{
		___extensionObject_10 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
