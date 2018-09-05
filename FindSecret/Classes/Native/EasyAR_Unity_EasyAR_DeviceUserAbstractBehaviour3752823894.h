#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// EasyAR.DeviceAbstractBehaviour
struct DeviceAbstractBehaviour_t3814910474;
// System.Action`2<EasyAR.DeviceUserAbstractBehaviour,EasyAR.DeviceAbstractBehaviour>
struct Action_2_t4219074802;
// System.Action`1<EasyAR.DeviceUserAbstractBehaviour>
struct Action_1_t3925291489;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.DeviceUserAbstractBehaviour
struct  DeviceUserAbstractBehaviour_t3752823894  : public MonoBehaviour_t3962482529
{
public:
	// EasyAR.DeviceAbstractBehaviour EasyAR.DeviceUserAbstractBehaviour::deviceBehaviour
	DeviceAbstractBehaviour_t3814910474 * ___deviceBehaviour_2;
	// System.Action`2<EasyAR.DeviceUserAbstractBehaviour,EasyAR.DeviceAbstractBehaviour> EasyAR.DeviceUserAbstractBehaviour::WorkStart
	Action_2_t4219074802 * ___WorkStart_3;
	// System.Action`1<EasyAR.DeviceUserAbstractBehaviour> EasyAR.DeviceUserAbstractBehaviour::WorkStop
	Action_1_t3925291489 * ___WorkStop_4;

public:
	inline static int32_t get_offset_of_deviceBehaviour_2() { return static_cast<int32_t>(offsetof(DeviceUserAbstractBehaviour_t3752823894, ___deviceBehaviour_2)); }
	inline DeviceAbstractBehaviour_t3814910474 * get_deviceBehaviour_2() const { return ___deviceBehaviour_2; }
	inline DeviceAbstractBehaviour_t3814910474 ** get_address_of_deviceBehaviour_2() { return &___deviceBehaviour_2; }
	inline void set_deviceBehaviour_2(DeviceAbstractBehaviour_t3814910474 * value)
	{
		___deviceBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier(&___deviceBehaviour_2, value);
	}

	inline static int32_t get_offset_of_WorkStart_3() { return static_cast<int32_t>(offsetof(DeviceUserAbstractBehaviour_t3752823894, ___WorkStart_3)); }
	inline Action_2_t4219074802 * get_WorkStart_3() const { return ___WorkStart_3; }
	inline Action_2_t4219074802 ** get_address_of_WorkStart_3() { return &___WorkStart_3; }
	inline void set_WorkStart_3(Action_2_t4219074802 * value)
	{
		___WorkStart_3 = value;
		Il2CppCodeGenWriteBarrier(&___WorkStart_3, value);
	}

	inline static int32_t get_offset_of_WorkStop_4() { return static_cast<int32_t>(offsetof(DeviceUserAbstractBehaviour_t3752823894, ___WorkStop_4)); }
	inline Action_1_t3925291489 * get_WorkStop_4() const { return ___WorkStop_4; }
	inline Action_1_t3925291489 ** get_address_of_WorkStop_4() { return &___WorkStop_4; }
	inline void set_WorkStop_4(Action_1_t3925291489 * value)
	{
		___WorkStop_4 = value;
		Il2CppCodeGenWriteBarrier(&___WorkStop_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
