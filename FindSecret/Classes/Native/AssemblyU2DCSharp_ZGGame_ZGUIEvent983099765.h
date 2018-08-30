#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigg1076084509.h"

// ZGGame.UIPointerEvent
struct UIPointerEvent_t1914654541;
// ZGGame.UIBaseEvent
struct UIBaseEvent_t1575189181;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.ZGUIEvent
struct  ZGUIEvent_t983099765  : public EventTrigger_t1076084509
{
public:
	// ZGGame.UIPointerEvent ZGGame.ZGUIEvent::onClick
	UIPointerEvent_t1914654541 * ___onClick_4;
	// ZGGame.UIPointerEvent ZGGame.ZGUIEvent::onPress
	UIPointerEvent_t1914654541 * ___onPress_5;
	// ZGGame.UIPointerEvent ZGGame.ZGUIEvent::onUp
	UIPointerEvent_t1914654541 * ___onUp_6;
	// ZGGame.UIBaseEvent ZGGame.ZGUIEvent::onSelect
	UIBaseEvent_t1575189181 * ___onSelect_7;
	// ZGGame.UIBaseEvent ZGGame.ZGUIEvent::onUpdateSelecte
	UIBaseEvent_t1575189181 * ___onUpdateSelecte_8;
	// ZGGame.UIPointerEvent ZGGame.ZGUIEvent::onEnter
	UIPointerEvent_t1914654541 * ___onEnter_9;
	// ZGGame.UIPointerEvent ZGGame.ZGUIEvent::onExit
	UIPointerEvent_t1914654541 * ___onExit_10;

public:
	inline static int32_t get_offset_of_onClick_4() { return static_cast<int32_t>(offsetof(ZGUIEvent_t983099765, ___onClick_4)); }
	inline UIPointerEvent_t1914654541 * get_onClick_4() const { return ___onClick_4; }
	inline UIPointerEvent_t1914654541 ** get_address_of_onClick_4() { return &___onClick_4; }
	inline void set_onClick_4(UIPointerEvent_t1914654541 * value)
	{
		___onClick_4 = value;
		Il2CppCodeGenWriteBarrier(&___onClick_4, value);
	}

	inline static int32_t get_offset_of_onPress_5() { return static_cast<int32_t>(offsetof(ZGUIEvent_t983099765, ___onPress_5)); }
	inline UIPointerEvent_t1914654541 * get_onPress_5() const { return ___onPress_5; }
	inline UIPointerEvent_t1914654541 ** get_address_of_onPress_5() { return &___onPress_5; }
	inline void set_onPress_5(UIPointerEvent_t1914654541 * value)
	{
		___onPress_5 = value;
		Il2CppCodeGenWriteBarrier(&___onPress_5, value);
	}

	inline static int32_t get_offset_of_onUp_6() { return static_cast<int32_t>(offsetof(ZGUIEvent_t983099765, ___onUp_6)); }
	inline UIPointerEvent_t1914654541 * get_onUp_6() const { return ___onUp_6; }
	inline UIPointerEvent_t1914654541 ** get_address_of_onUp_6() { return &___onUp_6; }
	inline void set_onUp_6(UIPointerEvent_t1914654541 * value)
	{
		___onUp_6 = value;
		Il2CppCodeGenWriteBarrier(&___onUp_6, value);
	}

	inline static int32_t get_offset_of_onSelect_7() { return static_cast<int32_t>(offsetof(ZGUIEvent_t983099765, ___onSelect_7)); }
	inline UIBaseEvent_t1575189181 * get_onSelect_7() const { return ___onSelect_7; }
	inline UIBaseEvent_t1575189181 ** get_address_of_onSelect_7() { return &___onSelect_7; }
	inline void set_onSelect_7(UIBaseEvent_t1575189181 * value)
	{
		___onSelect_7 = value;
		Il2CppCodeGenWriteBarrier(&___onSelect_7, value);
	}

	inline static int32_t get_offset_of_onUpdateSelecte_8() { return static_cast<int32_t>(offsetof(ZGUIEvent_t983099765, ___onUpdateSelecte_8)); }
	inline UIBaseEvent_t1575189181 * get_onUpdateSelecte_8() const { return ___onUpdateSelecte_8; }
	inline UIBaseEvent_t1575189181 ** get_address_of_onUpdateSelecte_8() { return &___onUpdateSelecte_8; }
	inline void set_onUpdateSelecte_8(UIBaseEvent_t1575189181 * value)
	{
		___onUpdateSelecte_8 = value;
		Il2CppCodeGenWriteBarrier(&___onUpdateSelecte_8, value);
	}

	inline static int32_t get_offset_of_onEnter_9() { return static_cast<int32_t>(offsetof(ZGUIEvent_t983099765, ___onEnter_9)); }
	inline UIPointerEvent_t1914654541 * get_onEnter_9() const { return ___onEnter_9; }
	inline UIPointerEvent_t1914654541 ** get_address_of_onEnter_9() { return &___onEnter_9; }
	inline void set_onEnter_9(UIPointerEvent_t1914654541 * value)
	{
		___onEnter_9 = value;
		Il2CppCodeGenWriteBarrier(&___onEnter_9, value);
	}

	inline static int32_t get_offset_of_onExit_10() { return static_cast<int32_t>(offsetof(ZGUIEvent_t983099765, ___onExit_10)); }
	inline UIPointerEvent_t1914654541 * get_onExit_10() const { return ___onExit_10; }
	inline UIPointerEvent_t1914654541 ** get_address_of_onExit_10() { return &___onExit_10; }
	inline void set_onExit_10(UIPointerEvent_t1914654541 * value)
	{
		___onExit_10 = value;
		Il2CppCodeGenWriteBarrier(&___onExit_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
