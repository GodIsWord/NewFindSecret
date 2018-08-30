#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// ZGGame.UpdateBehaviour
struct UpdateBehaviour_t3204149830;
// System.Collections.Generic.Dictionary`2<System.String,ZGGame.TimeData>
struct Dictionary_2_t3228565690;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.TimerManager
struct  TimerManager_t1673020246  : public Il2CppObject
{
public:

public:
};

struct TimerManager_t1673020246_StaticFields
{
public:
	// ZGGame.UpdateBehaviour ZGGame.TimerManager::_updateBehaviour
	UpdateBehaviour_t3204149830 * ____updateBehaviour_0;
	// System.Collections.Generic.Dictionary`2<System.String,ZGGame.TimeData> ZGGame.TimerManager::_dic
	Dictionary_2_t3228565690 * ____dic_1;

public:
	inline static int32_t get_offset_of__updateBehaviour_0() { return static_cast<int32_t>(offsetof(TimerManager_t1673020246_StaticFields, ____updateBehaviour_0)); }
	inline UpdateBehaviour_t3204149830 * get__updateBehaviour_0() const { return ____updateBehaviour_0; }
	inline UpdateBehaviour_t3204149830 ** get_address_of__updateBehaviour_0() { return &____updateBehaviour_0; }
	inline void set__updateBehaviour_0(UpdateBehaviour_t3204149830 * value)
	{
		____updateBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier(&____updateBehaviour_0, value);
	}

	inline static int32_t get_offset_of__dic_1() { return static_cast<int32_t>(offsetof(TimerManager_t1673020246_StaticFields, ____dic_1)); }
	inline Dictionary_2_t3228565690 * get__dic_1() const { return ____dic_1; }
	inline Dictionary_2_t3228565690 ** get_address_of__dic_1() { return &____dic_1; }
	inline void set__dic_1(Dictionary_2_t3228565690 * value)
	{
		____dic_1 = value;
		Il2CppCodeGenWriteBarrier(&____dic_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
