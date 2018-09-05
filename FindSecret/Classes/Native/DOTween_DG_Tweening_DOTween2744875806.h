﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "DOTween_DG_Tweening_LogBehaviour1548882435.h"
#include "DOTween_DG_Tweening_UpdateType3937729206.h"
#include "DOTween_DG_Tweening_AutoPlay1346164433.h"
#include "DOTween_DG_Tweening_LoopType3049802818.h"
#include "DOTween_DG_Tweening_Ease4010715394.h"

// System.String
struct String_t;
// DG.Tweening.Core.DOTweenComponent
struct DOTweenComponent_t828035757;
// System.Collections.Generic.List`1<DG.Tweening.TweenCallback>
struct List_1_t904863771;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.DOTween
struct  DOTween_t2744875806  : public Il2CppObject
{
public:

public:
};

struct DOTween_t2744875806_StaticFields
{
public:
	// System.String DG.Tweening.DOTween::Version
	String_t* ___Version_0;
	// System.Boolean DG.Tweening.DOTween::useSafeMode
	bool ___useSafeMode_1;
	// System.Boolean DG.Tweening.DOTween::showUnityEditorReport
	bool ___showUnityEditorReport_2;
	// System.Single DG.Tweening.DOTween::timeScale
	float ___timeScale_3;
	// DG.Tweening.LogBehaviour DG.Tweening.DOTween::_logBehaviour
	int32_t ____logBehaviour_4;
	// System.Boolean DG.Tweening.DOTween::drawGizmos
	bool ___drawGizmos_5;
	// DG.Tweening.UpdateType DG.Tweening.DOTween::defaultUpdateType
	int32_t ___defaultUpdateType_6;
	// System.Boolean DG.Tweening.DOTween::defaultTimeScaleIndependent
	bool ___defaultTimeScaleIndependent_7;
	// DG.Tweening.AutoPlay DG.Tweening.DOTween::defaultAutoPlay
	int32_t ___defaultAutoPlay_8;
	// System.Boolean DG.Tweening.DOTween::defaultAutoKill
	bool ___defaultAutoKill_9;
	// DG.Tweening.LoopType DG.Tweening.DOTween::defaultLoopType
	int32_t ___defaultLoopType_10;
	// System.Boolean DG.Tweening.DOTween::defaultRecyclable
	bool ___defaultRecyclable_11;
	// DG.Tweening.Ease DG.Tweening.DOTween::defaultEaseType
	int32_t ___defaultEaseType_12;
	// System.Single DG.Tweening.DOTween::defaultEaseOvershootOrAmplitude
	float ___defaultEaseOvershootOrAmplitude_13;
	// System.Single DG.Tweening.DOTween::defaultEasePeriod
	float ___defaultEasePeriod_14;
	// DG.Tweening.Core.DOTweenComponent DG.Tweening.DOTween::instance
	DOTweenComponent_t828035757 * ___instance_15;
	// System.Boolean DG.Tweening.DOTween::isUnityEditor
	bool ___isUnityEditor_16;
	// System.Int32 DG.Tweening.DOTween::maxActiveTweenersReached
	int32_t ___maxActiveTweenersReached_17;
	// System.Int32 DG.Tweening.DOTween::maxActiveSequencesReached
	int32_t ___maxActiveSequencesReached_18;
	// System.Collections.Generic.List`1<DG.Tweening.TweenCallback> DG.Tweening.DOTween::GizmosDelegates
	List_1_t904863771 * ___GizmosDelegates_19;
	// System.Boolean DG.Tweening.DOTween::initialized
	bool ___initialized_20;
	// System.Boolean DG.Tweening.DOTween::isQuitting
	bool ___isQuitting_21;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___Version_0)); }
	inline String_t* get_Version_0() const { return ___Version_0; }
	inline String_t** get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(String_t* value)
	{
		___Version_0 = value;
		Il2CppCodeGenWriteBarrier(&___Version_0, value);
	}

	inline static int32_t get_offset_of_useSafeMode_1() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___useSafeMode_1)); }
	inline bool get_useSafeMode_1() const { return ___useSafeMode_1; }
	inline bool* get_address_of_useSafeMode_1() { return &___useSafeMode_1; }
	inline void set_useSafeMode_1(bool value)
	{
		___useSafeMode_1 = value;
	}

	inline static int32_t get_offset_of_showUnityEditorReport_2() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___showUnityEditorReport_2)); }
	inline bool get_showUnityEditorReport_2() const { return ___showUnityEditorReport_2; }
	inline bool* get_address_of_showUnityEditorReport_2() { return &___showUnityEditorReport_2; }
	inline void set_showUnityEditorReport_2(bool value)
	{
		___showUnityEditorReport_2 = value;
	}

	inline static int32_t get_offset_of_timeScale_3() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___timeScale_3)); }
	inline float get_timeScale_3() const { return ___timeScale_3; }
	inline float* get_address_of_timeScale_3() { return &___timeScale_3; }
	inline void set_timeScale_3(float value)
	{
		___timeScale_3 = value;
	}

	inline static int32_t get_offset_of__logBehaviour_4() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ____logBehaviour_4)); }
	inline int32_t get__logBehaviour_4() const { return ____logBehaviour_4; }
	inline int32_t* get_address_of__logBehaviour_4() { return &____logBehaviour_4; }
	inline void set__logBehaviour_4(int32_t value)
	{
		____logBehaviour_4 = value;
	}

	inline static int32_t get_offset_of_drawGizmos_5() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___drawGizmos_5)); }
	inline bool get_drawGizmos_5() const { return ___drawGizmos_5; }
	inline bool* get_address_of_drawGizmos_5() { return &___drawGizmos_5; }
	inline void set_drawGizmos_5(bool value)
	{
		___drawGizmos_5 = value;
	}

	inline static int32_t get_offset_of_defaultUpdateType_6() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___defaultUpdateType_6)); }
	inline int32_t get_defaultUpdateType_6() const { return ___defaultUpdateType_6; }
	inline int32_t* get_address_of_defaultUpdateType_6() { return &___defaultUpdateType_6; }
	inline void set_defaultUpdateType_6(int32_t value)
	{
		___defaultUpdateType_6 = value;
	}

	inline static int32_t get_offset_of_defaultTimeScaleIndependent_7() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___defaultTimeScaleIndependent_7)); }
	inline bool get_defaultTimeScaleIndependent_7() const { return ___defaultTimeScaleIndependent_7; }
	inline bool* get_address_of_defaultTimeScaleIndependent_7() { return &___defaultTimeScaleIndependent_7; }
	inline void set_defaultTimeScaleIndependent_7(bool value)
	{
		___defaultTimeScaleIndependent_7 = value;
	}

	inline static int32_t get_offset_of_defaultAutoPlay_8() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___defaultAutoPlay_8)); }
	inline int32_t get_defaultAutoPlay_8() const { return ___defaultAutoPlay_8; }
	inline int32_t* get_address_of_defaultAutoPlay_8() { return &___defaultAutoPlay_8; }
	inline void set_defaultAutoPlay_8(int32_t value)
	{
		___defaultAutoPlay_8 = value;
	}

	inline static int32_t get_offset_of_defaultAutoKill_9() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___defaultAutoKill_9)); }
	inline bool get_defaultAutoKill_9() const { return ___defaultAutoKill_9; }
	inline bool* get_address_of_defaultAutoKill_9() { return &___defaultAutoKill_9; }
	inline void set_defaultAutoKill_9(bool value)
	{
		___defaultAutoKill_9 = value;
	}

	inline static int32_t get_offset_of_defaultLoopType_10() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___defaultLoopType_10)); }
	inline int32_t get_defaultLoopType_10() const { return ___defaultLoopType_10; }
	inline int32_t* get_address_of_defaultLoopType_10() { return &___defaultLoopType_10; }
	inline void set_defaultLoopType_10(int32_t value)
	{
		___defaultLoopType_10 = value;
	}

	inline static int32_t get_offset_of_defaultRecyclable_11() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___defaultRecyclable_11)); }
	inline bool get_defaultRecyclable_11() const { return ___defaultRecyclable_11; }
	inline bool* get_address_of_defaultRecyclable_11() { return &___defaultRecyclable_11; }
	inline void set_defaultRecyclable_11(bool value)
	{
		___defaultRecyclable_11 = value;
	}

	inline static int32_t get_offset_of_defaultEaseType_12() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___defaultEaseType_12)); }
	inline int32_t get_defaultEaseType_12() const { return ___defaultEaseType_12; }
	inline int32_t* get_address_of_defaultEaseType_12() { return &___defaultEaseType_12; }
	inline void set_defaultEaseType_12(int32_t value)
	{
		___defaultEaseType_12 = value;
	}

	inline static int32_t get_offset_of_defaultEaseOvershootOrAmplitude_13() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___defaultEaseOvershootOrAmplitude_13)); }
	inline float get_defaultEaseOvershootOrAmplitude_13() const { return ___defaultEaseOvershootOrAmplitude_13; }
	inline float* get_address_of_defaultEaseOvershootOrAmplitude_13() { return &___defaultEaseOvershootOrAmplitude_13; }
	inline void set_defaultEaseOvershootOrAmplitude_13(float value)
	{
		___defaultEaseOvershootOrAmplitude_13 = value;
	}

	inline static int32_t get_offset_of_defaultEasePeriod_14() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___defaultEasePeriod_14)); }
	inline float get_defaultEasePeriod_14() const { return ___defaultEasePeriod_14; }
	inline float* get_address_of_defaultEasePeriod_14() { return &___defaultEasePeriod_14; }
	inline void set_defaultEasePeriod_14(float value)
	{
		___defaultEasePeriod_14 = value;
	}

	inline static int32_t get_offset_of_instance_15() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___instance_15)); }
	inline DOTweenComponent_t828035757 * get_instance_15() const { return ___instance_15; }
	inline DOTweenComponent_t828035757 ** get_address_of_instance_15() { return &___instance_15; }
	inline void set_instance_15(DOTweenComponent_t828035757 * value)
	{
		___instance_15 = value;
		Il2CppCodeGenWriteBarrier(&___instance_15, value);
	}

	inline static int32_t get_offset_of_isUnityEditor_16() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___isUnityEditor_16)); }
	inline bool get_isUnityEditor_16() const { return ___isUnityEditor_16; }
	inline bool* get_address_of_isUnityEditor_16() { return &___isUnityEditor_16; }
	inline void set_isUnityEditor_16(bool value)
	{
		___isUnityEditor_16 = value;
	}

	inline static int32_t get_offset_of_maxActiveTweenersReached_17() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___maxActiveTweenersReached_17)); }
	inline int32_t get_maxActiveTweenersReached_17() const { return ___maxActiveTweenersReached_17; }
	inline int32_t* get_address_of_maxActiveTweenersReached_17() { return &___maxActiveTweenersReached_17; }
	inline void set_maxActiveTweenersReached_17(int32_t value)
	{
		___maxActiveTweenersReached_17 = value;
	}

	inline static int32_t get_offset_of_maxActiveSequencesReached_18() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___maxActiveSequencesReached_18)); }
	inline int32_t get_maxActiveSequencesReached_18() const { return ___maxActiveSequencesReached_18; }
	inline int32_t* get_address_of_maxActiveSequencesReached_18() { return &___maxActiveSequencesReached_18; }
	inline void set_maxActiveSequencesReached_18(int32_t value)
	{
		___maxActiveSequencesReached_18 = value;
	}

	inline static int32_t get_offset_of_GizmosDelegates_19() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___GizmosDelegates_19)); }
	inline List_1_t904863771 * get_GizmosDelegates_19() const { return ___GizmosDelegates_19; }
	inline List_1_t904863771 ** get_address_of_GizmosDelegates_19() { return &___GizmosDelegates_19; }
	inline void set_GizmosDelegates_19(List_1_t904863771 * value)
	{
		___GizmosDelegates_19 = value;
		Il2CppCodeGenWriteBarrier(&___GizmosDelegates_19, value);
	}

	inline static int32_t get_offset_of_initialized_20() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___initialized_20)); }
	inline bool get_initialized_20() const { return ___initialized_20; }
	inline bool* get_address_of_initialized_20() { return &___initialized_20; }
	inline void set_initialized_20(bool value)
	{
		___initialized_20 = value;
	}

	inline static int32_t get_offset_of_isQuitting_21() { return static_cast<int32_t>(offsetof(DOTween_t2744875806_StaticFields, ___isQuitting_21)); }
	inline bool get_isQuitting_21() const { return ___isQuitting_21; }
	inline bool* get_address_of_isQuitting_21() { return &___isQuitting_21; }
	inline void set_isQuitting_21(bool value)
	{
		___isQuitting_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
