cmd_/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibGenericRequest.o := gcc -Wp,-MMD,/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/.VBoxGuestR0LibGenericRequest.o.d -nostdinc -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -fmacro-prefix-map=./= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu11 -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -fcf-protection=none -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -Wno-sign-compare -fno-asynchronous-unwind-tables -mindirect-branch=thunk-extern -mindirect-branch-register -mindirect-branch-cs-prefix -mfunction-return=thunk-extern -fno-jump-tables -mharden-sls=all -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -fno-allow-store-data-races -Wframe-larger-than=2048 -fstack-protector-strong -Wno-main -Wno-unused-but-set-variable -Wno-unused-const-variable -Wno-dangling-pointer -ftrivial-auto-var-init=zero -fno-stack-clash-protection -pg -mrecord-mcount -mfentry -DCC_USING_FENTRY -Wvla -Wno-pointer-sign -Wcast-function-type -Wno-stringop-truncation -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -Wno-array-bounds -Wno-alloc-size-larger-than -Wimplicit-fallthrough=5 -fno-strict-overflow -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wno-packed-not-aligned -g -Wno-declaration-after-statement -fno-pie -include /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf//include/VBox/VBoxGuestMangling.h -fshort-wchar -I./include -I/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/ -I/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include -I/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/r0drv/linux -D__KERNEL__ -DMODULE -DRT_WITHOUT_PRAGMA_ONCE -DRT_OS_LINUX -DIN_RING0 -DIN_RT_R0 -DIN_SUP_R0 -DVBOX -DVBOX_WITH_HGCM -DIN_MODULE -DIN_GUEST -DIN_GUEST_R0 -DRT_NO_EXPORT_SYMBOL -DVBOX_WITH_64_BITS_GUESTS -DRT_ARCH_AMD64  -DMODULE  -DKBUILD_BASENAME='"VBoxGuestR0LibGenericRequest"' -DKBUILD_MODNAME='"vboxsf"' -D__KBUILD_MODNAME=kmod_vboxsf -c -o /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibGenericRequest.o /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibGenericRequest.c   ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --orc --retpoline --rethunk --sls --static-call --uaccess   --module /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibGenericRequest.o

source_/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibGenericRequest.o := /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibGenericRequest.c

