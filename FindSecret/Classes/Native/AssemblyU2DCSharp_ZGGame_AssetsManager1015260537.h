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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t3104781730;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Collections.Generic.List`1<ZGGame.AssetLoadData>>
struct Dictionary_2_t3346159252;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ZGGame.AssetLoadData>>
struct Dictionary_2_t1857147889;
// ZGGame.AssetsUpdateComplete
struct AssetsUpdateComplete_t2519181758;
// ZGGame.LoadListComplete
struct LoadListComplete_t2142248497;
// ZGGame.LoadComplete
struct LoadComplete_t137156152;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.AssetsManager
struct  AssetsManager_t1015260537  : public Il2CppObject
{
public:

public:
};

struct AssetsManager_t1015260537_StaticFields
{
public:
	// System.String ZGGame.AssetsManager::_ftpServer
	String_t* ____ftpServer_0;
	// System.String ZGGame.AssetsManager::localVersionMd5
	String_t* ___localVersionMd5_1;
	// System.Single ZGGame.AssetsManager::_rate
	float ____rate_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ZGGame.AssetsManager::localVerFiles
	Dictionary_2_t1632706988 * ___localVerFiles_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ZGGame.AssetsManager::serverVerTempFiles
	Dictionary_2_t1632706988 * ___serverVerTempFiles_4;
	// System.Collections.Generic.List`1<System.String> ZGGame.AssetsManager::updateFiles
	List_1_t3319525431 * ___updateFiles_5;
	// System.Collections.Generic.List`1<System.String> ZGGame.AssetsManager::loadingAssets
	List_1_t3319525431 * ___loadingAssets_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> ZGGame.AssetsManager::assetsConfigInfo
	Dictionary_2_t3104781730 * ___assetsConfigInfo_7;
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.Collections.Generic.List`1<ZGGame.AssetLoadData>> ZGGame.AssetsManager::assetsLoadGroup
	Dictionary_2_t3346159252 * ___assetsLoadGroup_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ZGGame.AssetLoadData>> ZGGame.AssetsManager::loadDataDic
	Dictionary_2_t1857147889 * ___loadDataDic_9;
	// System.UInt32 ZGGame.AssetsManager::_groupIndex
	uint32_t ____groupIndex_10;
	// System.Boolean ZGGame.AssetsManager::_ready
	bool ____ready_11;
	// ZGGame.AssetsUpdateComplete ZGGame.AssetsManager::_assetsReadyHandler
	AssetsUpdateComplete_t2519181758 * ____assetsReadyHandler_12;
	// ZGGame.LoadListComplete ZGGame.AssetsManager::<>f__mg$cache0
	LoadListComplete_t2142248497 * ___U3CU3Ef__mgU24cache0_13;
	// ZGGame.LoadComplete ZGGame.AssetsManager::<>f__mg$cache1
	LoadComplete_t137156152 * ___U3CU3Ef__mgU24cache1_14;
	// ZGGame.LoadComplete ZGGame.AssetsManager::<>f__mg$cache2
	LoadComplete_t137156152 * ___U3CU3Ef__mgU24cache2_15;
	// ZGGame.LoadListComplete ZGGame.AssetsManager::<>f__mg$cache3
	LoadListComplete_t2142248497 * ___U3CU3Ef__mgU24cache3_16;
	// ZGGame.LoadListComplete ZGGame.AssetsManager::<>f__mg$cache4
	LoadListComplete_t2142248497 * ___U3CU3Ef__mgU24cache4_17;
	// ZGGame.LoadListComplete ZGGame.AssetsManager::<>f__mg$cache5
	LoadListComplete_t2142248497 * ___U3CU3Ef__mgU24cache5_18;
	// ZGGame.LoadComplete ZGGame.AssetsManager::<>f__mg$cache6
	LoadComplete_t137156152 * ___U3CU3Ef__mgU24cache6_19;

public:
	inline static int32_t get_offset_of__ftpServer_0() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ____ftpServer_0)); }
	inline String_t* get__ftpServer_0() const { return ____ftpServer_0; }
	inline String_t** get_address_of__ftpServer_0() { return &____ftpServer_0; }
	inline void set__ftpServer_0(String_t* value)
	{
		____ftpServer_0 = value;
		Il2CppCodeGenWriteBarrier(&____ftpServer_0, value);
	}

	inline static int32_t get_offset_of_localVersionMd5_1() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___localVersionMd5_1)); }
	inline String_t* get_localVersionMd5_1() const { return ___localVersionMd5_1; }
	inline String_t** get_address_of_localVersionMd5_1() { return &___localVersionMd5_1; }
	inline void set_localVersionMd5_1(String_t* value)
	{
		___localVersionMd5_1 = value;
		Il2CppCodeGenWriteBarrier(&___localVersionMd5_1, value);
	}

	inline static int32_t get_offset_of__rate_2() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ____rate_2)); }
	inline float get__rate_2() const { return ____rate_2; }
	inline float* get_address_of__rate_2() { return &____rate_2; }
	inline void set__rate_2(float value)
	{
		____rate_2 = value;
	}

	inline static int32_t get_offset_of_localVerFiles_3() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___localVerFiles_3)); }
	inline Dictionary_2_t1632706988 * get_localVerFiles_3() const { return ___localVerFiles_3; }
	inline Dictionary_2_t1632706988 ** get_address_of_localVerFiles_3() { return &___localVerFiles_3; }
	inline void set_localVerFiles_3(Dictionary_2_t1632706988 * value)
	{
		___localVerFiles_3 = value;
		Il2CppCodeGenWriteBarrier(&___localVerFiles_3, value);
	}

	inline static int32_t get_offset_of_serverVerTempFiles_4() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___serverVerTempFiles_4)); }
	inline Dictionary_2_t1632706988 * get_serverVerTempFiles_4() const { return ___serverVerTempFiles_4; }
	inline Dictionary_2_t1632706988 ** get_address_of_serverVerTempFiles_4() { return &___serverVerTempFiles_4; }
	inline void set_serverVerTempFiles_4(Dictionary_2_t1632706988 * value)
	{
		___serverVerTempFiles_4 = value;
		Il2CppCodeGenWriteBarrier(&___serverVerTempFiles_4, value);
	}

	inline static int32_t get_offset_of_updateFiles_5() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___updateFiles_5)); }
	inline List_1_t3319525431 * get_updateFiles_5() const { return ___updateFiles_5; }
	inline List_1_t3319525431 ** get_address_of_updateFiles_5() { return &___updateFiles_5; }
	inline void set_updateFiles_5(List_1_t3319525431 * value)
	{
		___updateFiles_5 = value;
		Il2CppCodeGenWriteBarrier(&___updateFiles_5, value);
	}

	inline static int32_t get_offset_of_loadingAssets_6() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___loadingAssets_6)); }
	inline List_1_t3319525431 * get_loadingAssets_6() const { return ___loadingAssets_6; }
	inline List_1_t3319525431 ** get_address_of_loadingAssets_6() { return &___loadingAssets_6; }
	inline void set_loadingAssets_6(List_1_t3319525431 * value)
	{
		___loadingAssets_6 = value;
		Il2CppCodeGenWriteBarrier(&___loadingAssets_6, value);
	}

	inline static int32_t get_offset_of_assetsConfigInfo_7() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___assetsConfigInfo_7)); }
	inline Dictionary_2_t3104781730 * get_assetsConfigInfo_7() const { return ___assetsConfigInfo_7; }
	inline Dictionary_2_t3104781730 ** get_address_of_assetsConfigInfo_7() { return &___assetsConfigInfo_7; }
	inline void set_assetsConfigInfo_7(Dictionary_2_t3104781730 * value)
	{
		___assetsConfigInfo_7 = value;
		Il2CppCodeGenWriteBarrier(&___assetsConfigInfo_7, value);
	}

	inline static int32_t get_offset_of_assetsLoadGroup_8() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___assetsLoadGroup_8)); }
	inline Dictionary_2_t3346159252 * get_assetsLoadGroup_8() const { return ___assetsLoadGroup_8; }
	inline Dictionary_2_t3346159252 ** get_address_of_assetsLoadGroup_8() { return &___assetsLoadGroup_8; }
	inline void set_assetsLoadGroup_8(Dictionary_2_t3346159252 * value)
	{
		___assetsLoadGroup_8 = value;
		Il2CppCodeGenWriteBarrier(&___assetsLoadGroup_8, value);
	}

	inline static int32_t get_offset_of_loadDataDic_9() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___loadDataDic_9)); }
	inline Dictionary_2_t1857147889 * get_loadDataDic_9() const { return ___loadDataDic_9; }
	inline Dictionary_2_t1857147889 ** get_address_of_loadDataDic_9() { return &___loadDataDic_9; }
	inline void set_loadDataDic_9(Dictionary_2_t1857147889 * value)
	{
		___loadDataDic_9 = value;
		Il2CppCodeGenWriteBarrier(&___loadDataDic_9, value);
	}

	inline static int32_t get_offset_of__groupIndex_10() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ____groupIndex_10)); }
	inline uint32_t get__groupIndex_10() const { return ____groupIndex_10; }
	inline uint32_t* get_address_of__groupIndex_10() { return &____groupIndex_10; }
	inline void set__groupIndex_10(uint32_t value)
	{
		____groupIndex_10 = value;
	}

	inline static int32_t get_offset_of__ready_11() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ____ready_11)); }
	inline bool get__ready_11() const { return ____ready_11; }
	inline bool* get_address_of__ready_11() { return &____ready_11; }
	inline void set__ready_11(bool value)
	{
		____ready_11 = value;
	}

	inline static int32_t get_offset_of__assetsReadyHandler_12() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ____assetsReadyHandler_12)); }
	inline AssetsUpdateComplete_t2519181758 * get__assetsReadyHandler_12() const { return ____assetsReadyHandler_12; }
	inline AssetsUpdateComplete_t2519181758 ** get_address_of__assetsReadyHandler_12() { return &____assetsReadyHandler_12; }
	inline void set__assetsReadyHandler_12(AssetsUpdateComplete_t2519181758 * value)
	{
		____assetsReadyHandler_12 = value;
		Il2CppCodeGenWriteBarrier(&____assetsReadyHandler_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_13() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___U3CU3Ef__mgU24cache0_13)); }
	inline LoadListComplete_t2142248497 * get_U3CU3Ef__mgU24cache0_13() const { return ___U3CU3Ef__mgU24cache0_13; }
	inline LoadListComplete_t2142248497 ** get_address_of_U3CU3Ef__mgU24cache0_13() { return &___U3CU3Ef__mgU24cache0_13; }
	inline void set_U3CU3Ef__mgU24cache0_13(LoadListComplete_t2142248497 * value)
	{
		___U3CU3Ef__mgU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_14() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___U3CU3Ef__mgU24cache1_14)); }
	inline LoadComplete_t137156152 * get_U3CU3Ef__mgU24cache1_14() const { return ___U3CU3Ef__mgU24cache1_14; }
	inline LoadComplete_t137156152 ** get_address_of_U3CU3Ef__mgU24cache1_14() { return &___U3CU3Ef__mgU24cache1_14; }
	inline void set_U3CU3Ef__mgU24cache1_14(LoadComplete_t137156152 * value)
	{
		___U3CU3Ef__mgU24cache1_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_15() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___U3CU3Ef__mgU24cache2_15)); }
	inline LoadComplete_t137156152 * get_U3CU3Ef__mgU24cache2_15() const { return ___U3CU3Ef__mgU24cache2_15; }
	inline LoadComplete_t137156152 ** get_address_of_U3CU3Ef__mgU24cache2_15() { return &___U3CU3Ef__mgU24cache2_15; }
	inline void set_U3CU3Ef__mgU24cache2_15(LoadComplete_t137156152 * value)
	{
		___U3CU3Ef__mgU24cache2_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_16() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___U3CU3Ef__mgU24cache3_16)); }
	inline LoadListComplete_t2142248497 * get_U3CU3Ef__mgU24cache3_16() const { return ___U3CU3Ef__mgU24cache3_16; }
	inline LoadListComplete_t2142248497 ** get_address_of_U3CU3Ef__mgU24cache3_16() { return &___U3CU3Ef__mgU24cache3_16; }
	inline void set_U3CU3Ef__mgU24cache3_16(LoadListComplete_t2142248497 * value)
	{
		___U3CU3Ef__mgU24cache3_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_17() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___U3CU3Ef__mgU24cache4_17)); }
	inline LoadListComplete_t2142248497 * get_U3CU3Ef__mgU24cache4_17() const { return ___U3CU3Ef__mgU24cache4_17; }
	inline LoadListComplete_t2142248497 ** get_address_of_U3CU3Ef__mgU24cache4_17() { return &___U3CU3Ef__mgU24cache4_17; }
	inline void set_U3CU3Ef__mgU24cache4_17(LoadListComplete_t2142248497 * value)
	{
		___U3CU3Ef__mgU24cache4_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_18() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___U3CU3Ef__mgU24cache5_18)); }
	inline LoadListComplete_t2142248497 * get_U3CU3Ef__mgU24cache5_18() const { return ___U3CU3Ef__mgU24cache5_18; }
	inline LoadListComplete_t2142248497 ** get_address_of_U3CU3Ef__mgU24cache5_18() { return &___U3CU3Ef__mgU24cache5_18; }
	inline void set_U3CU3Ef__mgU24cache5_18(LoadListComplete_t2142248497 * value)
	{
		___U3CU3Ef__mgU24cache5_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache5_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_19() { return static_cast<int32_t>(offsetof(AssetsManager_t1015260537_StaticFields, ___U3CU3Ef__mgU24cache6_19)); }
	inline LoadComplete_t137156152 * get_U3CU3Ef__mgU24cache6_19() const { return ___U3CU3Ef__mgU24cache6_19; }
	inline LoadComplete_t137156152 ** get_address_of_U3CU3Ef__mgU24cache6_19() { return &___U3CU3Ef__mgU24cache6_19; }
	inline void set_U3CU3Ef__mgU24cache6_19(LoadComplete_t137156152 * value)
	{
		___U3CU3Ef__mgU24cache6_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache6_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
