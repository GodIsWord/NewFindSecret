#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel4127407527.h"

// ProtoBuf.Meta.BasicList
struct BasicList_t1403853889;
// System.Object
struct Il2CppObject;
// ProtoBuf.Meta.LockContentedEventHandler
struct LockContentedEventHandler_t703181758;
// System.Reflection.MethodInfo
struct MethodInfo_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.RuntimeTypeModel
struct  RuntimeTypeModel_t1315529752  : public TypeModel_t4127407527
{
public:
	// System.Byte ProtoBuf.Meta.RuntimeTypeModel::options
	uint8_t ___options_2;
	// ProtoBuf.Meta.BasicList ProtoBuf.Meta.RuntimeTypeModel::basicTypes
	BasicList_t1403853889 * ___basicTypes_3;
	// ProtoBuf.Meta.BasicList ProtoBuf.Meta.RuntimeTypeModel::types
	BasicList_t1403853889 * ___types_4;
	// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::metadataTimeoutMilliseconds
	int32_t ___metadataTimeoutMilliseconds_5;
	// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::contentionCounter
	int32_t ___contentionCounter_6;
	// System.Object ProtoBuf.Meta.RuntimeTypeModel::contentionLock
	Il2CppObject * ___contentionLock_7;
	// ProtoBuf.Meta.LockContentedEventHandler ProtoBuf.Meta.RuntimeTypeModel::LockContended
	LockContentedEventHandler_t703181758 * ___LockContended_8;
	// System.Reflection.MethodInfo ProtoBuf.Meta.RuntimeTypeModel::defaultFactory
	MethodInfo_t * ___defaultFactory_9;

public:
	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t1315529752, ___options_2)); }
	inline uint8_t get_options_2() const { return ___options_2; }
	inline uint8_t* get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(uint8_t value)
	{
		___options_2 = value;
	}

	inline static int32_t get_offset_of_basicTypes_3() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t1315529752, ___basicTypes_3)); }
	inline BasicList_t1403853889 * get_basicTypes_3() const { return ___basicTypes_3; }
	inline BasicList_t1403853889 ** get_address_of_basicTypes_3() { return &___basicTypes_3; }
	inline void set_basicTypes_3(BasicList_t1403853889 * value)
	{
		___basicTypes_3 = value;
		Il2CppCodeGenWriteBarrier(&___basicTypes_3, value);
	}

	inline static int32_t get_offset_of_types_4() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t1315529752, ___types_4)); }
	inline BasicList_t1403853889 * get_types_4() const { return ___types_4; }
	inline BasicList_t1403853889 ** get_address_of_types_4() { return &___types_4; }
	inline void set_types_4(BasicList_t1403853889 * value)
	{
		___types_4 = value;
		Il2CppCodeGenWriteBarrier(&___types_4, value);
	}

	inline static int32_t get_offset_of_metadataTimeoutMilliseconds_5() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t1315529752, ___metadataTimeoutMilliseconds_5)); }
	inline int32_t get_metadataTimeoutMilliseconds_5() const { return ___metadataTimeoutMilliseconds_5; }
	inline int32_t* get_address_of_metadataTimeoutMilliseconds_5() { return &___metadataTimeoutMilliseconds_5; }
	inline void set_metadataTimeoutMilliseconds_5(int32_t value)
	{
		___metadataTimeoutMilliseconds_5 = value;
	}

	inline static int32_t get_offset_of_contentionCounter_6() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t1315529752, ___contentionCounter_6)); }
	inline int32_t get_contentionCounter_6() const { return ___contentionCounter_6; }
	inline int32_t* get_address_of_contentionCounter_6() { return &___contentionCounter_6; }
	inline void set_contentionCounter_6(int32_t value)
	{
		___contentionCounter_6 = value;
	}

	inline static int32_t get_offset_of_contentionLock_7() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t1315529752, ___contentionLock_7)); }
	inline Il2CppObject * get_contentionLock_7() const { return ___contentionLock_7; }
	inline Il2CppObject ** get_address_of_contentionLock_7() { return &___contentionLock_7; }
	inline void set_contentionLock_7(Il2CppObject * value)
	{
		___contentionLock_7 = value;
		Il2CppCodeGenWriteBarrier(&___contentionLock_7, value);
	}

	inline static int32_t get_offset_of_LockContended_8() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t1315529752, ___LockContended_8)); }
	inline LockContentedEventHandler_t703181758 * get_LockContended_8() const { return ___LockContended_8; }
	inline LockContentedEventHandler_t703181758 ** get_address_of_LockContended_8() { return &___LockContended_8; }
	inline void set_LockContended_8(LockContentedEventHandler_t703181758 * value)
	{
		___LockContended_8 = value;
		Il2CppCodeGenWriteBarrier(&___LockContended_8, value);
	}

	inline static int32_t get_offset_of_defaultFactory_9() { return static_cast<int32_t>(offsetof(RuntimeTypeModel_t1315529752, ___defaultFactory_9)); }
	inline MethodInfo_t * get_defaultFactory_9() const { return ___defaultFactory_9; }
	inline MethodInfo_t ** get_address_of_defaultFactory_9() { return &___defaultFactory_9; }
	inline void set_defaultFactory_9(MethodInfo_t * value)
	{
		___defaultFactory_9 = value;
		Il2CppCodeGenWriteBarrier(&___defaultFactory_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
