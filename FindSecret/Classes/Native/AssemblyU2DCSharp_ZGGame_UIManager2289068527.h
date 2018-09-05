#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.Dictionary`2<ZGGame.UILayer,UnityEngine.GameObject>
struct Dictionary_2_t67383257;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<ZGGame.UIView>>
struct List_1_t346712928;
// System.Collections.Generic.Dictionary`2<System.String,ZGGame.UIView>
struct Dictionary_2_t1482787039;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t2767979955;
// ZGGame.EventCallback
struct EventCallback_t832368971;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.UIManager
struct  UIManager_t2289068527  : public Il2CppObject
{
public:

public:
};

struct UIManager_t2289068527_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ZGGame.UILayer,UnityEngine.GameObject> ZGGame.UIManager::_layers
	Dictionary_2_t67383257 * ____layers_0;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<ZGGame.UIView>> ZGGame.UIManager::listHistoryVIew
	List_1_t346712928 * ___listHistoryVIew_1;
	// System.Collections.Generic.Dictionary`2<System.String,ZGGame.UIView> ZGGame.UIManager::_closedUIDic
	Dictionary_2_t1482787039 * ____closedUIDic_2;
	// System.Collections.Generic.Dictionary`2<System.String,ZGGame.UIView> ZGGame.UIManager::_openUIDic
	Dictionary_2_t1482787039 * ____openUIDic_3;
	// UnityEngine.GameObject ZGGame.UIManager::_root
	GameObject_t1113636619 * ____root_4;
	// UnityEngine.EventSystems.EventSystem ZGGame.UIManager::_esy
	EventSystem_t1003666588 * ____esy_5;
	// UnityEngine.Camera ZGGame.UIManager::_uiCamera
	Camera_t4157153871 * ____uiCamera_6;
	// UnityEngine.Canvas ZGGame.UIManager::_uiScreen
	Canvas_t3310196443 * ____uiScreen_7;
	// UnityEngine.UI.CanvasScaler ZGGame.UIManager::_uiScaler
	CanvasScaler_t2767979955 * ____uiScaler_8;
	// ZGGame.EventCallback ZGGame.UIManager::<>f__mg$cache0
	EventCallback_t832368971 * ___U3CU3Ef__mgU24cache0_9;
	// ZGGame.EventCallback ZGGame.UIManager::<>f__mg$cache1
	EventCallback_t832368971 * ___U3CU3Ef__mgU24cache1_10;
	// ZGGame.EventCallback ZGGame.UIManager::<>f__mg$cache2
	EventCallback_t832368971 * ___U3CU3Ef__mgU24cache2_11;
	// ZGGame.EventCallback ZGGame.UIManager::<>f__mg$cache3
	EventCallback_t832368971 * ___U3CU3Ef__mgU24cache3_12;

