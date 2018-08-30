#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.String[]
struct StringU5BU5D_t1281789340;
// System.Int32[]
struct Int32U5BU5D_t385246372;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EnumInfo
struct  EnumInfo_t93260550  : public Il2CppObject
{
public:
	// System.String[] UnityEngine.EnumInfo::names
	StringU5BU5D_t1281789340* ___names_0;
	// System.Int32[] UnityEngine.EnumInfo::values
	Int32U5BU5D_t385246372* ___values_1;
	// System.String[] UnityEngine.EnumInfo::annotations
	StringU5BU5D_t1281789340* ___annotations_2;
	// System.Boolean UnityEngine.EnumInfo::isFlags
	bool ___isFlags_3;

public:
	inline static int32_t get_offset_of_names_0() { return static_cast<int32_t>(offsetof(EnumInfo_t93260550, ___names_0)); }
	inline StringU5BU5D_t1281789340* get_names_0() const { return ___names_0; }
	inline StringU5BU5D_t1281789340** get_address_of_names_0() { return &___names_0; }
	inline void set_names_0(StringU5BU5D_t1281789340* value)
	{
		___names_0 = value;
		Il2CppCodeGenWriteBarrier(&___names_0, value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(EnumInfo_t93260550, ___values_1)); }
	inline Int32U5BU5D_t385246372* get_values_1() const { return ___values_1; }
	inline Int32U5BU5D_t385246372** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(Int32U5BU5D_t385246372* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier(&___values_1, value);
	}

	inline static int32_t get_offset_of_annotations_2() { return static_cast<int32_t>(offsetof(EnumInfo_t93260550, ___annotations_2)); }
	inline StringU5BU5D_t1281789340* get_annotations_2() const { return ___annotations_2; }
	inline StringU5BU5D_t1281789340** get_address_of_annotations_2() { return &___annotations_2; }
	inline void set_annotations_2(StringU5BU5D_t1281789340* value)
	{
		___annotations_2 = value;
		Il2CppCodeGenWriteBarrier(&___annotations_2, value);
	}

	inline static int32_t get_offset_of_isFlags_3() { return static_cast<int32_t>(offsetof(EnumInfo_t93260550, ___isFlags_3)); }
	inline bool get_isFlags_3() const { return ___isFlags_3; }
	inline bool* get_address_of_isFlags_3() { return &___isFlags_3; }
	inline void set_isFlags_3(bool value)
	{
		___isFlags_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
