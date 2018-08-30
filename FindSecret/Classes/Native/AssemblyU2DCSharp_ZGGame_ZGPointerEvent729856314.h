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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// ZGGame.ZGPointerCallback
struct ZGPointerCallback_t2999669792;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.ZGPointerEvent
struct  ZGPointerEvent_t729856314  : public MonoBehaviour_t3962482529
{
public:
	// ZGGame.ZGPointerCallback ZGGame.ZGPointerEvent::onPress
	ZGPointerCallback_t2999669792 * ___onPress_8;
	// ZGGame.ZGPointerCallback ZGGame.ZGPointerEvent::onUp
	ZGPointerCallback_t2999669792 * ___onUp_9;
	// ZGGame.ZGPointerCallback ZGGame.ZGPointerEvent::onClick
	ZGPointerCallback_t2999669792 * ___onClick_10;
	// ZGGame.ZGPointerCallback ZGGame.ZGPointerEvent::onDragStart
	ZGPointerCallback_t2999669792 * ___onDragStart_11;
	// ZGGame.ZGPointerCallback ZGGame.ZGPointerEvent::onDragMove
	ZGPointerCallback_t2999669792 * ___onDragMove_12;
	// ZGGame.ZGPointerCallback ZGGame.ZGPointerEvent::onDragEnd
	ZGPointerCallback_t2999669792 * ___onDragEnd_13;
	// UnityEngine.Vector3 ZGGame.ZGPointerEvent::pressPostion
	Vector3_t3722313464  ___pressPostion_14;
	// System.Boolean ZGGame.ZGPointerEvent::pressed
	bool ___pressed_15;
	// System.Boolean ZGGame.ZGPointerEvent::dragStarted
	bool ___dragStarted_16;
	// UnityEngine.Vector3 ZGGame.ZGPointerEvent::dragMovePostion
	Vector3_t3722313464  ___dragMovePostion_17;

public:
	inline static int32_t get_offset_of_onPress_8() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314, ___onPress_8)); }
	inline ZGPointerCallback_t2999669792 * get_onPress_8() const { return ___onPress_8; }
	inline ZGPointerCallback_t2999669792 ** get_address_of_onPress_8() { return &___onPress_8; }
	inline void set_onPress_8(ZGPointerCallback_t2999669792 * value)
	{
		___onPress_8 = value;
		Il2CppCodeGenWriteBarrier(&___onPress_8, value);
	}

	inline static int32_t get_offset_of_onUp_9() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314, ___onUp_9)); }
	inline ZGPointerCallback_t2999669792 * get_onUp_9() const { return ___onUp_9; }
	inline ZGPointerCallback_t2999669792 ** get_address_of_onUp_9() { return &___onUp_9; }
	inline void set_onUp_9(ZGPointerCallback_t2999669792 * value)
	{
		___onUp_9 = value;
		Il2CppCodeGenWriteBarrier(&___onUp_9, value);
	}

	inline static int32_t get_offset_of_onClick_10() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314, ___onClick_10)); }
	inline ZGPointerCallback_t2999669792 * get_onClick_10() const { return ___onClick_10; }
	inline ZGPointerCallback_t2999669792 ** get_address_of_onClick_10() { return &___onClick_10; }
	inline void set_onClick_10(ZGPointerCallback_t2999669792 * value)
	{
		___onClick_10 = value;
		Il2CppCodeGenWriteBarrier(&___onClick_10, value);
	}

	inline static int32_t get_offset_of_onDragStart_11() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314, ___onDragStart_11)); }
	inline ZGPointerCallback_t2999669792 * get_onDragStart_11() const { return ___onDragStart_11; }
	inline ZGPointerCallback_t2999669792 ** get_address_of_onDragStart_11() { return &___onDragStart_11; }
	inline void set_onDragStart_11(ZGPointerCallback_t2999669792 * value)
	{
		___onDragStart_11 = value;
		Il2CppCodeGenWriteBarrier(&___onDragStart_11, value);
	}

	inline static int32_t get_offset_of_onDragMove_12() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314, ___onDragMove_12)); }
	inline ZGPointerCallback_t2999669792 * get_onDragMove_12() const { return ___onDragMove_12; }
	inline ZGPointerCallback_t2999669792 ** get_address_of_onDragMove_12() { return &___onDragMove_12; }
	inline void set_onDragMove_12(ZGPointerCallback_t2999669792 * value)
	{
		___onDragMove_12 = value;
		Il2CppCodeGenWriteBarrier(&___onDragMove_12, value);
	}

	inline static int32_t get_offset_of_onDragEnd_13() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314, ___onDragEnd_13)); }
	inline ZGPointerCallback_t2999669792 * get_onDragEnd_13() const { return ___onDragEnd_13; }
	inline ZGPointerCallback_t2999669792 ** get_address_of_onDragEnd_13() { return &___onDragEnd_13; }
	inline void set_onDragEnd_13(ZGPointerCallback_t2999669792 * value)
	{
		___onDragEnd_13 = value;
		Il2CppCodeGenWriteBarrier(&___onDragEnd_13, value);
	}

	inline static int32_t get_offset_of_pressPostion_14() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314, ___pressPostion_14)); }
	inline Vector3_t3722313464  get_pressPostion_14() const { return ___pressPostion_14; }
	inline Vector3_t3722313464 * get_address_of_pressPostion_14() { return &___pressPostion_14; }
	inline void set_pressPostion_14(Vector3_t3722313464  value)
	{
		___pressPostion_14 = value;
	}

	inline static int32_t get_offset_of_pressed_15() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314, ___pressed_15)); }
	inline bool get_pressed_15() const { return ___pressed_15; }
	inline bool* get_address_of_pressed_15() { return &___pressed_15; }
	inline void set_pressed_15(bool value)
	{
		___pressed_15 = value;
	}

	inline static int32_t get_offset_of_dragStarted_16() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314, ___dragStarted_16)); }
	inline bool get_dragStarted_16() const { return ___dragStarted_16; }
	inline bool* get_address_of_dragStarted_16() { return &___dragStarted_16; }
	inline void set_dragStarted_16(bool value)
	{
		___dragStarted_16 = value;
	}

	inline static int32_t get_offset_of_dragMovePostion_17() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314, ___dragMovePostion_17)); }
	inline Vector3_t3722313464  get_dragMovePostion_17() const { return ___dragMovePostion_17; }
	inline Vector3_t3722313464 * get_address_of_dragMovePostion_17() { return &___dragMovePostion_17; }
	inline void set_dragMovePostion_17(Vector3_t3722313464  value)
	{
		___dragMovePostion_17 = value;
	}
};

