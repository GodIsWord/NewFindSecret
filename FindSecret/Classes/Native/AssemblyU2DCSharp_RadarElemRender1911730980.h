#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ZGGame_View352704265.h"

// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// MapElemVo
struct MapElemVo_t3021668288;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RadarElemRender
struct  RadarElemRender_t1911730980  : public View_t352704265
{
public:
	// UnityEngine.UI.Image RadarElemRender::img
	Image_t2670269651 * ___img_9;
	// UnityEngine.RectTransform RadarElemRender::rt
	RectTransform_t3704657025 * ___rt_10;
	// MapElemVo RadarElemRender::_data
	MapElemVo_t3021668288 * ____data_11;
	// System.Boolean RadarElemRender::_v
	bool ____v_12;

public:
	inline static int32_t get_offset_of_img_9() { return static_cast<int32_t>(offsetof(RadarElemRender_t1911730980, ___img_9)); }
	inline Image_t2670269651 * get_img_9() const { return ___img_9; }
	inline Image_t2670269651 ** get_address_of_img_9() { return &___img_9; }
	inline void set_img_9(Image_t2670269651 * value)
	{
		___img_9 = value;
		Il2CppCodeGenWriteBarrier(&___img_9, value);
	}

	inline static int32_t get_offset_of_rt_10() { return static_cast<int32_t>(offsetof(RadarElemRender_t1911730980, ___rt_10)); }
	inline RectTransform_t3704657025 * get_rt_10() const { return ___rt_10; }
	inline RectTransform_t3704657025 ** get_address_of_rt_10() { return &___rt_10; }
	inline void set_rt_10(RectTransform_t3704657025 * value)
	{
		___rt_10 = value;
		Il2CppCodeGenWriteBarrier(&___rt_10, value);
	}

	inline static int32_t get_offset_of__data_11() { return static_cast<int32_t>(offsetof(RadarElemRender_t1911730980, ____data_11)); }
	inline MapElemVo_t3021668288 * get__data_11() const { return ____data_11; }
	inline MapElemVo_t3021668288 ** get_address_of__data_11() { return &____data_11; }
	inline void set__data_11(MapElemVo_t3021668288 * value)
	{
		____data_11 = value;
		Il2CppCodeGenWriteBarrier(&____data_11, value);
	}

	inline static int32_t get_offset_of__v_12() { return static_cast<int32_t>(offsetof(RadarElemRender_t1911730980, ____v_12)); }
	inline bool get__v_12() const { return ____v_12; }
	inline bool* get_address_of__v_12() { return &____v_12; }
	inline void set__v_12(bool value)
	{
		____v_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
