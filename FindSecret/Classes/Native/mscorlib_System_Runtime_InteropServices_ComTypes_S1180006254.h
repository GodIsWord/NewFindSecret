#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "mscorlib_System_Runtime_InteropServices_ComTypes_F1200622595.h"
#include "mscorlib_System_Guid3193532887.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.STATSTG
struct  STATSTG_t1180006254 
{
public:
	// System.String System.Runtime.InteropServices.ComTypes.STATSTG::pwcsName
	String_t* ___pwcsName_0;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::type
	int32_t ___type_1;
	// System.Int64 System.Runtime.InteropServices.ComTypes.STATSTG::cbSize
	int64_t ___cbSize_2;
	// System.Runtime.InteropServices.ComTypes.FILETIME System.Runtime.InteropServices.ComTypes.STATSTG::mtime
	FILETIME_t1200622595  ___mtime_3;
	// System.Runtime.InteropServices.ComTypes.FILETIME System.Runtime.InteropServices.ComTypes.STATSTG::ctime
	FILETIME_t1200622595  ___ctime_4;
	// System.Runtime.InteropServices.ComTypes.FILETIME System.Runtime.InteropServices.ComTypes.STATSTG::atime
	FILETIME_t1200622595  ___atime_5;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::grfMode
	int32_t ___grfMode_6;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::grfLocksSupported
	int32_t ___grfLocksSupported_7;
	// System.Guid System.Runtime.InteropServices.ComTypes.STATSTG::clsid
	Guid_t  ___clsid_8;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::grfStateBits
	int32_t ___grfStateBits_9;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::reserved
	int32_t ___reserved_10;

public:
	inline static int32_t get_offset_of_pwcsName_0() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___pwcsName_0)); }
	inline String_t* get_pwcsName_0() const { return ___pwcsName_0; }
	inline String_t** get_address_of_pwcsName_0() { return &___pwcsName_0; }
	inline void set_pwcsName_0(String_t* value)
	{
		___pwcsName_0 = value;
		Il2CppCodeGenWriteBarrier(&___pwcsName_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_cbSize_2() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___cbSize_2)); }
	inline int64_t get_cbSize_2() const { return ___cbSize_2; }
	inline int64_t* get_address_of_cbSize_2() { return &___cbSize_2; }
	inline void set_cbSize_2(int64_t value)
	{
		___cbSize_2 = value;
	}

	inline static int32_t get_offset_of_mtime_3() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___mtime_3)); }
	inline FILETIME_t1200622595  get_mtime_3() const { return ___mtime_3; }
	inline FILETIME_t1200622595 * get_address_of_mtime_3() { return &___mtime_3; }
	inline void set_mtime_3(FILETIME_t1200622595  value)
	{
		___mtime_3 = value;
	}

	inline static int32_t get_offset_of_ctime_4() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___ctime_4)); }
	inline FILETIME_t1200622595  get_ctime_4() const { return ___ctime_4; }
	inline FILETIME_t1200622595 * get_address_of_ctime_4() { return &___ctime_4; }
	inline void set_ctime_4(FILETIME_t1200622595  value)
	{
		___ctime_4 = value;
	}

	inline static int32_t get_offset_of_atime_5() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___atime_5)); }
	inline FILETIME_t1200622595  get_atime_5() const { return ___atime_5; }
	inline FILETIME_t1200622595 * get_address_of_atime_5() { return &___atime_5; }
	inline void set_atime_5(FILETIME_t1200622595  value)
	{
		___atime_5 = value;
	}

	inline static int32_t get_offset_of_grfMode_6() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___grfMode_6)); }
	inline int32_t get_grfMode_6() const { return ___grfMode_6; }
	inline int32_t* get_address_of_grfMode_6() { return &___grfMode_6; }
	inline void set_grfMode_6(int32_t value)
	{
		___grfMode_6 = value;
	}

	inline static int32_t get_offset_of_grfLocksSupported_7() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___grfLocksSupported_7)); }
	inline int32_t get_grfLocksSupported_7() const { return ___grfLocksSupported_7; }
	inline int32_t* get_address_of_grfLocksSupported_7() { return &___grfLocksSupported_7; }
	inline void set_grfLocksSupported_7(int32_t value)
	{
		___grfLocksSupported_7 = value;
	}

	inline static int32_t get_offset_of_clsid_8() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___clsid_8)); }
	inline Guid_t  get_clsid_8() const { return ___clsid_8; }
	inline Guid_t * get_address_of_clsid_8() { return &___clsid_8; }
	inline void set_clsid_8(Guid_t  value)
	{
		___clsid_8 = value;
	}

	inline static int32_t get_offset_of_grfStateBits_9() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___grfStateBits_9)); }
	inline int32_t get_grfStateBits_9() const { return ___grfStateBits_9; }
	inline int32_t* get_address_of_grfStateBits_9() { return &___grfStateBits_9; }
	inline void set_grfStateBits_9(int32_t value)
	{
		___grfStateBits_9 = value;
	}

	inline static int32_t get_offset_of_reserved_10() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___reserved_10)); }
	inline int32_t get_reserved_10() const { return ___reserved_10; }
	inline int32_t* get_address_of_reserved_10() { return &___reserved_10; }
	inline void set_reserved_10(int32_t value)
	{
		___reserved_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.ComTypes.STATSTG
struct STATSTG_t1180006254_marshaled_pinvoke
{
	Il2CppChar* ___pwcsName_0;
	int32_t ___type_1;
	int64_t ___cbSize_2;
	FILETIME_t1200622595  ___mtime_3;
	FILETIME_t1200622595  ___ctime_4;
	FILETIME_t1200622595  ___atime_5;
	int32_t ___grfMode_6;
	int32_t ___grfLocksSupported_7;
	Guid_t  ___clsid_8;
	int32_t ___grfStateBits_9;
	int32_t ___reserved_10;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.ComTypes.STATSTG
struct STATSTG_t1180006254_marshaled_com
{
	Il2CppChar* ___pwcsName_0;
	int32_t ___type_1;
	int64_t ___cbSize_2;
	FILETIME_t1200622595  ___mtime_3;
	FILETIME_t1200622595  ___ctime_4;
	FILETIME_t1200622595  ___atime_5;
	int32_t ___grfMode_6;
	int32_t ___grfLocksSupported_7;
	Guid_t  ___clsid_8;
	int32_t ___grfStateBits_9;
	int32_t ___reserved_10;
};
