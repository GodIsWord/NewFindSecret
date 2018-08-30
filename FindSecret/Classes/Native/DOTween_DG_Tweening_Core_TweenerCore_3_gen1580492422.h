#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "DOTween_DG_Tweening_Tweener436044680.h"
#include "DOTween_DG_Tweening_Color23097643075.h"
#include "DOTween_DG_Tweening_Plugins_Options_ColorOptions1487297155.h"

// DG.Tweening.Core.DOGetter`1<DG.Tweening.Color2>
struct DOGetter_1_t2840439279;
// DG.Tweening.Core.DOSetter`1<DG.Tweening.Color2>
struct DOSetter_1_t4147751407;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_t1116502072;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>
struct  TweenerCore_3_t1580492422  : public Tweener_t436044680
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color2_t3097643075  ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color2_t3097643075  ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color2_t3097643075  ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t1487297155  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t2840439279 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t4147751407 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t1116502072 * ___tweenPlugin_59;

public:
	inline static int32_t get_offset_of_startValue_53() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1580492422, ___startValue_53)); }
	inline Color2_t3097643075  get_startValue_53() const { return ___startValue_53; }
	inline Color2_t3097643075 * get_address_of_startValue_53() { return &___startValue_53; }
	inline void set_startValue_53(Color2_t3097643075  value)
	{
		___startValue_53 = value;
	}

	inline static int32_t get_offset_of_endValue_54() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1580492422, ___endValue_54)); }
	inline Color2_t3097643075  get_endValue_54() const { return ___endValue_54; }
	inline Color2_t3097643075 * get_address_of_endValue_54() { return &___endValue_54; }
	inline void set_endValue_54(Color2_t3097643075  value)
	{
		___endValue_54 = value;
	}

	inline static int32_t get_offset_of_changeValue_55() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1580492422, ___changeValue_55)); }
	inline Color2_t3097643075  get_changeValue_55() const { return ___changeValue_55; }
	inline Color2_t3097643075 * get_address_of_changeValue_55() { return &___changeValue_55; }
	inline void set_changeValue_55(Color2_t3097643075  value)
	{
		___changeValue_55 = value;
	}

	inline static int32_t get_offset_of_plugOptions_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1580492422, ___plugOptions_56)); }
	inline ColorOptions_t1487297155  get_plugOptions_56() const { return ___plugOptions_56; }
	inline ColorOptions_t1487297155 * get_address_of_plugOptions_56() { return &___plugOptions_56; }
	inline void set_plugOptions_56(ColorOptions_t1487297155  value)
	{
		___plugOptions_56 = value;
	}

	inline static int32_t get_offset_of_getter_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1580492422, ___getter_57)); }
	inline DOGetter_1_t2840439279 * get_getter_57() const { return ___getter_57; }
	inline DOGetter_1_t2840439279 ** get_address_of_getter_57() { return &___getter_57; }
	inline void set_getter_57(DOGetter_1_t2840439279 * value)
	{
		___getter_57 = value;
		Il2CppCodeGenWriteBarrier(&___getter_57, value);
	}

	inline static int32_t get_offset_of_setter_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1580492422, ___setter_58)); }
	inline DOSetter_1_t4147751407 * get_setter_58() const { return ___setter_58; }
	inline DOSetter_1_t4147751407 ** get_address_of_setter_58() { return &___setter_58; }
	inline void set_setter_58(DOSetter_1_t4147751407 * value)
	{
		___setter_58 = value;
		Il2CppCodeGenWriteBarrier(&___setter_58, value);
	}

	inline static int32_t get_offset_of_tweenPlugin_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1580492422, ___tweenPlugin_59)); }
	inline ABSTweenPlugin_3_t1116502072 * get_tweenPlugin_59() const { return ___tweenPlugin_59; }
	inline ABSTweenPlugin_3_t1116502072 ** get_address_of_tweenPlugin_59() { return &___tweenPlugin_59; }
	inline void set_tweenPlugin_59(ABSTweenPlugin_3_t1116502072 * value)
	{
		___tweenPlugin_59 = value;
		Il2CppCodeGenWriteBarrier(&___tweenPlugin_59, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
