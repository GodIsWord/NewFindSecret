#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1729680289;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDAutomata
struct  DTDAutomata_t781538777  : public Il2CppObject
{
public:
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDAutomata::root
	DTDObjectModel_t1729680289 * ___root_0;

public:
	inline static int32_t get_offset_of_root_0() { return static_cast<int32_t>(offsetof(DTDAutomata_t781538777, ___root_0)); }
	inline DTDObjectModel_t1729680289 * get_root_0() const { return ___root_0; }
	inline DTDObjectModel_t1729680289 ** get_address_of_root_0() { return &___root_0; }
	inline void set_root_0(DTDObjectModel_t1729680289 * value)
	{
		___root_0 = value;
		Il2CppCodeGenWriteBarrier(&___root_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
