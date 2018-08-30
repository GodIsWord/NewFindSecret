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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.ArrayDecorator
struct  ArrayDecorator_t2422240322  : public ProtoDecoratorBase_t1230695942
{
public:
	// System.Int32 ProtoBuf.Serializers.ArrayDecorator::fieldNumber
	int32_t ___fieldNumber_1;
	// System.Byte ProtoBuf.Serializers.ArrayDecorator::options
	uint8_t ___options_2;
	// ProtoBuf.WireType ProtoBuf.Serializers.ArrayDecorator::packedWireType
	int32_t ___packedWireType_3;
	// System.Type ProtoBuf.Serializers.ArrayDecorator::arrayType
	Type_t * ___arrayType_4;
	// System.Type ProtoBuf.Serializers.ArrayDecorator::itemType
	Type_t * ___itemType_5;

public:
	inline static int32_t get_offset_of_fieldNumber_1() { return static_cast<int32_t>(offsetof(ArrayDecorator_t2422240322, ___fieldNumber_1)); }
	inline int32_t get_fieldNumber_1() const { return ___fieldNumber_1; }
	inline int32_t* get_address_of_fieldNumber_1() { return &___fieldNumber_1; }
	inline void set_fieldNumber_1(int32_t value)
	{
		___fieldNumber_1 = value;
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(ArrayDecorator_t2422240322, ___options_2)); }
	inline uint8_t get_options_2() const { return ___options_2; }
	inline uint8_t* get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(uint8_t value)
	{
		___options_2 = value;
	}

	inline static int32_t get_offset_of_packedWireType_3() { return static_cast<int32_t>(offsetof(ArrayDecorator_t2422240322, ___packedWireType_3)); }
	inline int32_t get_packedWireType_3() const { return ___packedWireType_3; }
	inline int32_t* get_address_of_packedWireType_3() { return &___packedWireType_3; }
	inline void set_packedWireType_3(int32_t value)
	{
		___packedWireType_3 = value;
	}

	inline static int32_t get_offset_of_arrayType_4() { return static_cast<int32_t>(offsetof(ArrayDecorator_t2422240322, ___arrayType_4)); }
	inline Type_t * get_arrayType_4() const { return ___arrayType_4; }
	inline Type_t ** get_address_of_arrayType_4() { return &___arrayType_4; }
	inline void set_arrayType_4(Type_t * value)
	{
		___arrayType_4 = value;
		Il2CppCodeGenWriteBarrier(&___arrayType_4, value);
	}

	inline static int32_t get_offset_of_itemType_5() { return static_cast<int32_t>(offsetof(ArrayDecorator_t2422240322, ___itemType_5)); }
	inline Type_t * get_itemType_5() const { return ___itemType_5; }
	inline Type_t ** get_address_of_itemType_5() { return &___itemType_5; }
	inline void set_itemType_5(Type_t * value)
	{
		___itemType_5 = value;
		Il2CppCodeGenWriteBarrier(&___itemType_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
