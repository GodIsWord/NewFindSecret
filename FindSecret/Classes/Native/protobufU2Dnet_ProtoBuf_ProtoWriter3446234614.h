#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "protobufU2Dnet_ProtoBuf_WireType417905129.h"

// System.IO.Stream
struct Stream_t1273022909;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t4127407527;
// ProtoBuf.NetObjectCache
struct NetObjectCache_t114687483;
// ProtoBuf.Meta.MutableList
struct MutableList_t1195342553;
// ProtoBuf.SerializationContext
struct SerializationContext_t4181794105;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Text.UTF8Encoding
struct UTF8Encoding_t3956466879;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.ProtoWriter
struct  ProtoWriter_t3446234614  : public Il2CppObject
{
public:
	// System.IO.Stream ProtoBuf.ProtoWriter::dest
	Stream_t1273022909 * ___dest_0;
	// ProtoBuf.Meta.TypeModel ProtoBuf.ProtoWriter::model
	TypeModel_t4127407527 * ___model_1;
	// ProtoBuf.NetObjectCache ProtoBuf.ProtoWriter::netCache
	NetObjectCache_t114687483 * ___netCache_2;
	// System.Int32 ProtoBuf.ProtoWriter::fieldNumber
	int32_t ___fieldNumber_3;
	// System.Int32 ProtoBuf.ProtoWriter::flushLock
	int32_t ___flushLock_4;
	// ProtoBuf.WireType ProtoBuf.ProtoWriter::wireType
	int32_t ___wireType_5;
	// System.Int32 ProtoBuf.ProtoWriter::depth
	int32_t ___depth_6;
	// ProtoBuf.Meta.MutableList ProtoBuf.ProtoWriter::recursionStack
	MutableList_t1195342553 * ___recursionStack_7;
	// ProtoBuf.SerializationContext ProtoBuf.ProtoWriter::context
	SerializationContext_t4181794105 * ___context_8;
	// System.Byte[] ProtoBuf.ProtoWriter::ioBuffer
	ByteU5BU5D_t4116647657* ___ioBuffer_9;
	// System.Int32 ProtoBuf.ProtoWriter::ioIndex
	int32_t ___ioIndex_10;
	// System.Int32 ProtoBuf.ProtoWriter::position
	int32_t ___position_11;
	// System.Int32 ProtoBuf.ProtoWriter::packedFieldNumber
	int32_t ___packedFieldNumber_13;

public:
	inline static int32_t get_offset_of_dest_0() { return static_cast<int32_t>(offsetof(ProtoWriter_t3446234614, ___dest_0)); }
	inline Stream_t1273022909 * get_dest_0() const { return ___dest_0; }
	inline Stream_t1273022909 ** get_address_of_dest_0() { return &___dest_0; }
	inline void set_dest_0(Stream_t1273022909 * value)
	{
		___dest_0 = value;
		Il2CppCodeGenWriteBarrier(&___dest_0, value);
	}

	inline static int32_t get_offset_of_model_1() { return static_cast<int32_t>(offsetof(ProtoWriter_t3446234614, ___model_1)); }
	inline TypeModel_t4127407527 * get_model_1() const { return ___model_1; }
	inline TypeModel_t4127407527 ** get_address_of_model_1() { return &___model_1; }
	inline void set_model_1(TypeModel_t4127407527 * value)
	{
		___model_1 = value;
		Il2CppCodeGenWriteBarrier(&___model_1, value);
	}

