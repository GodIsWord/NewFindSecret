#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ZGGame_Model1737099757.h"

// message.GCAroundInfo
struct GCAroundInfo_t2434576971;
// System.Collections.Generic.List`1<message.POIType>
struct List_1_t3917903508;
// System.Collections.Generic.List`1<MapElemVo>
struct List_1_t198775734;
// message.Location
struct Location_t880560587;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,MapElemVo>
struct Dictionary_2_t2806924587;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapInfoModel
struct  MapInfoModel_t2862941927  : public Model_t1737099757
{
public:
	// System.Collections.Generic.List`1<message.POIType> MapInfoModel::typeList
	List_1_t3917903508 * ___typeList_3;
	// System.Collections.Generic.List`1<message.POIType> MapInfoModel::_currentTypeList
	List_1_t3917903508 * ____currentTypeList_4;
	// System.Collections.Generic.List`1<message.POIType> MapInfoModel::selectTypeList
	List_1_t3917903508 * ___selectTypeList_5;
	// System.Collections.Generic.List`1<MapElemVo> MapInfoModel::totalDataList
	List_1_t198775734 * ___totalDataList_6;
	// System.Collections.Generic.List`1<MapElemVo> MapInfoModel::totalAngList
	List_1_t198775734 * ___totalAngList_7;
	// System.Collections.Generic.List`1<MapElemVo> MapInfoModel::currentDirectionData
	List_1_t198775734 * ___currentDirectionData_8;
	// message.Location MapInfoModel::mapLocaltion
	Location_t880560587 * ___mapLocaltion_9;
	// System.String MapInfoModel::currentPositionName
	String_t* ___currentPositionName_10;
	// System.String MapInfoModel::currentPositionCode
	String_t* ___currentPositionCode_11;
	// System.Int32 MapInfoModel::minDistance
	int32_t ___minDistance_12;
	// System.Int32 MapInfoModel::maxDistance
	int32_t ___maxDistance_13;
	// System.Int32 MapInfoModel::currentDistance
	int32_t ___currentDistance_14;
	// System.Int32 MapInfoModel::lastDistanceDetail
	int32_t ___lastDistanceDetail_15;
	// System.Collections.Generic.Dictionary`2<System.String,MapElemVo> MapInfoModel::_dic
	Dictionary_2_t2806924587 * ____dic_16;

public:
	inline static int32_t get_offset_of_typeList_3() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927, ___typeList_3)); }
	inline List_1_t3917903508 * get_typeList_3() const { return ___typeList_3; }
	inline List_1_t3917903508 ** get_address_of_typeList_3() { return &___typeList_3; }
	inline void set_typeList_3(List_1_t3917903508 * value)
	{
		___typeList_3 = value;
		Il2CppCodeGenWriteBarrier(&___typeList_3, value);
	}

	inline static int32_t get_offset_of__currentTypeList_4() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927, ____currentTypeList_4)); }
	inline List_1_t3917903508 * get__currentTypeList_4() const { return ____currentTypeList_4; }
	inline List_1_t3917903508 ** get_address_of__currentTypeList_4() { return &____currentTypeList_4; }
	inline void set__currentTypeList_4(List_1_t3917903508 * value)
	{
		____currentTypeList_4 = value;
		Il2CppCodeGenWriteBarrier(&____currentTypeList_4, value);
	}

	inline static int32_t get_offset_of_selectTypeList_5() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927, ___selectTypeList_5)); }
	inline List_1_t3917903508 * get_selectTypeList_5() const { return ___selectTypeList_5; }
	inline List_1_t3917903508 ** get_address_of_selectTypeList_5() { return &___selectTypeList_5; }
	inline void set_selectTypeList_5(List_1_t3917903508 * value)
	{
		___selectTypeList_5 = value;
		Il2CppCodeGenWriteBarrier(&___selectTypeList_5, value);
	}

	inline static int32_t get_offset_of_totalDataList_6() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927, ___totalDataList_6)); }
	inline List_1_t198775734 * get_totalDataList_6() const { return ___totalDataList_6; }
	inline List_1_t198775734 ** get_address_of_totalDataList_6() { return &___totalDataList_6; }
	inline void set_totalDataList_6(List_1_t198775734 * value)
	{
		___totalDataList_6 = value;
		Il2CppCodeGenWriteBarrier(&___totalDataList_6, value);
	}

	inline static int32_t get_offset_of_totalAngList_7() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927, ___totalAngList_7)); }
	inline List_1_t198775734 * get_totalAngList_7() const { return ___totalAngList_7; }
	inline List_1_t198775734 ** get_address_of_totalAngList_7() { return &___totalAngList_7; }
	inline void set_totalAngList_7(List_1_t198775734 * value)
	{
		___totalAngList_7 = value;
		Il2CppCodeGenWriteBarrier(&___totalAngList_7, value);
	}

	inline static int32_t get_offset_of_currentDirectionData_8() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927, ___currentDirectionData_8)); }
	inline List_1_t198775734 * get_currentDirectionData_8() const { return ___currentDirectionData_8; }
	inline List_1_t198775734 ** get_address_of_currentDirectionData_8() { return &___currentDirectionData_8; }
	inline void set_currentDirectionData_8(List_1_t198775734 * value)
	{
		___currentDirectionData_8 = value;
		Il2CppCodeGenWriteBarrier(&___currentDirectionData_8, value);
	}

	inline static int32_t get_offset_of_mapLocaltion_9() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927, ___mapLocaltion_9)); }
	inline Location_t880560587 * get_mapLocaltion_9() const { return ___mapLocaltion_9; }
	inline Location_t880560587 ** get_address_of_mapLocaltion_9() { return &___mapLocaltion_9; }
	inline void set_mapLocaltion_9(Location_t880560587 * value)
	{
		___mapLocaltion_9 = value;
		Il2CppCodeGenWriteBarrier(&___mapLocaltion_9, value);
	}

	inline static int32_t get_offset_of_currentPositionName_10() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927, ___currentPositionName_10)); }
	inline String_t* get_currentPositionName_10() const { return ___currentPositionName_10; }
	inline String_t** get_address_of_currentPositionName_10() { return &___currentPositionName_10; }
	inline void set_currentPositionName_10(String_t* value)
	{
		___currentPositionName_10 = value;
		Il2CppCodeGenWriteBarrier(&___currentPositionName_10, value);
	}

	inline static int32_t get_offset_of_currentPositionCode_11() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927, ___currentPositionCode_11)); }
	inline String_t* get_currentPositionCode_11() const { return ___currentPositionCode_11; }
	inline String_t** get_address_of_currentPositionCode_11() { return &___currentPositionCode_11; }
	inline void set_currentPositionCode_11(String_t* value)
	{
		___currentPositionCode_11 = value;
		Il2CppCodeGenWriteBarrier(&___currentPositionCode_11, value);
	}

	inline static int32_t get_offset_of_minDistance_12() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927, ___minDistance_12)); }
	inline int32_t get_minDistance_12() const { return ___minDistance_12; }
	inline int32_t* get_address_of_minDistance_12() { return &___minDistance_12; }
	inline void set_minDistance_12(int32_t value)
	{
		___minDistance_12 = value;
	}

	inline static int32_t get_offset_of_maxDistance_13() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927, ___maxDistance_13)); }
	inline int32_t get_maxDistance_13() const { return ___maxDistance_13; }
	inline int32_t* get_address_of_maxDistance_13() { return &___maxDistance_13; }
	inline void set_maxDistance_13(int32_t value)
	{
		___maxDistance_13 = value;
	}

	inline static int32_t get_offset_of_currentDistance_14() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927, ___currentDistance_14)); }
	inline int32_t get_currentDistance_14() const { return ___currentDistance_14; }
	inline int32_t* get_address_of_currentDistance_14() { return &___currentDistance_14; }
	inline void set_currentDistance_14(int32_t value)
	{
		___currentDistance_14 = value;
	}

	inline static int32_t get_offset_of_lastDistanceDetail_15() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927, ___lastDistanceDetail_15)); }
	inline int32_t get_lastDistanceDetail_15() const { return ___lastDistanceDetail_15; }
	inline int32_t* get_address_of_lastDistanceDetail_15() { return &___lastDistanceDetail_15; }
	inline void set_lastDistanceDetail_15(int32_t value)
	{
		___lastDistanceDetail_15 = value;
	}

	inline static int32_t get_offset_of__dic_16() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927, ____dic_16)); }
	inline Dictionary_2_t2806924587 * get__dic_16() const { return ____dic_16; }
	inline Dictionary_2_t2806924587 ** get_address_of__dic_16() { return &____dic_16; }
	inline void set__dic_16(Dictionary_2_t2806924587 * value)
	{
		____dic_16 = value;
		Il2CppCodeGenWriteBarrier(&____dic_16, value);
	}
};

struct MapInfoModel_t2862941927_StaticFields
{
public:
	// message.GCAroundInfo MapInfoModel::gcAroundInfo
	GCAroundInfo_t2434576971 * ___gcAroundInfo_2;

public:
	inline static int32_t get_offset_of_gcAroundInfo_2() { return static_cast<int32_t>(offsetof(MapInfoModel_t2862941927_StaticFields, ___gcAroundInfo_2)); }
	inline GCAroundInfo_t2434576971 * get_gcAroundInfo_2() const { return ___gcAroundInfo_2; }
	inline GCAroundInfo_t2434576971 ** get_address_of_gcAroundInfo_2() { return &___gcAroundInfo_2; }
	inline void set_gcAroundInfo_2(GCAroundInfo_t2434576971 * value)
	{
		___gcAroundInfo_2 = value;
		Il2CppCodeGenWriteBarrier(&___gcAroundInfo_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
