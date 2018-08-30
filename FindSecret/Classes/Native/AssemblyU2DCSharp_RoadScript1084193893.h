#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.GameObject
struct GameObject_t1113636619;
// message.GCDirectionWalkInfo
struct GCDirectionWalkInfo_t486189532;
// DaoHUI
struct DaoHUI_t3200199070;
// System.Collections.Generic.List`1<message.Location>
struct List_1_t2352635329;
// RoadScript
struct RoadScript_t1084193893;
// message.DirectionWalkingStep
struct DirectionWalkingStep_t2604517577;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoadScript
struct  RoadScript_t1084193893  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject RoadScript::roadModel
	GameObject_t1113636619 * ___roadModel_2;
	// UnityEngine.GameObject RoadScript::roadRoot
	GameObject_t1113636619 * ___roadRoot_3;
	// UnityEngine.GameObject RoadScript::role
	GameObject_t1113636619 * ___role_4;
	// UnityEngine.GameObject RoadScript::_camera
	GameObject_t1113636619 * ____camera_5;
	// UnityEngine.GameObject RoadScript::gyroParent
	GameObject_t1113636619 * ___gyroParent_6;
	// UnityEngine.GameObject RoadScript::craparent
	GameObject_t1113636619 * ___craparent_7;
	// UnityEngine.GameObject RoadScript::roleDir
	GameObject_t1113636619 * ___roleDir_8;
	// message.GCDirectionWalkInfo RoadScript::gcdirectionWalkInfo
	GCDirectionWalkInfo_t486189532 * ___gcdirectionWalkInfo_9;
	// DaoHUI RoadScript::daoHUI
	DaoHUI_t3200199070 * ___daoHUI_10;
	// System.Collections.Generic.List`1<message.Location> RoadScript::listData
	List_1_t2352635329 * ___listData_11;
	// System.Single RoadScript::scale
	float ___scale_18;
	// System.Single RoadScript::allLen
	float ___allLen_19;
	// System.Boolean RoadScript::isInit
	bool ___isInit_20;
	// message.DirectionWalkingStep RoadScript::dws
	DirectionWalkingStep_t2604517577 * ___dws_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> RoadScript::dicDis
	Dictionary_2_t2736202052 * ___dicDis_22;
	// System.Int32 RoadScript::frame
	int32_t ___frame_23;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> RoadScript::listRoad
	List_1_t2585711361 * ___listRoad_24;

