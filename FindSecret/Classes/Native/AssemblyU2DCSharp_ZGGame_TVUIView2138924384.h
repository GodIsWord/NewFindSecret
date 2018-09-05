#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ZGGame_UIView1697530740.h"

// System.Collections.Generic.List`1<ZGGame.TVUIView>
struct List_1_t3610999126;
// ZGGame.ITVOperate
struct ITVOperate_t3382085453;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.TVUIView
struct  TVUIView_t2138924384  : public UIView_t1697530740
{
public:
	// System.Boolean ZGGame.TVUIView::_isHot
	bool ____isHot_13;
	// ZGGame.ITVOperate ZGGame.TVUIView::currentTVOperate
	Il2CppObject * ___currentTVOperate_14;
	// System.Int32 ZGGame.TVUIView::TVOperateCount
	int32_t ___TVOperateCount_15;

public:
	inline static int32_t get_offset_of__isHot_13() { return static_cast<int32_t>(offsetof(TVUIView_t2138924384, ____isHot_13)); }
	inline bool get__isHot_13() const { return ____isHot_13; }
	inline bool* get_address_of__isHot_13() { return &____isHot_13; }
	inline void set__isHot_13(bool value)
	{
		____isHot_13 = value;
	}

	inline static int32_t get_offset_of_currentTVOperate_14() { return static_cast<int32_t>(offsetof(TVUIView_t2138924384, ___currentTVOperate_14)); }
	inline Il2CppObject * get_currentTVOperate_14() const { return ___currentTVOperate_14; }
	inline Il2CppObject ** get_address_of_currentTVOperate_14() { return &___currentTVOperate_14; }
	inline void set_currentTVOperate_14(Il2CppObject * value)
	{
		___currentTVOperate_14 = value;
		Il2CppCodeGenWriteBarrier(&___currentTVOperate_14, value);
	}

	inline static int32_t get_offset_of_TVOperateCount_15() { return static_cast<int32_t>(offsetof(TVUIView_t2138924384, ___TVOperateCount_15)); }
	inline int32_t get_TVOperateCount_15() const { return ___TVOperateCount_15; }
	inline int32_t* get_address_of_TVOperateCount_15() { return &___TVOperateCount_15; }
	inline void set_TVOperateCount_15(int32_t value)
	{
		___TVOperateCount_15 = value;
	}
};

struct TVUIView_t2138924384_StaticFields
{
public:
	// System.Collections.Generic.List`1<ZGGame.TVUIView> ZGGame.TVUIView::_hotViewList
	List_1_t3610999126 * ____hotViewList_12;

public:
	inline static int32_t get_offset_of__hotViewList_12() { return static_cast<int32_t>(offsetof(TVUIView_t2138924384_StaticFields, ____hotViewList_12)); }
	inline List_1_t3610999126 * get__hotViewList_12() const { return ____hotViewList_12; }
	inline List_1_t3610999126 ** get_address_of__hotViewList_12() { return &____hotViewList_12; }
	inline void set__hotViewList_12(List_1_t3610999126 * value)
	{
		____hotViewList_12 = value;
		Il2CppCodeGenWriteBarrier(&____hotViewList_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
