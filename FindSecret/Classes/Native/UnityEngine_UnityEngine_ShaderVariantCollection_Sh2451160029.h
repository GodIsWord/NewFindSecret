#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "UnityEngine_UnityEngine_Rendering_PassType3153371375.h"

// UnityEngine.Shader
struct Shader_t4151988712;
// System.String[]
struct StringU5BU5D_t1281789340;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ShaderVariantCollection/ShaderVariant
struct  ShaderVariant_t2451160029 
{
public:
	// UnityEngine.Shader UnityEngine.ShaderVariantCollection/ShaderVariant::shader
	Shader_t4151988712 * ___shader_0;
	// UnityEngine.Rendering.PassType UnityEngine.ShaderVariantCollection/ShaderVariant::passType
	int32_t ___passType_1;
	// System.String[] UnityEngine.ShaderVariantCollection/ShaderVariant::keywords
	StringU5BU5D_t1281789340* ___keywords_2;

public:
	inline static int32_t get_offset_of_shader_0() { return static_cast<int32_t>(offsetof(ShaderVariant_t2451160029, ___shader_0)); }
	inline Shader_t4151988712 * get_shader_0() const { return ___shader_0; }
	inline Shader_t4151988712 ** get_address_of_shader_0() { return &___shader_0; }
	inline void set_shader_0(Shader_t4151988712 * value)
	{
		___shader_0 = value;
		Il2CppCodeGenWriteBarrier(&___shader_0, value);
	}

	inline static int32_t get_offset_of_passType_1() { return static_cast<int32_t>(offsetof(ShaderVariant_t2451160029, ___passType_1)); }
	inline int32_t get_passType_1() const { return ___passType_1; }
	inline int32_t* get_address_of_passType_1() { return &___passType_1; }
	inline void set_passType_1(int32_t value)
	{
		___passType_1 = value;
	}

	inline static int32_t get_offset_of_keywords_2() { return static_cast<int32_t>(offsetof(ShaderVariant_t2451160029, ___keywords_2)); }
	inline StringU5BU5D_t1281789340* get_keywords_2() const { return ___keywords_2; }
	inline StringU5BU5D_t1281789340** get_address_of_keywords_2() { return &___keywords_2; }
	inline void set_keywords_2(StringU5BU5D_t1281789340* value)
	{
		___keywords_2 = value;
		Il2CppCodeGenWriteBarrier(&___keywords_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ShaderVariantCollection/ShaderVariant
struct ShaderVariant_t2451160029_marshaled_pinvoke
{
	Shader_t4151988712 * ___shader_0;
	int32_t ___passType_1;
	char** ___keywords_2;
};
// Native definition for COM marshalling of UnityEngine.ShaderVariantCollection/ShaderVariant
struct ShaderVariant_t2451160029_marshaled_com
{
	Shader_t4151988712 * ___shader_0;
	int32_t ___passType_1;
	Il2CppChar** ___keywords_2;
};
