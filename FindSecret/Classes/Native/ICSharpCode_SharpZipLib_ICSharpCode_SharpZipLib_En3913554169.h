#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_En3871723075.h"

// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged
struct  PkzipClassicManaged_t3913554169  : public PkzipClassic_t3871723075
{
public:
	// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::key_
	ByteU5BU5D_t4116647657* ___key__10;

public:
	inline static int32_t get_offset_of_key__10() { return static_cast<int32_t>(offsetof(PkzipClassicManaged_t3913554169, ___key__10)); }
	inline ByteU5BU5D_t4116647657* get_key__10() const { return ___key__10; }
	inline ByteU5BU5D_t4116647657** get_address_of_key__10() { return &___key__10; }
	inline void set_key__10(ByteU5BU5D_t4116647657* value)
	{
		___key__10 = value;
		Il2CppCodeGenWriteBarrier(&___key__10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
