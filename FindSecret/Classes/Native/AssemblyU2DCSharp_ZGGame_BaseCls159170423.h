#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.BaseCls
struct  BaseCls_t159170423  : public Il2CppObject
{
public:
	// System.Boolean ZGGame.BaseCls::enabled
	bool ___enabled_0;
	// System.Collections.Generic.List`1<System.Int32> ZGGame.BaseCls::eventList
	List_1_t128053199 * ___eventList_1;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(BaseCls_t159170423, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_eventList_1() { return static_cast<int32_t>(offsetof(BaseCls_t159170423, ___eventList_1)); }
	inline List_1_t128053199 * get_eventList_1() const { return ___eventList_1; }
	inline List_1_t128053199 ** get_address_of_eventList_1() { return &___eventList_1; }
	inline void set_eventList_1(List_1_t128053199 * value)
	{
		___eventList_1 = value;
		Il2CppCodeGenWriteBarrier(&___eventList_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
