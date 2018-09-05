#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.WWW
struct WWW_t3688466362;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.RemoteRequest
struct  RemoteRequest_t2051852686  : public Il2CppObject
{
public:
	// UnityEngine.WWW ZGGame.RemoteRequest::w
	WWW_t3688466362 * ___w_0;
	// System.Boolean ZGGame.RemoteRequest::enabled
	bool ___enabled_1;

public:
	inline static int32_t get_offset_of_w_0() { return static_cast<int32_t>(offsetof(RemoteRequest_t2051852686, ___w_0)); }
	inline WWW_t3688466362 * get_w_0() const { return ___w_0; }
	inline WWW_t3688466362 ** get_address_of_w_0() { return &___w_0; }
	inline void set_w_0(WWW_t3688466362 * value)
	{
		___w_0 = value;
		Il2CppCodeGenWriteBarrier(&___w_0, value);
	}

	inline static int32_t get_offset_of_enabled_1() { return static_cast<int32_t>(offsetof(RemoteRequest_t2051852686, ___enabled_1)); }
	inline bool get_enabled_1() const { return ___enabled_1; }
	inline bool* get_address_of_enabled_1() { return &___enabled_1; }
	inline void set_enabled_1(bool value)
	{
		___enabled_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
