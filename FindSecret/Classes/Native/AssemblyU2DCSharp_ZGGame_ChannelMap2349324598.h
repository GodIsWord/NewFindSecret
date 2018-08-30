#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t3104781730;
// System.Collections.Generic.Dictionary`2<System.String,ZGGame.Channel>
struct Dictionary_2_t1312883081;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.ChannelMap
struct  ChannelMap_t2349324598  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,ZGGame.Channel> ZGGame.ChannelMap::mappedChannels
	Dictionary_2_t1312883081 * ___mappedChannels_1;

public:
	inline static int32_t get_offset_of_mappedChannels_1() { return static_cast<int32_t>(offsetof(ChannelMap_t2349324598, ___mappedChannels_1)); }
	inline Dictionary_2_t1312883081 * get_mappedChannels_1() const { return ___mappedChannels_1; }
	inline Dictionary_2_t1312883081 ** get_address_of_mappedChannels_1() { return &___mappedChannels_1; }
	inline void set_mappedChannels_1(Dictionary_2_t1312883081 * value)
	{
		___mappedChannels_1 = value;
		Il2CppCodeGenWriteBarrier(&___mappedChannels_1, value);
	}
};

struct ChannelMap_t2349324598_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> ZGGame.ChannelMap::mapping
	Dictionary_2_t3104781730 * ___mapping_0;

public:
	inline static int32_t get_offset_of_mapping_0() { return static_cast<int32_t>(offsetof(ChannelMap_t2349324598_StaticFields, ___mapping_0)); }
	inline Dictionary_2_t3104781730 * get_mapping_0() const { return ___mapping_0; }
	inline Dictionary_2_t3104781730 ** get_address_of_mapping_0() { return &___mapping_0; }
	inline void set_mapping_0(Dictionary_2_t3104781730 * value)
	{
		___mapping_0 = value;
		Il2CppCodeGenWriteBarrier(&___mapping_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
