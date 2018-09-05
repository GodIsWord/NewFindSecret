#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IDAndType
struct  IDAndType_t2771975758  : public Il2CppObject
{
public:
	// System.Int32 IDAndType::id
	int32_t ___id_0;
	// System.String IDAndType::type
	String_t* ___type_1;
	// System.Double IDAndType::x
	double ___x_2;
	// System.Double IDAndType::y
	double ___y_3;
	// System.Double IDAndType::height
	double ___height_4;
	// System.Double IDAndType::width
	double ___width_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(IDAndType_t2771975758, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(IDAndType_t2771975758, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(IDAndType_t2771975758, ___x_2)); }
	inline double get_x_2() const { return ___x_2; }
	inline double* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(double value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(IDAndType_t2771975758, ___y_3)); }
	inline double get_y_3() const { return ___y_3; }
	inline double* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(double value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(IDAndType_t2771975758, ___height_4)); }
	inline double get_height_4() const { return ___height_4; }
	inline double* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(double value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_width_5() { return static_cast<int32_t>(offsetof(IDAndType_t2771975758, ___width_5)); }
	inline double get_width_5() const { return ___width_5; }
	inline double* get_address_of_width_5() { return &___width_5; }
	inline void set_width_5(double value)
	{
		___width_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
