#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ZGGame_UIView1697530740.h"

// UnityEngine.GameObject
struct GameObject_t1113636619;
// ZGGame.LoaderImage
struct LoaderImage_t1246678221;
// UnityEngine.UI.Text
struct Text_t1901882714;
// message.POIType
struct POIType_t2445828766;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TypeIconRender
struct  TypeIconRender_t3739338051  : public UIView_t1697530740
{
public:
	// UnityEngine.GameObject TypeIconRender::typeSelect
	GameObject_t1113636619 * ___typeSelect_12;
	// ZGGame.LoaderImage TypeIconRender::typeIcon
	LoaderImage_t1246678221 * ___typeIcon_13;
	// UnityEngine.UI.Text TypeIconRender::typeName
	Text_t1901882714 * ___typeName_14;
	// message.POIType TypeIconRender::_data
	POIType_t2445828766 * ____data_15;

public:
	inline static int32_t get_offset_of_typeSelect_12() { return static_cast<int32_t>(offsetof(TypeIconRender_t3739338051, ___typeSelect_12)); }
	inline GameObject_t1113636619 * get_typeSelect_12() const { return ___typeSelect_12; }
	inline GameObject_t1113636619 ** get_address_of_typeSelect_12() { return &___typeSelect_12; }
	inline void set_typeSelect_12(GameObject_t1113636619 * value)
	{
		___typeSelect_12 = value;
		Il2CppCodeGenWriteBarrier(&___typeSelect_12, value);
	}

	inline static int32_t get_offset_of_typeIcon_13() { return static_cast<int32_t>(offsetof(TypeIconRender_t3739338051, ___typeIcon_13)); }
	inline LoaderImage_t1246678221 * get_typeIcon_13() const { return ___typeIcon_13; }
	inline LoaderImage_t1246678221 ** get_address_of_typeIcon_13() { return &___typeIcon_13; }
	inline void set_typeIcon_13(LoaderImage_t1246678221 * value)
	{
		___typeIcon_13 = value;
		Il2CppCodeGenWriteBarrier(&___typeIcon_13, value);
	}

	inline static int32_t get_offset_of_typeName_14() { return static_cast<int32_t>(offsetof(TypeIconRender_t3739338051, ___typeName_14)); }
	inline Text_t1901882714 * get_typeName_14() const { return ___typeName_14; }
	inline Text_t1901882714 ** get_address_of_typeName_14() { return &___typeName_14; }
	inline void set_typeName_14(Text_t1901882714 * value)
	{
		___typeName_14 = value;
		Il2CppCodeGenWriteBarrier(&___typeName_14, value);
	}

	inline static int32_t get_offset_of__data_15() { return static_cast<int32_t>(offsetof(TypeIconRender_t3739338051, ____data_15)); }
	inline POIType_t2445828766 * get__data_15() const { return ____data_15; }
	inline POIType_t2445828766 ** get_address_of__data_15() { return &____data_15; }
	inline void set__data_15(POIType_t2445828766 * value)
	{
		____data_15 = value;
		Il2CppCodeGenWriteBarrier(&____data_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
