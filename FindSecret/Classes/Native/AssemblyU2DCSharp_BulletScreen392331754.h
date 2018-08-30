#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "AssemblyU2DCSharp_Mode2989995043.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"
#include "UnityEngine_UnityEngine_Quaternion2301928331.h"

// BulletScreen
struct BulletScreen_t392331754;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t959896113;
// System.Int32[]
struct Int32U5BU5D_t385246372;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletScreen
struct  BulletScreen_t392331754  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject BulletScreen::ContentParent
	GameObject_t1113636619 * ___ContentParent_3;
	// UnityEngine.GameObject BulletScreen::PeopleParent
	GameObject_t1113636619 * ___PeopleParent_4;
	// Mode BulletScreen::curMode
	int32_t ___curMode_5;
	// UnityEngine.GameObject BulletScreen::texts
	GameObject_t1113636619 * ___texts_6;
	// System.Collections.Generic.Queue`1<UnityEngine.GameObject> BulletScreen::texts_queue
	Queue_1_t959896113 * ___texts_queue_7;
	// System.Single BulletScreen::production_timer
	float ___production_timer_8;
	// System.Int32[] BulletScreen::numb
	Int32U5BU5D_t385246372* ___numb_9;
	// System.Int32 BulletScreen::Row_index
	int32_t ___Row_index_10;
	// System.Int32 BulletScreen::a
	int32_t ___a_11;
	// UnityEngine.Vector3 BulletScreen::textpositon
	Vector3_t3722313464  ___textpositon_12;
	// UnityEngine.Quaternion BulletScreen::textrotation
	Quaternion_t2301928331  ___textrotation_13;
	// UnityEngine.GameObject BulletScreen::content
	GameObject_t1113636619 * ___content_14;
	// System.Int32 BulletScreen::curindex
	int32_t ___curindex_15;
	// System.Boolean BulletScreen::isStartBulletScreen
	bool ___isStartBulletScreen_16;

