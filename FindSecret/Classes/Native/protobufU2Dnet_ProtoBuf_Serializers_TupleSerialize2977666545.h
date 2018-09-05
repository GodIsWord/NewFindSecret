#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t1302094432;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// ProtoBuf.Serializers.IProtoSerializer[]
struct IProtoSerializerU5BU5D_t581285578;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.TupleSerializer
struct  TupleSerializer_t2977666545  : public Il2CppObject
{
public:
	// System.Reflection.MemberInfo[] ProtoBuf.Serializers.TupleSerializer::members
	MemberInfoU5BU5D_t1302094432* ___members_0;
	// System.Reflection.ConstructorInfo ProtoBuf.Serializers.TupleSerializer::ctor
	ConstructorInfo_t5769829 * ___ctor_1;
	// ProtoBuf.Serializers.IProtoSerializer[] ProtoBuf.Serializers.TupleSerializer::tails
	IProtoSerializerU5BU5D_t581285578* ___tails_2;

public:
	inline static int32_t get_offset_of_members_0() { return static_cast<int32_t>(offsetof(TupleSerializer_t2977666545, ___members_0)); }
	inline MemberInfoU5BU5D_t1302094432* get_members_0() const { return ___members_0; }
	inline MemberInfoU5BU5D_t1302094432** get_address_of_members_0() { return &___members_0; }
	inline void set_members_0(MemberInfoU5BU5D_t1302094432* value)
	{
		___members_0 = value;
		Il2CppCodeGenWriteBarrier(&___members_0, value);
	}

	inline static int32_t get_offset_of_ctor_1() { return static_cast<int32_t>(offsetof(TupleSerializer_t2977666545, ___ctor_1)); }
	inline ConstructorInfo_t5769829 * get_ctor_1() const { return ___ctor_1; }
	inline ConstructorInfo_t5769829 ** get_address_of_ctor_1() { return &___ctor_1; }
	inline void set_ctor_1(ConstructorInfo_t5769829 * value)
	{
		___ctor_1 = value;
		Il2CppCodeGenWriteBarrier(&___ctor_1, value);
	}

	inline static int32_t get_offset_of_tails_2() { return static_cast<int32_t>(offsetof(TupleSerializer_t2977666545, ___tails_2)); }
	inline IProtoSerializerU5BU5D_t581285578* get_tails_2() const { return ___tails_2; }
	inline IProtoSerializerU5BU5D_t581285578** get_address_of_tails_2() { return &___tails_2; }
	inline void set_tails_2(IProtoSerializerU5BU5D_t581285578* value)
	{
		___tails_2 = value;
		Il2CppCodeGenWriteBarrier(&___tails_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
