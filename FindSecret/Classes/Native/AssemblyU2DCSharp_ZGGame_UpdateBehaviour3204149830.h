#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Coroutine>
struct Dictionary_2_t3614415714;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.UpdateBehaviour
struct  UpdateBehaviour_t3204149830  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Coroutine> ZGGame.UpdateBehaviour::_timeProcess
	Dictionary_2_t3614415714 * ____timeProcess_2;

public:
	inline static int32_t get_offset_of__timeProcess_2() { return static_cast<int32_t>(offsetof(UpdateBehaviour_t3204149830, ____timeProcess_2)); }
	inline Dictionary_2_t3614415714 * get__timeProcess_2() const { return ____timeProcess_2; }
	inline Dictionary_2_t3614415714 ** get_address_of__timeProcess_2() { return &____timeProcess_2; }
	inline void set__timeProcess_2(Dictionary_2_t3614415714 * value)
	{
		____timeProcess_2 = value;
		Il2CppCodeGenWriteBarrier(&____timeProcess_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
