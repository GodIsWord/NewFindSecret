#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "DOTween_DG_Tweening_Tweener436044680.h"
#include "UnityEngine_UnityEngine_Vector22156229523.h"
#include "DOTween_DG_Tweening_Plugins_Options_VectorOptions1354903650.h"

// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t1899025727;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t3206337855;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t3542497879;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct  TweenerCore_3_t4006488229  : public Tweener_t436044680
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector2_t2156229523  ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector2_t2156229523  ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector2_t2156229523  ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t1354903650  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t1899025727 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t3206337855 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t3542497879 * ___tweenPlugin_59;

public:
	inline static int32_t get_offset_of_startValue_53() { return static_cast<int32_t>(offsetof(TweenerCore_3_t4006488229, ___startValue_53)); }
	inline Vector2_t2156229523  get_startValue_53() const { return ___startValue_53; }
	inline Vector2_t2156229523 * get_address_of_startValue_53() { return &___startValue_53; }
	inline void set_startValue_53(Vector2_t2156229523  value)
	{
		___startValue_53 = value;
	}

	inline static int32_t get_offset_of_endValue_54() { return static_cast<int32_t>(offsetof(TweenerCore_3_t4006488229, ___endValue_54)); }
	inline Vector2_t2156229523  get_endValue_54() const { return ___endValue_54; }
	inline Vector2_t2156229523 * get_address_of_endValue_54() { return &___endValue_54; }
	inline void set_endValue_54(Vector2_t2156229523  value)
	{
		___endValue_54 = value;
	}

	inline static int32_t get_offset_of_changeValue_55() { return static_cast<int32_t>(offsetof(TweenerCore_3_t4006488229, ___changeValue_55)); }
	inline Vector2_t2156229523  get_changeValue_55() const { return ___changeValue_55; }
	inline Vector2_t2156229523 * get_address_of_changeValue_55() { return &___changeValue_55; }
	inline void set_changeValue_55(Vector2_t2156229523  value)
	{
		___changeValue_55 = value;
	}

	inline static int32_t get_offset_of_plugOptions_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t4006488229, ___plugOptions_56)); }
	inline VectorOptions_t1354903650  get_plugOptions_56() const { return ___plugOptions_56; }
	inline VectorOptions_t1354903650 * get_address_of_plugOptions_56() { return &___plugOptions_56; }
	inline void set_plugOptions_56(VectorOptions_t1354903650  value)
	{
		___plugOptions_56 = value;
	}

	inline static int32_t get_offset_of_getter_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t4006488229, ___getter_57)); }
	inline DOGetter_1_t1899025727 * get_getter_57() const { return ___getter_57; }
	inline DOGetter_1_t1899025727 ** get_address_of_getter_57() { return &___getter_57; }
	inline void set_getter_57(DOGetter_1_t1899025727 * value)
	{
		___getter_57 = value;
		Il2CppCodeGenWriteBarrier(&___getter_57, value);
	}

	inline static int32_t get_offset_of_setter_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t4006488229, ___setter_58)); }
	inline DOSetter_1_t3206337855 * get_setter_58() const { return ___setter_58; }
	inline DOSetter_1_t3206337855 ** get_address_of_setter_58() { return &___setter_58; }
	inline void set_setter_58(DOSetter_1_t3206337855 * value)
	{
		___setter_58 = value;
		Il2CppCodeGenWriteBarrier(&___setter_58, value);
	}

	inline static int32_t get_offset_of_tweenPlugin_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t4006488229, ___tweenPlugin_59)); }
	inline ABSTweenPlugin_3_t3542497879 * get_tweenPlugin_59() const { return ___tweenPlugin_59; }
	inline ABSTweenPlugin_3_t3542497879 ** get_address_of_tweenPlugin_59() { return &___tweenPlugin_59; }
	inline void set_tweenPlugin_59(ABSTweenPlugin_3_t3542497879 * value)
	{
		___tweenPlugin_59 = value;
		Il2CppCodeGenWriteBarrier(&___tweenPlugin_59, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
