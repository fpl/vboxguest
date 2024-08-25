#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(VBoxGuestIDC, 0xbaa2df8b, "");
SYMBOL_CRC(VBoxGuest_RTMemTmpAllocTag, 0x0959ff53, "");
SYMBOL_CRC(VBoxGuest_RTMemTmpAllocZTag, 0xcf6eb45c, "");
SYMBOL_CRC(VBoxGuest_RTMemTmpFree, 0xe054d759, "");
SYMBOL_CRC(VBoxGuest_RTMemTmpFreeZ, 0xab4bf7d1, "");
SYMBOL_CRC(VBoxGuest_RTMemAllocTag, 0x3796a18f, "");
SYMBOL_CRC(VBoxGuest_RTMemAllocZTag, 0x4035e5fd, "");
SYMBOL_CRC(VBoxGuest_RTMemAllocVarTag, 0xd13b256f, "");
SYMBOL_CRC(VBoxGuest_RTMemAllocZVarTag, 0x5d84e175, "");
SYMBOL_CRC(VBoxGuest_RTMemReallocTag, 0xc0f206d5, "");
SYMBOL_CRC(VBoxGuest_RTMemFree, 0xe88dae73, "");
SYMBOL_CRC(VBoxGuest_RTMemFreeZ, 0x88477886, "");
SYMBOL_CRC(VBoxGuest_RTMemAllocExTag, 0x668d3d38, "");
SYMBOL_CRC(VBoxGuest_RTMemFreeEx, 0xdd4f8dec, "");
SYMBOL_CRC(VBoxGuest_RTR0Init, 0x197acd65, "");
SYMBOL_CRC(VBoxGuest_RTR0Term, 0x25219f5e, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjIsMapping, 0x572989f1, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjAddress, 0x8489e37e, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjAddressR3, 0x2f0613b3, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjSize, 0x8128c314, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjGetPagePhysAddr, 0xb25216f2, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjWasZeroInitialized, 0x00145efa, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjFree, 0xb2100a09, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjAllocPageTag, 0x3c1af019, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjAllocLargeTag, 0x38270e22, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjAllocLowTag, 0xc9dd0e6d, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjAllocContTag, 0x1caff8a1, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjLockUserTag, 0x9ed7bece, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjLockKernelTag, 0x99179381, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjAllocPhysTag, 0x44ec0040, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjAllocPhysExTag, 0x79b6d029, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjAllocPhysNCTag, 0xec453391, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjEnterPhysTag, 0x23467c21, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjReserveKernelTag, 0x7da7b428, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjReserveUserTag, 0xaf47baba, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjMapKernelTag, 0xc985cb39, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjMapKernelExTag, 0xac51d283, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjMapUserTag, 0xf4cf8880, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjMapUserExTag, 0x7314a6a9, "");
SYMBOL_CRC(VBoxGuest_RTR0MemObjProtect, 0xb2313b4b, "");
SYMBOL_CRC(VBoxGuest_RTMpNotificationRegister, 0x057e5a6f, "");
SYMBOL_CRC(VBoxGuest_RTMpNotificationDeregister, 0x9bd469a3, "");
SYMBOL_CRC(VBoxGuest_RTPowerSignalEvent, 0x5aa6ed66, "");
SYMBOL_CRC(VBoxGuest_RTPowerNotificationRegister, 0x94f7365f, "");
SYMBOL_CRC(VBoxGuest_RTPowerNotificationDeregister, 0x372d5e29, "");
SYMBOL_CRC(VBoxGuest_RTSemSpinMutexCreate, 0x90f49e2e, "");
SYMBOL_CRC(VBoxGuest_RTSemSpinMutexTryRequest, 0x71278e89, "");
SYMBOL_CRC(VBoxGuest_RTSemSpinMutexRequest, 0x7e066f43, "");
SYMBOL_CRC(VBoxGuest_RTSemSpinMutexRelease, 0x1742af60, "");
SYMBOL_CRC(VBoxGuest_RTSemSpinMutexDestroy, 0x67986386, "");
SYMBOL_CRC(VBoxGuest_RTMemDupTag, 0x2aceba62, "");
SYMBOL_CRC(VBoxGuest_RTMemDupExTag, 0x0888479c, "");
SYMBOL_CRC(VBoxGuest_RTMemReallocZTag, 0xa34214ad, "");
SYMBOL_CRC(VBoxGuest_RTCrc32, 0x3d168aeb, "");
SYMBOL_CRC(VBoxGuest_RTCrc32Start, 0x4a462785, "");
SYMBOL_CRC(VBoxGuest_RTCrc32Process, 0x9815e96d, "");
SYMBOL_CRC(VBoxGuest_RTCrc32Finish, 0x99869052, "");
SYMBOL_CRC(VBoxGuest_RTLogDefaultInstance, 0xd1eda2ff, "");
SYMBOL_CRC(VBoxGuest_RTLogDefaultInstanceEx, 0x043bf241, "");
SYMBOL_CRC(VBoxGuest_RTLogGetDefaultInstance, 0xb80fe1ba, "");
SYMBOL_CRC(VBoxGuest_RTLogGetDefaultInstanceEx, 0x7f8d321b, "");
SYMBOL_CRC(VBoxGuest_RTLogSetDefaultInstance, 0x16c0e0a8, "");
SYMBOL_CRC(VBoxGuest_RTLogSetDefaultInstanceThread, 0xa7448593, "");
SYMBOL_CRC(VBoxGuest_RTLogRelGetDefaultInstance, 0xa81cbf48, "");
SYMBOL_CRC(VBoxGuest_RTLogRelGetDefaultInstanceEx, 0xfe7ea0a2, "");
SYMBOL_CRC(VBoxGuest_RTLogRelSetDefaultInstance, 0x5b44947c, "");
SYMBOL_CRC(VBoxGuest_RTLogCheckGroupFlags, 0x760573cc, "");
SYMBOL_CRC(VBoxGuest_RTLogCreateExV, 0xc488581c, "");
SYMBOL_CRC(VBoxGuest_RTLogCreate, 0xa6092b34, "");
SYMBOL_CRC(VBoxGuest_RTLogDestroy, 0x33339bdc, "");
SYMBOL_CRC(VBoxGuest_RTLogSetCustomPrefixCallback, 0x19c787b6, "");
SYMBOL_CRC(VBoxGuest_RTLogSetFlushCallback, 0x1f9689a5, "");
SYMBOL_CRC(VBoxGuest_RTLogGroupSettings, 0x7e7ba7e7, "");
SYMBOL_CRC(VBoxGuest_RTLogQueryGroupSettings, 0x02960108, "");
SYMBOL_CRC(VBoxGuest_RTLogFlags, 0x8b4bc74e, "");
SYMBOL_CRC(VBoxGuest_RTLogSetBuffering, 0x7f3190d5, "");
SYMBOL_CRC(VBoxGuest_RTLogSetGroupLimit, 0xdab0d958, "");
SYMBOL_CRC(VBoxGuest_RTLogSetR0ThreadNameV, 0x64933730, "");
SYMBOL_CRC(VBoxGuest_RTLogSetR0ProgramStart, 0x602a1b90, "");
SYMBOL_CRC(VBoxGuest_RTLogGetFlags, 0x980c472a, "");
SYMBOL_CRC(VBoxGuest_RTLogChangeFlags, 0x5fb091a0, "");
SYMBOL_CRC(VBoxGuest_RTLogQueryFlags, 0xbf24548c, "");
SYMBOL_CRC(VBoxGuest_RTLogDestinations, 0xb41e1f91, "");
SYMBOL_CRC(VBoxGuest_RTLogClearFileDelayFlag, 0x0ca78872, "");
SYMBOL_CRC(VBoxGuest_RTLogChangeDestinations, 0x0d42accc, "");
SYMBOL_CRC(VBoxGuest_RTLogGetDestinations, 0xc6ceeb95, "");
SYMBOL_CRC(VBoxGuest_RTLogQueryDestinations, 0xa916d7ff, "");
SYMBOL_CRC(VBoxGuest_RTLogBulkUpdate, 0x00cb6641, "");
SYMBOL_CRC(VBoxGuest_RTLogQueryBulk, 0x1ace597c, "");
SYMBOL_CRC(VBoxGuest_RTLogBulkWrite, 0x4b9e221e, "");
SYMBOL_CRC(VBoxGuest_RTLogBulkNestedWrite, 0x93835d63, "");
SYMBOL_CRC(VBoxGuest_RTLogFlush, 0x5ea9a1ba, "");
SYMBOL_CRC(VBoxGuest_RTLogLoggerExV, 0x4284b892, "");
SYMBOL_CRC(VBoxGuest_RTLogLoggerV, 0x518f6530, "");
SYMBOL_CRC(VBoxGuest_RTLogPrintfV, 0xb11bd839, "");
SYMBOL_CRC(VBoxGuest_RTLogDumpPrintfV, 0x234f5255, "");
SYMBOL_CRC(VBoxGuest_RTLogLogger, 0x13726692, "");
SYMBOL_CRC(VBoxGuest_RTLogLoggerEx, 0xf81cb155, "");
SYMBOL_CRC(VBoxGuest_RTLogPrintf, 0x2af3453c, "");
SYMBOL_CRC(VBoxGuest_RTLogRelLoggerV, 0x11734fe8, "");
SYMBOL_CRC(VBoxGuest_RTLogRelPrintfV, 0xfe7f6255, "");
SYMBOL_CRC(VBoxGuest_RTLogRelSetBuffering, 0xc71362b7, "");
SYMBOL_CRC(VBoxGuest_RTLogRelLogger, 0x6181501b, "");
SYMBOL_CRC(VBoxGuest_RTLogRelPrintf, 0xae3e0ecd, "");
SYMBOL_CRC(VBoxGuest_RTLogComPrintf, 0x14bf9eeb, "");
SYMBOL_CRC(VBoxGuest_RTLogComPrintfV, 0xe97396ea, "");
SYMBOL_CRC(VBoxGuest_RTLogWriteCom, 0x752be631, "");
SYMBOL_CRC(VBoxGuest_RTLogFormatV, 0x82d5d53e, "");
SYMBOL_CRC(VBoxGuest_RTLogCreateEx, 0x032f326a, "");
SYMBOL_CRC(VBoxGuest_RTAssertMsg1Weak, 0x916e42f0, "");
SYMBOL_CRC(VBoxGuest_RTAssertMsg2, 0x8f1309e3, "");
SYMBOL_CRC(VBoxGuest_RTAssertMsg2Add, 0x0731e88d, "");
SYMBOL_CRC(VBoxGuest_RTAssertMsg2AddWeak, 0x598d3622, "");
SYMBOL_CRC(VBoxGuest_RTAssertMsg2AddWeakV, 0x983b7ea5, "");
SYMBOL_CRC(VBoxGuest_RTAssertMsg2Weak, 0x6e8541b7, "");
SYMBOL_CRC(VBoxGuest_RTAssertMsg2WeakV, 0xe6ef9652, "");
SYMBOL_CRC(VBoxGuest_g_szRTAssertMsg1, 0xacaac41d, "");
SYMBOL_CRC(VBoxGuest_g_szRTAssertMsg2, 0xbaa97421, "");
SYMBOL_CRC(VBoxGuest_g_pszRTAssertExpr, 0x0b94344b, "");
SYMBOL_CRC(VBoxGuest_g_pszRTAssertFunction, 0x9909ff3d, "");
SYMBOL_CRC(VBoxGuest_g_pszRTAssertFile, 0xb42ea0e3, "");
SYMBOL_CRC(VBoxGuest_g_u32RTAssertLine, 0x70422ba8, "");
SYMBOL_CRC(VBoxGuest_RTAssertSetQuiet, 0x87da3860, "");
SYMBOL_CRC(VBoxGuest_RTAssertAreQuiet, 0x0a442050, "");
SYMBOL_CRC(VBoxGuest_RTAssertSetMayPanic, 0xf7397dd2, "");
SYMBOL_CRC(VBoxGuest_RTAssertMayPanic, 0x2a2284fb, "");
SYMBOL_CRC(VBoxGuest_RTAssertMsg1, 0x56c939fe, "");
SYMBOL_CRC(VBoxGuest_RTAssertMsg2V, 0x66e1dfc3, "");
SYMBOL_CRC(VBoxGuest_RTAssertMsg2AddV, 0x0c5e86b2, "");
SYMBOL_CRC(VBoxGuest_RTThreadCreate, 0xc43ba5b5, "");
SYMBOL_CRC(VBoxGuest_RTThreadCreateV, 0x9ece97e7, "");
SYMBOL_CRC(VBoxGuest_RTThreadCreateF, 0x23a60d76, "");
SYMBOL_CRC(VBoxGuest_RTThreadGetNative, 0x9d79fa7a, "");
SYMBOL_CRC(VBoxGuest_RTThreadFromNative, 0xe67356f6, "");
SYMBOL_CRC(VBoxGuest_RTThreadSelfName, 0x56596e82, "");
SYMBOL_CRC(VBoxGuest_RTThreadGetName, 0x6ed6ec14, "");
SYMBOL_CRC(VBoxGuest_RTThreadSetName, 0x3389d02d, "");
SYMBOL_CRC(VBoxGuest_RTThreadIsMain, 0x0676b0e1, "");
SYMBOL_CRC(VBoxGuest_RTThreadIsSelfAlive, 0x1ae28abb, "");
SYMBOL_CRC(VBoxGuest_RTThreadIsSelfKnown, 0x84e227f6, "");
SYMBOL_CRC(VBoxGuest_RTThreadIsInitialized, 0x31ac4c5f, "");
SYMBOL_CRC(VBoxGuest_RTThreadUserSignal, 0x22fd1157, "");
SYMBOL_CRC(VBoxGuest_RTThreadUserWait, 0x4a367cd2, "");
SYMBOL_CRC(VBoxGuest_RTThreadUserWaitNoResume, 0x03a7844b, "");
SYMBOL_CRC(VBoxGuest_RTThreadUserReset, 0xeaa6f894, "");
SYMBOL_CRC(VBoxGuest_RTThreadWait, 0x04cff7c3, "");
SYMBOL_CRC(VBoxGuest_RTThreadWaitNoResume, 0xe2868acd, "");
SYMBOL_CRC(VBoxGuest_RTThreadSetType, 0x461d8c59, "");
SYMBOL_CRC(VBoxGuest_RTThreadGetType, 0x18511932, "");
SYMBOL_CRC(VBoxGuest_RTStrCat, 0x05849d32, "");
SYMBOL_CRC(VBoxGuest_RTStrCmp, 0x76211e93, "");
SYMBOL_CRC(VBoxGuest_RTStrCopy, 0x0ddd1cfc, "");
SYMBOL_CRC(VBoxGuest_RTStrCopyEx, 0x179e44f0, "");
SYMBOL_CRC(VBoxGuest_RTStrCopyP, 0xaec9e12e, "");
SYMBOL_CRC(VBoxGuest_RTStrEnd, 0x9dd32727, "");
SYMBOL_CRC(VBoxGuest_RTStrICmpAscii, 0xad0f9c42, "");
SYMBOL_CRC(VBoxGuest_RTStrNICmpAscii, 0xa00b0281, "");
SYMBOL_CRC(VBoxGuest_RTStrNCmp, 0x1152074c, "");
SYMBOL_CRC(VBoxGuest_RTStrNLen, 0xa5d070ac, "");
SYMBOL_CRC(VBoxGuest_RTStrAllocTag, 0x9071ba18, "");
SYMBOL_CRC(VBoxGuest_RTStrAllocExTag, 0xd54bb5c7, "");
SYMBOL_CRC(VBoxGuest_RTStrReallocTag, 0x12a66958, "");
SYMBOL_CRC(VBoxGuest_RTStrFree, 0x75626278, "");
SYMBOL_CRC(VBoxGuest_RTStrDupTag, 0xe32dab1e, "");
SYMBOL_CRC(VBoxGuest_RTStrDupExTag, 0xd57e3c8c, "");
SYMBOL_CRC(VBoxGuest_RTStrDupNTag, 0x15b8437c, "");
SYMBOL_CRC(VBoxGuest_RTStrDupNExTag, 0xe3963460, "");
SYMBOL_CRC(VBoxGuest_RTStrATruncateTag, 0x83fe11d2, "");
SYMBOL_CRC(VBoxGuest_RTStrFormatNumber, 0xc75876d4, "");
SYMBOL_CRC(VBoxGuest_RTStrFormatV, 0x6f7e229d, "");
SYMBOL_CRC(VBoxGuest_RTStrFormat, 0x28b2a01e, "");
SYMBOL_CRC(VBoxGuest_RTStrFormatTypeRegister, 0xf93da16a, "");
SYMBOL_CRC(VBoxGuest_RTStrFormatTypeDeregister, 0x6b91f1ce, "");
SYMBOL_CRC(VBoxGuest_RTStrFormatTypeSetUser, 0x82e081bc, "");
SYMBOL_CRC(VBoxGuest_RTStrPrintfV, 0x01cb0feb, "");
SYMBOL_CRC(VBoxGuest_RTStrPrintfExV, 0x220b8491, "");
SYMBOL_CRC(VBoxGuest_RTStrPrintf, 0x4da90fb2, "");
SYMBOL_CRC(VBoxGuest_RTStrPrintfEx, 0xde394d25, "");
SYMBOL_CRC(VBoxGuest_RTStrPrintf2V, 0xd69d796a, "");
SYMBOL_CRC(VBoxGuest_RTStrPrintf2ExV, 0xf2fce2dd, "");
SYMBOL_CRC(VBoxGuest_RTStrPrintf2, 0xd3a1ecc5, "");
SYMBOL_CRC(VBoxGuest_RTStrPrintf2Ex, 0xbcb1164a, "");
SYMBOL_CRC(VBoxGuest_RTStrToUInt64Ex, 0x460191c8, "");
SYMBOL_CRC(VBoxGuest_RTStrToUInt64Full, 0x0dcfaecc, "");
SYMBOL_CRC(VBoxGuest_RTStrToUInt64, 0x4e542948, "");
SYMBOL_CRC(VBoxGuest_RTStrToUInt32Ex, 0xb5e2977d, "");
SYMBOL_CRC(VBoxGuest_RTStrToUInt32Full, 0x744ecfc6, "");
SYMBOL_CRC(VBoxGuest_RTStrToUInt32, 0xe138675b, "");
SYMBOL_CRC(VBoxGuest_RTStrToUInt16Ex, 0xeeceb6e5, "");
SYMBOL_CRC(VBoxGuest_RTStrToUInt16Full, 0x808aa39c, "");
SYMBOL_CRC(VBoxGuest_RTStrToUInt16, 0x8a8ecb07, "");
SYMBOL_CRC(VBoxGuest_RTStrToUInt8Ex, 0xdca0eee6, "");
SYMBOL_CRC(VBoxGuest_RTStrToUInt8Full, 0x0a817cc5, "");
SYMBOL_CRC(VBoxGuest_RTStrToUInt8, 0xd0a2a89d, "");
SYMBOL_CRC(VBoxGuest_RTStrToInt64Ex, 0x522ad2be, "");
SYMBOL_CRC(VBoxGuest_RTStrToInt64Full, 0xcf8bb6ec, "");
SYMBOL_CRC(VBoxGuest_RTStrToInt64, 0x25b6d536, "");
SYMBOL_CRC(VBoxGuest_RTStrToInt32Ex, 0x8a2ec9e0, "");
SYMBOL_CRC(VBoxGuest_RTStrToInt32Full, 0xc796df87, "");
SYMBOL_CRC(VBoxGuest_RTStrToInt32, 0x9fbb55d9, "");
SYMBOL_CRC(VBoxGuest_RTStrToInt16Ex, 0x4b198c0c, "");
SYMBOL_CRC(VBoxGuest_RTStrToInt16Full, 0xd8cf2da7, "");
SYMBOL_CRC(VBoxGuest_RTStrToInt16, 0x115e09b5, "");
SYMBOL_CRC(VBoxGuest_RTStrToInt8Ex, 0xea9ae660, "");
SYMBOL_CRC(VBoxGuest_RTStrToInt8Full, 0x4c4a0374, "");
SYMBOL_CRC(VBoxGuest_RTStrToInt8, 0xca978682, "");
SYMBOL_CRC(VBoxGuest_RTStrConvertHexBytesEx, 0x573e416d, "");
SYMBOL_CRC(VBoxGuest_RTStrConvertHexBytes, 0x7045d741, "");
SYMBOL_CRC(VBoxGuest_RTStrUniLen, 0xd0c29688, "");
SYMBOL_CRC(VBoxGuest_RTStrUniLenEx, 0xbc11f1b6, "");
SYMBOL_CRC(VBoxGuest_RTStrValidateEncoding, 0x9f040718, "");
SYMBOL_CRC(VBoxGuest_RTStrValidateEncodingEx, 0xed7f1c11, "");
SYMBOL_CRC(VBoxGuest_RTStrIsValidEncoding, 0x186ad7f5, "");
SYMBOL_CRC(VBoxGuest_RTStrPurgeEncoding, 0xd984b9ad, "");
SYMBOL_CRC(VBoxGuest_RTStrPurgeComplementSet, 0xa0f4a395, "");
SYMBOL_CRC(VBoxGuest_RTStrToUni, 0x9eac4c31, "");
SYMBOL_CRC(VBoxGuest_RTStrToUniEx, 0xbaf9ae48, "");
SYMBOL_CRC(VBoxGuest_RTStrToUtf16Tag, 0x889050da, "");
SYMBOL_CRC(VBoxGuest_RTStrToUtf16BigTag, 0x8611845c, "");
SYMBOL_CRC(VBoxGuest_RTStrToUtf16ExTag, 0xfe12bf52, "");
SYMBOL_CRC(VBoxGuest_RTStrToUtf16BigExTag, 0xa4abb6bd, "");
SYMBOL_CRC(VBoxGuest_RTStrCalcUtf16Len, 0x9067b9fa, "");
SYMBOL_CRC(VBoxGuest_RTStrCalcUtf16LenEx, 0xb3d43242, "");
SYMBOL_CRC(VBoxGuest_RTLatin1ToUtf8Tag, 0x3d7f4b8a, "");
SYMBOL_CRC(VBoxGuest_RTLatin1ToUtf8ExTag, 0xa1990521, "");
SYMBOL_CRC(VBoxGuest_RTLatin1CalcUtf8Len, 0x66df0ce0, "");
SYMBOL_CRC(VBoxGuest_RTLatin1CalcUtf8LenEx, 0x8e54d6fc, "");
SYMBOL_CRC(VBoxGuest_RTStrToLatin1Tag, 0xa5b3e43d, "");
SYMBOL_CRC(VBoxGuest_RTStrToLatin1ExTag, 0xf09daa13, "");
SYMBOL_CRC(VBoxGuest_RTStrCalcLatin1Len, 0xdcd43a01, "");
SYMBOL_CRC(VBoxGuest_RTStrCalcLatin1LenEx, 0x91f79428, "");
SYMBOL_CRC(VBoxGuest_RTStrGetCpInternal, 0x04138b7e, "");
SYMBOL_CRC(VBoxGuest_RTStrGetCpExInternal, 0x083549ec, "");
SYMBOL_CRC(VBoxGuest_RTStrGetCpNExInternal, 0xcafe6e69, "");
SYMBOL_CRC(VBoxGuest_RTStrPutCpInternal, 0xd33bde75, "");
SYMBOL_CRC(VBoxGuest_RTStrPrevCp, 0x42eaae28, "");
SYMBOL_CRC(VBoxGuest_RTTimeIsLeapYear, 0x8d037686, "");
SYMBOL_CRC(VBoxGuest_RTTimeExplode, 0x724c68d0, "");
SYMBOL_CRC(VBoxGuest_RTTimeImplode, 0x2ff6bb9d, "");
SYMBOL_CRC(VBoxGuest_RTTimeNormalize, 0x067ceef9, "");
SYMBOL_CRC(VBoxGuest_RTTimeLocalNormalize, 0x78344027, "");
SYMBOL_CRC(VBoxGuest_RTTimeToString, 0x4296a433, "");
SYMBOL_CRC(VBoxGuest_RTTimeToStringEx, 0x54d9f145, "");
SYMBOL_CRC(VBoxGuest_RTTimeSpecToString, 0xef8b7df8, "");
SYMBOL_CRC(VBoxGuest_RTTimeFromString, 0xd618eaa6, "");
SYMBOL_CRC(VBoxGuest_RTTimeSpecFromString, 0x18808b62, "");
SYMBOL_CRC(VBoxGuest_RTTimeToRfc2822, 0xc7254b89, "");
SYMBOL_CRC(VBoxGuest_RTTimeFromRfc2822, 0x68a036b6, "");
SYMBOL_CRC(VBoxGuest_RTTimeConvertToZulu, 0x6c6c2566, "");
SYMBOL_CRC(VBoxGuest_RTTimeCompare, 0x646d4e28, "");
SYMBOL_CRC(VBoxGuest_RTAssertShouldPanic, 0xb8df2b3a, "");
SYMBOL_CRC(VBoxGuest_RTLogWriteStdErr, 0x80fd0df5, "");
SYMBOL_CRC(VBoxGuest_RTLogWriteStdOut, 0x2a042669, "");
SYMBOL_CRC(VBoxGuest_RTMpGetCoreCount, 0x844248ee, "");
SYMBOL_CRC(VBoxGuest_RTSemEventWait, 0x55b74c60, "");
SYMBOL_CRC(VBoxGuest_RTSemEventWaitNoResume, 0xb87633a3, "");
SYMBOL_CRC(VBoxGuest_RTSemEventMultiWait, 0xdc302ffd, "");
SYMBOL_CRC(VBoxGuest_RTSemEventMultiWaitNoResume, 0xe4e35cb0, "");
SYMBOL_CRC(VBoxGuest_RTMpGetPresentSet, 0x6e0c46a8, "");
SYMBOL_CRC(VBoxGuest_RTMpGetPresentCount, 0x1944b085, "");
SYMBOL_CRC(VBoxGuest_RTMpGetPresentCoreCount, 0x0ff064f3, "");
SYMBOL_CRC(VBoxGuest_RTMpIsCpuPresent, 0x67dfe37f, "");
SYMBOL_CRC(VBoxGuest_RTLogBackdoorPrintf, 0xa1690db5, "");
SYMBOL_CRC(VBoxGuest_RTLogBackdoorPrintfV, 0x20b209a2, "");
SYMBOL_CRC(VBoxGuest_RTLogWriteUser, 0x27b882b8, "");
SYMBOL_CRC(VBoxGuest_RTLogWriteVmm, 0xb65851ae, "");
SYMBOL_CRC(VBoxGuest_RTHeapSimpleInit, 0xca6d6f9e, "");
SYMBOL_CRC(VBoxGuest_RTHeapSimpleRelocate, 0x2c925e29, "");
SYMBOL_CRC(VBoxGuest_RTHeapSimpleAlloc, 0x268f005c, "");
SYMBOL_CRC(VBoxGuest_RTHeapSimpleAllocZ, 0x0ec5ad2c, "");
SYMBOL_CRC(VBoxGuest_RTHeapSimpleFree, 0x830e3d24, "");
SYMBOL_CRC(VBoxGuest_RTHeapSimpleSize, 0xbcfe9425, "");
SYMBOL_CRC(VBoxGuest_RTHeapSimpleGetHeapSize, 0x97b394d6, "");
SYMBOL_CRC(VBoxGuest_RTHeapSimpleGetFreeSize, 0x9bae3708, "");
SYMBOL_CRC(VBoxGuest_RTHeapSimpleDump, 0xed096615, "");
SYMBOL_CRC(VBoxGuest_RTMemContAlloc, 0xa4582b8e, "");
SYMBOL_CRC(VBoxGuest_RTMemContFree, 0xf40683b9, "");
SYMBOL_CRC(VBoxGuest_RTR0AssertPanicSystem, 0xe2765c54, "");
SYMBOL_CRC(VBoxGuest_rtR0MemObjLinuxVirtToPage, 0xd5c66d89, "");
SYMBOL_CRC(VBoxGuest_RTR0MemUserCopyFrom, 0xc123d25b, "");
SYMBOL_CRC(VBoxGuest_RTR0MemUserCopyTo, 0x16628c08, "");
SYMBOL_CRC(VBoxGuest_RTR0MemUserIsValidAddr, 0x903265a8, "");
SYMBOL_CRC(VBoxGuest_RTR0MemKernelIsValidAddr, 0x9cd9213f, "");
SYMBOL_CRC(VBoxGuest_RTR0MemAreKrnlAndUsrDifferent, 0x83e78406, "");
SYMBOL_CRC(VBoxGuest_RTR0MemKernelCopyFrom, 0x12d463bb, "");
SYMBOL_CRC(VBoxGuest_RTR0MemKernelCopyTo, 0x954e17ea, "");
SYMBOL_CRC(VBoxGuest_RTMpCpuId, 0x88677567, "");
SYMBOL_CRC(VBoxGuest_RTMpCurSetIndex, 0x0cd1b64d, "");
SYMBOL_CRC(VBoxGuest_RTMpCurSetIndexAndId, 0xf0b0e938, "");
SYMBOL_CRC(VBoxGuest_RTMpCpuIdToSetIndex, 0x391cf59d, "");
SYMBOL_CRC(VBoxGuest_RTMpCpuIdFromSetIndex, 0xe7b11dc3, "");
SYMBOL_CRC(VBoxGuest_RTMpGetMaxCpuId, 0x413c6315, "");
SYMBOL_CRC(VBoxGuest_RTMpIsCpuPossible, 0xdfcec837, "");
SYMBOL_CRC(VBoxGuest_RTMpGetSet, 0x29d1707f, "");
SYMBOL_CRC(VBoxGuest_RTMpGetCount, 0x63572a87, "");
SYMBOL_CRC(VBoxGuest_RTMpIsCpuOnline, 0xd19061a4, "");
SYMBOL_CRC(VBoxGuest_RTMpGetOnlineSet, 0x7d8e3630, "");
SYMBOL_CRC(VBoxGuest_RTMpGetOnlineCount, 0x0fdcfdc3, "");
SYMBOL_CRC(VBoxGuest_RTMpIsCpuWorkPending, 0x0beb235d, "");
SYMBOL_CRC(VBoxGuest_RTMpOnAll, 0xc7a78abb, "");
SYMBOL_CRC(VBoxGuest_RTMpOnOthers, 0xff772f13, "");
SYMBOL_CRC(VBoxGuest_RTMpOnPair, 0x83c9a103, "");
SYMBOL_CRC(VBoxGuest_RTMpOnPairIsConcurrentExecSupported, 0x6173b384, "");
SYMBOL_CRC(VBoxGuest_RTMpOnSpecific, 0x15febecc, "");
SYMBOL_CRC(VBoxGuest_RTMpPokeCpu, 0xe3505015, "");
SYMBOL_CRC(VBoxGuest_RTMpOnAllIsConcurrentSafe, 0xf8113d66, "");
SYMBOL_CRC(VBoxGuest_RTProcSelf, 0x67d03567, "");
SYMBOL_CRC(VBoxGuest_RTR0ProcHandleSelf, 0x897d1764, "");
SYMBOL_CRC(VBoxGuest_RTSemEventCreate, 0x55444eee, "");
SYMBOL_CRC(VBoxGuest_RTSemEventDestroy, 0x4ca5f66f, "");
SYMBOL_CRC(VBoxGuest_RTSemEventSignal, 0x33c113eb, "");
SYMBOL_CRC(VBoxGuest_RTSemEventWaitEx, 0x5abb85e9, "");
SYMBOL_CRC(VBoxGuest_RTSemEventWaitExDebug, 0x03a2f959, "");
SYMBOL_CRC(VBoxGuest_RTSemEventGetResolution, 0x7052415a, "");
SYMBOL_CRC(VBoxGuest_RTSemEventIsSignalSafe, 0xb7715ba9, "");
SYMBOL_CRC(VBoxGuest_RTSemEventMultiCreate, 0xd853f43b, "");
SYMBOL_CRC(VBoxGuest_RTSemEventMultiDestroy, 0x4e18f14d, "");
SYMBOL_CRC(VBoxGuest_RTSemEventMultiSignal, 0x1e7b1de7, "");
SYMBOL_CRC(VBoxGuest_RTSemEventMultiReset, 0x6b844498, "");
SYMBOL_CRC(VBoxGuest_RTSemEventMultiWaitEx, 0x2e05c1e6, "");
SYMBOL_CRC(VBoxGuest_RTSemEventMultiWaitExDebug, 0xd29b7f8c, "");
SYMBOL_CRC(VBoxGuest_RTSemEventMultiGetResolution, 0xaa151f6e, "");
SYMBOL_CRC(VBoxGuest_RTSemEventMultiIsSignalSafe, 0xa7448a06, "");
SYMBOL_CRC(VBoxGuest_RTSemFastMutexCreate, 0x80617cdc, "");
SYMBOL_CRC(VBoxGuest_RTSemFastMutexDestroy, 0xc280d35c, "");
SYMBOL_CRC(VBoxGuest_RTSemFastMutexRequest, 0xcfba2f70, "");
SYMBOL_CRC(VBoxGuest_RTSemFastMutexRelease, 0x513bb0e2, "");
SYMBOL_CRC(VBoxGuest_RTSemMutexCreate, 0x720835a5, "");
SYMBOL_CRC(VBoxGuest_RTSemMutexDestroy, 0x889c3ac9, "");
SYMBOL_CRC(VBoxGuest_RTSemMutexRequest, 0x676b986e, "");
SYMBOL_CRC(VBoxGuest_RTSemMutexRequestDebug, 0xda71bbae, "");
SYMBOL_CRC(VBoxGuest_RTSemMutexRequestNoResume, 0x512ac961, "");
SYMBOL_CRC(VBoxGuest_RTSemMutexRequestNoResumeDebug, 0x02ae4c02, "");
SYMBOL_CRC(VBoxGuest_RTSemMutexRelease, 0xd4654f55, "");
SYMBOL_CRC(VBoxGuest_RTSemMutexIsOwned, 0x9cd3cb8a, "");
SYMBOL_CRC(VBoxGuest_RTSpinlockCreate, 0x9c853a9a, "");
SYMBOL_CRC(VBoxGuest_RTSpinlockDestroy, 0x27d372ec, "");
SYMBOL_CRC(VBoxGuest_RTSpinlockAcquire, 0xf6fa5528, "");
SYMBOL_CRC(VBoxGuest_RTSpinlockRelease, 0xd54962af, "");
SYMBOL_CRC(VBoxGuest_RTThreadNativeSelf, 0x507d25df, "");
SYMBOL_CRC(VBoxGuest_RTThreadSleep, 0x3da07be4, "");
SYMBOL_CRC(VBoxGuest_RTThreadSleepNoLog, 0x91fe04ab, "");
SYMBOL_CRC(VBoxGuest_RTThreadYield, 0xde9ca744, "");
SYMBOL_CRC(VBoxGuest_RTThreadPreemptIsEnabled, 0x1a6d7d86, "");
SYMBOL_CRC(VBoxGuest_RTThreadPreemptIsPending, 0x58d1b65e, "");
SYMBOL_CRC(VBoxGuest_RTThreadPreemptIsPendingTrusty, 0xdfbc69bb, "");
SYMBOL_CRC(VBoxGuest_RTThreadPreemptIsPossible, 0x54ddf87c, "");
SYMBOL_CRC(VBoxGuest_RTThreadPreemptDisable, 0x7778acce, "");
SYMBOL_CRC(VBoxGuest_RTThreadPreemptRestore, 0x2b383e4d, "");
SYMBOL_CRC(VBoxGuest_RTThreadIsInInterrupt, 0x3fbf3c07, "");
SYMBOL_CRC(VBoxGuest_RTThreadQueryTerminationStatus, 0xc8bfd89a, "");
SYMBOL_CRC(VBoxGuest_RTTimeNanoTS, 0x2f7accdc, "");
SYMBOL_CRC(VBoxGuest_RTTimeMilliTS, 0xece9826b, "");
SYMBOL_CRC(VBoxGuest_RTTimeSystemNanoTS, 0xafc6deca, "");
SYMBOL_CRC(VBoxGuest_RTTimeSystemMilliTS, 0x18bd8b28, "");
SYMBOL_CRC(VBoxGuest_RTTimeNow, 0x232fd40a, "");
SYMBOL_CRC(VBoxGuest_RTTimerStart, 0x4014b950, "");
SYMBOL_CRC(VBoxGuest_RTTimerStop, 0x18b6340c, "");
SYMBOL_CRC(VBoxGuest_RTTimerChangeInterval, 0x6f8a3854, "");
SYMBOL_CRC(VBoxGuest_RTTimerDestroy, 0xd0b6e8f4, "");
SYMBOL_CRC(VBoxGuest_RTTimerCreateEx, 0x832043d7, "");
SYMBOL_CRC(VBoxGuest_RTTimerGetSystemGranularity, 0x95703106, "");
SYMBOL_CRC(VBoxGuest_RTTimerRequestSystemGranularity, 0xd7d99aca, "");
SYMBOL_CRC(VBoxGuest_RTTimerReleaseSystemGranularity, 0x1b240806, "");
SYMBOL_CRC(VBoxGuest_RTTimerCanDoHighResolution, 0xac990d74, "");
SYMBOL_CRC(VBoxGuest_RTLogWriteDebugger, 0xc3be7224, "");
SYMBOL_CRC(VBoxGuest_RTErrConvertFromErrno, 0x67f0b0df, "");
SYMBOL_CRC(VBoxGuest_RTErrConvertToErrno, 0x1f70d065, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x25214310, "input_allocate_device" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x760a0f4f, "yield" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x118a3696, "misc_deregister" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x96e1679, "pci_enable_device" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3c392c72, "sched_set_normal" },
	{ 0x338e80e9, "hrtimer_try_to_cancel" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x5b56860c, "vm_munmap" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70a96d8f, "tty_kref_put" },
	{ 0x4d30cfdb, "kill_fasync" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xac1397a, "__pci_register_driver" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0xcf2a6966, "up" },
	{ 0xedc03953, "iounmap" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xa3535033, "input_unregister_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x72d79d83, "pgdir_shift" },
	{ 0x5504dc93, "remap_pfn_range" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0x43b73654, "vm_mmap" },
	{ 0xa8f22c42, "__put_devmap_managed_page_refs" },
	{ 0xd03eaf4c, "schedule_hrtimeout_range" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x242e6db5, "sched_set_fifo_low" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb589df2c, "pci_unregister_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1e299e, "get_user_pages_remote" },
	{ 0xf513657, "wake_up_process" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xad2ffd5d, "input_free_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7842ba96, "input_register_device" },
	{ 0xe59780e0, "get_user_pages" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0xa0eae826, "smp_call_function" },
	{ 0x888999e6, "__free_pages" },
	{ 0x6c4ecd7c, "find_vma" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xd2ab689f, "vm_insert_page" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x9de82992, "__cpuhp_setup_state" },
	{ 0x1d19f77b, "physical_mask" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa07a37f0, "memchr" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6626afca, "down" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x215b09c5, "from_kgid" },
	{ 0xbc4bdf6d, "fasync_helper" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x1515378c, "apply_to_page_range" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf1e046cc, "panic" },
	{ 0x87b6ae42, "vmap" },
	{ 0xde80cd09, "ioremap" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb9d10cd, "current_task" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xbdfae6e4, "from_kuid" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xfb578fc5, "memset" },
	{ 0xdad13544, "ptrs_per_p4d" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0x83907961, "misc_register" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb83ea44d, "input_event" },
	{ 0xa2d2cf31, "input_set_abs_params" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbb13595e, "smp_call_function_many" },
	{ 0xf558ab2c, "kthread_create_on_node" },
	{ 0x379ff9a8, "pv_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x999e8297, "vfree" },
	{ 0xc512626a, "__supported_pte_mask" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xab2e45aa, "alloc_pages" },
	{ 0x52b41c7f, "__folio_put" },
	{ 0x8500d527, "tty_name" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0xb5e0764c, "pci_disable_device" },
	{ 0x78d27962, "boot_cpu_data" },
	{ 0xf832e257, "sched_set_fifo" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x41a0c772, "get_current_tty" },
	{ 0x39461d6a, "in_egroup_p" },
	{ 0x754d539c, "strlen" },
	{ 0x77358855, "iomem_resource" },
	{ 0xa40e45cd, "param_ops_int" },
	{ 0x349cba85, "strchr" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0xdeacc7b4, "__cpuhp_remove_state" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0x9b9daf0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000080EEd0000CAFEsv00000000sd00000000bc*sc*i*");

MODULE_INFO(srcversion, "BFC9FA9309928D0E0C4400E");
