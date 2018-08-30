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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Data/MarkerImageData
struct  MarkerImageData_t382148372  : public Il2CppObject
{
public:
	// System.Double Data/MarkerImageData::height
	double ___height_0;
	// System.Double Data/MarkerImageData::width
	double ___width_1;
	// System.String Data/MarkerImageData::markerImagePath
	String_t* ___markerImagePath_2;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(MarkerImageData_t382148372, ___height_0)); }
	inline double get_height_0() const { return ___height_0; }
	inline double* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(double value)
	{
		___height_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(MarkerImageData_t382148372, ___width_1)); }
	inline double get_width_1() const { return ___width_1; }
	inline double* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(double value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_markerImagePath_2() { return static_cast<int32_t>(offsetof(MarkerImageData_t382148372, ___markerImagePath_2)); }
	inline String_t* get_markerImagePath_2() const { return ___markerImagePath_2; }
	inline String_t** get_address_of_markerImagePath_2() { return &___markerImagePath_2; }
	inline void set_markerImagePath_2(String_t* value)
	{
		___markerImagePath_2 = value;
		Il2CppCodeGenWriteBarrier(&___markerImagePath_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
