#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "AssemblyU2DCSharp_Mode2989995043.h"

// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Transform
struct Transform_t3600365921;
// message.GCAroundInfo
struct GCAroundInfo_t2434576971;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// System.Collections.Generic.List`1<NewViewObjScript>
struct List_1_t1561294982;
// BoxItem
struct BoxItem_t647302033;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.Stack`1<UnityEngine.Transform>
struct Stack_1_t148788080;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Transform>>
struct List_1_t2249548109;
// System.Comparison`1<UnityEngine.Transform>
struct Comparison_1_t3375297100;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreatePeopleBehaviour
struct  CreatePeopleBehaviour_t1964588929  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject CreatePeopleBehaviour::obj
	GameObject_t1113636619 * ___obj_2;
	// UnityEngine.Transform CreatePeopleBehaviour::parentObj
	Transform_t3600365921 * ___parentObj_3;
	// UnityEngine.Transform CreatePeopleBehaviour::cameraTran
	Transform_t3600365921 * ___cameraTran_4;
	// message.GCAroundInfo CreatePeopleBehaviour::gcAroundInfo
	GCAroundInfo_t2434576971 * ___gcAroundInfo_5;
	// UnityEngine.GameObject CreatePeopleBehaviour::boxItem
	GameObject_t1113636619 * ___boxItem_6;
	// System.Single CreatePeopleBehaviour::scale
	float ___scale_7;
	// System.Boolean CreatePeopleBehaviour::_isOpen
	bool ____isOpen_8;
	// System.Collections.Generic.List`1<UnityEngine.Transform> CreatePeopleBehaviour::listgo
	List_1_t777473367 * ___listgo_9;
	// BoxItem CreatePeopleBehaviour::lastgo
	BoxItem_t647302033 * ___lastgo_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CreatePeopleBehaviour::boxList
	List_1_t2585711361 * ___boxList_12;
	// System.Collections.Generic.Stack`1<UnityEngine.Transform> CreatePeopleBehaviour::stack
	Stack_1_t148788080 * ___stack_13;
	// System.Collections.Generic.Stack`1<UnityEngine.Transform> CreatePeopleBehaviour::stackTemp
	Stack_1_t148788080 * ___stackTemp_14;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Transform>> CreatePeopleBehaviour::buffer
	List_1_t2249548109 * ___buffer_15;
	// System.Int32 CreatePeopleBehaviour::frame
	int32_t ___frame_16;
	// Mode CreatePeopleBehaviour::curMode
	int32_t ___curMode_17;

