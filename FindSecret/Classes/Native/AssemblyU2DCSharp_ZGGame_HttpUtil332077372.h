#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// ZGGame.HttpUtil
struct HttpUtil_t332077372;
// ZGGame.AddressData
struct AddressData_t523041859;
// System.Collections.Generic.List`1<ZGGame.RemoteRequest>
struct List_1_t3523927428;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.HttpUtil
struct  HttpUtil_t332077372  : public Il2CppObject
{
public:
	// ZGGame.AddressData ZGGame.HttpUtil::address
	AddressData_t523041859 * ___address_1;
	// System.Collections.Generic.List`1<ZGGame.RemoteRequest> ZGGame.HttpUtil::netChannel
	List_1_t3523927428 * ___netChannel_2;
	// System.Boolean ZGGame.HttpUtil::_connected
	bool ____connected_3;

public:
	inline static int32_t get_offset_of_address_1() { return static_cast<int32_t>(offsetof(HttpUtil_t332077372, ___address_1)); }
	inline AddressData_t523041859 * get_address_1() const { return ___address_1; }
	inline AddressData_t523041859 ** get_address_of_address_1() { return &___address_1; }
	inline void set_address_1(AddressData_t523041859 * value)
	{
		___address_1 = value;
		Il2CppCodeGenWriteBarrier(&___address_1, value);
	}

	inline static int32_t get_offset_of_netChannel_2() { return static_cast<int32_t>(offsetof(HttpUtil_t332077372, ___netChannel_2)); }
	inline List_1_t3523927428 * get_netChannel_2() const { return ___netChannel_2; }
	inline List_1_t3523927428 ** get_address_of_netChannel_2() { return &___netChannel_2; }
	inline void set_netChannel_2(List_1_t3523927428 * value)
	{
		___netChannel_2 = value;
		Il2CppCodeGenWriteBarrier(&___netChannel_2, value);
	}

	inline static int32_t get_offset_of__connected_3() { return static_cast<int32_t>(offsetof(HttpUtil_t332077372, ____connected_3)); }
	inline bool get__connected_3() const { return ____connected_3; }
	inline bool* get_address_of__connected_3() { return &____connected_3; }
	inline void set__connected_3(bool value)
	{
		____connected_3 = value;
	}
};

struct HttpUtil_t332077372_StaticFields
{
public:
	// ZGGame.HttpUtil ZGGame.HttpUtil::_instance
	HttpUtil_t332077372 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(HttpUtil_t332077372_StaticFields, ____instance_0)); }
	inline HttpUtil_t332077372 * get__instance_0() const { return ____instance_0; }
	inline HttpUtil_t332077372 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(HttpUtil_t332077372 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
