#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "protobufU2Dnet_ProtoBuf_Serializers_ProtoDecorator1230695942.h"
#include "protobufU2Dnet_ProtoBuf_WireType417905129.h"

// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.ListDecorator
struct  ListDecorator_t4074096337  : public ProtoDecoratorBase_t1230695942
{
public:
	// System.Byte ProtoBuf.Serializers.ListDecorator::options
	uint8_t ___options_1;
	// System.Type ProtoBuf.Serializers.ListDecorator::declaredType
	Type_t * ___declaredType_2;
	// System.Type ProtoBuf.Serializers.ListDecorator::concreteType
	Type_t * ___concreteType_3;
	// System.Reflection.MethodInfo ProtoBuf.Serializers.ListDecorator::add
	MethodInfo_t * ___add_4;
	// System.Int32 ProtoBuf.Serializers.ListDecorator::fieldNumber
	int32_t ___fieldNumber_5;
	// ProtoBuf.WireType ProtoBuf.Serializers.ListDecorator::packedWireType
	int32_t ___packedWireType_6;

public:
	inline static int32_t get_offset_of_options_1() { return static_cast<int32_t>(offsetof(ListDecorator_t4074096337, ___options_1)); }
	inline uint8_t get_options_1() const { return ___options_1; }
	inline uint8_t* get_address_of_options_1() { return &___options_1; }
	inline void set_options_1(uint8_t value)
	{
		___options_1 = value;
	}

	inline static int32_t get_offset_of_declaredType_2() { return static_cast<int32_t>(offsetof(ListDecorator_t4074096337, ___declaredType_2)); }
	inline Type_t * get_declaredType_2() const { return ___declaredType_2; }
	inline Type_t ** get_address_of_declaredType_2() { return &___declaredType_2; }
	inline void set_declaredType_2(Type_t * value)
	{
		___declaredType_2 = value;
		Il2CppCodeGenWriteBarrier(&___declaredType_2, value);
	}

	inline static int32_t get_offset_of_concreteType_3() { return static_cast<int32_t>(offsetof(ListDecorator_t4074096337, ___concreteType_3)); }
	inline Type_t * get_concreteType_3() const { return ___concreteType_3; }
	inline Type_t ** get_address_of_concreteType_3() { return &___concreteType_3; }
	inline void set_concreteType_3(Type_t * value)
	{
		___concreteType_3 = value;
		Il2CppCodeGenWriteBarrier(&___concreteType_3, value);
	}

	inline static int32_t get_offset_of_add_4() { return static_cast<int32_t>(offsetof(ListDecorator_t4074096337, ___add_4)); }
	inline MethodInfo_t * get_add_4() const { return ___add_4; }
	inline MethodInfo_t ** get_address_of_add_4() { return &___add_4; }
	inline void set_add_4(MethodInfo_t * value)
	{
		___add_4 = value;
		Il2CppCodeGenWriteBarrier(&___add_4, value);
	}

	inline static int32_t get_offset_of_fieldNumber_5() { return static_cast<int32_t>(offsetof(ListDecorator_t4074096337, ___fieldNumber_5)); }
	inline int32_t get_fieldNumber_5() const { return ___fieldNumber_5; }
	inline int32_t* get_address_of_fieldNumber_5() { return &___fieldNumber_5; }
	inline void set_fieldNumber_5(int32_t value)
	{
		___fieldNumber_5 = value;
	}

	inline static int32_t get_offset_of_packedWireType_6() { return static_cast<int32_t>(offsetof(ListDecorator_t4074096337, ___packedWireType_6)); }
	inline int32_t get_packedWireType_6() const { return ___packedWireType_6; }
	inline int32_t* get_address_of_packedWireType_6() { return &___packedWireType_6; }
	inline void set_packedWireType_6(int32_t value)
	{
		___packedWireType_6 = value;
	}
};

struct ListDecorator_t4074096337_StaticFields
{
public:
	// System.Type ProtoBuf.Serializers.ListDecorator::ienumeratorType
	Type_t * ___ienumeratorType_7;
	// System.Type ProtoBuf.Serializers.ListDecorator::ienumerableType
	Type_t * ___ienumerableType_8;

public:
	inline static int32_t get_offset_of_ienumeratorType_7() { return static_cast<int32_t>(offsetof(ListDecorator_t4074096337_StaticFields, ___ienumeratorType_7)); }
	inline Type_t * get_ienumeratorType_7() const { return ___ienumeratorType_7; }
	inline Type_t ** get_address_of_ienumeratorType_7() { return &___ienumeratorType_7; }
	inline void set_ienumeratorType_7(Type_t * value)
	{
		___ienumeratorType_7 = value;
		Il2CppCodeGenWriteBarrier(&___ienumeratorType_7, value);
	}

	inline static int32_t get_offset_of_ienumerableType_8() { return static_cast<int32_t>(offsetof(ListDecorator_t4074096337_StaticFields, ___ienumerableType_8)); }
	inline Type_t * get_ienumerableType_8() const { return ___ienumerableType_8; }
	inline Type_t ** get_address_of_ienumerableType_8() { return &___ienumerableType_8; }
	inline void set_ienumerableType_8(Type_t * value)
	{
		___ienumerableType_8 = value;
		Il2CppCodeGenWriteBarrier(&___ienumerableType_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
