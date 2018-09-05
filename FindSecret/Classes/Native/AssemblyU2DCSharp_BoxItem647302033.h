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
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t1752731834;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t4142344393;
// message.POIData
struct POIData_t2628924658;
// System.Action`1<BoxItem>
struct Action_1_t819769628;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoxItem
struct  BoxItem_t647302033  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text BoxItem::attrName
	Text_t1901882714 * ___attrName_2;
	// UnityEngine.UI.Text BoxItem::distance
	Text_t1901882714 * ___distance_3;
	// UnityEngine.UI.Image BoxItem::attrIcon
	Image_t2670269651 * ___attrIcon_4;
	// UnityEngine.UI.Image BoxItem::attrIconbg
	Image_t2670269651 * ___attrIconbg_5;
	// UnityEngine.RectTransform BoxItem::bg
	RectTransform_t3704657025 * ___bg_6;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> BoxItem::sexList
	List_1_t1752731834 * ___sexList_7;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> BoxItem::starList
	List_1_t4142344393 * ___starList_8;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> BoxItem::starIconList
	List_1_t1752731834 * ___starIconList_9;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> BoxItem::iconList
	List_1_t1752731834 * ___iconList_10;
	// message.POIData BoxItem::<data>k__BackingField
	POIData_t2628924658 * ___U3CdataU3Ek__BackingField_11;
	// System.Action`1<BoxItem> BoxItem::OnSelect
	Action_1_t819769628 * ___OnSelect_12;
	// System.Int32 BoxItem::state
	int32_t ___state_13;

public:
	inline static int32_t get_offset_of_attrName_2() { return static_cast<int32_t>(offsetof(BoxItem_t647302033, ___attrName_2)); }
	inline Text_t1901882714 * get_attrName_2() const { return ___attrName_2; }
	inline Text_t1901882714 ** get_address_of_attrName_2() { return &___attrName_2; }
	inline void set_attrName_2(Text_t1901882714 * value)
	{
		___attrName_2 = value;
		Il2CppCodeGenWriteBarrier(&___attrName_2, value);
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(BoxItem_t647302033, ___distance_3)); }
	inline Text_t1901882714 * get_distance_3() const { return ___distance_3; }
	inline Text_t1901882714 ** get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(Text_t1901882714 * value)
	{
		___distance_3 = value;
		Il2CppCodeGenWriteBarrier(&___distance_3, value);
	}

	inline static int32_t get_offset_of_attrIcon_4() { return static_cast<int32_t>(offsetof(BoxItem_t647302033, ___attrIcon_4)); }
	inline Image_t2670269651 * get_attrIcon_4() const { return ___attrIcon_4; }
	inline Image_t2670269651 ** get_address_of_attrIcon_4() { return &___attrIcon_4; }
	inline void set_attrIcon_4(Image_t2670269651 * value)
	{
		___attrIcon_4 = value;
		Il2CppCodeGenWriteBarrier(&___attrIcon_4, value);
	}

	inline static int32_t get_offset_of_attrIconbg_5() { return static_cast<int32_t>(offsetof(BoxItem_t647302033, ___attrIconbg_5)); }
	inline Image_t2670269651 * get_attrIconbg_5() const { return ___attrIconbg_5; }
	inline Image_t2670269651 ** get_address_of_attrIconbg_5() { return &___attrIconbg_5; }
	inline void set_attrIconbg_5(Image_t2670269651 * value)
	{
		___attrIconbg_5 = value;
		Il2CppCodeGenWriteBarrier(&___attrIconbg_5, value);
	}

	inline static int32_t get_offset_of_bg_6() { return static_cast<int32_t>(offsetof(BoxItem_t647302033, ___bg_6)); }
	inline RectTransform_t3704657025 * get_bg_6() const { return ___bg_6; }
	inline RectTransform_t3704657025 ** get_address_of_bg_6() { return &___bg_6; }
	inline void set_bg_6(RectTransform_t3704657025 * value)
	{
		___bg_6 = value;
		Il2CppCodeGenWriteBarrier(&___bg_6, value);
	}

	inline static int32_t get_offset_of_sexList_7() { return static_cast<int32_t>(offsetof(BoxItem_t647302033, ___sexList_7)); }
	inline List_1_t1752731834 * get_sexList_7() const { return ___sexList_7; }
	inline List_1_t1752731834 ** get_address_of_sexList_7() { return &___sexList_7; }
	inline void set_sexList_7(List_1_t1752731834 * value)
	{
		___sexList_7 = value;
		Il2CppCodeGenWriteBarrier(&___sexList_7, value);
	}

	inline static int32_t get_offset_of_starList_8() { return static_cast<int32_t>(offsetof(BoxItem_t647302033, ___starList_8)); }
	inline List_1_t4142344393 * get_starList_8() const { return ___starList_8; }
	inline List_1_t4142344393 ** get_address_of_starList_8() { return &___starList_8; }
	inline void set_starList_8(List_1_t4142344393 * value)
	{
		___starList_8 = value;
		Il2CppCodeGenWriteBarrier(&___starList_8, value);
	}

	inline static int32_t get_offset_of_starIconList_9() { return static_cast<int32_t>(offsetof(BoxItem_t647302033, ___starIconList_9)); }
	inline List_1_t1752731834 * get_starIconList_9() const { return ___starIconList_9; }
	inline List_1_t1752731834 ** get_address_of_starIconList_9() { return &___starIconList_9; }
	inline void set_starIconList_9(List_1_t1752731834 * value)
	{
		___starIconList_9 = value;
		Il2CppCodeGenWriteBarrier(&___starIconList_9, value);
	}

	inline static int32_t get_offset_of_iconList_10() { return static_cast<int32_t>(offsetof(BoxItem_t647302033, ___iconList_10)); }
	inline List_1_t1752731834 * get_iconList_10() const { return ___iconList_10; }
	inline List_1_t1752731834 ** get_address_of_iconList_10() { return &___iconList_10; }
	inline void set_iconList_10(List_1_t1752731834 * value)
	{
		___iconList_10 = value;
		Il2CppCodeGenWriteBarrier(&___iconList_10, value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BoxItem_t647302033, ___U3CdataU3Ek__BackingField_11)); }
	inline POIData_t2628924658 * get_U3CdataU3Ek__BackingField_11() const { return ___U3CdataU3Ek__BackingField_11; }
	inline POIData_t2628924658 ** get_address_of_U3CdataU3Ek__BackingField_11() { return &___U3CdataU3Ek__BackingField_11; }
	inline void set_U3CdataU3Ek__BackingField_11(POIData_t2628924658 * value)
	{
		___U3CdataU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CdataU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_OnSelect_12() { return static_cast<int32_t>(offsetof(BoxItem_t647302033, ___OnSelect_12)); }
	inline Action_1_t819769628 * get_OnSelect_12() const { return ___OnSelect_12; }
	inline Action_1_t819769628 ** get_address_of_OnSelect_12() { return &___OnSelect_12; }
	inline void set_OnSelect_12(Action_1_t819769628 * value)
	{
		___OnSelect_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnSelect_12, value);
	}

	inline static int32_t get_offset_of_state_13() { return static_cast<int32_t>(offsetof(BoxItem_t647302033, ___state_13)); }
	inline int32_t get_state_13() const { return ___state_13; }
	inline int32_t* get_address_of_state_13() { return &___state_13; }
	inline void set_state_13(int32_t value)
	{
		___state_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
