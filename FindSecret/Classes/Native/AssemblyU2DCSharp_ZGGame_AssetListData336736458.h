#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// ZGGame.LoadListComplete
struct LoadListComplete_t2142248497;
// System.Collections.Generic.List`1<ZGGame.LoadData>
struct List_1_t1356455341;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.AssetListData
struct  AssetListData_t336736458  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String> ZGGame.AssetListData::waitForLoadLst
	List_1_t3319525431 * ___waitForLoadLst_0;
	// ZGGame.LoadListComplete ZGGame.AssetListData::completeCall
	LoadListComplete_t2142248497 * ___completeCall_1;
	// System.Collections.Generic.List`1<ZGGame.LoadData> ZGGame.AssetListData::dataLst
	List_1_t1356455341 * ___dataLst_2;
	// System.Collections.Generic.List`1<System.Object> ZGGame.AssetListData::tagLst
	List_1_t257213610 * ___tagLst_3;

public:
	inline static int32_t get_offset_of_waitForLoadLst_0() { return static_cast<int32_t>(offsetof(AssetListData_t336736458, ___waitForLoadLst_0)); }
	inline List_1_t3319525431 * get_waitForLoadLst_0() const { return ___waitForLoadLst_0; }
	inline List_1_t3319525431 ** get_address_of_waitForLoadLst_0() { return &___waitForLoadLst_0; }
	inline void set_waitForLoadLst_0(List_1_t3319525431 * value)
	{
		___waitForLoadLst_0 = value;
		Il2CppCodeGenWriteBarrier(&___waitForLoadLst_0, value);
	}

	inline static int32_t get_offset_of_completeCall_1() { return static_cast<int32_t>(offsetof(AssetListData_t336736458, ___completeCall_1)); }
	inline LoadListComplete_t2142248497 * get_completeCall_1() const { return ___completeCall_1; }
	inline LoadListComplete_t2142248497 ** get_address_of_completeCall_1() { return &___completeCall_1; }
	inline void set_completeCall_1(LoadListComplete_t2142248497 * value)
	{
		___completeCall_1 = value;
		Il2CppCodeGenWriteBarrier(&___completeCall_1, value);
	}

	inline static int32_t get_offset_of_dataLst_2() { return static_cast<int32_t>(offsetof(AssetListData_t336736458, ___dataLst_2)); }
	inline List_1_t1356455341 * get_dataLst_2() const { return ___dataLst_2; }
	inline List_1_t1356455341 ** get_address_of_dataLst_2() { return &___dataLst_2; }
	inline void set_dataLst_2(List_1_t1356455341 * value)
	{
		___dataLst_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataLst_2, value);
	}

	inline static int32_t get_offset_of_tagLst_3() { return static_cast<int32_t>(offsetof(AssetListData_t336736458, ___tagLst_3)); }
	inline List_1_t257213610 * get_tagLst_3() const { return ___tagLst_3; }
	inline List_1_t257213610 ** get_address_of_tagLst_3() { return &___tagLst_3; }
	inline void set_tagLst_3(List_1_t257213610 * value)
	{
		___tagLst_3 = value;
		Il2CppCodeGenWriteBarrier(&___tagLst_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
