#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute861562559.h"
#include "mscorlib_System_Runtime_CompilerServices_LoadHint3743314490.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DependencyAttribute
struct  DependencyAttribute_t1606102833  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.CompilerServices.DependencyAttribute::dependentAssembly
	String_t* ___dependentAssembly_0;
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DependencyAttribute::hint
	int32_t ___hint_1;

public:
	inline static int32_t get_offset_of_dependentAssembly_0() { return static_cast<int32_t>(offsetof(DependencyAttribute_t1606102833, ___dependentAssembly_0)); }
	inline String_t* get_dependentAssembly_0() const { return ___dependentAssembly_0; }
	inline String_t** get_address_of_dependentAssembly_0() { return &___dependentAssembly_0; }
	inline void set_dependentAssembly_0(String_t* value)
	{
		___dependentAssembly_0 = value;
		Il2CppCodeGenWriteBarrier(&___dependentAssembly_0, value);
	}

	inline static int32_t get_offset_of_hint_1() { return static_cast<int32_t>(offsetof(DependencyAttribute_t1606102833, ___hint_1)); }
	inline int32_t get_hint_1() const { return ___hint_1; }
	inline int32_t* get_address_of_hint_1() { return &___hint_1; }
	inline void set_hint_1(int32_t value)
	{
		___hint_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
