﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.BufferExtension
struct  BufferExtension_t248075564  : public Il2CppObject
{
public:
	// System.Byte[] ProtoBuf.BufferExtension::buffer
	ByteU5BU5D_t4116647657* ___buffer_0;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(BufferExtension_t248075564, ___buffer_0)); }
	inline ByteU5BU5D_t4116647657* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t4116647657* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
