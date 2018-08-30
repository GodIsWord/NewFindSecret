#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_DeviceUserAbstractBehaviour3752823894.h"

// EasyAR.ObjectTracker
struct ObjectTracker_t4151077153;
// System.Collections.Generic.List`1<EasyAR.ObjectTargetBaseBehaviour>
struct List_1_t2539933966;
// EasyAR.CameraDevice
struct CameraDevice_t2123284476;
// System.Action`4<EasyAR.ObjectTrackerBaseBehaviour,EasyAR.ObjectTargetBaseBehaviour,EasyAR.Target,System.Boolean>
struct Action_4_t1630973389;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ObjectTrackerBaseBehaviour
struct  ObjectTrackerBaseBehaviour_t1511079792  : public DeviceUserAbstractBehaviour_t3752823894
{
public:
	// EasyAR.ObjectTracker EasyAR.ObjectTrackerBaseBehaviour::Tracker
	ObjectTracker_t4151077153 * ___Tracker_5;
	// System.Collections.Generic.List`1<EasyAR.ObjectTargetBaseBehaviour> EasyAR.ObjectTrackerBaseBehaviour::imageTargetBaseBehaviours
	List_1_t2539933966 * ___imageTargetBaseBehaviours_6;
	// System.Collections.Generic.List`1<EasyAR.ObjectTargetBaseBehaviour> EasyAR.ObjectTrackerBaseBehaviour::imageTargetBaseBehaviours_loadqueue
	List_1_t2539933966 * ___imageTargetBaseBehaviours_loadqueue_7;
	// System.Boolean EasyAR.ObjectTrackerBaseBehaviour::_arStarted
	bool ____arStarted_8;
	// EasyAR.CameraDevice EasyAR.ObjectTrackerBaseBehaviour::cameraDevice
	CameraDevice_t2123284476 * ___cameraDevice_9;
	// System.Int32 EasyAR.ObjectTrackerBaseBehaviour::simultaneousNum
	int32_t ___simultaneousNum_10;
	// System.Action`4<EasyAR.ObjectTrackerBaseBehaviour,EasyAR.ObjectTargetBaseBehaviour,EasyAR.Target,System.Boolean> EasyAR.ObjectTrackerBaseBehaviour::TargetLoad
	Action_4_t1630973389 * ___TargetLoad_11;
	// System.Action`4<EasyAR.ObjectTrackerBaseBehaviour,EasyAR.ObjectTargetBaseBehaviour,EasyAR.Target,System.Boolean> EasyAR.ObjectTrackerBaseBehaviour::TargetUnload
	Action_4_t1630973389 * ___TargetUnload_12;

public:
	inline static int32_t get_offset_of_Tracker_5() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ___Tracker_5)); }
	inline ObjectTracker_t4151077153 * get_Tracker_5() const { return ___Tracker_5; }
	inline ObjectTracker_t4151077153 ** get_address_of_Tracker_5() { return &___Tracker_5; }
	inline void set_Tracker_5(ObjectTracker_t4151077153 * value)
	{
		___Tracker_5 = value;
		Il2CppCodeGenWriteBarrier(&___Tracker_5, value);
	}

	inline static int32_t get_offset_of_imageTargetBaseBehaviours_6() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ___imageTargetBaseBehaviours_6)); }
	inline List_1_t2539933966 * get_imageTargetBaseBehaviours_6() const { return ___imageTargetBaseBehaviours_6; }
	inline List_1_t2539933966 ** get_address_of_imageTargetBaseBehaviours_6() { return &___imageTargetBaseBehaviours_6; }
	inline void set_imageTargetBaseBehaviours_6(List_1_t2539933966 * value)
	{
		___imageTargetBaseBehaviours_6 = value;
		Il2CppCodeGenWriteBarrier(&___imageTargetBaseBehaviours_6, value);
	}

	inline static int32_t get_offset_of_imageTargetBaseBehaviours_loadqueue_7() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ___imageTargetBaseBehaviours_loadqueue_7)); }
	inline List_1_t2539933966 * get_imageTargetBaseBehaviours_loadqueue_7() const { return ___imageTargetBaseBehaviours_loadqueue_7; }
	inline List_1_t2539933966 ** get_address_of_imageTargetBaseBehaviours_loadqueue_7() { return &___imageTargetBaseBehaviours_loadqueue_7; }
	inline void set_imageTargetBaseBehaviours_loadqueue_7(List_1_t2539933966 * value)
	{
		___imageTargetBaseBehaviours_loadqueue_7 = value;
		Il2CppCodeGenWriteBarrier(&___imageTargetBaseBehaviours_loadqueue_7, value);
	}

	inline static int32_t get_offset_of__arStarted_8() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ____arStarted_8)); }
	inline bool get__arStarted_8() const { return ____arStarted_8; }
	inline bool* get_address_of__arStarted_8() { return &____arStarted_8; }
	inline void set__arStarted_8(bool value)
	{
		____arStarted_8 = value;
	}

	inline static int32_t get_offset_of_cameraDevice_9() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ___cameraDevice_9)); }
	inline CameraDevice_t2123284476 * get_cameraDevice_9() const { return ___cameraDevice_9; }
	inline CameraDevice_t2123284476 ** get_address_of_cameraDevice_9() { return &___cameraDevice_9; }
	inline void set_cameraDevice_9(CameraDevice_t2123284476 * value)
	{
		___cameraDevice_9 = value;
		Il2CppCodeGenWriteBarrier(&___cameraDevice_9, value);
	}

	inline static int32_t get_offset_of_simultaneousNum_10() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ___simultaneousNum_10)); }
	inline int32_t get_simultaneousNum_10() const { return ___simultaneousNum_10; }
	inline int32_t* get_address_of_simultaneousNum_10() { return &___simultaneousNum_10; }
	inline void set_simultaneousNum_10(int32_t value)
	{
		___simultaneousNum_10 = value;
	}

	inline static int32_t get_offset_of_TargetLoad_11() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ___TargetLoad_11)); }
	inline Action_4_t1630973389 * get_TargetLoad_11() const { return ___TargetLoad_11; }
	inline Action_4_t1630973389 ** get_address_of_TargetLoad_11() { return &___TargetLoad_11; }
	inline void set_TargetLoad_11(Action_4_t1630973389 * value)
	{
		___TargetLoad_11 = value;
		Il2CppCodeGenWriteBarrier(&___TargetLoad_11, value);
	}

	inline static int32_t get_offset_of_TargetUnload_12() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ___TargetUnload_12)); }
	inline Action_4_t1630973389 * get_TargetUnload_12() const { return ___TargetUnload_12; }
	inline Action_4_t1630973389 ** get_address_of_TargetUnload_12() { return &___TargetUnload_12; }
	inline void set_TargetUnload_12(Action_4_t1630973389 * value)
	{
		___TargetUnload_12 = value;
		Il2CppCodeGenWriteBarrier(&___TargetUnload_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