deps_/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibGenericRequest.o := \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/linux/compiler_types.h \
    $(wildcard include/config/DEBUG_INFO_BTF) \
    $(wildcard include/config/PAHOLE_HAS_BTF_TAG) \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/RETPOLINE) \
    $(wildcard include/config/GCC_ASM_GOTO_OUTPUT_WORKAROUND) \
    $(wildcard include/config/ARCH_USE_BUILTIN_BSWAP) \
    $(wildcard include/config/SHADOW_CALL_STACK) \
    $(wildcard include/config/KCOV) \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf//include/VBox/VBoxGuestMangling.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/mangling.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibInternal.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/types.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/cdefs.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/stdint.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/stdarg.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/linux/version.h \
    $(wildcard include/config/SUSE_VERSION) \
    $(wildcard include/config/SUSE_PATCHLEVEL) \
  include/generated/uapi/linux/version.h \
  include/generated/utsrelease.h \
  include/linux/stdarg.h \
  include/linux/compiler.h \
    $(wildcard include/config/TRACE_BRANCH_PROFILING) \
    $(wildcard include/config/PROFILE_ALL_BRANCHES) \
    $(wildcard include/config/OBJTOOL) \
  include/linux/compiler_types.h \
  arch/x86/include/generated/asm/rwonce.h \
  include/asm-generic/rwonce.h \
  include/linux/kasan-checks.h \
    $(wildcard include/config/KASAN_GENERIC) \
    $(wildcard include/config/KASAN_SW_TAGS) \
  include/linux/types.h \
    $(wildcard include/config/HAVE_UID16) \
    $(wildcard include/config/UID16) \
    $(wildcard include/config/ARCH_DMA_ADDR_T_64BIT) \
    $(wildcard include/config/PHYS_ADDR_T_64BIT) \
    $(wildcard include/config/64BIT) \
    $(wildcard include/config/ARCH_32BIT_USTAT_F_TINODE) \
  include/uapi/linux/types.h \
  arch/x86/include/generated/uapi/asm/types.h \
  include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/x86/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  arch/x86/include/asm/posix_types.h \
    $(wildcard include/config/X86_32) \
  arch/x86/include/uapi/asm/posix_types_64.h \
  include/uapi/asm-generic/posix_types.h \
  include/linux/kcsan-checks.h \
    $(wildcard include/config/KCSAN) \
    $(wildcard include/config/KCSAN_WEAK_MEMORY) \
    $(wildcard include/config/KCSAN_IGNORE_ATOMICS) \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/assert.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/assertcompile.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/VBox/VMMDev.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/VBox/cdefs.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/VBox/param.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/param.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/VBox/types.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/VBox/ostypes.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/VBox/VMMDevCoreTypes.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/errcore.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/VBox/VBoxGuest.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/VBox/VBoxGuestCoreTypes.h \
  include/uapi/linux/ioctl.h \
  arch/x86/include/generated/uapi/asm/ioctl.h \
  include/asm-generic/ioctl.h \
  include/uapi/asm-generic/ioctl.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/VBox/VBoxGuestLib.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/VBox/log.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/log.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/asm.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/asm-amd64-x86.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/x86-helpers.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/string.h \
    $(wildcard include/config/FORTIFY_SOURCE) \
  include/linux/string.h \
    $(wildcard include/config/BINARY_PRINTF) \
  include/linux/err.h \
  arch/x86/include/generated/uapi/asm/errno.h \
  include/uapi/asm-generic/errno.h \
  include/uapi/asm-generic/errno-base.h \
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  include/linux/overflow.h \
  include/linux/limits.h \
  include/uapi/linux/limits.h \
  include/vdso/limits.h \
  include/linux/const.h \
  include/vdso/const.h \
  include/uapi/linux/const.h \
  include/uapi/linux/string.h \
  arch/x86/include/asm/string.h \
  arch/x86/include/asm/string_64.h \
    $(wildcard include/config/KASAN) \
    $(wildcard include/config/ARCH_HAS_UACCESS_FLUSHCACHE) \
  include/linux/jump_label.h \
    $(wildcard include/config/JUMP_LABEL) \
    $(wildcard include/config/HAVE_ARCH_JUMP_LABEL_RELATIVE) \
  arch/x86/include/asm/jump_label.h \
    $(wildcard include/config/HAVE_JUMP_LABEL_HACK) \
  arch/x86/include/asm/asm.h \
    $(wildcard include/config/KPROBES) \
  include/linux/stringify.h \
  arch/x86/include/asm/extable_fixup_types.h \
  arch/x86/include/asm/nops.h \
  include/linux/fortify-string.h \
    $(wildcard include/config/KMSAN) \
  include/linux/bug.h \
    $(wildcard include/config/GENERIC_BUG) \
    $(wildcard include/config/BUG_ON_DATA_CORRUPTION) \
  arch/x86/include/asm/bug.h \
    $(wildcard include/config/DEBUG_BUGVERBOSE) \
  include/linux/instrumentation.h \
    $(wildcard include/config/NOINSTR_VALIDATION) \
  include/linux/objtool.h \
    $(wildcard include/config/FRAME_POINTER) \
  include/asm-generic/bug.h \
    $(wildcard include/config/BUG) \
    $(wildcard include/config/GENERIC_BUG_RELATIVE_POINTERS) \
    $(wildcard include/config/SMP) \
  include/linux/once_lite.h \
  include/linux/panic.h \
    $(wildcard include/config/PANIC_TIMEOUT) \
  include/linux/printk.h \
    $(wildcard include/config/MESSAGE_LOGLEVEL_DEFAULT) \
    $(wildcard include/config/CONSOLE_LOGLEVEL_DEFAULT) \
    $(wildcard include/config/CONSOLE_LOGLEVEL_QUIET) \
    $(wildcard include/config/EARLY_PRINTK) \
    $(wildcard include/config/PRINTK) \
    $(wildcard include/config/PRINTK_INDEX) \
    $(wildcard include/config/DYNAMIC_DEBUG) \
    $(wildcard include/config/DYNAMIC_DEBUG_CORE) \
  include/linux/init.h \
    $(wildcard include/config/HAVE_ARCH_PREL32_RELOCATIONS) \
    $(wildcard include/config/STRICT_KERNEL_RWX) \
    $(wildcard include/config/STRICT_MODULE_RWX) \
    $(wildcard include/config/LTO_CLANG) \
  include/linux/kern_levels.h \
  include/linux/linkage.h \
    $(wildcard include/config/ARCH_USE_SYM_ANNOTATIONS) \
  include/linux/export.h \
    $(wildcard include/config/MODVERSIONS) \
    $(wildcard include/config/MODULES) \
    $(wildcard include/config/TRIM_UNUSED_KSYMS) \
  arch/x86/include/asm/linkage.h \
    $(wildcard include/config/X86_64) \
    $(wildcard include/config/X86_ALIGNMENT_16) \
    $(wildcard include/config/RETHUNK) \
    $(wildcard include/config/SLS) \
  arch/x86/include/asm/ibt.h \
    $(wildcard include/config/X86_KERNEL_IBT) \
  include/linux/ratelimit_types.h \
  include/linux/bits.h \
  include/vdso/bits.h \
  include/linux/build_bug.h \
  include/uapi/linux/param.h \
  arch/x86/include/generated/uapi/asm/param.h \
  include/asm-generic/param.h \
    $(wildcard include/config/HZ) \
  include/uapi/asm-generic/param.h \
  include/linux/spinlock_types_raw.h \
    $(wildcard include/config/DEBUG_SPINLOCK) \
    $(wildcard include/config/DEBUG_LOCK_ALLOC) \
  arch/x86/include/asm/spinlock_types.h \
  include/asm-generic/qspinlock_types.h \
    $(wildcard include/config/NR_CPUS) \
  include/asm-generic/qrwlock_types.h \
  arch/x86/include/uapi/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/uapi/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  include/uapi/linux/swab.h \
  arch/x86/include/uapi/asm/swab.h \
  include/linux/byteorder/generic.h \
  include/linux/lockdep_types.h \
    $(wildcard include/config/PROVE_RAW_LOCK_NESTING) \
    $(wildcard include/config/LOCKDEP) \
    $(wildcard include/config/LOCK_STAT) \
  include/linux/dynamic_debug.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/linux/version.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/VBox/err.h \
  /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include/iprt/err.h \

/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibGenericRequest.o: $(deps_/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibGenericRequest.o)

$(deps_/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibGenericRequest.o):

/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibGenericRequest.o: $(wildcard ./tools/objtool/objtool)
