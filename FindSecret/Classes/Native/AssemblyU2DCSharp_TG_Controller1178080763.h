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
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TG_Controller
struct  TG_Controller_t1178080763  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject TG_Controller::TG_Label_F
	GameObject_t1113636619 * ___TG_Label_F_2;
	// UnityEngine.GameObject TG_Controller::TG_Label
	GameObject_t1113636619 * ___TG_Label_3;
	// System.Single TG_Controller::LabelDistance
	float ___LabelDistance_4;
	// System.Single TG_Controller::DetectionRange
	float ___DetectionRange_5;
	// System.Single TG_Controller::LiftingHeight
	float ___LiftingHeight_6;
	// System.Collections.ArrayList TG_Controller::TG_Labels
	ArrayList_t2718874744 * ___TG_Labels_7;
	// System.String TG_Controller::str
	String_t* ___str_8;

public:
	inline static int32_t get_offset_of_TG_Label_F_2() { return static_cast<int32_t>(offsetof(TG_Controller_t1178080763, ___TG_Label_F_2)); }
	inline GameObject_t1113636619 * get_TG_Label_F_2() const { return ___TG_Label_F_2; }
	inline GameObject_t1113636619 ** get_address_of_TG_Label_F_2() { return &___TG_Label_F_2; }
	inline void set_TG_Label_F_2(GameObject_t1113636619 * value)
	{
		___TG_Label_F_2 = value;
		Il2CppCodeGenWriteBarrier(&___TG_Label_F_2, value);
	}

	inline static int32_t get_offset_of_TG_Label_3() { return static_cast<int32_t>(offsetof(TG_Controller_t1178080763, ___TG_Label_3)); }
	inline GameObject_t1113636619 * get_TG_Label_3() const { return ___TG_Label_3; }
	inline GameObject_t1113636619 ** get_address_of_TG_Label_3() { return &___TG_Label_3; }
	inline void set_TG_Label_3(GameObject_t1113636619 * value)
	{
		___TG_Label_3 = value;
		Il2CppCodeGenWriteBarrier(&___TG_Label_3, value);
	}

	inline static int32_t get_offset_of_LabelDistance_4() { return static_cast<int32_t>(offsetof(TG_Controller_t1178080763, ___LabelDistance_4)); }
	inline float get_LabelDistance_4() const { return ___LabelDistance_4; }
	inline float* get_address_of_LabelDistance_4() { return &___LabelDistance_4; }
	inline void set_LabelDistance_4(float value)
	{
		___LabelDistance_4 = value;
	}

	inline static int32_t get_offset_of_DetectionRange_5() { return static_cast<int32_t>(offsetof(TG_Controller_t1178080763, ___DetectionRange_5)); }
	inline float get_DetectionRange_5() const { return ___DetectionRange_5; }
	inline float* get_address_of_DetectionRange_5() { return &___DetectionRange_5; }
	inline void set_DetectionRange_5(float value)
	{
		___DetectionRange_5 = value;
	}

	inline static int32_t get_offset_of_LiftingHeight_6() { return static_cast<int32_t>(offsetof(TG_Controller_t1178080763, ___LiftingHeight_6)); }
	inline float get_LiftingHeight_6() const { return ___LiftingHeight_6; }
	inline float* get_address_of_LiftingHeight_6() { return &___LiftingHeight_6; }
	inline void set_LiftingHeight_6(float value)
	{
		___LiftingHeight_6 = value;
	}

	inline static int32_t get_offset_of_TG_Labels_7() { return static_cast<int32_t>(offsetof(TG_Controller_t1178080763, ___TG_Labels_7)); }
	inline ArrayList_t2718874744 * get_TG_Labels_7() const { return ___TG_Labels_7; }
	inline ArrayList_t2718874744 ** get_address_of_TG_Labels_7() { return &___TG_Labels_7; }
	inline void set_TG_Labels_7(ArrayList_t2718874744 * value)
	{
		___TG_Labels_7 = value;
		Il2CppCodeGenWriteBarrier(&___TG_Labels_7, value);
	}

	inline static int32_t get_offset_of_str_8() { return static_cast<int32_t>(offsetof(TG_Controller_t1178080763, ___str_8)); }
	inline String_t* get_str_8() const { return ___str_8; }
	inline String_t** get_address_of_str_8() { return &___str_8; }
	inline void set_str_8(String_t* value)
	{
		___str_8 = value;
		Il2CppCodeGenWriteBarrier(&___str_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
