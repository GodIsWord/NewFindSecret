#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.String
struct String_t;
// Data
struct Data_t3042077292;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DTarget
struct  DTarget_t299473616  : public Il2CppObject
{
public:
	// System.String DTarget::markerID
	String_t* ___markerID_0;
	// System.String DTarget::code
	String_t* ___code_1;
	// System.String DTarget::flag
	String_t* ___flag_2;
	// System.String DTarget::msg
	String_t* ___msg_3;
	// Data DTarget::data
	Data_t3042077292 * ___data_4;

public:
	inline static int32_t get_offset_of_markerID_0() { return static_cast<int32_t>(offsetof(DTarget_t299473616, ___markerID_0)); }
	inline String_t* get_markerID_0() const { return ___markerID_0; }
	inline String_t** get_address_of_markerID_0() { return &___markerID_0; }
	inline void set_markerID_0(String_t* value)
	{
		___markerID_0 = value;
		Il2CppCodeGenWriteBarrier(&___markerID_0, value);
	}

	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(DTarget_t299473616, ___code_1)); }
	inline String_t* get_code_1() const { return ___code_1; }
	inline String_t** get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(String_t* value)
	{
		___code_1 = value;
		Il2CppCodeGenWriteBarrier(&___code_1, value);
	}

	inline static int32_t get_offset_of_flag_2() { return static_cast<int32_t>(offsetof(DTarget_t299473616, ___flag_2)); }
	inline String_t* get_flag_2() const { return ___flag_2; }
	inline String_t** get_address_of_flag_2() { return &___flag_2; }
	inline void set_flag_2(String_t* value)
	{
		___flag_2 = value;
		Il2CppCodeGenWriteBarrier(&___flag_2, value);
	}

	inline static int32_t get_offset_of_msg_3() { return static_cast<int32_t>(offsetof(DTarget_t299473616, ___msg_3)); }
	inline String_t* get_msg_3() const { return ___msg_3; }
	inline String_t** get_address_of_msg_3() { return &___msg_3; }
	inline void set_msg_3(String_t* value)
	{
		___msg_3 = value;
		Il2CppCodeGenWriteBarrier(&___msg_3, value);
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(DTarget_t299473616, ___data_4)); }
	inline Data_t3042077292 * get_data_4() const { return ___data_4; }
	inline Data_t3042077292 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(Data_t3042077292 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier(&___data_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
