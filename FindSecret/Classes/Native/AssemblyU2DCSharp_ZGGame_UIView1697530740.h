#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ZGGame_View352704265.h"
#include "AssemblyU2DCSharp_ZGGame_UILayer1264183386.h"

// UnityEngine.UI.Image
struct Image_t2670269651;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.UIView
struct  UIView_t1697530740  : public View_t352704265
{
public:
	// ZGGame.UILayer ZGGame.UIView::_uiLayer
	int32_t ____uiLayer_9;
	// UnityEngine.UI.Image ZGGame.UIView::modeMask
	Image_t2670269651 * ___modeMask_10;
	// System.Boolean ZGGame.UIView::_mode
	bool ____mode_11;

public:
	inline static int32_t get_offset_of__uiLayer_9() { return static_cast<int32_t>(offsetof(UIView_t1697530740, ____uiLayer_9)); }
	inline int32_t get__uiLayer_9() const { return ____uiLayer_9; }
	inline int32_t* get_address_of__uiLayer_9() { return &____uiLayer_9; }
	inline void set__uiLayer_9(int32_t value)
	{
		____uiLayer_9 = value;
	}

	inline static int32_t get_offset_of_modeMask_10() { return static_cast<int32_t>(offsetof(UIView_t1697530740, ___modeMask_10)); }
	inline Image_t2670269651 * get_modeMask_10() const { return ___modeMask_10; }
	inline Image_t2670269651 ** get_address_of_modeMask_10() { return &___modeMask_10; }
	inline void set_modeMask_10(Image_t2670269651 * value)
	{
		___modeMask_10 = value;
		Il2CppCodeGenWriteBarrier(&___modeMask_10, value);
	}

	inline static int32_t get_offset_of__mode_11() { return static_cast<int32_t>(offsetof(UIView_t1697530740, ____mode_11)); }
	inline bool get__mode_11() const { return ____mode_11; }
	inline bool* get_address_of__mode_11() { return &____mode_11; }
	inline void set__mode_11(bool value)
	{
		____mode_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
