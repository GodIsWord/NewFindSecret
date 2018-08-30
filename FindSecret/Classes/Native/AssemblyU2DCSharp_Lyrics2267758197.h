#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.String[]
struct StringU5BU5D_t1281789340;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lyrics
struct  Lyrics_t2267758197  : public MonoBehaviour_t3962482529
{
public:
	// System.String Lyrics::LyricsTXT
	String_t* ___LyricsTXT_2;
	// System.Single Lyrics::time
	float ___time_3;
	// UnityEngine.GameObject Lyrics::AscendingLyrics
	GameObject_t1113636619 * ___AscendingLyrics_4;
	// UnityEngine.GameObject Lyrics::DescendingLyrics
	GameObject_t1113636619 * ___DescendingLyrics_5;
	// System.Int32 Lyrics::LineNumber
	int32_t ___LineNumber_6;
	// System.Boolean Lyrics::AorD
	bool ___AorD_7;
	// System.String[] Lyrics::LyricsTXT_
	StringU5BU5D_t1281789340* ___LyricsTXT__8;

public:
	inline static int32_t get_offset_of_LyricsTXT_2() { return static_cast<int32_t>(offsetof(Lyrics_t2267758197, ___LyricsTXT_2)); }
	inline String_t* get_LyricsTXT_2() const { return ___LyricsTXT_2; }
	inline String_t** get_address_of_LyricsTXT_2() { return &___LyricsTXT_2; }
	inline void set_LyricsTXT_2(String_t* value)
	{
		___LyricsTXT_2 = value;
		Il2CppCodeGenWriteBarrier(&___LyricsTXT_2, value);
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(Lyrics_t2267758197, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_AscendingLyrics_4() { return static_cast<int32_t>(offsetof(Lyrics_t2267758197, ___AscendingLyrics_4)); }
	inline GameObject_t1113636619 * get_AscendingLyrics_4() const { return ___AscendingLyrics_4; }
	inline GameObject_t1113636619 ** get_address_of_AscendingLyrics_4() { return &___AscendingLyrics_4; }
	inline void set_AscendingLyrics_4(GameObject_t1113636619 * value)
	{
		___AscendingLyrics_4 = value;
		Il2CppCodeGenWriteBarrier(&___AscendingLyrics_4, value);
	}

	inline static int32_t get_offset_of_DescendingLyrics_5() { return static_cast<int32_t>(offsetof(Lyrics_t2267758197, ___DescendingLyrics_5)); }
	inline GameObject_t1113636619 * get_DescendingLyrics_5() const { return ___DescendingLyrics_5; }
	inline GameObject_t1113636619 ** get_address_of_DescendingLyrics_5() { return &___DescendingLyrics_5; }
	inline void set_DescendingLyrics_5(GameObject_t1113636619 * value)
	{
		___DescendingLyrics_5 = value;
		Il2CppCodeGenWriteBarrier(&___DescendingLyrics_5, value);
	}

	inline static int32_t get_offset_of_LineNumber_6() { return static_cast<int32_t>(offsetof(Lyrics_t2267758197, ___LineNumber_6)); }
	inline int32_t get_LineNumber_6() const { return ___LineNumber_6; }
	inline int32_t* get_address_of_LineNumber_6() { return &___LineNumber_6; }
	inline void set_LineNumber_6(int32_t value)
	{
		___LineNumber_6 = value;
	}

	inline static int32_t get_offset_of_AorD_7() { return static_cast<int32_t>(offsetof(Lyrics_t2267758197, ___AorD_7)); }
	inline bool get_AorD_7() const { return ___AorD_7; }
	inline bool* get_address_of_AorD_7() { return &___AorD_7; }
	inline void set_AorD_7(bool value)
	{
		___AorD_7 = value;
	}

	inline static int32_t get_offset_of_LyricsTXT__8() { return static_cast<int32_t>(offsetof(Lyrics_t2267758197, ___LyricsTXT__8)); }
	inline StringU5BU5D_t1281789340* get_LyricsTXT__8() const { return ___LyricsTXT__8; }
	inline StringU5BU5D_t1281789340** get_address_of_LyricsTXT__8() { return &___LyricsTXT__8; }
	inline void set_LyricsTXT__8(StringU5BU5D_t1281789340* value)
	{
		___LyricsTXT__8 = value;
		Il2CppCodeGenWriteBarrier(&___LyricsTXT__8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
