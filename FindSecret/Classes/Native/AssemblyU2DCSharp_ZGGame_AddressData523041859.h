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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.AddressData
struct  AddressData_t523041859  : public Il2CppObject
{
public:
	// System.String ZGGame.AddressData::id
	String_t* ___id_0;
	// System.String ZGGame.AddressData::ip
	String_t* ___ip_1;
	// System.Int32 ZGGame.AddressData::port
	int32_t ___port_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(AddressData_t523041859, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_ip_1() { return static_cast<int32_t>(offsetof(AddressData_t523041859, ___ip_1)); }
	inline String_t* get_ip_1() const { return ___ip_1; }
	inline String_t** get_address_of_ip_1() { return &___ip_1; }
	inline void set_ip_1(String_t* value)
	{
		___ip_1 = value;
		Il2CppCodeGenWriteBarrier(&___ip_1, value);
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(AddressData_t523041859, ___port_2)); }
	inline int32_t get_port_2() const { return ___port_2; }
	inline int32_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(int32_t value)
	{
		___port_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
