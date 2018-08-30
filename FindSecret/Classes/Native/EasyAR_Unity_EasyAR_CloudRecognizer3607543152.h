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

// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.CloudRecognizer>
struct Dictionary_2_t1829408871;
// EasyAR.CloudRecognizer/CallBack
struct CallBack_t1026185311;
// EasyAR.CloudRecognizer/CallBackInit
struct CallBackInit_t3171830421;
// System.Action`2<EasyAR.CloudRecognizer,EasyAR.CloudRecognizer/Status>
struct Action_2_t2342559627;
// System.Action`3<EasyAR.CloudRecognizer,EasyAR.CloudRecognizer/Status,System.Collections.Generic.List`1<EasyAR.ImageTarget>>
struct Action_3_t3135872191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CloudRecognizer
struct  CloudRecognizer_t3607543152  : public Base_t1500127977
{
public:
	// System.Boolean EasyAR.CloudRecognizer::IsCheckNeeded
	bool ___IsCheckNeeded_2;
	// System.IntPtr EasyAR.CloudRecognizer::_objCallback
	IntPtr_t ____objCallback_4;
	// EasyAR.CloudRecognizer/CallBack EasyAR.CloudRecognizer::_callBack
	CallBack_t1026185311 * ____callBack_5;
	// EasyAR.CloudRecognizer/CallBackInit EasyAR.CloudRecognizer::_callBackInit
	CallBackInit_t3171830421 * ____callBackInit_6;
	// System.Boolean EasyAR.CloudRecognizer::_isMultithreadCallback
	bool ____isMultithreadCallback_7;
	// System.Action`2<EasyAR.CloudRecognizer,EasyAR.CloudRecognizer/Status> EasyAR.CloudRecognizer::CloudInitialize
	Action_2_t2342559627 * ___CloudInitialize_8;
	// System.Action`3<EasyAR.CloudRecognizer,EasyAR.CloudRecognizer/Status,System.Collections.Generic.List`1<EasyAR.ImageTarget>> EasyAR.CloudRecognizer::CloudUpdate
	Action_3_t3135872191 * ___CloudUpdate_9;

public:
	inline static int32_t get_offset_of_IsCheckNeeded_2() { return static_cast<int32_t>(offsetof(CloudRecognizer_t3607543152, ___IsCheckNeeded_2)); }
	inline bool get_IsCheckNeeded_2() const { return ___IsCheckNeeded_2; }
	inline bool* get_address_of_IsCheckNeeded_2() { return &___IsCheckNeeded_2; }
	inline void set_IsCheckNeeded_2(bool value)
	{
		___IsCheckNeeded_2 = value;
	}

	inline static int32_t get_offset_of__objCallback_4() { return static_cast<int32_t>(offsetof(CloudRecognizer_t3607543152, ____objCallback_4)); }
	inline IntPtr_t get__objCallback_4() const { return ____objCallback_4; }
	inline IntPtr_t* get_address_of__objCallback_4() { return &____objCallback_4; }
	inline void set__objCallback_4(IntPtr_t value)
	{
		____objCallback_4 = value;
	}

	inline static int32_t get_offset_of__callBack_5() { return static_cast<int32_t>(offsetof(CloudRecognizer_t3607543152, ____callBack_5)); }
	inline CallBack_t1026185311 * get__callBack_5() const { return ____callBack_5; }
	inline CallBack_t1026185311 ** get_address_of__callBack_5() { return &____callBack_5; }
	inline void set__callBack_5(CallBack_t1026185311 * value)
	{
		____callBack_5 = value;
		Il2CppCodeGenWriteBarrier(&____callBack_5, value);
	}

	inline static int32_t get_offset_of__callBackInit_6() { return static_cast<int32_t>(offsetof(CloudRecognizer_t3607543152, ____callBackInit_6)); }
	inline CallBackInit_t3171830421 * get__callBackInit_6() const { return ____callBackInit_6; }
	inline CallBackInit_t3171830421 ** get_address_of__callBackInit_6() { return &____callBackInit_6; }
	inline void set__callBackInit_6(CallBackInit_t3171830421 * value)
	{
		____callBackInit_6 = value;
		Il2CppCodeGenWriteBarrier(&____callBackInit_6, value);
	}

	inline static int32_t get_offset_of__isMultithreadCallback_7() { return static_cast<int32_t>(offsetof(CloudRecognizer_t3607543152, ____isMultithreadCallback_7)); }
	inline bool get__isMultithreadCallback_7() const { return ____isMultithreadCallback_7; }
	inline bool* get_address_of__isMultithreadCallback_7() { return &____isMultithreadCallback_7; }
	inline void set__isMultithreadCallback_7(bool value)
	{
		____isMultithreadCallback_7 = value;
	}

	inline static int32_t get_offset_of_CloudInitialize_8() { return static_cast<int32_t>(offsetof(CloudRecognizer_t3607543152, ___CloudInitialize_8)); }
	inline Action_2_t2342559627 * get_CloudInitialize_8() const { return ___CloudInitialize_8; }
	inline Action_2_t2342559627 ** get_address_of_CloudInitialize_8() { return &___CloudInitialize_8; }
	inline void set_CloudInitialize_8(Action_2_t2342559627 * value)
	{
		___CloudInitialize_8 = value;
		Il2CppCodeGenWriteBarrier(&___CloudInitialize_8, value);
	}

	inline static int32_t get_offset_of_CloudUpdate_9() { return static_cast<int32_t>(offsetof(CloudRecognizer_t3607543152, ___CloudUpdate_9)); }
	inline Action_3_t3135872191 * get_CloudUpdate_9() const { return ___CloudUpdate_9; }
	inline Action_3_t3135872191 ** get_address_of_CloudUpdate_9() { return &___CloudUpdate_9; }
	inline void set_CloudUpdate_9(Action_3_t3135872191 * value)
	{
		___CloudUpdate_9 = value;
		Il2CppCodeGenWriteBarrier(&___CloudUpdate_9, value);
	}
};

struct CloudRecognizer_t3607543152_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.CloudRecognizer> EasyAR.CloudRecognizer::clouds
	Dictionary_2_t1829408871 * ___clouds_3;

public:
	inline static int32_t get_offset_of_clouds_3() { return static_cast<int32_t>(offsetof(CloudRecognizer_t3607543152_StaticFields, ___clouds_3)); }
	inline Dictionary_2_t1829408871 * get_clouds_3() const { return ___clouds_3; }
	inline Dictionary_2_t1829408871 ** get_address_of_clouds_3() { return &___clouds_3; }
	inline void set_clouds_3(Dictionary_2_t1829408871 * value)
	{
		___clouds_3 = value;
		Il2CppCodeGenWriteBarrier(&___clouds_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
