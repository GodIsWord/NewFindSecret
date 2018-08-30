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
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.LoaderImage
struct  LoaderImage_t1246678221  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image ZGGame.LoaderImage::img
	Image_t2670269651 * ___img_2;
	// System.String ZGGame.LoaderImage::_url
	String_t* ____url_3;

public:
	inline static int32_t get_offset_of_img_2() { return static_cast<int32_t>(offsetof(LoaderImage_t1246678221, ___img_2)); }
	inline Image_t2670269651 * get_img_2() const { return ___img_2; }
	inline Image_t2670269651 ** get_address_of_img_2() { return &___img_2; }
	inline void set_img_2(Image_t2670269651 * value)
	{
		___img_2 = value;
		Il2CppCodeGenWriteBarrier(&___img_2, value);
	}

	inline static int32_t get_offset_of__url_3() { return static_cast<int32_t>(offsetof(LoaderImage_t1246678221, ____url_3)); }
	inline String_t* get__url_3() const { return ____url_3; }
	inline String_t** get_address_of__url_3() { return &____url_3; }
	inline void set__url_3(String_t* value)
	{
		____url_3 = value;
		Il2CppCodeGenWriteBarrier(&____url_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
