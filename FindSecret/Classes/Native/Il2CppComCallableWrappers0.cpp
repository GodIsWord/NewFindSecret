#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "vm/CachedCCWBase.h"
#include "System_Drawing_System_Drawing_ComIStreamWrapper1385077908.h"
#include "mscorlib_System_Runtime_InteropServices_ComTypes_I2767586507.h"
#include "mscorlib_System_IntPtr840150181.h"
#include "mscorlib_System_Byte1134296376.h"
#include "mscorlib_System_String1847450689.h"
#include "mscorlib_System_Runtime_InteropServices_ComTypes_S1180006254.h"

// System.Drawing.ComIStreamWrapper
struct ComIStreamWrapper_t1385077908;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Runtime.InteropServices.ComTypes.IStream
struct IStream_t2767586507;
// System.Runtime.InteropServices.ComTypes.STATSTG
struct STATSTG_t1180006254;
extern Il2CppClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t IStream_Read_m2173113126_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_Read_m3900757847_MetadataUsageId;
extern const uint32_t IStream_Write_m2708670267_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_Write_m3977093213_MetadataUsageId;
extern const uint32_t IStream_Seek_m2787654105_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_Seek_m2459492809_MetadataUsageId;
extern const uint32_t IStream_SetSize_m4060809076_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_SetSize_m1046488586_MetadataUsageId;
extern Il2CppClass* Il2CppComObject_il2cpp_TypeInfo_var;
extern const uint32_t IStream_CopyTo_m636604614_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_CopyTo_m3713567387_MetadataUsageId;
extern const uint32_t IStream_Commit_m913773162_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_Commit_m446718944_MetadataUsageId;
extern const uint32_t IStream_Revert_m196104801_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_Revert_m1024066710_MetadataUsageId;
extern const uint32_t IStream_LockRegion_m628848789_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_LockRegion_m59846326_MetadataUsageId;
extern const uint32_t IStream_UnlockRegion_m2931786434_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_UnlockRegion_m2991939866_MetadataUsageId;
extern const uint32_t IStream_Stat_m3782840290_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_Stat_m744069259_MetadataUsageId;
struct STATSTG_t1180006254_marshaled_com;
struct STATSTG_t1180006254;;
struct STATSTG_t1180006254_marshaled_com;;
extern const uint32_t IStream_Clone_m2216188370_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_Clone_m3032928720_MetadataUsageId;

// System.Byte[]
struct ByteU5BU5D_t4116647657  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};

extern "C" void STATSTG_t1180006254_marshal_com(const STATSTG_t1180006254& unmarshaled, STATSTG_t1180006254_marshaled_com& marshaled);
extern "C" void STATSTG_t1180006254_marshal_com_back(const STATSTG_t1180006254_marshaled_com& marshaled, STATSTG_t1180006254& unmarshaled);
extern "C" void STATSTG_t1180006254_marshal_com_cleanup(STATSTG_t1180006254_marshaled_com& marshaled);


