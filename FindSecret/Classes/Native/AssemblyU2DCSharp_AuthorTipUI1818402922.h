#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ZGGame_UIView1697530740.h"

// System.String
struct String_t;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AuthorTipUI
struct  AuthorTipUI_t1818402922  : public UIView_t1697530740
{
public:
	// System.String AuthorTipUI::timerId
	String_t* ___timerId_12;
	// System.String AuthorTipUI::_data
	String_t* ____data_13;
	// UnityEngine.RectTransform AuthorTipUI::bg
	RectTransform_t3704657025 * ___bg_14;
	// UnityEngine.RectTransform AuthorTipUI::txt
	RectTransform_t3704657025 * ___txt_15;

public:
	inline static int32_t get_offset_of_timerId_12() { return static_cast<int32_t>(offsetof(AuthorTipUI_t1818402922, ___timerId_12)); }
	inline String_t* get_timerId_12() const { return ___timerId_12; }
	inline String_t** get_address_of_timerId_12() { return &___timerId_12; }
	inline void set_timerId_12(String_t* value)
	{
		___timerId_12 = value;
		Il2CppCodeGenWriteBarrier(&___timerId_12, value);
	}

	inline static int32_t get_offset_of__data_13() { return static_cast<int32_t>(offsetof(AuthorTipUI_t1818402922, ____data_13)); }
	inline String_t* get__data_13() const { return ____data_13; }
	inline String_t** get_address_of__data_13() { return &____data_13; }
	inline void set__data_13(String_t* value)
	{
		____data_13 = value;
		Il2CppCodeGenWriteBarrier(&____data_13, value);
	}

	inline static int32_t get_offset_of_bg_14() { return static_cast<int32_t>(offsetof(AuthorTipUI_t1818402922, ___bg_14)); }
	inline RectTransform_t3704657025 * get_bg_14() const { return ___bg_14; }
	inline RectTransform_t3704657025 ** get_address_of_bg_14() { return &___bg_14; }
	inline void set_bg_14(RectTransform_t3704657025 * value)
	{
		___bg_14 = value;
		Il2CppCodeGenWriteBarrier(&___bg_14, value);
	}

	inline static int32_t get_offset_of_txt_15() { return static_cast<int32_t>(offsetof(AuthorTipUI_t1818402922, ___txt_15)); }
	inline RectTransform_t3704657025 * get_txt_15() const { return ___txt_15; }
	inline RectTransform_t3704657025 ** get_address_of_txt_15() { return &___txt_15; }
	inline void set_txt_15(RectTransform_t3704657025 * value)
	{
		___txt_15 = value;
		Il2CppCodeGenWriteBarrier(&___txt_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
