#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.Dictionary`2<System.Int16,System.Single>
struct Dictionary_2_t3587573911;
// System.String
struct String_t;
// ZGGame.INet
struct INet_t1876577153;
// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.BaseSender
struct  BaseSender_t3360968287  : public Il2CppObject
{
public:
	// System.Int16 ZGGame.BaseSender::sendCode
	int16_t ___sendCode_1;
	// System.String ZGGame.BaseSender::hostId
	String_t* ___hostId_2;
	// System.Boolean ZGGame.BaseSender::needStatu
	bool ___needStatu_3;
	// System.Boolean ZGGame.BaseSender::needCookie
	bool ___needCookie_4;
	// System.Single ZGGame.BaseSender::sendInterval
	float ___sendInterval_5;
	// ZGGame.INet ZGGame.BaseSender::_net
	Il2CppObject * ____net_6;
	// System.Byte[] ZGGame.BaseSender::cacheMessage
	ByteU5BU5D_t4116647657* ___cacheMessage_7;

public:
	inline static int32_t get_offset_of_sendCode_1() { return static_cast<int32_t>(offsetof(BaseSender_t3360968287, ___sendCode_1)); }
	inline int16_t get_sendCode_1() const { return ___sendCode_1; }
	inline int16_t* get_address_of_sendCode_1() { return &___sendCode_1; }
	inline void set_sendCode_1(int16_t value)
	{
		___sendCode_1 = value;
	}

	inline static int32_t get_offset_of_hostId_2() { return static_cast<int32_t>(offsetof(BaseSender_t3360968287, ___hostId_2)); }
	inline String_t* get_hostId_2() const { return ___hostId_2; }
	inline String_t** get_address_of_hostId_2() { return &___hostId_2; }
	inline void set_hostId_2(String_t* value)
	{
		___hostId_2 = value;
		Il2CppCodeGenWriteBarrier(&___hostId_2, value);
	}

	inline static int32_t get_offset_of_needStatu_3() { return static_cast<int32_t>(offsetof(BaseSender_t3360968287, ___needStatu_3)); }
	inline bool get_needStatu_3() const { return ___needStatu_3; }
	inline bool* get_address_of_needStatu_3() { return &___needStatu_3; }
	inline void set_needStatu_3(bool value)
	{
		___needStatu_3 = value;
	}

	inline static int32_t get_offset_of_needCookie_4() { return static_cast<int32_t>(offsetof(BaseSender_t3360968287, ___needCookie_4)); }
	inline bool get_needCookie_4() const { return ___needCookie_4; }
	inline bool* get_address_of_needCookie_4() { return &___needCookie_4; }
	inline void set_needCookie_4(bool value)
	{
		___needCookie_4 = value;
	}

	inline static int32_t get_offset_of_sendInterval_5() { return static_cast<int32_t>(offsetof(BaseSender_t3360968287, ___sendInterval_5)); }
	inline float get_sendInterval_5() const { return ___sendInterval_5; }
	inline float* get_address_of_sendInterval_5() { return &___sendInterval_5; }
	inline void set_sendInterval_5(float value)
	{
		___sendInterval_5 = value;
	}

	inline static int32_t get_offset_of__net_6() { return static_cast<int32_t>(offsetof(BaseSender_t3360968287, ____net_6)); }
	inline Il2CppObject * get__net_6() const { return ____net_6; }
	inline Il2CppObject ** get_address_of__net_6() { return &____net_6; }
	inline void set__net_6(Il2CppObject * value)
	{
		____net_6 = value;
		Il2CppCodeGenWriteBarrier(&____net_6, value);
	}

	inline static int32_t get_offset_of_cacheMessage_7() { return static_cast<int32_t>(offsetof(BaseSender_t3360968287, ___cacheMessage_7)); }
	inline ByteU5BU5D_t4116647657* get_cacheMessage_7() const { return ___cacheMessage_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_cacheMessage_7() { return &___cacheMessage_7; }
	inline void set_cacheMessage_7(ByteU5BU5D_t4116647657* value)
	{
		___cacheMessage_7 = value;
		Il2CppCodeGenWriteBarrier(&___cacheMessage_7, value);
	}
};

struct BaseSender_t3360968287_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int16,System.Single> ZGGame.BaseSender::senderIntervalDic
	Dictionary_2_t3587573911 * ___senderIntervalDic_0;

public:
	inline static int32_t get_offset_of_senderIntervalDic_0() { return static_cast<int32_t>(offsetof(BaseSender_t3360968287_StaticFields, ___senderIntervalDic_0)); }
	inline Dictionary_2_t3587573911 * get_senderIntervalDic_0() const { return ___senderIntervalDic_0; }
	inline Dictionary_2_t3587573911 ** get_address_of_senderIntervalDic_0() { return &___senderIntervalDic_0; }
	inline void set_senderIntervalDic_0(Dictionary_2_t3587573911 * value)
	{
		___senderIntervalDic_0 = value;
		Il2CppCodeGenWriteBarrier(&___senderIntervalDic_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
