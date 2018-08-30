#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "mscorlib_System_Guid3193532887.h"
#include "System_Drawing_System_Drawing_Imaging_ImageCodecFl4044615128.h"

// System.String
struct String_t;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t457913172;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Drawing.Imaging.ImageCodecInfo
struct  ImageCodecInfo_t2037253290  : public Il2CppObject
{
public:
	// System.Guid System.Drawing.Imaging.ImageCodecInfo::clsid
	Guid_t  ___clsid_0;
	// System.String System.Drawing.Imaging.ImageCodecInfo::codecName
	String_t* ___codecName_1;
	// System.String System.Drawing.Imaging.ImageCodecInfo::dllName
	String_t* ___dllName_2;
	// System.String System.Drawing.Imaging.ImageCodecInfo::filenameExtension
	String_t* ___filenameExtension_3;
	// System.Drawing.Imaging.ImageCodecFlags System.Drawing.Imaging.ImageCodecInfo::flags
	int32_t ___flags_4;
	// System.String System.Drawing.Imaging.ImageCodecInfo::formatDescription
	String_t* ___formatDescription_5;
	// System.Guid System.Drawing.Imaging.ImageCodecInfo::formatID
	Guid_t  ___formatID_6;
	// System.String System.Drawing.Imaging.ImageCodecInfo::mimeType
	String_t* ___mimeType_7;
	// System.Byte[][] System.Drawing.Imaging.ImageCodecInfo::signatureMasks
	ByteU5BU5DU5BU5D_t457913172* ___signatureMasks_8;
	// System.Byte[][] System.Drawing.Imaging.ImageCodecInfo::signaturePatterns
	ByteU5BU5DU5BU5D_t457913172* ___signaturePatterns_9;
	// System.Int32 System.Drawing.Imaging.ImageCodecInfo::version
	int32_t ___version_10;

public:
	inline static int32_t get_offset_of_clsid_0() { return static_cast<int32_t>(offsetof(ImageCodecInfo_t2037253290, ___clsid_0)); }
	inline Guid_t  get_clsid_0() const { return ___clsid_0; }
	inline Guid_t * get_address_of_clsid_0() { return &___clsid_0; }
	inline void set_clsid_0(Guid_t  value)
	{
		___clsid_0 = value;
	}

	inline static int32_t get_offset_of_codecName_1() { return static_cast<int32_t>(offsetof(ImageCodecInfo_t2037253290, ___codecName_1)); }
	inline String_t* get_codecName_1() const { return ___codecName_1; }
	inline String_t** get_address_of_codecName_1() { return &___codecName_1; }
	inline void set_codecName_1(String_t* value)
	{
		___codecName_1 = value;
		Il2CppCodeGenWriteBarrier(&___codecName_1, value);
	}

	inline static int32_t get_offset_of_dllName_2() { return static_cast<int32_t>(offsetof(ImageCodecInfo_t2037253290, ___dllName_2)); }
	inline String_t* get_dllName_2() const { return ___dllName_2; }
	inline String_t** get_address_of_dllName_2() { return &___dllName_2; }
	inline void set_dllName_2(String_t* value)
	{
		___dllName_2 = value;
		Il2CppCodeGenWriteBarrier(&___dllName_2, value);
	}

	inline static int32_t get_offset_of_filenameExtension_3() { return static_cast<int32_t>(offsetof(ImageCodecInfo_t2037253290, ___filenameExtension_3)); }
	inline String_t* get_filenameExtension_3() const { return ___filenameExtension_3; }
	inline String_t** get_address_of_filenameExtension_3() { return &___filenameExtension_3; }
	inline void set_filenameExtension_3(String_t* value)
	{
		___filenameExtension_3 = value;
		Il2CppCodeGenWriteBarrier(&___filenameExtension_3, value);
	}

	inline static int32_t get_offset_of_flags_4() { return static_cast<int32_t>(offsetof(ImageCodecInfo_t2037253290, ___flags_4)); }
	inline int32_t get_flags_4() const { return ___flags_4; }
	inline int32_t* get_address_of_flags_4() { return &___flags_4; }
	inline void set_flags_4(int32_t value)
	{
		___flags_4 = value;
	}

	inline static int32_t get_offset_of_formatDescription_5() { return static_cast<int32_t>(offsetof(ImageCodecInfo_t2037253290, ___formatDescription_5)); }
	inline String_t* get_formatDescription_5() const { return ___formatDescription_5; }
	inline String_t** get_address_of_formatDescription_5() { return &___formatDescription_5; }
	inline void set_formatDescription_5(String_t* value)
	{
		___formatDescription_5 = value;
		Il2CppCodeGenWriteBarrier(&___formatDescription_5, value);
	}

	inline static int32_t get_offset_of_formatID_6() { return static_cast<int32_t>(offsetof(ImageCodecInfo_t2037253290, ___formatID_6)); }
	inline Guid_t  get_formatID_6() const { return ___formatID_6; }
	inline Guid_t * get_address_of_formatID_6() { return &___formatID_6; }
	inline void set_formatID_6(Guid_t  value)
	{
		___formatID_6 = value;
	}

	inline static int32_t get_offset_of_mimeType_7() { return static_cast<int32_t>(offsetof(ImageCodecInfo_t2037253290, ___mimeType_7)); }
	inline String_t* get_mimeType_7() const { return ___mimeType_7; }
	inline String_t** get_address_of_mimeType_7() { return &___mimeType_7; }
	inline void set_mimeType_7(String_t* value)
	{
		___mimeType_7 = value;
		Il2CppCodeGenWriteBarrier(&___mimeType_7, value);
	}

	inline static int32_t get_offset_of_signatureMasks_8() { return static_cast<int32_t>(offsetof(ImageCodecInfo_t2037253290, ___signatureMasks_8)); }
	inline ByteU5BU5DU5BU5D_t457913172* get_signatureMasks_8() const { return ___signatureMasks_8; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of_signatureMasks_8() { return &___signatureMasks_8; }
	inline void set_signatureMasks_8(ByteU5BU5DU5BU5D_t457913172* value)
	{
		___signatureMasks_8 = value;
		Il2CppCodeGenWriteBarrier(&___signatureMasks_8, value);
	}

	inline static int32_t get_offset_of_signaturePatterns_9() { return static_cast<int32_t>(offsetof(ImageCodecInfo_t2037253290, ___signaturePatterns_9)); }
	inline ByteU5BU5DU5BU5D_t457913172* get_signaturePatterns_9() const { return ___signaturePatterns_9; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of_signaturePatterns_9() { return &___signaturePatterns_9; }
	inline void set_signaturePatterns_9(ByteU5BU5DU5BU5D_t457913172* value)
	{
		___signaturePatterns_9 = value;
		Il2CppCodeGenWriteBarrier(&___signaturePatterns_9, value);
	}

	inline static int32_t get_offset_of_version_10() { return static_cast<int32_t>(offsetof(ImageCodecInfo_t2037253290, ___version_10)); }
	inline int32_t get_version_10() const { return ___version_10; }
	inline int32_t* get_address_of_version_10() { return &___version_10; }
	inline void set_version_10(int32_t value)
	{
		___version_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
