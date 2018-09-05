#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "mscorlib_System_Byte1134296376.h"

// ProtoBuf.Meta.MetaType
struct MetaType_t1864544468;
// ProtoBuf.Meta.BasicList
struct BasicList_t1403853889;
// System.Type
struct Type_t;
// ProtoBuf.Meta.CallbackSet
struct CallbackSet_t4109860107;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ProtoBuf.Meta.RuntimeTypeModel
struct RuntimeTypeModel_t1315529752;
// ProtoBuf.Serializers.IProtoTypeSerializer
struct IProtoTypeSerializer_t3610728242;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.MetaType
struct  MetaType_t1864544468  : public Il2CppObject
{
public:
	// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::baseType
	MetaType_t1864544468 * ___baseType_0;
	// ProtoBuf.Meta.BasicList ProtoBuf.Meta.MetaType::subTypes
	BasicList_t1403853889 * ___subTypes_1;
	// ProtoBuf.Meta.CallbackSet ProtoBuf.Meta.MetaType::callbacks
	CallbackSet_t4109860107 * ___callbacks_3;
	// System.String ProtoBuf.Meta.MetaType::name
	String_t* ___name_4;
	// System.Reflection.MethodInfo ProtoBuf.Meta.MetaType::factory
	MethodInfo_t * ___factory_5;
	// ProtoBuf.Meta.RuntimeTypeModel ProtoBuf.Meta.MetaType::model
	RuntimeTypeModel_t1315529752 * ___model_6;
	// System.Type ProtoBuf.Meta.MetaType::type
	Type_t * ___type_7;
	// ProtoBuf.Serializers.IProtoTypeSerializer ProtoBuf.Meta.MetaType::serializer
	Il2CppObject * ___serializer_8;
	// System.Type ProtoBuf.Meta.MetaType::constructType
	Type_t * ___constructType_9;
	// System.Type ProtoBuf.Meta.MetaType::surrogate
	Type_t * ___surrogate_10;
	// ProtoBuf.Meta.BasicList ProtoBuf.Meta.MetaType::fields
	BasicList_t1403853889 * ___fields_11;
	// System.Byte modreq(System.Runtime.CompilerServices.IsVolatile) ProtoBuf.Meta.MetaType::flags
	uint8_t ___flags_12;

public:
	inline static int32_t get_offset_of_baseType_0() { return static_cast<int32_t>(offsetof(MetaType_t1864544468, ___baseType_0)); }
	inline MetaType_t1864544468 * get_baseType_0() const { return ___baseType_0; }
	inline MetaType_t1864544468 ** get_address_of_baseType_0() { return &___baseType_0; }
	inline void set_baseType_0(MetaType_t1864544468 * value)
	{
		___baseType_0 = value;
		Il2CppCodeGenWriteBarrier(&___baseType_0, value);
	}

	inline static int32_t get_offset_of_subTypes_1() { return static_cast<int32_t>(offsetof(MetaType_t1864544468, ___subTypes_1)); }
	inline BasicList_t1403853889 * get_subTypes_1() const { return ___subTypes_1; }
	inline BasicList_t1403853889 ** get_address_of_subTypes_1() { return &___subTypes_1; }
	inline void set_subTypes_1(BasicList_t1403853889 * value)
	{
		___subTypes_1 = value;
		Il2CppCodeGenWriteBarrier(&___subTypes_1, value);
	}

