#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Object[]
struct ObjectU5BU5D_t2843939325;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.BasicList/Node
struct  Node_t3109671269  : public Il2CppObject
{
public:
	// System.Object[] ProtoBuf.Meta.BasicList/Node::data
	ObjectU5BU5D_t2843939325* ___data_0;
	// System.Int32 ProtoBuf.Meta.BasicList/Node::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Node_t3109671269, ___data_0)); }
	inline ObjectU5BU5D_t2843939325* get_data_0() const { return ___data_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ObjectU5BU5D_t2843939325* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(Node_t3109671269, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
