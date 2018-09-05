#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ZGGame.EventCallbackData>>
struct Dictionary_2_t2971519969;
// System.Comparison`1<ZGGame.EventCallbackData>
struct Comparison_1_t2385663075;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.EventDispatcher
struct  EventDispatcher_t3647894359  : public Il2CppObject
{
public:

public:
};

struct EventDispatcher_t3647894359_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ZGGame.EventCallbackData>> ZGGame.EventDispatcher::_eventListenerDic
	Dictionary_2_t2971519969 * ____eventListenerDic_0;
	// System.Comparison`1<ZGGame.EventCallbackData> ZGGame.EventDispatcher::<>f__mg$cache0
	Comparison_1_t2385663075 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of__eventListenerDic_0() { return static_cast<int32_t>(offsetof(EventDispatcher_t3647894359_StaticFields, ____eventListenerDic_0)); }
	inline Dictionary_2_t2971519969 * get__eventListenerDic_0() const { return ____eventListenerDic_0; }
	inline Dictionary_2_t2971519969 ** get_address_of__eventListenerDic_0() { return &____eventListenerDic_0; }
	inline void set__eventListenerDic_0(Dictionary_2_t2971519969 * value)
	{
		____eventListenerDic_0 = value;
		Il2CppCodeGenWriteBarrier(&____eventListenerDic_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(EventDispatcher_t3647894359_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Comparison_1_t2385663075 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Comparison_1_t2385663075 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Comparison_1_t2385663075 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