	inline static int32_t get_offset_of_callbacks_3() { return static_cast<int32_t>(offsetof(MetaType_t1864544468, ___callbacks_3)); }
	inline CallbackSet_t4109860107 * get_callbacks_3() const { return ___callbacks_3; }
	inline CallbackSet_t4109860107 ** get_address_of_callbacks_3() { return &___callbacks_3; }
	inline void set_callbacks_3(CallbackSet_t4109860107 * value)
	{
		___callbacks_3 = value;
		Il2CppCodeGenWriteBarrier(&___callbacks_3, value);
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(MetaType_t1864544468, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier(&___name_4, value);
	}

	inline static int32_t get_offset_of_factory_5() { return static_cast<int32_t>(offsetof(MetaType_t1864544468, ___factory_5)); }
	inline MethodInfo_t * get_factory_5() const { return ___factory_5; }
	inline MethodInfo_t ** get_address_of_factory_5() { return &___factory_5; }
	inline void set_factory_5(MethodInfo_t * value)
	{
		___factory_5 = value;
		Il2CppCodeGenWriteBarrier(&___factory_5, value);
	}

	inline static int32_t get_offset_of_model_6() { return static_cast<int32_t>(offsetof(MetaType_t1864544468, ___model_6)); }
	inline RuntimeTypeModel_t1315529752 * get_model_6() const { return ___model_6; }
	inline RuntimeTypeModel_t1315529752 ** get_address_of_model_6() { return &___model_6; }
	inline void set_model_6(RuntimeTypeModel_t1315529752 * value)
	{
		___model_6 = value;
		Il2CppCodeGenWriteBarrier(&___model_6, value);
	}

	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(MetaType_t1864544468, ___type_7)); }
	inline Type_t * get_type_7() const { return ___type_7; }
	inline Type_t ** get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(Type_t * value)
	{
		___type_7 = value;
		Il2CppCodeGenWriteBarrier(&___type_7, value);
	}

	inline static int32_t get_offset_of_serializer_8() { return static_cast<int32_t>(offsetof(MetaType_t1864544468, ___serializer_8)); }
	inline Il2CppObject * get_serializer_8() const { return ___serializer_8; }
	inline Il2CppObject ** get_address_of_serializer_8() { return &___serializer_8; }
	inline void set_serializer_8(Il2CppObject * value)
	{
		___serializer_8 = value;
		Il2CppCodeGenWriteBarrier(&___serializer_8, value);
	}

	inline static int32_t get_offset_of_constructType_9() { return static_cast<int32_t>(offsetof(MetaType_t1864544468, ___constructType_9)); }
	inline Type_t * get_constructType_9() const { return ___constructType_9; }
	inline Type_t ** get_address_of_constructType_9() { return &___constructType_9; }
	inline void set_constructType_9(Type_t * value)
	{
		___constructType_9 = value;
		Il2CppCodeGenWriteBarrier(&___constructType_9, value);
	}

	inline static int32_t get_offset_of_surrogate_10() { return static_cast<int32_t>(offsetof(MetaType_t1864544468, ___surrogate_10)); }
	inline Type_t * get_surrogate_10() const { return ___surrogate_10; }
	inline Type_t ** get_address_of_surrogate_10() { return &___surrogate_10; }
	inline void set_surrogate_10(Type_t * value)
	{
		___surrogate_10 = value;
		Il2CppCodeGenWriteBarrier(&___surrogate_10, value);
	}

	inline static int32_t get_offset_of_fields_11() { return static_cast<int32_t>(offsetof(MetaType_t1864544468, ___fields_11)); }
	inline BasicList_t1403853889 * get_fields_11() const { return ___fields_11; }
	inline BasicList_t1403853889 ** get_address_of_fields_11() { return &___fields_11; }
	inline void set_fields_11(BasicList_t1403853889 * value)
	{
		___fields_11 = value;
		Il2CppCodeGenWriteBarrier(&___fields_11, value);
	}

	inline static int32_t get_offset_of_flags_12() { return static_cast<int32_t>(offsetof(MetaType_t1864544468, ___flags_12)); }
	inline uint8_t get_flags_12() const { return ___flags_12; }
	inline uint8_t* get_address_of_flags_12() { return &___flags_12; }
	inline void set_flags_12(uint8_t value)
	{
		___flags_12 = value;
	}
};

struct MetaType_t1864544468_StaticFields
{
public:
	// System.Type ProtoBuf.Meta.MetaType::ienumerable
	Type_t * ___ienumerable_2;

public:
	inline static int32_t get_offset_of_ienumerable_2() { return static_cast<int32_t>(offsetof(MetaType_t1864544468_StaticFields, ___ienumerable_2)); }
	inline Type_t * get_ienumerable_2() const { return ___ienumerable_2; }
	inline Type_t ** get_address_of_ienumerable_2() { return &___ienumerable_2; }
	inline void set_ienumerable_2(Type_t * value)
	{
		___ienumerable_2 = value;
		Il2CppCodeGenWriteBarrier(&___ienumerable_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
