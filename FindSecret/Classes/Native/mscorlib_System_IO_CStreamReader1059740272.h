#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_StreamReader4009935899.h"

// System.TermInfoDriver
struct TermInfoDriver_t2335718621;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.CStreamReader
struct  CStreamReader_t1059740272  : public StreamReader_t4009935899
{
public:
	// System.TermInfoDriver System.IO.CStreamReader::driver
	TermInfoDriver_t2335718621 * ___driver_15;

public:
	inline static int32_t get_offset_of_driver_15() { return static_cast<int32_t>(offsetof(CStreamReader_t1059740272, ___driver_15)); }
	inline TermInfoDriver_t2335718621 * get_driver_15() const { return ___driver_15; }
	inline TermInfoDriver_t2335718621 ** get_address_of_driver_15() { return &___driver_15; }
	inline void set_driver_15(TermInfoDriver_t2335718621 * value)
	{
		___driver_15 = value;
		Il2CppCodeGenWriteBarrier(&___driver_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