public:
	inline static int32_t get_offset_of_roadModel_2() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___roadModel_2)); }
	inline GameObject_t1113636619 * get_roadModel_2() const { return ___roadModel_2; }
	inline GameObject_t1113636619 ** get_address_of_roadModel_2() { return &___roadModel_2; }
	inline void set_roadModel_2(GameObject_t1113636619 * value)
	{
		___roadModel_2 = value;
		Il2CppCodeGenWriteBarrier(&___roadModel_2, value);
	}

	inline static int32_t get_offset_of_roadRoot_3() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___roadRoot_3)); }
	inline GameObject_t1113636619 * get_roadRoot_3() const { return ___roadRoot_3; }
	inline GameObject_t1113636619 ** get_address_of_roadRoot_3() { return &___roadRoot_3; }
	inline void set_roadRoot_3(GameObject_t1113636619 * value)
	{
		___roadRoot_3 = value;
		Il2CppCodeGenWriteBarrier(&___roadRoot_3, value);
	}

	inline static int32_t get_offset_of_role_4() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___role_4)); }
	inline GameObject_t1113636619 * get_role_4() const { return ___role_4; }
	inline GameObject_t1113636619 ** get_address_of_role_4() { return &___role_4; }
	inline void set_role_4(GameObject_t1113636619 * value)
	{
		___role_4 = value;
		Il2CppCodeGenWriteBarrier(&___role_4, value);
	}

	inline static int32_t get_offset_of__camera_5() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ____camera_5)); }
	inline GameObject_t1113636619 * get__camera_5() const { return ____camera_5; }
	inline GameObject_t1113636619 ** get_address_of__camera_5() { return &____camera_5; }
	inline void set__camera_5(GameObject_t1113636619 * value)
	{
		____camera_5 = value;
		Il2CppCodeGenWriteBarrier(&____camera_5, value);
	}

	inline static int32_t get_offset_of_gyroParent_6() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___gyroParent_6)); }
	inline GameObject_t1113636619 * get_gyroParent_6() const { return ___gyroParent_6; }
	inline GameObject_t1113636619 ** get_address_of_gyroParent_6() { return &___gyroParent_6; }
	inline void set_gyroParent_6(GameObject_t1113636619 * value)
	{
		___gyroParent_6 = value;
		Il2CppCodeGenWriteBarrier(&___gyroParent_6, value);
	}

	inline static int32_t get_offset_of_craparent_7() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___craparent_7)); }
	inline GameObject_t1113636619 * get_craparent_7() const { return ___craparent_7; }
	inline GameObject_t1113636619 ** get_address_of_craparent_7() { return &___craparent_7; }
	inline void set_craparent_7(GameObject_t1113636619 * value)
	{
		___craparent_7 = value;
		Il2CppCodeGenWriteBarrier(&___craparent_7, value);
	}

	inline static int32_t get_offset_of_roleDir_8() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___roleDir_8)); }
	inline GameObject_t1113636619 * get_roleDir_8() const { return ___roleDir_8; }
	inline GameObject_t1113636619 ** get_address_of_roleDir_8() { return &___roleDir_8; }
	inline void set_roleDir_8(GameObject_t1113636619 * value)
	{
		___roleDir_8 = value;
		Il2CppCodeGenWriteBarrier(&___roleDir_8, value);
	}

	inline static int32_t get_offset_of_gcdirectionWalkInfo_9() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___gcdirectionWalkInfo_9)); }
	inline GCDirectionWalkInfo_t486189532 * get_gcdirectionWalkInfo_9() const { return ___gcdirectionWalkInfo_9; }
	inline GCDirectionWalkInfo_t486189532 ** get_address_of_gcdirectionWalkInfo_9() { return &___gcdirectionWalkInfo_9; }
	inline void set_gcdirectionWalkInfo_9(GCDirectionWalkInfo_t486189532 * value)
	{
		___gcdirectionWalkInfo_9 = value;
		Il2CppCodeGenWriteBarrier(&___gcdirectionWalkInfo_9, value);
	}

	inline static int32_t get_offset_of_daoHUI_10() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___daoHUI_10)); }
	inline DaoHUI_t3200199070 * get_daoHUI_10() const { return ___daoHUI_10; }
	inline DaoHUI_t3200199070 ** get_address_of_daoHUI_10() { return &___daoHUI_10; }
	inline void set_daoHUI_10(DaoHUI_t3200199070 * value)
	{
		___daoHUI_10 = value;
		Il2CppCodeGenWriteBarrier(&___daoHUI_10, value);
	}

	inline static int32_t get_offset_of_listData_11() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___listData_11)); }
	inline List_1_t2352635329 * get_listData_11() const { return ___listData_11; }
	inline List_1_t2352635329 ** get_address_of_listData_11() { return &___listData_11; }
	inline void set_listData_11(List_1_t2352635329 * value)
	{
		___listData_11 = value;
		Il2CppCodeGenWriteBarrier(&___listData_11, value);
	}

	inline static int32_t get_offset_of_scale_18() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___scale_18)); }
	inline float get_scale_18() const { return ___scale_18; }
	inline float* get_address_of_scale_18() { return &___scale_18; }
	inline void set_scale_18(float value)
	{
		___scale_18 = value;
	}

	inline static int32_t get_offset_of_allLen_19() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___allLen_19)); }
	inline float get_allLen_19() const { return ___allLen_19; }
	inline float* get_address_of_allLen_19() { return &___allLen_19; }
	inline void set_allLen_19(float value)
	{
		___allLen_19 = value;
	}

	inline static int32_t get_offset_of_isInit_20() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___isInit_20)); }
	inline bool get_isInit_20() const { return ___isInit_20; }
	inline bool* get_address_of_isInit_20() { return &___isInit_20; }
	inline void set_isInit_20(bool value)
	{
		___isInit_20 = value;
	}

	inline static int32_t get_offset_of_dws_21() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___dws_21)); }
	inline DirectionWalkingStep_t2604517577 * get_dws_21() const { return ___dws_21; }
	inline DirectionWalkingStep_t2604517577 ** get_address_of_dws_21() { return &___dws_21; }
	inline void set_dws_21(DirectionWalkingStep_t2604517577 * value)
	{
		___dws_21 = value;
		Il2CppCodeGenWriteBarrier(&___dws_21, value);
	}

	inline static int32_t get_offset_of_dicDis_22() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___dicDis_22)); }
	inline Dictionary_2_t2736202052 * get_dicDis_22() const { return ___dicDis_22; }
	inline Dictionary_2_t2736202052 ** get_address_of_dicDis_22() { return &___dicDis_22; }
	inline void set_dicDis_22(Dictionary_2_t2736202052 * value)
	{
		___dicDis_22 = value;
		Il2CppCodeGenWriteBarrier(&___dicDis_22, value);
	}

	inline static int32_t get_offset_of_frame_23() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___frame_23)); }
	inline int32_t get_frame_23() const { return ___frame_23; }
	inline int32_t* get_address_of_frame_23() { return &___frame_23; }
	inline void set_frame_23(int32_t value)
	{
		___frame_23 = value;
	}

	inline static int32_t get_offset_of_listRoad_24() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893, ___listRoad_24)); }
	inline List_1_t2585711361 * get_listRoad_24() const { return ___listRoad_24; }
	inline List_1_t2585711361 ** get_address_of_listRoad_24() { return &___listRoad_24; }
	inline void set_listRoad_24(List_1_t2585711361 * value)
	{
		___listRoad_24 = value;
		Il2CppCodeGenWriteBarrier(&___listRoad_24, value);
	}
};

