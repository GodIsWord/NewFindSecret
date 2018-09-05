#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.PullNetBehaviour
struct  PullNetBehaviour_t303512773  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 ZGGame.PullNetBehaviour::code
	int32_t ___code_2;
	// System.Single ZGGame.PullNetBehaviour::interval
	float ___interval_3;
	// System.String ZGGame.PullNetBehaviour::url
	String_t* ___url_4;
	// System.Int32 ZGGame.PullNetBehaviour::port
	int32_t ___port_5;
	// System.Boolean ZGGame.PullNetBehaviour::_started
	bool ____started_6;

public:
	inline static int32_t get_offset_of_code_2() { return static_cast<int32_t>(offsetof(PullNetBehaviour_t303512773, ___code_2)); }
	inline int32_t get_code_2() const { return ___code_2; }
	inline int32_t* get_address_of_code_2() { return &___code_2; }
	inline void set_code_2(int32_t value)
	{
		___code_2 = value;
	}

	inline static int32_t get_offset_of_interval_3() { return static_cast<int32_t>(offsetof(PullNetBehaviour_t303512773, ___interval_3)); }
	inline float get_interval_3() const { return ___interval_3; }
	inline float* get_address_of_interval_3() { return &___interval_3; }
	inline void set_interval_3(float value)
	{
		___interval_3 = value;
	}

	inline static int32_t get_offset_of_url_4() { return static_cast<int32_t>(offsetof(PullNetBehaviour_t303512773, ___url_4)); }
	inline String_t* get_url_4() const { return ___url_4; }
	inline String_t** get_address_of_url_4() { return &___url_4; }
	inline void set_url_4(String_t* value)
	{
		___url_4 = value;
		Il2CppCodeGenWriteBarrier(&___url_4, value);
	}

	inline static int32_t get_offset_of_port_5() { return static_cast<int32_t>(offsetof(PullNetBehaviour_t303512773, ___port_5)); }
	inline int32_t get_port_5() const { return ___port_5; }
	inline int32_t* get_address_of_port_5() { return &___port_5; }
	inline void set_port_5(int32_t value)
	{
		___port_5 = value;
	}

	inline static int32_t get_offset_of__started_6() { return static_cast<int32_t>(offsetof(PullNetBehaviour_t303512773, ____started_6)); }
	inline bool get__started_6() const { return ____started_6; }
	inline bool* get_address_of__started_6() { return &____started_6; }
	inline void set__started_6(bool value)
	{
		____started_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