public:
	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ___obj_2)); }
	inline GameObject_t1113636619 * get_obj_2() const { return ___obj_2; }
	inline GameObject_t1113636619 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(GameObject_t1113636619 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier(&___obj_2, value);
	}

	inline static int32_t get_offset_of_parentObj_3() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ___parentObj_3)); }
	inline Transform_t3600365921 * get_parentObj_3() const { return ___parentObj_3; }
	inline Transform_t3600365921 ** get_address_of_parentObj_3() { return &___parentObj_3; }
	inline void set_parentObj_3(Transform_t3600365921 * value)
	{
		___parentObj_3 = value;
		Il2CppCodeGenWriteBarrier(&___parentObj_3, value);
	}

	inline static int32_t get_offset_of_cameraTran_4() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ___cameraTran_4)); }
	inline Transform_t3600365921 * get_cameraTran_4() const { return ___cameraTran_4; }
	inline Transform_t3600365921 ** get_address_of_cameraTran_4() { return &___cameraTran_4; }
	inline void set_cameraTran_4(Transform_t3600365921 * value)
	{
		___cameraTran_4 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTran_4, value);
	}

	inline static int32_t get_offset_of_gcAroundInfo_5() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ___gcAroundInfo_5)); }
	inline GCAroundInfo_t2434576971 * get_gcAroundInfo_5() const { return ___gcAroundInfo_5; }
	inline GCAroundInfo_t2434576971 ** get_address_of_gcAroundInfo_5() { return &___gcAroundInfo_5; }
	inline void set_gcAroundInfo_5(GCAroundInfo_t2434576971 * value)
	{
		___gcAroundInfo_5 = value;
		Il2CppCodeGenWriteBarrier(&___gcAroundInfo_5, value);
	}

	inline static int32_t get_offset_of_boxItem_6() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ___boxItem_6)); }
	inline GameObject_t1113636619 * get_boxItem_6() const { return ___boxItem_6; }
	inline GameObject_t1113636619 ** get_address_of_boxItem_6() { return &___boxItem_6; }
	inline void set_boxItem_6(GameObject_t1113636619 * value)
	{
		___boxItem_6 = value;
		Il2CppCodeGenWriteBarrier(&___boxItem_6, value);
	}

	inline static int32_t get_offset_of_scale_7() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ___scale_7)); }
	inline float get_scale_7() const { return ___scale_7; }
	inline float* get_address_of_scale_7() { return &___scale_7; }
	inline void set_scale_7(float value)
	{
		___scale_7 = value;
	}

	inline static int32_t get_offset_of__isOpen_8() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ____isOpen_8)); }
	inline bool get__isOpen_8() const { return ____isOpen_8; }
	inline bool* get_address_of__isOpen_8() { return &____isOpen_8; }
	inline void set__isOpen_8(bool value)
	{
		____isOpen_8 = value;
	}

	inline static int32_t get_offset_of_listgo_9() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ___listgo_9)); }
	inline List_1_t777473367 * get_listgo_9() const { return ___listgo_9; }
	inline List_1_t777473367 ** get_address_of_listgo_9() { return &___listgo_9; }
	inline void set_listgo_9(List_1_t777473367 * value)
	{
		___listgo_9 = value;
		Il2CppCodeGenWriteBarrier(&___listgo_9, value);
	}

	inline static int32_t get_offset_of_lastgo_11() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ___lastgo_11)); }
	inline BoxItem_t647302033 * get_lastgo_11() const { return ___lastgo_11; }
	inline BoxItem_t647302033 ** get_address_of_lastgo_11() { return &___lastgo_11; }
	inline void set_lastgo_11(BoxItem_t647302033 * value)
	{
		___lastgo_11 = value;
		Il2CppCodeGenWriteBarrier(&___lastgo_11, value);
	}

	inline static int32_t get_offset_of_boxList_12() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ___boxList_12)); }
	inline List_1_t2585711361 * get_boxList_12() const { return ___boxList_12; }
	inline List_1_t2585711361 ** get_address_of_boxList_12() { return &___boxList_12; }
	inline void set_boxList_12(List_1_t2585711361 * value)
	{
		___boxList_12 = value;
		Il2CppCodeGenWriteBarrier(&___boxList_12, value);
	}

	inline static int32_t get_offset_of_stack_13() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ___stack_13)); }
	inline Stack_1_t148788080 * get_stack_13() const { return ___stack_13; }
	inline Stack_1_t148788080 ** get_address_of_stack_13() { return &___stack_13; }
	inline void set_stack_13(Stack_1_t148788080 * value)
	{
		___stack_13 = value;
		Il2CppCodeGenWriteBarrier(&___stack_13, value);
	}

	inline static int32_t get_offset_of_stackTemp_14() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ___stackTemp_14)); }
	inline Stack_1_t148788080 * get_stackTemp_14() const { return ___stackTemp_14; }
	inline Stack_1_t148788080 ** get_address_of_stackTemp_14() { return &___stackTemp_14; }
	inline void set_stackTemp_14(Stack_1_t148788080 * value)
	{
		___stackTemp_14 = value;
		Il2CppCodeGenWriteBarrier(&___stackTemp_14, value);
	}

	inline static int32_t get_offset_of_buffer_15() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ___buffer_15)); }
	inline List_1_t2249548109 * get_buffer_15() const { return ___buffer_15; }
	inline List_1_t2249548109 ** get_address_of_buffer_15() { return &___buffer_15; }
	inline void set_buffer_15(List_1_t2249548109 * value)
	{
		___buffer_15 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_15, value);
	}

	inline static int32_t get_offset_of_frame_16() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ___frame_16)); }
	inline int32_t get_frame_16() const { return ___frame_16; }
	inline int32_t* get_address_of_frame_16() { return &___frame_16; }
	inline void set_frame_16(int32_t value)
	{
		___frame_16 = value;
	}

	inline static int32_t get_offset_of_curMode_17() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929, ___curMode_17)); }
	inline int32_t get_curMode_17() const { return ___curMode_17; }
	inline int32_t* get_address_of_curMode_17() { return &___curMode_17; }
	inline void set_curMode_17(int32_t value)
	{
		___curMode_17 = value;
	}
};

struct CreatePeopleBehaviour_t1964588929_StaticFields
{
public:
	// System.Collections.Generic.List`1<NewViewObjScript> CreatePeopleBehaviour::listObjScript
	List_1_t1561294982 * ___listObjScript_10;
	// System.Comparison`1<UnityEngine.Transform> CreatePeopleBehaviour::<>f__mg$cache0
	Comparison_1_t3375297100 * ___U3CU3Ef__mgU24cache0_18;

public:
	inline static int32_t get_offset_of_listObjScript_10() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929_StaticFields, ___listObjScript_10)); }
	inline List_1_t1561294982 * get_listObjScript_10() const { return ___listObjScript_10; }
	inline List_1_t1561294982 ** get_address_of_listObjScript_10() { return &___listObjScript_10; }
	inline void set_listObjScript_10(List_1_t1561294982 * value)
	{
		___listObjScript_10 = value;
		Il2CppCodeGenWriteBarrier(&___listObjScript_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_18() { return static_cast<int32_t>(offsetof(CreatePeopleBehaviour_t1964588929_StaticFields, ___U3CU3Ef__mgU24cache0_18)); }
	inline Comparison_1_t3375297100 * get_U3CU3Ef__mgU24cache0_18() const { return ___U3CU3Ef__mgU24cache0_18; }
	inline Comparison_1_t3375297100 ** get_address_of_U3CU3Ef__mgU24cache0_18() { return &___U3CU3Ef__mgU24cache0_18; }
	inline void set_U3CU3Ef__mgU24cache0_18(Comparison_1_t3375297100 * value)
	{
		___U3CU3Ef__mgU24cache0_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
