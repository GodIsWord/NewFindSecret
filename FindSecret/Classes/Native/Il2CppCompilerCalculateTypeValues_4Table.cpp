#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_FileShare3553318550.h"
#include "mscorlib_System_IO_FileStream4292183065.h"
#include "mscorlib_System_IO_FileStream_ReadDelegate714865915.h"
#include "mscorlib_System_IO_FileStream_WriteDelegate4270993571.h"
#include "mscorlib_System_IO_FileStreamAsyncResult2422587232.h"
#include "mscorlib_System_IO_FileSystemInfo3745885336.h"
#include "mscorlib_System_IO_IOException4088381929.h"
#include "mscorlib_System_IO_MemoryStream94973147.h"
#include "mscorlib_System_IO_MonoIO2601436415.h"
#include "mscorlib_System_IO_MonoIOError367894402.h"
#include "mscorlib_System_IO_MonoFileType221779374.h"
#include "mscorlib_System_IO_MonoIOStat592533987.h"
#include "mscorlib_System_IO_Path1605229823.h"
#include "mscorlib_System_IO_PathTooLongException2919094560.h"
#include "mscorlib_System_IO_SearchPattern3793128359.h"
#include "mscorlib_System_IO_SeekOrigin1441174344.h"
#include "mscorlib_System_IO_Stream1273022909.h"
#include "mscorlib_System_IO_NullStream1684893697.h"
#include "mscorlib_System_IO_StreamAsyncResult780248512.h"
#include "mscorlib_System_IO_StreamReader4009935899.h"
#include "mscorlib_System_IO_StreamReader_NullStreamReader3364671800.h"
#include "mscorlib_System_IO_StreamWriter1266378904.h"
#include "mscorlib_System_IO_StringReader3465604688.h"
#include "mscorlib_System_IO_StringWriter802263757.h"
#include "mscorlib_System_IO_TextReader283511965.h"
#include "mscorlib_System_IO_TextReader_NullTextReader763622204.h"
#include "mscorlib_System_IO_SynchronizedReader1163115775.h"
#include "mscorlib_System_IO_TextWriter3478189236.h"
#include "mscorlib_System_IO_TextWriter_NullTextWriter1377692031.h"
#include "mscorlib_System_IO_SynchronizedWriter1722853220.h"
#include "mscorlib_System_IO_UnexceptionalStreamReader2154476246.h"
#include "mscorlib_System_IO_UnexceptionalStreamWriter2539306459.h"
#include "mscorlib_System_IO_UnmanagedMemoryStream4234117669.h"
#include "mscorlib_System_Reflection_AmbiguousMatchException566690781.h"
#include "mscorlib_System_Reflection_Assembly4102432799.h"
#include "mscorlib_System_Reflection_Assembly_ResolveEventHo2120639521.h"
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute909257512.h"
#include "mscorlib_System_Reflection_AssemblyConfigurationAt2167450097.h"
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribu836190902.h"
#include "mscorlib_System_Reflection_AssemblyDefaultAliasAtt2176720766.h"
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribu176441654.h"
#include "mscorlib_System_Reflection_AssemblyDescriptionAttr1046996844.h"
#include "mscorlib_System_Reflection_AssemblyFileVersionAttrib14927972.h"
#include "mscorlib_System_Reflection_AssemblyInformationalVe3037764991.h"
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribut2825689142.h"
#include "mscorlib_System_Reflection_AssemblyName270931938.h"
#include "mscorlib_System_Reflection_AssemblyNameFlags3675421470.h"
#include "mscorlib_System_Reflection_AssemblyProductAttribut1000945320.h"
#include "mscorlib_System_Reflection_AssemblyTitleAttribute1901133402.h"
#include "mscorlib_System_Reflection_AssemblyTrademarkAttrib3598190473.h"
#include "mscorlib_System_Reflection_Binder2999457153.h"
#include "mscorlib_System_Reflection_Binder_Default2456596213.h"
#include "mscorlib_System_Reflection_BindingFlags2721792723.h"
#include "mscorlib_System_Reflection_CallingConventions2253234531.h"
#include "mscorlib_System_Reflection_ConstructorInfo5769829.h"
#include "mscorlib_System_Reflection_CustomAttributeData1084486650.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgu287865710.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArg2723150157.h"
#include "mscorlib_System_Reflection_EventAttributes1153671773.h"
#include "mscorlib_System_Reflection_EventInfo3642520662.h"
#include "mscorlib_System_Reflection_EventInfo_AddEventAdapt1787725097.h"
#include "mscorlib_System_Reflection_FieldAttributes400321159.h"
#include "mscorlib_System_Reflection_FieldInfo4181702585.h"
#include "mscorlib_System_Reflection_LocalVariableInfo2426779395.h"
#include "mscorlib_System_Reflection_MemberInfoSerialization1943730831.h"
#include "mscorlib_System_Reflection_MemberTypes3790569052.h"
#include "mscorlib_System_Reflection_MethodAttributes2366443849.h"
#include "mscorlib_System_Reflection_MethodBase609368412.h"
#include "mscorlib_System_Reflection_MethodImplAttributes3646023817.h"
#include "mscorlib_System_Reflection_MethodInfo1877626248.h"
#include "mscorlib_System_Reflection_Missing508514592.h"
#include "mscorlib_System_Reflection_Module2987026101.h"
#include "mscorlib_System_Reflection_MonoGenericMethod752814324.h"
#include "mscorlib_System_Reflection_MonoGenericCMethod4239028627.h"
#include "mscorlib_System_Reflection_MonoEventInfo346866618.h"
#include "mscorlib_System_Reflection_MonoEvent2104542870.h"
#include "mscorlib_System_Reflection_MonoField2693658913.h"
#include "mscorlib_System_Reflection_MonoMethodInfo1248819020.h"
#include "mscorlib_System_Reflection_MonoMethod2368096842.h"
#include "mscorlib_System_Reflection_MonoCMethod3191134373.h"
#include "mscorlib_System_Reflection_MonoPropertyInfo3087356066.h"
#include "mscorlib_System_Reflection_PInfo446749821.h"
#include "mscorlib_System_Reflection_MonoProperty187683439.h"
#include "mscorlib_System_Reflection_MonoProperty_GetterAdap2155025054.h"
#include "mscorlib_System_Reflection_ParameterAttributes1826424051.h"
#include "mscorlib_System_Reflection_ParameterInfo1861056598.h"
#include "mscorlib_System_Reflection_ParameterModifier1461694466.h"
#include "mscorlib_System_Reflection_Pointer2088917139.h"
#include "mscorlib_System_Reflection_ProcessorArchitecture305929193.h"
#include "mscorlib_System_Reflection_PropertyAttributes3388002996.h"
#include "mscorlib_System_Reflection_PropertyInfo687341951.h"
#include "mscorlib_System_Reflection_ResourceAttributes3997964906.h"
#include "mscorlib_System_Reflection_StrongNameKeyPair3411219591.h"
#include "mscorlib_System_Reflection_TargetException3386045725.h"
#include "mscorlib_System_Reflection_TargetInvocationExcepti4266643902.h"
#include "mscorlib_System_Reflection_TargetParameterCountExc1216617239.h"
#include "mscorlib_System_Reflection_TypeAttributes113483779.h"
#include "mscorlib_System_Reflection_TypeDelegator3617470028.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize400 = { sizeof (FileShare_t3553318550)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable400[7] = 
{
	FileShare_t3553318550::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize401 = { sizeof (FileStream_t4292183065), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable401[14] = 
{
	FileStream_t4292183065::get_offset_of_access_2(),
	FileStream_t4292183065::get_offset_of_owner_3(),
	FileStream_t4292183065::get_offset_of_async_4(),
	FileStream_t4292183065::get_offset_of_canseek_5(),
	FileStream_t4292183065::get_offset_of_append_startpos_6(),
	FileStream_t4292183065::get_offset_of_anonymous_7(),
	FileStream_t4292183065::get_offset_of_buf_8(),
	FileStream_t4292183065::get_offset_of_buf_size_9(),
	FileStream_t4292183065::get_offset_of_buf_length_10(),
	FileStream_t4292183065::get_offset_of_buf_offset_11(),
	FileStream_t4292183065::get_offset_of_buf_dirty_12(),
	FileStream_t4292183065::get_offset_of_buf_start_13(),
	FileStream_t4292183065::get_offset_of_name_14(),
	FileStream_t4292183065::get_offset_of_handle_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize402 = { sizeof (ReadDelegate_t714865915), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize403 = { sizeof (WriteDelegate_t4270993571), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize404 = { sizeof (FileStreamAsyncResult_t2422587232), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable404[8] = 
{
	FileStreamAsyncResult_t2422587232::get_offset_of_state_0(),
	FileStreamAsyncResult_t2422587232::get_offset_of_completed_1(),
	FileStreamAsyncResult_t2422587232::get_offset_of_wh_2(),
	FileStreamAsyncResult_t2422587232::get_offset_of_cb_3(),
	FileStreamAsyncResult_t2422587232::get_offset_of_Count_4(),
	FileStreamAsyncResult_t2422587232::get_offset_of_OriginalCount_5(),
	FileStreamAsyncResult_t2422587232::get_offset_of_BytesRead_6(),
	FileStreamAsyncResult_t2422587232::get_offset_of_realcb_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize405 = { sizeof (FileSystemInfo_t3745885336), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable405[4] = 
{
	FileSystemInfo_t3745885336::get_offset_of_FullPath_1(),
	FileSystemInfo_t3745885336::get_offset_of_OriginalPath_2(),
	FileSystemInfo_t3745885336::get_offset_of_stat_3(),
	FileSystemInfo_t3745885336::get_offset_of_valid_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize406 = { sizeof (IOException_t4088381929), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize407 = { sizeof (MemoryStream_t94973147), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable407[10] = 
{
	MemoryStream_t94973147::get_offset_of_canWrite_2(),
	MemoryStream_t94973147::get_offset_of_allowGetBuffer_3(),
	MemoryStream_t94973147::get_offset_of_capacity_4(),
	MemoryStream_t94973147::get_offset_of_length_5(),
	MemoryStream_t94973147::get_offset_of_internalBuffer_6(),
	MemoryStream_t94973147::get_offset_of_initialIndex_7(),
	MemoryStream_t94973147::get_offset_of_expandable_8(),
	MemoryStream_t94973147::get_offset_of_streamClosed_9(),
	MemoryStream_t94973147::get_offset_of_position_10(),
	MemoryStream_t94973147::get_offset_of_dirty_bytes_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize408 = { sizeof (MonoIO_t2601436415), -1, sizeof(MonoIO_t2601436415_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable408[2] = 
{
	MonoIO_t2601436415_StaticFields::get_offset_of_InvalidFileAttributes_0(),
	MonoIO_t2601436415_StaticFields::get_offset_of_InvalidHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize409 = { sizeof (MonoIOError_t367894402)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable409[25] = 
{
	MonoIOError_t367894402::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize410 = { sizeof (MonoFileType_t221779374)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable410[6] = 
{
	MonoFileType_t221779374::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize411 = { sizeof (MonoIOStat_t592533987)+ sizeof (Il2CppObject), sizeof(MonoIOStat_t592533987_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable411[6] = 
{
	MonoIOStat_t592533987::get_offset_of_Name_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoIOStat_t592533987::get_offset_of_Attributes_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoIOStat_t592533987::get_offset_of_Length_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoIOStat_t592533987::get_offset_of_CreationTime_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoIOStat_t592533987::get_offset_of_LastAccessTime_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoIOStat_t592533987::get_offset_of_LastWriteTime_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize412 = { sizeof (Path_t1605229823), -1, sizeof(Path_t1605229823_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable412[8] = 
{
	Path_t1605229823_StaticFields::get_offset_of_InvalidPathChars_0(),
	Path_t1605229823_StaticFields::get_offset_of_AltDirectorySeparatorChar_1(),
	Path_t1605229823_StaticFields::get_offset_of_DirectorySeparatorChar_2(),
	Path_t1605229823_StaticFields::get_offset_of_PathSeparator_3(),
	Path_t1605229823_StaticFields::get_offset_of_DirectorySeparatorStr_4(),
	Path_t1605229823_StaticFields::get_offset_of_VolumeSeparatorChar_5(),
	Path_t1605229823_StaticFields::get_offset_of_PathSeparatorChars_6(),
	Path_t1605229823_StaticFields::get_offset_of_dirEqualsVolume_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize413 = { sizeof (PathTooLongException_t2919094560), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize414 = { sizeof (SearchPattern_t3793128359), -1, sizeof(SearchPattern_t3793128359_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable414[2] = 
{
	SearchPattern_t3793128359_StaticFields::get_offset_of_WildcardChars_0(),
	SearchPattern_t3793128359_StaticFields::get_offset_of_InvalidChars_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize415 = { sizeof (SeekOrigin_t1441174344)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable415[4] = 
{
	SeekOrigin_t1441174344::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize416 = { sizeof (Stream_t1273022909), -1, sizeof(Stream_t1273022909_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable416[1] = 
{
	Stream_t1273022909_StaticFields::get_offset_of_Null_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize417 = { sizeof (NullStream_t1684893697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize418 = { sizeof (StreamAsyncResult_t780248512), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable418[6] = 
{
	StreamAsyncResult_t780248512::get_offset_of_state_0(),
	StreamAsyncResult_t780248512::get_offset_of_completed_1(),
	StreamAsyncResult_t780248512::get_offset_of_done_2(),
	StreamAsyncResult_t780248512::get_offset_of_exc_3(),
	StreamAsyncResult_t780248512::get_offset_of_nbytes_4(),
	StreamAsyncResult_t780248512::get_offset_of_wh_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize419 = { sizeof (StreamReader_t4009935899), -1, sizeof(StreamReader_t4009935899_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable419[13] = 
{
	StreamReader_t4009935899::get_offset_of_input_buffer_2(),
	StreamReader_t4009935899::get_offset_of_decoded_buffer_3(),
	StreamReader_t4009935899::get_offset_of_decoded_count_4(),
	StreamReader_t4009935899::get_offset_of_pos_5(),
	StreamReader_t4009935899::get_offset_of_buffer_size_6(),
	StreamReader_t4009935899::get_offset_of_do_checks_7(),
	StreamReader_t4009935899::get_offset_of_encoding_8(),
	StreamReader_t4009935899::get_offset_of_decoder_9(),
	StreamReader_t4009935899::get_offset_of_base_stream_10(),
	StreamReader_t4009935899::get_offset_of_mayBlock_11(),
	StreamReader_t4009935899::get_offset_of_line_builder_12(),
	StreamReader_t4009935899_StaticFields::get_offset_of_Null_13(),
	StreamReader_t4009935899::get_offset_of_foundCR_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize420 = { sizeof (NullStreamReader_t3364671800), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize421 = { sizeof (StreamWriter_t1266378904), -1, sizeof(StreamWriter_t1266378904_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable421[10] = 
{
	StreamWriter_t1266378904::get_offset_of_internalEncoding_4(),
	StreamWriter_t1266378904::get_offset_of_internalStream_5(),
	StreamWriter_t1266378904::get_offset_of_iflush_6(),
	StreamWriter_t1266378904::get_offset_of_byte_buf_7(),
	StreamWriter_t1266378904::get_offset_of_byte_pos_8(),
	StreamWriter_t1266378904::get_offset_of_decode_buf_9(),
	StreamWriter_t1266378904::get_offset_of_decode_pos_10(),
	StreamWriter_t1266378904::get_offset_of_DisposedAlready_11(),
	StreamWriter_t1266378904::get_offset_of_preamble_done_12(),
	StreamWriter_t1266378904_StaticFields::get_offset_of_Null_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize422 = { sizeof (StringReader_t3465604688), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable422[3] = 
{
	StringReader_t3465604688::get_offset_of_source_2(),
	StringReader_t3465604688::get_offset_of_nextChar_3(),
	StringReader_t3465604688::get_offset_of_sourceLength_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize423 = { sizeof (StringWriter_t802263757), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable423[2] = 
{
	StringWriter_t802263757::get_offset_of_internalString_4(),
	StringWriter_t802263757::get_offset_of_disposed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize424 = { sizeof (TextReader_t283511965), -1, sizeof(TextReader_t283511965_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable424[1] = 
{
	TextReader_t283511965_StaticFields::get_offset_of_Null_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize425 = { sizeof (NullTextReader_t763622204), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize426 = { sizeof (SynchronizedReader_t1163115775), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable426[1] = 
{
	SynchronizedReader_t1163115775::get_offset_of_reader_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { sizeof (TextWriter_t3478189236), -1, sizeof(TextWriter_t3478189236_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable427[3] = 
{
	TextWriter_t3478189236::get_offset_of_CoreNewLine_1(),
	TextWriter_t3478189236::get_offset_of_internalFormatProvider_2(),
	TextWriter_t3478189236_StaticFields::get_offset_of_Null_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { sizeof (NullTextWriter_t1377692031), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { sizeof (SynchronizedWriter_t1722853220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable429[2] = 
{
	SynchronizedWriter_t1722853220::get_offset_of_writer_4(),
	SynchronizedWriter_t1722853220::get_offset_of_neverClose_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize430 = { sizeof (UnexceptionalStreamReader_t2154476246), -1, sizeof(UnexceptionalStreamReader_t2154476246_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable430[2] = 
{
	UnexceptionalStreamReader_t2154476246_StaticFields::get_offset_of_newline_15(),
	UnexceptionalStreamReader_t2154476246_StaticFields::get_offset_of_newlineChar_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize431 = { sizeof (UnexceptionalStreamWriter_t2539306459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize432 = { sizeof (UnmanagedMemoryStream_t4234117669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable432[8] = 
{
	UnmanagedMemoryStream_t4234117669::get_offset_of_length_2(),
	UnmanagedMemoryStream_t4234117669::get_offset_of_closed_3(),
	UnmanagedMemoryStream_t4234117669::get_offset_of_capacity_4(),
	UnmanagedMemoryStream_t4234117669::get_offset_of_fileaccess_5(),
	UnmanagedMemoryStream_t4234117669::get_offset_of_initial_pointer_6(),
	UnmanagedMemoryStream_t4234117669::get_offset_of_initial_position_7(),
	UnmanagedMemoryStream_t4234117669::get_offset_of_current_position_8(),
	UnmanagedMemoryStream_t4234117669::get_offset_of_Closed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize433 = { sizeof (AmbiguousMatchException_t566690781), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize434 = { sizeof (Assembly_t4102432799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable434[10] = 
{
	Assembly_t4102432799::get_offset_of__mono_assembly_0(),
	Assembly_t4102432799::get_offset_of_resolve_event_holder_1(),
	Assembly_t4102432799::get_offset_of__evidence_2(),
	Assembly_t4102432799::get_offset_of__minimum_3(),
	Assembly_t4102432799::get_offset_of__optional_4(),
	Assembly_t4102432799::get_offset_of__refuse_5(),
	Assembly_t4102432799::get_offset_of__granted_6(),
	Assembly_t4102432799::get_offset_of__denied_7(),
	Assembly_t4102432799::get_offset_of_fromByteArray_8(),
	Assembly_t4102432799::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize435 = { sizeof (ResolveEventHolder_t2120639521), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { sizeof (AssemblyCompanyAttribute_t909257512), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable436[1] = 
{
	AssemblyCompanyAttribute_t909257512::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { sizeof (AssemblyConfigurationAttribute_t2167450097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable437[1] = 
{
	AssemblyConfigurationAttribute_t2167450097::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { sizeof (AssemblyCopyrightAttribute_t836190902), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable438[1] = 
{
	AssemblyCopyrightAttribute_t836190902::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize439 = { sizeof (AssemblyDefaultAliasAttribute_t2176720766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable439[1] = 
{
	AssemblyDefaultAliasAttribute_t2176720766::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize440 = { sizeof (AssemblyDelaySignAttribute_t176441654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable440[1] = 
{
	AssemblyDelaySignAttribute_t176441654::get_offset_of_delay_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize441 = { sizeof (AssemblyDescriptionAttribute_t1046996844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable441[1] = 
{
	AssemblyDescriptionAttribute_t1046996844::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize442 = { sizeof (AssemblyFileVersionAttribute_t14927972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable442[1] = 
{
	AssemblyFileVersionAttribute_t14927972::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize443 = { sizeof (AssemblyInformationalVersionAttribute_t3037764991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable443[1] = 
{
	AssemblyInformationalVersionAttribute_t3037764991::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize444 = { sizeof (AssemblyKeyFileAttribute_t2825689142), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable444[1] = 
{
	AssemblyKeyFileAttribute_t2825689142::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize445 = { sizeof (AssemblyName_t270931938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable445[15] = 
{
	AssemblyName_t270931938::get_offset_of_name_0(),
	AssemblyName_t270931938::get_offset_of_codebase_1(),
	AssemblyName_t270931938::get_offset_of_major_2(),
	AssemblyName_t270931938::get_offset_of_minor_3(),
	AssemblyName_t270931938::get_offset_of_build_4(),
	AssemblyName_t270931938::get_offset_of_revision_5(),
	AssemblyName_t270931938::get_offset_of_cultureinfo_6(),
	AssemblyName_t270931938::get_offset_of_flags_7(),
	AssemblyName_t270931938::get_offset_of_hashalg_8(),
	AssemblyName_t270931938::get_offset_of_keypair_9(),
	AssemblyName_t270931938::get_offset_of_publicKey_10(),
	AssemblyName_t270931938::get_offset_of_keyToken_11(),
	AssemblyName_t270931938::get_offset_of_versioncompat_12(),
	AssemblyName_t270931938::get_offset_of_version_13(),
	AssemblyName_t270931938::get_offset_of_processor_architecture_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize446 = { sizeof (AssemblyNameFlags_t3675421470)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable446[6] = 
{
	AssemblyNameFlags_t3675421470::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize447 = { sizeof (AssemblyProductAttribute_t1000945320), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable447[1] = 
{
	AssemblyProductAttribute_t1000945320::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize448 = { sizeof (AssemblyTitleAttribute_t1901133402), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable448[1] = 
{
	AssemblyTitleAttribute_t1901133402::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize449 = { sizeof (AssemblyTrademarkAttribute_t3598190473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable449[1] = 
{
	AssemblyTrademarkAttribute_t3598190473::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize450 = { sizeof (Binder_t2999457153), -1, sizeof(Binder_t2999457153_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable450[1] = 
{
	Binder_t2999457153_StaticFields::get_offset_of_default_binder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize451 = { sizeof (Default_t2456596213), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize452 = { sizeof (BindingFlags_t2721792723)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable452[21] = 
{
	BindingFlags_t2721792723::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize453 = { sizeof (CallingConventions_t2253234531)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable453[6] = 
{
	CallingConventions_t2253234531::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize454 = { sizeof (ConstructorInfo_t5769829), -1, sizeof(ConstructorInfo_t5769829_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable454[2] = 
{
	ConstructorInfo_t5769829_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t5769829_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize455 = { sizeof (CustomAttributeData_t1084486650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable455[3] = 
{
	CustomAttributeData_t1084486650::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t1084486650::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t1084486650::get_offset_of_namedArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize456 = { sizeof (CustomAttributeNamedArgument_t287865710)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable456[2] = 
{
	CustomAttributeNamedArgument_t287865710::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CustomAttributeNamedArgument_t287865710::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize457 = { sizeof (CustomAttributeTypedArgument_t2723150157)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable457[2] = 
{
	CustomAttributeTypedArgument_t2723150157::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CustomAttributeTypedArgument_t2723150157::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize458 = { sizeof (EventAttributes_t1153671773)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable458[5] = 
{
	EventAttributes_t1153671773::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize459 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable459[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize460 = { sizeof (AddEventAdapter_t1787725097), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize461 = { sizeof (FieldAttributes_t400321159)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable461[20] = 
{
	FieldAttributes_t400321159::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize462 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize463 = { sizeof (LocalVariableInfo_t2426779395), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable463[3] = 
{
	LocalVariableInfo_t2426779395::get_offset_of_type_0(),
	LocalVariableInfo_t2426779395::get_offset_of_is_pinned_1(),
	LocalVariableInfo_t2426779395::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize464 = { sizeof (MemberInfoSerializationHolder_t1943730831), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable464[5] = 
{
	MemberInfoSerializationHolder_t1943730831::get_offset_of__memberName_0(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of__memberSignature_1(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of__memberType_2(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of__reflectedType_3(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of__genericArguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize465 = { sizeof (MemberTypes_t3790569052)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable465[10] = 
{
	MemberTypes_t3790569052::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize466 = { sizeof (MethodAttributes_t2366443849)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable466[25] = 
{
	MethodAttributes_t2366443849::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize467 = { sizeof (MethodBase_t609368412), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize468 = { sizeof (MethodImplAttributes_t3646023817)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable468[15] = 
{
	MethodImplAttributes_t3646023817::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize469 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize470 = { sizeof (Missing_t508514592), -1, sizeof(Missing_t508514592_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable470[1] = 
{
	Missing_t508514592_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize471 = { sizeof (Module_t2987026101), -1, sizeof(Module_t2987026101_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable471[10] = 
{
	0,
	Module_t2987026101_StaticFields::get_offset_of_FilterTypeName_1(),
	Module_t2987026101_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_2(),
	Module_t2987026101::get_offset_of__impl_3(),
	Module_t2987026101::get_offset_of_assembly_4(),
	Module_t2987026101::get_offset_of_fqname_5(),
	Module_t2987026101::get_offset_of_name_6(),
	Module_t2987026101::get_offset_of_scopename_7(),
	Module_t2987026101::get_offset_of_is_resource_8(),
	Module_t2987026101::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize472 = { sizeof (MonoGenericMethod_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize473 = { sizeof (MonoGenericCMethod_t4239028627), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize474 = { sizeof (MonoEventInfo_t346866618)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable474[8] = 
{
	MonoEventInfo_t346866618::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t346866618::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t346866618::get_offset_of_name_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t346866618::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t346866618::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t346866618::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t346866618::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoEventInfo_t346866618::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize475 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable475[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize476 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable476[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize477 = { sizeof (MonoMethodInfo_t1248819020)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable477[5] = 
{
	MonoMethodInfo_t1248819020::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t1248819020::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t1248819020::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t1248819020::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoMethodInfo_t1248819020::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize478 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable478[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize479 = { sizeof (MonoCMethod_t3191134373), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable479[3] = 
{
	MonoCMethod_t3191134373::get_offset_of_mhandle_2(),
	MonoCMethod_t3191134373::get_offset_of_name_3(),
	MonoCMethod_t3191134373::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize480 = { sizeof (MonoPropertyInfo_t3087356066)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable480[5] = 
{
	MonoPropertyInfo_t3087356066::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_name_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_get_method_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_set_method_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_attrs_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize481 = { sizeof (PInfo_t446749821)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable481[7] = 
{
	PInfo_t446749821::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize482 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable482[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize483 = { sizeof (GetterAdapter_t2155025054), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize484 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize485 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize486 = { sizeof (ParameterAttributes_t1826424051)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable486[12] = 
{
	ParameterAttributes_t1826424051::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize487 = { sizeof (ParameterInfo_t1861056598), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable487[7] = 
{
	ParameterInfo_t1861056598::get_offset_of_ClassImpl_0(),
	ParameterInfo_t1861056598::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t1861056598::get_offset_of_MemberImpl_2(),
	ParameterInfo_t1861056598::get_offset_of_NameImpl_3(),
	ParameterInfo_t1861056598::get_offset_of_PositionImpl_4(),
	ParameterInfo_t1861056598::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t1861056598::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize488 = { sizeof (ParameterModifier_t1461694466)+ sizeof (Il2CppObject), sizeof(ParameterModifier_t1461694466_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable488[1] = 
{
	ParameterModifier_t1461694466::get_offset_of__byref_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize489 = { sizeof (Pointer_t2088917139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable489[2] = 
{
	Pointer_t2088917139::get_offset_of_data_0(),
	Pointer_t2088917139::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize490 = { sizeof (ProcessorArchitecture_t305929193)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable490[6] = 
{
	ProcessorArchitecture_t305929193::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize491 = { sizeof (PropertyAttributes_t3388002996)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable491[9] = 
{
	PropertyAttributes_t3388002996::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize492 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize493 = { sizeof (ResourceAttributes_t3997964906)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable493[3] = 
{
	ResourceAttributes_t3997964906::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize494 = { sizeof (StrongNameKeyPair_t3411219591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable494[5] = 
{
	StrongNameKeyPair_t3411219591::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t3411219591::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t3411219591::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t3411219591::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t3411219591::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize495 = { sizeof (TargetException_t3386045725), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize496 = { sizeof (TargetInvocationException_t4266643902), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize497 = { sizeof (TargetParameterCountException_t1216617239), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize498 = { sizeof (TypeAttributes_t113483779)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable498[32] = 
{
	TypeAttributes_t113483779::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize499 = { sizeof (TypeDelegator_t3617470028), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable499[1] = 
{
	TypeDelegator_t3617470028::get_offset_of_typeImpl_8(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
