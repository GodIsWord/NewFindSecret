#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_Base1500127977.h"
#include "mscorlib_System_IntPtr840150181.h"

// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify>
struct Dictionary_2_t2229004654;
// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.RecorderNative>
struct Dictionary_2_t907062036;
// EasyAR.RecorderNative/CallBack
struct CallBack_t877084370;
// System.Action`2<EasyAR.RecorderNative/PermissionStatus,System.String>
struct Action_2_t587925928;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderNative
struct  RecorderNative_t2685196317  : public Base_t1500127977
{
public:
	// EasyAR.RecorderNative/CallBack EasyAR.RecorderNative::_callBack
	CallBack_t877084370 * ____callBack_5;
	// System.IntPtr EasyAR.RecorderNative::_objCallback
	IntPtr_t ____objCallback_6;
	// EasyAR.RecorderNative/CallBack EasyAR.RecorderNative::_permissionCallBack
	CallBack_t877084370 * ____permissionCallBack_7;
	// System.IntPtr EasyAR.RecorderNative::_permissionObjCallback
	IntPtr_t ____permissionObjCallback_8;
	// System.Action`2<EasyAR.RecorderNative/PermissionStatus,System.String> EasyAR.RecorderNative::PermissionStatusNotify
	Action_2_t587925928 * ___PermissionStatusNotify_9;

public:
	inline static int32_t get_offset_of__callBack_5() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317, ____callBack_5)); }
	inline CallBack_t877084370 * get__callBack_5() const { return ____callBack_5; }
	inline CallBack_t877084370 ** get_address_of__callBack_5() { return &____callBack_5; }
	inline void set__callBack_5(CallBack_t877084370 * value)
	{
		____callBack_5 = value;
		Il2CppCodeGenWriteBarrier(&____callBack_5, value);
	}

	inline static int32_t get_offset_of__objCallback_6() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317, ____objCallback_6)); }
	inline IntPtr_t get__objCallback_6() const { return ____objCallback_6; }
	inline IntPtr_t* get_address_of__objCallback_6() { return &____objCallback_6; }
	inline void set__objCallback_6(IntPtr_t value)
	{
		____objCallback_6 = value;
	}

	inline static int32_t get_offset_of__permissionCallBack_7() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317, ____permissionCallBack_7)); }
	inline CallBack_t877084370 * get__permissionCallBack_7() const { return ____permissionCallBack_7; }
	inline CallBack_t877084370 ** get_address_of__permissionCallBack_7() { return &____permissionCallBack_7; }
	inline void set__permissionCallBack_7(CallBack_t877084370 * value)
	{
		____permissionCallBack_7 = value;
		Il2CppCodeGenWriteBarrier(&____permissionCallBack_7, value);
	}

	inline static int32_t get_offset_of__permissionObjCallback_8() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317, ____permissionObjCallback_8)); }
	inline IntPtr_t get__permissionObjCallback_8() const { return ____permissionObjCallback_8; }
	inline IntPtr_t* get_address_of__permissionObjCallback_8() { return &____permissionObjCallback_8; }
	inline void set__permissionObjCallback_8(IntPtr_t value)
	{
		____permissionObjCallback_8 = value;
	}

	inline static int32_t get_offset_of_PermissionStatusNotify_9() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317, ___PermissionStatusNotify_9)); }
	inline Action_2_t587925928 * get_PermissionStatusNotify_9() const { return ___PermissionStatusNotify_9; }
	inline Action_2_t587925928 ** get_address_of_PermissionStatusNotify_9() { return &___PermissionStatusNotify_9; }
	inline void set_PermissionStatusNotify_9(Action_2_t587925928 * value)
	{
		___PermissionStatusNotify_9 = value;
		Il2CppCodeGenWriteBarrier(&___PermissionStatusNotify_9, value);
	}
};

struct RecorderNative_t2685196317_StaticFields
{
public:
	// System.Object EasyAR.RecorderNative::_mutex
	Il2CppObject * ____mutex_2;
	// System.Collections.Generic.Dictionary`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify> EasyAR.RecorderNative::_notifys
	Dictionary_2_t2229004654 * ____notifys_3;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.RecorderNative> EasyAR.RecorderNative::recorders
	Dictionary_2_t907062036 * ___recorders_4;

public:
	inline static int32_t get_offset_of__mutex_2() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317_StaticFields, ____mutex_2)); }
	inline Il2CppObject * get__mutex_2() const { return ____mutex_2; }
	inline Il2CppObject ** get_address_of__mutex_2() { return &____mutex_2; }
	inline void set__mutex_2(Il2CppObject * value)
	{
		____mutex_2 = value;
		Il2CppCodeGenWriteBarrier(&____mutex_2, value);
	}

	inline static int32_t get_offset_of__notifys_3() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317_StaticFields, ____notifys_3)); }
	inline Dictionary_2_t2229004654 * get__notifys_3() const { return ____notifys_3; }
	inline Dictionary_2_t2229004654 ** get_address_of__notifys_3() { return &____notifys_3; }
	inline void set__notifys_3(Dictionary_2_t2229004654 * value)
	{
		____notifys_3 = value;
		Il2CppCodeGenWriteBarrier(&____notifys_3, value);
	}

	inline static int32_t get_offset_of_recorders_4() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317_StaticFields, ___recorders_4)); }
	inline Dictionary_2_t907062036 * get_recorders_4() const { return ___recorders_4; }
	inline Dictionary_2_t907062036 ** get_address_of_recorders_4() { return &___recorders_4; }
	inline void set_recorders_4(Dictionary_2_t907062036 * value)
	{
		___recorders_4 = value;
		Il2CppCodeGenWriteBarrier(&___recorders_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
