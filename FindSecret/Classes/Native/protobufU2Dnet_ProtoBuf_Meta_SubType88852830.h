﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "protobufU2Dnet_ProtoBuf_DataFormat749545868.h"

// ProtoBuf.Meta.MetaType
struct MetaType_t1864544468;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t2394805291;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.SubType
struct  SubType_t88852830  : public Il2CppObject
{
public:
	// System.Int32 ProtoBuf.Meta.SubType::fieldNumber
	int32_t ___fieldNumber_0;
	// ProtoBuf.Meta.MetaType ProtoBuf.Meta.SubType::derivedType
	MetaType_t1864544468 * ___derivedType_1;
	// ProtoBuf.DataFormat ProtoBuf.Meta.SubType::dataFormat
	int32_t ___dataFormat_2;
	// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.SubType::serializer
	Il2CppObject * ___serializer_3;

public:
	inline static int32_t get_offset_of_fieldNumber_0() { return static_cast<int32_t>(offsetof(SubType_t88852830, ___fieldNumber_0)); }
	inline int32_t get_fieldNumber_0() const { return ___fieldNumber_0; }
	inline int32_t* get_address_of_fieldNumber_0() { return &___fieldNumber_0; }
	inline void set_fieldNumber_0(int32_t value)
	{
		___fieldNumber_0 = value;
	}

	inline static int32_t get_offset_of_derivedType_1() { return static_cast<int32_t>(offsetof(SubType_t88852830, ___derivedType_1)); }
	inline MetaType_t1864544468 * get_derivedType_1() const { return ___derivedType_1; }
	inline MetaType_t1864544468 ** get_address_of_derivedType_1() { return &___derivedType_1; }
	inline void set_derivedType_1(MetaType_t1864544468 * value)
	{
		___derivedType_1 = value;
		Il2CppCodeGenWriteBarrier(&___derivedType_1, value);
	}

	inline static int32_t get_offset_of_dataFormat_2() { return static_cast<int32_t>(offsetof(SubType_t88852830, ___dataFormat_2)); }
	inline int32_t get_dataFormat_2() const { return ___dataFormat_2; }
	inline int32_t* get_address_of_dataFormat_2() { return &___dataFormat_2; }
	inline void set_dataFormat_2(int32_t value)
	{
		___dataFormat_2 = value;
	}

	inline static int32_t get_offset_of_serializer_3() { return static_cast<int32_t>(offsetof(SubType_t88852830, ___serializer_3)); }
	inline Il2CppObject * get_serializer_3() const { return ___serializer_3; }
	inline Il2CppObject ** get_address_of_serializer_3() { return &___serializer_3; }
	inline void set_serializer_3(Il2CppObject * value)
	{
		___serializer_3 = value;
		Il2CppCodeGenWriteBarrier(&___serializer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
