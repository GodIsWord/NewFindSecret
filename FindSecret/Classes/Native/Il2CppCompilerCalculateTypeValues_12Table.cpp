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
#include "Mono_Security_Mono_Security_X509_X509StoreManager1046782375.h"
#include "Mono_Security_Mono_Security_X509_X509Stores1373936237.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Author1122691429.h"
#include "Mono_Security_Mono_Security_X509_Extensions_BasicC2462195278.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Extend3929363080.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Genera2702294159.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsag820456313.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsa1795615912.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Netsca1524296876.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Netsca3317701015.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Subjec1536937677.h"
#include "Mono_Security_Mono_Security_Cryptography_HMAC3689525210.h"
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1723838944.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLeve2246417555.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDesc1549755611.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Alert4059934885.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlg1174400495.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSui3414744575.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSui1129639304.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSui3316559455.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientCon2797401965.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientRec2031137796.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientSes1775821398.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientSes2353595803.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentTy2602934270.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context3971234707.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeA1320888206.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeS756684113.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgor2376832258.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HttpsClie1160552561.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RecordPro3759049701.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RecordPro3680907657.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RecordPro3718352467.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RSASslSig3558097625.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RSASslSig2709678514.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityC4242483129.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP2199972650.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP1513093309.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ServerCon3848440993.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Validatio3834298736.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClient3914624661.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslCipher1981645747.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandsh2107581772.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslStream1667413407.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslStream3504282820.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsCipher1545013223.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClient2486039503.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsExcept3534743363.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServer4144396432.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream2365453965.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake1004704908.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3696583168.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3062346172.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3519510577.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake1824902654.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2486981163.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_C97965998.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_643923608.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2716496392.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3690397592.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3860330041.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3343859594.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake1850379324.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_699469151.h"
#include "Mono_Security_Mono_Math_Prime_PrimalityTest1539325943.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Certifica4091668218.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Certifica1842476440.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Certifica3743405224.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKe3240194217.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E3057255361.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U2732071528.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U1929481982.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U1704471045.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U3652892010.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U1337922363.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U2499776625.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U2490092596.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U3254766644.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U1630999355.h"
#include "System_Xml_U3CModuleU3E692745525.h"
#include "System_Xml_System_MonoTODOAttribute4131080581.h"
#include "System_Xml_Mono_Xml_Schema_XsdIdentitySelector574258590.h"
#include "System_Xml_Mono_Xml_Schema_XsdIdentityField1964115728.h"
#include "System_Xml_Mono_Xml_Schema_XsdIdentityPath991900844.h"
#include "System_Xml_Mono_Xml_Schema_XsdIdentityStep1480907129.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyEntryField3552275292.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyEntryFieldCollect3698183622.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyEntry693496666.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyEntryCollection3090959213.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyTable2156891743.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager726654767.h"
#include "System_Xml_Mono_Xml_Schema_XsdValidationState376578997.h"
#include "System_Xml_Mono_Xml_Schema_XsdElementValidationSta2214590119.h"
#include "System_Xml_Mono_Xml_Schema_XsdSequenceValidationSta429792968.h"
#include "System_Xml_Mono_Xml_Schema_XsdChoiceValidationStat2566230191.h"
#include "System_Xml_Mono_Xml_Schema_XsdAllValidationState2703884157.h"
#include "System_Xml_Mono_Xml_Schema_XsdAnyValidationState3421545252.h"
#include "System_Xml_Mono_Xml_Schema_XsdAppendedValidationSt3608891238.h"
#include "System_Xml_Mono_Xml_Schema_XsdEmptyValidationState1344146143.h"
#include "System_Xml_Mono_Xml_Schema_XsdInvalidValidationSta3749995458.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { sizeof (X509StoreManager_t1046782376), -1, sizeof(X509StoreManager_t1046782376_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1200[2] = 
{
	X509StoreManager_t1046782376_StaticFields::get_offset_of__userStore_0(),
	X509StoreManager_t1046782376_StaticFields::get_offset_of__machineStore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { sizeof (X509Stores_t1373936238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1201[2] = 
{
	X509Stores_t1373936238::get_offset_of__storePath_0(),
	X509Stores_t1373936238::get_offset_of__trusted_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { sizeof (AuthorityKeyIdentifierExtension_t1122691429), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1202[1] = 
{
	AuthorityKeyIdentifierExtension_t1122691429::get_offset_of_aki_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { sizeof (BasicConstraintsExtension_t2462195279), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1203[2] = 
{
	BasicConstraintsExtension_t2462195279::get_offset_of_cA_3(),
	BasicConstraintsExtension_t2462195279::get_offset_of_pathLenConstraint_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { sizeof (ExtendedKeyUsageExtension_t3929363080), -1, sizeof(ExtendedKeyUsageExtension_t3929363080_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1204[2] = 
{
	ExtendedKeyUsageExtension_t3929363080::get_offset_of_keyPurpose_3(),
	ExtendedKeyUsageExtension_t3929363080_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { sizeof (GeneralNames_t2702294159), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1205[5] = 
{
	GeneralNames_t2702294159::get_offset_of_rfc822Name_0(),
	GeneralNames_t2702294159::get_offset_of_dnsName_1(),
	GeneralNames_t2702294159::get_offset_of_directoryNames_2(),
	GeneralNames_t2702294159::get_offset_of_uris_3(),
	GeneralNames_t2702294159::get_offset_of_ipAddr_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { sizeof (KeyUsages_t820456313)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1206[11] = 
{
	KeyUsages_t820456313::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { sizeof (KeyUsageExtension_t1795615912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1207[1] = 
{
	KeyUsageExtension_t1795615912::get_offset_of_kubits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { sizeof (NetscapeCertTypeExtension_t1524296876), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1208[1] = 
{
	NetscapeCertTypeExtension_t1524296876::get_offset_of_ctbits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { sizeof (CertTypes_t3317701015)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1209[8] = 
{
	CertTypes_t3317701015::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { sizeof (SubjectAltNameExtension_t1536937677), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1210[1] = 
{
	SubjectAltNameExtension_t1536937677::get_offset_of__names_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { sizeof (HMAC_t3689525210), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1211[4] = 
{
	HMAC_t3689525210::get_offset_of_hash_5(),
	HMAC_t3689525210::get_offset_of_hashing_6(),
	HMAC_t3689525210::get_offset_of_innerPad_7(),
	HMAC_t3689525210::get_offset_of_outerPad_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (MD5SHA1_t723838944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1212[3] = 
{
	MD5SHA1_t723838944::get_offset_of_md5_4(),
	MD5SHA1_t723838944::get_offset_of_sha_5(),
	MD5SHA1_t723838944::get_offset_of_hashing_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (AlertLevel_t2246417555)+ sizeof (Il2CppObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1213[3] = 
{
	AlertLevel_t2246417555::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { sizeof (AlertDescription_t1549755611)+ sizeof (Il2CppObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1214[25] = 
{
	AlertDescription_t1549755611::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (Alert_t4059934885), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1215[2] = 
{
	Alert_t4059934885::get_offset_of_level_0(),
	Alert_t4059934885::get_offset_of_description_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (CipherAlgorithmType_t1174400495)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1216[8] = 
{
	CipherAlgorithmType_t1174400495::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1217 = { sizeof (CipherSuite_t3414744575), -1, sizeof(CipherSuite_t3414744575_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1217[21] = 
{
	CipherSuite_t3414744575_StaticFields::get_offset_of_EmptyArray_0(),
	CipherSuite_t3414744575::get_offset_of_code_1(),
	CipherSuite_t3414744575::get_offset_of_name_2(),
	CipherSuite_t3414744575::get_offset_of_cipherAlgorithmType_3(),
	CipherSuite_t3414744575::get_offset_of_hashAlgorithmType_4(),
	CipherSuite_t3414744575::get_offset_of_exchangeAlgorithmType_5(),
	CipherSuite_t3414744575::get_offset_of_isExportable_6(),
	CipherSuite_t3414744575::get_offset_of_cipherMode_7(),
	CipherSuite_t3414744575::get_offset_of_keyMaterialSize_8(),
	CipherSuite_t3414744575::get_offset_of_keyBlockSize_9(),
	CipherSuite_t3414744575::get_offset_of_expandedKeyMaterialSize_10(),
	CipherSuite_t3414744575::get_offset_of_effectiveKeyBits_11(),
	CipherSuite_t3414744575::get_offset_of_ivSize_12(),
	CipherSuite_t3414744575::get_offset_of_blockSize_13(),
	CipherSuite_t3414744575::get_offset_of_context_14(),
	CipherSuite_t3414744575::get_offset_of_encryptionAlgorithm_15(),
	CipherSuite_t3414744575::get_offset_of_encryptionCipher_16(),
	CipherSuite_t3414744575::get_offset_of_decryptionAlgorithm_17(),
	CipherSuite_t3414744575::get_offset_of_decryptionCipher_18(),
	CipherSuite_t3414744575::get_offset_of_clientHMAC_19(),
	CipherSuite_t3414744575::get_offset_of_serverHMAC_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1218 = { sizeof (CipherSuiteCollection_t1129639304), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1218[2] = 
{
	CipherSuiteCollection_t1129639304::get_offset_of_cipherSuites_0(),
	CipherSuiteCollection_t1129639304::get_offset_of_protocol_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1219 = { sizeof (CipherSuiteFactory_t3316559455), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1220 = { sizeof (ClientContext_t2797401965), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1220[2] = 
{
	ClientContext_t2797401965::get_offset_of_sslStream_30(),
	ClientContext_t2797401965::get_offset_of_clientHelloProtocol_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (ClientRecordProtocol_t2031137796), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (ClientSessionInfo_t1775821398), -1, sizeof(ClientSessionInfo_t1775821398_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1222[6] = 
{
	ClientSessionInfo_t1775821398_StaticFields::get_offset_of_ValidityInterval_0(),
	ClientSessionInfo_t1775821398::get_offset_of_disposed_1(),
	ClientSessionInfo_t1775821398::get_offset_of_validuntil_2(),
	ClientSessionInfo_t1775821398::get_offset_of_host_3(),
	ClientSessionInfo_t1775821398::get_offset_of_sid_4(),
	ClientSessionInfo_t1775821398::get_offset_of_masterSecret_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (ClientSessionCache_t2353595803), -1, sizeof(ClientSessionCache_t2353595803_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1223[2] = 
{
	ClientSessionCache_t2353595803_StaticFields::get_offset_of_cache_0(),
	ClientSessionCache_t2353595803_StaticFields::get_offset_of_locker_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1224 = { sizeof (ContentType_t2602934270)+ sizeof (Il2CppObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1224[5] = 
{
	ContentType_t2602934270::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (Context_t3971234707), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1225[30] = 
{
	Context_t3971234707::get_offset_of_securityProtocol_0(),
	Context_t3971234707::get_offset_of_sessionId_1(),
	Context_t3971234707::get_offset_of_compressionMethod_2(),
	Context_t3971234707::get_offset_of_serverSettings_3(),
	Context_t3971234707::get_offset_of_clientSettings_4(),
	Context_t3971234707::get_offset_of_current_5(),
	Context_t3971234707::get_offset_of_negotiating_6(),
	Context_t3971234707::get_offset_of_read_7(),
	Context_t3971234707::get_offset_of_write_8(),
	Context_t3971234707::get_offset_of_supportedCiphers_9(),
	Context_t3971234707::get_offset_of_lastHandshakeMsg_10(),
	Context_t3971234707::get_offset_of_handshakeState_11(),
	Context_t3971234707::get_offset_of_abbreviatedHandshake_12(),
	Context_t3971234707::get_offset_of_receivedConnectionEnd_13(),
	Context_t3971234707::get_offset_of_sentConnectionEnd_14(),
	Context_t3971234707::get_offset_of_protocolNegotiated_15(),
	Context_t3971234707::get_offset_of_writeSequenceNumber_16(),
	Context_t3971234707::get_offset_of_readSequenceNumber_17(),
	Context_t3971234707::get_offset_of_clientRandom_18(),
	Context_t3971234707::get_offset_of_serverRandom_19(),
	Context_t3971234707::get_offset_of_randomCS_20(),
	Context_t3971234707::get_offset_of_randomSC_21(),
	Context_t3971234707::get_offset_of_masterSecret_22(),
	Context_t3971234707::get_offset_of_clientWriteKey_23(),
	Context_t3971234707::get_offset_of_serverWriteKey_24(),
	Context_t3971234707::get_offset_of_clientWriteIV_25(),
	Context_t3971234707::get_offset_of_serverWriteIV_26(),
	Context_t3971234707::get_offset_of_handshakeMessages_27(),
	Context_t3971234707::get_offset_of_random_28(),
	Context_t3971234707::get_offset_of_recordProtocol_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (ExchangeAlgorithmType_t1320888206)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1226[6] = 
{
	ExchangeAlgorithmType_t1320888206::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (HandshakeState_t756684113)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1227[4] = 
{
	HandshakeState_t756684113::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (HashAlgorithmType_t2376832258)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1228[4] = 
{
	HashAlgorithmType_t2376832258::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { sizeof (HttpsClientStream_t1160552561), -1, sizeof(HttpsClientStream_t1160552561_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1229[4] = 
{
	HttpsClientStream_t1160552561::get_offset_of__request_21(),
	HttpsClientStream_t1160552561::get_offset_of__status_22(),
	HttpsClientStream_t1160552561_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_23(),
	HttpsClientStream_t1160552561_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { sizeof (RecordProtocol_t3759049701), -1, sizeof(RecordProtocol_t3759049701_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1230[3] = 
{
	RecordProtocol_t3759049701_StaticFields::get_offset_of_record_processing_0(),
	RecordProtocol_t3759049701::get_offset_of_innerStream_1(),
	RecordProtocol_t3759049701::get_offset_of_context_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { sizeof (ReceiveRecordAsyncResult_t3680907657), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1231[9] = 
{
	ReceiveRecordAsyncResult_t3680907657::get_offset_of_locker_0(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of__userCallback_1(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of__userState_2(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of__asyncException_3(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of_handle_4(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of__resultingBuffer_5(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of__record_6(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of_completed_7(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of__initialBuffer_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { sizeof (SendRecordAsyncResult_t3718352467), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1232[7] = 
{
	SendRecordAsyncResult_t3718352467::get_offset_of_locker_0(),
	SendRecordAsyncResult_t3718352467::get_offset_of__userCallback_1(),
	SendRecordAsyncResult_t3718352467::get_offset_of__userState_2(),
	SendRecordAsyncResult_t3718352467::get_offset_of__asyncException_3(),
	SendRecordAsyncResult_t3718352467::get_offset_of_handle_4(),
	SendRecordAsyncResult_t3718352467::get_offset_of__message_5(),
	SendRecordAsyncResult_t3718352467::get_offset_of_completed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { sizeof (RSASslSignatureDeformatter_t3558097625), -1, sizeof(RSASslSignatureDeformatter_t3558097625_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1233[3] = 
{
	RSASslSignatureDeformatter_t3558097625::get_offset_of_key_0(),
	RSASslSignatureDeformatter_t3558097625::get_offset_of_hash_1(),
	RSASslSignatureDeformatter_t3558097625_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { sizeof (RSASslSignatureFormatter_t2709678514), -1, sizeof(RSASslSignatureFormatter_t2709678514_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1234[3] = 
{
	RSASslSignatureFormatter_t2709678514::get_offset_of_key_0(),
	RSASslSignatureFormatter_t2709678514::get_offset_of_hash_1(),
	RSASslSignatureFormatter_t2709678514_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { sizeof (SecurityCompressionType_t4242483129)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1235[3] = 
{
	SecurityCompressionType_t4242483129::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { sizeof (SecurityParameters_t2199972650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1236[3] = 
{
	SecurityParameters_t2199972650::get_offset_of_cipher_0(),
	SecurityParameters_t2199972650::get_offset_of_clientWriteMAC_1(),
	SecurityParameters_t2199972650::get_offset_of_serverWriteMAC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (SecurityProtocolType_t1513093309)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1237[5] = 
{
	SecurityProtocolType_t1513093309::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (ServerContext_t3848440993), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (ValidationResult_t3834298736), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1239[3] = 
{
	ValidationResult_t3834298736::get_offset_of_trusted_0(),
	ValidationResult_t3834298736::get_offset_of_user_denied_1(),
	ValidationResult_t3834298736::get_offset_of_error_code_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (SslClientStream_t3914624661), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1240[4] = 
{
	SslClientStream_t3914624661::get_offset_of_ServerCertValidation_17(),
	SslClientStream_t3914624661::get_offset_of_ClientCertSelection_18(),
	SslClientStream_t3914624661::get_offset_of_PrivateKeySelection_19(),
	SslClientStream_t3914624661::get_offset_of_ServerCertValidation2_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (SslCipherSuite_t1981645747), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1241[3] = 
{
	SslCipherSuite_t1981645747::get_offset_of_pad1_21(),
	SslCipherSuite_t1981645747::get_offset_of_pad2_22(),
	SslCipherSuite_t1981645747::get_offset_of_header_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (SslHandshakeHash_t2107581772), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1242[8] = 
{
	SslHandshakeHash_t2107581772::get_offset_of_md5_4(),
	SslHandshakeHash_t2107581772::get_offset_of_sha_5(),
	SslHandshakeHash_t2107581772::get_offset_of_hashing_6(),
	SslHandshakeHash_t2107581772::get_offset_of_secret_7(),
	SslHandshakeHash_t2107581772::get_offset_of_innerPadMD5_8(),
	SslHandshakeHash_t2107581772::get_offset_of_outerPadMD5_9(),
	SslHandshakeHash_t2107581772::get_offset_of_innerPadSHA_10(),
	SslHandshakeHash_t2107581772::get_offset_of_outerPadSHA_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1243 = { sizeof (SslStreamBase_t1667413407), -1, sizeof(SslStreamBase_t1667413407_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1243[15] = 
{
	0,
	SslStreamBase_t1667413407_StaticFields::get_offset_of_record_processing_3(),
	SslStreamBase_t1667413407::get_offset_of_innerStream_4(),
	SslStreamBase_t1667413407::get_offset_of_inputBuffer_5(),
	SslStreamBase_t1667413407::get_offset_of_context_6(),
	SslStreamBase_t1667413407::get_offset_of_protocol_7(),
	SslStreamBase_t1667413407::get_offset_of_ownsStream_8(),
	SslStreamBase_t1667413407::get_offset_of_disposed_9(),
	SslStreamBase_t1667413407::get_offset_of_checkCertRevocationStatus_10(),
	SslStreamBase_t1667413407::get_offset_of_negotiate_11(),
	SslStreamBase_t1667413407::get_offset_of_read_12(),
	SslStreamBase_t1667413407::get_offset_of_write_13(),
	SslStreamBase_t1667413407::get_offset_of_negotiationComplete_14(),
	SslStreamBase_t1667413407::get_offset_of_recbuf_15(),
	SslStreamBase_t1667413407::get_offset_of_recordStream_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1244 = { sizeof (InternalAsyncResult_t3504282820), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1244[12] = 
{
	InternalAsyncResult_t3504282820::get_offset_of_locker_0(),
	InternalAsyncResult_t3504282820::get_offset_of__userCallback_1(),
	InternalAsyncResult_t3504282820::get_offset_of__userState_2(),
	InternalAsyncResult_t3504282820::get_offset_of__asyncException_3(),
	InternalAsyncResult_t3504282820::get_offset_of_handle_4(),
	InternalAsyncResult_t3504282820::get_offset_of_completed_5(),
	InternalAsyncResult_t3504282820::get_offset_of__bytesRead_6(),
	InternalAsyncResult_t3504282820::get_offset_of__fromWrite_7(),
	InternalAsyncResult_t3504282820::get_offset_of__proceedAfterHandshake_8(),
	InternalAsyncResult_t3504282820::get_offset_of__buffer_9(),
	InternalAsyncResult_t3504282820::get_offset_of__offset_10(),
	InternalAsyncResult_t3504282820::get_offset_of__count_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1245 = { sizeof (TlsCipherSuite_t1545013223), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1245[2] = 
{
	TlsCipherSuite_t1545013223::get_offset_of_header_21(),
	TlsCipherSuite_t1545013223::get_offset_of_headerLock_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1246 = { sizeof (TlsClientSettings_t2486039503), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1246[4] = 
{
	TlsClientSettings_t2486039503::get_offset_of_targetHost_0(),
	TlsClientSettings_t2486039503::get_offset_of_certificates_1(),
	TlsClientSettings_t2486039503::get_offset_of_clientCertificate_2(),
	TlsClientSettings_t2486039503::get_offset_of_certificateRSA_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1247 = { sizeof (TlsException_t3534743363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1247[1] = 
{
	TlsException_t3534743363::get_offset_of_alert_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1248 = { sizeof (TlsServerSettings_t4144396432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1248[8] = 
{
	TlsServerSettings_t4144396432::get_offset_of_certificates_0(),
	TlsServerSettings_t4144396432::get_offset_of_certificateRSA_1(),
	TlsServerSettings_t4144396432::get_offset_of_rsaParameters_2(),
	TlsServerSettings_t4144396432::get_offset_of_signedParams_3(),
	TlsServerSettings_t4144396432::get_offset_of_distinguisedNames_4(),
	TlsServerSettings_t4144396432::get_offset_of_serverKeyExchange_5(),
	TlsServerSettings_t4144396432::get_offset_of_certificateRequest_6(),
	TlsServerSettings_t4144396432::get_offset_of_certificateTypes_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1249 = { sizeof (TlsStream_t2365453965), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1249[4] = 
{
	TlsStream_t2365453965::get_offset_of_canRead_2(),
	TlsStream_t2365453965::get_offset_of_canWrite_3(),
	TlsStream_t2365453965::get_offset_of_buffer_4(),
	TlsStream_t2365453965::get_offset_of_temp_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1250 = { sizeof (ClientCertificateType_t1004704908)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1250[6] = 
{
	ClientCertificateType_t1004704908::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1251 = { sizeof (HandshakeMessage_t3696583168), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1251[4] = 
{
	HandshakeMessage_t3696583168::get_offset_of_context_6(),
	HandshakeMessage_t3696583168::get_offset_of_handshakeType_7(),
	HandshakeMessage_t3696583168::get_offset_of_contentType_8(),
	HandshakeMessage_t3696583168::get_offset_of_cache_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1252 = { sizeof (HandshakeType_t3062346172)+ sizeof (Il2CppObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1252[12] = 
{
	HandshakeType_t3062346172::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1253 = { sizeof (TlsClientCertificate_t3519510577), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1253[2] = 
{
	TlsClientCertificate_t3519510577::get_offset_of_clientCertSelected_10(),
	TlsClientCertificate_t3519510577::get_offset_of_clientCert_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1254 = { sizeof (TlsClientCertificateVerify_t1824902654), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1255 = { sizeof (TlsClientFinished_t2486981163), -1, sizeof(TlsClientFinished_t2486981163_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1255[1] = 
{
	TlsClientFinished_t2486981163_StaticFields::get_offset_of_Ssl3Marker_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1256 = { sizeof (TlsClientHello_t97965998), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1256[1] = 
{
	TlsClientHello_t97965998::get_offset_of_random_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1257 = { sizeof (TlsClientKeyExchange_t643923608), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1258 = { sizeof (TlsServerCertificate_t2716496392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1258[1] = 
{
	TlsServerCertificate_t2716496392::get_offset_of_certificates_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1259 = { sizeof (TlsServerCertificateRequest_t3690397592), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1259[2] = 
{
	TlsServerCertificateRequest_t3690397592::get_offset_of_certificateTypes_10(),
	TlsServerCertificateRequest_t3690397592::get_offset_of_distinguisedNames_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1260 = { sizeof (TlsServerFinished_t3860330041), -1, sizeof(TlsServerFinished_t3860330041_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1260[1] = 
{
	TlsServerFinished_t3860330041_StaticFields::get_offset_of_Ssl3Marker_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (TlsServerHello_t3343859594), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1261[4] = 
{
	TlsServerHello_t3343859594::get_offset_of_compressionMethod_10(),
	TlsServerHello_t3343859594::get_offset_of_random_11(),
	TlsServerHello_t3343859594::get_offset_of_sessionId_12(),
	TlsServerHello_t3343859594::get_offset_of_cipherSuite_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (TlsServerHelloDone_t1850379324), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (TlsServerKeyExchange_t699469151), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1263[2] = 
{
	TlsServerKeyExchange_t699469151::get_offset_of_rsaParams_10(),
	TlsServerKeyExchange_t699469151::get_offset_of_signedParams_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (PrimalityTest_t1539325944), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (CertificateValidationCallback_t4091668218), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (CertificateValidationCallback2_t1842476440), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (CertificateSelectionCallback_t3743405224), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (PrivateKeySelectionCallback_t3240194217), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255362), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1269[15] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D5_1(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D6_2(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D7_3(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D8_4(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D9_5(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D11_6(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D12_7(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D13_8(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D14_9(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D15_10(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D16_11(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D17_12(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (U24ArrayTypeU243132_t2732071529)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU243132_t2732071529 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (U24ArrayTypeU24256_t1929481983)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU24256_t1929481983 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (U24ArrayTypeU2420_t1704471046)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU2420_t1704471046 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (U24ArrayTypeU2432_t3652892011)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU2432_t3652892011 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (U24ArrayTypeU2448_t1337922364)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU2448_t1337922364 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (U24ArrayTypeU2464_t499776626)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU2464_t499776626 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (U24ArrayTypeU2412_t2490092597)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU2412_t2490092597 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (U24ArrayTypeU2416_t3254766645)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU2416_t3254766645 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { sizeof (U24ArrayTypeU244_t1630999355)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU244_t1630999355 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (U3CModuleU3E_t692745529), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (MonoTODOAttribute_t4131080583), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (XsdIdentitySelector_t574258590), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1281[3] = 
{
	XsdIdentitySelector_t574258590::get_offset_of_selectorPaths_0(),
	XsdIdentitySelector_t574258590::get_offset_of_fields_1(),
	XsdIdentitySelector_t574258590::get_offset_of_cachedFields_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (XsdIdentityField_t1964115728), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1282[2] = 
{
	XsdIdentityField_t1964115728::get_offset_of_fieldPaths_0(),
	XsdIdentityField_t1964115728::get_offset_of_index_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (XsdIdentityPath_t991900844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1283[2] = 
{
	XsdIdentityPath_t991900844::get_offset_of_OrderedSteps_0(),
	XsdIdentityPath_t991900844::get_offset_of_Descendants_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (XsdIdentityStep_t1480907129), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1284[6] = 
{
	XsdIdentityStep_t1480907129::get_offset_of_IsCurrent_0(),
	XsdIdentityStep_t1480907129::get_offset_of_IsAttribute_1(),
	XsdIdentityStep_t1480907129::get_offset_of_IsAnyName_2(),
	XsdIdentityStep_t1480907129::get_offset_of_NsName_3(),
	XsdIdentityStep_t1480907129::get_offset_of_Name_4(),
	XsdIdentityStep_t1480907129::get_offset_of_Namespace_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (XsdKeyEntryField_t3552275292), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1285[13] = 
{
	XsdKeyEntryField_t3552275292::get_offset_of_entry_0(),
	XsdKeyEntryField_t3552275292::get_offset_of_field_1(),
	XsdKeyEntryField_t3552275292::get_offset_of_FieldFound_2(),
	XsdKeyEntryField_t3552275292::get_offset_of_FieldLineNumber_3(),
	XsdKeyEntryField_t3552275292::get_offset_of_FieldLinePosition_4(),
	XsdKeyEntryField_t3552275292::get_offset_of_FieldHasLineInfo_5(),
	XsdKeyEntryField_t3552275292::get_offset_of_FieldType_6(),
	XsdKeyEntryField_t3552275292::get_offset_of_Identity_7(),
	XsdKeyEntryField_t3552275292::get_offset_of_IsXsiNil_8(),
	XsdKeyEntryField_t3552275292::get_offset_of_FieldFoundDepth_9(),
	XsdKeyEntryField_t3552275292::get_offset_of_FieldFoundPath_10(),
	XsdKeyEntryField_t3552275292::get_offset_of_Consuming_11(),
	XsdKeyEntryField_t3552275292::get_offset_of_Consumed_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (XsdKeyEntryFieldCollection_t3698183622), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (XsdKeyEntry_t693496666), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1287[8] = 
{
	XsdKeyEntry_t693496666::get_offset_of_StartDepth_0(),
	XsdKeyEntry_t693496666::get_offset_of_SelectorLineNumber_1(),
	XsdKeyEntry_t693496666::get_offset_of_SelectorLinePosition_2(),
	XsdKeyEntry_t693496666::get_offset_of_SelectorHasLineInfo_3(),
	XsdKeyEntry_t693496666::get_offset_of_KeyFields_4(),
	XsdKeyEntry_t693496666::get_offset_of_KeyRefFound_5(),
	XsdKeyEntry_t693496666::get_offset_of_OwnerSequence_6(),
	XsdKeyEntry_t693496666::get_offset_of_keyFound_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (XsdKeyEntryCollection_t3090959213), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (XsdKeyTable_t2156891743), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1289[9] = 
{
	XsdKeyTable_t2156891743::get_offset_of_alwaysTrue_0(),
	XsdKeyTable_t2156891743::get_offset_of_selector_1(),
	XsdKeyTable_t2156891743::get_offset_of_source_2(),
	XsdKeyTable_t2156891743::get_offset_of_qname_3(),
	XsdKeyTable_t2156891743::get_offset_of_refKeyName_4(),
	XsdKeyTable_t2156891743::get_offset_of_Entries_5(),
	XsdKeyTable_t2156891743::get_offset_of_FinishedEntries_6(),
	XsdKeyTable_t2156891743::get_offset_of_StartDepth_7(),
	XsdKeyTable_t2156891743::get_offset_of_ReferencedKey_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (XsdParticleStateManager_t726654767), -1, sizeof(XsdParticleStateManager_t726654767_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1290[6] = 
{
	XsdParticleStateManager_t726654767::get_offset_of_table_0(),
	XsdParticleStateManager_t726654767::get_offset_of_processContents_1(),
	XsdParticleStateManager_t726654767::get_offset_of_CurrentElement_2(),
	XsdParticleStateManager_t726654767::get_offset_of_ContextStack_3(),
	XsdParticleStateManager_t726654767::get_offset_of_Context_4(),
	XsdParticleStateManager_t726654767_StaticFields::get_offset_of_U3CU3Ef__switchU24map2_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (XsdValidationState_t376578997), -1, sizeof(XsdValidationState_t376578997_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1291[3] = 
{
	XsdValidationState_t376578997_StaticFields::get_offset_of_invalid_0(),
	XsdValidationState_t376578997::get_offset_of_occured_1(),
	XsdValidationState_t376578997::get_offset_of_manager_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { sizeof (XsdElementValidationState_t2214590119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1292[1] = 
{
	XsdElementValidationState_t2214590119::get_offset_of_element_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { sizeof (XsdSequenceValidationState_t429792968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1293[4] = 
{
	XsdSequenceValidationState_t429792968::get_offset_of_seq_3(),
	XsdSequenceValidationState_t429792968::get_offset_of_current_4(),
	XsdSequenceValidationState_t429792968::get_offset_of_currentAutomata_5(),
	XsdSequenceValidationState_t429792968::get_offset_of_emptiable_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { sizeof (XsdChoiceValidationState_t2566230191), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1294[3] = 
{
	XsdChoiceValidationState_t2566230191::get_offset_of_choice_3(),
	XsdChoiceValidationState_t2566230191::get_offset_of_emptiable_4(),
	XsdChoiceValidationState_t2566230191::get_offset_of_emptiableComputed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { sizeof (XsdAllValidationState_t2703884157), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1295[2] = 
{
	XsdAllValidationState_t2703884157::get_offset_of_all_3(),
	XsdAllValidationState_t2703884157::get_offset_of_consumed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { sizeof (XsdAnyValidationState_t3421545252), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1296[1] = 
{
	XsdAnyValidationState_t3421545252::get_offset_of_any_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { sizeof (XsdAppendedValidationState_t3608891238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1297[2] = 
{
	XsdAppendedValidationState_t3608891238::get_offset_of_head_3(),
	XsdAppendedValidationState_t3608891238::get_offset_of_rest_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { sizeof (XsdEmptyValidationState_t1344146143), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { sizeof (XsdInvalidValidationState_t3749995458), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
