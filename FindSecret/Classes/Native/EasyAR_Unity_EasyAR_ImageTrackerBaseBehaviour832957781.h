#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_DeviceUserAbstractBehaviour3752823894.h"
#include "EasyAR_Unity_EasyAR_ImageTrackerBaseBehaviour_Imag2984427245.h"

// EasyAR.ImageTracker
struct ImageTracker_t1477204863;
// System.Collections.Generic.List`1<EasyAR.ImageTargetBaseBehaviour>
struct List_1_t2845139117;
// EasyAR.CameraDevice
struct CameraDevice_t2123284476;
// System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean>
struct Action_4_t3203474019;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ImageTrackerBaseBehaviour
struct  ImageTrackerBaseBehaviour_t832957781  : public DeviceUserAbstractBehaviour_t3752823894
{
public:
	// EasyAR.ImageTrackerBaseBehaviour/ImageTrackerMode EasyAR.ImageTrackerBaseBehaviour::Mode
	int32_t ___Mode_5;
	// EasyAR.ImageTracker EasyAR.ImageTrackerBaseBehaviour::Tracker
	ImageTracker_t1477204863 * ___Tracker_6;
	// System.Collections.Generic.List`1<EasyAR.ImageTargetBaseBehaviour> EasyAR.ImageTrackerBaseBehaviour::imageTargetBaseBehaviours
	List_1_t2845139117 * ___imageTargetBaseBehaviours_7;
	// System.Collections.Generic.List`1<EasyAR.ImageTargetBaseBehaviour> EasyAR.ImageTrackerBaseBehaviour::imageTargetBaseBehaviours_loadqueue
	List_1_t2845139117 * ___imageTargetBaseBehaviours_loadqueue_8;
	// System.Boolean EasyAR.ImageTrackerBaseBehaviour::_arStarted
	bool ____arStarted_9;
	// EasyAR.CameraDevice EasyAR.ImageTrackerBaseBehaviour::cameraDevice
	CameraDevice_t2123284476 * ___cameraDevice_10;
	// System.Int32 EasyAR.ImageTrackerBaseBehaviour::simultaneousNum
	int32_t ___simultaneousNum_11;
	// System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean> EasyAR.ImageTrackerBaseBehaviour::TargetLoad
	Action_4_t3203474019 * ___TargetLoad_12;
	// System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean> EasyAR.ImageTrackerBaseBehaviour::TargetUnload
	Action_4_t3203474019 * ___TargetUnload_13;

public:
	inline static int32_t get_offset_of_Mode_5() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t832957781, ___Mode_5)); }
	inline int32_t get_Mode_5() const { return ___Mode_5; }
	inline int32_t* get_address_of_Mode_5() { return &___Mode_5; }
	inline void set_Mode_5(int32_t value)
	{
		___Mode_5 = value;
	}

	inline static int32_t get_offset_of_Tracker_6() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t832957781, ___Tracker_6)); }
	inline ImageTracker_t1477204863 * get_Tracker_6() const { return ___Tracker_6; }
	inline ImageTracker_t1477204863 ** get_address_of_Tracker_6() { return &___Tracker_6; }
	inline void set_Tracker_6(ImageTracker_t1477204863 * value)
	{
		___Tracker_6 = value;
		Il2CppCodeGenWriteBarrier(&___Tracker_6, value);
	}

	inline static int32_t get_offset_of_imageTargetBaseBehaviours_7() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t832957781, ___imageTargetBaseBehaviours_7)); }
	inline List_1_t2845139117 * get_imageTargetBaseBehaviours_7() const { return ___imageTargetBaseBehaviours_7; }
	inline List_1_t2845139117 ** get_address_of_imageTargetBaseBehaviours_7() { return &___imageTargetBaseBehaviours_7; }
	inline void set_imageTargetBaseBehaviours_7(List_1_t2845139117 * value)
	{
		___imageTargetBaseBehaviours_7 = value;
		Il2CppCodeGenWriteBarrier(&___imageTargetBaseBehaviours_7, value);
	}

	inline static int32_t get_offset_of_imageTargetBaseBehaviours_loadqueue_8() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t832957781, ___imageTargetBaseBehaviours_loadqueue_8)); }
	inline List_1_t2845139117 * get_imageTargetBaseBehaviours_loadqueue_8() const { return ___imageTargetBaseBehaviours_loadqueue_8; }
	inline List_1_t2845139117 ** get_address_of_imageTargetBaseBehaviours_loadqueue_8() { return &___imageTargetBaseBehaviours_loadqueue_8; }
	inline void set_imageTargetBaseBehaviours_loadqueue_8(List_1_t2845139117 * value)
	{
		___imageTargetBaseBehaviours_loadqueue_8 = value;
		Il2CppCodeGenWriteBarrier(&___imageTargetBaseBehaviours_loadqueue_8, value);
	}

	inline static int32_t get_offset_of__arStarted_9() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t832957781, ____arStarted_9)); }
	inline bool get__arStarted_9() const { return ____arStarted_9; }
	inline bool* get_address_of__arStarted_9() { return &____arStarted_9; }
	inline void set__arStarted_9(bool value)
	{
		____arStarted_9 = value;
	}

	inline static int32_t get_offset_of_cameraDevice_10() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t832957781, ___cameraDevice_10)); }
	inline CameraDevice_t2123284476 * get_cameraDevice_10() const { return ___cameraDevice_10; }
	inline CameraDevice_t2123284476 ** get_address_of_cameraDevice_10() { return &___cameraDevice_10; }
	inline void set_cameraDevice_10(CameraDevice_t2123284476 * value)
	{
		___cameraDevice_10 = value;
		Il2CppCodeGenWriteBarrier(&___cameraDevice_10, value);
	}

	inline static int32_t get_offset_of_simultaneousNum_11() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t832957781, ___simultaneousNum_11)); }
	inline int32_t get_simultaneousNum_11() const { return ___simultaneousNum_11; }
	inline int32_t* get_address_of_simultaneousNum_11() { return &___simultaneousNum_11; }
	inline void set_simultaneousNum_11(int32_t value)
	{
		___simultaneousNum_11 = value;
	}

	inline static int32_t get_offset_of_TargetLoad_12() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t832957781, ___TargetLoad_12)); }
	inline Action_4_t3203474019 * get_TargetLoad_12() const { return ___TargetLoad_12; }
	inline Action_4_t3203474019 ** get_address_of_TargetLoad_12() { return &___TargetLoad_12; }
	inline void set_TargetLoad_12(Action_4_t3203474019 * value)
	{
		___TargetLoad_12 = value;
		Il2CppCodeGenWriteBarrier(&___TargetLoad_12, value);
	}

	inline static int32_t get_offset_of_TargetUnload_13() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t832957781, ___TargetUnload_13)); }
	inline Action_4_t3203474019 * get_TargetUnload_13() const { return ___TargetUnload_13; }
	inline Action_4_t3203474019 ** get_address_of_TargetUnload_13() { return &___TargetUnload_13; }
	inline void set_TargetUnload_13(Action_4_t3203474019 * value)
	{
		___TargetUnload_13 = value;
		Il2CppCodeGenWriteBarrier(&___TargetUnload_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
