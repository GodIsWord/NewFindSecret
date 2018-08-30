#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
struct List_1_t496632877;
// ZGGame.LoadComplete
struct LoadComplete_t137156152;
// ZGGame.LoadListComplete
struct LoadListComplete_t2142248497;
// ZGGame.LoadData
struct LoadData_t4179347895;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.AssetLoadData
struct  AssetLoadData_t599816848  : public Il2CppObject
{
public:
	// System.String ZGGame.AssetLoadData::assetName
	String_t* ___assetName_0;
	// System.Object ZGGame.AssetLoadData::tag
	Il2CppObject * ___tag_1;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> ZGGame.AssetLoadData::deployAssets
	List_1_t496632877 * ___deployAssets_2;
	// System.UInt32 ZGGame.AssetLoadData::groupId
	uint32_t ___groupId_3;
	// ZGGame.LoadComplete ZGGame.AssetLoadData::oneComplete
	LoadComplete_t137156152 * ___oneComplete_4;
	// ZGGame.LoadListComplete ZGGame.AssetLoadData::groupComplete
	LoadListComplete_t2142248497 * ___groupComplete_5;
	// System.Boolean ZGGame.AssetLoadData::complete
	bool ___complete_6;
	// ZGGame.LoadData ZGGame.AssetLoadData::ld
	LoadData_t4179347895 * ___ld_7;

public:
	inline static int32_t get_offset_of_assetName_0() { return static_cast<int32_t>(offsetof(AssetLoadData_t599816848, ___assetName_0)); }
	inline String_t* get_assetName_0() const { return ___assetName_0; }
	inline String_t** get_address_of_assetName_0() { return &___assetName_0; }
	inline void set_assetName_0(String_t* value)
	{
		___assetName_0 = value;
		Il2CppCodeGenWriteBarrier(&___assetName_0, value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(AssetLoadData_t599816848, ___tag_1)); }
	inline Il2CppObject * get_tag_1() const { return ___tag_1; }
	inline Il2CppObject ** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(Il2CppObject * value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier(&___tag_1, value);
	}

	inline static int32_t get_offset_of_deployAssets_2() { return static_cast<int32_t>(offsetof(AssetLoadData_t599816848, ___deployAssets_2)); }
	inline List_1_t496632877 * get_deployAssets_2() const { return ___deployAssets_2; }
	inline List_1_t496632877 ** get_address_of_deployAssets_2() { return &___deployAssets_2; }
	inline void set_deployAssets_2(List_1_t496632877 * value)
	{
		___deployAssets_2 = value;
		Il2CppCodeGenWriteBarrier(&___deployAssets_2, value);
	}

	inline static int32_t get_offset_of_groupId_3() { return static_cast<int32_t>(offsetof(AssetLoadData_t599816848, ___groupId_3)); }
	inline uint32_t get_groupId_3() const { return ___groupId_3; }
	inline uint32_t* get_address_of_groupId_3() { return &___groupId_3; }
	inline void set_groupId_3(uint32_t value)
	{
		___groupId_3 = value;
	}

	inline static int32_t get_offset_of_oneComplete_4() { return static_cast<int32_t>(offsetof(AssetLoadData_t599816848, ___oneComplete_4)); }
	inline LoadComplete_t137156152 * get_oneComplete_4() const { return ___oneComplete_4; }
	inline LoadComplete_t137156152 ** get_address_of_oneComplete_4() { return &___oneComplete_4; }
	inline void set_oneComplete_4(LoadComplete_t137156152 * value)
	{
		___oneComplete_4 = value;
		Il2CppCodeGenWriteBarrier(&___oneComplete_4, value);
	}

	inline static int32_t get_offset_of_groupComplete_5() { return static_cast<int32_t>(offsetof(AssetLoadData_t599816848, ___groupComplete_5)); }
	inline LoadListComplete_t2142248497 * get_groupComplete_5() const { return ___groupComplete_5; }
	inline LoadListComplete_t2142248497 ** get_address_of_groupComplete_5() { return &___groupComplete_5; }
	inline void set_groupComplete_5(LoadListComplete_t2142248497 * value)
	{
		___groupComplete_5 = value;
		Il2CppCodeGenWriteBarrier(&___groupComplete_5, value);
	}

	inline static int32_t get_offset_of_complete_6() { return static_cast<int32_t>(offsetof(AssetLoadData_t599816848, ___complete_6)); }
	inline bool get_complete_6() const { return ___complete_6; }
	inline bool* get_address_of_complete_6() { return &___complete_6; }
	inline void set_complete_6(bool value)
	{
		___complete_6 = value;
	}

	inline static int32_t get_offset_of_ld_7() { return static_cast<int32_t>(offsetof(AssetLoadData_t599816848, ___ld_7)); }
	inline LoadData_t4179347895 * get_ld_7() const { return ___ld_7; }
	inline LoadData_t4179347895 ** get_address_of_ld_7() { return &___ld_7; }
	inline void set_ld_7(LoadData_t4179347895 * value)
	{
		___ld_7 = value;
		Il2CppCodeGenWriteBarrier(&___ld_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
