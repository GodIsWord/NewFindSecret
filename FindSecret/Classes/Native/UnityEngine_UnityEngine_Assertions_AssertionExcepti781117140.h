﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Exception1436737249.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Assertions.AssertionException
struct  AssertionException_t781117140  : public Exception_t1436737249
{
public:
	// System.String UnityEngine.Assertions.AssertionException::m_UserMessage
	String_t* ___m_UserMessage_11;

public:
	inline static int32_t get_offset_of_m_UserMessage_11() { return static_cast<int32_t>(offsetof(AssertionException_t781117140, ___m_UserMessage_11)); }
	inline String_t* get_m_UserMessage_11() const { return ___m_UserMessage_11; }
	inline String_t** get_address_of_m_UserMessage_11() { return &___m_UserMessage_11; }
	inline void set_m_UserMessage_11(String_t* value)
	{
		___m_UserMessage_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_UserMessage_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
