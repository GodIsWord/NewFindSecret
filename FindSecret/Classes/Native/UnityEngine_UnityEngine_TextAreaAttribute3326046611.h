#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_PropertyAttribute3677895545.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAreaAttribute
struct  TextAreaAttribute_t3326046611  : public PropertyAttribute_t3677895545
{
public:
	// System.Int32 UnityEngine.TextAreaAttribute::minLines
	int32_t ___minLines_1;
	// System.Int32 UnityEngine.TextAreaAttribute::maxLines
	int32_t ___maxLines_2;

public:
	inline static int32_t get_offset_of_minLines_1() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t3326046611, ___minLines_1)); }
	inline int32_t get_minLines_1() const { return ___minLines_1; }
	inline int32_t* get_address_of_minLines_1() { return &___minLines_1; }
	inline void set_minLines_1(int32_t value)
	{
		___minLines_1 = value;
	}

	inline static int32_t get_offset_of_maxLines_2() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t3326046611, ___maxLines_2)); }
	inline int32_t get_maxLines_2() const { return ___maxLines_2; }
	inline int32_t* get_address_of_maxLines_2() { return &___maxLines_2; }
	inline void set_maxLines_2(int32_t value)
	{
		___maxLines_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
