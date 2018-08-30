#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Animation
struct Animation_t3648466861;
// UnityEngine.Transform
struct Transform_t3600365921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// dogScript
struct  dogScript_t4089582328  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject dogScript::dog
	GameObject_t1113636619 * ___dog_3;
	// UnityEngine.GameObject dogScript::scrollbar
	GameObject_t1113636619 * ___scrollbar_4;
	// UnityEngine.RectTransform dogScript::recttransform
	RectTransform_t3704657025 * ___recttransform_5;
	// UnityEngine.Animation dogScript::dogAnimation
	Animation_t3648466861 * ___dogAnimation_6;
	// UnityEngine.Transform dogScript::dogTransform
	Transform_t3600365921 * ___dogTransform_7;
	// System.Int32 dogScript::minLen
	int32_t ___minLen_8;
	// System.Int32 dogScript::maxLen
	int32_t ___maxLen_9;

public:
	inline static int32_t get_offset_of_dog_3() { return static_cast<int32_t>(offsetof(dogScript_t4089582328, ___dog_3)); }
	inline GameObject_t1113636619 * get_dog_3() const { return ___dog_3; }
	inline GameObject_t1113636619 ** get_address_of_dog_3() { return &___dog_3; }
	inline void set_dog_3(GameObject_t1113636619 * value)
	{
		___dog_3 = value;
		Il2CppCodeGenWriteBarrier(&___dog_3, value);
	}

	inline static int32_t get_offset_of_scrollbar_4() { return static_cast<int32_t>(offsetof(dogScript_t4089582328, ___scrollbar_4)); }
	inline GameObject_t1113636619 * get_scrollbar_4() const { return ___scrollbar_4; }
	inline GameObject_t1113636619 ** get_address_of_scrollbar_4() { return &___scrollbar_4; }
	inline void set_scrollbar_4(GameObject_t1113636619 * value)
	{
		___scrollbar_4 = value;
		Il2CppCodeGenWriteBarrier(&___scrollbar_4, value);
	}

	inline static int32_t get_offset_of_recttransform_5() { return static_cast<int32_t>(offsetof(dogScript_t4089582328, ___recttransform_5)); }
	inline RectTransform_t3704657025 * get_recttransform_5() const { return ___recttransform_5; }
	inline RectTransform_t3704657025 ** get_address_of_recttransform_5() { return &___recttransform_5; }
	inline void set_recttransform_5(RectTransform_t3704657025 * value)
	{
		___recttransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___recttransform_5, value);
	}

	inline static int32_t get_offset_of_dogAnimation_6() { return static_cast<int32_t>(offsetof(dogScript_t4089582328, ___dogAnimation_6)); }
	inline Animation_t3648466861 * get_dogAnimation_6() const { return ___dogAnimation_6; }
	inline Animation_t3648466861 ** get_address_of_dogAnimation_6() { return &___dogAnimation_6; }
	inline void set_dogAnimation_6(Animation_t3648466861 * value)
	{
		___dogAnimation_6 = value;
		Il2CppCodeGenWriteBarrier(&___dogAnimation_6, value);
	}

	inline static int32_t get_offset_of_dogTransform_7() { return static_cast<int32_t>(offsetof(dogScript_t4089582328, ___dogTransform_7)); }
	inline Transform_t3600365921 * get_dogTransform_7() const { return ___dogTransform_7; }
	inline Transform_t3600365921 ** get_address_of_dogTransform_7() { return &___dogTransform_7; }
	inline void set_dogTransform_7(Transform_t3600365921 * value)
	{
		___dogTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___dogTransform_7, value);
	}

	inline static int32_t get_offset_of_minLen_8() { return static_cast<int32_t>(offsetof(dogScript_t4089582328, ___minLen_8)); }
	inline int32_t get_minLen_8() const { return ___minLen_8; }
	inline int32_t* get_address_of_minLen_8() { return &___minLen_8; }
	inline void set_minLen_8(int32_t value)
	{
		___minLen_8 = value;
	}

	inline static int32_t get_offset_of_maxLen_9() { return static_cast<int32_t>(offsetof(dogScript_t4089582328, ___maxLen_9)); }
	inline int32_t get_maxLen_9() const { return ___maxLen_9; }
	inline int32_t* get_address_of_maxLen_9() { return &___maxLen_9; }
	inline void set_maxLen_9(int32_t value)
	{
		___maxLen_9 = value;
	}
};

struct dogScript_t4089582328_StaticFields
{
public:
	// System.Int32 dogScript::startX
	int32_t ___startX_2;

public:
	inline static int32_t get_offset_of_startX_2() { return static_cast<int32_t>(offsetof(dogScript_t4089582328_StaticFields, ___startX_2)); }
	inline int32_t get_startX_2() const { return ___startX_2; }
	inline int32_t* get_address_of_startX_2() { return &___startX_2; }
	inline void set_startX_2(int32_t value)
	{
		___startX_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
