#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Reflection.Emit.LocalBuilder[]
struct LocalBuilderU5BU5D_t4280809526;
// System.Reflection.Emit.ILExceptionInfo[]
struct ILExceptionInfoU5BU5D_t2659828623;
// System.Reflection.Emit.ILTokenInfo[]
struct ILTokenInfoU5BU5D_t973106575;
// System.Reflection.Emit.ILGenerator/LabelData[]
struct LabelDataU5BU5D_t327903686;
// System.Reflection.Emit.ILGenerator/LabelFixup[]
struct LabelFixupU5BU5D_t103660291;
// System.Reflection.Module
struct Module_t2987026101;
// System.Collections.Stack
struct Stack_t2329662280;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t1734832736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator
struct  ILGenerator_t1388622344  : public Il2CppObject
{
public:
	// System.Byte[] System.Reflection.Emit.ILGenerator::code
	ByteU5BU5D_t4116647657* ___code_1;
	// System.Int32 System.Reflection.Emit.ILGenerator::code_len
	int32_t ___code_len_2;
	// System.Int32 System.Reflection.Emit.ILGenerator::max_stack
	int32_t ___max_stack_3;
	// System.Int32 System.Reflection.Emit.ILGenerator::cur_stack
	int32_t ___cur_stack_4;
	// System.Reflection.Emit.LocalBuilder[] System.Reflection.Emit.ILGenerator::locals
	LocalBuilderU5BU5D_t4280809526* ___locals_5;
	// System.Reflection.Emit.ILExceptionInfo[] System.Reflection.Emit.ILGenerator::ex_handlers
	ILExceptionInfoU5BU5D_t2659828623* ___ex_handlers_6;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_token_fixups
	int32_t ___num_token_fixups_7;
	// System.Reflection.Emit.ILTokenInfo[] System.Reflection.Emit.ILGenerator::token_fixups
	ILTokenInfoU5BU5D_t973106575* ___token_fixups_8;
	// System.Reflection.Emit.ILGenerator/LabelData[] System.Reflection.Emit.ILGenerator::labels
	LabelDataU5BU5D_t327903686* ___labels_9;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_labels
	int32_t ___num_labels_10;
	// System.Reflection.Emit.ILGenerator/LabelFixup[] System.Reflection.Emit.ILGenerator::fixups
	LabelFixupU5BU5D_t103660291* ___fixups_11;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_fixups
	int32_t ___num_fixups_12;
	// System.Reflection.Module System.Reflection.Emit.ILGenerator::module
	Module_t2987026101 * ___module_13;
	// System.Int32 System.Reflection.Emit.ILGenerator::cur_block
	int32_t ___cur_block_14;
	// System.Collections.Stack System.Reflection.Emit.ILGenerator::open_blocks
	Stack_t2329662280 * ___open_blocks_15;
	// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ILGenerator::token_gen
	Il2CppObject * ___token_gen_16;

public:
	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___code_1)); }
	inline ByteU5BU5D_t4116647657* get_code_1() const { return ___code_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(ByteU5BU5D_t4116647657* value)
	{
		___code_1 = value;
		Il2CppCodeGenWriteBarrier(&___code_1, value);
	}

	inline static int32_t get_offset_of_code_len_2() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___code_len_2)); }
	inline int32_t get_code_len_2() const { return ___code_len_2; }
	inline int32_t* get_address_of_code_len_2() { return &___code_len_2; }
	inline void set_code_len_2(int32_t value)
	{
		___code_len_2 = value;
	}

	inline static int32_t get_offset_of_max_stack_3() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___max_stack_3)); }
	inline int32_t get_max_stack_3() const { return ___max_stack_3; }
	inline int32_t* get_address_of_max_stack_3() { return &___max_stack_3; }
	inline void set_max_stack_3(int32_t value)
	{
		___max_stack_3 = value;
	}

	inline static int32_t get_offset_of_cur_stack_4() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___cur_stack_4)); }
	inline int32_t get_cur_stack_4() const { return ___cur_stack_4; }
	inline int32_t* get_address_of_cur_stack_4() { return &___cur_stack_4; }
	inline void set_cur_stack_4(int32_t value)
	{
		___cur_stack_4 = value;
	}

	inline static int32_t get_offset_of_locals_5() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___locals_5)); }
	inline LocalBuilderU5BU5D_t4280809526* get_locals_5() const { return ___locals_5; }
	inline LocalBuilderU5BU5D_t4280809526** get_address_of_locals_5() { return &___locals_5; }
	inline void set_locals_5(LocalBuilderU5BU5D_t4280809526* value)
	{
		___locals_5 = value;
		Il2CppCodeGenWriteBarrier(&___locals_5, value);
	}

	inline static int32_t get_offset_of_ex_handlers_6() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___ex_handlers_6)); }
	inline ILExceptionInfoU5BU5D_t2659828623* get_ex_handlers_6() const { return ___ex_handlers_6; }
	inline ILExceptionInfoU5BU5D_t2659828623** get_address_of_ex_handlers_6() { return &___ex_handlers_6; }
	inline void set_ex_handlers_6(ILExceptionInfoU5BU5D_t2659828623* value)
	{
		___ex_handlers_6 = value;
		Il2CppCodeGenWriteBarrier(&___ex_handlers_6, value);
	}

	inline static int32_t get_offset_of_num_token_fixups_7() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___num_token_fixups_7)); }
	inline int32_t get_num_token_fixups_7() const { return ___num_token_fixups_7; }
	inline int32_t* get_address_of_num_token_fixups_7() { return &___num_token_fixups_7; }
	inline void set_num_token_fixups_7(int32_t value)
	{
		___num_token_fixups_7 = value;
	}

	inline static int32_t get_offset_of_token_fixups_8() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___token_fixups_8)); }
	inline ILTokenInfoU5BU5D_t973106575* get_token_fixups_8() const { return ___token_fixups_8; }
	inline ILTokenInfoU5BU5D_t973106575** get_address_of_token_fixups_8() { return &___token_fixups_8; }
	inline void set_token_fixups_8(ILTokenInfoU5BU5D_t973106575* value)
	{
		___token_fixups_8 = value;
		Il2CppCodeGenWriteBarrier(&___token_fixups_8, value);
	}

	inline static int32_t get_offset_of_labels_9() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___labels_9)); }
	inline LabelDataU5BU5D_t327903686* get_labels_9() const { return ___labels_9; }
	inline LabelDataU5BU5D_t327903686** get_address_of_labels_9() { return &___labels_9; }
	inline void set_labels_9(LabelDataU5BU5D_t327903686* value)
	{
		___labels_9 = value;
		Il2CppCodeGenWriteBarrier(&___labels_9, value);
	}

	inline static int32_t get_offset_of_num_labels_10() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___num_labels_10)); }
	inline int32_t get_num_labels_10() const { return ___num_labels_10; }
	inline int32_t* get_address_of_num_labels_10() { return &___num_labels_10; }
	inline void set_num_labels_10(int32_t value)
	{
		___num_labels_10 = value;
	}

	inline static int32_t get_offset_of_fixups_11() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___fixups_11)); }
	inline LabelFixupU5BU5D_t103660291* get_fixups_11() const { return ___fixups_11; }
	inline LabelFixupU5BU5D_t103660291** get_address_of_fixups_11() { return &___fixups_11; }
	inline void set_fixups_11(LabelFixupU5BU5D_t103660291* value)
	{
		___fixups_11 = value;
		Il2CppCodeGenWriteBarrier(&___fixups_11, value);
	}

	inline static int32_t get_offset_of_num_fixups_12() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___num_fixups_12)); }
	inline int32_t get_num_fixups_12() const { return ___num_fixups_12; }
	inline int32_t* get_address_of_num_fixups_12() { return &___num_fixups_12; }
	inline void set_num_fixups_12(int32_t value)
	{
		___num_fixups_12 = value;
	}

	inline static int32_t get_offset_of_module_13() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___module_13)); }
	inline Module_t2987026101 * get_module_13() const { return ___module_13; }
	inline Module_t2987026101 ** get_address_of_module_13() { return &___module_13; }
	inline void set_module_13(Module_t2987026101 * value)
	{
		___module_13 = value;
		Il2CppCodeGenWriteBarrier(&___module_13, value);
	}

	inline static int32_t get_offset_of_cur_block_14() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___cur_block_14)); }
	inline int32_t get_cur_block_14() const { return ___cur_block_14; }
	inline int32_t* get_address_of_cur_block_14() { return &___cur_block_14; }
	inline void set_cur_block_14(int32_t value)
	{
		___cur_block_14 = value;
	}

	inline static int32_t get_offset_of_open_blocks_15() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___open_blocks_15)); }
	inline Stack_t2329662280 * get_open_blocks_15() const { return ___open_blocks_15; }
	inline Stack_t2329662280 ** get_address_of_open_blocks_15() { return &___open_blocks_15; }
	inline void set_open_blocks_15(Stack_t2329662280 * value)
	{
		___open_blocks_15 = value;
		Il2CppCodeGenWriteBarrier(&___open_blocks_15, value);
	}

	inline static int32_t get_offset_of_token_gen_16() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344, ___token_gen_16)); }
	inline Il2CppObject * get_token_gen_16() const { return ___token_gen_16; }
	inline Il2CppObject ** get_address_of_token_gen_16() { return &___token_gen_16; }
	inline void set_token_gen_16(Il2CppObject * value)
	{
		___token_gen_16 = value;
		Il2CppCodeGenWriteBarrier(&___token_gen_16, value);
	}
};

struct ILGenerator_t1388622344_StaticFields
{
public:
	// System.Type System.Reflection.Emit.ILGenerator::void_type
	Type_t * ___void_type_0;

public:
	inline static int32_t get_offset_of_void_type_0() { return static_cast<int32_t>(offsetof(ILGenerator_t1388622344_StaticFields, ___void_type_0)); }
	inline Type_t * get_void_type_0() const { return ___void_type_0; }
	inline Type_t ** get_address_of_void_type_0() { return &___void_type_0; }
	inline void set_void_type_0(Type_t * value)
	{
		___void_type_0 = value;
		Il2CppCodeGenWriteBarrier(&___void_type_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
