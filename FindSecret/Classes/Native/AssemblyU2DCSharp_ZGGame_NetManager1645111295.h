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
// ZGGame.BaseSender
struct BaseSender_t3360968287;
// System.Collections.Generic.Dictionary`2<System.String,ZGGame.AddressData>
struct Dictionary_2_t308298158;
// System.Collections.Generic.Dictionary`2<System.Int16,ZGGame.IResponder>
struct Dictionary_2_t1297622591;
// ZGGame.EventCallback
struct EventCallback_t832368971;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.NetManager
struct  NetManager_t1645111295  : public Il2CppObject
{
public:

public:
};

struct NetManager_t1645111295_StaticFields
{
public:
	// System.Boolean ZGGame.NetManager::debug
	bool ___debug_0;
	// System.String ZGGame.NetManager::reciveCookieKey
	String_t* ___reciveCookieKey_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ZGGame.NetManager::reciveHeader
	Dictionary_2_t1632706988 * ___reciveHeader_3;
	// System.String ZGGame.NetManager::sendCookieKey
	String_t* ___sendCookieKey_4;
	// System.Single ZGGame.NetManager::timeout
	float ___timeout_5;
	// System.Single ZGGame.NetManager::busytime
	float ___busytime_6;
	// ZGGame.BaseSender ZGGame.NetManager::loginSender
	BaseSender_t3360968287 * ___loginSender_7;
	// ZGGame.BaseSender ZGGame.NetManager::loginCache
	BaseSender_t3360968287 * ___loginCache_8;
	// System.Collections.Generic.Dictionary`2<System.String,ZGGame.AddressData> ZGGame.NetManager::addressDic
	Dictionary_2_t308298158 * ___addressDic_9;
	// System.Collections.Generic.Dictionary`2<System.Int16,ZGGame.IResponder> ZGGame.NetManager::responderPackages
	Dictionary_2_t1297622591 * ___responderPackages_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ZGGame.NetManager::netHeader
	Dictionary_2_t1632706988 * ___netHeader_11;
	// System.String ZGGame.NetManager::_curCookie
	String_t* ____curCookie_12;
	// System.Int64 ZGGame.NetManager::_serverTime
	int64_t ____serverTime_13;
	// System.Int64 ZGGame.NetManager::_clientTime
	int64_t ____clientTime_14;
	// ZGGame.EventCallback ZGGame.NetManager::<>f__mg$cache0
	EventCallback_t832368971 * ___U3CU3Ef__mgU24cache0_17;

public:
	inline static int32_t get_offset_of_debug_0() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ___debug_0)); }
	inline bool get_debug_0() const { return ___debug_0; }
	inline bool* get_address_of_debug_0() { return &___debug_0; }
	inline void set_debug_0(bool value)
	{
		___debug_0 = value;
	}

	inline static int32_t get_offset_of_reciveCookieKey_2() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ___reciveCookieKey_2)); }
	inline String_t* get_reciveCookieKey_2() const { return ___reciveCookieKey_2; }
	inline String_t** get_address_of_reciveCookieKey_2() { return &___reciveCookieKey_2; }
	inline void set_reciveCookieKey_2(String_t* value)
	{
		___reciveCookieKey_2 = value;
		Il2CppCodeGenWriteBarrier(&___reciveCookieKey_2, value);
	}

	inline static int32_t get_offset_of_reciveHeader_3() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ___reciveHeader_3)); }
	inline Dictionary_2_t1632706988 * get_reciveHeader_3() const { return ___reciveHeader_3; }
	inline Dictionary_2_t1632706988 ** get_address_of_reciveHeader_3() { return &___reciveHeader_3; }
	inline void set_reciveHeader_3(Dictionary_2_t1632706988 * value)
	{
		___reciveHeader_3 = value;
		Il2CppCodeGenWriteBarrier(&___reciveHeader_3, value);
	}

	inline static int32_t get_offset_of_sendCookieKey_4() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ___sendCookieKey_4)); }
	inline String_t* get_sendCookieKey_4() const { return ___sendCookieKey_4; }
	inline String_t** get_address_of_sendCookieKey_4() { return &___sendCookieKey_4; }
	inline void set_sendCookieKey_4(String_t* value)
	{
		___sendCookieKey_4 = value;
		Il2CppCodeGenWriteBarrier(&___sendCookieKey_4, value);
	}

	inline static int32_t get_offset_of_timeout_5() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ___timeout_5)); }
	inline float get_timeout_5() const { return ___timeout_5; }
	inline float* get_address_of_timeout_5() { return &___timeout_5; }
	inline void set_timeout_5(float value)
	{
		___timeout_5 = value;
	}

	inline static int32_t get_offset_of_busytime_6() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ___busytime_6)); }
	inline float get_busytime_6() const { return ___busytime_6; }
	inline float* get_address_of_busytime_6() { return &___busytime_6; }
	inline void set_busytime_6(float value)
	{
		___busytime_6 = value;
	}

	inline static int32_t get_offset_of_loginSender_7() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ___loginSender_7)); }
	inline BaseSender_t3360968287 * get_loginSender_7() const { return ___loginSender_7; }
	inline BaseSender_t3360968287 ** get_address_of_loginSender_7() { return &___loginSender_7; }
	inline void set_loginSender_7(BaseSender_t3360968287 * value)
	{
		___loginSender_7 = value;
		Il2CppCodeGenWriteBarrier(&___loginSender_7, value);
	}

	inline static int32_t get_offset_of_loginCache_8() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ___loginCache_8)); }
	inline BaseSender_t3360968287 * get_loginCache_8() const { return ___loginCache_8; }
	inline BaseSender_t3360968287 ** get_address_of_loginCache_8() { return &___loginCache_8; }
	inline void set_loginCache_8(BaseSender_t3360968287 * value)
	{
		___loginCache_8 = value;
		Il2CppCodeGenWriteBarrier(&___loginCache_8, value);
	}

	inline static int32_t get_offset_of_addressDic_9() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ___addressDic_9)); }
	inline Dictionary_2_t308298158 * get_addressDic_9() const { return ___addressDic_9; }
	inline Dictionary_2_t308298158 ** get_address_of_addressDic_9() { return &___addressDic_9; }
	inline void set_addressDic_9(Dictionary_2_t308298158 * value)
	{
		___addressDic_9 = value;
		Il2CppCodeGenWriteBarrier(&___addressDic_9, value);
	}

	inline static int32_t get_offset_of_responderPackages_10() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ___responderPackages_10)); }
	inline Dictionary_2_t1297622591 * get_responderPackages_10() const { return ___responderPackages_10; }
	inline Dictionary_2_t1297622591 ** get_address_of_responderPackages_10() { return &___responderPackages_10; }
	inline void set_responderPackages_10(Dictionary_2_t1297622591 * value)
	{
		___responderPackages_10 = value;
		Il2CppCodeGenWriteBarrier(&___responderPackages_10, value);
	}

	inline static int32_t get_offset_of_netHeader_11() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ___netHeader_11)); }
	inline Dictionary_2_t1632706988 * get_netHeader_11() const { return ___netHeader_11; }
	inline Dictionary_2_t1632706988 ** get_address_of_netHeader_11() { return &___netHeader_11; }
	inline void set_netHeader_11(Dictionary_2_t1632706988 * value)
	{
		___netHeader_11 = value;
		Il2CppCodeGenWriteBarrier(&___netHeader_11, value);
	}

	inline static int32_t get_offset_of__curCookie_12() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ____curCookie_12)); }
	inline String_t* get__curCookie_12() const { return ____curCookie_12; }
	inline String_t** get_address_of__curCookie_12() { return &____curCookie_12; }
	inline void set__curCookie_12(String_t* value)
	{
		____curCookie_12 = value;
		Il2CppCodeGenWriteBarrier(&____curCookie_12, value);
	}

	inline static int32_t get_offset_of__serverTime_13() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ____serverTime_13)); }
	inline int64_t get__serverTime_13() const { return ____serverTime_13; }
	inline int64_t* get_address_of__serverTime_13() { return &____serverTime_13; }
	inline void set__serverTime_13(int64_t value)
	{
		____serverTime_13 = value;
	}

	inline static int32_t get_offset_of__clientTime_14() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ____clientTime_14)); }
	inline int64_t get__clientTime_14() const { return ____clientTime_14; }
	inline int64_t* get_address_of__clientTime_14() { return &____clientTime_14; }
	inline void set__clientTime_14(int64_t value)
	{
		____clientTime_14 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_17() { return static_cast<int32_t>(offsetof(NetManager_t1645111295_StaticFields, ___U3CU3Ef__mgU24cache0_17)); }
	inline EventCallback_t832368971 * get_U3CU3Ef__mgU24cache0_17() const { return ___U3CU3Ef__mgU24cache0_17; }
	inline EventCallback_t832368971 ** get_address_of_U3CU3Ef__mgU24cache0_17() { return &___U3CU3Ef__mgU24cache0_17; }
	inline void set_U3CU3Ef__mgU24cache0_17(EventCallback_t832368971 * value)
	{
		___U3CU3Ef__mgU24cache0_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
