#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"

// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// N_Controller
struct N_Controller_t3224825517;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// N_Controller
struct  N_Controller_t3224825517  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject N_Controller::StartingPosition
	GameObject_t1113636619 * ___StartingPosition_2;
	// UnityEngine.GameObject N_Controller::RoutePoint
	GameObject_t1113636619 * ___RoutePoint_3;
	// UnityEngine.GameObject N_Controller::RouteParent
	GameObject_t1113636619 * ___RouteParent_4;
	// UnityEngine.GameObject N_Controller::player
	GameObject_t1113636619 * ___player_5;
	// UnityEngine.Vector3 N_Controller::RoutePointRotate
	Vector3_t3722313464  ___RoutePointRotate_6;
	// UnityEngine.Vector3 N_Controller::RoutePointScale
	Vector3_t3722313464  ___RoutePointScale_7;
	// UnityEngine.Vector3 N_Controller::deviation
	Vector3_t3722313464  ___deviation_8;
	// System.Int32 N_Controller::RouteLength
	int32_t ___RouteLength_9;
	// System.Collections.ArrayList N_Controller::pathList
	ArrayList_t2718874744 * ___pathList_10;
	// System.Collections.ArrayList N_Controller::resultList
	ArrayList_t2718874744 * ___resultList_11;
	// System.Collections.ArrayList N_Controller::pathMaterial
	ArrayList_t2718874744 * ___pathMaterial_12;

