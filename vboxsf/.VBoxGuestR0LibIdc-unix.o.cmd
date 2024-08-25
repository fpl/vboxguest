cmd_/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibIdc-unix.o := gcc -Wp,-MMD,/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/.VBoxGuestR0LibIdc-unix.o.d -nostdinc -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -fmacro-prefix-map=./= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu11 -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -fcf-protection=none -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -Wno-sign-compare -fno-asynchronous-unwind-tables -mindirect-branch=thunk-extern -mindirect-branch-register -mindirect-branch-cs-prefix -mfunction-return=thunk-extern -fno-jump-tables -mharden-sls=all -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -fno-allow-store-data-races -Wframe-larger-than=2048 -fstack-protector-strong -Wno-main -Wno-unused-but-set-variable -Wno-unused-const-variable -Wno-dangling-pointer -ftrivial-auto-var-init=zero -fno-stack-clash-protection -pg -mrecord-mcount -mfentry -DCC_USING_FENTRY -Wvla -Wno-pointer-sign -Wcast-function-type -Wno-stringop-truncation -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -Wno-array-bounds -Wno-alloc-size-larger-than -Wimplicit-fallthrough=5 -fno-strict-overflow -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wno-packed-not-aligned -g -Wno-declaration-after-statement -fno-pie -include /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf//include/VBox/VBoxGuestMangling.h -fshort-wchar -I./include -I/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/ -I/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/include -I/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/r0drv/linux -D__KERNEL__ -DMODULE -DRT_WITHOUT_PRAGMA_ONCE -DRT_OS_LINUX -DIN_RING0 -DIN_RT_R0 -DIN_SUP_R0 -DVBOX -DVBOX_WITH_HGCM -DIN_MODULE -DIN_GUEST -DIN_GUEST_R0 -DRT_NO_EXPORT_SYMBOL -DVBOX_WITH_64_BITS_GUESTS -DRT_ARCH_AMD64  -DMODULE  -DKBUILD_BASENAME='"VBoxGuestR0LibIdc_unix"' -DKBUILD_MODNAME='"vboxsf"' -D__KBUILD_MODNAME=kmod_vboxsf -c -o /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibIdc-unix.o /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibIdc-unix.c   ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --orc --retpoline --rethunk --sls --static-call --uaccess   --module /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibIdc-unix.o

source_/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibIdc-unix.o := /tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibIdc-unix.c

deps_/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibIdc-unix.o := \
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

/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibIdc-unix.o: $(deps_/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibIdc-unix.o)

$(deps_/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibIdc-unix.o):

/tmp/vboxguest/src/vboxguest-7.0.20/vboxsf/VBoxGuestR0LibIdc-unix.o: $(wildcard ./tools/objtool/objtool)
