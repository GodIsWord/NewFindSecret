#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ZGGame_Controller243582048.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoadController
struct  RoadController_t1635704659  : public Controller_t243582048
{
public:
	// System.String RoadController::url
	String_t* ___url_2;
	// System.String RoadController::strPoint
	String_t* ___strPoint_3;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(RoadController_t1635704659, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier(&___url_2, value);
	}

	inline static int32_t get_offset_of_strPoint_3() { return static_cast<int32_t>(offsetof(RoadController_t1635704659, ___strPoint_3)); }
	inline String_t* get_strPoint_3() const { return ___strPoint_3; }
	inline String_t** get_address_of_strPoint_3() { return &___strPoint_3; }
	inline void set_strPoint_3(String_t* value)
	{
		___strPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___strPoint_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
