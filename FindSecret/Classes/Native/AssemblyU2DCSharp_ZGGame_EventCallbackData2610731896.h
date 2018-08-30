#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// ZGGame.EventCallback
struct EventCallback_t832368971;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.EventCallbackData
struct  EventCallbackData_t2610731896  : public Il2CppObject
{
public:
	// System.Int32 ZGGame.EventCallbackData::type
	int32_t ___type_0;
	// ZGGame.EventCallback ZGGame.EventCallbackData::callback
	EventCallback_t832368971 * ___callback_1;
	// System.Boolean ZGGame.EventCallbackData::enabled
	bool ___enabled_2;
	// System.Int32 ZGGame.EventCallbackData::portait
	int32_t ___portait_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EventCallbackData_t2610731896, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(EventCallbackData_t2610731896, ___callback_1)); }
	inline EventCallback_t832368971 * get_callback_1() const { return ___callback_1; }
	inline EventCallback_t832368971 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(EventCallback_t832368971 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}

	inline static int32_t get_offset_of_enabled_2() { return static_cast<int32_t>(offsetof(EventCallbackData_t2610731896, ___enabled_2)); }
	inline bool get_enabled_2() const { return ___enabled_2; }
	inline bool* get_address_of_enabled_2() { return &___enabled_2; }
	inline void set_enabled_2(bool value)
	{
		___enabled_2 = value;
	}

	inline static int32_t get_offset_of_portait_3() { return static_cast<int32_t>(offsetof(EventCallbackData_t2610731896, ___portait_3)); }
	inline int32_t get_portait_3() const { return ___portait_3; }
	inline int32_t* get_address_of_portait_3() { return &___portait_3; }
	inline void set_portait_3(int32_t value)
	{
		___portait_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
