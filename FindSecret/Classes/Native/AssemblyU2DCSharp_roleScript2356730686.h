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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// roleScript
struct  roleScript_t2356730686  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animation roleScript::ani
	Animation_t3648466861 * ___ani_2;
	// UnityEngine.AudioSource roleScript::audioSource
	AudioSource_t3935305588 * ___audioSource_3;
	// System.Int32 roleScript::curFrame
	int32_t ___curFrame_4;

public:
	inline static int32_t get_offset_of_ani_2() { return static_cast<int32_t>(offsetof(roleScript_t2356730686, ___ani_2)); }
	inline Animation_t3648466861 * get_ani_2() const { return ___ani_2; }
	inline Animation_t3648466861 ** get_address_of_ani_2() { return &___ani_2; }
	inline void set_ani_2(Animation_t3648466861 * value)
	{
		___ani_2 = value;
		Il2CppCodeGenWriteBarrier(&___ani_2, value);
	}

	inline static int32_t get_offset_of_audioSource_3() { return static_cast<int32_t>(offsetof(roleScript_t2356730686, ___audioSource_3)); }
	inline AudioSource_t3935305588 * get_audioSource_3() const { return ___audioSource_3; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_3() { return &___audioSource_3; }
	inline void set_audioSource_3(AudioSource_t3935305588 * value)
	{
		___audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_3, value);
	}

	inline static int32_t get_offset_of_curFrame_4() { return static_cast<int32_t>(offsetof(roleScript_t2356730686, ___curFrame_4)); }
	inline int32_t get_curFrame_4() const { return ___curFrame_4; }
	inline int32_t* get_address_of_curFrame_4() { return &___curFrame_4; }
	inline void set_curFrame_4(int32_t value)
	{
		___curFrame_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
