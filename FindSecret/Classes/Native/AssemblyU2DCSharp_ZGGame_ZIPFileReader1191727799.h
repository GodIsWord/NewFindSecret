#pragma once

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
// System.String
struct String_t;
// ICSharpCode.SharpZipLib.Zip.ZipInputStream
struct ZipInputStream_t3401940135;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t658048195;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.ZIPFileReader
struct  ZIPFileReader_t1191727799  : public Il2CppObject
{
public:
	// System.Byte[] ZGGame.ZIPFileReader::data
	ByteU5BU5D_t4116647657* ___data_0;
	// System.String ZGGame.ZIPFileReader::fileName
	String_t* ___fileName_1;
	// System.String ZGGame.ZIPFileReader::fileFullName
	String_t* ___fileFullName_2;
	// ICSharpCode.SharpZipLib.Zip.ZipInputStream ZGGame.ZIPFileReader::zs
	ZipInputStream_t3401940135 * ___zs_3;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry ZGGame.ZIPFileReader::zn
	ZipEntry_t658048195 * ___zn_4;
	// System.Boolean ZGGame.ZIPFileReader::completed
	bool ___completed_5;
	// System.String ZGGame.ZIPFileReader::_p
	String_t* ____p_6;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ZIPFileReader_t1191727799, ___data_0)); }
	inline ByteU5BU5D_t4116647657* get_data_0() const { return ___data_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ByteU5BU5D_t4116647657* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_fileName_1() { return static_cast<int32_t>(offsetof(ZIPFileReader_t1191727799, ___fileName_1)); }
	inline String_t* get_fileName_1() const { return ___fileName_1; }
	inline String_t** get_address_of_fileName_1() { return &___fileName_1; }
	inline void set_fileName_1(String_t* value)
	{
		___fileName_1 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_1, value);
	}

	inline static int32_t get_offset_of_fileFullName_2() { return static_cast<int32_t>(offsetof(ZIPFileReader_t1191727799, ___fileFullName_2)); }
	inline String_t* get_fileFullName_2() const { return ___fileFullName_2; }
	inline String_t** get_address_of_fileFullName_2() { return &___fileFullName_2; }
	inline void set_fileFullName_2(String_t* value)
	{
		___fileFullName_2 = value;
		Il2CppCodeGenWriteBarrier(&___fileFullName_2, value);
	}

	inline static int32_t get_offset_of_zs_3() { return static_cast<int32_t>(offsetof(ZIPFileReader_t1191727799, ___zs_3)); }
	inline ZipInputStream_t3401940135 * get_zs_3() const { return ___zs_3; }
	inline ZipInputStream_t3401940135 ** get_address_of_zs_3() { return &___zs_3; }
	inline void set_zs_3(ZipInputStream_t3401940135 * value)
	{
		___zs_3 = value;
		Il2CppCodeGenWriteBarrier(&___zs_3, value);
	}

	inline static int32_t get_offset_of_zn_4() { return static_cast<int32_t>(offsetof(ZIPFileReader_t1191727799, ___zn_4)); }
	inline ZipEntry_t658048195 * get_zn_4() const { return ___zn_4; }
	inline ZipEntry_t658048195 ** get_address_of_zn_4() { return &___zn_4; }
	inline void set_zn_4(ZipEntry_t658048195 * value)
	{
		___zn_4 = value;
		Il2CppCodeGenWriteBarrier(&___zn_4, value);
	}

	inline static int32_t get_offset_of_completed_5() { return static_cast<int32_t>(offsetof(ZIPFileReader_t1191727799, ___completed_5)); }
	inline bool get_completed_5() const { return ___completed_5; }
	inline bool* get_address_of_completed_5() { return &___completed_5; }
	inline void set_completed_5(bool value)
	{
		___completed_5 = value;
	}

	inline static int32_t get_offset_of__p_6() { return static_cast<int32_t>(offsetof(ZIPFileReader_t1191727799, ____p_6)); }
	inline String_t* get__p_6() const { return ____p_6; }
	inline String_t** get_address_of__p_6() { return &____p_6; }
	inline void set__p_6(String_t* value)
	{
		____p_6 = value;
		Il2CppCodeGenWriteBarrier(&____p_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
