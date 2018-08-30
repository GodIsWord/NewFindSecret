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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Drawing.Imaging.ImageFormat
struct ImageFormat_t730671025;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Drawing.Imaging.ImageFormat
struct  ImageFormat_t730671025  : public Il2CppObject
{
public:
	// System.Guid System.Drawing.Imaging.ImageFormat::guid
	Guid_t  ___guid_0;
	// System.String System.Drawing.Imaging.ImageFormat::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(ImageFormat_t730671025, ___guid_0)); }
	inline Guid_t  get_guid_0() const { return ___guid_0; }
	inline Guid_t * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t  value)
	{
		___guid_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(ImageFormat_t730671025, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}
};

struct ImageFormat_t730671025_StaticFields
{
public:
	// System.Object System.Drawing.Imaging.ImageFormat::locker
	Il2CppObject * ___locker_2;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::BmpImageFormat
	ImageFormat_t730671025 * ___BmpImageFormat_3;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::EmfImageFormat
	ImageFormat_t730671025 * ___EmfImageFormat_4;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::ExifImageFormat
	ImageFormat_t730671025 * ___ExifImageFormat_5;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::GifImageFormat
	ImageFormat_t730671025 * ___GifImageFormat_6;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::TiffImageFormat
	ImageFormat_t730671025 * ___TiffImageFormat_7;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::PngImageFormat
	ImageFormat_t730671025 * ___PngImageFormat_8;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::MemoryBmpImageFormat
	ImageFormat_t730671025 * ___MemoryBmpImageFormat_9;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::IconImageFormat
	ImageFormat_t730671025 * ___IconImageFormat_10;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::JpegImageFormat
	ImageFormat_t730671025 * ___JpegImageFormat_11;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::WmfImageFormat
	ImageFormat_t730671025 * ___WmfImageFormat_12;

public:
	inline static int32_t get_offset_of_locker_2() { return static_cast<int32_t>(offsetof(ImageFormat_t730671025_StaticFields, ___locker_2)); }
	inline Il2CppObject * get_locker_2() const { return ___locker_2; }
	inline Il2CppObject ** get_address_of_locker_2() { return &___locker_2; }
	inline void set_locker_2(Il2CppObject * value)
	{
		___locker_2 = value;
		Il2CppCodeGenWriteBarrier(&___locker_2, value);
	}

	inline static int32_t get_offset_of_BmpImageFormat_3() { return static_cast<int32_t>(offsetof(ImageFormat_t730671025_StaticFields, ___BmpImageFormat_3)); }
	inline ImageFormat_t730671025 * get_BmpImageFormat_3() const { return ___BmpImageFormat_3; }
	inline ImageFormat_t730671025 ** get_address_of_BmpImageFormat_3() { return &___BmpImageFormat_3; }
	inline void set_BmpImageFormat_3(ImageFormat_t730671025 * value)
	{
		___BmpImageFormat_3 = value;
		Il2CppCodeGenWriteBarrier(&___BmpImageFormat_3, value);
	}

	inline static int32_t get_offset_of_EmfImageFormat_4() { return static_cast<int32_t>(offsetof(ImageFormat_t730671025_StaticFields, ___EmfImageFormat_4)); }
	inline ImageFormat_t730671025 * get_EmfImageFormat_4() const { return ___EmfImageFormat_4; }
	inline ImageFormat_t730671025 ** get_address_of_EmfImageFormat_4() { return &___EmfImageFormat_4; }
	inline void set_EmfImageFormat_4(ImageFormat_t730671025 * value)
	{
		___EmfImageFormat_4 = value;
		Il2CppCodeGenWriteBarrier(&___EmfImageFormat_4, value);
	}

	inline static int32_t get_offset_of_ExifImageFormat_5() { return static_cast<int32_t>(offsetof(ImageFormat_t730671025_StaticFields, ___ExifImageFormat_5)); }
	inline ImageFormat_t730671025 * get_ExifImageFormat_5() const { return ___ExifImageFormat_5; }
	inline ImageFormat_t730671025 ** get_address_of_ExifImageFormat_5() { return &___ExifImageFormat_5; }
	inline void set_ExifImageFormat_5(ImageFormat_t730671025 * value)
	{
		___ExifImageFormat_5 = value;
		Il2CppCodeGenWriteBarrier(&___ExifImageFormat_5, value);
	}

