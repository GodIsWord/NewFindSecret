#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Stack
struct Stack_t2329662280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.CorrelationManager
struct  CorrelationManager_t2688752967  : public Il2CppObject
{
public:
	// System.Collections.Stack System.Diagnostics.CorrelationManager::op_stack
	Stack_t2329662280 * ___op_stack_0;

public:
	inline static int32_t get_offset_of_op_stack_0() { return static_cast<int32_t>(offsetof(CorrelationManager_t2688752967, ___op_stack_0)); }
	inline Stack_t2329662280 * get_op_stack_0() const { return ___op_stack_0; }
	inline Stack_t2329662280 ** get_address_of_op_stack_0() { return &___op_stack_0; }
	inline void set_op_stack_0(Stack_t2329662280 * value)
	{
		___op_stack_0 = value;
		Il2CppCodeGenWriteBarrier(&___op_stack_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
