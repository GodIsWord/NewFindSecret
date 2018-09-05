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
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t4127407527;
// ProtoBuf.NetObjectCache
struct NetObjectCache_t114687483;
// ProtoBuf.SerializationContext
struct SerializationContext_t4181794105;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Text.UTF8Encoding
struct UTF8Encoding_t3956466879;
// ProtoBuf.ProtoReader
struct ProtoReader_t2961891581;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.ProtoReader
struct  ProtoReader_t2961891581  : public Il2CppObject
{
public:
	// System.IO.Stream ProtoBuf.ProtoReader::source
	Stream_t1273022909 * ___source_0;
	// System.Byte[] ProtoBuf.ProtoReader::ioBuffer
	ByteU5BU5D_t4116647657* ___ioBuffer_1;
	// ProtoBuf.Meta.TypeModel ProtoBuf.ProtoReader::model
	TypeModel_t4127407527 * ___model_2;
	// System.Int32 ProtoBuf.ProtoReader::fieldNumber
	int32_t ___fieldNumber_3;
	// System.Int32 ProtoBuf.ProtoReader::depth
	int32_t ___depth_4;
	// System.Int32 ProtoBuf.ProtoReader::dataRemaining
	int32_t ___dataRemaining_5;
	// System.Int32 ProtoBuf.ProtoReader::ioIndex
	int32_t ___ioIndex_6;
	// System.Int32 ProtoBuf.ProtoReader::position
	int32_t ___position_7;
	// System.Int32 ProtoBuf.ProtoReader::available
	int32_t ___available_8;
	// System.Int32 ProtoBuf.ProtoReader::blockEnd
	int32_t ___blockEnd_9;
	// ProtoBuf.WireType ProtoBuf.ProtoReader::wireType
	int32_t ___wireType_10;
	// System.Boolean ProtoBuf.ProtoReader::isFixedLength
	bool ___isFixedLength_11;
	// System.Boolean ProtoBuf.ProtoReader::internStrings
	bool ___internStrings_12;
	// ProtoBuf.NetObjectCache ProtoBuf.ProtoReader::netCache
	NetObjectCache_t114687483 * ___netCache_13;
	// System.UInt32 ProtoBuf.ProtoReader::trapCount
	uint32_t ___trapCount_14;
	// ProtoBuf.SerializationContext ProtoBuf.ProtoReader::context
	SerializationContext_t4181794105 * ___context_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ProtoBuf.ProtoReader::stringInterner
	Dictionary_2_t1632706988 * ___stringInterner_16;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___source_0)); }
	inline Stream_t1273022909 * get_source_0() const { return ___source_0; }
	inline Stream_t1273022909 ** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(Stream_t1273022909 * value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier(&___source_0, value);
	}

	inline static int32_t get_offset_of_ioBuffer_1() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___ioBuffer_1)); }
	inline ByteU5BU5D_t4116647657* get_ioBuffer_1() const { return ___ioBuffer_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_ioBuffer_1() { return &___ioBuffer_1; }
	inline void set_ioBuffer_1(ByteU5BU5D_t4116647657* value)
	{
		___ioBuffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___ioBuffer_1, value);
	}

	inline static int32_t get_offset_of_model_2() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___model_2)); }
	inline TypeModel_t4127407527 * get_model_2() const { return ___model_2; }
	inline TypeModel_t4127407527 ** get_address_of_model_2() { return &___model_2; }
	inline void set_model_2(TypeModel_t4127407527 * value)
	{
		___model_2 = value;
		Il2CppCodeGenWriteBarrier(&___model_2, value);
	}

	inline static int32_t get_offset_of_fieldNumber_3() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___fieldNumber_3)); }
	inline int32_t get_fieldNumber_3() const { return ___fieldNumber_3; }
	inline int32_t* get_address_of_fieldNumber_3() { return &___fieldNumber_3; }
	inline void set_fieldNumber_3(int32_t value)
	{
		___fieldNumber_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_dataRemaining_5() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___dataRemaining_5)); }
	inline int32_t get_dataRemaining_5() const { return ___dataRemaining_5; }
	inline int32_t* get_address_of_dataRemaining_5() { return &___dataRemaining_5; }
	inline void set_dataRemaining_5(int32_t value)
	{
		___dataRemaining_5 = value;
	}

	inline static int32_t get_offset_of_ioIndex_6() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___ioIndex_6)); }
	inline int32_t get_ioIndex_6() const { return ___ioIndex_6; }
	inline int32_t* get_address_of_ioIndex_6() { return &___ioIndex_6; }
	inline void set_ioIndex_6(int32_t value)
	{
		___ioIndex_6 = value;
	}

	inline static int32_t get_offset_of_position_7() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___position_7)); }
	inline int32_t get_position_7() const { return ___position_7; }
	inline int32_t* get_address_of_position_7() { return &___position_7; }
	inline void set_position_7(int32_t value)
	{
		___position_7 = value;
	}

	inline static int32_t get_offset_of_available_8() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___available_8)); }
	inline int32_t get_available_8() const { return ___available_8; }
	inline int32_t* get_address_of_available_8() { return &___available_8; }
	inline void set_available_8(int32_t value)
	{
		___available_8 = value;
	}

	inline static int32_t get_offset_of_blockEnd_9() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___blockEnd_9)); }
	inline int32_t get_blockEnd_9() const { return ___blockEnd_9; }
	inline int32_t* get_address_of_blockEnd_9() { return &___blockEnd_9; }
	inline void set_blockEnd_9(int32_t value)
	{
		___blockEnd_9 = value;
	}

	inline static int32_t get_offset_of_wireType_10() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___wireType_10)); }
	inline int32_t get_wireType_10() const { return ___wireType_10; }
	inline int32_t* get_address_of_wireType_10() { return &___wireType_10; }
	inline void set_wireType_10(int32_t value)
	{
		___wireType_10 = value;
	}

	inline static int32_t get_offset_of_isFixedLength_11() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___isFixedLength_11)); }
	inline bool get_isFixedLength_11() const { return ___isFixedLength_11; }
	inline bool* get_address_of_isFixedLength_11() { return &___isFixedLength_11; }
	inline void set_isFixedLength_11(bool value)
	{
		___isFixedLength_11 = value;
	}

	inline static int32_t get_offset_of_internStrings_12() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___internStrings_12)); }
	inline bool get_internStrings_12() const { return ___internStrings_12; }
	inline bool* get_address_of_internStrings_12() { return &___internStrings_12; }
	inline void set_internStrings_12(bool value)
	{
		___internStrings_12 = value;
	}

	inline static int32_t get_offset_of_netCache_13() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___netCache_13)); }
	inline NetObjectCache_t114687483 * get_netCache_13() const { return ___netCache_13; }
	inline NetObjectCache_t114687483 ** get_address_of_netCache_13() { return &___netCache_13; }
	inline void set_netCache_13(NetObjectCache_t114687483 * value)
	{
		___netCache_13 = value;
		Il2CppCodeGenWriteBarrier(&___netCache_13, value);
	}

	inline static int32_t get_offset_of_trapCount_14() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___trapCount_14)); }
	inline uint32_t get_trapCount_14() const { return ___trapCount_14; }
	inline uint32_t* get_address_of_trapCount_14() { return &___trapCount_14; }
	inline void set_trapCount_14(uint32_t value)
	{
		___trapCount_14 = value;
	}

	inline static int32_t get_offset_of_context_15() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___context_15)); }
	inline SerializationContext_t4181794105 * get_context_15() const { return ___context_15; }
	inline SerializationContext_t4181794105 ** get_address_of_context_15() { return &___context_15; }
	inline void set_context_15(SerializationContext_t4181794105 * value)
	{
		___context_15 = value;
		Il2CppCodeGenWriteBarrier(&___context_15, value);
	}

	inline static int32_t get_offset_of_stringInterner_16() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581, ___stringInterner_16)); }
	inline Dictionary_2_t1632706988 * get_stringInterner_16() const { return ___stringInterner_16; }
	inline Dictionary_2_t1632706988 ** get_address_of_stringInterner_16() { return &___stringInterner_16; }
	inline void set_stringInterner_16(Dictionary_2_t1632706988 * value)
	{
		___stringInterner_16 = value;
		Il2CppCodeGenWriteBarrier(&___stringInterner_16, value);
	}
};

