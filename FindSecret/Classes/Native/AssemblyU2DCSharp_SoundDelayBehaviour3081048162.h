#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.AudioSource
struct AudioSource_t3935305588;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundDelayBehaviour
struct  SoundDelayBehaviour_t3081048162  : public MonoBehaviour_t3962482529
{
public:
	// System.Single SoundDelayBehaviour::delaySeconds
	float ___delaySeconds_2;
	// UnityEngine.AudioSource SoundDelayBehaviour::sound
	AudioSource_t3935305588 * ___sound_3;

public:
	inline static int32_t get_offset_of_delaySeconds_2() { return static_cast<int32_t>(offsetof(SoundDelayBehaviour_t3081048162, ___delaySeconds_2)); }
	inline float get_delaySeconds_2() const { return ___delaySeconds_2; }
	inline float* get_address_of_delaySeconds_2() { return &___delaySeconds_2; }
	inline void set_delaySeconds_2(float value)
	{
		___delaySeconds_2 = value;
	}

	inline static int32_t get_offset_of_sound_3() { return static_cast<int32_t>(offsetof(SoundDelayBehaviour_t3081048162, ___sound_3)); }
	inline AudioSource_t3935305588 * get_sound_3() const { return ___sound_3; }
	inline AudioSource_t3935305588 ** get_address_of_sound_3() { return &___sound_3; }
	inline void set_sound_3(AudioSource_t3935305588 * value)
	{
		___sound_3 = value;
		Il2CppCodeGenWriteBarrier(&___sound_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
