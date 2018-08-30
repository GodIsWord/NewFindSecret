#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// ProtoBuf.Serializers.IProtoTypeSerializer
struct IProtoTypeSerializer_t3610728242;
// ProtoBuf.Compiler.ProtoSerializer
struct ProtoSerializer_t112581242;
// ProtoBuf.Compiler.ProtoDeserializer
struct ProtoDeserializer_t1764195406;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.CompiledSerializer
struct  CompiledSerializer_t1121392757  : public Il2CppObject
{
public:
	// ProtoBuf.Serializers.IProtoTypeSerializer ProtoBuf.Serializers.CompiledSerializer::head
	Il2CppObject * ___head_0;
	// ProtoBuf.Compiler.ProtoSerializer ProtoBuf.Serializers.CompiledSerializer::serializer
	ProtoSerializer_t112581242 * ___serializer_1;
	// ProtoBuf.Compiler.ProtoDeserializer ProtoBuf.Serializers.CompiledSerializer::deserializer
	ProtoDeserializer_t1764195406 * ___deserializer_2;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(CompiledSerializer_t1121392757, ___head_0)); }
	inline Il2CppObject * get_head_0() const { return ___head_0; }
	inline Il2CppObject ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(Il2CppObject * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier(&___head_0, value);
	}

	inline static int32_t get_offset_of_serializer_1() { return static_cast<int32_t>(offsetof(CompiledSerializer_t1121392757, ___serializer_1)); }
	inline ProtoSerializer_t112581242 * get_serializer_1() const { return ___serializer_1; }
	inline ProtoSerializer_t112581242 ** get_address_of_serializer_1() { return &___serializer_1; }
	inline void set_serializer_1(ProtoSerializer_t112581242 * value)
	{
		___serializer_1 = value;
		Il2CppCodeGenWriteBarrier(&___serializer_1, value);
	}

	inline static int32_t get_offset_of_deserializer_2() { return static_cast<int32_t>(offsetof(CompiledSerializer_t1121392757, ___deserializer_2)); }
	inline ProtoDeserializer_t1764195406 * get_deserializer_2() const { return ___deserializer_2; }
	inline ProtoDeserializer_t1764195406 ** get_address_of_deserializer_2() { return &___deserializer_2; }
	inline void set_deserializer_2(ProtoDeserializer_t1764195406 * value)
	{
		___deserializer_2 = value;
		Il2CppCodeGenWriteBarrier(&___deserializer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
