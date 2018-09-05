#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ZGGame_BaseCls159170423.h"

// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.String
struct String_t;
// ZGGame.ViewBehaviour
struct ViewBehaviour_t3242029334;
// ZGGame.ViewUpdateBehaviour
struct ViewUpdateBehaviour_t731634096;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.View
struct  View_t352704265  : public BaseCls_t159170423
{
public:
	// System.Boolean ZGGame.View::_updateEnabled
	bool ____updateEnabled_2;
	// UnityEngine.Transform ZGGame.View::_parent
	Transform_t3600365921 * ____parent_3;
	// System.Boolean ZGGame.View::_destroyed
	bool ____destroyed_4;
	// UnityEngine.GameObject ZGGame.View::_view
	GameObject_t1113636619 * ____view_5;
	// System.String ZGGame.View::_assetsName
	String_t* ____assetsName_6;
	// ZGGame.ViewBehaviour ZGGame.View::_vb
	ViewBehaviour_t3242029334 * ____vb_7;
	// ZGGame.ViewUpdateBehaviour ZGGame.View::_vub
	ViewUpdateBehaviour_t731634096 * ____vub_8;

public:
	inline static int32_t get_offset_of__updateEnabled_2() { return static_cast<int32_t>(offsetof(View_t352704265, ____updateEnabled_2)); }
	inline bool get__updateEnabled_2() const { return ____updateEnabled_2; }
	inline bool* get_address_of__updateEnabled_2() { return &____updateEnabled_2; }
	inline void set__updateEnabled_2(bool value)
	{
		____updateEnabled_2 = value;
	}

	inline static int32_t get_offset_of__parent_3() { return static_cast<int32_t>(offsetof(View_t352704265, ____parent_3)); }
	inline Transform_t3600365921 * get__parent_3() const { return ____parent_3; }
	inline Transform_t3600365921 ** get_address_of__parent_3() { return &____parent_3; }
	inline void set__parent_3(Transform_t3600365921 * value)
	{
		____parent_3 = value;
		Il2CppCodeGenWriteBarrier(&____parent_3, value);
	}

	inline static int32_t get_offset_of__destroyed_4() { return static_cast<int32_t>(offsetof(View_t352704265, ____destroyed_4)); }
	inline bool get__destroyed_4() const { return ____destroyed_4; }
	inline bool* get_address_of__destroyed_4() { return &____destroyed_4; }
	inline void set__destroyed_4(bool value)
	{
		____destroyed_4 = value;
	}

	inline static int32_t get_offset_of__view_5() { return static_cast<int32_t>(offsetof(View_t352704265, ____view_5)); }
	inline GameObject_t1113636619 * get__view_5() const { return ____view_5; }
	inline GameObject_t1113636619 ** get_address_of__view_5() { return &____view_5; }
	inline void set__view_5(GameObject_t1113636619 * value)
	{
		____view_5 = value;
		Il2CppCodeGenWriteBarrier(&____view_5, value);
	}

	inline static int32_t get_offset_of__assetsName_6() { return static_cast<int32_t>(offsetof(View_t352704265, ____assetsName_6)); }
	inline String_t* get__assetsName_6() const { return ____assetsName_6; }
	inline String_t** get_address_of__assetsName_6() { return &____assetsName_6; }
	inline void set__assetsName_6(String_t* value)
	{
		____assetsName_6 = value;
		Il2CppCodeGenWriteBarrier(&____assetsName_6, value);
	}

	inline static int32_t get_offset_of__vb_7() { return static_cast<int32_t>(offsetof(View_t352704265, ____vb_7)); }
	inline ViewBehaviour_t3242029334 * get__vb_7() const { return ____vb_7; }
	inline ViewBehaviour_t3242029334 ** get_address_of__vb_7() { return &____vb_7; }
	inline void set__vb_7(ViewBehaviour_t3242029334 * value)
	{
		____vb_7 = value;
		Il2CppCodeGenWriteBarrier(&____vb_7, value);
	}

	inline static int32_t get_offset_of__vub_8() { return static_cast<int32_t>(offsetof(View_t352704265, ____vub_8)); }
	inline ViewUpdateBehaviour_t731634096 * get__vub_8() const { return ____vub_8; }
	inline ViewUpdateBehaviour_t731634096 ** get_address_of__vub_8() { return &____vub_8; }
	inline void set__vub_8(ViewUpdateBehaviour_t731634096 * value)
	{
		____vub_8 = value;
		Il2CppCodeGenWriteBarrier(&____vub_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
