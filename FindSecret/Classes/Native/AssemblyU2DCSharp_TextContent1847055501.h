#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t4137855814;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextContent
struct  TextContent_t1847055501  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text TextContent::title
	Text_t1901882714 * ___title_2;
	// UnityEngine.UI.Text TextContent::content
	Text_t1901882714 * ___content_3;
	// UnityEngine.UI.Image TextContent::bg
	Image_t2670269651 * ___bg_4;
	// UnityEngine.UI.ScrollRect TextContent::srect
	ScrollRect_t4137855814 * ___srect_5;

public:
	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(TextContent_t1847055501, ___title_2)); }
	inline Text_t1901882714 * get_title_2() const { return ___title_2; }
	inline Text_t1901882714 ** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(Text_t1901882714 * value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(TextContent_t1847055501, ___content_3)); }
	inline Text_t1901882714 * get_content_3() const { return ___content_3; }
	inline Text_t1901882714 ** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(Text_t1901882714 * value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier(&___content_3, value);
	}

	inline static int32_t get_offset_of_bg_4() { return static_cast<int32_t>(offsetof(TextContent_t1847055501, ___bg_4)); }
	inline Image_t2670269651 * get_bg_4() const { return ___bg_4; }
	inline Image_t2670269651 ** get_address_of_bg_4() { return &___bg_4; }
	inline void set_bg_4(Image_t2670269651 * value)
	{
		___bg_4 = value;
		Il2CppCodeGenWriteBarrier(&___bg_4, value);
	}

	inline static int32_t get_offset_of_srect_5() { return static_cast<int32_t>(offsetof(TextContent_t1847055501, ___srect_5)); }
	inline ScrollRect_t4137855814 * get_srect_5() const { return ___srect_5; }
	inline ScrollRect_t4137855814 ** get_address_of_srect_5() { return &___srect_5; }
	inline void set_srect_5(ScrollRect_t4137855814 * value)
	{
		___srect_5 = value;
		Il2CppCodeGenWriteBarrier(&___srect_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
