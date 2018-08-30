#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// ZGGame.LoadManager
struct LoadManager_t3558014046;
// System.Collections.Generic.List`1<ZGGame.UrlLoader>
struct List_1_t1205575767;
// System.Collections.Generic.Dictionary`2<System.String,ZGGame.UrlLoader>
struct Dictionary_2_t3813724620;
// System.Collections.Generic.Dictionary`2<System.String,ZGGame.LoadData>
struct Dictionary_2_t3964604194;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.Dictionary`2<System.String,ZGGame.AssetData>
struct Dictionary_2_t88729629;
// System.Collections.Generic.List`1<ZGGame.AssetListData>
struct List_1_t1808811200;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.LoadManager
struct  LoadManager_t3558014046  : public Il2CppObject
{
public:
	// System.Int32 ZGGame.LoadManager::maxLoad
	int32_t ___maxLoad_1;
	// System.Collections.Generic.List`1<ZGGame.UrlLoader> ZGGame.LoadManager::loadingLst
	List_1_t1205575767 * ___loadingLst_2;
	// System.Collections.Generic.List`1<ZGGame.UrlLoader> ZGGame.LoadManager::waiteLst
	List_1_t1205575767 * ___waiteLst_3;
	// System.Collections.Generic.Dictionary`2<System.String,ZGGame.UrlLoader> ZGGame.LoadManager::recordPath
	Dictionary_2_t3813724620 * ___recordPath_4;
	// System.Collections.Generic.Dictionary`2<System.String,ZGGame.LoadData> ZGGame.LoadManager::loadedCache
	Dictionary_2_t3964604194 * ___loadedCache_5;
	// System.Collections.Generic.List`1<System.String> ZGGame.LoadManager::cacheResPath
	List_1_t3319525431 * ___cacheResPath_6;
	// System.Collections.Generic.Dictionary`2<System.String,ZGGame.AssetData> ZGGame.LoadManager::loadOneCallbacks
	Dictionary_2_t88729629 * ___loadOneCallbacks_7;
	// System.Collections.Generic.List`1<ZGGame.AssetListData> ZGGame.LoadManager::loadMultiCallbacks
	List_1_t1808811200 * ___loadMultiCallbacks_8;

public:
	inline static int32_t get_offset_of_maxLoad_1() { return static_cast<int32_t>(offsetof(LoadManager_t3558014046, ___maxLoad_1)); }
	inline int32_t get_maxLoad_1() const { return ___maxLoad_1; }
	inline int32_t* get_address_of_maxLoad_1() { return &___maxLoad_1; }
	inline void set_maxLoad_1(int32_t value)
	{
		___maxLoad_1 = value;
	}

	inline static int32_t get_offset_of_loadingLst_2() { return static_cast<int32_t>(offsetof(LoadManager_t3558014046, ___loadingLst_2)); }
	inline List_1_t1205575767 * get_loadingLst_2() const { return ___loadingLst_2; }
	inline List_1_t1205575767 ** get_address_of_loadingLst_2() { return &___loadingLst_2; }
	inline void set_loadingLst_2(List_1_t1205575767 * value)
	{
		___loadingLst_2 = value;
		Il2CppCodeGenWriteBarrier(&___loadingLst_2, value);
	}

	inline static int32_t get_offset_of_waiteLst_3() { return static_cast<int32_t>(offsetof(LoadManager_t3558014046, ___waiteLst_3)); }
	inline List_1_t1205575767 * get_waiteLst_3() const { return ___waiteLst_3; }
	inline List_1_t1205575767 ** get_address_of_waiteLst_3() { return &___waiteLst_3; }
	inline void set_waiteLst_3(List_1_t1205575767 * value)
	{
		___waiteLst_3 = value;
		Il2CppCodeGenWriteBarrier(&___waiteLst_3, value);
	}

	inline static int32_t get_offset_of_recordPath_4() { return static_cast<int32_t>(offsetof(LoadManager_t3558014046, ___recordPath_4)); }
	inline Dictionary_2_t3813724620 * get_recordPath_4() const { return ___recordPath_4; }
	inline Dictionary_2_t3813724620 ** get_address_of_recordPath_4() { return &___recordPath_4; }
	inline void set_recordPath_4(Dictionary_2_t3813724620 * value)
	{
		___recordPath_4 = value;
		Il2CppCodeGenWriteBarrier(&___recordPath_4, value);
	}

	inline static int32_t get_offset_of_loadedCache_5() { return static_cast<int32_t>(offsetof(LoadManager_t3558014046, ___loadedCache_5)); }
	inline Dictionary_2_t3964604194 * get_loadedCache_5() const { return ___loadedCache_5; }
	inline Dictionary_2_t3964604194 ** get_address_of_loadedCache_5() { return &___loadedCache_5; }
	inline void set_loadedCache_5(Dictionary_2_t3964604194 * value)
	{
		___loadedCache_5 = value;
		Il2CppCodeGenWriteBarrier(&___loadedCache_5, value);
	}

	inline static int32_t get_offset_of_cacheResPath_6() { return static_cast<int32_t>(offsetof(LoadManager_t3558014046, ___cacheResPath_6)); }
	inline List_1_t3319525431 * get_cacheResPath_6() const { return ___cacheResPath_6; }
	inline List_1_t3319525431 ** get_address_of_cacheResPath_6() { return &___cacheResPath_6; }
	inline void set_cacheResPath_6(List_1_t3319525431 * value)
	{
		___cacheResPath_6 = value;
		Il2CppCodeGenWriteBarrier(&___cacheResPath_6, value);
	}

	inline static int32_t get_offset_of_loadOneCallbacks_7() { return static_cast<int32_t>(offsetof(LoadManager_t3558014046, ___loadOneCallbacks_7)); }
	inline Dictionary_2_t88729629 * get_loadOneCallbacks_7() const { return ___loadOneCallbacks_7; }
	inline Dictionary_2_t88729629 ** get_address_of_loadOneCallbacks_7() { return &___loadOneCallbacks_7; }
	inline void set_loadOneCallbacks_7(Dictionary_2_t88729629 * value)
	{
		___loadOneCallbacks_7 = value;
		Il2CppCodeGenWriteBarrier(&___loadOneCallbacks_7, value);
	}

	inline static int32_t get_offset_of_loadMultiCallbacks_8() { return static_cast<int32_t>(offsetof(LoadManager_t3558014046, ___loadMultiCallbacks_8)); }
	inline List_1_t1808811200 * get_loadMultiCallbacks_8() const { return ___loadMultiCallbacks_8; }
	inline List_1_t1808811200 ** get_address_of_loadMultiCallbacks_8() { return &___loadMultiCallbacks_8; }
	inline void set_loadMultiCallbacks_8(List_1_t1808811200 * value)
	{
		___loadMultiCallbacks_8 = value;
		Il2CppCodeGenWriteBarrier(&___loadMultiCallbacks_8, value);
	}
};

struct LoadManager_t3558014046_StaticFields
{
public:
	// ZGGame.LoadManager ZGGame.LoadManager::_inst
	LoadManager_t3558014046 * ____inst_0;

public:
	inline static int32_t get_offset_of__inst_0() { return static_cast<int32_t>(offsetof(LoadManager_t3558014046_StaticFields, ____inst_0)); }
	inline LoadManager_t3558014046 * get__inst_0() const { return ____inst_0; }
	inline LoadManager_t3558014046 ** get_address_of__inst_0() { return &____inst_0; }
	inline void set__inst_0(LoadManager_t3558014046 * value)
	{
		____inst_0 = value;
		Il2CppCodeGenWriteBarrier(&____inst_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
