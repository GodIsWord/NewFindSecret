﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_InvalidOperationException56020091.h"
#include "System_System_Net_WebExceptionStatus1731416715.h"

// System.Net.WebResponse
struct WebResponse_t229922639;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebException
struct  WebException_t3237156354  : public InvalidOperationException_t56020091
{
public:
	// System.Net.WebResponse System.Net.WebException::response
	WebResponse_t229922639 * ___response_12;
	// System.Net.WebExceptionStatus System.Net.WebException::status
	int32_t ___status_13;

public:
	inline static int32_t get_offset_of_response_12() { return static_cast<int32_t>(offsetof(WebException_t3237156354, ___response_12)); }
	inline WebResponse_t229922639 * get_response_12() const { return ___response_12; }
	inline WebResponse_t229922639 ** get_address_of_response_12() { return &___response_12; }
	inline void set_response_12(WebResponse_t229922639 * value)
	{
		___response_12 = value;
		Il2CppCodeGenWriteBarrier(&___response_12, value);
	}

	inline static int32_t get_offset_of_status_13() { return static_cast<int32_t>(offsetof(WebException_t3237156354, ___status_13)); }
	inline int32_t get_status_13() const { return ___status_13; }
	inline int32_t* get_address_of_status_13() { return &___status_13; }
	inline void set_status_13(int32_t value)
	{
		___status_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