struct RoadScript_t1084193893_StaticFields
{
public:
	// RoadScript RoadScript::roadScript
	RoadScript_t1084193893 * ___roadScript_12;
	// UnityEngine.GameObject RoadScript::road
	GameObject_t1113636619 * ___road_13;
	// System.Double RoadScript::longitude
	double ___longitude_14;
	// System.Double RoadScript::latitude
	double ___latitude_15;
	// System.Double RoadScript::targetLongitude
	double ___targetLongitude_16;
	// System.Double RoadScript::targetLatitude
	double ___targetLatitude_17;

public:
	inline static int32_t get_offset_of_roadScript_12() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893_StaticFields, ___roadScript_12)); }
	inline RoadScript_t1084193893 * get_roadScript_12() const { return ___roadScript_12; }
	inline RoadScript_t1084193893 ** get_address_of_roadScript_12() { return &___roadScript_12; }
	inline void set_roadScript_12(RoadScript_t1084193893 * value)
	{
		___roadScript_12 = value;
		Il2CppCodeGenWriteBarrier(&___roadScript_12, value);
	}

	inline static int32_t get_offset_of_road_13() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893_StaticFields, ___road_13)); }
	inline GameObject_t1113636619 * get_road_13() const { return ___road_13; }
	inline GameObject_t1113636619 ** get_address_of_road_13() { return &___road_13; }
	inline void set_road_13(GameObject_t1113636619 * value)
	{
		___road_13 = value;
		Il2CppCodeGenWriteBarrier(&___road_13, value);
	}

	inline static int32_t get_offset_of_longitude_14() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893_StaticFields, ___longitude_14)); }
	inline double get_longitude_14() const { return ___longitude_14; }
	inline double* get_address_of_longitude_14() { return &___longitude_14; }
	inline void set_longitude_14(double value)
	{
		___longitude_14 = value;
	}

	inline static int32_t get_offset_of_latitude_15() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893_StaticFields, ___latitude_15)); }
	inline double get_latitude_15() const { return ___latitude_15; }
	inline double* get_address_of_latitude_15() { return &___latitude_15; }
	inline void set_latitude_15(double value)
	{
		___latitude_15 = value;
	}

	inline static int32_t get_offset_of_targetLongitude_16() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893_StaticFields, ___targetLongitude_16)); }
	inline double get_targetLongitude_16() const { return ___targetLongitude_16; }
	inline double* get_address_of_targetLongitude_16() { return &___targetLongitude_16; }
	inline void set_targetLongitude_16(double value)
	{
		___targetLongitude_16 = value;
	}

	inline static int32_t get_offset_of_targetLatitude_17() { return static_cast<int32_t>(offsetof(RoadScript_t1084193893_StaticFields, ___targetLatitude_17)); }
	inline double get_targetLatitude_17() const { return ___targetLatitude_17; }
	inline double* get_address_of_targetLatitude_17() { return &___targetLatitude_17; }
	inline void set_targetLatitude_17(double value)
	{
		___targetLatitude_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
