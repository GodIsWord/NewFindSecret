﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_Base1500127977.h"
#include "EasyAR_Unity_EasyAR_StorageType1027341324.h"

// System.String
struct String_t;
// System.Action`1<System.Int32>
struct Action_1_t3123413348;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ObjectTarget
struct  ObjectTarget_t2319938315  : public Base_t1500127977
{
public:
	// EasyAR.StorageType EasyAR.ObjectTarget::BehaviourStorage
	int32_t ___BehaviourStorage_2;
	// System.String EasyAR.ObjectTarget::BehaviourPath
	String_t* ___BehaviourPath_3;
	// System.Action`1<System.Int32> EasyAR.ObjectTarget::TargetSelfLoad
	Action_1_t3123413348 * ___TargetSelfLoad_4;
	// System.Int32 EasyAR.ObjectTarget::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_5;
	// System.String EasyAR.ObjectTarget::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_6;
	// System.String EasyAR.ObjectTarget::<Uid>k__BackingField
	String_t* ___U3CUidU3Ek__BackingField_7;
	// System.String EasyAR.ObjectTarget::<MetaData>k__BackingField
	String_t* ___U3CMetaDataU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_BehaviourStorage_2() { return static_cast<int32_t>(offsetof(ObjectTarget_t2319938315, ___BehaviourStorage_2)); }
	inline int32_t get_BehaviourStorage_2() const { return ___BehaviourStorage_2; }
	inline int32_t* get_address_of_BehaviourStorage_2() { return &___BehaviourStorage_2; }
	inline void set_BehaviourStorage_2(int32_t value)
	{
		___BehaviourStorage_2 = value;
	}

	inline static int32_t get_offset_of_BehaviourPath_3() { return static_cast<int32_t>(offsetof(ObjectTarget_t2319938315, ___BehaviourPath_3)); }
	inline String_t* get_BehaviourPath_3() const { return ___BehaviourPath_3; }
	inline String_t** get_address_of_BehaviourPath_3() { return &___BehaviourPath_3; }
	inline void set_BehaviourPath_3(String_t* value)
	{
		___BehaviourPath_3 = value;
		Il2CppCodeGenWriteBarrier(&___BehaviourPath_3, value);
	}

	inline static int32_t get_offset_of_TargetSelfLoad_4() { return static_cast<int32_t>(offsetof(ObjectTarget_t2319938315, ___TargetSelfLoad_4)); }
	inline Action_1_t3123413348 * get_TargetSelfLoad_4() const { return ___TargetSelfLoad_4; }
	inline Action_1_t3123413348 ** get_address_of_TargetSelfLoad_4() { return &___TargetSelfLoad_4; }
	inline void set_TargetSelfLoad_4(Action_1_t3123413348 * value)
	{
		___TargetSelfLoad_4 = value;
		Il2CppCodeGenWriteBarrier(&___TargetSelfLoad_4, value);
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ObjectTarget_t2319938315, ___U3CIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CIdU3Ek__BackingField_5() const { return ___U3CIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_5() { return &___U3CIdU3Ek__BackingField_5; }
	inline void set_U3CIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ObjectTarget_t2319938315, ___U3CNameU3Ek__BackingField_6)); }
	inline String_t* get_U3CNameU3Ek__BackingField_6() const { return ___U3CNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_6() { return &___U3CNameU3Ek__BackingField_6; }
	inline void set_U3CNameU3Ek__BackingField_6(String_t* value)
	{
		___U3CNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CUidU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ObjectTarget_t2319938315, ___U3CUidU3Ek__BackingField_7)); }
	inline String_t* get_U3CUidU3Ek__BackingField_7() const { return ___U3CUidU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CUidU3Ek__BackingField_7() { return &___U3CUidU3Ek__BackingField_7; }
	inline void set_U3CUidU3Ek__BackingField_7(String_t* value)
	{
		___U3CUidU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUidU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CMetaDataU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ObjectTarget_t2319938315, ___U3CMetaDataU3Ek__BackingField_8)); }
	inline String_t* get_U3CMetaDataU3Ek__BackingField_8() const { return ___U3CMetaDataU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CMetaDataU3Ek__BackingField_8() { return &___U3CMetaDataU3Ek__BackingField_8; }
	inline void set_U3CMetaDataU3Ek__BackingField_8(String_t* value)
	{
		___U3CMetaDataU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMetaDataU3Ek__BackingField_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
