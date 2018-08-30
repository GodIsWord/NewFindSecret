#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.UInt32[]
struct UInt32U5BU5D_t2770800703;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Checksums.Crc32
struct  Crc32_t4094429278  : public Il2CppObject
{
public:
	// System.UInt32 ICSharpCode.SharpZipLib.Checksums.Crc32::crc
	uint32_t ___crc_1;

public:
	inline static int32_t get_offset_of_crc_1() { return static_cast<int32_t>(offsetof(Crc32_t4094429278, ___crc_1)); }
	inline uint32_t get_crc_1() const { return ___crc_1; }
	inline uint32_t* get_address_of_crc_1() { return &___crc_1; }
	inline void set_crc_1(uint32_t value)
	{
		___crc_1 = value;
	}
};

struct Crc32_t4094429278_StaticFields
{
public:
	// System.UInt32[] ICSharpCode.SharpZipLib.Checksums.Crc32::CrcTable
	UInt32U5BU5D_t2770800703* ___CrcTable_0;

public:
	inline static int32_t get_offset_of_CrcTable_0() { return static_cast<int32_t>(offsetof(Crc32_t4094429278_StaticFields, ___CrcTable_0)); }
	inline UInt32U5BU5D_t2770800703* get_CrcTable_0() const { return ___CrcTable_0; }
	inline UInt32U5BU5D_t2770800703** get_address_of_CrcTable_0() { return &___CrcTable_0; }
	inline void set_CrcTable_0(UInt32U5BU5D_t2770800703* value)
	{
		___CrcTable_0 = value;
		Il2CppCodeGenWriteBarrier(&___CrcTable_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
