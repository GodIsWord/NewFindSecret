#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// ZGGame.View
struct View_t352704265;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.ViewUpdateBehaviour
struct  ViewUpdateBehaviour_t731634096  : public MonoBehaviour_t3962482529
{
public:
	// ZGGame.View ZGGame.ViewUpdateBehaviour::_v
	View_t352704265 * ____v_2;

public:
	inline static int32_t get_offset_of__v_2() { return static_cast<int32_t>(offsetof(ViewUpdateBehaviour_t731634096, ____v_2)); }
	inline View_t352704265 * get__v_2() const { return ____v_2; }
	inline View_t352704265 ** get_address_of__v_2() { return &____v_2; }
	inline void set__v_2(View_t352704265 * value)
	{
		____v_2 = value;
		Il2CppCodeGenWriteBarrier(&____v_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
