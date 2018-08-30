#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ZGGame_UIView1697530740.h"

// UnityEngine.UI.Text
struct Text_t1901882714;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TipUI
struct  TipUI_t3656341021  : public UIView_t1697530740
{
public:
	// UnityEngine.UI.Text TipUI::infoTxt
	Text_t1901882714 * ___infoTxt_12;

public:
	inline static int32_t get_offset_of_infoTxt_12() { return static_cast<int32_t>(offsetof(TipUI_t3656341021, ___infoTxt_12)); }
	inline Text_t1901882714 * get_infoTxt_12() const { return ___infoTxt_12; }
	inline Text_t1901882714 ** get_address_of_infoTxt_12() { return &___infoTxt_12; }
	inline void set_infoTxt_12(Text_t1901882714 * value)
	{
		___infoTxt_12 = value;
		Il2CppCodeGenWriteBarrier(&___infoTxt_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
