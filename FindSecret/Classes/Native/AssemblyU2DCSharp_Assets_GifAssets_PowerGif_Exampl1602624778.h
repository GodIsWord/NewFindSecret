#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Exampl1710376396.h"

// System.String
struct String_t;
// Assets.GifAssets.PowerGif.AnimatedImage
struct AnimatedImage_t455440388;
// UnityEngine.UI.Image
struct Image_t2670269651;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.GifAssets.PowerGif.Examples.Scripts.DownloadExample
struct  DownloadExample_t1602624778  : public ExampleBase_t1710376396
{
public:
	// System.String Assets.GifAssets.PowerGif.Examples.Scripts.DownloadExample::Url
	String_t* ___Url_5;
	// Assets.GifAssets.PowerGif.AnimatedImage Assets.GifAssets.PowerGif.Examples.Scripts.DownloadExample::AnimatedImage
	AnimatedImage_t455440388 * ___AnimatedImage_6;
	// UnityEngine.UI.Image Assets.GifAssets.PowerGif.Examples.Scripts.DownloadExample::ProgressFill
	Image_t2670269651 * ___ProgressFill_7;

public:
	inline static int32_t get_offset_of_Url_5() { return static_cast<int32_t>(offsetof(DownloadExample_t1602624778, ___Url_5)); }
	inline String_t* get_Url_5() const { return ___Url_5; }
	inline String_t** get_address_of_Url_5() { return &___Url_5; }
	inline void set_Url_5(String_t* value)
	{
		___Url_5 = value;
		Il2CppCodeGenWriteBarrier(&___Url_5, value);
	}

	inline static int32_t get_offset_of_AnimatedImage_6() { return static_cast<int32_t>(offsetof(DownloadExample_t1602624778, ___AnimatedImage_6)); }
	inline AnimatedImage_t455440388 * get_AnimatedImage_6() const { return ___AnimatedImage_6; }
	inline AnimatedImage_t455440388 ** get_address_of_AnimatedImage_6() { return &___AnimatedImage_6; }
	inline void set_AnimatedImage_6(AnimatedImage_t455440388 * value)
	{
		___AnimatedImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___AnimatedImage_6, value);
	}

	inline static int32_t get_offset_of_ProgressFill_7() { return static_cast<int32_t>(offsetof(DownloadExample_t1602624778, ___ProgressFill_7)); }
	inline Image_t2670269651 * get_ProgressFill_7() const { return ___ProgressFill_7; }
	inline Image_t2670269651 ** get_address_of_ProgressFill_7() { return &___ProgressFill_7; }
	inline void set_ProgressFill_7(Image_t2670269651 * value)
	{
		___ProgressFill_7 = value;
		Il2CppCodeGenWriteBarrier(&___ProgressFill_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
