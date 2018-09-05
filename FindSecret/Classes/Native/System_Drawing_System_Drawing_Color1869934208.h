#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "System_Drawing_System_Drawing_Color1869934208.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Drawing.Color
struct  Color_t1869934208 
{
public:
	// System.Int64 System.Drawing.Color::value
	int64_t ___value_0;
	// System.Int16 System.Drawing.Color::state
	int16_t ___state_1;
	// System.Int16 System.Drawing.Color::knownColor
	int16_t ___knownColor_2;
	// System.String System.Drawing.Color::name
	String_t* ___name_3;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Color_t1869934208, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Color_t1869934208, ___state_1)); }
	inline int16_t get_state_1() const { return ___state_1; }
	inline int16_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int16_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_knownColor_2() { return static_cast<int32_t>(offsetof(Color_t1869934208, ___knownColor_2)); }
	inline int16_t get_knownColor_2() const { return ___knownColor_2; }
	inline int16_t* get_address_of_knownColor_2() { return &___knownColor_2; }
	inline void set_knownColor_2(int16_t value)
	{
		___knownColor_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(Color_t1869934208, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}
};

struct Color_t1869934208_StaticFields
{
public:
	// System.Drawing.Color System.Drawing.Color::Empty
	Color_t1869934208  ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(Color_t1869934208_StaticFields, ___Empty_4)); }
	inline Color_t1869934208  get_Empty_4() const { return ___Empty_4; }
	inline Color_t1869934208 * get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(Color_t1869934208  value)
	{
		___Empty_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Drawing.Color
struct Color_t1869934208_marshaled_pinvoke
{
	int64_t ___value_0;
	int16_t ___state_1;
	int16_t ___knownColor_2;
	char* ___name_3;
};
// Native definition for COM marshalling of System.Drawing.Color
struct Color_t1869934208_marshaled_com
{
	int64_t ___value_0;
	int16_t ___state_1;
	int16_t ___knownColor_2;
	Il2CppChar* ___name_3;
};
