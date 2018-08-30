#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.List`1<message.POIType>
struct List_1_t3917903508;
// ProtoBuf.IExtension
struct IExtension_t3291225028;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// message.GCTypesDefaultInfo
struct  GCTypesDefaultInfo_t122421625  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<message.POIType> message.GCTypesDefaultInfo::_poiType
	List_1_t3917903508 * ____poiType_0;
	// ProtoBuf.IExtension message.GCTypesDefaultInfo::extensionObject
	Il2CppObject * ___extensionObject_1;

public:
	inline static int32_t get_offset_of__poiType_0() { return static_cast<int32_t>(offsetof(GCTypesDefaultInfo_t122421625, ____poiType_0)); }
	inline List_1_t3917903508 * get__poiType_0() const { return ____poiType_0; }
	inline List_1_t3917903508 ** get_address_of__poiType_0() { return &____poiType_0; }
	inline void set__poiType_0(List_1_t3917903508 * value)
	{
		____poiType_0 = value;
		Il2CppCodeGenWriteBarrier(&____poiType_0, value);
	}

	inline static int32_t get_offset_of_extensionObject_1() { return static_cast<int32_t>(offsetof(GCTypesDefaultInfo_t122421625, ___extensionObject_1)); }
	inline Il2CppObject * get_extensionObject_1() const { return ___extensionObject_1; }
	inline Il2CppObject ** get_address_of_extensionObject_1() { return &___extensionObject_1; }
	inline void set_extensionObject_1(Il2CppObject * value)
	{
		___extensionObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
