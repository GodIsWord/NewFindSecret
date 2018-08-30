#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_InternalC969478808.h"
#include "System_Configuration_System_Configuration_Configur2700976468.h"

// System.Configuration.ExeConfigurationFileMap
struct ExeConfigurationFileMap_t3751566101;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ExeConfigurationHost
struct  ExeConfigurationHost_t3079009552  : public InternalConfigurationHost_t969478808
{
public:
	// System.Configuration.ExeConfigurationFileMap System.Configuration.ExeConfigurationHost::map
	ExeConfigurationFileMap_t3751566101 * ___map_0;
	// System.Configuration.ConfigurationUserLevel System.Configuration.ExeConfigurationHost::level
	int32_t ___level_1;

public:
	inline static int32_t get_offset_of_map_0() { return static_cast<int32_t>(offsetof(ExeConfigurationHost_t3079009552, ___map_0)); }
	inline ExeConfigurationFileMap_t3751566101 * get_map_0() const { return ___map_0; }
	inline ExeConfigurationFileMap_t3751566101 ** get_address_of_map_0() { return &___map_0; }
	inline void set_map_0(ExeConfigurationFileMap_t3751566101 * value)
	{
		___map_0 = value;
		Il2CppCodeGenWriteBarrier(&___map_0, value);
	}

	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(ExeConfigurationHost_t3079009552, ___level_1)); }
	inline int32_t get_level_1() const { return ___level_1; }
	inline int32_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(int32_t value)
	{
		___level_1 = value;
	}
};

struct ExeConfigurationHost_t3079009552_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Configuration.ExeConfigurationHost::<>f__switch$map0
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map0_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_2() { return static_cast<int32_t>(offsetof(ExeConfigurationHost_t3079009552_StaticFields, ___U3CU3Ef__switchU24map0_2)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map0_2() const { return ___U3CU3Ef__switchU24map0_2; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map0_2() { return &___U3CU3Ef__switchU24map0_2; }
	inline void set_U3CU3Ef__switchU24map0_2(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
