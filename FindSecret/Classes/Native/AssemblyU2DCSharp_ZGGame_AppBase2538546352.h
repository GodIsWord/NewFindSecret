#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.AppBase
struct  AppBase_t2538546352  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean ZGGame.AppBase::appDebug
	bool ___appDebug_2;
	// System.Boolean ZGGame.AppBase::appRelease
	bool ___appRelease_3;
	// System.Collections.Generic.List`1<System.Int32> ZGGame.AppBase::evnetList
	List_1_t128053199 * ___evnetList_4;
	// System.Boolean ZGGame.AppBase::_initialized
	bool ____initialized_5;

public:
	inline static int32_t get_offset_of_appDebug_2() { return static_cast<int32_t>(offsetof(AppBase_t2538546352, ___appDebug_2)); }
	inline bool get_appDebug_2() const { return ___appDebug_2; }
	inline bool* get_address_of_appDebug_2() { return &___appDebug_2; }
	inline void set_appDebug_2(bool value)
	{
		___appDebug_2 = value;
	}

	inline static int32_t get_offset_of_appRelease_3() { return static_cast<int32_t>(offsetof(AppBase_t2538546352, ___appRelease_3)); }
	inline bool get_appRelease_3() const { return ___appRelease_3; }
	inline bool* get_address_of_appRelease_3() { return &___appRelease_3; }
	inline void set_appRelease_3(bool value)
	{
		___appRelease_3 = value;
	}

	inline static int32_t get_offset_of_evnetList_4() { return static_cast<int32_t>(offsetof(AppBase_t2538546352, ___evnetList_4)); }
	inline List_1_t128053199 * get_evnetList_4() const { return ___evnetList_4; }
	inline List_1_t128053199 ** get_address_of_evnetList_4() { return &___evnetList_4; }
	inline void set_evnetList_4(List_1_t128053199 * value)
	{
		___evnetList_4 = value;
		Il2CppCodeGenWriteBarrier(&___evnetList_4, value);
	}

	inline static int32_t get_offset_of__initialized_5() { return static_cast<int32_t>(offsetof(AppBase_t2538546352, ____initialized_5)); }
	inline bool get__initialized_5() const { return ____initialized_5; }
	inline bool* get_address_of__initialized_5() { return &____initialized_5; }
	inline void set__initialized_5(bool value)
	{
		____initialized_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
