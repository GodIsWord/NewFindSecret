#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.UI.Text
struct Text_t1901882714;
// System.Text.StringBuilder
struct StringBuilder_t1712802186;
// System.String
struct String_t;
// ZGGame.AppBase
struct AppBase_t2538546352;
// ZGGame.LoadManager
struct LoadManager_t3558014046;
// System.Collections.Generic.List`1<ZGGame.IUpdate>
struct List_1_t2850249854;
// System.Collections.Generic.Dictionary`2<ZGGame.IUpdate,System.Int32>
struct Dictionary_2_t3914051585;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.Main
struct  Main_t1605830478  : public Il2CppObject
{
public:

public:
};

struct Main_t1605830478_StaticFields
{
public:
	// UnityEngine.UI.Text ZGGame.Main::debugText
	Text_t1901882714 * ___debugText_0;
	// System.Boolean ZGGame.Main::_isRelease
	bool ____isRelease_1;
	// System.Text.StringBuilder ZGGame.Main::sb
	StringBuilder_t1712802186 * ___sb_2;
	// System.Single ZGGame.Main::_runTime
	float ____runTime_3;
	// System.Int32 ZGGame.Main::_runFrame
	int32_t ____runFrame_4;
	// System.String ZGGame.Main::_currentScene
	String_t* ____currentScene_5;
	// ZGGame.AppBase ZGGame.Main::_appBase
	AppBase_t2538546352 * ____appBase_6;
	// ZGGame.LoadManager ZGGame.Main::_loader
	LoadManager_t3558014046 * ____loader_7;
	// System.Collections.Generic.List`1<ZGGame.IUpdate> ZGGame.Main::processList
	List_1_t2850249854 * ___processList_8;
	// System.Collections.Generic.Dictionary`2<ZGGame.IUpdate,System.Int32> ZGGame.Main::processFrameDic
	Dictionary_2_t3914051585 * ___processFrameDic_9;

public:
	inline static int32_t get_offset_of_debugText_0() { return static_cast<int32_t>(offsetof(Main_t1605830478_StaticFields, ___debugText_0)); }
	inline Text_t1901882714 * get_debugText_0() const { return ___debugText_0; }
	inline Text_t1901882714 ** get_address_of_debugText_0() { return &___debugText_0; }
	inline void set_debugText_0(Text_t1901882714 * value)
	{
		___debugText_0 = value;
		Il2CppCodeGenWriteBarrier(&___debugText_0, value);
	}

	inline static int32_t get_offset_of__isRelease_1() { return static_cast<int32_t>(offsetof(Main_t1605830478_StaticFields, ____isRelease_1)); }
	inline bool get__isRelease_1() const { return ____isRelease_1; }
	inline bool* get_address_of__isRelease_1() { return &____isRelease_1; }
	inline void set__isRelease_1(bool value)
	{
		____isRelease_1 = value;
	}

	inline static int32_t get_offset_of_sb_2() { return static_cast<int32_t>(offsetof(Main_t1605830478_StaticFields, ___sb_2)); }
	inline StringBuilder_t1712802186 * get_sb_2() const { return ___sb_2; }
	inline StringBuilder_t1712802186 ** get_address_of_sb_2() { return &___sb_2; }
	inline void set_sb_2(StringBuilder_t1712802186 * value)
	{
		___sb_2 = value;
		Il2CppCodeGenWriteBarrier(&___sb_2, value);
	}

	inline static int32_t get_offset_of__runTime_3() { return static_cast<int32_t>(offsetof(Main_t1605830478_StaticFields, ____runTime_3)); }
	inline float get__runTime_3() const { return ____runTime_3; }
	inline float* get_address_of__runTime_3() { return &____runTime_3; }
	inline void set__runTime_3(float value)
	{
		____runTime_3 = value;
	}

	inline static int32_t get_offset_of__runFrame_4() { return static_cast<int32_t>(offsetof(Main_t1605830478_StaticFields, ____runFrame_4)); }
	inline int32_t get__runFrame_4() const { return ____runFrame_4; }
	inline int32_t* get_address_of__runFrame_4() { return &____runFrame_4; }
	inline void set__runFrame_4(int32_t value)
	{
		____runFrame_4 = value;
	}

	inline static int32_t get_offset_of__currentScene_5() { return static_cast<int32_t>(offsetof(Main_t1605830478_StaticFields, ____currentScene_5)); }
	inline String_t* get__currentScene_5() const { return ____currentScene_5; }
	inline String_t** get_address_of__currentScene_5() { return &____currentScene_5; }
	inline void set__currentScene_5(String_t* value)
	{
		____currentScene_5 = value;
		Il2CppCodeGenWriteBarrier(&____currentScene_5, value);
	}

	inline static int32_t get_offset_of__appBase_6() { return static_cast<int32_t>(offsetof(Main_t1605830478_StaticFields, ____appBase_6)); }
	inline AppBase_t2538546352 * get__appBase_6() const { return ____appBase_6; }
	inline AppBase_t2538546352 ** get_address_of__appBase_6() { return &____appBase_6; }
	inline void set__appBase_6(AppBase_t2538546352 * value)
	{
		____appBase_6 = value;
		Il2CppCodeGenWriteBarrier(&____appBase_6, value);
	}

	inline static int32_t get_offset_of__loader_7() { return static_cast<int32_t>(offsetof(Main_t1605830478_StaticFields, ____loader_7)); }
	inline LoadManager_t3558014046 * get__loader_7() const { return ____loader_7; }
	inline LoadManager_t3558014046 ** get_address_of__loader_7() { return &____loader_7; }
	inline void set__loader_7(LoadManager_t3558014046 * value)
	{
		____loader_7 = value;
		Il2CppCodeGenWriteBarrier(&____loader_7, value);
	}

	inline static int32_t get_offset_of_processList_8() { return static_cast<int32_t>(offsetof(Main_t1605830478_StaticFields, ___processList_8)); }
	inline List_1_t2850249854 * get_processList_8() const { return ___processList_8; }
	inline List_1_t2850249854 ** get_address_of_processList_8() { return &___processList_8; }
	inline void set_processList_8(List_1_t2850249854 * value)
	{
		___processList_8 = value;
		Il2CppCodeGenWriteBarrier(&___processList_8, value);
	}

	inline static int32_t get_offset_of_processFrameDic_9() { return static_cast<int32_t>(offsetof(Main_t1605830478_StaticFields, ___processFrameDic_9)); }
	inline Dictionary_2_t3914051585 * get_processFrameDic_9() const { return ___processFrameDic_9; }
	inline Dictionary_2_t3914051585 ** get_address_of_processFrameDic_9() { return &___processFrameDic_9; }
	inline void set_processFrameDic_9(Dictionary_2_t3914051585 * value)
	{
		___processFrameDic_9 = value;
		Il2CppCodeGenWriteBarrier(&___processFrameDic_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
