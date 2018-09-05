#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// EasyAR.ARBuilder
struct ARBuilder_t3904264120;
// System.Collections.Generic.List`1<EasyAR.CameraDeviceBaseBehaviour>
struct List_1_t2744889217;
// System.Collections.Generic.List`1<EasyAR.ARCameraBaseBehaviour>
struct List_1_t2184168898;
// System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour>
struct List_1_t2305032523;
// System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour>
struct List_1_t2983154534;
// EasyAR.RecorderBaseBehaviour
struct RecorderBaseBehaviour_t2449616875;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ARBuilder
struct  ARBuilder_t3904264120  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<EasyAR.CameraDeviceBaseBehaviour> EasyAR.ARBuilder::CameraDeviceBehaviours
	List_1_t2744889217 * ___CameraDeviceBehaviours_1;
	// System.Collections.Generic.List`1<EasyAR.ARCameraBaseBehaviour> EasyAR.ARBuilder::ARCameraBehaviours
	List_1_t2184168898 * ___ARCameraBehaviours_2;
	// System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour> EasyAR.ARBuilder::ImageTrackerBehaviours
	List_1_t2305032523 * ___ImageTrackerBehaviours_3;
	// System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour> EasyAR.ARBuilder::ObjectTrackerBehaviours
	List_1_t2983154534 * ___ObjectTrackerBehaviours_4;
	// EasyAR.RecorderBaseBehaviour EasyAR.ARBuilder::RecorderBehaviour
	RecorderBaseBehaviour_t2449616875 * ___RecorderBehaviour_5;

public:
	inline static int32_t get_offset_of_CameraDeviceBehaviours_1() { return static_cast<int32_t>(offsetof(ARBuilder_t3904264120, ___CameraDeviceBehaviours_1)); }
	inline List_1_t2744889217 * get_CameraDeviceBehaviours_1() const { return ___CameraDeviceBehaviours_1; }
	inline List_1_t2744889217 ** get_address_of_CameraDeviceBehaviours_1() { return &___CameraDeviceBehaviours_1; }
	inline void set_CameraDeviceBehaviours_1(List_1_t2744889217 * value)
	{
		___CameraDeviceBehaviours_1 = value;
		Il2CppCodeGenWriteBarrier(&___CameraDeviceBehaviours_1, value);
	}

	inline static int32_t get_offset_of_ARCameraBehaviours_2() { return static_cast<int32_t>(offsetof(ARBuilder_t3904264120, ___ARCameraBehaviours_2)); }
	inline List_1_t2184168898 * get_ARCameraBehaviours_2() const { return ___ARCameraBehaviours_2; }
	inline List_1_t2184168898 ** get_address_of_ARCameraBehaviours_2() { return &___ARCameraBehaviours_2; }
	inline void set_ARCameraBehaviours_2(List_1_t2184168898 * value)
	{
		___ARCameraBehaviours_2 = value;
		Il2CppCodeGenWriteBarrier(&___ARCameraBehaviours_2, value);
	}

	inline static int32_t get_offset_of_ImageTrackerBehaviours_3() { return static_cast<int32_t>(offsetof(ARBuilder_t3904264120, ___ImageTrackerBehaviours_3)); }
	inline List_1_t2305032523 * get_ImageTrackerBehaviours_3() const { return ___ImageTrackerBehaviours_3; }
	inline List_1_t2305032523 ** get_address_of_ImageTrackerBehaviours_3() { return &___ImageTrackerBehaviours_3; }
	inline void set_ImageTrackerBehaviours_3(List_1_t2305032523 * value)
	{
		___ImageTrackerBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier(&___ImageTrackerBehaviours_3, value);
	}

	inline static int32_t get_offset_of_ObjectTrackerBehaviours_4() { return static_cast<int32_t>(offsetof(ARBuilder_t3904264120, ___ObjectTrackerBehaviours_4)); }
	inline List_1_t2983154534 * get_ObjectTrackerBehaviours_4() const { return ___ObjectTrackerBehaviours_4; }
	inline List_1_t2983154534 ** get_address_of_ObjectTrackerBehaviours_4() { return &___ObjectTrackerBehaviours_4; }
	inline void set_ObjectTrackerBehaviours_4(List_1_t2983154534 * value)
	{
		___ObjectTrackerBehaviours_4 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectTrackerBehaviours_4, value);
	}

	inline static int32_t get_offset_of_RecorderBehaviour_5() { return static_cast<int32_t>(offsetof(ARBuilder_t3904264120, ___RecorderBehaviour_5)); }
	inline RecorderBaseBehaviour_t2449616875 * get_RecorderBehaviour_5() const { return ___RecorderBehaviour_5; }
	inline RecorderBaseBehaviour_t2449616875 ** get_address_of_RecorderBehaviour_5() { return &___RecorderBehaviour_5; }
	inline void set_RecorderBehaviour_5(RecorderBaseBehaviour_t2449616875 * value)
	{
		___RecorderBehaviour_5 = value;
		Il2CppCodeGenWriteBarrier(&___RecorderBehaviour_5, value);
	}
};

struct ARBuilder_t3904264120_StaticFields
{
public:
	// EasyAR.ARBuilder EasyAR.ARBuilder::instance
	ARBuilder_t3904264120 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(ARBuilder_t3904264120_StaticFields, ___instance_0)); }
	inline ARBuilder_t3904264120 * get_instance_0() const { return ___instance_0; }
	inline ARBuilder_t3904264120 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(ARBuilder_t3904264120 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