	inline static int32_t get_offset_of_netCache_2() { return static_cast<int32_t>(offsetof(ProtoWriter_t3446234614, ___netCache_2)); }
	inline NetObjectCache_t114687483 * get_netCache_2() const { return ___netCache_2; }
	inline NetObjectCache_t114687483 ** get_address_of_netCache_2() { return &___netCache_2; }
	inline void set_netCache_2(NetObjectCache_t114687483 * value)
	{
		___netCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___netCache_2, value);
	}

	inline static int32_t get_offset_of_fieldNumber_3() { return static_cast<int32_t>(offsetof(ProtoWriter_t3446234614, ___fieldNumber_3)); }
	inline int32_t get_fieldNumber_3() const { return ___fieldNumber_3; }
	inline int32_t* get_address_of_fieldNumber_3() { return &___fieldNumber_3; }
	inline void set_fieldNumber_3(int32_t value)
	{
		___fieldNumber_3 = value;
	}

	inline static int32_t get_offset_of_flushLock_4() { return static_cast<int32_t>(offsetof(ProtoWriter_t3446234614, ___flushLock_4)); }
	inline int32_t get_flushLock_4() const { return ___flushLock_4; }
	inline int32_t* get_address_of_flushLock_4() { return &___flushLock_4; }
	inline void set_flushLock_4(int32_t value)
	{
		___flushLock_4 = value;
	}

	inline static int32_t get_offset_of_wireType_5() { return static_cast<int32_t>(offsetof(ProtoWriter_t3446234614, ___wireType_5)); }
	inline int32_t get_wireType_5() const { return ___wireType_5; }
	inline int32_t* get_address_of_wireType_5() { return &___wireType_5; }
	inline void set_wireType_5(int32_t value)
	{
		___wireType_5 = value;
	}

	inline static int32_t get_offset_of_depth_6() { return static_cast<int32_t>(offsetof(ProtoWriter_t3446234614, ___depth_6)); }
	inline int32_t get_depth_6() const { return ___depth_6; }
	inline int32_t* get_address_of_depth_6() { return &___depth_6; }
	inline void set_depth_6(int32_t value)
	{
		___depth_6 = value;
	}

	inline static int32_t get_offset_of_recursionStack_7() { return static_cast<int32_t>(offsetof(ProtoWriter_t3446234614, ___recursionStack_7)); }
	inline MutableList_t1195342553 * get_recursionStack_7() const { return ___recursionStack_7; }
	inline MutableList_t1195342553 ** get_address_of_recursionStack_7() { return &___recursionStack_7; }
	inline void set_recursionStack_7(MutableList_t1195342553 * value)
	{
		___recursionStack_7 = value;
		Il2CppCodeGenWriteBarrier(&___recursionStack_7, value);
	}

	inline static int32_t get_offset_of_context_8() { return static_cast<int32_t>(offsetof(ProtoWriter_t3446234614, ___context_8)); }
	inline SerializationContext_t4181794105 * get_context_8() const { return ___context_8; }
	inline SerializationContext_t4181794105 ** get_address_of_context_8() { return &___context_8; }
	inline void set_context_8(SerializationContext_t4181794105 * value)
	{
		___context_8 = value;
		Il2CppCodeGenWriteBarrier(&___context_8, value);
	}

	inline static int32_t get_offset_of_ioBuffer_9() { return static_cast<int32_t>(offsetof(ProtoWriter_t3446234614, ___ioBuffer_9)); }
	inline ByteU5BU5D_t4116647657* get_ioBuffer_9() const { return ___ioBuffer_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_ioBuffer_9() { return &___ioBuffer_9; }
	inline void set_ioBuffer_9(ByteU5BU5D_t4116647657* value)
	{
		___ioBuffer_9 = value;
		Il2CppCodeGenWriteBarrier(&___ioBuffer_9, value);
	}

	inline static int32_t get_offset_of_ioIndex_10() { return static_cast<int32_t>(offsetof(ProtoWriter_t3446234614, ___ioIndex_10)); }
	inline int32_t get_ioIndex_10() const { return ___ioIndex_10; }
	inline int32_t* get_address_of_ioIndex_10() { return &___ioIndex_10; }
	inline void set_ioIndex_10(int32_t value)
	{
		___ioIndex_10 = value;
	}

	inline static int32_t get_offset_of_position_11() { return static_cast<int32_t>(offsetof(ProtoWriter_t3446234614, ___position_11)); }
	inline int32_t get_position_11() const { return ___position_11; }
	inline int32_t* get_address_of_position_11() { return &___position_11; }
	inline void set_position_11(int32_t value)
	{
		___position_11 = value;
	}

	inline static int32_t get_offset_of_packedFieldNumber_13() { return static_cast<int32_t>(offsetof(ProtoWriter_t3446234614, ___packedFieldNumber_13)); }
	inline int32_t get_packedFieldNumber_13() const { return ___packedFieldNumber_13; }
	inline int32_t* get_address_of_packedFieldNumber_13() { return &___packedFieldNumber_13; }
	inline void set_packedFieldNumber_13(int32_t value)
	{
		___packedFieldNumber_13 = value;
	}
};

struct ProtoWriter_t3446234614_StaticFields
{
public:
	// System.Text.UTF8Encoding ProtoBuf.ProtoWriter::encoding
	UTF8Encoding_t3956466879 * ___encoding_12;

public:
	inline static int32_t get_offset_of_encoding_12() { return static_cast<int32_t>(offsetof(ProtoWriter_t3446234614_StaticFields, ___encoding_12)); }
	inline UTF8Encoding_t3956466879 * get_encoding_12() const { return ___encoding_12; }
	inline UTF8Encoding_t3956466879 ** get_address_of_encoding_12() { return &___encoding_12; }
	inline void set_encoding_12(UTF8Encoding_t3956466879 * value)
	{
		___encoding_12 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
