#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_t4104246196;
// UnityEngine.Application/AdvertisingIdentifierCallback
struct AdvertisingIdentifierCallback_t586914420;
// UnityEngine.Application/LogCallback
struct LogCallback_t3588208630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application
struct  Application_t1852185770  : public Il2CppObject
{
public:

public:
};

struct Application_t1852185770_StaticFields
{
public:
	// UnityEngine.Application/LowMemoryCallback UnityEngine.Application::lowMemory
	LowMemoryCallback_t4104246196 * ___lowMemory_0;
	// UnityEngine.Application/AdvertisingIdentifierCallback UnityEngine.Application::OnAdvertisingIdentifierCallback
	AdvertisingIdentifierCallback_t586914420 * ___OnAdvertisingIdentifierCallback_1;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t3588208630 * ___s_LogCallbackHandler_2;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t3588208630 * ___s_LogCallbackHandlerThreaded_3;
	// UnityEngine.Application/LogCallback modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngine.Application::s_RegisterLogCallbackDeprecated
	LogCallback_t3588208630 * ___s_RegisterLogCallbackDeprecated_4;

public:
	inline static int32_t get_offset_of_lowMemory_0() { return static_cast<int32_t>(offsetof(Application_t1852185770_StaticFields, ___lowMemory_0)); }
	inline LowMemoryCallback_t4104246196 * get_lowMemory_0() const { return ___lowMemory_0; }
	inline LowMemoryCallback_t4104246196 ** get_address_of_lowMemory_0() { return &___lowMemory_0; }
	inline void set_lowMemory_0(LowMemoryCallback_t4104246196 * value)
	{
		___lowMemory_0 = value;
		Il2CppCodeGenWriteBarrier(&___lowMemory_0, value);
	}

	inline static int32_t get_offset_of_OnAdvertisingIdentifierCallback_1() { return static_cast<int32_t>(offsetof(Application_t1852185770_StaticFields, ___OnAdvertisingIdentifierCallback_1)); }
	inline AdvertisingIdentifierCallback_t586914420 * get_OnAdvertisingIdentifierCallback_1() const { return ___OnAdvertisingIdentifierCallback_1; }
	inline AdvertisingIdentifierCallback_t586914420 ** get_address_of_OnAdvertisingIdentifierCallback_1() { return &___OnAdvertisingIdentifierCallback_1; }
	inline void set_OnAdvertisingIdentifierCallback_1(AdvertisingIdentifierCallback_t586914420 * value)
	{
		___OnAdvertisingIdentifierCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdvertisingIdentifierCallback_1, value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandler_2() { return static_cast<int32_t>(offsetof(Application_t1852185770_StaticFields, ___s_LogCallbackHandler_2)); }
	inline LogCallback_t3588208630 * get_s_LogCallbackHandler_2() const { return ___s_LogCallbackHandler_2; }
	inline LogCallback_t3588208630 ** get_address_of_s_LogCallbackHandler_2() { return &___s_LogCallbackHandler_2; }
	inline void set_s_LogCallbackHandler_2(LogCallback_t3588208630 * value)
	{
		___s_LogCallbackHandler_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_LogCallbackHandler_2, value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandlerThreaded_3() { return static_cast<int32_t>(offsetof(Application_t1852185770_StaticFields, ___s_LogCallbackHandlerThreaded_3)); }
	inline LogCallback_t3588208630 * get_s_LogCallbackHandlerThreaded_3() const { return ___s_LogCallbackHandlerThreaded_3; }
	inline LogCallback_t3588208630 ** get_address_of_s_LogCallbackHandlerThreaded_3() { return &___s_LogCallbackHandlerThreaded_3; }
	inline void set_s_LogCallbackHandlerThreaded_3(LogCallback_t3588208630 * value)
	{
		___s_LogCallbackHandlerThreaded_3 = value;
		Il2CppCodeGenWriteBarrier(&___s_LogCallbackHandlerThreaded_3, value);
	}

	inline static int32_t get_offset_of_s_RegisterLogCallbackDeprecated_4() { return static_cast<int32_t>(offsetof(Application_t1852185770_StaticFields, ___s_RegisterLogCallbackDeprecated_4)); }
	inline LogCallback_t3588208630 * get_s_RegisterLogCallbackDeprecated_4() const { return ___s_RegisterLogCallbackDeprecated_4; }
	inline LogCallback_t3588208630 ** get_address_of_s_RegisterLogCallbackDeprecated_4() { return &___s_RegisterLogCallbackDeprecated_4; }
	inline void set_s_RegisterLogCallbackDeprecated_4(LogCallback_t3588208630 * value)
	{
		___s_RegisterLogCallbackDeprecated_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_RegisterLogCallbackDeprecated_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
