#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// c_poiList[]
struct c_poiListU5BU5D_t2589065218;
// c_location
struct c_location_t1104917691;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TG_Data
struct  TG_Data_t3968433373  : public Il2CppObject
{
public:
	// c_poiList[] TG_Data::poiList
	c_poiListU5BU5D_t2589065218* ___poiList_0;
	// c_location TG_Data::location
	c_location_t1104917691 * ___location_1;

public:
	inline static int32_t get_offset_of_poiList_0() { return static_cast<int32_t>(offsetof(TG_Data_t3968433373, ___poiList_0)); }
	inline c_poiListU5BU5D_t2589065218* get_poiList_0() const { return ___poiList_0; }
	inline c_poiListU5BU5D_t2589065218** get_address_of_poiList_0() { return &___poiList_0; }
	inline void set_poiList_0(c_poiListU5BU5D_t2589065218* value)
	{
		___poiList_0 = value;
		Il2CppCodeGenWriteBarrier(&___poiList_0, value);
	}

	inline static int32_t get_offset_of_location_1() { return static_cast<int32_t>(offsetof(TG_Data_t3968433373, ___location_1)); }
	inline c_location_t1104917691 * get_location_1() const { return ___location_1; }
	inline c_location_t1104917691 ** get_address_of_location_1() { return &___location_1; }
	inline void set_location_1(c_location_t1104917691 * value)
	{
		___location_1 = value;
		Il2CppCodeGenWriteBarrier(&___location_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
