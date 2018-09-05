#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.WWW
struct WWW_t3688466362;
// System.String
struct String_t;
// ZGGame.LoadData
struct LoadData_t4179347895;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.UrlLoader
struct  UrlLoader_t4028468321  : public Il2CppObject
{
public:
	// UnityEngine.WWW ZGGame.UrlLoader::w
	WWW_t3688466362 * ___w_0;
	// System.String ZGGame.UrlLoader::path
	String_t* ___path_1;
	// System.Int32 ZGGame.UrlLoader::portrait
	int32_t ___portrait_2;
	// ZGGame.LoadData ZGGame.UrlLoader::data
	LoadData_t4179347895 * ___data_3;

public:
	inline static int32_t get_offset_of_w_0() { return static_cast<int32_t>(offsetof(UrlLoader_t4028468321, ___w_0)); }
	inline WWW_t3688466362 * get_w_0() const { return ___w_0; }
	inline WWW_t3688466362 ** get_address_of_w_0() { return &___w_0; }
	inline void set_w_0(WWW_t3688466362 * value)
	{
		___w_0 = value;
		Il2CppCodeGenWriteBarrier(&___w_0, value);
	}

	inline static int32_t get_offset_of_path_1() { return static_cast<int32_t>(offsetof(UrlLoader_t4028468321, ___path_1)); }
	inline String_t* get_path_1() const { return ___path_1; }
	inline String_t** get_address_of_path_1() { return &___path_1; }
	inline void set_path_1(String_t* value)
	{
		___path_1 = value;
		Il2CppCodeGenWriteBarrier(&___path_1, value);
	}

	inline static int32_t get_offset_of_portrait_2() { return static_cast<int32_t>(offsetof(UrlLoader_t4028468321, ___portrait_2)); }
	inline int32_t get_portrait_2() const { return ___portrait_2; }
	inline int32_t* get_address_of_portrait_2() { return &___portrait_2; }
	inline void set_portrait_2(int32_t value)
	{
		___portrait_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(UrlLoader_t4028468321, ___data_3)); }
	inline LoadData_t4179347895 * get_data_3() const { return ___data_3; }
	inline LoadData_t4179347895 ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(LoadData_t4179347895 * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier(&___data_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
