#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip939764091.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi3914296270.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi2355450968.h"

// System.Collections.ArrayList
struct ArrayList_t2718874744;
// ICSharpCode.SharpZipLib.Checksums.Crc32
struct Crc32_t4094429278;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t658048195;
// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.ZipOutputStream
struct  ZipOutputStream_t3000418837  : public DeflaterOutputStream_t939764091
{
public:
	// System.Collections.ArrayList ICSharpCode.SharpZipLib.Zip.ZipOutputStream::entries
	ArrayList_t2718874744 * ___entries_9;
	// ICSharpCode.SharpZipLib.Checksums.Crc32 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::crc
	Crc32_t4094429278 * ___crc_10;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipOutputStream::curEntry
	ZipEntry_t658048195 * ___curEntry_11;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::defaultCompressionLevel
	int32_t ___defaultCompressionLevel_12;
	// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipOutputStream::curMethod
	int32_t ___curMethod_13;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::size
	int64_t ___size_14;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::offset
	int64_t ___offset_15;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipOutputStream::zipComment
	ByteU5BU5D_t4116647657* ___zipComment_16;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipOutputStream::patchEntryHeader
	bool ___patchEntryHeader_17;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::crcPatchPos
	int64_t ___crcPatchPos_18;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::sizePatchPos
	int64_t ___sizePatchPos_19;
	// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::useZip64_
	int32_t ___useZip64__20;

public:
	inline static int32_t get_offset_of_entries_9() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3000418837, ___entries_9)); }
	inline ArrayList_t2718874744 * get_entries_9() const { return ___entries_9; }
	inline ArrayList_t2718874744 ** get_address_of_entries_9() { return &___entries_9; }
	inline void set_entries_9(ArrayList_t2718874744 * value)
	{
		___entries_9 = value;
		Il2CppCodeGenWriteBarrier(&___entries_9, value);
	}

	inline static int32_t get_offset_of_crc_10() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3000418837, ___crc_10)); }
	inline Crc32_t4094429278 * get_crc_10() const { return ___crc_10; }
	inline Crc32_t4094429278 ** get_address_of_crc_10() { return &___crc_10; }
	inline void set_crc_10(Crc32_t4094429278 * value)
	{
		___crc_10 = value;
		Il2CppCodeGenWriteBarrier(&___crc_10, value);
	}

	inline static int32_t get_offset_of_curEntry_11() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3000418837, ___curEntry_11)); }
	inline ZipEntry_t658048195 * get_curEntry_11() const { return ___curEntry_11; }
	inline ZipEntry_t658048195 ** get_address_of_curEntry_11() { return &___curEntry_11; }
	inline void set_curEntry_11(ZipEntry_t658048195 * value)
	{
		___curEntry_11 = value;
		Il2CppCodeGenWriteBarrier(&___curEntry_11, value);
	}

	inline static int32_t get_offset_of_defaultCompressionLevel_12() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3000418837, ___defaultCompressionLevel_12)); }
	inline int32_t get_defaultCompressionLevel_12() const { return ___defaultCompressionLevel_12; }
	inline int32_t* get_address_of_defaultCompressionLevel_12() { return &___defaultCompressionLevel_12; }
	inline void set_defaultCompressionLevel_12(int32_t value)
	{
		___defaultCompressionLevel_12 = value;
	}

	inline static int32_t get_offset_of_curMethod_13() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3000418837, ___curMethod_13)); }
	inline int32_t get_curMethod_13() const { return ___curMethod_13; }
	inline int32_t* get_address_of_curMethod_13() { return &___curMethod_13; }
	inline void set_curMethod_13(int32_t value)
	{
		___curMethod_13 = value;
	}

	inline static int32_t get_offset_of_size_14() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3000418837, ___size_14)); }
	inline int64_t get_size_14() const { return ___size_14; }
	inline int64_t* get_address_of_size_14() { return &___size_14; }
	inline void set_size_14(int64_t value)
	{
		___size_14 = value;
	}

	inline static int32_t get_offset_of_offset_15() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3000418837, ___offset_15)); }
	inline int64_t get_offset_15() const { return ___offset_15; }
	inline int64_t* get_address_of_offset_15() { return &___offset_15; }
	inline void set_offset_15(int64_t value)
	{
		___offset_15 = value;
	}

	inline static int32_t get_offset_of_zipComment_16() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3000418837, ___zipComment_16)); }
	inline ByteU5BU5D_t4116647657* get_zipComment_16() const { return ___zipComment_16; }
	inline ByteU5BU5D_t4116647657** get_address_of_zipComment_16() { return &___zipComment_16; }
	inline void set_zipComment_16(ByteU5BU5D_t4116647657* value)
	{
		___zipComment_16 = value;
		Il2CppCodeGenWriteBarrier(&___zipComment_16, value);
	}

	inline static int32_t get_offset_of_patchEntryHeader_17() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3000418837, ___patchEntryHeader_17)); }
	inline bool get_patchEntryHeader_17() const { return ___patchEntryHeader_17; }
	inline bool* get_address_of_patchEntryHeader_17() { return &___patchEntryHeader_17; }
	inline void set_patchEntryHeader_17(bool value)
	{
		___patchEntryHeader_17 = value;
	}

	inline static int32_t get_offset_of_crcPatchPos_18() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3000418837, ___crcPatchPos_18)); }
	inline int64_t get_crcPatchPos_18() const { return ___crcPatchPos_18; }
	inline int64_t* get_address_of_crcPatchPos_18() { return &___crcPatchPos_18; }
	inline void set_crcPatchPos_18(int64_t value)
	{
		___crcPatchPos_18 = value;
	}

	inline static int32_t get_offset_of_sizePatchPos_19() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3000418837, ___sizePatchPos_19)); }
	inline int64_t get_sizePatchPos_19() const { return ___sizePatchPos_19; }
	inline int64_t* get_address_of_sizePatchPos_19() { return &___sizePatchPos_19; }
	inline void set_sizePatchPos_19(int64_t value)
	{
		___sizePatchPos_19 = value;
	}

	inline static int32_t get_offset_of_useZip64__20() { return static_cast<int32_t>(offsetof(ZipOutputStream_t3000418837, ___useZip64__20)); }
	inline int32_t get_useZip64__20() const { return ___useZip64__20; }
	inline int32_t* get_address_of_useZip64__20() { return &___useZip64__20; }
	inline void set_useZip64__20(int32_t value)
	{
		___useZip64__20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
