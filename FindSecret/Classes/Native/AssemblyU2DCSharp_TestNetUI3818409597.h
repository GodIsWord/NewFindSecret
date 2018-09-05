#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ZGGame_UIView1697530740.h"

// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Text
struct Text_t1901882714;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestNetUI
struct  TestNetUI_t3818409597  : public UIView_t1697530740
{
public:
	// UnityEngine.UI.Button TestNetUI::btn
	Button_t4055032469 * ___btn_12;
	// UnityEngine.UI.Text TestNetUI::infoTxt
	Text_t1901882714 * ___infoTxt_13;

public:
	inline static int32_t get_offset_of_btn_12() { return static_cast<int32_t>(offsetof(TestNetUI_t3818409597, ___btn_12)); }
	inline Button_t4055032469 * get_btn_12() const { return ___btn_12; }
	inline Button_t4055032469 ** get_address_of_btn_12() { return &___btn_12; }
	inline void set_btn_12(Button_t4055032469 * value)
	{
		___btn_12 = value;
		Il2CppCodeGenWriteBarrier(&___btn_12, value);
	}

	inline static int32_t get_offset_of_infoTxt_13() { return static_cast<int32_t>(offsetof(TestNetUI_t3818409597, ___infoTxt_13)); }
	inline Text_t1901882714 * get_infoTxt_13() const { return ___infoTxt_13; }
	inline Text_t1901882714 ** get_address_of_infoTxt_13() { return &___infoTxt_13; }
	inline void set_infoTxt_13(Text_t1901882714 * value)
	{
		___infoTxt_13 = value;
		Il2CppCodeGenWriteBarrier(&___infoTxt_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
