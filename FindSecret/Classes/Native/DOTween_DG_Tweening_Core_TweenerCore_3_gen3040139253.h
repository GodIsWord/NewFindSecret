#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "DOTween_DG_Tweening_Tweener436044680.h"
#include "DOTween_DG_Tweening_Plugins_Options_PathOptions2074623791.h"

// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t3614338981;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t3465109668;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t477454500;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_t2576148903;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct  TweenerCore_3_t3040139253  : public Tweener_t436044680
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Path_t3614338981 * ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Path_t3614338981 * ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Path_t3614338981 * ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	PathOptions_t2074623791  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t3465109668 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t477454500 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t2576148903 * ___tweenPlugin_59;

public:
	inline static int32_t get_offset_of_startValue_53() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3040139253, ___startValue_53)); }
	inline Path_t3614338981 * get_startValue_53() const { return ___startValue_53; }
	inline Path_t3614338981 ** get_address_of_startValue_53() { return &___startValue_53; }
	inline void set_startValue_53(Path_t3614338981 * value)
	{
		___startValue_53 = value;
		Il2CppCodeGenWriteBarrier(&___startValue_53, value);
	}

	inline static int32_t get_offset_of_endValue_54() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3040139253, ___endValue_54)); }
	inline Path_t3614338981 * get_endValue_54() const { return ___endValue_54; }
	inline Path_t3614338981 ** get_address_of_endValue_54() { return &___endValue_54; }
	inline void set_endValue_54(Path_t3614338981 * value)
	{
		___endValue_54 = value;
		Il2CppCodeGenWriteBarrier(&___endValue_54, value);
	}

	inline static int32_t get_offset_of_changeValue_55() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3040139253, ___changeValue_55)); }
	inline Path_t3614338981 * get_changeValue_55() const { return ___changeValue_55; }
	inline Path_t3614338981 ** get_address_of_changeValue_55() { return &___changeValue_55; }
	inline void set_changeValue_55(Path_t3614338981 * value)
	{
		___changeValue_55 = value;
		Il2CppCodeGenWriteBarrier(&___changeValue_55, value);
	}

	inline static int32_t get_offset_of_plugOptions_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3040139253, ___plugOptions_56)); }
	inline PathOptions_t2074623791  get_plugOptions_56() const { return ___plugOptions_56; }
	inline PathOptions_t2074623791 * get_address_of_plugOptions_56() { return &___plugOptions_56; }
	inline void set_plugOptions_56(PathOptions_t2074623791  value)
	{
		___plugOptions_56 = value;
	}

	inline static int32_t get_offset_of_getter_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3040139253, ___getter_57)); }
	inline DOGetter_1_t3465109668 * get_getter_57() const { return ___getter_57; }
	inline DOGetter_1_t3465109668 ** get_address_of_getter_57() { return &___getter_57; }
	inline void set_getter_57(DOGetter_1_t3465109668 * value)
	{
		___getter_57 = value;
		Il2CppCodeGenWriteBarrier(&___getter_57, value);
	}

	inline static int32_t get_offset_of_setter_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3040139253, ___setter_58)); }
	inline DOSetter_1_t477454500 * get_setter_58() const { return ___setter_58; }
	inline DOSetter_1_t477454500 ** get_address_of_setter_58() { return &___setter_58; }
	inline void set_setter_58(DOSetter_1_t477454500 * value)
	{
		___setter_58 = value;
		Il2CppCodeGenWriteBarrier(&___setter_58, value);
	}

	inline static int32_t get_offset_of_tweenPlugin_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3040139253, ___tweenPlugin_59)); }
	inline ABSTweenPlugin_3_t2576148903 * get_tweenPlugin_59() const { return ___tweenPlugin_59; }
	inline ABSTweenPlugin_3_t2576148903 ** get_address_of_tweenPlugin_59() { return &___tweenPlugin_59; }
	inline void set_tweenPlugin_59(ABSTweenPlugin_3_t2576148903 * value)
	{
		___tweenPlugin_59 = value;
		Il2CppCodeGenWriteBarrier(&___tweenPlugin_59, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
