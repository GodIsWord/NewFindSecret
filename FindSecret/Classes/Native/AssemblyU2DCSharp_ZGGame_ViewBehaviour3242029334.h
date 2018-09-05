#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t898892918;
// ZGGame.View
struct View_t352704265;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.ViewBehaviour
struct  ViewBehaviour_t3242029334  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> ZGGame.ViewBehaviour::objectDic
	Dictionary_2_t898892918 * ___objectDic_2;
	// ZGGame.View ZGGame.ViewBehaviour::_view
	View_t352704265 * ____view_3;

public:
	inline static int32_t get_offset_of_objectDic_2() { return static_cast<int32_t>(offsetof(ViewBehaviour_t3242029334, ___objectDic_2)); }
	inline Dictionary_2_t898892918 * get_objectDic_2() const { return ___objectDic_2; }
	inline Dictionary_2_t898892918 ** get_address_of_objectDic_2() { return &___objectDic_2; }
	inline void set_objectDic_2(Dictionary_2_t898892918 * value)
	{
		___objectDic_2 = value;
		Il2CppCodeGenWriteBarrier(&___objectDic_2, value);
	}

	inline static int32_t get_offset_of__view_3() { return static_cast<int32_t>(offsetof(ViewBehaviour_t3242029334, ____view_3)); }
	inline View_t352704265 * get__view_3() const { return ____view_3; }
	inline View_t352704265 ** get_address_of__view_3() { return &____view_3; }
	inline void set__view_3(View_t352704265 * value)
	{
		____view_3 = value;
		Il2CppCodeGenWriteBarrier(&____view_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
