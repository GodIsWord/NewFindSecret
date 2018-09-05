#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// System.Action`1<UnityEngine.GameObject>
struct Action_1_t1286104214;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventLisenter
struct  EventLisenter_t3188478968  : public MonoBehaviour_t3962482529
{
public:
	// System.Action`1<UnityEngine.GameObject> EventLisenter::OnClick
	Action_1_t1286104214 * ___OnClick_2;
	// System.Action`1<UnityEngine.GameObject> EventLisenter::OnDoubleClick
	Action_1_t1286104214 * ___OnDoubleClick_3;
	// System.Single EventLisenter::time
	float ___time_4;

public:
	inline static int32_t get_offset_of_OnClick_2() { return static_cast<int32_t>(offsetof(EventLisenter_t3188478968, ___OnClick_2)); }
	inline Action_1_t1286104214 * get_OnClick_2() const { return ___OnClick_2; }
	inline Action_1_t1286104214 ** get_address_of_OnClick_2() { return &___OnClick_2; }
	inline void set_OnClick_2(Action_1_t1286104214 * value)
	{
		___OnClick_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnClick_2, value);
	}

	inline static int32_t get_offset_of_OnDoubleClick_3() { return static_cast<int32_t>(offsetof(EventLisenter_t3188478968, ___OnDoubleClick_3)); }
	inline Action_1_t1286104214 * get_OnDoubleClick_3() const { return ___OnDoubleClick_3; }
	inline Action_1_t1286104214 ** get_address_of_OnDoubleClick_3() { return &___OnDoubleClick_3; }
	inline void set_OnDoubleClick_3(Action_1_t1286104214 * value)
	{
		___OnDoubleClick_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnDoubleClick_3, value);
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(EventLisenter_t3188478968, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
