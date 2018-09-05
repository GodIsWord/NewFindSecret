#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.AnimationClip
struct AnimationClip_t2318505987;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationClipPair
struct  AnimationClipPair_t2830280397  : public Il2CppObject
{
public:
	// UnityEngine.AnimationClip UnityEngine.AnimationClipPair::originalClip
	AnimationClip_t2318505987 * ___originalClip_0;
	// UnityEngine.AnimationClip UnityEngine.AnimationClipPair::overrideClip
	AnimationClip_t2318505987 * ___overrideClip_1;

public:
	inline static int32_t get_offset_of_originalClip_0() { return static_cast<int32_t>(offsetof(AnimationClipPair_t2830280397, ___originalClip_0)); }
	inline AnimationClip_t2318505987 * get_originalClip_0() const { return ___originalClip_0; }
	inline AnimationClip_t2318505987 ** get_address_of_originalClip_0() { return &___originalClip_0; }
	inline void set_originalClip_0(AnimationClip_t2318505987 * value)
	{
		___originalClip_0 = value;
		Il2CppCodeGenWriteBarrier(&___originalClip_0, value);
	}

	inline static int32_t get_offset_of_overrideClip_1() { return static_cast<int32_t>(offsetof(AnimationClipPair_t2830280397, ___overrideClip_1)); }
	inline AnimationClip_t2318505987 * get_overrideClip_1() const { return ___overrideClip_1; }
	inline AnimationClip_t2318505987 ** get_address_of_overrideClip_1() { return &___overrideClip_1; }
	inline void set_overrideClip_1(AnimationClip_t2318505987 * value)
	{
		___overrideClip_1 = value;
		Il2CppCodeGenWriteBarrier(&___overrideClip_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationClipPair
struct AnimationClipPair_t2830280397_marshaled_pinvoke
{
	AnimationClip_t2318505987 * ___originalClip_0;
	AnimationClip_t2318505987 * ___overrideClip_1;
};
// Native definition for COM marshalling of UnityEngine.AnimationClipPair
struct AnimationClipPair_t2830280397_marshaled_com
{
	AnimationClip_t2318505987 * ___originalClip_0;
	AnimationClip_t2318505987 * ___overrideClip_1;
};