// System.Void System.Drawing.ComIStreamWrapper::Read(System.Byte[],System.Int32,System.IntPtr)
extern "C"  void ComIStreamWrapper_Read_m3900757847 (ComIStreamWrapper_t1385077908 * __this, ByteU5BU5D_t4116647657* ___pv0, int32_t ___cb1, IntPtr_t ___pcbRead2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Drawing.ComIStreamWrapper::Write(System.Byte[],System.Int32,System.IntPtr)
extern "C"  void ComIStreamWrapper_Write_m3977093213 (ComIStreamWrapper_t1385077908 * __this, ByteU5BU5D_t4116647657* ___pv0, int32_t ___cb1, IntPtr_t ___pcbWritten2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Drawing.ComIStreamWrapper::Seek(System.Int64,System.Int32,System.IntPtr)
extern "C"  void ComIStreamWrapper_Seek_m2459492809 (ComIStreamWrapper_t1385077908 * __this, int64_t ___dlibMove0, int32_t ___dwOrigin1, IntPtr_t ___plibNewPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Drawing.ComIStreamWrapper::SetSize(System.Int64)
extern "C"  void ComIStreamWrapper_SetSize_m1046488586 (ComIStreamWrapper_t1385077908 * __this, int64_t ___libNewSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Drawing.ComIStreamWrapper::CopyTo(System.Runtime.InteropServices.ComTypes.IStream,System.Int64,System.IntPtr,System.IntPtr)
extern "C"  void ComIStreamWrapper_CopyTo_m3713567387 (ComIStreamWrapper_t1385077908 * __this, Il2CppObject * ___pstm0, int64_t ___cb1, IntPtr_t ___pcbRead2, IntPtr_t ___pcbWritten3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Drawing.ComIStreamWrapper::Commit(System.Int32)
extern "C"  void ComIStreamWrapper_Commit_m446718944 (ComIStreamWrapper_t1385077908 * __this, int32_t ___grfCommitFlags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Drawing.ComIStreamWrapper::Revert()
extern "C"  void ComIStreamWrapper_Revert_m1024066710 (ComIStreamWrapper_t1385077908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Drawing.ComIStreamWrapper::LockRegion(System.Int64,System.Int64,System.Int32)
extern "C"  void ComIStreamWrapper_LockRegion_m59846326 (ComIStreamWrapper_t1385077908 * __this, int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Drawing.ComIStreamWrapper::UnlockRegion(System.Int64,System.Int64,System.Int32)
extern "C"  void ComIStreamWrapper_UnlockRegion_m2991939866 (ComIStreamWrapper_t1385077908 * __this, int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Drawing.ComIStreamWrapper::Stat(System.Runtime.InteropServices.ComTypes.STATSTG&,System.Int32)
extern "C"  void ComIStreamWrapper_Stat_m744069259 (ComIStreamWrapper_t1385077908 * __this, STATSTG_t1180006254 * ___pstatstg0, int32_t ___grfStatFlag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Drawing.ComIStreamWrapper::Clone(System.Runtime.InteropServices.ComTypes.IStream&)
extern "C"  void ComIStreamWrapper_Clone_m3032928720 (ComIStreamWrapper_t1385077908 * __this, Il2CppObject ** ___ppstm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// COM Callable Wrapper for System.Drawing.ComIStreamWrapper
struct ComIStreamWrapper_t1385077908_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ComIStreamWrapper_t1385077908_ComCallableWrapper>, IStream_t2767586507
{
	inline ComIStreamWrapper_t1385077908_ComCallableWrapper(Il2CppObject* obj) : il2cpp::vm::CachedCCWBase<ComIStreamWrapper_t1385077908_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IStream_t2767586507::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IStream_t2767586507*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		*iidCount = 0;
		*iids = NULL;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Read_m2173113126(uint8_t* ___pv0, int32_t ___cb1, intptr_t ___pcbRead2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IStream_Read_m2173113126_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_Read_m3900757847_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Marshaling of parameter '___pv0' to managed representation
		ByteU5BU5D_t4116647657* ____pv0_empty = NULL;
		if (___pv0 != NULL)
		{
			____pv0_empty = reinterpret_cast<ByteU5BU5D_t4116647657*>(SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, ___cb1));
		}

		// Marshaling of parameter '___pcbRead2' to managed representation
		IntPtr_t ____pcbRead2_unmarshaled;
		____pcbRead2_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(___pcbRead2)));

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1385077908 * __thisValue = (ComIStreamWrapper_t1385077908 *)GetManagedObjectInline();
			ComIStreamWrapper_Read_m3900757847(__thisValue, ____pv0_empty, ___cb1, ____pcbRead2_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pv0' back from managed representation
		if (____pv0_empty != NULL)
		{
			int32_t _____pv0_empty_Length = (____pv0_empty)->max_length;
			for (int32_t i = 0; i < _____pv0_empty_Length; i++)
			{
				(___pv0)[i] = (____pv0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Write_m2708670267(uint8_t* ___pv0, int32_t ___cb1, intptr_t ___pcbWritten2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IStream_Write_m2708670267_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_Write_m3977093213_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Marshaling of parameter '___pv0' to managed representation
		ByteU5BU5D_t4116647657* ____pv0_unmarshaled = NULL;
		if (___pv0 != NULL)
		{
			____pv0_unmarshaled = reinterpret_cast<ByteU5BU5D_t4116647657*>(SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, ___cb1));
			for (int32_t i = 0; i < ___cb1; i++)
			{
				(____pv0_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___pv0)[i]);
			}
		}

		// Marshaling of parameter '___pcbWritten2' to managed representation
		IntPtr_t ____pcbWritten2_unmarshaled;
		____pcbWritten2_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(___pcbWritten2)));

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1385077908 * __thisValue = (ComIStreamWrapper_t1385077908 *)GetManagedObjectInline();
			ComIStreamWrapper_Write_m3977093213(__thisValue, ____pv0_unmarshaled, ___cb1, ____pcbWritten2_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Seek_m2787654105(int64_t ___dlibMove0, int32_t ___dwOrigin1, intptr_t ___plibNewPosition2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IStream_Seek_m2787654105_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_Seek_m2459492809_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Marshaling of parameter '___plibNewPosition2' to managed representation
		IntPtr_t ____plibNewPosition2_unmarshaled;
		____plibNewPosition2_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(___plibNewPosition2)));

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1385077908 * __thisValue = (ComIStreamWrapper_t1385077908 *)GetManagedObjectInline();
			ComIStreamWrapper_Seek_m2459492809(__thisValue, ___dlibMove0, ___dwOrigin1, ____plibNewPosition2_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_SetSize_m4060809076(int64_t ___libNewSize0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IStream_SetSize_m4060809076_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_SetSize_m1046488586_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1385077908 * __thisValue = (ComIStreamWrapper_t1385077908 *)GetManagedObjectInline();
			ComIStreamWrapper_SetSize_m1046488586(__thisValue, ___libNewSize0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_CopyTo_m636604614(IStream_t2767586507* ___pstm0, int64_t ___cb1, intptr_t ___pcbRead2, intptr_t ___pcbWritten3) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IStream_CopyTo_m636604614_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_CopyTo_m3713567387_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Marshaling of parameter '___pstm0' to managed representation
		Il2CppObject * ____pstm0_unmarshaled = NULL;
		if (___pstm0 != NULL)
		{
			____pstm0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<Il2CppObject>(___pstm0, Il2CppComObject_il2cpp_TypeInfo_var);
		}
		else
		{
			____pstm0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___pcbRead2' to managed representation
		IntPtr_t ____pcbRead2_unmarshaled;
		____pcbRead2_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(___pcbRead2)));

		// Marshaling of parameter '___pcbWritten3' to managed representation
		IntPtr_t ____pcbWritten3_unmarshaled;
		____pcbWritten3_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(___pcbWritten3)));

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1385077908 * __thisValue = (ComIStreamWrapper_t1385077908 *)GetManagedObjectInline();
			ComIStreamWrapper_CopyTo_m3713567387(__thisValue, ____pstm0_unmarshaled, ___cb1, ____pcbRead2_unmarshaled, ____pcbWritten3_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Commit_m913773162(int32_t ___grfCommitFlags0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IStream_Commit_m913773162_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_Commit_m446718944_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1385077908 * __thisValue = (ComIStreamWrapper_t1385077908 *)GetManagedObjectInline();
			ComIStreamWrapper_Commit_m446718944(__thisValue, ___grfCommitFlags0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Revert_m196104801() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IStream_Revert_m196104801_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_Revert_m1024066710_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1385077908 * __thisValue = (ComIStreamWrapper_t1385077908 *)GetManagedObjectInline();
			ComIStreamWrapper_Revert_m1024066710(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_LockRegion_m628848789(int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IStream_LockRegion_m628848789_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_LockRegion_m59846326_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1385077908 * __thisValue = (ComIStreamWrapper_t1385077908 *)GetManagedObjectInline();
			ComIStreamWrapper_LockRegion_m59846326(__thisValue, ___libOffset0, ___cb1, ___dwLockType2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_UnlockRegion_m2931786434(int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IStream_UnlockRegion_m2931786434_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_UnlockRegion_m2991939866_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1385077908 * __thisValue = (ComIStreamWrapper_t1385077908 *)GetManagedObjectInline();
			ComIStreamWrapper_UnlockRegion_m2991939866(__thisValue, ___libOffset0, ___cb1, ___dwLockType2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Stat_m3782840290(STATSTG_t1180006254_marshaled_com* ___pstatstg0, int32_t ___grfStatFlag1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IStream_Stat_m3782840290_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_Stat_m744069259_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}


		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Marshaling of parameter '___pstatstg0' to managed representation
		STATSTG_t1180006254  ____pstatstg0_empty;
		memset(&____pstatstg0_empty, 0, sizeof(____pstatstg0_empty));

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1385077908 * __thisValue = (ComIStreamWrapper_t1385077908 *)GetManagedObjectInline();
			ComIStreamWrapper_Stat_m744069259(__thisValue, &____pstatstg0_empty, ___grfStatFlag1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pstatstg0' back from managed representation
		STATSTG_t1180006254_marshal_com(____pstatstg0_empty, *___pstatstg0);

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Clone_m2216188370(IStream_t2767586507** ___ppstm0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_method (IStream_Clone_m2216188370_CCW_ComIStreamWrapper_t1385077908_ComCallableWrapper_ComIStreamWrapper_Clone_m3032928720_MetadataUsageId);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

		// Marshaling of parameter '___ppstm0' to managed representation
		Il2CppObject * ____ppstm0_empty = NULL;

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1385077908 * __thisValue = (ComIStreamWrapper_t1385077908 *)GetManagedObjectInline();
			ComIStreamWrapper_Clone_m3032928720(__thisValue, &____ppstm0_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppstm0' back from managed representation
		if (____ppstm0_empty != NULL)
		{
			if ((____ppstm0_empty)->klass->is_import_or_windows_runtime)
			{
				il2cpp_hresult_t hr = ((Il2CppComObject *)____ppstm0_empty)->identity->QueryInterface(IStream_t2767586507::IID, reinterpret_cast<void**>(&*___ppstm0));
				il2cpp_codegen_com_raise_exception_if_failed(hr, true);
			}
			else
			{
				*___ppstm0 = il2cpp_codegen_com_get_or_create_ccw<IStream_t2767586507>(____ppstm0_empty);
			}
		}
		else
		{
			*___ppstm0 = NULL;
		}

		return IL2CPP_S_OK;
	}
};

extern "C" Il2CppIUnknown* CreateComCallableWrapperFor_ComIStreamWrapper_t1385077908(Il2CppObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ComIStreamWrapper_t1385077908_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ComIStreamWrapper_t1385077908_ComCallableWrapper(obj));
}
