#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.Animation
struct Animation_t3648466861;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KonglongScript
struct  KonglongScript_t975718662  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animation KonglongScript::ani
	Animation_t3648466861 * ___ani_2;
	// UnityEngine.AudioSource KonglongScript::huxi
	AudioSource_t3935305588 * ___huxi_3;
	// UnityEngine.AudioSource KonglongScript::hou
	AudioSource_t3935305588 * ___hou_4;
	// UnityEngine.AudioSource KonglongScript::run
	AudioSource_t3935305588 * ___run_5;
	// System.String KonglongScript::lastName
	String_t* ___lastName_6;

public:
	inline static int32_t get_offset_of_ani_2() { return static_cast<int32_t>(offsetof(KonglongScript_t975718662, ___ani_2)); }
	inline Animation_t3648466861 * get_ani_2() const { return ___ani_2; }
	inline Animation_t3648466861 ** get_address_of_ani_2() { return &___ani_2; }
	inline void set_ani_2(Animation_t3648466861 * value)
	{
		___ani_2 = value;
		Il2CppCodeGenWriteBarrier(&___ani_2, value);
	}

	inline static int32_t get_offset_of_huxi_3() { return static_cast<int32_t>(offsetof(KonglongScript_t975718662, ___huxi_3)); }
	inline AudioSource_t3935305588 * get_huxi_3() const { return ___huxi_3; }
	inline AudioSource_t3935305588 ** get_address_of_huxi_3() { return &___huxi_3; }
	inline void set_huxi_3(AudioSource_t3935305588 * value)
	{
		___huxi_3 = value;
		Il2CppCodeGenWriteBarrier(&___huxi_3, value);
	}

	inline static int32_t get_offset_of_hou_4() { return static_cast<int32_t>(offsetof(KonglongScript_t975718662, ___hou_4)); }
	inline AudioSource_t3935305588 * get_hou_4() const { return ___hou_4; }
	inline AudioSource_t3935305588 ** get_address_of_hou_4() { return &___hou_4; }
	inline void set_hou_4(AudioSource_t3935305588 * value)
	{
		___hou_4 = value;
		Il2CppCodeGenWriteBarrier(&___hou_4, value);
	}

	inline static int32_t get_offset_of_run_5() { return static_cast<int32_t>(offsetof(KonglongScript_t975718662, ___run_5)); }
	inline AudioSource_t3935305588 * get_run_5() const { return ___run_5; }
	inline AudioSource_t3935305588 ** get_address_of_run_5() { return &___run_5; }
	inline void set_run_5(AudioSource_t3935305588 * value)
	{
		___run_5 = value;
		Il2CppCodeGenWriteBarrier(&___run_5, value);
	}

	inline static int32_t get_offset_of_lastName_6() { return static_cast<int32_t>(offsetof(KonglongScript_t975718662, ___lastName_6)); }
	inline String_t* get_lastName_6() const { return ___lastName_6; }
	inline String_t** get_address_of_lastName_6() { return &___lastName_6; }
	inline void set_lastName_6(String_t* value)
	{
		___lastName_6 = value;
		Il2CppCodeGenWriteBarrier(&___lastName_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
