#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.Transform
struct Transform_t3600365921;
// System.Collections.Generic.List`1<ZGGame.IRender>
struct List_1_t4029533902;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ZGGame.View>>
struct Dictionary_2_t1610035306;
// System.Collections.Generic.Dictionary`2<System.String,ZGGame.View>
struct Dictionary_2_t137960564;
// System.Collections.Generic.Dictionary`2<System.String,ZGGame.Controller>
struct Dictionary_2_t28838347;
// System.Collections.Generic.Dictionary`2<System.String,ZGGame.Model>
struct Dictionary_2_t1522356056;
// ZGGame.EventCallback
struct EventCallback_t832368971;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.MVC
struct  MVC_t87461340  : public Il2CppObject
{
public:

public:
};

struct MVC_t87461340_StaticFields
{
public:
	// UnityEngine.Transform ZGGame.MVC::_renderStore
	Transform_t3600365921 * ____renderStore_0;
	// System.Collections.Generic.List`1<ZGGame.IRender> ZGGame.MVC::renderViewList
	List_1_t4029533902 * ___renderViewList_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ZGGame.View>> ZGGame.MVC::recyleRenderList
	Dictionary_2_t1610035306 * ___recyleRenderList_2;
	// System.Collections.Generic.Dictionary`2<System.String,ZGGame.View> ZGGame.MVC::viewDic
	Dictionary_2_t137960564 * ___viewDic_3;
	// System.Collections.Generic.Dictionary`2<System.String,ZGGame.Controller> ZGGame.MVC::controllerDic
	Dictionary_2_t28838347 * ___controllerDic_4;
	// System.Collections.Generic.Dictionary`2<System.String,ZGGame.Model> ZGGame.MVC::modelDic
	Dictionary_2_t1522356056 * ___modelDic_5;
	// ZGGame.EventCallback ZGGame.MVC::<>f__mg$cache0
	EventCallback_t832368971 * ___U3CU3Ef__mgU24cache0_6;

public:
	inline static int32_t get_offset_of__renderStore_0() { return static_cast<int32_t>(offsetof(MVC_t87461340_StaticFields, ____renderStore_0)); }
	inline Transform_t3600365921 * get__renderStore_0() const { return ____renderStore_0; }
	inline Transform_t3600365921 ** get_address_of__renderStore_0() { return &____renderStore_0; }
	inline void set__renderStore_0(Transform_t3600365921 * value)
	{
		____renderStore_0 = value;
		Il2CppCodeGenWriteBarrier(&____renderStore_0, value);
	}

	inline static int32_t get_offset_of_renderViewList_1() { return static_cast<int32_t>(offsetof(MVC_t87461340_StaticFields, ___renderViewList_1)); }
	inline List_1_t4029533902 * get_renderViewList_1() const { return ___renderViewList_1; }
	inline List_1_t4029533902 ** get_address_of_renderViewList_1() { return &___renderViewList_1; }
	inline void set_renderViewList_1(List_1_t4029533902 * value)
	{
		___renderViewList_1 = value;
		Il2CppCodeGenWriteBarrier(&___renderViewList_1, value);
	}

	inline static int32_t get_offset_of_recyleRenderList_2() { return static_cast<int32_t>(offsetof(MVC_t87461340_StaticFields, ___recyleRenderList_2)); }
	inline Dictionary_2_t1610035306 * get_recyleRenderList_2() const { return ___recyleRenderList_2; }
	inline Dictionary_2_t1610035306 ** get_address_of_recyleRenderList_2() { return &___recyleRenderList_2; }
	inline void set_recyleRenderList_2(Dictionary_2_t1610035306 * value)
	{
		___recyleRenderList_2 = value;
		Il2CppCodeGenWriteBarrier(&___recyleRenderList_2, value);
	}

	inline static int32_t get_offset_of_viewDic_3() { return static_cast<int32_t>(offsetof(MVC_t87461340_StaticFields, ___viewDic_3)); }
	inline Dictionary_2_t137960564 * get_viewDic_3() const { return ___viewDic_3; }
	inline Dictionary_2_t137960564 ** get_address_of_viewDic_3() { return &___viewDic_3; }
	inline void set_viewDic_3(Dictionary_2_t137960564 * value)
	{
		___viewDic_3 = value;
		Il2CppCodeGenWriteBarrier(&___viewDic_3, value);
	}

	inline static int32_t get_offset_of_controllerDic_4() { return static_cast<int32_t>(offsetof(MVC_t87461340_StaticFields, ___controllerDic_4)); }
	inline Dictionary_2_t28838347 * get_controllerDic_4() const { return ___controllerDic_4; }
	inline Dictionary_2_t28838347 ** get_address_of_controllerDic_4() { return &___controllerDic_4; }
	inline void set_controllerDic_4(Dictionary_2_t28838347 * value)
	{
		___controllerDic_4 = value;
		Il2CppCodeGenWriteBarrier(&___controllerDic_4, value);
	}

	inline static int32_t get_offset_of_modelDic_5() { return static_cast<int32_t>(offsetof(MVC_t87461340_StaticFields, ___modelDic_5)); }
	inline Dictionary_2_t1522356056 * get_modelDic_5() const { return ___modelDic_5; }
	inline Dictionary_2_t1522356056 ** get_address_of_modelDic_5() { return &___modelDic_5; }
	inline void set_modelDic_5(Dictionary_2_t1522356056 * value)
	{
		___modelDic_5 = value;
		Il2CppCodeGenWriteBarrier(&___modelDic_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_6() { return static_cast<int32_t>(offsetof(MVC_t87461340_StaticFields, ___U3CU3Ef__mgU24cache0_6)); }
	inline EventCallback_t832368971 * get_U3CU3Ef__mgU24cache0_6() const { return ___U3CU3Ef__mgU24cache0_6; }
	inline EventCallback_t832368971 ** get_address_of_U3CU3Ef__mgU24cache0_6() { return &___U3CU3Ef__mgU24cache0_6; }
	inline void set_U3CU3Ef__mgU24cache0_6(EventCallback_t832368971 * value)
	{
		___U3CU3Ef__mgU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
