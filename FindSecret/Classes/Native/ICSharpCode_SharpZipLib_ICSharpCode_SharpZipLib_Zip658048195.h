#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi2193685793.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi3914296270.h"

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct  ZipEntry_t658048195  : public Il2CppObject
{
public:
	// ICSharpCode.SharpZipLib.Zip.ZipEntry/Known ICSharpCode.SharpZipLib.Zip.ZipEntry::known
	uint8_t ___known_0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::externalFileAttributes
	int32_t ___externalFileAttributes_1;
	// System.UInt16 ICSharpCode.SharpZipLib.Zip.ZipEntry::versionMadeBy
	uint16_t ___versionMadeBy_2;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::name
	String_t* ___name_3;
	// System.UInt64 ICSharpCode.SharpZipLib.Zip.ZipEntry::size
	uint64_t ___size_4;
	// System.UInt64 ICSharpCode.SharpZipLib.Zip.ZipEntry::compressedSize
	uint64_t ___compressedSize_5;
	// System.UInt16 ICSharpCode.SharpZipLib.Zip.ZipEntry::versionToExtract
	uint16_t ___versionToExtract_6;
	// System.UInt32 ICSharpCode.SharpZipLib.Zip.ZipEntry::crc
	uint32_t ___crc_7;
	// System.UInt32 ICSharpCode.SharpZipLib.Zip.ZipEntry::dosTime
	uint32_t ___dosTime_8;
	// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipEntry::method
	int32_t ___method_9;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipEntry::extra
	ByteU5BU5D_t4116647657* ___extra_10;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::comment
	String_t* ___comment_11;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::flags
	int32_t ___flags_12;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::zipFileIndex
	int64_t ___zipFileIndex_13;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::offset
	int64_t ___offset_14;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::forceZip64_
	bool ___forceZip64__15;
	// System.Byte ICSharpCode.SharpZipLib.Zip.ZipEntry::cryptoCheckValue_
	uint8_t ___cryptoCheckValue__16;

public:
	inline static int32_t get_offset_of_known_0() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___known_0)); }
	inline uint8_t get_known_0() const { return ___known_0; }
	inline uint8_t* get_address_of_known_0() { return &___known_0; }
	inline void set_known_0(uint8_t value)
	{
		___known_0 = value;
	}

	inline static int32_t get_offset_of_externalFileAttributes_1() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___externalFileAttributes_1)); }
	inline int32_t get_externalFileAttributes_1() const { return ___externalFileAttributes_1; }
	inline int32_t* get_address_of_externalFileAttributes_1() { return &___externalFileAttributes_1; }
	inline void set_externalFileAttributes_1(int32_t value)
	{
		___externalFileAttributes_1 = value;
	}

	inline static int32_t get_offset_of_versionMadeBy_2() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___versionMadeBy_2)); }
	inline uint16_t get_versionMadeBy_2() const { return ___versionMadeBy_2; }
	inline uint16_t* get_address_of_versionMadeBy_2() { return &___versionMadeBy_2; }
	inline void set_versionMadeBy_2(uint16_t value)
	{
		___versionMadeBy_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___size_4)); }
	inline uint64_t get_size_4() const { return ___size_4; }
	inline uint64_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(uint64_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_compressedSize_5() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___compressedSize_5)); }
	inline uint64_t get_compressedSize_5() const { return ___compressedSize_5; }
	inline uint64_t* get_address_of_compressedSize_5() { return &___compressedSize_5; }
	inline void set_compressedSize_5(uint64_t value)
	{
		___compressedSize_5 = value;
	}

	inline static int32_t get_offset_of_versionToExtract_6() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___versionToExtract_6)); }
	inline uint16_t get_versionToExtract_6() const { return ___versionToExtract_6; }
	inline uint16_t* get_address_of_versionToExtract_6() { return &___versionToExtract_6; }
	inline void set_versionToExtract_6(uint16_t value)
	{
		___versionToExtract_6 = value;
	}

	inline static int32_t get_offset_of_crc_7() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___crc_7)); }
	inline uint32_t get_crc_7() const { return ___crc_7; }
	inline uint32_t* get_address_of_crc_7() { return &___crc_7; }
	inline void set_crc_7(uint32_t value)
	{
		___crc_7 = value;
	}

	inline static int32_t get_offset_of_dosTime_8() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___dosTime_8)); }
	inline uint32_t get_dosTime_8() const { return ___dosTime_8; }
	inline uint32_t* get_address_of_dosTime_8() { return &___dosTime_8; }
	inline void set_dosTime_8(uint32_t value)
	{
		___dosTime_8 = value;
	}

	inline static int32_t get_offset_of_method_9() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___method_9)); }
	inline int32_t get_method_9() const { return ___method_9; }
	inline int32_t* get_address_of_method_9() { return &___method_9; }
	inline void set_method_9(int32_t value)
	{
		___method_9 = value;
	}

	inline static int32_t get_offset_of_extra_10() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___extra_10)); }
	inline ByteU5BU5D_t4116647657* get_extra_10() const { return ___extra_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_extra_10() { return &___extra_10; }
	inline void set_extra_10(ByteU5BU5D_t4116647657* value)
	{
		___extra_10 = value;
		Il2CppCodeGenWriteBarrier(&___extra_10, value);
	}

	inline static int32_t get_offset_of_comment_11() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___comment_11)); }
	inline String_t* get_comment_11() const { return ___comment_11; }
	inline String_t** get_address_of_comment_11() { return &___comment_11; }
	inline void set_comment_11(String_t* value)
	{
		___comment_11 = value;
		Il2CppCodeGenWriteBarrier(&___comment_11, value);
	}

	inline static int32_t get_offset_of_flags_12() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___flags_12)); }
	inline int32_t get_flags_12() const { return ___flags_12; }
	inline int32_t* get_address_of_flags_12() { return &___flags_12; }
	inline void set_flags_12(int32_t value)
	{
		___flags_12 = value;
	}

	inline static int32_t get_offset_of_zipFileIndex_13() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___zipFileIndex_13)); }
	inline int64_t get_zipFileIndex_13() const { return ___zipFileIndex_13; }
	inline int64_t* get_address_of_zipFileIndex_13() { return &___zipFileIndex_13; }
	inline void set_zipFileIndex_13(int64_t value)
	{
		___zipFileIndex_13 = value;
	}

	inline static int32_t get_offset_of_offset_14() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___offset_14)); }
	inline int64_t get_offset_14() const { return ___offset_14; }
	inline int64_t* get_address_of_offset_14() { return &___offset_14; }
	inline void set_offset_14(int64_t value)
	{
		___offset_14 = value;
	}

	inline static int32_t get_offset_of_forceZip64__15() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___forceZip64__15)); }
	inline bool get_forceZip64__15() const { return ___forceZip64__15; }
	inline bool* get_address_of_forceZip64__15() { return &___forceZip64__15; }
	inline void set_forceZip64__15(bool value)
	{
		___forceZip64__15 = value;
	}

	inline static int32_t get_offset_of_cryptoCheckValue__16() { return static_cast<int32_t>(offsetof(ZipEntry_t658048195, ___cryptoCheckValue__16)); }
	inline uint8_t get_cryptoCheckValue__16() const { return ___cryptoCheckValue__16; }
	inline uint8_t* get_address_of_cryptoCheckValue__16() { return &___cryptoCheckValue__16; }
	inline void set_cryptoCheckValue__16(uint8_t value)
	{
		___cryptoCheckValue__16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
