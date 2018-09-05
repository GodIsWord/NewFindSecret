#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t2807316753;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.RuntimeTypeModel/SerializerPair
struct  SerializerPair_t3510555274  : public Il2CppObject
{
public:
	// System.Int32 ProtoBuf.Meta.RuntimeTypeModel/SerializerPair::MetaKey
	int32_t ___MetaKey_0;
	// System.Int32 ProtoBuf.Meta.RuntimeTypeModel/SerializerPair::BaseKey
	int32_t ___BaseKey_1;
	// System.Reflection.Emit.MethodBuilder ProtoBuf.Meta.RuntimeTypeModel/SerializerPair::Serialize
	MethodBuilder_t2807316753 * ___Serialize_2;
	// System.Reflection.Emit.MethodBuilder ProtoBuf.Meta.RuntimeTypeModel/SerializerPair::Deserialize
	MethodBuilder_t2807316753 * ___Deserialize_3;

public:
	inline static int32_t get_offset_of_MetaKey_0() { return static_cast<int32_t>(offsetof(SerializerPair_t3510555274, ___MetaKey_0)); }
	inline int32_t get_MetaKey_0() const { return ___MetaKey_0; }
	inline int32_t* get_address_of_MetaKey_0() { return &___MetaKey_0; }
	inline void set_MetaKey_0(int32_t value)
	{
		___MetaKey_0 = value;
	}

	inline static int32_t get_offset_of_BaseKey_1() { return static_cast<int32_t>(offsetof(SerializerPair_t3510555274, ___BaseKey_1)); }
	inline int32_t get_BaseKey_1() const { return ___BaseKey_1; }
	inline int32_t* get_address_of_BaseKey_1() { return &___BaseKey_1; }
	inline void set_BaseKey_1(int32_t value)
	{
		___BaseKey_1 = value;
	}

	inline static int32_t get_offset_of_Serialize_2() { return static_cast<int32_t>(offsetof(SerializerPair_t3510555274, ___Serialize_2)); }
	inline MethodBuilder_t2807316753 * get_Serialize_2() const { return ___Serialize_2; }
	inline MethodBuilder_t2807316753 ** get_address_of_Serialize_2() { return &___Serialize_2; }
	inline void set_Serialize_2(MethodBuilder_t2807316753 * value)
	{
		___Serialize_2 = value;
		Il2CppCodeGenWriteBarrier(&___Serialize_2, value);
	}

	inline static int32_t get_offset_of_Deserialize_3() { return static_cast<int32_t>(offsetof(SerializerPair_t3510555274, ___Deserialize_3)); }
	inline MethodBuilder_t2807316753 * get_Deserialize_3() const { return ___Deserialize_3; }
	inline MethodBuilder_t2807316753 ** get_address_of_Deserialize_3() { return &___Deserialize_3; }
	inline void set_Deserialize_3(MethodBuilder_t2807316753 * value)
	{
		___Deserialize_3 = value;
		Il2CppCodeGenWriteBarrier(&___Deserialize_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
