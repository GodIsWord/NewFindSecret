#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// message.Location
struct Location_t880560587;
// System.String
struct String_t;
// System.Collections.Generic.List`1<message.POIData>
struct List_1_t4100999400;
// ProtoBuf.IExtension
struct IExtension_t3291225028;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// message.GCAroundInfo
struct  GCAroundInfo_t2434576971  : public Il2CppObject
{
public:
	// message.Location message.GCAroundInfo::_mapLocation
	Location_t880560587 * ____mapLocation_0;
	// System.String message.GCAroundInfo::_cityName
	String_t* ____cityName_1;
	// System.String message.GCAroundInfo::_cityCode
	String_t* ____cityCode_2;
	// System.Collections.Generic.List`1<message.POIData> message.GCAroundInfo::_poiData
	List_1_t4100999400 * ____poiData_3;
	// ProtoBuf.IExtension message.GCAroundInfo::extensionObject
	Il2CppObject * ___extensionObject_4;

public:
	inline static int32_t get_offset_of__mapLocation_0() { return static_cast<int32_t>(offsetof(GCAroundInfo_t2434576971, ____mapLocation_0)); }
	inline Location_t880560587 * get__mapLocation_0() const { return ____mapLocation_0; }
	inline Location_t880560587 ** get_address_of__mapLocation_0() { return &____mapLocation_0; }
	inline void set__mapLocation_0(Location_t880560587 * value)
	{
		____mapLocation_0 = value;
		Il2CppCodeGenWriteBarrier(&____mapLocation_0, value);
	}

	inline static int32_t get_offset_of__cityName_1() { return static_cast<int32_t>(offsetof(GCAroundInfo_t2434576971, ____cityName_1)); }
	inline String_t* get__cityName_1() const { return ____cityName_1; }
	inline String_t** get_address_of__cityName_1() { return &____cityName_1; }
	inline void set__cityName_1(String_t* value)
	{
		____cityName_1 = value;
		Il2CppCodeGenWriteBarrier(&____cityName_1, value);
	}

	inline static int32_t get_offset_of__cityCode_2() { return static_cast<int32_t>(offsetof(GCAroundInfo_t2434576971, ____cityCode_2)); }
	inline String_t* get__cityCode_2() const { return ____cityCode_2; }
	inline String_t** get_address_of__cityCode_2() { return &____cityCode_2; }
	inline void set__cityCode_2(String_t* value)
	{
		____cityCode_2 = value;
		Il2CppCodeGenWriteBarrier(&____cityCode_2, value);
	}

	inline static int32_t get_offset_of__poiData_3() { return static_cast<int32_t>(offsetof(GCAroundInfo_t2434576971, ____poiData_3)); }
	inline List_1_t4100999400 * get__poiData_3() const { return ____poiData_3; }
	inline List_1_t4100999400 ** get_address_of__poiData_3() { return &____poiData_3; }
	inline void set__poiData_3(List_1_t4100999400 * value)
	{
		____poiData_3 = value;
		Il2CppCodeGenWriteBarrier(&____poiData_3, value);
	}

	inline static int32_t get_offset_of_extensionObject_4() { return static_cast<int32_t>(offsetof(GCAroundInfo_t2434576971, ___extensionObject_4)); }
	inline Il2CppObject * get_extensionObject_4() const { return ___extensionObject_4; }
	inline Il2CppObject ** get_address_of_extensionObject_4() { return &___extensionObject_4; }
	inline void set_extensionObject_4(Il2CppObject * value)
	{
		___extensionObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
