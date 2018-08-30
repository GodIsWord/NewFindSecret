#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "mscorlib_System_Enum4135868527.h"

// System.Object
struct Il2CppObject;
// System.Enum
struct Enum_t4135868527;
struct Enum_t4135868527_marshaled_com;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.EnumSerializer/EnumPair
struct  EnumPair_t3148109467 
{
public:
	// System.Object ProtoBuf.Serializers.EnumSerializer/EnumPair::RawValue
	Il2CppObject * ___RawValue_0;
	// System.Enum ProtoBuf.Serializers.EnumSerializer/EnumPair::TypedValue
	Enum_t4135868527 * ___TypedValue_1;
	// System.Int32 ProtoBuf.Serializers.EnumSerializer/EnumPair::WireValue
	int32_t ___WireValue_2;

public:
	inline static int32_t get_offset_of_RawValue_0() { return static_cast<int32_t>(offsetof(EnumPair_t3148109467, ___RawValue_0)); }
	inline Il2CppObject * get_RawValue_0() const { return ___RawValue_0; }
	inline Il2CppObject ** get_address_of_RawValue_0() { return &___RawValue_0; }
	inline void set_RawValue_0(Il2CppObject * value)
	{
		___RawValue_0 = value;
		Il2CppCodeGenWriteBarrier(&___RawValue_0, value);
	}

	inline static int32_t get_offset_of_TypedValue_1() { return static_cast<int32_t>(offsetof(EnumPair_t3148109467, ___TypedValue_1)); }
	inline Enum_t4135868527 * get_TypedValue_1() const { return ___TypedValue_1; }
	inline Enum_t4135868527 ** get_address_of_TypedValue_1() { return &___TypedValue_1; }
	inline void set_TypedValue_1(Enum_t4135868527 * value)
	{
		___TypedValue_1 = value;
		Il2CppCodeGenWriteBarrier(&___TypedValue_1, value);
	}

	inline static int32_t get_offset_of_WireValue_2() { return static_cast<int32_t>(offsetof(EnumPair_t3148109467, ___WireValue_2)); }
	inline int32_t get_WireValue_2() const { return ___WireValue_2; }
	inline int32_t* get_address_of_WireValue_2() { return &___WireValue_2; }
	inline void set_WireValue_2(int32_t value)
	{
		___WireValue_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ProtoBuf.Serializers.EnumSerializer/EnumPair
struct EnumPair_t3148109467_marshaled_pinvoke
{
	Il2CppIUnknown* ___RawValue_0;
	Enum_t4135868527_marshaled_pinvoke ___TypedValue_1;
	int32_t ___WireValue_2;
};
// Native definition for COM marshalling of ProtoBuf.Serializers.EnumSerializer/EnumPair
struct EnumPair_t3148109467_marshaled_com
{
	Il2CppIUnknown* ___RawValue_0;
	Enum_t4135868527_marshaled_com* ___TypedValue_1;
	int32_t ___WireValue_2;
};
