#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_IDAndType2771975758.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Point
struct  Point_t1038053449  : public IDAndType_t2771975758
{
public:
	// System.String Point::filePath
	String_t* ___filePath_6;
	// System.String Point::thumbFilePath
	String_t* ___thumbFilePath_7;
	// System.Double Point::duration
	double ___duration_8;
	// System.String Point::text
	String_t* ___text_9;
	// System.String Point::color
	String_t* ___color_10;
	// System.String Point::font
	String_t* ___font_11;

public:
	inline static int32_t get_offset_of_filePath_6() { return static_cast<int32_t>(offsetof(Point_t1038053449, ___filePath_6)); }
	inline String_t* get_filePath_6() const { return ___filePath_6; }
	inline String_t** get_address_of_filePath_6() { return &___filePath_6; }
	inline void set_filePath_6(String_t* value)
	{
		___filePath_6 = value;
		Il2CppCodeGenWriteBarrier(&___filePath_6, value);
	}

	inline static int32_t get_offset_of_thumbFilePath_7() { return static_cast<int32_t>(offsetof(Point_t1038053449, ___thumbFilePath_7)); }
	inline String_t* get_thumbFilePath_7() const { return ___thumbFilePath_7; }
	inline String_t** get_address_of_thumbFilePath_7() { return &___thumbFilePath_7; }
	inline void set_thumbFilePath_7(String_t* value)
	{
		___thumbFilePath_7 = value;
		Il2CppCodeGenWriteBarrier(&___thumbFilePath_7, value);
	}

	inline static int32_t get_offset_of_duration_8() { return static_cast<int32_t>(offsetof(Point_t1038053449, ___duration_8)); }
	inline double get_duration_8() const { return ___duration_8; }
	inline double* get_address_of_duration_8() { return &___duration_8; }
	inline void set_duration_8(double value)
	{
		___duration_8 = value;
	}

	inline static int32_t get_offset_of_text_9() { return static_cast<int32_t>(offsetof(Point_t1038053449, ___text_9)); }
	inline String_t* get_text_9() const { return ___text_9; }
	inline String_t** get_address_of_text_9() { return &___text_9; }
	inline void set_text_9(String_t* value)
	{
		___text_9 = value;
		Il2CppCodeGenWriteBarrier(&___text_9, value);
	}

	inline static int32_t get_offset_of_color_10() { return static_cast<int32_t>(offsetof(Point_t1038053449, ___color_10)); }
	inline String_t* get_color_10() const { return ___color_10; }
	inline String_t** get_address_of_color_10() { return &___color_10; }
	inline void set_color_10(String_t* value)
	{
		___color_10 = value;
		Il2CppCodeGenWriteBarrier(&___color_10, value);
	}

	inline static int32_t get_offset_of_font_11() { return static_cast<int32_t>(offsetof(Point_t1038053449, ___font_11)); }
	inline String_t* get_font_11() const { return ___font_11; }
	inline String_t** get_address_of_font_11() { return &___font_11; }
	inline void set_font_11(String_t* value)
	{
		___font_11 = value;
		Il2CppCodeGenWriteBarrier(&___font_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
