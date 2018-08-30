#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi1176653752.h"

// ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler
struct ReadDataHandler_t2345607579;
// ICSharpCode.SharpZipLib.Checksums.Crc32
struct Crc32_t4094429278;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t658048195;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.ZipInputStream
struct  ZipInputStream_t3401940135  : public InflaterInputStream_t1176653752
{
public:
	// ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler ICSharpCode.SharpZipLib.Zip.ZipInputStream::internalReader
	ReadDataHandler_t2345607579 * ___internalReader_8;
	// ICSharpCode.SharpZipLib.Checksums.Crc32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::crc
	Crc32_t4094429278 * ___crc_9;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipInputStream::entry
	ZipEntry_t658048195 * ___entry_10;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipInputStream::size
	int64_t ___size_11;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::method
	int32_t ___method_12;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::flags
	int32_t ___flags_13;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipInputStream::password
	String_t* ___password_14;

public:
	inline static int32_t get_offset_of_internalReader_8() { return static_cast<int32_t>(offsetof(ZipInputStream_t3401940135, ___internalReader_8)); }
	inline ReadDataHandler_t2345607579 * get_internalReader_8() const { return ___internalReader_8; }
	inline ReadDataHandler_t2345607579 ** get_address_of_internalReader_8() { return &___internalReader_8; }
	inline void set_internalReader_8(ReadDataHandler_t2345607579 * value)
	{
		___internalReader_8 = value;
		Il2CppCodeGenWriteBarrier(&___internalReader_8, value);
	}

	inline static int32_t get_offset_of_crc_9() { return static_cast<int32_t>(offsetof(ZipInputStream_t3401940135, ___crc_9)); }
	inline Crc32_t4094429278 * get_crc_9() const { return ___crc_9; }
	inline Crc32_t4094429278 ** get_address_of_crc_9() { return &___crc_9; }
	inline void set_crc_9(Crc32_t4094429278 * value)
	{
		___crc_9 = value;
		Il2CppCodeGenWriteBarrier(&___crc_9, value);
	}

	inline static int32_t get_offset_of_entry_10() { return static_cast<int32_t>(offsetof(ZipInputStream_t3401940135, ___entry_10)); }
	inline ZipEntry_t658048195 * get_entry_10() const { return ___entry_10; }
	inline ZipEntry_t658048195 ** get_address_of_entry_10() { return &___entry_10; }
	inline void set_entry_10(ZipEntry_t658048195 * value)
	{
		___entry_10 = value;
		Il2CppCodeGenWriteBarrier(&___entry_10, value);
	}

	inline static int32_t get_offset_of_size_11() { return static_cast<int32_t>(offsetof(ZipInputStream_t3401940135, ___size_11)); }
	inline int64_t get_size_11() const { return ___size_11; }
	inline int64_t* get_address_of_size_11() { return &___size_11; }
	inline void set_size_11(int64_t value)
	{
		___size_11 = value;
	}

	inline static int32_t get_offset_of_method_12() { return static_cast<int32_t>(offsetof(ZipInputStream_t3401940135, ___method_12)); }
	inline int32_t get_method_12() const { return ___method_12; }
	inline int32_t* get_address_of_method_12() { return &___method_12; }
	inline void set_method_12(int32_t value)
	{
		___method_12 = value;
	}

	inline static int32_t get_offset_of_flags_13() { return static_cast<int32_t>(offsetof(ZipInputStream_t3401940135, ___flags_13)); }
	inline int32_t get_flags_13() const { return ___flags_13; }
	inline int32_t* get_address_of_flags_13() { return &___flags_13; }
	inline void set_flags_13(int32_t value)
	{
		___flags_13 = value;
	}

	inline static int32_t get_offset_of_password_14() { return static_cast<int32_t>(offsetof(ZipInputStream_t3401940135, ___password_14)); }
	inline String_t* get_password_14() const { return ___password_14; }
	inline String_t** get_address_of_password_14() { return &___password_14; }
	inline void set_password_14(String_t* value)
	{
		___password_14 = value;
		Il2CppCodeGenWriteBarrier(&___password_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