struct ProtoReader_t2961891581_StaticFields
{
public:
	// System.Text.UTF8Encoding ProtoBuf.ProtoReader::encoding
	UTF8Encoding_t3956466879 * ___encoding_17;
	// System.Byte[] ProtoBuf.ProtoReader::EmptyBlob
	ByteU5BU5D_t4116647657* ___EmptyBlob_18;

public:
	inline static int32_t get_offset_of_encoding_17() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581_StaticFields, ___encoding_17)); }
	inline UTF8Encoding_t3956466879 * get_encoding_17() const { return ___encoding_17; }
	inline UTF8Encoding_t3956466879 ** get_address_of_encoding_17() { return &___encoding_17; }
	inline void set_encoding_17(UTF8Encoding_t3956466879 * value)
	{
		___encoding_17 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_17, value);
	}

	inline static int32_t get_offset_of_EmptyBlob_18() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581_StaticFields, ___EmptyBlob_18)); }
	inline ByteU5BU5D_t4116647657* get_EmptyBlob_18() const { return ___EmptyBlob_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_EmptyBlob_18() { return &___EmptyBlob_18; }
	inline void set_EmptyBlob_18(ByteU5BU5D_t4116647657* value)
	{
		___EmptyBlob_18 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyBlob_18, value);
	}
};

struct ProtoReader_t2961891581_ThreadStaticFields
{
public:
	// ProtoBuf.ProtoReader ProtoBuf.ProtoReader::lastReader
	ProtoReader_t2961891581 * ___lastReader_19;

public:
	inline static int32_t get_offset_of_lastReader_19() { return static_cast<int32_t>(offsetof(ProtoReader_t2961891581_ThreadStaticFields, ___lastReader_19)); }
	inline ProtoReader_t2961891581 * get_lastReader_19() const { return ___lastReader_19; }
	inline ProtoReader_t2961891581 ** get_address_of_lastReader_19() { return &___lastReader_19; }
	inline void set_lastReader_19(ProtoReader_t2961891581 * value)
	{
		___lastReader_19 = value;
		Il2CppCodeGenWriteBarrier(&___lastReader_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
