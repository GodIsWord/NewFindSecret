﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "EasyAR_Unity_EasyAR_ARCameraBaseBehaviour_CenterMod929368346.h"
#include "EasyAR_Unity_EasyAR_Vector2I2668621479.h"

// EasyAR.Augmenter
struct Augmenter_t2015478513;
// EasyAR.CameraFrameStreamer
struct CameraFrameStreamer_t4175238345;
// System.Collections.Generic.List`1<EasyAR.Target>
struct List_1_t1290329298;
// EasyAR.DeviceAbstractBehaviour
struct DeviceAbstractBehaviour_t3814910474;
// EasyAR.TargetAbstractBehaviour
struct TargetAbstractBehaviour_t1546528472;
// System.Action`2<EasyAR.ARCameraBaseBehaviour,UnityEngine.Texture2D>
struct Action_2_t1241929155;
// System.Action`2<EasyAR.ARCameraBaseBehaviour,EasyAR.Frame>
struct Action_2_t630539512;
// System.Action`3<EasyAR.ARCameraBaseBehaviour,EasyAR.TargetAbstractBehaviour,EasyAR.Target>
struct Action_3_t1017994765;
// System.Action`2<EasyAR.ARCameraBaseBehaviour,System.String>
struct Action_2_t3543900955;
// System.Action`2<EasyAR.ARCameraBaseBehaviour,System.Boolean>
struct Action_2_t1793738231;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ARCameraBaseBehaviour
struct  ARCameraBaseBehaviour_t712094156  : public MonoBehaviour_t3962482529
{
public:
	// EasyAR.Augmenter EasyAR.ARCameraBaseBehaviour::Augmenter
	Augmenter_t2015478513 * ___Augmenter_2;
	// System.Boolean EasyAR.ARCameraBaseBehaviour::RenderReality
	bool ___RenderReality_3;
	// EasyAR.ARCameraBaseBehaviour/CenterMode EasyAR.ARCameraBaseBehaviour::WorldCenter
	int32_t ___WorldCenter_4;
	// System.Boolean EasyAR.ARCameraBaseBehaviour::rFlag
	bool ___rFlag_5;
	// System.Boolean EasyAR.ARCameraBaseBehaviour::texCreated
	bool ___texCreated_6;
	// EasyAR.CameraFrameStreamer EasyAR.ARCameraBaseBehaviour::streamer
	CameraFrameStreamer_t4175238345 * ___streamer_7;
	// System.Collections.Generic.List`1<EasyAR.Target> EasyAR.ARCameraBaseBehaviour::previousTargets
	List_1_t1290329298 * ___previousTargets_8;
	// EasyAR.DeviceAbstractBehaviour EasyAR.ARCameraBaseBehaviour::deviceBehaviour
	DeviceAbstractBehaviour_t3814910474 * ___deviceBehaviour_9;
	// System.Boolean EasyAR.ARCameraBaseBehaviour::preRenderReality
	bool ___preRenderReality_10;
	// System.Int32 EasyAR.ARCameraBaseBehaviour::preFrameIdx
	int32_t ___preFrameIdx_11;
	// EasyAR.TargetAbstractBehaviour EasyAR.ARCameraBaseBehaviour::CenterTarget
	TargetAbstractBehaviour_t1546528472 * ___CenterTarget_12;
	// EasyAR.Vector2I EasyAR.ARCameraBaseBehaviour::_size
	Vector2I_t2668621479  ____size_13;
	// System.Action`2<EasyAR.ARCameraBaseBehaviour,UnityEngine.Texture2D> EasyAR.ARCameraBaseBehaviour::PlaneTextureCreated
	Action_2_t1241929155 * ___PlaneTextureCreated_14;
	// System.Action`2<EasyAR.ARCameraBaseBehaviour,EasyAR.Frame> EasyAR.ARCameraBaseBehaviour::FrameUpdate
	Action_2_t630539512 * ___FrameUpdate_15;
	// System.Action`3<EasyAR.ARCameraBaseBehaviour,EasyAR.TargetAbstractBehaviour,EasyAR.Target> EasyAR.ARCameraBaseBehaviour::TargetFound
	Action_3_t1017994765 * ___TargetFound_16;
	// System.Action`3<EasyAR.ARCameraBaseBehaviour,EasyAR.TargetAbstractBehaviour,EasyAR.Target> EasyAR.ARCameraBaseBehaviour::TargetLost
	Action_3_t1017994765 * ___TargetLost_17;
	// System.Action`2<EasyAR.ARCameraBaseBehaviour,System.String> EasyAR.ARCameraBaseBehaviour::TextMessage
	Action_2_t3543900955 * ___TextMessage_18;
	// System.Action`2<EasyAR.ARCameraBaseBehaviour,System.Boolean> EasyAR.ARCameraBaseBehaviour::PlaneTextureRenderChanged
	Action_2_t1793738231 * ___PlaneTextureRenderChanged_19;

public:
	inline static int32_t get_offset_of_Augmenter_2() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___Augmenter_2)); }
	inline Augmenter_t2015478513 * get_Augmenter_2() const { return ___Augmenter_2; }
	inline Augmenter_t2015478513 ** get_address_of_Augmenter_2() { return &___Augmenter_2; }
	inline void set_Augmenter_2(Augmenter_t2015478513 * value)
	{
		___Augmenter_2 = value;
		Il2CppCodeGenWriteBarrier(&___Augmenter_2, value);
	}

	inline static int32_t get_offset_of_RenderReality_3() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___RenderReality_3)); }
	inline bool get_RenderReality_3() const { return ___RenderReality_3; }
	inline bool* get_address_of_RenderReality_3() { return &___RenderReality_3; }
	inline void set_RenderReality_3(bool value)
	{
		___RenderReality_3 = value;
	}

	inline static int32_t get_offset_of_WorldCenter_4() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___WorldCenter_4)); }
	inline int32_t get_WorldCenter_4() const { return ___WorldCenter_4; }
	inline int32_t* get_address_of_WorldCenter_4() { return &___WorldCenter_4; }
	inline void set_WorldCenter_4(int32_t value)
	{
		___WorldCenter_4 = value;
	}

	inline static int32_t get_offset_of_rFlag_5() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___rFlag_5)); }
	inline bool get_rFlag_5() const { return ___rFlag_5; }
	inline bool* get_address_of_rFlag_5() { return &___rFlag_5; }
	inline void set_rFlag_5(bool value)
	{
		___rFlag_5 = value;
	}

	inline static int32_t get_offset_of_texCreated_6() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___texCreated_6)); }
	inline bool get_texCreated_6() const { return ___texCreated_6; }
	inline bool* get_address_of_texCreated_6() { return &___texCreated_6; }
	inline void set_texCreated_6(bool value)
	{
		___texCreated_6 = value;
	}

	inline static int32_t get_offset_of_streamer_7() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___streamer_7)); }
	inline CameraFrameStreamer_t4175238345 * get_streamer_7() const { return ___streamer_7; }
	inline CameraFrameStreamer_t4175238345 ** get_address_of_streamer_7() { return &___streamer_7; }
	inline void set_streamer_7(CameraFrameStreamer_t4175238345 * value)
	{
		___streamer_7 = value;
		Il2CppCodeGenWriteBarrier(&___streamer_7, value);
	}

	inline static int32_t get_offset_of_previousTargets_8() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___previousTargets_8)); }
	inline List_1_t1290329298 * get_previousTargets_8() const { return ___previousTargets_8; }
	inline List_1_t1290329298 ** get_address_of_previousTargets_8() { return &___previousTargets_8; }
	inline void set_previousTargets_8(List_1_t1290329298 * value)
	{
		___previousTargets_8 = value;
		Il2CppCodeGenWriteBarrier(&___previousTargets_8, value);
	}

	inline static int32_t get_offset_of_deviceBehaviour_9() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___deviceBehaviour_9)); }
	inline DeviceAbstractBehaviour_t3814910474 * get_deviceBehaviour_9() const { return ___deviceBehaviour_9; }
	inline DeviceAbstractBehaviour_t3814910474 ** get_address_of_deviceBehaviour_9() { return &___deviceBehaviour_9; }
	inline void set_deviceBehaviour_9(DeviceAbstractBehaviour_t3814910474 * value)
	{
		___deviceBehaviour_9 = value;
		Il2CppCodeGenWriteBarrier(&___deviceBehaviour_9, value);
	}

	inline static int32_t get_offset_of_preRenderReality_10() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___preRenderReality_10)); }
	inline bool get_preRenderReality_10() const { return ___preRenderReality_10; }
	inline bool* get_address_of_preRenderReality_10() { return &___preRenderReality_10; }
	inline void set_preRenderReality_10(bool value)
	{
		___preRenderReality_10 = value;
	}

	inline static int32_t get_offset_of_preFrameIdx_11() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___preFrameIdx_11)); }
	inline int32_t get_preFrameIdx_11() const { return ___preFrameIdx_11; }
	inline int32_t* get_address_of_preFrameIdx_11() { return &___preFrameIdx_11; }
	inline void set_preFrameIdx_11(int32_t value)
	{
		___preFrameIdx_11 = value;
	}

	inline static int32_t get_offset_of_CenterTarget_12() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___CenterTarget_12)); }
	inline TargetAbstractBehaviour_t1546528472 * get_CenterTarget_12() const { return ___CenterTarget_12; }
	inline TargetAbstractBehaviour_t1546528472 ** get_address_of_CenterTarget_12() { return &___CenterTarget_12; }
	inline void set_CenterTarget_12(TargetAbstractBehaviour_t1546528472 * value)
	{
		___CenterTarget_12 = value;
		Il2CppCodeGenWriteBarrier(&___CenterTarget_12, value);
	}

	inline static int32_t get_offset_of__size_13() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ____size_13)); }
	inline Vector2I_t2668621479  get__size_13() const { return ____size_13; }
	inline Vector2I_t2668621479 * get_address_of__size_13() { return &____size_13; }
	inline void set__size_13(Vector2I_t2668621479  value)
	{
		____size_13 = value;
	}

	inline static int32_t get_offset_of_PlaneTextureCreated_14() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___PlaneTextureCreated_14)); }
	inline Action_2_t1241929155 * get_PlaneTextureCreated_14() const { return ___PlaneTextureCreated_14; }
	inline Action_2_t1241929155 ** get_address_of_PlaneTextureCreated_14() { return &___PlaneTextureCreated_14; }
	inline void set_PlaneTextureCreated_14(Action_2_t1241929155 * value)
	{
		___PlaneTextureCreated_14 = value;
		Il2CppCodeGenWriteBarrier(&___PlaneTextureCreated_14, value);
	}

	inline static int32_t get_offset_of_FrameUpdate_15() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___FrameUpdate_15)); }
	inline Action_2_t630539512 * get_FrameUpdate_15() const { return ___FrameUpdate_15; }
	inline Action_2_t630539512 ** get_address_of_FrameUpdate_15() { return &___FrameUpdate_15; }
	inline void set_FrameUpdate_15(Action_2_t630539512 * value)
	{
		___FrameUpdate_15 = value;
		Il2CppCodeGenWriteBarrier(&___FrameUpdate_15, value);
	}

	inline static int32_t get_offset_of_TargetFound_16() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___TargetFound_16)); }
	inline Action_3_t1017994765 * get_TargetFound_16() const { return ___TargetFound_16; }
	inline Action_3_t1017994765 ** get_address_of_TargetFound_16() { return &___TargetFound_16; }
	inline void set_TargetFound_16(Action_3_t1017994765 * value)
	{
		___TargetFound_16 = value;
		Il2CppCodeGenWriteBarrier(&___TargetFound_16, value);
	}

	inline static int32_t get_offset_of_TargetLost_17() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___TargetLost_17)); }
	inline Action_3_t1017994765 * get_TargetLost_17() const { return ___TargetLost_17; }
	inline Action_3_t1017994765 ** get_address_of_TargetLost_17() { return &___TargetLost_17; }
	inline void set_TargetLost_17(Action_3_t1017994765 * value)
	{
		___TargetLost_17 = value;
		Il2CppCodeGenWriteBarrier(&___TargetLost_17, value);
	}

	inline static int32_t get_offset_of_TextMessage_18() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___TextMessage_18)); }
	inline Action_2_t3543900955 * get_TextMessage_18() const { return ___TextMessage_18; }
	inline Action_2_t3543900955 ** get_address_of_TextMessage_18() { return &___TextMessage_18; }
	inline void set_TextMessage_18(Action_2_t3543900955 * value)
	{
		___TextMessage_18 = value;
		Il2CppCodeGenWriteBarrier(&___TextMessage_18, value);
	}

	inline static int32_t get_offset_of_PlaneTextureRenderChanged_19() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___PlaneTextureRenderChanged_19)); }
	inline Action_2_t1793738231 * get_PlaneTextureRenderChanged_19() const { return ___PlaneTextureRenderChanged_19; }
	inline Action_2_t1793738231 ** get_address_of_PlaneTextureRenderChanged_19() { return &___PlaneTextureRenderChanged_19; }
	inline void set_PlaneTextureRenderChanged_19(Action_2_t1793738231 * value)
	{
		___PlaneTextureRenderChanged_19 = value;
		Il2CppCodeGenWriteBarrier(&___PlaneTextureRenderChanged_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