public:
	inline static int32_t get_offset_of__layers_0() { return static_cast<int32_t>(offsetof(UIManager_t2289068527_StaticFields, ____layers_0)); }
	inline Dictionary_2_t67383257 * get__layers_0() const { return ____layers_0; }
	inline Dictionary_2_t67383257 ** get_address_of__layers_0() { return &____layers_0; }
	inline void set__layers_0(Dictionary_2_t67383257 * value)
	{
		____layers_0 = value;
		Il2CppCodeGenWriteBarrier(&____layers_0, value);
	}

	inline static int32_t get_offset_of_listHistoryVIew_1() { return static_cast<int32_t>(offsetof(UIManager_t2289068527_StaticFields, ___listHistoryVIew_1)); }
	inline List_1_t346712928 * get_listHistoryVIew_1() const { return ___listHistoryVIew_1; }
	inline List_1_t346712928 ** get_address_of_listHistoryVIew_1() { return &___listHistoryVIew_1; }
	inline void set_listHistoryVIew_1(List_1_t346712928 * value)
	{
		___listHistoryVIew_1 = value;
		Il2CppCodeGenWriteBarrier(&___listHistoryVIew_1, value);
	}

	inline static int32_t get_offset_of__closedUIDic_2() { return static_cast<int32_t>(offsetof(UIManager_t2289068527_StaticFields, ____closedUIDic_2)); }
	inline Dictionary_2_t1482787039 * get__closedUIDic_2() const { return ____closedUIDic_2; }
	inline Dictionary_2_t1482787039 ** get_address_of__closedUIDic_2() { return &____closedUIDic_2; }
	inline void set__closedUIDic_2(Dictionary_2_t1482787039 * value)
	{
		____closedUIDic_2 = value;
		Il2CppCodeGenWriteBarrier(&____closedUIDic_2, value);
	}

	inline static int32_t get_offset_of__openUIDic_3() { return static_cast<int32_t>(offsetof(UIManager_t2289068527_StaticFields, ____openUIDic_3)); }
	inline Dictionary_2_t1482787039 * get__openUIDic_3() const { return ____openUIDic_3; }
	inline Dictionary_2_t1482787039 ** get_address_of__openUIDic_3() { return &____openUIDic_3; }
	inline void set__openUIDic_3(Dictionary_2_t1482787039 * value)
	{
		____openUIDic_3 = value;
		Il2CppCodeGenWriteBarrier(&____openUIDic_3, value);
	}

	inline static int32_t get_offset_of__root_4() { return static_cast<int32_t>(offsetof(UIManager_t2289068527_StaticFields, ____root_4)); }
	inline GameObject_t1113636619 * get__root_4() const { return ____root_4; }
	inline GameObject_t1113636619 ** get_address_of__root_4() { return &____root_4; }
	inline void set__root_4(GameObject_t1113636619 * value)
	{
		____root_4 = value;
		Il2CppCodeGenWriteBarrier(&____root_4, value);
	}

	inline static int32_t get_offset_of__esy_5() { return static_cast<int32_t>(offsetof(UIManager_t2289068527_StaticFields, ____esy_5)); }
	inline EventSystem_t1003666588 * get__esy_5() const { return ____esy_5; }
	inline EventSystem_t1003666588 ** get_address_of__esy_5() { return &____esy_5; }
	inline void set__esy_5(EventSystem_t1003666588 * value)
	{
		____esy_5 = value;
		Il2CppCodeGenWriteBarrier(&____esy_5, value);
	}

	inline static int32_t get_offset_of__uiCamera_6() { return static_cast<int32_t>(offsetof(UIManager_t2289068527_StaticFields, ____uiCamera_6)); }
	inline Camera_t4157153871 * get__uiCamera_6() const { return ____uiCamera_6; }
	inline Camera_t4157153871 ** get_address_of__uiCamera_6() { return &____uiCamera_6; }
	inline void set__uiCamera_6(Camera_t4157153871 * value)
	{
		____uiCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&____uiCamera_6, value);
	}

	inline static int32_t get_offset_of__uiScreen_7() { return static_cast<int32_t>(offsetof(UIManager_t2289068527_StaticFields, ____uiScreen_7)); }
	inline Canvas_t3310196443 * get__uiScreen_7() const { return ____uiScreen_7; }
	inline Canvas_t3310196443 ** get_address_of__uiScreen_7() { return &____uiScreen_7; }
	inline void set__uiScreen_7(Canvas_t3310196443 * value)
	{
		____uiScreen_7 = value;
		Il2CppCodeGenWriteBarrier(&____uiScreen_7, value);
	}

	inline static int32_t get_offset_of__uiScaler_8() { return static_cast<int32_t>(offsetof(UIManager_t2289068527_StaticFields, ____uiScaler_8)); }
	inline CanvasScaler_t2767979955 * get__uiScaler_8() const { return ____uiScaler_8; }
	inline CanvasScaler_t2767979955 ** get_address_of__uiScaler_8() { return &____uiScaler_8; }
	inline void set__uiScaler_8(CanvasScaler_t2767979955 * value)
	{
		____uiScaler_8 = value;
		Il2CppCodeGenWriteBarrier(&____uiScaler_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_9() { return static_cast<int32_t>(offsetof(UIManager_t2289068527_StaticFields, ___U3CU3Ef__mgU24cache0_9)); }
	inline EventCallback_t832368971 * get_U3CU3Ef__mgU24cache0_9() const { return ___U3CU3Ef__mgU24cache0_9; }
	inline EventCallback_t832368971 ** get_address_of_U3CU3Ef__mgU24cache0_9() { return &___U3CU3Ef__mgU24cache0_9; }
	inline void set_U3CU3Ef__mgU24cache0_9(EventCallback_t832368971 * value)
	{
		___U3CU3Ef__mgU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_10() { return static_cast<int32_t>(offsetof(UIManager_t2289068527_StaticFields, ___U3CU3Ef__mgU24cache1_10)); }
	inline EventCallback_t832368971 * get_U3CU3Ef__mgU24cache1_10() const { return ___U3CU3Ef__mgU24cache1_10; }
	inline EventCallback_t832368971 ** get_address_of_U3CU3Ef__mgU24cache1_10() { return &___U3CU3Ef__mgU24cache1_10; }
	inline void set_U3CU3Ef__mgU24cache1_10(EventCallback_t832368971 * value)
	{
		___U3CU3Ef__mgU24cache1_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_11() { return static_cast<int32_t>(offsetof(UIManager_t2289068527_StaticFields, ___U3CU3Ef__mgU24cache2_11)); }
	inline EventCallback_t832368971 * get_U3CU3Ef__mgU24cache2_11() const { return ___U3CU3Ef__mgU24cache2_11; }
	inline EventCallback_t832368971 ** get_address_of_U3CU3Ef__mgU24cache2_11() { return &___U3CU3Ef__mgU24cache2_11; }
	inline void set_U3CU3Ef__mgU24cache2_11(EventCallback_t832368971 * value)
	{
		___U3CU3Ef__mgU24cache2_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_12() { return static_cast<int32_t>(offsetof(UIManager_t2289068527_StaticFields, ___U3CU3Ef__mgU24cache3_12)); }
	inline EventCallback_t832368971 * get_U3CU3Ef__mgU24cache3_12() const { return ___U3CU3Ef__mgU24cache3_12; }
	inline EventCallback_t832368971 ** get_address_of_U3CU3Ef__mgU24cache3_12() { return &___U3CU3Ef__mgU24cache3_12; }
	inline void set_U3CU3Ef__mgU24cache3_12(EventCallback_t832368971 * value)
	{
		___U3CU3Ef__mgU24cache3_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
