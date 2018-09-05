#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t3684241368;
// System.Configuration.Internal.IInternalConfigRoot
struct IInternalConfigRoot_t1704923096;
// System.Object[]
struct ObjectU5BU5D_t2843939325;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.InternalConfigurationSystem
struct  InternalConfigurationSystem_t844406905  : public Il2CppObject
{
public:
	// System.Configuration.Internal.IInternalConfigHost System.Configuration.InternalConfigurationSystem::host
	Il2CppObject * ___host_0;
	// System.Configuration.Internal.IInternalConfigRoot System.Configuration.InternalConfigurationSystem::root
	Il2CppObject * ___root_1;
	// System.Object[] System.Configuration.InternalConfigurationSystem::hostInitParams
	ObjectU5BU5D_t2843939325* ___hostInitParams_2;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(InternalConfigurationSystem_t844406905, ___host_0)); }
	inline Il2CppObject * get_host_0() const { return ___host_0; }
	inline Il2CppObject ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(Il2CppObject * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier(&___host_0, value);
	}

	inline static int32_t get_offset_of_root_1() { return static_cast<int32_t>(offsetof(InternalConfigurationSystem_t844406905, ___root_1)); }
	inline Il2CppObject * get_root_1() const { return ___root_1; }
	inline Il2CppObject ** get_address_of_root_1() { return &___root_1; }
	inline void set_root_1(Il2CppObject * value)
	{
		___root_1 = value;
		Il2CppCodeGenWriteBarrier(&___root_1, value);
	}

	inline static int32_t get_offset_of_hostInitParams_2() { return static_cast<int32_t>(offsetof(InternalConfigurationSystem_t844406905, ___hostInitParams_2)); }
	inline ObjectU5BU5D_t2843939325* get_hostInitParams_2() const { return ___hostInitParams_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of_hostInitParams_2() { return &___hostInitParams_2; }
	inline void set_hostInitParams_2(ObjectU5BU5D_t2843939325* value)
	{
		___hostInitParams_2 = value;
		Il2CppCodeGenWriteBarrier(&___hostInitParams_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
