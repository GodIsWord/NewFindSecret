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

// UnityEngine.Networking.Types.NetworkAccessToken
struct  NetworkAccessToken_t320639760  : public Il2CppObject
{
public:
	// System.Byte[] UnityEngine.Networking.Types.NetworkAccessToken::array
	ByteU5BU5D_t4116647657* ___array_1;

public:
	inline static int32_t get_offset_of_array_1() { return static_cast<int32_t>(offsetof(NetworkAccessToken_t320639760, ___array_1)); }
	inline ByteU5BU5D_t4116647657* get_array_1() const { return ___array_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_array_1() { return &___array_1; }
	inline void set_array_1(ByteU5BU5D_t4116647657* value)
	{
		___array_1 = value;
		Il2CppCodeGenWriteBarrier(&___array_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif