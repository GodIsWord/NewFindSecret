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
// UnityEngine.AssetBundle
struct AssetBundle_t1153907252;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.LoadData
struct  LoadData_t4179347895  : public Il2CppObject
{
public:
	// System.String ZGGame.LoadData::fileName
	String_t* ___fileName_0;
	// System.String ZGGame.LoadData::fileExt
	String_t* ___fileExt_1;
	// System.String ZGGame.LoadData::filePath
	String_t* ___filePath_2;
	// UnityEngine.AssetBundle ZGGame.LoadData::assetBundle
	AssetBundle_t1153907252 * ___assetBundle_3;
	// System.Byte[] ZGGame.LoadData::bytesData
	ByteU5BU5D_t4116647657* ___bytesData_4;
	// System.String ZGGame.LoadData::text
	String_t* ___text_5;
	// UnityEngine.Texture2D ZGGame.LoadData::texture
	Texture2D_t3840446185 * ___texture_6;
	// System.Boolean ZGGame.LoadData::isError
	bool ___isError_7;
	// System.String ZGGame.LoadData::errorMsg
	String_t* ___errorMsg_8;
	// System.Object ZGGame.LoadData::tag
	Il2CppObject * ___tag_9;

public:
	inline static int32_t get_offset_of_fileName_0() { return static_cast<int32_t>(offsetof(LoadData_t4179347895, ___fileName_0)); }
	inline String_t* get_fileName_0() const { return ___fileName_0; }
	inline String_t** get_address_of_fileName_0() { return &___fileName_0; }
	inline void set_fileName_0(String_t* value)
	{
		___fileName_0 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_0, value);
	}

	inline static int32_t get_offset_of_fileExt_1() { return static_cast<int32_t>(offsetof(LoadData_t4179347895, ___fileExt_1)); }
	inline String_t* get_fileExt_1() const { return ___fileExt_1; }
	inline String_t** get_address_of_fileExt_1() { return &___fileExt_1; }
	inline void set_fileExt_1(String_t* value)
	{
		___fileExt_1 = value;
		Il2CppCodeGenWriteBarrier(&___fileExt_1, value);
	}

	inline static int32_t get_offset_of_filePath_2() { return static_cast<int32_t>(offsetof(LoadData_t4179347895, ___filePath_2)); }
	inline String_t* get_filePath_2() const { return ___filePath_2; }
	inline String_t** get_address_of_filePath_2() { return &___filePath_2; }
	inline void set_filePath_2(String_t* value)
	{
		___filePath_2 = value;
		Il2CppCodeGenWriteBarrier(&___filePath_2, value);
	}

	inline static int32_t get_offset_of_assetBundle_3() { return static_cast<int32_t>(offsetof(LoadData_t4179347895, ___assetBundle_3)); }
	inline AssetBundle_t1153907252 * get_assetBundle_3() const { return ___assetBundle_3; }
	inline AssetBundle_t1153907252 ** get_address_of_assetBundle_3() { return &___assetBundle_3; }
	inline void set_assetBundle_3(AssetBundle_t1153907252 * value)
	{
		___assetBundle_3 = value;
		Il2CppCodeGenWriteBarrier(&___assetBundle_3, value);
	}

	inline static int32_t get_offset_of_bytesData_4() { return static_cast<int32_t>(offsetof(LoadData_t4179347895, ___bytesData_4)); }
	inline ByteU5BU5D_t4116647657* get_bytesData_4() const { return ___bytesData_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytesData_4() { return &___bytesData_4; }
	inline void set_bytesData_4(ByteU5BU5D_t4116647657* value)
	{
		___bytesData_4 = value;
		Il2CppCodeGenWriteBarrier(&___bytesData_4, value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(LoadData_t4179347895, ___text_5)); }
	inline String_t* get_text_5() const { return ___text_5; }
	inline String_t** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(String_t* value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier(&___text_5, value);
	}

	inline static int32_t get_offset_of_texture_6() { return static_cast<int32_t>(offsetof(LoadData_t4179347895, ___texture_6)); }
	inline Texture2D_t3840446185 * get_texture_6() const { return ___texture_6; }
	inline Texture2D_t3840446185 ** get_address_of_texture_6() { return &___texture_6; }
	inline void set_texture_6(Texture2D_t3840446185 * value)
	{
		___texture_6 = value;
		Il2CppCodeGenWriteBarrier(&___texture_6, value);
	}

	inline static int32_t get_offset_of_isError_7() { return static_cast<int32_t>(offsetof(LoadData_t4179347895, ___isError_7)); }
	inline bool get_isError_7() const { return ___isError_7; }
	inline bool* get_address_of_isError_7() { return &___isError_7; }
	inline void set_isError_7(bool value)
	{
		___isError_7 = value;
	}

	inline static int32_t get_offset_of_errorMsg_8() { return static_cast<int32_t>(offsetof(LoadData_t4179347895, ___errorMsg_8)); }
	inline String_t* get_errorMsg_8() const { return ___errorMsg_8; }
	inline String_t** get_address_of_errorMsg_8() { return &___errorMsg_8; }
	inline void set_errorMsg_8(String_t* value)
	{
		___errorMsg_8 = value;
		Il2CppCodeGenWriteBarrier(&___errorMsg_8, value);
	}

	inline static int32_t get_offset_of_tag_9() { return static_cast<int32_t>(offsetof(LoadData_t4179347895, ___tag_9)); }
	inline Il2CppObject * get_tag_9() const { return ___tag_9; }
	inline Il2CppObject ** get_address_of_tag_9() { return &___tag_9; }
	inline void set_tag_9(Il2CppObject * value)
	{
		___tag_9 = value;
		Il2CppCodeGenWriteBarrier(&___tag_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
