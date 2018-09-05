#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "UnityEngine_UnityEngine_LogType73765434.h"

// System.String
struct String_t;
// UnityEngine.ILogHandler
struct ILogHandler_t2464711877;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Logger
struct  Logger_t274032455  : public Il2CppObject
{
public:
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	Il2CppObject * ___U3ClogHandlerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_3;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ClogHandlerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Logger_t274032455, ___U3ClogHandlerU3Ek__BackingField_2)); }
	inline Il2CppObject * get_U3ClogHandlerU3Ek__BackingField_2() const { return ___U3ClogHandlerU3Ek__BackingField_2; }
	inline Il2CppObject ** get_address_of_U3ClogHandlerU3Ek__BackingField_2() { return &___U3ClogHandlerU3Ek__BackingField_2; }
	inline void set_U3ClogHandlerU3Ek__BackingField_2(Il2CppObject * value)
	{
		___U3ClogHandlerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3ClogHandlerU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3ClogEnabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Logger_t274032455, ___U3ClogEnabledU3Ek__BackingField_3)); }
	inline bool get_U3ClogEnabledU3Ek__BackingField_3() const { return ___U3ClogEnabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3ClogEnabledU3Ek__BackingField_3() { return &___U3ClogEnabledU3Ek__BackingField_3; }
	inline void set_U3ClogEnabledU3Ek__BackingField_3(bool value)
	{
		___U3ClogEnabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CfilterLogTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Logger_t274032455, ___U3CfilterLogTypeU3Ek__BackingField_4)); }
	inline int32_t get_U3CfilterLogTypeU3Ek__BackingField_4() const { return ___U3CfilterLogTypeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CfilterLogTypeU3Ek__BackingField_4() { return &___U3CfilterLogTypeU3Ek__BackingField_4; }
	inline void set_U3CfilterLogTypeU3Ek__BackingField_4(int32_t value)
	{
		___U3CfilterLogTypeU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