	inline static int32_t get_offset_of_GifImageFormat_6() { return static_cast<int32_t>(offsetof(ImageFormat_t730671025_StaticFields, ___GifImageFormat_6)); }
	inline ImageFormat_t730671025 * get_GifImageFormat_6() const { return ___GifImageFormat_6; }
	inline ImageFormat_t730671025 ** get_address_of_GifImageFormat_6() { return &___GifImageFormat_6; }
	inline void set_GifImageFormat_6(ImageFormat_t730671025 * value)
	{
		___GifImageFormat_6 = value;
		Il2CppCodeGenWriteBarrier(&___GifImageFormat_6, value);
	}

	inline static int32_t get_offset_of_TiffImageFormat_7() { return static_cast<int32_t>(offsetof(ImageFormat_t730671025_StaticFields, ___TiffImageFormat_7)); }
	inline ImageFormat_t730671025 * get_TiffImageFormat_7() const { return ___TiffImageFormat_7; }
	inline ImageFormat_t730671025 ** get_address_of_TiffImageFormat_7() { return &___TiffImageFormat_7; }
	inline void set_TiffImageFormat_7(ImageFormat_t730671025 * value)
	{
		___TiffImageFormat_7 = value;
		Il2CppCodeGenWriteBarrier(&___TiffImageFormat_7, value);
	}

	inline static int32_t get_offset_of_PngImageFormat_8() { return static_cast<int32_t>(offsetof(ImageFormat_t730671025_StaticFields, ___PngImageFormat_8)); }
	inline ImageFormat_t730671025 * get_PngImageFormat_8() const { return ___PngImageFormat_8; }
	inline ImageFormat_t730671025 ** get_address_of_PngImageFormat_8() { return &___PngImageFormat_8; }
	inline void set_PngImageFormat_8(ImageFormat_t730671025 * value)
	{
		___PngImageFormat_8 = value;
		Il2CppCodeGenWriteBarrier(&___PngImageFormat_8, value);
	}

	inline static int32_t get_offset_of_MemoryBmpImageFormat_9() { return static_cast<int32_t>(offsetof(ImageFormat_t730671025_StaticFields, ___MemoryBmpImageFormat_9)); }
	inline ImageFormat_t730671025 * get_MemoryBmpImageFormat_9() const { return ___MemoryBmpImageFormat_9; }
	inline ImageFormat_t730671025 ** get_address_of_MemoryBmpImageFormat_9() { return &___MemoryBmpImageFormat_9; }
	inline void set_MemoryBmpImageFormat_9(ImageFormat_t730671025 * value)
	{
		___MemoryBmpImageFormat_9 = value;
		Il2CppCodeGenWriteBarrier(&___MemoryBmpImageFormat_9, value);
	}

	inline static int32_t get_offset_of_IconImageFormat_10() { return static_cast<int32_t>(offsetof(ImageFormat_t730671025_StaticFields, ___IconImageFormat_10)); }
	inline ImageFormat_t730671025 * get_IconImageFormat_10() const { return ___IconImageFormat_10; }
	inline ImageFormat_t730671025 ** get_address_of_IconImageFormat_10() { return &___IconImageFormat_10; }
	inline void set_IconImageFormat_10(ImageFormat_t730671025 * value)
	{
		___IconImageFormat_10 = value;
		Il2CppCodeGenWriteBarrier(&___IconImageFormat_10, value);
	}

	inline static int32_t get_offset_of_JpegImageFormat_11() { return static_cast<int32_t>(offsetof(ImageFormat_t730671025_StaticFields, ___JpegImageFormat_11)); }
	inline ImageFormat_t730671025 * get_JpegImageFormat_11() const { return ___JpegImageFormat_11; }
	inline ImageFormat_t730671025 ** get_address_of_JpegImageFormat_11() { return &___JpegImageFormat_11; }
	inline void set_JpegImageFormat_11(ImageFormat_t730671025 * value)
	{
		___JpegImageFormat_11 = value;
		Il2CppCodeGenWriteBarrier(&___JpegImageFormat_11, value);
	}

	inline static int32_t get_offset_of_WmfImageFormat_12() { return static_cast<int32_t>(offsetof(ImageFormat_t730671025_StaticFields, ___WmfImageFormat_12)); }
	inline ImageFormat_t730671025 * get_WmfImageFormat_12() const { return ___WmfImageFormat_12; }
	inline ImageFormat_t730671025 ** get_address_of_WmfImageFormat_12() { return &___WmfImageFormat_12; }
	inline void set_WmfImageFormat_12(ImageFormat_t730671025 * value)
	{
		___WmfImageFormat_12 = value;
		Il2CppCodeGenWriteBarrier(&___WmfImageFormat_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
