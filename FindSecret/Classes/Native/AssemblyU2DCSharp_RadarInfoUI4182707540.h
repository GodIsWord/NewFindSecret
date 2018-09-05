#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ZGGame_UIView1697530740.h"

// UnityEngine.UI.Slider
struct Slider_t3903728902;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.Text
struct Text_t1901882714;
// System.Collections.Generic.List`1<TypeIconRender>
struct List_1_t916445497;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RadarInfoUI
struct  RadarInfoUI_t4182707540  : public UIView_t1697530740
{
public:
	// UnityEngine.UI.Slider RadarInfoUI::sd
	Slider_t3903728902 * ___sd_12;
	// UnityEngine.Transform RadarInfoUI::grd
	Transform_t3600365921 * ___grd_13;
	// UnityEngine.UI.Text RadarInfoUI::distanceV
	Text_t1901882714 * ___distanceV_14;
	// System.Collections.Generic.List`1<TypeIconRender> RadarInfoUI::renders
	List_1_t916445497 * ___renders_15;

public:
	inline static int32_t get_offset_of_sd_12() { return static_cast<int32_t>(offsetof(RadarInfoUI_t4182707540, ___sd_12)); }
	inline Slider_t3903728902 * get_sd_12() const { return ___sd_12; }
	inline Slider_t3903728902 ** get_address_of_sd_12() { return &___sd_12; }
	inline void set_sd_12(Slider_t3903728902 * value)
	{
		___sd_12 = value;
		Il2CppCodeGenWriteBarrier(&___sd_12, value);
	}

	inline static int32_t get_offset_of_grd_13() { return static_cast<int32_t>(offsetof(RadarInfoUI_t4182707540, ___grd_13)); }
	inline Transform_t3600365921 * get_grd_13() const { return ___grd_13; }
	inline Transform_t3600365921 ** get_address_of_grd_13() { return &___grd_13; }
	inline void set_grd_13(Transform_t3600365921 * value)
	{
		___grd_13 = value;
		Il2CppCodeGenWriteBarrier(&___grd_13, value);
	}

	inline static int32_t get_offset_of_distanceV_14() { return static_cast<int32_t>(offsetof(RadarInfoUI_t4182707540, ___distanceV_14)); }
	inline Text_t1901882714 * get_distanceV_14() const { return ___distanceV_14; }
	inline Text_t1901882714 ** get_address_of_distanceV_14() { return &___distanceV_14; }
	inline void set_distanceV_14(Text_t1901882714 * value)
	{
		___distanceV_14 = value;
		Il2CppCodeGenWriteBarrier(&___distanceV_14, value);
	}

	inline static int32_t get_offset_of_renders_15() { return static_cast<int32_t>(offsetof(RadarInfoUI_t4182707540, ___renders_15)); }
	inline List_1_t916445497 * get_renders_15() const { return ___renders_15; }
	inline List_1_t916445497 ** get_address_of_renders_15() { return &___renders_15; }
	inline void set_renders_15(List_1_t916445497 * value)
	{
		___renders_15 = value;
		Il2CppCodeGenWriteBarrier(&___renders_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