public:
	inline static int32_t get_offset_of_StartingPosition_2() { return static_cast<int32_t>(offsetof(N_Controller_t3224825517, ___StartingPosition_2)); }
	inline GameObject_t1113636619 * get_StartingPosition_2() const { return ___StartingPosition_2; }
	inline GameObject_t1113636619 ** get_address_of_StartingPosition_2() { return &___StartingPosition_2; }
	inline void set_StartingPosition_2(GameObject_t1113636619 * value)
	{
		___StartingPosition_2 = value;
		Il2CppCodeGenWriteBarrier(&___StartingPosition_2, value);
	}

	inline static int32_t get_offset_of_RoutePoint_3() { return static_cast<int32_t>(offsetof(N_Controller_t3224825517, ___RoutePoint_3)); }
	inline GameObject_t1113636619 * get_RoutePoint_3() const { return ___RoutePoint_3; }
	inline GameObject_t1113636619 ** get_address_of_RoutePoint_3() { return &___RoutePoint_3; }
	inline void set_RoutePoint_3(GameObject_t1113636619 * value)
	{
		___RoutePoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___RoutePoint_3, value);
	}

	inline static int32_t get_offset_of_RouteParent_4() { return static_cast<int32_t>(offsetof(N_Controller_t3224825517, ___RouteParent_4)); }
	inline GameObject_t1113636619 * get_RouteParent_4() const { return ___RouteParent_4; }
	inline GameObject_t1113636619 ** get_address_of_RouteParent_4() { return &___RouteParent_4; }
	inline void set_RouteParent_4(GameObject_t1113636619 * value)
	{
		___RouteParent_4 = value;
		Il2CppCodeGenWriteBarrier(&___RouteParent_4, value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(N_Controller_t3224825517, ___player_5)); }
	inline GameObject_t1113636619 * get_player_5() const { return ___player_5; }
	inline GameObject_t1113636619 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_t1113636619 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}

	inline static int32_t get_offset_of_RoutePointRotate_6() { return static_cast<int32_t>(offsetof(N_Controller_t3224825517, ___RoutePointRotate_6)); }
	inline Vector3_t3722313464  get_RoutePointRotate_6() const { return ___RoutePointRotate_6; }
	inline Vector3_t3722313464 * get_address_of_RoutePointRotate_6() { return &___RoutePointRotate_6; }
	inline void set_RoutePointRotate_6(Vector3_t3722313464  value)
	{
		___RoutePointRotate_6 = value;
	}

	inline static int32_t get_offset_of_RoutePointScale_7() { return static_cast<int32_t>(offsetof(N_Controller_t3224825517, ___RoutePointScale_7)); }
	inline Vector3_t3722313464  get_RoutePointScale_7() const { return ___RoutePointScale_7; }
	inline Vector3_t3722313464 * get_address_of_RoutePointScale_7() { return &___RoutePointScale_7; }
	inline void set_RoutePointScale_7(Vector3_t3722313464  value)
	{
		___RoutePointScale_7 = value;
	}

	inline static int32_t get_offset_of_deviation_8() { return static_cast<int32_t>(offsetof(N_Controller_t3224825517, ___deviation_8)); }
	inline Vector3_t3722313464  get_deviation_8() const { return ___deviation_8; }
	inline Vector3_t3722313464 * get_address_of_deviation_8() { return &___deviation_8; }
	inline void set_deviation_8(Vector3_t3722313464  value)
	{
		___deviation_8 = value;
	}

	inline static int32_t get_offset_of_RouteLength_9() { return static_cast<int32_t>(offsetof(N_Controller_t3224825517, ___RouteLength_9)); }
	inline int32_t get_RouteLength_9() const { return ___RouteLength_9; }
	inline int32_t* get_address_of_RouteLength_9() { return &___RouteLength_9; }
	inline void set_RouteLength_9(int32_t value)
	{
		___RouteLength_9 = value;
	}

	inline static int32_t get_offset_of_pathList_10() { return static_cast<int32_t>(offsetof(N_Controller_t3224825517, ___pathList_10)); }
	inline ArrayList_t2718874744 * get_pathList_10() const { return ___pathList_10; }
	inline ArrayList_t2718874744 ** get_address_of_pathList_10() { return &___pathList_10; }
	inline void set_pathList_10(ArrayList_t2718874744 * value)
	{
		___pathList_10 = value;
		Il2CppCodeGenWriteBarrier(&___pathList_10, value);
	}

	inline static int32_t get_offset_of_resultList_11() { return static_cast<int32_t>(offsetof(N_Controller_t3224825517, ___resultList_11)); }
	inline ArrayList_t2718874744 * get_resultList_11() const { return ___resultList_11; }
	inline ArrayList_t2718874744 ** get_address_of_resultList_11() { return &___resultList_11; }
	inline void set_resultList_11(ArrayList_t2718874744 * value)
	{
		___resultList_11 = value;
		Il2CppCodeGenWriteBarrier(&___resultList_11, value);
	}

	inline static int32_t get_offset_of_pathMaterial_12() { return static_cast<int32_t>(offsetof(N_Controller_t3224825517, ___pathMaterial_12)); }
	inline ArrayList_t2718874744 * get_pathMaterial_12() const { return ___pathMaterial_12; }
	inline ArrayList_t2718874744 ** get_address_of_pathMaterial_12() { return &___pathMaterial_12; }
	inline void set_pathMaterial_12(ArrayList_t2718874744 * value)
	{
		___pathMaterial_12 = value;
		Il2CppCodeGenWriteBarrier(&___pathMaterial_12, value);
	}
};

struct N_Controller_t3224825517_StaticFields
{
public:
	// N_Controller N_Controller::_N_Controller
	N_Controller_t3224825517 * ____N_Controller_13;

public:
	inline static int32_t get_offset_of__N_Controller_13() { return static_cast<int32_t>(offsetof(N_Controller_t3224825517_StaticFields, ____N_Controller_13)); }
	inline N_Controller_t3224825517 * get__N_Controller_13() const { return ____N_Controller_13; }
	inline N_Controller_t3224825517 ** get_address_of__N_Controller_13() { return &____N_Controller_13; }
	inline void set__N_Controller_13(N_Controller_t3224825517 * value)
	{
		____N_Controller_13 = value;
		Il2CppCodeGenWriteBarrier(&____N_Controller_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
