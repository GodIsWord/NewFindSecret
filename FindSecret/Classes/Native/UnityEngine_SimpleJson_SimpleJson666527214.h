#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t3801793838;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t3084478566;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.SimpleJson
struct  SimpleJson_t666527214  : public Il2CppObject
{
public:

public:
};

struct SimpleJson_t666527214_StaticFields
{
public:
	// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::_currentJsonSerializerStrategy
	Il2CppObject * ____currentJsonSerializerStrategy_13;
	// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::_pocoJsonSerializerStrategy
	PocoJsonSerializerStrategy_t3084478566 * ____pocoJsonSerializerStrategy_14;

public:
	inline static int32_t get_offset_of__currentJsonSerializerStrategy_13() { return static_cast<int32_t>(offsetof(SimpleJson_t666527214_StaticFields, ____currentJsonSerializerStrategy_13)); }
	inline Il2CppObject * get__currentJsonSerializerStrategy_13() const { return ____currentJsonSerializerStrategy_13; }
	inline Il2CppObject ** get_address_of__currentJsonSerializerStrategy_13() { return &____currentJsonSerializerStrategy_13; }
	inline void set__currentJsonSerializerStrategy_13(Il2CppObject * value)
	{
		____currentJsonSerializerStrategy_13 = value;
		Il2CppCodeGenWriteBarrier(&____currentJsonSerializerStrategy_13, value);
	}

	inline static int32_t get_offset_of__pocoJsonSerializerStrategy_14() { return static_cast<int32_t>(offsetof(SimpleJson_t666527214_StaticFields, ____pocoJsonSerializerStrategy_14)); }
	inline PocoJsonSerializerStrategy_t3084478566 * get__pocoJsonSerializerStrategy_14() const { return ____pocoJsonSerializerStrategy_14; }
	inline PocoJsonSerializerStrategy_t3084478566 ** get_address_of__pocoJsonSerializerStrategy_14() { return &____pocoJsonSerializerStrategy_14; }
	inline void set__pocoJsonSerializerStrategy_14(PocoJsonSerializerStrategy_t3084478566 * value)
	{
		____pocoJsonSerializerStrategy_14 = value;
		Il2CppCodeGenWriteBarrier(&____pocoJsonSerializerStrategy_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
