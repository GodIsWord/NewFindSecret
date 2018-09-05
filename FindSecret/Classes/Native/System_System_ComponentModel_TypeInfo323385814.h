#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_ComponentModel_Info3260944019.h"

// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4164928659;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeInfo
struct  TypeInfo_t323385814  : public Info_t3260944019
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::_properties
	PropertyDescriptorCollection_t4164928659 * ____properties_2;

public:
	inline static int32_t get_offset_of__properties_2() { return static_cast<int32_t>(offsetof(TypeInfo_t323385814, ____properties_2)); }
	inline PropertyDescriptorCollection_t4164928659 * get__properties_2() const { return ____properties_2; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of__properties_2() { return &____properties_2; }
	inline void set__properties_2(PropertyDescriptorCollection_t4164928659 * value)
	{
		____properties_2 = value;
		Il2CppCodeGenWriteBarrier(&____properties_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
