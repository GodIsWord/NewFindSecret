#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "protobufU2Dnet_ProtoBuf_DataFormat749545868.h"

// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.Meta.RuntimeTypeModel
struct RuntimeTypeModel_t1315529752;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t2394805291;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.ValueMember
struct  ValueMember_t1946983868  : public Il2CppObject
{
public:
	// System.Int32 ProtoBuf.Meta.ValueMember::fieldNumber
	int32_t ___fieldNumber_0;
	// System.Reflection.MemberInfo ProtoBuf.Meta.ValueMember::member
	MemberInfo_t * ___member_1;
	// System.Type ProtoBuf.Meta.ValueMember::parentType
	Type_t * ___parentType_2;
	// System.Type ProtoBuf.Meta.ValueMember::itemType
	Type_t * ___itemType_3;
	// System.Type ProtoBuf.Meta.ValueMember::defaultType
	Type_t * ___defaultType_4;
	// System.Type ProtoBuf.Meta.ValueMember::memberType
	Type_t * ___memberType_5;
	// System.Object ProtoBuf.Meta.ValueMember::defaultValue
	Il2CppObject * ___defaultValue_6;
	// ProtoBuf.Meta.RuntimeTypeModel ProtoBuf.Meta.ValueMember::model
	RuntimeTypeModel_t1315529752 * ___model_7;
	// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.ValueMember::serializer
	Il2CppObject * ___serializer_8;
	// ProtoBuf.DataFormat ProtoBuf.Meta.ValueMember::dataFormat
	int32_t ___dataFormat_9;
	// System.Boolean ProtoBuf.Meta.ValueMember::asReference
	bool ___asReference_10;
	// System.Boolean ProtoBuf.Meta.ValueMember::dynamicType
	bool ___dynamicType_11;
	// System.Reflection.MethodInfo ProtoBuf.Meta.ValueMember::getSpecified
	MethodInfo_t * ___getSpecified_12;
	// System.Reflection.MethodInfo ProtoBuf.Meta.ValueMember::setSpecified
	MethodInfo_t * ___setSpecified_13;
	// System.String ProtoBuf.Meta.ValueMember::name
	String_t* ___name_14;
	// System.Byte ProtoBuf.Meta.ValueMember::flags
	uint8_t ___flags_15;

public:
	inline static int32_t get_offset_of_fieldNumber_0() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___fieldNumber_0)); }
	inline int32_t get_fieldNumber_0() const { return ___fieldNumber_0; }
	inline int32_t* get_address_of_fieldNumber_0() { return &___fieldNumber_0; }
	inline void set_fieldNumber_0(int32_t value)
	{
		___fieldNumber_0 = value;
	}

	inline static int32_t get_offset_of_member_1() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___member_1)); }
	inline MemberInfo_t * get_member_1() const { return ___member_1; }
	inline MemberInfo_t ** get_address_of_member_1() { return &___member_1; }
	inline void set_member_1(MemberInfo_t * value)
	{
		___member_1 = value;
		Il2CppCodeGenWriteBarrier(&___member_1, value);
	}

	inline static int32_t get_offset_of_parentType_2() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___parentType_2)); }
	inline Type_t * get_parentType_2() const { return ___parentType_2; }
	inline Type_t ** get_address_of_parentType_2() { return &___parentType_2; }
	inline void set_parentType_2(Type_t * value)
	{
		___parentType_2 = value;
		Il2CppCodeGenWriteBarrier(&___parentType_2, value);
	}

	inline static int32_t get_offset_of_itemType_3() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___itemType_3)); }
	inline Type_t * get_itemType_3() const { return ___itemType_3; }
	inline Type_t ** get_address_of_itemType_3() { return &___itemType_3; }
	inline void set_itemType_3(Type_t * value)
	{
		___itemType_3 = value;
		Il2CppCodeGenWriteBarrier(&___itemType_3, value);
	}

	inline static int32_t get_offset_of_defaultType_4() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___defaultType_4)); }
	inline Type_t * get_defaultType_4() const { return ___defaultType_4; }
	inline Type_t ** get_address_of_defaultType_4() { return &___defaultType_4; }
	inline void set_defaultType_4(Type_t * value)
	{
		___defaultType_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultType_4, value);
	}

	inline static int32_t get_offset_of_memberType_5() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___memberType_5)); }
	inline Type_t * get_memberType_5() const { return ___memberType_5; }
	inline Type_t ** get_address_of_memberType_5() { return &___memberType_5; }
	inline void set_memberType_5(Type_t * value)
	{
		___memberType_5 = value;
		Il2CppCodeGenWriteBarrier(&___memberType_5, value);
	}

	inline static int32_t get_offset_of_defaultValue_6() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___defaultValue_6)); }
	inline Il2CppObject * get_defaultValue_6() const { return ___defaultValue_6; }
	inline Il2CppObject ** get_address_of_defaultValue_6() { return &___defaultValue_6; }
	inline void set_defaultValue_6(Il2CppObject * value)
	{
		___defaultValue_6 = value;
		Il2CppCodeGenWriteBarrier(&___defaultValue_6, value);
	}

	inline static int32_t get_offset_of_model_7() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___model_7)); }
	inline RuntimeTypeModel_t1315529752 * get_model_7() const { return ___model_7; }
	inline RuntimeTypeModel_t1315529752 ** get_address_of_model_7() { return &___model_7; }
	inline void set_model_7(RuntimeTypeModel_t1315529752 * value)
	{
		___model_7 = value;
		Il2CppCodeGenWriteBarrier(&___model_7, value);
	}

	inline static int32_t get_offset_of_serializer_8() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___serializer_8)); }
	inline Il2CppObject * get_serializer_8() const { return ___serializer_8; }
	inline Il2CppObject ** get_address_of_serializer_8() { return &___serializer_8; }
	inline void set_serializer_8(Il2CppObject * value)
	{
		___serializer_8 = value;
		Il2CppCodeGenWriteBarrier(&___serializer_8, value);
	}

	inline static int32_t get_offset_of_dataFormat_9() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___dataFormat_9)); }
	inline int32_t get_dataFormat_9() const { return ___dataFormat_9; }
	inline int32_t* get_address_of_dataFormat_9() { return &___dataFormat_9; }
	inline void set_dataFormat_9(int32_t value)
	{
		___dataFormat_9 = value;
	}

	inline static int32_t get_offset_of_asReference_10() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___asReference_10)); }
	inline bool get_asReference_10() const { return ___asReference_10; }
	inline bool* get_address_of_asReference_10() { return &___asReference_10; }
	inline void set_asReference_10(bool value)
	{
		___asReference_10 = value;
	}

	inline static int32_t get_offset_of_dynamicType_11() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___dynamicType_11)); }
	inline bool get_dynamicType_11() const { return ___dynamicType_11; }
	inline bool* get_address_of_dynamicType_11() { return &___dynamicType_11; }
	inline void set_dynamicType_11(bool value)
	{
		___dynamicType_11 = value;
	}

	inline static int32_t get_offset_of_getSpecified_12() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___getSpecified_12)); }
	inline MethodInfo_t * get_getSpecified_12() const { return ___getSpecified_12; }
	inline MethodInfo_t ** get_address_of_getSpecified_12() { return &___getSpecified_12; }
	inline void set_getSpecified_12(MethodInfo_t * value)
	{
		___getSpecified_12 = value;
		Il2CppCodeGenWriteBarrier(&___getSpecified_12, value);
	}

	inline static int32_t get_offset_of_setSpecified_13() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___setSpecified_13)); }
	inline MethodInfo_t * get_setSpecified_13() const { return ___setSpecified_13; }
	inline MethodInfo_t ** get_address_of_setSpecified_13() { return &___setSpecified_13; }
	inline void set_setSpecified_13(MethodInfo_t * value)
	{
		___setSpecified_13 = value;
		Il2CppCodeGenWriteBarrier(&___setSpecified_13, value);
	}

	inline static int32_t get_offset_of_name_14() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___name_14)); }
	inline String_t* get_name_14() const { return ___name_14; }
	inline String_t** get_address_of_name_14() { return &___name_14; }
	inline void set_name_14(String_t* value)
	{
		___name_14 = value;
		Il2CppCodeGenWriteBarrier(&___name_14, value);
	}

	inline static int32_t get_offset_of_flags_15() { return static_cast<int32_t>(offsetof(ValueMember_t1946983868, ___flags_15)); }
	inline uint8_t get_flags_15() const { return ___flags_15; }
	inline uint8_t* get_address_of_flags_15() { return &___flags_15; }
	inline void set_flags_15(uint8_t value)
	{
		___flags_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
