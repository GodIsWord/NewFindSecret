#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// Data/MarkerImageData
struct MarkerImageData_t382148372;
// System.Collections.Generic.List`1<Point>
struct List_1_t2510128191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Data
struct  Data_t3042077292  : public Il2CppObject
{
public:
	// Data/MarkerImageData Data::markerImageData
	MarkerImageData_t382148372 * ___markerImageData_0;
	// System.Collections.Generic.List`1<Point> Data::arHotData
	List_1_t2510128191 * ___arHotData_1;

public:
	inline static int32_t get_offset_of_markerImageData_0() { return static_cast<int32_t>(offsetof(Data_t3042077292, ___markerImageData_0)); }
	inline MarkerImageData_t382148372 * get_markerImageData_0() const { return ___markerImageData_0; }
	inline MarkerImageData_t382148372 ** get_address_of_markerImageData_0() { return &___markerImageData_0; }
	inline void set_markerImageData_0(MarkerImageData_t382148372 * value)
	{
		___markerImageData_0 = value;
		Il2CppCodeGenWriteBarrier(&___markerImageData_0, value);
	}

	inline static int32_t get_offset_of_arHotData_1() { return static_cast<int32_t>(offsetof(Data_t3042077292, ___arHotData_1)); }
	inline List_1_t2510128191 * get_arHotData_1() const { return ___arHotData_1; }
	inline List_1_t2510128191 ** get_address_of_arHotData_1() { return &___arHotData_1; }
	inline void set_arHotData_1(List_1_t2510128191 * value)
	{
		___arHotData_1 = value;
		Il2CppCodeGenWriteBarrier(&___arHotData_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
