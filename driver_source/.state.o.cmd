cmd_/home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/state.o := gcc -Wp,-MD,/home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/.state.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/4.8/include  -I./arch/x86/include -Iarch/x86/include/generated  -Iinclude -I./arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -Iubuntu/include  -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -m64 -mno-mmx -mno-sse -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mtune=generic -mno-red-zone -mcmodel=kernel -funit-at-a-time -maccumulate-outgoing-args -DCONFIG_X86_X32_ABI -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -fno-delete-null-pointer-checks -O2 -Wframe-larger-than=1024 -fstack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -mfentry -DCC_USING_FENTRY -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO -I/home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include -DBUILDING_MODULE -DLINUX_IO_SCHED  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(state)"  -D"KBUILD_MODNAME=KBUILD_STR(iomemory_vsl)" -c -o /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/.tmp_state.o /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/state.c

source_/home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/state.o := /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/state.c

deps_/home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/state.o := \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  arch/x86/include/uapi/asm/types.h \
  include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/x86/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  arch/x86/include/asm/posix_types.h \
    $(wildcard include/config/x86/32.h) \
  arch/x86/include/uapi/asm/posix_types_64.h \
  include/uapi/asm-generic/posix_types.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/state.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/ktypes.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/port_config.h \
    $(wildcard include/config/h//.h) \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/port_config_vars_externs.h \
    $(wildcard include/config/vars/externs/h//.h) \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/align.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/gcc/align.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kglobal.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/arch/x86_atomic.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/arch/x86_cache.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/linux/ktypes.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/common-linux/kassert.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/bitops.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/arch/bits.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/compiler.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/common-linux/compiler.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/arch/x86_64/bits.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/common-linux/commontypes.h \
  /usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/list.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/ktypes_64.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kbitops.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kblock.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kmisc.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/cdev.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kcondvar.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/common-linux/kcondvar.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kdebug.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kmem.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/errno.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/common-linux/errno.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kchunk.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kbmp.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kscatter.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/ktime.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/sched.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kinfo.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kcache.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kbio.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/byteswap.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/stdint.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/common-linux/stdint.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/commontypes.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/unaligned.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kfio.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/kcpu.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/common-linux/kfio.h \
  /usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/common-linux/div64.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/vararg.h \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/dbgset.h \
    $(wildcard include/config/set/dbgflag.h) \
    $(wildcard include/config/macro.h) \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/port_config_macros_clear.h \
    $(wildcard include/config/set/all.h) \
    $(wildcard include/config/set/boolean.h) \
    $(wildcard include/config/set/int.h) \
    $(wildcard include/config/set/string.h) \
  /home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/include/fio/port/port_config_macros.h \

/home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/state.o: $(deps_/home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/state.o)

$(deps_/home/promise/bin/fio/iomemory-vsl-3.2.10.1509/driver_source/state.o):
