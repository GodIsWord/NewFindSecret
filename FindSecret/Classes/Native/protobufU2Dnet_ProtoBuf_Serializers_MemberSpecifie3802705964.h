#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "protobufU2Dnet_ProtoBuf_Serializers_ProtoDecorator1230695942.h"

// System.Reflection.MethodInfo
struct MethodInfo_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.MemberSpecifiedDecorator
struct  MemberSpecifiedDecorator_t3802705964  : public ProtoDecoratorBase_t1230695942
{
public:
	// System.Reflection.MethodInfo ProtoBuf.Serializers.MemberSpecifiedDecorator::getSpecified
	MethodInfo_t * ___getSpecified_1;
	// System.Reflection.MethodInfo ProtoBuf.Serializers.MemberSpecifiedDecorator::setSpecified
	MethodInfo_t * ___setSpecified_2;

public:
	inline static int32_t get_offset_of_getSpecified_1() { return static_cast<int32_t>(offsetof(MemberSpecifiedDecorator_t3802705964, ___getSpecified_1)); }
	inline MethodInfo_t * get_getSpecified_1() const { return ___getSpecified_1; }
	inline MethodInfo_t ** get_address_of_getSpecified_1() { return &___getSpecified_1; }
	inline void set_getSpecified_1(MethodInfo_t * value)
	{
		___getSpecified_1 = value;
		Il2CppCodeGenWriteBarrier(&___getSpecified_1, value);
	}

	inline static int32_t get_offset_of_setSpecified_2() { return static_cast<int32_t>(offsetof(MemberSpecifiedDecorator_t3802705964, ___setSpecified_2)); }
	inline MethodInfo_t * get_setSpecified_2() const { return ___setSpecified_2; }
	inline MethodInfo_t ** get_address_of_setSpecified_2() { return &___setSpecified_2; }
	inline void set_setSpecified_2(MethodInfo_t * value)
	{
		___setSpecified_2 = value;
		Il2CppCodeGenWriteBarrier(&___setSpecified_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
