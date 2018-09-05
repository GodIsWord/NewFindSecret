#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "protobufU2Dnet_ProtoBuf_Serializers_ProtoDecorator1230695942.h"

// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.NullDecorator
struct  NullDecorator_t180783168  : public ProtoDecoratorBase_t1230695942
{
public:
	// System.Type ProtoBuf.Serializers.NullDecorator::expectedType
	Type_t * ___expectedType_1;

public:
	inline static int32_t get_offset_of_expectedType_1() { return static_cast<int32_t>(offsetof(NullDecorator_t180783168, ___expectedType_1)); }
	inline Type_t * get_expectedType_1() const { return ___expectedType_1; }
	inline Type_t ** get_address_of_expectedType_1() { return &___expectedType_1; }
	inline void set_expectedType_1(Type_t * value)
	{
		___expectedType_1 = value;
		Il2CppCodeGenWriteBarrier(&___expectedType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
