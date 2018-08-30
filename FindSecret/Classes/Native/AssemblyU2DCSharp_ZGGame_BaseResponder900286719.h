#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// ZGGame.NetInfoData
struct NetInfoData_t779613672;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.BaseResponder
struct  BaseResponder_t900286719  : public Il2CppObject
{
public:
	// System.Int16 ZGGame.BaseResponder::reciveCode
	int16_t ___reciveCode_0;
	// ZGGame.NetInfoData ZGGame.BaseResponder::responderData
	NetInfoData_t779613672 * ___responderData_1;

public:
	inline static int32_t get_offset_of_reciveCode_0() { return static_cast<int32_t>(offsetof(BaseResponder_t900286719, ___reciveCode_0)); }
	inline int16_t get_reciveCode_0() const { return ___reciveCode_0; }
	inline int16_t* get_address_of_reciveCode_0() { return &___reciveCode_0; }
	inline void set_reciveCode_0(int16_t value)
	{
		___reciveCode_0 = value;
	}

	inline static int32_t get_offset_of_responderData_1() { return static_cast<int32_t>(offsetof(BaseResponder_t900286719, ___responderData_1)); }
	inline NetInfoData_t779613672 * get_responderData_1() const { return ___responderData_1; }
	inline NetInfoData_t779613672 ** get_address_of_responderData_1() { return &___responderData_1; }
	inline void set_responderData_1(NetInfoData_t779613672 * value)
	{
		___responderData_1 = value;
		Il2CppCodeGenWriteBarrier(&___responderData_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