public:
	inline static int32_t get_offset_of_ContentParent_3() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754, ___ContentParent_3)); }
	inline GameObject_t1113636619 * get_ContentParent_3() const { return ___ContentParent_3; }
	inline GameObject_t1113636619 ** get_address_of_ContentParent_3() { return &___ContentParent_3; }
	inline void set_ContentParent_3(GameObject_t1113636619 * value)
	{
		___ContentParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___ContentParent_3, value);
	}

	inline static int32_t get_offset_of_PeopleParent_4() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754, ___PeopleParent_4)); }
	inline GameObject_t1113636619 * get_PeopleParent_4() const { return ___PeopleParent_4; }
	inline GameObject_t1113636619 ** get_address_of_PeopleParent_4() { return &___PeopleParent_4; }
	inline void set_PeopleParent_4(GameObject_t1113636619 * value)
	{
		___PeopleParent_4 = value;
		Il2CppCodeGenWriteBarrier(&___PeopleParent_4, value);
	}

	inline static int32_t get_offset_of_curMode_5() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754, ___curMode_5)); }
	inline int32_t get_curMode_5() const { return ___curMode_5; }
	inline int32_t* get_address_of_curMode_5() { return &___curMode_5; }
	inline void set_curMode_5(int32_t value)
	{
		___curMode_5 = value;
	}

	inline static int32_t get_offset_of_texts_6() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754, ___texts_6)); }
	inline GameObject_t1113636619 * get_texts_6() const { return ___texts_6; }
	inline GameObject_t1113636619 ** get_address_of_texts_6() { return &___texts_6; }
	inline void set_texts_6(GameObject_t1113636619 * value)
	{
		___texts_6 = value;
		Il2CppCodeGenWriteBarrier(&___texts_6, value);
	}

	inline static int32_t get_offset_of_texts_queue_7() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754, ___texts_queue_7)); }
	inline Queue_1_t959896113 * get_texts_queue_7() const { return ___texts_queue_7; }
	inline Queue_1_t959896113 ** get_address_of_texts_queue_7() { return &___texts_queue_7; }
	inline void set_texts_queue_7(Queue_1_t959896113 * value)
	{
		___texts_queue_7 = value;
		Il2CppCodeGenWriteBarrier(&___texts_queue_7, value);
	}

	inline static int32_t get_offset_of_production_timer_8() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754, ___production_timer_8)); }
	inline float get_production_timer_8() const { return ___production_timer_8; }
	inline float* get_address_of_production_timer_8() { return &___production_timer_8; }
	inline void set_production_timer_8(float value)
	{
		___production_timer_8 = value;
	}

	inline static int32_t get_offset_of_numb_9() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754, ___numb_9)); }
	inline Int32U5BU5D_t385246372* get_numb_9() const { return ___numb_9; }
	inline Int32U5BU5D_t385246372** get_address_of_numb_9() { return &___numb_9; }
	inline void set_numb_9(Int32U5BU5D_t385246372* value)
	{
		___numb_9 = value;
		Il2CppCodeGenWriteBarrier(&___numb_9, value);
	}

	inline static int32_t get_offset_of_Row_index_10() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754, ___Row_index_10)); }
	inline int32_t get_Row_index_10() const { return ___Row_index_10; }
	inline int32_t* get_address_of_Row_index_10() { return &___Row_index_10; }
	inline void set_Row_index_10(int32_t value)
	{
		___Row_index_10 = value;
	}

	inline static int32_t get_offset_of_a_11() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754, ___a_11)); }
	inline int32_t get_a_11() const { return ___a_11; }
	inline int32_t* get_address_of_a_11() { return &___a_11; }
	inline void set_a_11(int32_t value)
	{
		___a_11 = value;
	}

	inline static int32_t get_offset_of_textpositon_12() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754, ___textpositon_12)); }
	inline Vector3_t3722313464  get_textpositon_12() const { return ___textpositon_12; }
	inline Vector3_t3722313464 * get_address_of_textpositon_12() { return &___textpositon_12; }
	inline void set_textpositon_12(Vector3_t3722313464  value)
	{
		___textpositon_12 = value;
	}

	inline static int32_t get_offset_of_textrotation_13() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754, ___textrotation_13)); }
	inline Quaternion_t2301928331  get_textrotation_13() const { return ___textrotation_13; }
	inline Quaternion_t2301928331 * get_address_of_textrotation_13() { return &___textrotation_13; }
	inline void set_textrotation_13(Quaternion_t2301928331  value)
	{
		___textrotation_13 = value;
	}

	inline static int32_t get_offset_of_content_14() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754, ___content_14)); }
	inline GameObject_t1113636619 * get_content_14() const { return ___content_14; }
	inline GameObject_t1113636619 ** get_address_of_content_14() { return &___content_14; }
	inline void set_content_14(GameObject_t1113636619 * value)
	{
		___content_14 = value;
		Il2CppCodeGenWriteBarrier(&___content_14, value);
	}

	inline static int32_t get_offset_of_curindex_15() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754, ___curindex_15)); }
	inline int32_t get_curindex_15() const { return ___curindex_15; }
	inline int32_t* get_address_of_curindex_15() { return &___curindex_15; }
	inline void set_curindex_15(int32_t value)
	{
		___curindex_15 = value;
	}

	inline static int32_t get_offset_of_isStartBulletScreen_16() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754, ___isStartBulletScreen_16)); }
	inline bool get_isStartBulletScreen_16() const { return ___isStartBulletScreen_16; }
	inline bool* get_address_of_isStartBulletScreen_16() { return &___isStartBulletScreen_16; }
	inline void set_isStartBulletScreen_16(bool value)
	{
		___isStartBulletScreen_16 = value;
	}
};

struct BulletScreen_t392331754_StaticFields
{
public:
	// BulletScreen BulletScreen::instance
	BulletScreen_t392331754 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(BulletScreen_t392331754_StaticFields, ___instance_2)); }
	inline BulletScreen_t392331754 * get_instance_2() const { return ___instance_2; }
	inline BulletScreen_t392331754 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(BulletScreen_t392331754 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
