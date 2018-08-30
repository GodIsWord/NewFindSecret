#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3580100459.h"

// System.Object
struct Il2CppObject;
// ProtoBuf.SerializationContext
struct SerializationContext_t4181794105;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.SerializationContext
struct  SerializationContext_t4181794105  : public Il2CppObject
{
public:
	// System.Boolean ProtoBuf.SerializationContext::frozen
	bool ___frozen_0;
	// System.Object ProtoBuf.SerializationContext::context
	Il2CppObject * ___context_1;
	// System.Runtime.Serialization.StreamingContextStates ProtoBuf.SerializationContext::state
	int32_t ___state_3;

public:
	inline static int32_t get_offset_of_frozen_0() { return static_cast<int32_t>(offsetof(SerializationContext_t4181794105, ___frozen_0)); }
	inline bool get_frozen_0() const { return ___frozen_0; }
	inline bool* get_address_of_frozen_0() { return &___frozen_0; }
	inline void set_frozen_0(bool value)
	{
		___frozen_0 = value;
	}

	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(SerializationContext_t4181794105, ___context_1)); }
	inline Il2CppObject * get_context_1() const { return ___context_1; }
	inline Il2CppObject ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(Il2CppObject * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier(&___context_1, value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(SerializationContext_t4181794105, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}
};

struct SerializationContext_t4181794105_StaticFields
{
public:
	// ProtoBuf.SerializationContext ProtoBuf.SerializationContext::default
	SerializationContext_t4181794105 * ___default_2;

public:
	inline static int32_t get_offset_of_default_2() { return static_cast<int32_t>(offsetof(SerializationContext_t4181794105_StaticFields, ___default_2)); }
	inline SerializationContext_t4181794105 * get_default_2() const { return ___default_2; }
	inline SerializationContext_t4181794105 ** get_address_of_default_2() { return &___default_2; }
	inline void set_default_2(SerializationContext_t4181794105 * value)
	{
		___default_2 = value;
		Il2CppCodeGenWriteBarrier(&___default_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
