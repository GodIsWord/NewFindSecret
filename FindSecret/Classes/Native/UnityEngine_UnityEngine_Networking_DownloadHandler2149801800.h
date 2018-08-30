#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_Networking_DownloadHandler2937767557.h"

// UnityEngine.Texture2D
struct Texture2D_t3840446185;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandlerTexture
struct  DownloadHandlerTexture_t2149801800  : public DownloadHandler_t2937767557
{
public:
	// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::mTexture
	Texture2D_t3840446185 * ___mTexture_1;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mHasTexture
	bool ___mHasTexture_2;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mNonReadable
	bool ___mNonReadable_3;

public:
	inline static int32_t get_offset_of_mTexture_1() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_t2149801800, ___mTexture_1)); }
	inline Texture2D_t3840446185 * get_mTexture_1() const { return ___mTexture_1; }
	inline Texture2D_t3840446185 ** get_address_of_mTexture_1() { return &___mTexture_1; }
	inline void set_mTexture_1(Texture2D_t3840446185 * value)
	{
		___mTexture_1 = value;
		Il2CppCodeGenWriteBarrier(&___mTexture_1, value);
	}

	inline static int32_t get_offset_of_mHasTexture_2() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_t2149801800, ___mHasTexture_2)); }
	inline bool get_mHasTexture_2() const { return ___mHasTexture_2; }
	inline bool* get_address_of_mHasTexture_2() { return &___mHasTexture_2; }
	inline void set_mHasTexture_2(bool value)
	{
		___mHasTexture_2 = value;
	}

	inline static int32_t get_offset_of_mNonReadable_3() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_t2149801800, ___mNonReadable_3)); }
	inline bool get_mNonReadable_3() const { return ___mNonReadable_3; }
	inline bool* get_address_of_mNonReadable_3() { return &___mNonReadable_3; }
	inline void set_mNonReadable_3(bool value)
	{
		___mNonReadable_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t2149801800_marshaled_pinvoke : public DownloadHandler_t2937767557_marshaled_pinvoke
{
	Texture2D_t3840446185 * ___mTexture_1;
	int32_t ___mHasTexture_2;
	int32_t ___mNonReadable_3;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t2149801800_marshaled_com : public DownloadHandler_t2937767557_marshaled_com
{
	Texture2D_t3840446185 * ___mTexture_1;
	int32_t ___mHasTexture_2;
	int32_t ___mNonReadable_3;
};