struct ZGPointerEvent_t729856314_StaticFields
{
public:
	// UnityEngine.GameObject ZGGame.ZGPointerEvent::currentObject
	GameObject_t1113636619 * ___currentObject_2;
	// UnityEngine.GameObject[] ZGGame.ZGPointerEvent::allObject
	GameObjectU5BU5D_t3328599146* ___allObject_3;
	// UnityEngine.GameObject ZGGame.ZGPointerEvent::lastObject
	GameObject_t1113636619 * ___lastObject_4;
	// UnityEngine.Vector3 ZGGame.ZGPointerEvent::localPostion
	Vector3_t3722313464  ___localPostion_5;
	// UnityEngine.Vector3 ZGGame.ZGPointerEvent::worldPostion
	Vector3_t3722313464  ___worldPostion_6;
	// System.Boolean ZGGame.ZGPointerEvent::_ignoreBlock
	bool ____ignoreBlock_7;

public:
	inline static int32_t get_offset_of_currentObject_2() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314_StaticFields, ___currentObject_2)); }
	inline GameObject_t1113636619 * get_currentObject_2() const { return ___currentObject_2; }
	inline GameObject_t1113636619 ** get_address_of_currentObject_2() { return &___currentObject_2; }
	inline void set_currentObject_2(GameObject_t1113636619 * value)
	{
		___currentObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentObject_2, value);
	}

	inline static int32_t get_offset_of_allObject_3() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314_StaticFields, ___allObject_3)); }
	inline GameObjectU5BU5D_t3328599146* get_allObject_3() const { return ___allObject_3; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_allObject_3() { return &___allObject_3; }
	inline void set_allObject_3(GameObjectU5BU5D_t3328599146* value)
	{
		___allObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___allObject_3, value);
	}

	inline static int32_t get_offset_of_lastObject_4() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314_StaticFields, ___lastObject_4)); }
	inline GameObject_t1113636619 * get_lastObject_4() const { return ___lastObject_4; }
	inline GameObject_t1113636619 ** get_address_of_lastObject_4() { return &___lastObject_4; }
	inline void set_lastObject_4(GameObject_t1113636619 * value)
	{
		___lastObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___lastObject_4, value);
	}

	inline static int32_t get_offset_of_localPostion_5() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314_StaticFields, ___localPostion_5)); }
	inline Vector3_t3722313464  get_localPostion_5() const { return ___localPostion_5; }
	inline Vector3_t3722313464 * get_address_of_localPostion_5() { return &___localPostion_5; }
	inline void set_localPostion_5(Vector3_t3722313464  value)
	{
		___localPostion_5 = value;
	}

	inline static int32_t get_offset_of_worldPostion_6() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314_StaticFields, ___worldPostion_6)); }
	inline Vector3_t3722313464  get_worldPostion_6() const { return ___worldPostion_6; }
	inline Vector3_t3722313464 * get_address_of_worldPostion_6() { return &___worldPostion_6; }
	inline void set_worldPostion_6(Vector3_t3722313464  value)
	{
		___worldPostion_6 = value;
	}

	inline static int32_t get_offset_of__ignoreBlock_7() { return static_cast<int32_t>(offsetof(ZGPointerEvent_t729856314_StaticFields, ____ignoreBlock_7)); }
	inline bool get__ignoreBlock_7() const { return ____ignoreBlock_7; }
	inline bool* get_address_of__ignoreBlock_7() { return &____ignoreBlock_7; }
	inline void set__ignoreBlock_7(bool value)
	{
		____ignoreBlock_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
