#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.UI.Image
struct Image_t2670269651;
// System.IO.FileInfo
struct FileInfo_t1169991790;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.LocalImage
struct  LocalImage_t130107275  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image ZGGame.LocalImage::img
	Image_t2670269651 * ___img_2;
	// System.Boolean ZGGame.LocalImage::isLoad
	bool ___isLoad_3;
	// System.IO.FileInfo ZGGame.LocalImage::fileinfo
	FileInfo_t1169991790 * ___fileinfo_4;

public:
	inline static int32_t get_offset_of_img_2() { return static_cast<int32_t>(offsetof(LocalImage_t130107275, ___img_2)); }
	inline Image_t2670269651 * get_img_2() const { return ___img_2; }
	inline Image_t2670269651 ** get_address_of_img_2() { return &___img_2; }
	inline void set_img_2(Image_t2670269651 * value)
	{
		___img_2 = value;
		Il2CppCodeGenWriteBarrier(&___img_2, value);
	}

	inline static int32_t get_offset_of_isLoad_3() { return static_cast<int32_t>(offsetof(LocalImage_t130107275, ___isLoad_3)); }
	inline bool get_isLoad_3() const { return ___isLoad_3; }
	inline bool* get_address_of_isLoad_3() { return &___isLoad_3; }
	inline void set_isLoad_3(bool value)
	{
		___isLoad_3 = value;
	}

	inline static int32_t get_offset_of_fileinfo_4() { return static_cast<int32_t>(offsetof(LocalImage_t130107275, ___fileinfo_4)); }
	inline FileInfo_t1169991790 * get_fileinfo_4() const { return ___fileinfo_4; }
	inline FileInfo_t1169991790 ** get_address_of_fileinfo_4() { return &___fileinfo_4; }
	inline void set_fileinfo_4(FileInfo_t1169991790 * value)
	{
		___fileinfo_4 = value;
		Il2CppCodeGenWriteBarrier(&___fileinfo_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
