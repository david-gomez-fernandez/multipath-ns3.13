# 1 "linux-2.6.26/net/sysctl_net.c"
# 1 "/media/sda4/GIT/network-coding-ns-3-13/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "linux-2.6.26/include/linux/config.h" 1





# 1 "linux-2.6.26/include/linux/autoconf.h" 1
# 7 "linux-2.6.26/include/linux/config.h" 2
# 1 "<command-line>" 2
# 1 "linux-2.6.26/nsc/nsc_override.h" 1




#include "num_stacks.h"
static inline struct task_struct * nsc_get_task(void)
{
  typedef  struct task_struct   _GLOBAL_0_T; extern  _GLOBAL_0_T  * _GLOBAL_0_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_1_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_2_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_3_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_4_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_5_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_6_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_7_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_8_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_9_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_10_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_11_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_12_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_13_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_14_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_15_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_16_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_17_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_18_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_19_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_20_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_21_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_22_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_23_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_24_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_25_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_26_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_27_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_28_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_29_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_30_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_31_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_32_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_33_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_34_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_35_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_36_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_37_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_38_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_39_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_40_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_41_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_42_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_43_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_44_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_45_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_46_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_47_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_48_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_49_nsc_task_I ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_nsc_task_I) *_GLOBAL_nsc_task_0_A[NUM_STACKS] = { &_GLOBAL_0_nsc_task_I, &_GLOBAL_1_nsc_task_I, &_GLOBAL_2_nsc_task_I, &_GLOBAL_3_nsc_task_I, &_GLOBAL_4_nsc_task_I, &_GLOBAL_5_nsc_task_I, &_GLOBAL_6_nsc_task_I, &_GLOBAL_7_nsc_task_I, &_GLOBAL_8_nsc_task_I, &_GLOBAL_9_nsc_task_I, &_GLOBAL_10_nsc_task_I, &_GLOBAL_11_nsc_task_I, &_GLOBAL_12_nsc_task_I, &_GLOBAL_13_nsc_task_I, &_GLOBAL_14_nsc_task_I, &_GLOBAL_15_nsc_task_I, &_GLOBAL_16_nsc_task_I, &_GLOBAL_17_nsc_task_I, &_GLOBAL_18_nsc_task_I, &_GLOBAL_19_nsc_task_I, &_GLOBAL_20_nsc_task_I, &_GLOBAL_21_nsc_task_I, &_GLOBAL_22_nsc_task_I, &_GLOBAL_23_nsc_task_I, &_GLOBAL_24_nsc_task_I, &_GLOBAL_25_nsc_task_I, &_GLOBAL_26_nsc_task_I, &_GLOBAL_27_nsc_task_I, &_GLOBAL_28_nsc_task_I, &_GLOBAL_29_nsc_task_I, &_GLOBAL_30_nsc_task_I, &_GLOBAL_31_nsc_task_I, &_GLOBAL_32_nsc_task_I, &_GLOBAL_33_nsc_task_I, &_GLOBAL_34_nsc_task_I, &_GLOBAL_35_nsc_task_I, &_GLOBAL_36_nsc_task_I, &_GLOBAL_37_nsc_task_I, &_GLOBAL_38_nsc_task_I, &_GLOBAL_39_nsc_task_I, &_GLOBAL_40_nsc_task_I, &_GLOBAL_41_nsc_task_I, &_GLOBAL_42_nsc_task_I, &_GLOBAL_43_nsc_task_I, &_GLOBAL_44_nsc_task_I, &_GLOBAL_45_nsc_task_I, &_GLOBAL_46_nsc_task_I, &_GLOBAL_47_nsc_task_I, &_GLOBAL_48_nsc_task_I, &_GLOBAL_49_nsc_task_I, };   
  return (*_GLOBAL_nsc_task_0_A[get_stack_id()]);
}
# 1 "<command-line>" 2
# 1 "linux-2.6.26/net/sysctl_net.c"
# 15 "linux-2.6.26/net/sysctl_net.c"
# 1 "linux-2.6.26/include/linux/mm.h" 1



# 1 "linux-2.6.26/include/linux/errno.h" 1



# 1 "linux-2.6.26/include/asm/errno.h" 1
# 1 "linux-2.6.26/include/asm-generic/errno.h" 1



# 1 "linux-2.6.26/include/asm-generic/errno-base.h" 1
# 5 "linux-2.6.26/include/asm-generic/errno.h" 2
# 1 "linux-2.6.26/include/asm/errno.h" 2
# 5 "linux-2.6.26/include/linux/errno.h" 2
# 5 "linux-2.6.26/include/linux/mm.h" 2



# 1 "linux-2.6.26/include/linux/gfp.h" 1



# 1 "linux-2.6.26/include/linux/mmzone.h" 1






# 1 "linux-2.6.26/include/linux/spinlock.h" 1
# 49 "linux-2.6.26/include/linux/spinlock.h"
# 1 "linux-2.6.26/include/linux/preempt.h" 1
# 9 "linux-2.6.26/include/linux/preempt.h"
# 1 "linux-2.6.26/include/linux/thread_info.h" 1
# 10 "linux-2.6.26/include/linux/thread_info.h"
# 1 "linux-2.6.26/include/linux/types.h" 1
# 11 "linux-2.6.26/include/linux/types.h"
# 1 "linux-2.6.26/include/linux/posix_types.h" 1



# 1 "linux-2.6.26/include/linux/stddef.h" 1



# 1 "linux-2.6.26/include/linux/compiler.h" 1
# 40 "linux-2.6.26/include/linux/compiler.h"
# 1 "linux-2.6.26/include/linux/compiler-gcc4.h" 1





# 1 "linux-2.6.26/include/linux/compiler-gcc.h" 1
# 7 "linux-2.6.26/include/linux/compiler-gcc4.h" 2
# 41 "linux-2.6.26/include/linux/compiler.h" 2
# 5 "linux-2.6.26/include/linux/stddef.h" 2
# 15 "linux-2.6.26/include/linux/stddef.h"
enum {
 false = 0,
 true = 1
};
# 5 "linux-2.6.26/include/linux/posix_types.h" 2
# 36 "linux-2.6.26/include/linux/posix_types.h"
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "linux-2.6.26/include/asm/posix_types.h" 1




# 1 "linux-2.6.26/include/asm/posix_types_64.h" 1
# 10 "linux-2.6.26/include/asm/posix_types_64.h"
typedef unsigned long __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef unsigned long __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef unsigned long __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;


typedef long long __kernel_loff_t;


typedef struct {
 int val[2];
} __kernel_fsid_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef __kernel_uid_t __kernel_uid32_t;
typedef __kernel_gid_t __kernel_gid32_t;

typedef unsigned long __kernel_old_dev_t;




static inline  __attribute__((always_inline)) void __FD_SET(unsigned long fd, __kernel_fd_set *fdsetp)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 fdsetp->fds_bits[_tmp] |= (1UL<<_rem);
}


static inline  __attribute__((always_inline)) void __FD_CLR(unsigned long fd, __kernel_fd_set *fdsetp)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 fdsetp->fds_bits[_tmp] &= ~(1UL<<_rem);
}


static inline  __attribute__((always_inline)) int __FD_ISSET(unsigned long fd, __const__ __kernel_fd_set *p)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 return (p->fds_bits[_tmp] & (1UL<<_rem)) != 0;
}






static inline  __attribute__((always_inline)) void __FD_ZERO(__kernel_fd_set *p)
{
 unsigned long *tmp = p->fds_bits;
 int i;

 if (__builtin_constant_p((1024/(8 * sizeof(unsigned long))))) {
  switch ((1024/(8 * sizeof(unsigned long)))) {
  case 32:
   tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
   tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
   tmp[ 8] = 0; tmp[ 9] = 0; tmp[10] = 0; tmp[11] = 0;
   tmp[12] = 0; tmp[13] = 0; tmp[14] = 0; tmp[15] = 0;
   tmp[16] = 0; tmp[17] = 0; tmp[18] = 0; tmp[19] = 0;
   tmp[20] = 0; tmp[21] = 0; tmp[22] = 0; tmp[23] = 0;
   tmp[24] = 0; tmp[25] = 0; tmp[26] = 0; tmp[27] = 0;
   tmp[28] = 0; tmp[29] = 0; tmp[30] = 0; tmp[31] = 0;
   return;
  case 16:
   tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
   tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
   tmp[ 8] = 0; tmp[ 9] = 0; tmp[10] = 0; tmp[11] = 0;
   tmp[12] = 0; tmp[13] = 0; tmp[14] = 0; tmp[15] = 0;
   return;
  case 8:
   tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
   tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
   return;
  case 4:
   tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
   return;
  }
 }
 i = (1024/(8 * sizeof(unsigned long)));
 while (i) {
  i--;
  *tmp = 0;
  tmp++;
 }
}
# 6 "linux-2.6.26/include/asm/posix_types.h" 2
# 48 "linux-2.6.26/include/linux/posix_types.h" 2
# 12 "linux-2.6.26/include/linux/types.h" 2
# 1 "linux-2.6.26/include/asm/types.h" 1



# 1 "linux-2.6.26/include/asm-generic/int-ll64.h" 1
# 17 "linux-2.6.26/include/asm-generic/int-ll64.h"
typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 40 "linux-2.6.26/include/asm-generic/int-ll64.h"
typedef signed char s8;
typedef unsigned char u8;

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

typedef signed long long s64;
typedef unsigned long long u64;
# 5 "linux-2.6.26/include/asm/types.h" 2



typedef unsigned short umode_t;
# 25 "linux-2.6.26/include/asm/types.h"
typedef u64 dma64_addr_t;


typedef u64 dma_addr_t;
# 13 "linux-2.6.26/include/linux/types.h" 2



typedef __u32 __kernel_dev_t;

typedef __kernel_fd_set fd_set;
typedef __kernel_dev_t dev_t;
typedef __kernel_ino_t ino_t;
typedef __kernel_mode_t mode_t;
typedef __kernel_nlink_t nlink_t;
typedef __kernel_off_t off_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_daddr_t daddr_t;
typedef __kernel_key_t key_t;
typedef __kernel_suseconds_t suseconds_t;
typedef __kernel_timer_t timer_t;
typedef __kernel_clockid_t clockid_t;
typedef __kernel_mqd_t mqd_t;


typedef _Bool bool;

typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;

typedef unsigned long uintptr_t;
# 57 "linux-2.6.26/include/linux/types.h"
typedef __kernel_loff_t loff_t;
# 66 "linux-2.6.26/include/linux/types.h"
typedef __kernel_size_t size_t;




typedef __kernel_ssize_t ssize_t;




typedef __kernel_ptrdiff_t ptrdiff_t;




typedef __kernel_time_t time_t;




typedef __kernel_clock_t clock_t;




typedef __kernel_caddr_t caddr_t;



typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;


typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;




typedef __u8 u_int8_t;
typedef __s8 int8_t;
typedef __u16 u_int16_t;
typedef __s16 int16_t;
typedef __u32 u_int32_t;
typedef __s32 int32_t;



typedef __u8 uint8_t;
typedef __u16 uint16_t;
typedef __u32 uint32_t;


typedef __u64 uint64_t;
typedef __u64 u_int64_t;
typedef __s64 int64_t;
# 142 "linux-2.6.26/include/linux/types.h"
typedef unsigned long sector_t;
# 151 "linux-2.6.26/include/linux/types.h"
typedef unsigned long blkcnt_t;
# 180 "linux-2.6.26/include/linux/types.h"
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;

typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;


typedef unsigned gfp_t;




typedef u32 resource_size_t;


struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};
# 11 "linux-2.6.26/include/linux/thread_info.h" 2

struct timespec;
struct compat_timespec;




struct restart_block {
 long (*fn)(struct restart_block *);
 union {
  struct {
   unsigned long arg0, arg1, arg2, arg3;
  };

  struct {
   u32 *uaddr;
   u32 val;
   u32 flags;
   u32 bitset;
   u64 time;
  } futex;

  struct {
   clockid_t index;
   struct timespec *rmtp;



   u64 expires;
  } nanosleep;
 };
};

extern long do_no_restart_syscall(struct restart_block *parm);

# 1 "linux-2.6.26/include/linux/bitops.h" 1
# 17 "linux-2.6.26/include/linux/bitops.h"
# 1 "linux-2.6.26/include/asm/bitops.h" 1
# 13 "linux-2.6.26/include/asm/bitops.h"
# 1 "linux-2.6.26/include/asm/alternative.h" 1





# 1 "linux-2.6.26/include/asm/asm.h" 1
# 7 "linux-2.6.26/include/asm/alternative.h" 2
# 42 "linux-2.6.26/include/asm/alternative.h"
# 1 "linux-2.6.26/include/asm/cpufeature.h" 1






# 1 "linux-2.6.26/include/asm/required-features.h" 1
# 8 "linux-2.6.26/include/asm/cpufeature.h" 2
# 118 "linux-2.6.26/include/asm/cpufeature.h"
# 1 "linux-2.6.26/include/linux/bitops.h" 1
# 119 "linux-2.6.26/include/asm/cpufeature.h" 2

extern const char * const x86_cap_flags[8*32];
extern const char * const x86_power_flags[32];
# 43 "linux-2.6.26/include/asm/alternative.h" 2

struct alt_instr {
 u8 *instr;
 u8 *replacement;
 u8 cpuid;
 u8 instrlen;
 u8 replacementlen;
 u8 pad1;

 u32 pad2;

};

extern void alternative_instructions(void);
extern void apply_alternatives(struct alt_instr *start, struct alt_instr *end);

struct module;
# 68 "linux-2.6.26/include/asm/alternative.h"
static inline  __attribute__((always_inline)) void alternatives_smp_module_add(struct module *mod, char *name,
            void *locks, void *locks_end,
            void *text, void *text_end) {}
static inline  __attribute__((always_inline)) void alternatives_smp_module_del(struct module *mod) {}
static inline  __attribute__((always_inline)) void alternatives_smp_switch(int smp) {}
# 146 "linux-2.6.26/include/asm/alternative.h"
struct paravirt_patch_site;




static inline  __attribute__((always_inline)) void apply_paravirt(struct paravirt_patch_site *start,
      struct paravirt_patch_site *end)
{}




extern void add_nops(void *insns, unsigned int len);
# 178 "linux-2.6.26/include/asm/alternative.h"
extern void *text_poke(void *addr, const void *opcode, size_t len);
extern void *text_poke_early(void *addr, const void *opcode, size_t len);
# 14 "linux-2.6.26/include/asm/bitops.h" 2
# 46 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void set_bit(int nr, volatile void *addr)
{
 asm volatile("" "bts %1,%0" : "+m" (*(volatile long *) addr) : "Ir" (nr) : "memory");
}
# 60 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void __set_bit(int nr, volatile void *addr)
{
 asm volatile("bts %1,%0" : "+m" (*(volatile long *) addr) : "Ir" (nr) : "memory");
}
# 75 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void clear_bit(int nr, volatile void *addr)
{
 asm volatile("" "btr %1,%0" : "+m" (*(volatile long *) addr) : "Ir" (nr));
}
# 88 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void clear_bit_unlock(unsigned nr, volatile void *addr)
{
 __asm__ __volatile__("": : :"memory");
 clear_bit(nr, addr);
}

static inline  __attribute__((always_inline)) void __clear_bit(int nr, volatile void *addr)
{
 asm volatile("btr %1,%0" : "+m" (*(volatile long *) addr) : "Ir" (nr));
}
# 111 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void __clear_bit_unlock(unsigned nr, volatile void *addr)
{
 __asm__ __volatile__("": : :"memory");
 __clear_bit(nr, addr);
}
# 129 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void __change_bit(int nr, volatile void *addr)
{
 asm volatile("btc %1,%0" : "+m" (*(volatile long *) addr) : "Ir" (nr));
}
# 143 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) void change_bit(int nr, volatile void *addr)
{
 asm volatile("" "btc %1,%0" : "+m" (*(volatile long *) addr) : "Ir" (nr));
}
# 156 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int test_and_set_bit(int nr, volatile void *addr)
{
 int oldbit;

 asm volatile("" "bts %2,%1\n\t"
       "sbb %0,%0" : "=r" (oldbit), "+m" (*(volatile long *) addr) : "Ir" (nr) : "memory");

 return oldbit;
}
# 173 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int test_and_set_bit_lock(int nr, volatile void *addr)
{
 return test_and_set_bit(nr, addr);
}
# 187 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int __test_and_set_bit(int nr, volatile void *addr)
{
 int oldbit;

 asm("bts %2,%1\n\t"
     "sbb %0,%0"
     : "=r" (oldbit), "+m" (*(volatile long *) addr)
     : "Ir" (nr));
 return oldbit;
}
# 206 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int test_and_clear_bit(int nr, volatile void *addr)
{
 int oldbit;

 asm volatile("" "btr %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) addr) : "Ir" (nr) : "memory");

 return oldbit;
}
# 226 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int __test_and_clear_bit(int nr, volatile void *addr)
{
 int oldbit;

 asm volatile("btr %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) addr)
       : "Ir" (nr));
 return oldbit;
}


static inline  __attribute__((always_inline)) int __test_and_change_bit(int nr, volatile void *addr)
{
 int oldbit;

 asm volatile("btc %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) addr)
       : "Ir" (nr) : "memory");

 return oldbit;
}
# 258 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int test_and_change_bit(int nr, volatile void *addr)
{
 int oldbit;

 asm volatile("" "btc %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) addr) : "Ir" (nr) : "memory");

 return oldbit;
}

static inline  __attribute__((always_inline)) int constant_test_bit(int nr, const volatile void *addr)
{
 return ((1UL << (nr % 64)) &
  (((unsigned long *)addr)[nr / 64])) != 0;
}

static inline  __attribute__((always_inline)) int variable_test_bit(int nr, volatile const void *addr)
{
 int oldbit;

 asm volatile("bt %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit)
       : "m" (*(unsigned long *)addr), "Ir" (nr));

 return oldbit;
}
# 307 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) unsigned long __ffs(unsigned long word)
{
 asm("bsf %1,%0"
  : "=r" (word)
  : "rm" (word));
 return word;
}







static inline  __attribute__((always_inline)) unsigned long ffz(unsigned long word)
{
 asm("bsf %1,%0"
  : "=r" (word)
  : "r" (~word));
 return word;
}







static inline  __attribute__((always_inline)) unsigned long __fls(unsigned long word)
{
 asm("bsr %1,%0"
     : "=r" (word)
     : "rm" (word));
 return word;
}
# 355 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int ffs(int x)
{
 int r;





 asm("bsfl %1,%0\n\t"
     "jnz 1f\n\t"
     "movl $-1,%0\n"
     "1:" : "=r" (r) : "rm" (x));

 return r + 1;
}
# 382 "linux-2.6.26/include/asm/bitops.h"
static inline  __attribute__((always_inline)) int fls(int x)
{
 int r;





 asm("bsrl %1,%0\n\t"
     "jnz 1f\n\t"
     "movl $-1,%0\n"
     "1:" : "=r" (r) : "rm" (x));

 return r + 1;
}




static inline  __attribute__((always_inline)) void set_bit_string(unsigned long *bitmap,
  unsigned long i, int len)
{
 unsigned long end = i + len;
 while (i < end) {
  __set_bit(i, bitmap);
  i++;
 }
}



# 1 "linux-2.6.26/include/asm-generic/bitops/sched.h" 1
# 12 "linux-2.6.26/include/asm-generic/bitops/sched.h"
static inline  __attribute__((always_inline)) int sched_find_first_bit(const unsigned long *b)
{

 if (b[0])
  return __ffs(b[0]);
 return __ffs(b[1]) + 64;
# 29 "linux-2.6.26/include/asm-generic/bitops/sched.h"
}
# 414 "linux-2.6.26/include/asm/bitops.h" 2



# 1 "linux-2.6.26/include/asm-generic/bitops/hweight.h" 1





extern unsigned int hweight32(unsigned int w);
extern unsigned int hweight16(unsigned int w);
extern unsigned int hweight8(unsigned int w);
extern unsigned long hweight64(__u64 w);
# 418 "linux-2.6.26/include/asm/bitops.h" 2



# 1 "linux-2.6.26/include/asm-generic/bitops/fls64.h" 1
# 26 "linux-2.6.26/include/asm-generic/bitops/fls64.h"
static inline  __attribute__((always_inline)) int fls64(__u64 x)
{
 if (x == 0)
  return 0;
 return __fls(x) + 1;
}
# 422 "linux-2.6.26/include/asm/bitops.h" 2



# 1 "linux-2.6.26/include/asm-generic/bitops/ext2-non-atomic.h" 1



# 1 "linux-2.6.26/include/asm-generic/bitops/le.h" 1




# 1 "linux-2.6.26/include/asm/byteorder.h" 1
# 51 "linux-2.6.26/include/asm/byteorder.h"
static inline   __attribute__((always_inline)) __attribute__((__const__)) __u64 ___arch__swab64(__u64 x)
{
 asm("bswapq %0"
     : "=r" (x)
     : "0" (x));
 return x;
}

static inline   __attribute__((always_inline)) __attribute__((__const__)) __u32 ___arch__swab32(__u32 x)
{
 asm("bswapl %0"
     : "=r" (x)
     : "0" (x));
 return x;
}
# 79 "linux-2.6.26/include/asm/byteorder.h"
# 1 "linux-2.6.26/include/linux/byteorder/little_endian.h" 1
# 12 "linux-2.6.26/include/linux/byteorder/little_endian.h"
# 1 "linux-2.6.26/include/linux/byteorder/swab.h" 1
# 64 "linux-2.6.26/include/linux/byteorder/swab.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u16 ___swab16(__u16 x)
{
 return x<<8 | x>>8;
}
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u32 ___swab32(__u32 x)
{
 return x<<24 | x>>24 |
  (x & (__u32)0x0000ff00UL)<<8 |
  (x & (__u32)0x00ff0000UL)>>8;
}
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u64 ___swab64(__u64 x)
{
 return x<<56 | x>>56 |
  (x & (__u64)0x000000000000ff00ULL)<<40 |
  (x & (__u64)0x0000000000ff0000ULL)<<24 |
  (x & (__u64)0x00000000ff000000ULL)<< 8 |
         (x & (__u64)0x000000ff00000000ULL)>> 8 |
  (x & (__u64)0x0000ff0000000000ULL)>>24 |
  (x & (__u64)0x00ff000000000000ULL)>>40;
}
# 163 "linux-2.6.26/include/linux/byteorder/swab.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u16 __fswab16(__u16 x)
{
 return ___swab16(x);
}
static __inline__  __attribute__((always_inline)) __u16 __swab16p(const __u16 *x)
{
 return ___swab16(*(x));
}
static __inline__  __attribute__((always_inline)) void __swab16s(__u16 *addr)
{
 ((void)(*(addr) = ___swab16(*(addr))));
}

static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u32 __fswab32(__u32 x)
{
 return ___arch__swab32(x);
}
static __inline__  __attribute__((always_inline)) __u32 __swab32p(const __u32 *x)
{
 return ___arch__swab32(*(x));
}
static __inline__  __attribute__((always_inline)) void __swab32s(__u32 *addr)
{
 ((void)(*(addr) = ___arch__swab32(*(addr))));
}


static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u64 __fswab64(__u64 x)
{





 return ___arch__swab64(x);

}
static __inline__  __attribute__((always_inline)) __u64 __swab64p(const __u64 *x)
{
 return ___arch__swab64(*(x));
}
static __inline__  __attribute__((always_inline)) void __swab64s(__u64 *addr)
{
 ((void)(*(addr) = ___arch__swab64(*(addr))));
}
# 13 "linux-2.6.26/include/linux/byteorder/little_endian.h" 2
# 43 "linux-2.6.26/include/linux/byteorder/little_endian.h"
static inline  __attribute__((always_inline)) __le64 __cpu_to_le64p(const __u64 *p)
{
 return ( __le64)*p;
}
static inline  __attribute__((always_inline)) __u64 __le64_to_cpup(const __le64 *p)
{
 return ( __u64)*p;
}
static inline  __attribute__((always_inline)) __le32 __cpu_to_le32p(const __u32 *p)
{
 return ( __le32)*p;
}
static inline  __attribute__((always_inline)) __u32 __le32_to_cpup(const __le32 *p)
{
 return ( __u32)*p;
}
static inline  __attribute__((always_inline)) __le16 __cpu_to_le16p(const __u16 *p)
{
 return ( __le16)*p;
}
static inline  __attribute__((always_inline)) __u16 __le16_to_cpup(const __le16 *p)
{
 return ( __u16)*p;
}
static inline  __attribute__((always_inline)) __be64 __cpu_to_be64p(const __u64 *p)
{
 return ( __be64)__swab64p(p);
}
static inline  __attribute__((always_inline)) __u64 __be64_to_cpup(const __be64 *p)
{
 return __swab64p((__u64 *)p);
}
static inline  __attribute__((always_inline)) __be32 __cpu_to_be32p(const __u32 *p)
{
 return ( __be32)__swab32p(p);
}
static inline  __attribute__((always_inline)) __u32 __be32_to_cpup(const __be32 *p)
{
 return __swab32p((__u32 *)p);
}
static inline  __attribute__((always_inline)) __be16 __cpu_to_be16p(const __u16 *p)
{
 return ( __be16)__swab16p(p);
}
static inline  __attribute__((always_inline)) __u16 __be16_to_cpup(const __be16 *p)
{
 return __swab16p((__u16 *)p);
}
# 105 "linux-2.6.26/include/linux/byteorder/little_endian.h"
# 1 "linux-2.6.26/include/linux/byteorder/generic.h" 1
# 143 "linux-2.6.26/include/linux/byteorder/generic.h"
static inline  __attribute__((always_inline)) void le16_add_cpu(__le16 *var, u16 val)
{
 *var = (( __le16)(__u16)((( __u16)(__le16)(*var)) + val));
}

static inline  __attribute__((always_inline)) void le32_add_cpu(__le32 *var, u32 val)
{
 *var = (( __le32)(__u32)((( __u32)(__le32)(*var)) + val));
}

static inline  __attribute__((always_inline)) void le64_add_cpu(__le64 *var, u64 val)
{
 *var = (( __le64)(__u64)((( __u64)(__le64)(*var)) + val));
}

static inline  __attribute__((always_inline)) void be16_add_cpu(__be16 *var, u16 val)
{
 *var = (( __be16)__fswab16((__fswab16(( __u16)(__be16)(*var)) + val)));
}

static inline  __attribute__((always_inline)) void be32_add_cpu(__be32 *var, u32 val)
{
 *var = (( __be32)__fswab32((__fswab32(( __u32)(__be32)(*var)) + val)));
}

static inline  __attribute__((always_inline)) void be64_add_cpu(__be64 *var, u64 val)
{
 *var = (( __be64)__fswab64((__fswab64(( __u64)(__be64)(*var)) + val)));
}
# 106 "linux-2.6.26/include/linux/byteorder/little_endian.h" 2
# 80 "linux-2.6.26/include/asm/byteorder.h" 2
# 6 "linux-2.6.26/include/asm-generic/bitops/le.h" 2
# 5 "linux-2.6.26/include/asm-generic/bitops/ext2-non-atomic.h" 2
# 426 "linux-2.6.26/include/asm/bitops.h" 2






# 1 "linux-2.6.26/include/asm-generic/bitops/minix.h" 1
# 433 "linux-2.6.26/include/asm/bitops.h" 2
# 18 "linux-2.6.26/include/linux/bitops.h" 2







static __inline__  __attribute__((always_inline)) int get_bitmask_order(unsigned int count)
{
 int order;

 order = fls(count);
 return order;
}

static __inline__  __attribute__((always_inline)) int get_count_order(unsigned int count)
{
 int order;

 order = fls(count) - 1;
 if (count & (count - 1))
  order++;
 return order;
}

static inline  __attribute__((always_inline)) unsigned long hweight_long(unsigned long w)
{
 return sizeof(w) == 4 ? hweight32(w) : hweight64(w);
}






static inline  __attribute__((always_inline)) __u32 rol32(__u32 word, unsigned int shift)
{
 return (word << shift) | (word >> (32 - shift));
}






static inline  __attribute__((always_inline)) __u32 ror32(__u32 word, unsigned int shift)
{
 return (word >> shift) | (word << (32 - shift));
}






static inline  __attribute__((always_inline)) __u16 rol16(__u16 word, unsigned int shift)
{
 return (word << shift) | (word >> (16 - shift));
}






static inline  __attribute__((always_inline)) __u16 ror16(__u16 word, unsigned int shift)
{
 return (word >> shift) | (word << (16 - shift));
}






static inline  __attribute__((always_inline)) __u8 rol8(__u8 word, unsigned int shift)
{
 return (word << shift) | (word >> (8 - shift));
}






static inline  __attribute__((always_inline)) __u8 ror8(__u8 word, unsigned int shift)
{
 return (word >> shift) | (word << (8 - shift));
}

static inline  __attribute__((always_inline)) unsigned fls_long(unsigned long l)
{
 if (sizeof(l) == 4)
  return fls(l);
 return fls64(l);
}
# 125 "linux-2.6.26/include/linux/bitops.h"
extern unsigned long find_first_bit(const unsigned long *addr,
        unsigned long size);
# 135 "linux-2.6.26/include/linux/bitops.h"
extern unsigned long find_first_zero_bit(const unsigned long *addr,
      unsigned long size);
# 148 "linux-2.6.26/include/linux/bitops.h"
extern unsigned long find_next_bit(const unsigned long *addr,
       unsigned long size, unsigned long offset);
# 158 "linux-2.6.26/include/linux/bitops.h"
extern unsigned long find_next_zero_bit(const unsigned long *addr,
     unsigned long size,
     unsigned long offset);
# 47 "linux-2.6.26/include/linux/thread_info.h" 2
# 1 "linux-2.6.26/include/asm/thread_info.h" 1




# 1 "linux-2.6.26/include/asm/thread_info_64.h" 1
# 12 "linux-2.6.26/include/asm/thread_info_64.h"
# 1 "linux-2.6.26/include/asm/page.h" 1



# 1 "linux-2.6.26/include/linux/const.h" 1
# 5 "linux-2.6.26/include/asm/page.h" 2
# 40 "linux-2.6.26/include/asm/page.h"
# 1 "linux-2.6.26/include/asm/page_64.h" 1
# 58 "linux-2.6.26/include/asm/page_64.h"
void clear_page(void *page);
void copy_page(void *to, void *from);

typedef  unsigned long   _GLOBAL_1_T; extern  _GLOBAL_1_T  global_end_pfn[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_2_T; extern  _GLOBAL_2_T  global_phys_base[NUM_STACKS];    

extern unsigned long __phys_addr(unsigned long);





typedef unsigned long pteval_t;
typedef unsigned long pmdval_t;
typedef unsigned long pudval_t;
typedef unsigned long pgdval_t;
typedef unsigned long pgprotval_t;
typedef unsigned long phys_addr_t;

typedef struct page *pgtable_t;

typedef struct { pteval_t pte; } pte_t;



extern unsigned long init_memory_mapping(unsigned long start,
      unsigned long end);
# 41 "linux-2.6.26/include/asm/page.h" 2
# 54 "linux-2.6.26/include/asm/page.h"
extern int page_is_ram(unsigned long pagenr);
extern int devmem_is_allowed(unsigned long pagenr);

typedef  unsigned long   _GLOBAL_3_T; extern  _GLOBAL_3_T  global_max_pfn_mapped[NUM_STACKS];    

struct page;

static inline  __attribute__((always_inline)) void clear_user_page(void *page, unsigned long vaddr,
    struct page *pg)
{
 clear_page(page);
}

static inline  __attribute__((always_inline)) void copy_user_page(void *to, void *from, unsigned long vaddr,
    struct page *topage)
{
 copy_page(to, from);
}





typedef struct { pgdval_t pgd; } pgd_t;
typedef struct { pgprotval_t pgprot; } pgprot_t;

static inline  __attribute__((always_inline)) pgd_t native_make_pgd(pgdval_t val)
{
 return (pgd_t) { val };
}

static inline  __attribute__((always_inline)) pgdval_t native_pgd_val(pgd_t pgd)
{
 return pgd.pgd;
}



typedef struct { pudval_t pud; } pud_t;

static inline  __attribute__((always_inline)) pud_t native_make_pud(pmdval_t val)
{
 return (pud_t) { val };
}

static inline  __attribute__((always_inline)) pudval_t native_pud_val(pud_t pud)
{
 return pud.pud;
}
# 112 "linux-2.6.26/include/asm/page.h"
typedef struct { pmdval_t pmd; } pmd_t;

static inline  __attribute__((always_inline)) pmd_t native_make_pmd(pmdval_t val)
{
 return (pmd_t) { val };
}

static inline  __attribute__((always_inline)) pmdval_t native_pmd_val(pmd_t pmd)
{
 return pmd.pmd;
}
# 132 "linux-2.6.26/include/asm/page.h"
static inline  __attribute__((always_inline)) pte_t native_make_pte(pteval_t val)
{
 return (pte_t) { .pte = val };
}

static inline  __attribute__((always_inline)) pteval_t native_pte_val(pte_t pte)
{
 return pte.pte;
}
# 183 "linux-2.6.26/include/asm/page.h"
# 1 "linux-2.6.26/include/asm-generic/memory_model.h" 1
# 184 "linux-2.6.26/include/asm/page.h" 2
# 1 "linux-2.6.26/include/asm-generic/page.h" 1
# 9 "linux-2.6.26/include/asm-generic/page.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) int get_order(unsigned long size)
{
 int order;

 size = (size - 1) >> (12 - 1);
 order = -1;
 do {
  size >>= 1;
  order++;
 } while (size);
 return order;
}
# 185 "linux-2.6.26/include/asm/page.h" 2
# 13 "linux-2.6.26/include/asm/thread_info_64.h" 2

# 1 "linux-2.6.26/include/asm/pda.h" 1






# 1 "linux-2.6.26/include/linux/cache.h" 1



# 1 "linux-2.6.26/include/linux/kernel.h" 1
# 10 "linux-2.6.26/include/linux/kernel.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 102 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 11 "linux-2.6.26/include/linux/kernel.h" 2
# 1 "linux-2.6.26/include/linux/linkage.h" 1



# 1 "linux-2.6.26/include/asm/linkage.h" 1
# 5 "linux-2.6.26/include/linux/linkage.h" 2
# 12 "linux-2.6.26/include/linux/kernel.h" 2




# 1 "linux-2.6.26/include/linux/log2.h" 1
# 21 "linux-2.6.26/include/linux/log2.h"
extern 
__attribute__((const, noreturn)) int ____ilog2_NaN(void);
# 31 "linux-2.6.26/include/linux/log2.h"
static inline  
__attribute__((always_inline)) __attribute__((const)) int __ilog2_u32(u32 n)
{
 return fls(n) - 1;
}



static inline  
__attribute__((always_inline)) __attribute__((const)) int __ilog2_u64(u64 n)
{
 return fls64(n) - 1;
}







static inline  
__attribute__((always_inline)) __attribute__((const)) bool is_power_of_2(unsigned long n)
{
 return (n != 0 && ((n & (n - 1)) == 0));
}




static inline  
__attribute__((always_inline)) __attribute__((const)) unsigned long __roundup_pow_of_two(unsigned long n)
{
 return 1UL << fls_long(n - 1);
}




static inline  
__attribute__((always_inline)) __attribute__((const)) unsigned long __rounddown_pow_of_two(unsigned long n)
{
 return 1UL << (fls_long(n) - 1);
}
# 17 "linux-2.6.26/include/linux/kernel.h" 2

# 1 "linux-2.6.26/include/asm/bug.h" 1
# 38 "linux-2.6.26/include/asm/bug.h"
# 1 "linux-2.6.26/include/asm-generic/bug.h" 1
# 10 "linux-2.6.26/include/asm-generic/bug.h"
struct bug_entry {
 unsigned long bug_addr;




 unsigned short flags;
};
# 36 "linux-2.6.26/include/asm-generic/bug.h"
extern void warn_on_slowpath(const char *file, const int line);
# 39 "linux-2.6.26/include/asm/bug.h" 2
# 19 "linux-2.6.26/include/linux/kernel.h" 2

extern const char linux_banner[];
extern const char linux_proc_banner[];
# 92 "linux-2.6.26/include/linux/kernel.h"
typedef  int  _GLOBAL_4_T; extern  _GLOBAL_4_T  _GLOBAL_0_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_1_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_2_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_3_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_4_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_5_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_6_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_7_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_8_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_9_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_10_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_11_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_12_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_13_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_14_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_15_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_16_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_17_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_18_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_19_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_20_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_21_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_22_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_23_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_24_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_25_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_26_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_27_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_28_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_29_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_30_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_31_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_32_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_33_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_34_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_35_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_36_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_37_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_38_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_39_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_40_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_41_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_42_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_43_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_44_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_45_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_46_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_47_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_48_console_printk_I [ ] ; extern  _GLOBAL_4_T  _GLOBAL_49_console_printk_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_console_printk_I) *_GLOBAL_console_printk_1_A[NUM_STACKS] = { &_GLOBAL_0_console_printk_I, &_GLOBAL_1_console_printk_I, &_GLOBAL_2_console_printk_I, &_GLOBAL_3_console_printk_I, &_GLOBAL_4_console_printk_I, &_GLOBAL_5_console_printk_I, &_GLOBAL_6_console_printk_I, &_GLOBAL_7_console_printk_I, &_GLOBAL_8_console_printk_I, &_GLOBAL_9_console_printk_I, &_GLOBAL_10_console_printk_I, &_GLOBAL_11_console_printk_I, &_GLOBAL_12_console_printk_I, &_GLOBAL_13_console_printk_I, &_GLOBAL_14_console_printk_I, &_GLOBAL_15_console_printk_I, &_GLOBAL_16_console_printk_I, &_GLOBAL_17_console_printk_I, &_GLOBAL_18_console_printk_I, &_GLOBAL_19_console_printk_I, &_GLOBAL_20_console_printk_I, &_GLOBAL_21_console_printk_I, &_GLOBAL_22_console_printk_I, &_GLOBAL_23_console_printk_I, &_GLOBAL_24_console_printk_I, &_GLOBAL_25_console_printk_I, &_GLOBAL_26_console_printk_I, &_GLOBAL_27_console_printk_I, &_GLOBAL_28_console_printk_I, &_GLOBAL_29_console_printk_I, &_GLOBAL_30_console_printk_I, &_GLOBAL_31_console_printk_I, &_GLOBAL_32_console_printk_I, &_GLOBAL_33_console_printk_I, &_GLOBAL_34_console_printk_I, &_GLOBAL_35_console_printk_I, &_GLOBAL_36_console_printk_I, &_GLOBAL_37_console_printk_I, &_GLOBAL_38_console_printk_I, &_GLOBAL_39_console_printk_I, &_GLOBAL_40_console_printk_I, &_GLOBAL_41_console_printk_I, &_GLOBAL_42_console_printk_I, &_GLOBAL_43_console_printk_I, &_GLOBAL_44_console_printk_I, &_GLOBAL_45_console_printk_I, &_GLOBAL_46_console_printk_I, &_GLOBAL_47_console_printk_I, &_GLOBAL_48_console_printk_I, &_GLOBAL_49_console_printk_I, };  






struct completion;
struct pt_regs;
struct user;
# 135 "linux-2.6.26/include/linux/kernel.h"
extern struct atomic_notifier_head panic_notifier_list;
typedef  long   ( *_GLOBAL_6_T  )  ( long  time  ) ; extern  _GLOBAL_6_T global_panic_blink[NUM_STACKS];    
 void panic(const char * fmt, ...)
  __attribute__ ((noreturn, format (printf, 1, 2))) __attribute__((__cold__)) ;
extern void oops_enter(void);
extern void oops_exit(void);
extern int oops_may_print(void);
 void do_exit(long error_code)
 __attribute__((noreturn)) ;
 void complete_and_exit(struct completion *, long)
 __attribute__((noreturn)) ;
extern unsigned long simple_strtoul(const char *,char **,unsigned int);
extern long simple_strtol(const char *,char **,unsigned int);
extern unsigned long long simple_strtoull(const char *,char **,unsigned int);
extern long long simple_strtoll(const char *,char **,unsigned int);
extern int strict_strtoul(const char *, unsigned int, unsigned long *);
extern int strict_strtol(const char *, unsigned int, long *);
extern int strict_strtoull(const char *, unsigned int, unsigned long long *);
extern int strict_strtoll(const char *, unsigned int, long long *);
extern int sprintf(char * buf, const char * fmt, ...)
 __attribute__ ((format (printf, 2, 3))) ;
extern int vsprintf(char *buf, const char *, va_list)
 __attribute__ ((format (printf, 2, 0))) ;
extern int snprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4))) ;
extern int vsnprintf(char *buf, size_t size, const char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0))) ;
extern int scnprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4))) ;
extern int vscnprintf(char *buf, size_t size, const char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0))) ;
extern char *kasprintf(gfp_t gfp, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3))) ;
extern char *kvasprintf(gfp_t gfp, const char *fmt, va_list args);

extern int sscanf(const char *, const char *, ...)
 __attribute__ ((format (scanf, 2, 3))) ;
extern int vsscanf(const char *, const char *, va_list)
 __attribute__ ((format (scanf, 2, 0))) ;

extern int get_option(char **str, int *pint);
extern char *get_options(const char *str, int nints, int *ints);
extern unsigned long long memparse(char *ptr, char **retptr);

extern int core_kernel_text(unsigned long addr);
extern int __kernel_text_address(unsigned long addr);
extern int kernel_text_address(unsigned long addr);
struct pid;
extern struct pid *session_of_pgrp(struct pid *pgrp);


 int vprintk(const char *fmt, va_list args)
 __attribute__ ((format (printf, 1, 0))) ;
 int printk(const char * fmt, ...)
  __attribute__ ((format (printf, 1, 2))) __attribute__((__cold__)) ;
extern int log_buf_get_len(void);
extern int log_buf_read(int idx);
extern int log_buf_copy(char *dest, int idx, int len);

typedef  int  _GLOBAL_7_T; extern  _GLOBAL_7_T  global_printk_ratelimit_jiffies[NUM_STACKS];   
typedef  int  _GLOBAL_8_T; extern  _GLOBAL_8_T  global_printk_ratelimit_burst[NUM_STACKS];   
extern int printk_ratelimit(void);
extern int __ratelimit(int ratelimit_jiffies, int ratelimit_burst);
extern int __printk_ratelimit(int ratelimit_jiffies, int ratelimit_burst);
extern bool printk_timed_ratelimit(unsigned long *caller_jiffies,
       unsigned int interval_msec);
# 219 "linux-2.6.26/include/linux/kernel.h"
extern void 
 __attribute__((format(printf, 1, 2))) early_printk(const char *fmt, ...);

unsigned long int_sqrt(unsigned long);

static inline  __attribute__((always_inline)) void console_silent(void)
{
 ((*_GLOBAL_console_printk_1_A[get_stack_id()])[0]) = 0;
}

static inline  __attribute__((always_inline)) void console_verbose(void)
{
 if (((*_GLOBAL_console_printk_1_A[get_stack_id()])[0]))
  ((*_GLOBAL_console_printk_1_A[get_stack_id()])[0]) = 15;
}

extern void bust_spinlocks(int yes);
extern void wake_up_klogd(void);
typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_oops_in_progress[NUM_STACKS];   
typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  global_panic_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_11_T; extern  _GLOBAL_11_T  global_panic_on_oops[NUM_STACKS];   
typedef  int  _GLOBAL_12_T; extern  _GLOBAL_12_T  global_panic_on_unrecovered_nmi[NUM_STACKS];   
typedef  int  _GLOBAL_13_T; extern  _GLOBAL_13_T  global_tainted[NUM_STACKS];   
extern const char *print_tainted(void);
extern void add_taint(unsigned);
typedef  int  _GLOBAL_14_T; extern  _GLOBAL_14_T  global_root_mountflags[NUM_STACKS];   


typedef  enum system_states { SYSTEM_BOOTING , SYSTEM_RUNNING  , SYSTEM_HALT  , SYSTEM_POWER_OFF  , SYSTEM_RESTART  , SYSTEM_SUSPEND_DISK  , }   _GLOBAL_15_T; extern  _GLOBAL_15_T  global_system_state[NUM_STACKS];    
 
 
 
 
 
 
 
# 267 "linux-2.6.26/include/linux/kernel.h"
extern void dump_stack(void) __attribute__((__cold__)) ;

enum {
 DUMP_PREFIX_NONE,
 DUMP_PREFIX_ADDRESS,
 DUMP_PREFIX_OFFSET
};
extern void hex_dump_to_buffer(const void *buf, size_t len,
    int rowsize, int groupsize,
    char *linebuf, size_t linebuflen, bool ascii);
extern void print_hex_dump(const char *level, const char *prefix_str,
    int prefix_type, int rowsize, int groupsize,
    const void *buf, size_t len, bool ascii);
extern void print_hex_dump_bytes(const char *prefix_str, int prefix_type,
   const void *buf, size_t len);

extern const char hex_asc[];



static inline  __attribute__((always_inline)) char *pack_hex_byte(char *buf, u8 byte)
{
 *buf++ = hex_asc[((byte) & 0xf0) >> 4];
 *buf++ = hex_asc[((byte) & 0x0f)];
 return buf;
}
# 470 "linux-2.6.26/include/linux/kernel.h"
struct sysinfo;
extern int do_sysinfo(struct sysinfo *info);




struct sysinfo {
 long uptime;
 unsigned long loads[3];
 unsigned long totalram;
 unsigned long freeram;
 unsigned long sharedram;
 unsigned long bufferram;
 unsigned long totalswap;
 unsigned long freeswap;
 unsigned short procs;
 unsigned short pad;
 unsigned long totalhigh;
 unsigned long freehigh;
 unsigned int mem_unit;
 char _f[20-2*sizeof(long)-sizeof(int)];
};
# 5 "linux-2.6.26/include/linux/cache.h" 2
# 1 "linux-2.6.26/include/asm/cache.h" 1
# 6 "linux-2.6.26/include/linux/cache.h" 2
# 8 "linux-2.6.26/include/asm/pda.h" 2



struct x8664_pda {
 struct task_struct *pcurrent;
 unsigned long data_offset;

 unsigned long kernelstack;
 unsigned long oldrsp;
 int irqcount;
 unsigned int cpunumber;





 char *irqstackptr;
 unsigned int __softirq_pending;
 unsigned int __nmi_count;
 short mmu_state;
 short isidle;
 struct mm_struct *active_mm;
 unsigned apic_timer_irqs;
 unsigned irq0_irqs;
 unsigned irq_resched_count;
 unsigned irq_call_count;
 unsigned irq_tlb_count;
 unsigned irq_thermal_count;
 unsigned irq_threshold_count;
 unsigned irq_spurious_count;
} ;

typedef  struct x8664_pda   _GLOBAL_16_T; extern  _GLOBAL_16_T  * _GLOBAL_0__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_1__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_2__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_3__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_4__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_5__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_6__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_7__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_8__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_9__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_10__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_11__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_12__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_13__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_14__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_15__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_16__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_17__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_18__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_19__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_20__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_21__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_22__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_23__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_24__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_25__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_26__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_27__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_28__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_29__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_30__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_31__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_32__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_33__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_34__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_35__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_36__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_37__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_38__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_39__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_40__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_41__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_42__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_43__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_44__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_45__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_46__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_47__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_48__cpu_pda_I [ ]  ; extern  _GLOBAL_16_T  * _GLOBAL_49__cpu_pda_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__cpu_pda_I) *_GLOBAL__cpu_pda_2_A[NUM_STACKS];   
typedef  struct x8664_pda   _GLOBAL_17_T; extern  _GLOBAL_17_T  _GLOBAL_0_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_1_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_2_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_3_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_4_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_5_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_6_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_7_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_8_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_9_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_10_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_11_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_12_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_13_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_14_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_15_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_16_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_17_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_18_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_19_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_20_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_21_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_22_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_23_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_24_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_25_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_26_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_27_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_28_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_29_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_30_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_31_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_32_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_33_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_34_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_35_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_36_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_37_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_38_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_39_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_40_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_41_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_42_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_43_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_44_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_45_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_46_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_47_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_48_boot_cpu_pda_I [ ] ; extern  _GLOBAL_17_T  _GLOBAL_49_boot_cpu_pda_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_cpu_pda_I) *_GLOBAL_boot_cpu_pda_3_A[NUM_STACKS];   
extern void pda_init(int);







extern void __bad_pda_field(void) __attribute__((noreturn)) ;





typedef  struct x8664_pda   _GLOBAL_18_T; extern  _GLOBAL_18_T  global__proxy_pda[NUM_STACKS];    
# 15 "linux-2.6.26/include/asm/thread_info_64.h" 2







struct task_struct;
struct exec_domain;
# 1 "linux-2.6.26/include/asm/processor.h" 1



# 1 "linux-2.6.26/include/asm/processor-flags.h" 1
# 5 "linux-2.6.26/include/asm/processor.h" 2


struct task_struct;
struct mm_struct;

# 1 "linux-2.6.26/include/asm/vm86.h" 1
# 68 "linux-2.6.26/include/asm/vm86.h"
struct vm86_regs {



 long ebx;
 long ecx;
 long edx;
 long esi;
 long edi;
 long ebp;
 long eax;
 long __null_ds;
 long __null_es;
 long __null_fs;
 long __null_gs;
 long orig_eax;
 long eip;
 unsigned short cs, __csh;
 long eflags;
 long esp;
 unsigned short ss, __ssh;



 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
};

struct revectored_struct {
 unsigned long __map[8];
};

struct vm86_struct {
 struct vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
};






struct vm86plus_info_struct {
 unsigned long force_return_for_pic:1;
 unsigned long vm86dbg_active:1;
 unsigned long vm86dbg_TFpendig:1;
 unsigned long unused:28;
 unsigned long is_vm86pus:1;
 unsigned char vm86dbg_intxxtab[32];
};

struct vm86plus_struct {
 struct vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
 struct vm86plus_info_struct vm86plus;
};
# 144 "linux-2.6.26/include/asm/vm86.h"
# 1 "linux-2.6.26/include/asm/ptrace.h" 1




# 1 "linux-2.6.26/include/asm/ptrace-abi.h" 1
# 90 "linux-2.6.26/include/asm/ptrace-abi.h"
struct ptrace_bts_config {

 __u32 size;

 __u32 flags;

 __u32 signal;

 __u32 bts_size;
};
# 6 "linux-2.6.26/include/asm/ptrace.h" 2
# 97 "linux-2.6.26/include/asm/ptrace.h"
struct pt_regs {
 unsigned long r15;
 unsigned long r14;
 unsigned long r13;
 unsigned long r12;
 unsigned long bp;
 unsigned long bx;

 unsigned long r11;
 unsigned long r10;
 unsigned long r9;
 unsigned long r8;
 unsigned long ax;
 unsigned long cx;
 unsigned long dx;
 unsigned long si;
 unsigned long di;
 unsigned long orig_ax;


 unsigned long ip;
 unsigned long cs;
 unsigned long flags;
 unsigned long sp;
 unsigned long ss;

};







# 1 "linux-2.6.26/include/asm/ds.h" 1
# 24 "linux-2.6.26/include/asm/ds.h"
# 1 "linux-2.6.26/include/linux/init.h" 1
# 135 "linux-2.6.26/include/linux/init.h"
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

extern initcall_t __con_initcall_start[], __con_initcall_end[];
extern initcall_t __security_initcall_start[], __security_initcall_end[];


extern char  __attribute__ ((__section__(".init.data"))) boot_command_line[];
typedef  char  _GLOBAL_19_T; extern  _GLOBAL_19_T  * global_saved_command_line[NUM_STACKS];   
typedef  unsigned int   _GLOBAL_20_T; extern  _GLOBAL_20_T  global_reset_devices[NUM_STACKS];    


void setup_arch(char **);
void prepare_namespace(void);

typedef  void   ( *_GLOBAL_22_T  )  ( void  ) ; extern  _GLOBAL_22_T global_late_time_init[NUM_STACKS];   
# 209 "linux-2.6.26/include/linux/init.h"
struct obs_kernel_param {
 const char *str;
 int (*setup_func)(char *);
 int early;
};
# 240 "linux-2.6.26/include/linux/init.h"
void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) parse_early_param(void);
# 25 "linux-2.6.26/include/asm/ds.h" 2

struct cpuinfo_x86;







enum bts_qualifier {
 BTS_INVALID = 0,
 BTS_BRANCH,
 BTS_TASK_ARRIVES,
 BTS_TASK_DEPARTS
};

struct bts_struct {
 u64 qualifier;
 union {

  struct {
   u64 from_ip;
   u64 to_ip;
  } lbr;


  u64 jiffies;
 } variant;
};





extern int ds_allocate(void **, size_t);
extern int ds_free(void **);
extern int ds_get_bts_size(void *);
extern int ds_get_bts_end(void *);
extern int ds_get_bts_index(void *);
extern int ds_set_overflow(void *, int);
extern int ds_get_overflow(void *);
extern int ds_clear(void *);
extern int ds_read_bts(void *, int, struct bts_struct *);
extern int ds_write_bts(void *, const struct bts_struct *);
extern unsigned long ds_debugctl_mask(void);
extern void   __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) ds_init_intel(struct cpuinfo_x86 *c);
# 132 "linux-2.6.26/include/asm/ptrace.h" 2

struct task_struct;

extern void ptrace_bts_take_timestamp(struct task_struct *, enum bts_qualifier);

extern unsigned long profile_pc(struct pt_regs *regs);

extern unsigned long
convert_ip_to_linear(struct task_struct *child, struct pt_regs *regs);





void signal_fault(struct pt_regs *regs, void *frame, char *where);


static inline  __attribute__((always_inline)) unsigned long regs_return_value(struct pt_regs *regs)
{
 return regs->ax;
}
# 161 "linux-2.6.26/include/asm/ptrace.h"
static inline  __attribute__((always_inline)) int user_mode(struct pt_regs *regs)
{



 return !!(regs->cs & 3);

}

static inline  __attribute__((always_inline)) int user_mode_vm(struct pt_regs *regs)
{




 return user_mode(regs);

}

static inline  __attribute__((always_inline)) int v8086_mode(struct pt_regs *regs)
{



 return 0;

}







static inline  __attribute__((always_inline)) unsigned long kernel_trap_sp(struct pt_regs *regs)
{



 return regs->sp;

}

static inline  __attribute__((always_inline)) unsigned long instruction_pointer(struct pt_regs *regs)
{
 return regs->ip;
}

static inline  __attribute__((always_inline)) unsigned long frame_pointer(struct pt_regs *regs)
{
 return regs->bp;
}





extern void user_enable_single_step(struct task_struct *);
extern void user_disable_single_step(struct task_struct *);

extern void user_enable_block_step(struct task_struct *);






struct user_desc;
extern int do_get_thread_area(struct task_struct *p, int idx,
         struct user_desc *info);
extern int do_set_thread_area(struct task_struct *p, int idx,
         struct user_desc *info, int can_allocate);
# 145 "linux-2.6.26/include/asm/vm86.h" 2

struct kernel_vm86_regs {



 struct pt_regs pt;



 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
};

struct kernel_vm86_struct {
 struct kernel_vm86_regs regs;
# 171 "linux-2.6.26/include/asm/vm86.h"
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
 struct vm86plus_info_struct vm86plus;
 struct pt_regs *regs32;
# 188 "linux-2.6.26/include/asm/vm86.h"
};
# 204 "linux-2.6.26/include/asm/vm86.h"
static inline  __attribute__((always_inline)) int handle_vm86_trap(struct kernel_vm86_regs *a, long b, int c)
{
 return 0;
}
# 11 "linux-2.6.26/include/asm/processor.h" 2
# 1 "linux-2.6.26/include/asm/math_emu.h" 1







struct info {
 long ___orig_eip;
 long ___ebx;
 long ___ecx;
 long ___edx;
 long ___esi;
 long ___edi;
 long ___ebp;
 long ___eax;
 long ___ds;
 long ___es;
 long ___fs;
 long ___orig_eax;
 long ___eip;
 long ___cs;
 long ___eflags;
 long ___esp;
 long ___ss;
 long ___vm86_es;
 long ___vm86_ds;
 long ___vm86_fs;
 long ___vm86_gs;
};
# 12 "linux-2.6.26/include/asm/processor.h" 2
# 1 "linux-2.6.26/include/asm/segment.h" 1
# 201 "linux-2.6.26/include/asm/segment.h"
extern const char early_idt_handlers[32][10];
# 13 "linux-2.6.26/include/asm/processor.h" 2

# 1 "linux-2.6.26/include/asm/sigcontext.h" 1
# 121 "linux-2.6.26/include/asm/sigcontext.h"
struct _fpstate {
 __u16 cwd;
 __u16 swd;
 __u16 twd;

 __u16 fop;
 __u64 rip;
 __u64 rdp;
 __u32 mxcsr;
 __u32 mxcsr_mask;
 __u32 st_space[32];
 __u32 xmm_space[64];
 __u32 reserved2[24];
};


struct sigcontext {
 unsigned long r8;
 unsigned long r9;
 unsigned long r10;
 unsigned long r11;
 unsigned long r12;
 unsigned long r13;
 unsigned long r14;
 unsigned long r15;
 unsigned long di;
 unsigned long si;
 unsigned long bp;
 unsigned long bx;
 unsigned long dx;
 unsigned long ax;
 unsigned long cx;
 unsigned long sp;
 unsigned long ip;
 unsigned long flags;
 unsigned short cs;
 unsigned short gs;
 unsigned short fs;
 unsigned short __pad0;
 unsigned long err;
 unsigned long trapno;
 unsigned long oldmask;
 unsigned long cr2;
 struct _fpstate *fpstate;
 unsigned long reserved1[8];
};
# 15 "linux-2.6.26/include/asm/processor.h" 2
# 1 "linux-2.6.26/include/asm/current.h" 1



# 1 "linux-2.6.26/include/asm/current_64.h" 1




struct task_struct;
# 5 "linux-2.6.26/include/asm/current.h" 2
# 16 "linux-2.6.26/include/asm/processor.h" 2

# 1 "linux-2.6.26/include/asm/system.h" 1






# 1 "linux-2.6.26/include/asm/cmpxchg.h" 1



# 1 "linux-2.6.26/include/asm/cmpxchg_64.h" 1
# 11 "linux-2.6.26/include/asm/cmpxchg_64.h"
static inline  __attribute__((always_inline)) void set_64bit(volatile unsigned long *ptr, unsigned long val)
{
 *ptr = val;
}
# 23 "linux-2.6.26/include/asm/cmpxchg_64.h"
static inline  __attribute__((always_inline)) unsigned long __xchg(unsigned long x, volatile void *ptr,
       int size)
{
 switch (size) {
 case 1:
  asm volatile("xchgb %b0,%1"
        : "=q" (x)
        : "m" (*((volatile long *)(ptr))), "0" (x)
        : "memory");
  break;
 case 2:
  asm volatile("xchgw %w0,%1"
        : "=r" (x)
        : "m" (*((volatile long *)(ptr))), "0" (x)
        : "memory");
  break;
 case 4:
  asm volatile("xchgl %k0,%1"
        : "=r" (x)
        : "m" (*((volatile long *)(ptr))), "0" (x)
        : "memory");
  break;
 case 8:
  asm volatile("xchgq %0,%1"
        : "=r" (x)
        : "m" (*((volatile long *)(ptr))), "0" (x)
        : "memory");
  break;
 }
 return x;
}
# 63 "linux-2.6.26/include/asm/cmpxchg_64.h"
static inline  __attribute__((always_inline)) unsigned long __cmpxchg(volatile void *ptr, unsigned long old,
          unsigned long new, int size)
{
 unsigned long prev;
 switch (size) {
 case 1:
  asm volatile("" "cmpxchgb %b1,%2"
        : "=a"(prev)
        : "q"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 2:
  asm volatile("" "cmpxchgw %w1,%2"
        : "=a"(prev)
        : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 4:
  asm volatile("" "cmpxchgl %k1,%2"
        : "=a"(prev)
        : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 8:
  asm volatile("" "cmpxchgq %1,%2"
        : "=a"(prev)
        : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 }
 return old;
}

static inline  __attribute__((always_inline)) unsigned long __cmpxchg_local(volatile void *ptr,
         unsigned long old,
         unsigned long new, int size)
{
 unsigned long prev;
 switch (size) {
 case 1:
  asm volatile("cmpxchgb %b1,%2"
        : "=a"(prev)
        : "q"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 2:
  asm volatile("cmpxchgw %w1,%2"
        : "=a"(prev)
        : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 4:
  asm volatile("cmpxchgl %k1,%2"
        : "=a"(prev)
        : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 8:
  asm volatile("cmpxchgq %1,%2"
        : "=a"(prev)
        : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 }
 return old;
}
# 5 "linux-2.6.26/include/asm/cmpxchg.h" 2
# 8 "linux-2.6.26/include/asm/system.h" 2
# 1 "linux-2.6.26/include/asm/nops.h" 1
# 9 "linux-2.6.26/include/asm/system.h" 2


# 1 "linux-2.6.26/include/linux/irqflags.h" 1
# 12 "linux-2.6.26/include/asm/system.h" 2
# 139 "linux-2.6.26/include/asm/system.h"
extern void load_gs_index(unsigned);
# 165 "linux-2.6.26/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long get_limit(unsigned long segment)
{
 unsigned long __limit;
 asm("lsll %1,%0" : "=r" (__limit) : "r" (segment));
 return __limit + 1;
}

static inline  __attribute__((always_inline)) void native_clts(void)
{
 asm volatile("clts");
}
# 184 "linux-2.6.26/include/asm/system.h"
typedef  unsigned long   _GLOBAL_23_T; static  _GLOBAL_23_T  global___force_order[NUM_STACKS];    

static inline  __attribute__((always_inline)) unsigned long native_read_cr0(void)
{
 unsigned long val;
 asm volatile("mov %%cr0,%0\n\t" : "=r" (val), "=m" (global___force_order[get_stack_id()]));
 return val;
}

static inline  __attribute__((always_inline)) void native_write_cr0(unsigned long val)
{
 asm volatile("mov %0,%%cr0": : "r" (val), "m" (global___force_order[get_stack_id()]));
}

static inline  __attribute__((always_inline)) unsigned long native_read_cr2(void)
{
 unsigned long val;
 asm volatile("mov %%cr2,%0\n\t" : "=r" (val), "=m" (global___force_order[get_stack_id()]));
 return val;
}

static inline  __attribute__((always_inline)) void native_write_cr2(unsigned long val)
{
 asm volatile("mov %0,%%cr2": : "r" (val), "m" (global___force_order[get_stack_id()]));
}

static inline  __attribute__((always_inline)) unsigned long native_read_cr3(void)
{
 unsigned long val;
 asm volatile("mov %%cr3,%0\n\t" : "=r" (val), "=m" (global___force_order[get_stack_id()]));
 return val;
}

static inline  __attribute__((always_inline)) void native_write_cr3(unsigned long val)
{
 asm volatile("mov %0,%%cr3": : "r" (val), "m" (global___force_order[get_stack_id()]));
}

static inline  __attribute__((always_inline)) unsigned long native_read_cr4(void)
{
 unsigned long val;
 asm volatile("mov %%cr4,%0\n\t" : "=r" (val), "=m" (global___force_order[get_stack_id()]));
 return val;
}

static inline  __attribute__((always_inline)) unsigned long native_read_cr4_safe(void)
{
 unsigned long val;
# 240 "linux-2.6.26/include/asm/system.h"
 val = native_read_cr4();

 return val;
}

static inline  __attribute__((always_inline)) void native_write_cr4(unsigned long val)
{
 asm volatile("mov %0,%%cr4": : "r" (val), "m" (global___force_order[get_stack_id()]));
}


static inline  __attribute__((always_inline)) unsigned long native_read_cr8(void)
{
 unsigned long cr8;
 asm volatile("movq %%cr8,%0" : "=r" (cr8));
 return cr8;
}

static inline  __attribute__((always_inline)) void native_write_cr8(unsigned long val)
{
 asm volatile("movq %0,%%cr8" :: "r" (val) : "memory");
}


static inline  __attribute__((always_inline)) void native_wbinvd(void)
{
 asm volatile("wbinvd": : :"memory");
}
# 296 "linux-2.6.26/include/asm/system.h"
static inline  __attribute__((always_inline)) void clflush(volatile void *__p)
{
 asm volatile("clflush %0" : "+m" (*(volatile char *)__p));
}



void disable_hlt(void);
void enable_hlt(void);

typedef  int  _GLOBAL_24_T; extern  _GLOBAL_24_T  global_es7000_plat[NUM_STACKS];   
void cpu_idle_wait(void);

extern unsigned long arch_align_stack(unsigned long sp);
extern void free_init_pages(char *what, unsigned long begin, unsigned long end);

void default_idle(void);
# 416 "linux-2.6.26/include/asm/system.h"
static inline  __attribute__((always_inline)) void rdtsc_barrier(void)
{
 asm volatile ("661:\n\t" ".byte 0x66,0x66,0x90\n" "\n662:\n" ".section .altinstructions,\"a\"\n" " .balign 8 " "\n" " .quad " "661b\n" " .quad " "663f\n" "	 .byte %c0\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "mfence" "\n664:\n" ".previous" :: "i" ((3*32+17)) : "memory");
 asm volatile ("661:\n\t" ".byte 0x66,0x66,0x90\n" "\n662:\n" ".section .altinstructions,\"a\"\n" " .balign 8 " "\n" " .quad " "661b\n" " .quad " "663f\n" "	 .byte %c0\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "lfence" "\n664:\n" ".previous" :: "i" ((3*32+18)) : "memory");
}
# 18 "linux-2.6.26/include/asm/processor.h" 2

# 1 "linux-2.6.26/include/asm/percpu.h" 1
# 21 "linux-2.6.26/include/asm/percpu.h"
# 1 "linux-2.6.26/include/asm-generic/percpu.h" 1



# 1 "linux-2.6.26/include/linux/threads.h" 1
# 5 "linux-2.6.26/include/asm-generic/percpu.h" 2
# 22 "linux-2.6.26/include/asm/percpu.h" 2

typedef  __typeof__ ( struct x8664_pda  )   _GLOBAL_25_T; extern  _GLOBAL_25_T  global_per_cpu__pda[NUM_STACKS];    
# 20 "linux-2.6.26/include/asm/processor.h" 2
# 1 "linux-2.6.26/include/asm/msr.h" 1



# 1 "linux-2.6.26/include/asm/msr-index.h" 1
# 5 "linux-2.6.26/include/asm/msr.h" 2
# 14 "linux-2.6.26/include/asm/msr.h"
# 1 "linux-2.6.26/include/asm/errno.h" 1
# 15 "linux-2.6.26/include/asm/msr.h" 2

static inline  __attribute__((always_inline)) unsigned long long native_read_tscp(unsigned int *aux)
{
 unsigned long low, high;
 asm volatile(".byte 0x0f,0x01,0xf9"
       : "=a" (low), "=d" (high), "=c" (*aux));
 return low | ((u64)high << 32);
}
# 42 "linux-2.6.26/include/asm/msr.h"
static inline  __attribute__((always_inline)) unsigned long long native_read_msr(unsigned int msr)
{
 unsigned low, high;

 asm volatile("rdmsr" : "=a" (low), "=d" (high) : "c" (msr));
 return ((low) | ((u64)(high) << 32));
}

static inline  __attribute__((always_inline)) unsigned long long native_read_msr_safe(unsigned int msr,
            int *err)
{
 unsigned low, high;

 asm volatile("2: rdmsr ; xor %0,%0\n"
       "1:\n\t"
       ".section .fixup,\"ax\"\n\t"
       "3:  mov %3,%0 ; jmp 1b\n\t"
       ".previous\n\t"
       " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "2b" "," "3b" "\n" " .previous\n"
       : "=r" (*err), "=a" (low), "=d" (high)
       : "c" (msr), "i" (-14));
 return ((low) | ((u64)(high) << 32));
}

static inline  __attribute__((always_inline)) void native_write_msr(unsigned int msr,
        unsigned low, unsigned high)
{
 asm volatile("wrmsr" : : "c" (msr), "a"(low), "d" (high));
}

static inline  __attribute__((always_inline)) int native_write_msr_safe(unsigned int msr,
     unsigned low, unsigned high)
{
 int err;
 asm volatile("2: wrmsr ; xor %0,%0\n"
       "1:\n\t"
       ".section .fixup,\"ax\"\n\t"
       "3:  mov %4,%0 ; jmp 1b\n\t"
       ".previous\n\t"
       " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "2b" "," "3b" "\n" " .previous\n"
       : "=a" (err)
       : "c" (msr), "0" (low), "d" (high),
       "i" (-14));
 return err;
}

extern unsigned long long native_read_tsc(void);

static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned long long __native_read_tsc(void)
{
 unsigned low, high;

 rdtsc_barrier();
 asm volatile("rdtsc" : "=a" (low), "=d" (high));
 rdtsc_barrier();

 return ((low) | ((u64)(high) << 32));
}

static inline  __attribute__((always_inline)) unsigned long long native_read_pmc(int counter)
{
 unsigned low, high;

 asm volatile("rdpmc" : "=a" (low), "=d" (high) : "c" (counter));
 return ((low) | ((u64)(high) << 32));
}
# 126 "linux-2.6.26/include/asm/msr.h"
static inline  __attribute__((always_inline)) void wrmsr(unsigned msr, unsigned low, unsigned high)
{
 native_write_msr(msr, low, high);
}
# 138 "linux-2.6.26/include/asm/msr.h"
static inline  __attribute__((always_inline)) int wrmsr_safe(unsigned msr, unsigned low, unsigned high)
{
 return native_write_msr_safe(msr, low, high);
}
# 153 "linux-2.6.26/include/asm/msr.h"
static inline  __attribute__((always_inline)) int rdmsrl_safe(unsigned msr, unsigned long long *p)
{
 int err;

 *p = native_read_msr_safe(msr, &err);
 return err;
}
# 200 "linux-2.6.26/include/asm/msr.h"
static inline  __attribute__((always_inline)) void rdmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h)
{
 do { u64 __val = native_read_msr((msr_no)); (*l) = (u32)__val; (*h) = (u32)(__val >> 32); } while (0);
}
static inline  __attribute__((always_inline)) void wrmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h)
{
 wrmsr(msr_no, l, h);
}
static inline  __attribute__((always_inline)) int rdmsr_safe_on_cpu(unsigned int cpu, u32 msr_no,
        u32 *l, u32 *h)
{
 return ({ int __err; u64 __val = native_read_msr_safe((msr_no), &__err); (*l) = (u32)__val; (*h) = (u32)(__val >> 32); __err; });
}
static inline  __attribute__((always_inline)) int wrmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h)
{
 return wrmsr_safe(msr_no, l, h);
}
# 21 "linux-2.6.26/include/asm/processor.h" 2
# 1 "linux-2.6.26/include/asm/desc_defs.h" 1
# 22 "linux-2.6.26/include/asm/desc_defs.h"
struct desc_struct {
 union {
  struct {
   unsigned int a;
   unsigned int b;
  };
  struct {
   u16 limit0;
   u16 base0;
   unsigned base1: 8, type: 4, s: 1, dpl: 2, p: 1;
   unsigned limit: 4, avl: 1, l: 1, d: 1, g: 1, base2: 8;
  };
 };
} __attribute__((packed)) ;

enum {
 GATE_INTERRUPT = 0xE,
 GATE_TRAP = 0xF,
 GATE_CALL = 0xC,
 GATE_TASK = 0x5,
};


struct gate_struct64 {
 u16 offset_low;
 u16 segment;
 unsigned ist : 3, zero0 : 5, type : 5, dpl : 2, p : 1;
 u16 offset_middle;
 u32 offset_high;
 u32 zero1;
} __attribute__((packed)) ;





enum {
 DESC_TSS = 0x9,
 DESC_LDT = 0x2,
 DESCTYPE_S = 0x10,
};


struct ldttss_desc64 {
 u16 limit0;
 u16 base0;
 unsigned base1 : 8, type : 5, dpl : 2, p : 1;
 unsigned limit1 : 4, zero0 : 3, g : 1, base2 : 8;
 u32 base3;
 u32 zero1;
} __attribute__((packed)) ;


typedef struct gate_struct64 gate_desc;
typedef struct ldttss_desc64 ldt_desc;
typedef struct ldttss_desc64 tss_desc;






struct desc_ptr {
 unsigned short size;
 unsigned long address;
}  __attribute__((packed)) ;
# 22 "linux-2.6.26/include/asm/processor.h" 2


# 1 "linux-2.6.26/include/linux/personality.h" 1
# 10 "linux-2.6.26/include/linux/personality.h"
struct exec_domain;
struct pt_regs;

extern int register_exec_domain(struct exec_domain *);
extern int unregister_exec_domain(struct exec_domain *);
extern int __set_personality(unsigned long);
# 24 "linux-2.6.26/include/linux/personality.h"
enum {
 ADDR_NO_RANDOMIZE = 0x0040000,
 FDPIC_FUNCPTRS = 0x0080000,


 MMAP_PAGE_ZERO = 0x0100000,
 ADDR_COMPAT_LAYOUT = 0x0200000,
 READ_IMPLIES_EXEC = 0x0400000,
 ADDR_LIMIT_32BIT = 0x0800000,
 SHORT_INODE = 0x1000000,
 WHOLE_SECONDS = 0x2000000,
 STICKY_TIMEOUTS = 0x4000000,
 ADDR_LIMIT_3GB = 0x8000000,
};
# 51 "linux-2.6.26/include/linux/personality.h"
enum {
 PER_LINUX = 0x0000,
 PER_LINUX_32BIT = 0x0000 | ADDR_LIMIT_32BIT,
 PER_LINUX_FDPIC = 0x0000 | FDPIC_FUNCPTRS,
 PER_SVR4 = 0x0001 | STICKY_TIMEOUTS | MMAP_PAGE_ZERO,
 PER_SVR3 = 0x0002 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_SCOSVR3 = 0x0003 | STICKY_TIMEOUTS |
      WHOLE_SECONDS | SHORT_INODE,
 PER_OSR5 = 0x0003 | STICKY_TIMEOUTS | WHOLE_SECONDS,
 PER_WYSEV386 = 0x0004 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_ISCR4 = 0x0005 | STICKY_TIMEOUTS,
 PER_BSD = 0x0006,
 PER_SUNOS = 0x0006 | STICKY_TIMEOUTS,
 PER_XENIX = 0x0007 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_LINUX32 = 0x0008,
 PER_LINUX32_3GB = 0x0008 | ADDR_LIMIT_3GB,
 PER_IRIX32 = 0x0009 | STICKY_TIMEOUTS,
 PER_IRIXN32 = 0x000a | STICKY_TIMEOUTS,
 PER_IRIX64 = 0x000b | STICKY_TIMEOUTS,
 PER_RISCOS = 0x000c,
 PER_SOLARIS = 0x000d | STICKY_TIMEOUTS,
 PER_UW7 = 0x000e | STICKY_TIMEOUTS | MMAP_PAGE_ZERO,
 PER_OSF4 = 0x000f,
 PER_HPUX = 0x0010,
 PER_MASK = 0x00ff,
};
# 86 "linux-2.6.26/include/linux/personality.h"
typedef void (*handler_t)(int, struct pt_regs *);

struct exec_domain {
 const char *name;
 handler_t handler;
 unsigned char pers_low;
 unsigned char pers_high;
 unsigned long *signal_map;
 unsigned long *signal_invmap;
 struct map_segment *err_map;
 struct map_segment *socktype_map;
 struct map_segment *sockopt_map;
 struct map_segment *af_map;
 struct module *module;
 struct exec_domain *next;
};
# 25 "linux-2.6.26/include/asm/processor.h" 2
# 1 "linux-2.6.26/include/linux/cpumask.h" 1
# 90 "linux-2.6.26/include/linux/cpumask.h"
# 1 "linux-2.6.26/include/linux/bitmap.h" 1







# 1 "linux-2.6.26/include/linux/string.h" 1
# 14 "linux-2.6.26/include/linux/string.h"
extern char *strndup_user(const char *, long);




# 1 "linux-2.6.26/include/asm/string.h" 1



# 1 "linux-2.6.26/include/asm/string_64.h" 1
# 9 "linux-2.6.26/include/asm/string_64.h"
static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *__inline_memcpy(void *to, const void *from, size_t n)
{
 unsigned long d0, d1, d2;
 asm volatile("rep ; movsl\n\t"
       "testb $2,%b4\n\t"
       "je 1f\n\t"
       "movsw\n"
       "1:\ttestb $1,%b4\n\t"
       "je 2f\n\t"
       "movsb\n"
       "2:"
       : "=&c" (d0), "=&D" (d1), "=&S" (d2)
       : "0" (n / 4), "q" (n), "1" ((long)to), "2" ((long)from)
       : "memory");
 return to;
}






extern void *memcpy(void *to, const void *from, size_t len);
# 47 "linux-2.6.26/include/asm/string_64.h"
void *memset(void *s, int c, size_t n);


void *memmove(void *dest, const void *src, size_t count);

int memcmp(const void *cs, const void *ct, size_t count);
size_t strlen(const char *s);
char *strcpy(char *dest, const char *src);
char *strcat(char *dest, const char *src);
int strcmp(const char *cs, const char *ct);
# 5 "linux-2.6.26/include/asm/string.h" 2
# 20 "linux-2.6.26/include/linux/string.h" 2


extern char * strcpy(char *,const char *);


extern char * strncpy(char *,const char *, __kernel_size_t);


size_t strlcpy(char *, const char *, size_t);


extern char * strcat(char *, const char *);


extern char * strncat(char *, const char *, __kernel_size_t);


extern size_t strlcat(char *, const char *, __kernel_size_t);


extern int strcmp(const char *,const char *);


extern int strncmp(const char *,const char *,__kernel_size_t);


extern int strnicmp(const char *, const char *, __kernel_size_t);


extern int strcasecmp(const char *s1, const char *s2);


extern int strncasecmp(const char *s1, const char *s2, size_t n);


extern char * strchr(const char *,int);


extern char * strnchr(const char *, size_t, int);


extern char * strrchr(const char *,int);

extern char * strstrip(char *);

extern char * strstr(const char *,const char *);


extern __kernel_size_t strlen(const char *);


extern __kernel_size_t strnlen(const char *,__kernel_size_t);


extern char * strpbrk(const char *,const char *);


extern char * strsep(char **,const char *);


extern __kernel_size_t strspn(const char *,const char *);


extern __kernel_size_t strcspn(const char *,const char *);
# 96 "linux-2.6.26/include/linux/string.h"
extern void * memscan(void *,int,__kernel_size_t);


extern int memcmp(const void *,const void *,__kernel_size_t);


extern void * memchr(const void *,int,__kernel_size_t);


extern char *kstrdup(const char *s, gfp_t gfp);
extern char *kstrndup(const char *s, size_t len, gfp_t gfp);
extern void *kmemdup(const void *src, size_t len, gfp_t gfp);

extern char **argv_split(gfp_t gfp, const char *str, int *argcp);
extern void argv_free(char **argv);

extern bool sysfs_streq(const char *s1, const char *s2);
# 9 "linux-2.6.26/include/linux/bitmap.h" 2
# 87 "linux-2.6.26/include/linux/bitmap.h"
extern int __bitmap_empty(const unsigned long *bitmap, int bits);
extern int __bitmap_full(const unsigned long *bitmap, int bits);
extern int __bitmap_equal(const unsigned long *bitmap1,
                 const unsigned long *bitmap2, int bits);
extern void __bitmap_complement(unsigned long *dst, const unsigned long *src,
   int bits);
extern void __bitmap_shift_right(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_shift_left(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_and(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_or(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_xor(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_andnot(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_intersects(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_subset(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_weight(const unsigned long *bitmap, int bits);

extern int bitmap_scnprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int __bitmap_parse(const char *buf, unsigned int buflen, int is_user,
   unsigned long *dst, int nbits);
extern int bitmap_parse_user(const char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern int bitmap_scnlistprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int bitmap_parselist(const char *buf, unsigned long *maskp,
   int nmaskbits);
extern void bitmap_remap(unsigned long *dst, const unsigned long *src,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_bitremap(int oldbit,
  const unsigned long *old, const unsigned long *new, int bits);
extern void bitmap_onto(unsigned long *dst, const unsigned long *orig,
  const unsigned long *relmap, int bits);
extern void bitmap_fold(unsigned long *dst, const unsigned long *orig,
  int sz, int bits);
extern int bitmap_find_free_region(unsigned long *bitmap, int bits, int order);
extern void bitmap_release_region(unsigned long *bitmap, int pos, int order);
extern int bitmap_allocate_region(unsigned long *bitmap, int pos, int order);







static inline  __attribute__((always_inline)) void bitmap_zero(unsigned long *dst, int nbits)
{
 if (nbits <= 64)
  *dst = 0UL;
 else {
  int len = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(unsigned long);
  memset(dst, 0, len);
 }
}

static inline  __attribute__((always_inline)) void bitmap_fill(unsigned long *dst, int nbits)
{
 size_t nlongs = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)));
 if (nlongs > 1) {
  int len = (nlongs - 1) * sizeof(unsigned long);
  memset(dst, 0xff, len);
 }
 dst[nlongs - 1] = ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
}

static inline  __attribute__((always_inline)) void bitmap_copy(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if (nbits <= 64)
  *dst = *src;
 else {
  int len = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(unsigned long);
  memcpy(dst, src, len);
 }
}

static inline  __attribute__((always_inline)) void bitmap_and(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 & *src2;
 else
  __bitmap_and(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_or(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 | *src2;
 else
  __bitmap_or(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_xor(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 ^ *src2;
 else
  __bitmap_xor(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_andnot(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 & ~(*src2);
 else
  __bitmap_andnot(dst, src1, src2, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_complement(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if (nbits <= 64)
  *dst = ~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_complement(dst, src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_equal(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ! ((*src1 ^ *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_equal(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_intersects(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ((*src1 & *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL )) != 0;
 else
  return __bitmap_intersects(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_subset(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ! ((*src1 & ~(*src2)) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_subset(src1, src2, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_empty(const unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return ! (*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_empty(src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_full(const unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return ! (~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_full(src, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_weight(const unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return hweight_long(*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 return __bitmap_weight(src, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_shift_right(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if (nbits <= 64)
  *dst = *src >> n;
 else
  __bitmap_shift_right(dst, src, n, nbits);
}

static inline  __attribute__((always_inline)) void bitmap_shift_left(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if (nbits <= 64)
  *dst = (*src << n) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_shift_left(dst, src, n, nbits);
}

static inline  __attribute__((always_inline)) int bitmap_parse(const char *buf, unsigned int buflen,
   unsigned long *maskp, int nmaskbits)
{
 return __bitmap_parse(buf, buflen, 0, maskp, nmaskbits);
}
# 91 "linux-2.6.26/include/linux/cpumask.h" 2

typedef struct { unsigned long bits[(((1) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } cpumask_t;
extern cpumask_t _unused_cpumask_arg_;


static inline  __attribute__((always_inline)) void __cpu_set(int cpu, volatile cpumask_t *dstp)
{
 set_bit(cpu, dstp->bits);
}


static inline  __attribute__((always_inline)) void __cpu_clear(int cpu, volatile cpumask_t *dstp)
{
 clear_bit(cpu, dstp->bits);
}


static inline  __attribute__((always_inline)) void __cpus_setall(cpumask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_clear(cpumask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}





static inline  __attribute__((always_inline)) int __cpu_test_and_set(int cpu, cpumask_t *addr)
{
 return test_and_set_bit(cpu, addr->bits);
}


static inline  __attribute__((always_inline)) void __cpus_and(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_or(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_xor(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_andnot(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) void __cpus_complement(cpumask_t *dstp,
     const cpumask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_equal(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_intersects(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_subset(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_empty(const cpumask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_full(const cpumask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpus_weight(const cpumask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_shift_right(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_shift_left(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}
# 286 "linux-2.6.26/include/linux/cpumask.h"
static inline  __attribute__((always_inline)) int __cpumask_scnprintf(char *buf, int len,
     const cpumask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __cpumask_parse_user(const char *buf, int len,
     cpumask_t *dstp, int nbits)
{
 return bitmap_parse_user(buf, len, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __cpulist_scnprintf(char *buf, int len,
     const cpumask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __cpulist_parse(const char *buf, cpumask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __cpu_remap(int oldbit,
  const cpumask_t *oldp, const cpumask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_remap(cpumask_t *dstp, const cpumask_t *srcp,
  const cpumask_t *oldp, const cpumask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_onto(cpumask_t *dstp, const cpumask_t *origp,
  const cpumask_t *relmapp, int nbits)
{
 bitmap_onto(dstp->bits, origp->bits, relmapp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __cpus_fold(cpumask_t *dstp, const cpumask_t *origp,
  int sz, int nbits)
{
 bitmap_fold(dstp->bits, origp->bits, sz, nbits);
}
# 416 "linux-2.6.26/include/linux/cpumask.h"
typedef  cpumask_t  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_cpu_possible_map[NUM_STACKS];   
typedef  cpumask_t  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_cpu_online_map[NUM_STACKS];   
typedef  cpumask_t  _GLOBAL_28_T; extern  _GLOBAL_28_T  global_cpu_present_map[NUM_STACKS];   
# 26 "linux-2.6.26/include/asm/processor.h" 2
# 34 "linux-2.6.26/include/asm/processor.h"
static inline  __attribute__((always_inline)) void *current_text_addr(void)
{
 void *pc;

 asm volatile("mov $1f, %0; 1:":"=r" (pc));

 return pc;
}
# 57 "linux-2.6.26/include/asm/processor.h"
struct cpuinfo_x86 {
 __u8 x86;
 __u8 x86_vendor;
 __u8 x86_model;
 __u8 x86_mask;
# 75 "linux-2.6.26/include/asm/processor.h"
 int x86_tlbsize;
 __u8 x86_virt_bits;
 __u8 x86_phys_bits;

 __u8 x86_coreid_bits;

 __u32 extended_cpuid_level;


 int cpuid_level;
 __u32 x86_capability[8];
 char x86_vendor_id[16];
 char x86_model_id[64];

 int x86_cache_size;
 int x86_cache_alignment;
 int x86_power;
 unsigned long loops_per_jiffy;





 u16 x86_max_cores;
 u16 apicid;
 u16 initial_apicid;
 u16 x86_clflush_size;
# 112 "linux-2.6.26/include/asm/processor.h"
} __attribute__((__aligned__((1 << (5))))) ;
# 128 "linux-2.6.26/include/asm/processor.h"
typedef  struct cpuinfo_x86   _GLOBAL_29_T; extern  _GLOBAL_29_T  global_boot_cpu_data[NUM_STACKS];    
typedef  struct cpuinfo_x86   _GLOBAL_30_T; extern  _GLOBAL_30_T  global_new_cpu_data[NUM_STACKS];    

extern struct tss_struct doublefault_tss;
extern __u32 cleared_cpu_caps[8];
# 143 "linux-2.6.26/include/asm/processor.h"
static inline  __attribute__((always_inline)) int hlt_works(int cpu)
{



 return 1;

}



extern void cpu_detect(struct cpuinfo_x86 *c);

extern void identify_cpu(struct cpuinfo_x86 *);
extern void identify_boot_cpu(void);
extern void identify_secondary_cpu(struct cpuinfo_x86 *);
extern void print_cpu_info(struct cpuinfo_x86 *);
extern void init_scattered_cpuid_features(struct cpuinfo_x86 *c);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
typedef  unsigned short   _GLOBAL_31_T; extern  _GLOBAL_31_T  global_num_cache_leaves[NUM_STACKS];    


extern void detect_ht(struct cpuinfo_x86 *c);




static inline  __attribute__((always_inline)) void native_cpuid(unsigned int *eax, unsigned int *ebx,
    unsigned int *ecx, unsigned int *edx)
{

 asm("cpuid"
     : "=a" (*eax),
       "=b" (*ebx),
       "=c" (*ecx),
       "=d" (*edx)
     : "0" (*eax), "2" (*ecx));
}

static inline  __attribute__((always_inline)) void load_cr3(pgd_t *pgdir)
{
 (native_write_cr3(__phys_addr((unsigned long)(pgdir))));
}
# 221 "linux-2.6.26/include/asm/processor.h"
struct x86_hw_tss {
 u32 reserved1;
 u64 sp0;
 u64 sp1;
 u64 sp2;
 u64 reserved2;
 u64 ist[7];
 u32 reserved3;
 u32 reserved4;
 u16 reserved5;
 u16 io_bitmap_base;

}  __attribute__((packed)) __attribute__((__aligned__((1 << (5))))) ;
# 246 "linux-2.6.26/include/asm/processor.h"
struct tss_struct {



 struct x86_hw_tss x86_tss;







 unsigned long io_bitmap[((65536/8)/sizeof(long)) + 1];



 unsigned long io_bitmap_max;
 struct thread_struct *io_bitmap_owner;




 unsigned long __cacheline_filler[35];



 unsigned long stack[64];

} __attribute__((packed)) ;

typedef  __typeof__ ( struct tss_struct  )   _GLOBAL_32_T; extern  _GLOBAL_32_T  global_per_cpu__init_tss[NUM_STACKS];    




struct orig_ist {
 unsigned long ist[7];
};



struct i387_fsave_struct {
 u32 cwd;
 u32 swd;
 u32 twd;
 u32 fip;
 u32 fcs;
 u32 foo;
 u32 fos;


 u32 st_space[20];


 u32 status;
};

struct i387_fxsave_struct {
 u16 cwd;
 u16 swd;
 u16 twd;
 u16 fop;
 union {
  struct {
   u64 rip;
   u64 rdp;
  };
  struct {
   u32 fip;
   u32 fcs;
   u32 foo;
   u32 fos;
  };
 };
 u32 mxcsr;
 u32 mxcsr_mask;


 u32 st_space[32];


 u32 xmm_space[64];

 u32 padding[24];

} __attribute__((aligned(16))) ;

struct i387_soft_struct {
 u32 cwd;
 u32 swd;
 u32 twd;
 u32 fip;
 u32 fcs;
 u32 foo;
 u32 fos;

 u32 st_space[20];
 u8 ftop;
 u8 changed;
 u8 lookahead;
 u8 no_update;
 u8 rm;
 u8 alimit;
 struct info *info;
 u32 entry_eip;
};

union thread_xstate {
 struct i387_fsave_struct fsave;
 struct i387_fxsave_struct fxsave;
 struct i387_soft_struct soft;
};


typedef  __typeof__ ( struct orig_ist  )   _GLOBAL_33_T; extern  _GLOBAL_33_T  global_per_cpu__orig_ist[NUM_STACKS];    


extern void print_cpu_info(struct cpuinfo_x86 *);
typedef  unsigned int   _GLOBAL_34_T; extern  _GLOBAL_34_T  global_xstate_size[NUM_STACKS];    
extern void free_thread_xstate(struct task_struct *);
extern struct kmem_cache *task_xstate_cachep;
extern void init_scattered_cpuid_features(struct cpuinfo_x86 *c);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
typedef  unsigned short   _GLOBAL_35_T; extern  _GLOBAL_35_T  global_num_cache_leaves[NUM_STACKS];    

struct thread_struct {

 struct desc_struct tls_array[3];
 unsigned long sp0;
 unsigned long sp;



 unsigned long usersp;
 unsigned short es;
 unsigned short ds;
 unsigned short fsindex;
 unsigned short gsindex;

 unsigned long ip;
 unsigned long fs;
 unsigned long gs;

 unsigned long debugreg0;
 unsigned long debugreg1;
 unsigned long debugreg2;
 unsigned long debugreg3;
 unsigned long debugreg6;
 unsigned long debugreg7;

 unsigned long cr2;
 unsigned long trap_no;
 unsigned long error_code;

 union thread_xstate *xstate;
# 412 "linux-2.6.26/include/asm/processor.h"
 unsigned long *io_bitmap_ptr;
 unsigned long iopl;

 unsigned io_bitmap_max;

 unsigned long debugctlmsr;


 unsigned long ds_area_msr;
};

static inline  __attribute__((always_inline)) unsigned long native_get_debugreg(int regno)
{
 unsigned long val = 0;

 switch (regno) {
 case 0:
  asm("mov %%db0, %0" :"=r" (val));
  break;
 case 1:
  asm("mov %%db1, %0" :"=r" (val));
  break;
 case 2:
  asm("mov %%db2, %0" :"=r" (val));
  break;
 case 3:
  asm("mov %%db3, %0" :"=r" (val));
  break;
 case 6:
  asm("mov %%db6, %0" :"=r" (val));
  break;
 case 7:
  asm("mov %%db7, %0" :"=r" (val));
  break;
 default:
  do { asm volatile("ud2"); for (;;) ; } while (0);
 }
 return val;
}

static inline  __attribute__((always_inline)) void native_set_debugreg(int regno, unsigned long value)
{
 switch (regno) {
 case 0:
  asm("mov %0, %%db0" ::"r" (value));
  break;
 case 1:
  asm("mov %0, %%db1" ::"r" (value));
  break;
 case 2:
  asm("mov %0, %%db2" ::"r" (value));
  break;
 case 3:
  asm("mov %0, %%db3" ::"r" (value));
  break;
 case 6:
  asm("mov %0, %%db6" ::"r" (value));
  break;
 case 7:
  asm("mov %0, %%db7" ::"r" (value));
  break;
 default:
  do { asm volatile("ud2"); for (;;) ; } while (0);
 }
}




static inline  __attribute__((always_inline)) void native_set_iopl_mask(unsigned mask)
{
# 495 "linux-2.6.26/include/asm/processor.h"
}

static inline  __attribute__((always_inline)) void
native_load_sp0(struct tss_struct *tss, struct thread_struct *thread)
{
 tss->x86_tss.sp0 = thread->sp0;







}

static inline  __attribute__((always_inline)) void native_swapgs(void)
{

 asm volatile("swapgs" ::: "memory");

}
# 531 "linux-2.6.26/include/asm/processor.h"
static inline  __attribute__((always_inline)) void load_sp0(struct tss_struct *tss,
       struct thread_struct *thread)
{
 native_load_sp0(tss, thread);
}
# 547 "linux-2.6.26/include/asm/processor.h"
typedef  unsigned long   _GLOBAL_36_T; extern  _GLOBAL_36_T  global_mmu_cr4_features[NUM_STACKS];    

static inline  __attribute__((always_inline)) void set_in_cr4(unsigned long mask)
{
 unsigned cr4;

 global_mmu_cr4_features[get_stack_id()] |= mask;
 cr4 = (native_read_cr4());
 cr4 |= mask;
 (native_write_cr4(cr4));
}

static inline  __attribute__((always_inline)) void clear_in_cr4(unsigned long mask)
{
 unsigned cr4;

 global_mmu_cr4_features[get_stack_id()] &= ~mask;
 cr4 = (native_read_cr4());
 cr4 &= ~mask;
 (native_write_cr4(cr4));
}

struct microcode_header {
 unsigned int hdrver;
 unsigned int rev;
 unsigned int date;
 unsigned int sig;
 unsigned int cksum;
 unsigned int ldrver;
 unsigned int pf;
 unsigned int datasize;
 unsigned int totalsize;
 unsigned int reserved[3];
};

struct microcode {
 struct microcode_header hdr;
 unsigned int bits[0];
};

typedef struct microcode microcode_t;
typedef struct microcode_header microcode_header_t;


struct extended_signature {
 unsigned int sig;
 unsigned int pf;
 unsigned int cksum;
};

struct extended_sigtable {
 unsigned int count;
 unsigned int cksum;
 unsigned int reserved[3];
 struct extended_signature sigs[0];
};

typedef struct {
 unsigned long seg;
} mm_segment_t;





extern int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);


extern void release_thread(struct task_struct *);


extern void prepare_to_copy(struct task_struct *tsk);

unsigned long get_wchan(struct task_struct *p);






static inline  __attribute__((always_inline)) void cpuid(unsigned int op,
    unsigned int *eax, unsigned int *ebx,
    unsigned int *ecx, unsigned int *edx)
{
 *eax = op;
 *ecx = 0;
 native_cpuid(eax, ebx, ecx, edx);
}


static inline  __attribute__((always_inline)) void cpuid_count(unsigned int op, int count,
          unsigned int *eax, unsigned int *ebx,
          unsigned int *ecx, unsigned int *edx)
{
 *eax = op;
 *ecx = count;
 native_cpuid(eax, ebx, ecx, edx);
}




static inline  __attribute__((always_inline)) unsigned int cpuid_eax(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return eax;
}

static inline  __attribute__((always_inline)) unsigned int cpuid_ebx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return ebx;
}

static inline  __attribute__((always_inline)) unsigned int cpuid_ecx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return ecx;
}

static inline  __attribute__((always_inline)) unsigned int cpuid_edx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return edx;
}


static inline  __attribute__((always_inline)) void rep_nop(void)
{
 asm volatile("rep; nop" ::: "memory");
}

static inline  __attribute__((always_inline)) void cpu_relax(void)
{
 rep_nop();
}


static inline  __attribute__((always_inline)) void sync_core(void)
{
 int tmp;

 asm volatile("cpuid" : "=a" (tmp) : "0" (1)
       : "ebx", "ecx", "edx", "memory");
}

static inline  __attribute__((always_inline)) void __monitor(const void *eax, unsigned long ecx,
        unsigned long edx)
{

 asm volatile(".byte 0x0f, 0x01, 0xc8;"
       :: "a" (eax), "c" (ecx), "d"(edx));
}

static inline  __attribute__((always_inline)) void __mwait(unsigned long eax, unsigned long ecx)
{

 asm volatile(".byte 0x0f, 0x01, 0xc9;"
       :: "a" (eax), "c" (ecx));
}

static inline  __attribute__((always_inline)) void __sti_mwait(unsigned long eax, unsigned long ecx)
{
 do { } while (0);

 asm volatile("sti; .byte 0x0f, 0x01, 0xc9;"
       :: "a" (eax), "c" (ecx));
}

extern void mwait_idle_with_hints(unsigned long eax, unsigned long ecx);

typedef  int  _GLOBAL_37_T; extern  _GLOBAL_37_T  global_force_mwait[NUM_STACKS];   

extern void select_idle_routine(const struct cpuinfo_x86 *c);

typedef  unsigned long   _GLOBAL_38_T; extern  _GLOBAL_38_T  global_boot_option_idle_override[NUM_STACKS];    

extern void enable_sep_cpu(void);
extern int sysenter_setup(void);


typedef  struct desc_ptr   _GLOBAL_39_T; extern  _GLOBAL_39_T  global_early_gdt_descr[NUM_STACKS];    

extern void cpu_set_gdt(int);
extern void switch_to_new_gdt(void);
extern void cpu_init(void);
extern void init_gdt(int cpu);

static inline  __attribute__((always_inline)) void update_debugctlmsr(unsigned long debugctlmsr)
{

 if (global_boot_cpu_data[get_stack_id()].x86 < 6)
  return;

 native_write_msr((0x000001d9), (u32)((u64)(debugctlmsr)), (u32)((u64)(debugctlmsr) >> 32));
}





typedef  unsigned int   _GLOBAL_40_T; extern  _GLOBAL_40_T  global_machine_id[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_41_T; extern  _GLOBAL_41_T  global_machine_submodel_id[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_42_T; extern  _GLOBAL_42_T  global_BIOS_revision[NUM_STACKS];    


typedef  int  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_bootloader_type[NUM_STACKS];   

typedef  char  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_ignore_fpu_irq[NUM_STACKS];   
# 786 "linux-2.6.26/include/asm/processor.h"
static inline  __attribute__((always_inline)) void prefetch(const void *x)
{
 asm volatile ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".section .altinstructions,\"a\"\n" " .balign 8 " "\n" " .quad " "661b\n" " .quad " "663f\n" "	 .byte %c0\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "prefetchnta (%1)" "\n664:\n" ".previous" :: "i" ((0*32+25)), "r" (x))


             ;
}






static inline  __attribute__((always_inline)) void prefetchw(const void *x)
{
 asm volatile ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".section .altinstructions,\"a\"\n" " .balign 8 " "\n" " .quad " "661b\n" " .quad " "663f\n" "	 .byte %c0\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "prefetchw (%1)" "\n664:\n" ".previous" :: "i" ((1*32+31)), "r" (x))


             ;
}

static inline  __attribute__((always_inline)) void spin_lock_prefetch(const void *x)
{
 prefetchw(x);
}
# 910 "linux-2.6.26/include/asm/processor.h"
extern void start_thread(struct pt_regs *regs, unsigned long new_ip,
            unsigned long new_sp);
# 925 "linux-2.6.26/include/asm/processor.h"
extern int get_tsc_mode(unsigned long adr);
extern int set_tsc_mode(unsigned int val);
# 25 "linux-2.6.26/include/asm/thread_info_64.h" 2

struct thread_info {
 struct task_struct *task;
 struct exec_domain *exec_domain;
 __u32 flags;
 __u32 status;
 __u32 cpu;
 int preempt_count;

 mm_segment_t addr_limit;
 struct restart_block restart_block;



};
# 63 "linux-2.6.26/include/asm/thread_info_64.h"
static inline  __attribute__((always_inline)) struct thread_info *current_thread_info(void)
{

 extern struct thread_info *nsc_get_current_thread_info(void);
 return nsc_get_current_thread_info();





}


static inline  __attribute__((always_inline)) struct thread_info *stack_thread_info(void)
{

 extern struct thread_info *nsc_get_current_thread_info(void);
 return nsc_get_current_thread_info();





}
# 195 "linux-2.6.26/include/asm/thread_info_64.h"
static inline  __attribute__((always_inline)) void set_restore_sigmask(void)
{
 struct thread_info *ti = current_thread_info();
 ti->status |= 0x0008;
 set_bit(2, &ti->flags);
}
# 6 "linux-2.6.26/include/asm/thread_info.h" 2



extern void arch_task_cache_init(void);
extern void free_thread_info(struct thread_info *ti);
extern int arch_dup_task_struct(struct task_struct *dst, struct task_struct *src);
# 48 "linux-2.6.26/include/linux/thread_info.h" 2
# 56 "linux-2.6.26/include/linux/thread_info.h"
static inline  __attribute__((always_inline)) void set_ti_thread_flag(struct thread_info *ti, int flag)
{
 set_bit(flag, (unsigned long *)&ti->flags);
}

static inline  __attribute__((always_inline)) void clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 clear_bit(flag, (unsigned long *)&ti->flags);
}

static inline  __attribute__((always_inline)) int test_and_set_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_set_bit(flag, (unsigned long *)&ti->flags);
}

static inline  __attribute__((always_inline)) int test_and_clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_clear_bit(flag, (unsigned long *)&ti->flags);
}

static inline  __attribute__((always_inline)) int test_ti_thread_flag(struct thread_info *ti, int flag)
{
 return (__builtin_constant_p((flag)) ? constant_test_bit((flag), ((unsigned long *)&ti->flags)) : variable_test_bit((flag), ((unsigned long *)&ti->flags)));
}
# 10 "linux-2.6.26/include/linux/preempt.h" 2

# 1 "linux-2.6.26/include/linux/list.h" 1




# 1 "linux-2.6.26/include/linux/poison.h" 1
# 6 "linux-2.6.26/include/linux/list.h" 2
# 1 "linux-2.6.26/include/linux/prefetch.h" 1
# 53 "linux-2.6.26/include/linux/prefetch.h"
static inline  __attribute__((always_inline)) void prefetch_range(void *addr, size_t len)
{







}
# 7 "linux-2.6.26/include/linux/list.h" 2
# 19 "linux-2.6.26/include/linux/list.h"
struct list_head {
 struct list_head *next, *prev;
};






static inline  __attribute__((always_inline)) void INIT_LIST_HEAD(struct list_head *list)
{
 list->next = list;
 list->prev = list;
}
# 41 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next)
{
 next->prev = new;
 new->next = next;
 new->prev = prev;
 prev->next = new;
}
# 65 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 82 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_tail(struct list_head *new, struct list_head *head)
{
 __list_add(new, head->prev, head);
}







static inline  __attribute__((always_inline)) void __list_add_rcu(struct list_head * new,
  struct list_head * prev, struct list_head * next)
{
 new->next = next;
 new->prev = prev;
 __asm__ __volatile__("": : :"memory");
 next->prev = new;
 prev->next = new;
}
# 119 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_rcu(struct list_head *new, struct list_head *head)
{
 __list_add_rcu(new, head, head->next);
}
# 140 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_tail_rcu(struct list_head *new,
     struct list_head *head)
{
 __list_add_rcu(new, head->prev, head);
}
# 153 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}
# 166 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_del(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->next = ((void *) 0x00100100);
 entry->prev = ((void *) 0x00200200);
}
# 200 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_del_rcu(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->prev = ((void *) 0x00200200);
}
# 213 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_replace(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->next->prev = new;
 new->prev = old->prev;
 new->prev->next = new;
}

static inline  __attribute__((always_inline)) void list_replace_init(struct list_head *old,
     struct list_head *new)
{
 list_replace(old, new);
 INIT_LIST_HEAD(old);
}
# 237 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_replace_rcu(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->prev = old->prev;
 __asm__ __volatile__("": : :"memory");
 new->next->prev = new;
 new->prev->next = new;
 old->prev = ((void *) 0x00200200);
}





static inline  __attribute__((always_inline)) void list_del_init(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 INIT_LIST_HEAD(entry);
}






static inline  __attribute__((always_inline)) void list_move(struct list_head *list, struct list_head *head)
{
 __list_del(list->prev, list->next);
 list_add(list, head);
}






static inline  __attribute__((always_inline)) void list_move_tail(struct list_head *list,
      struct list_head *head)
{
 __list_del(list->prev, list->next);
 list_add_tail(list, head);
}






static inline  __attribute__((always_inline)) int list_is_last(const struct list_head *list,
    const struct list_head *head)
{
 return list->next == head;
}





static inline  __attribute__((always_inline)) int list_empty(const struct list_head *head)
{
 return head->next == head;
}
# 314 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) int list_empty_careful(const struct list_head *head)
{
 struct list_head *next = head->next;
 return (next == head) && (next == head->prev);
}





static inline  __attribute__((always_inline)) int list_is_singular(const struct list_head *head)
{
 return !list_empty(head) && (head->next == head->prev);
}

static inline  __attribute__((always_inline)) void __list_splice(const struct list_head *list,
     struct list_head *head)
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 first->prev = head;
 head->next = first;

 last->next = at;
 at->prev = last;
}






static inline  __attribute__((always_inline)) void list_splice(const struct list_head *list,
    struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head);
}
# 362 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head);
  INIT_LIST_HEAD(list);
 }
}
# 388 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_splice_init_rcu(struct list_head *list,
     struct list_head *head,
     void (*sync)(void))
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 if (list_empty(head))
  return;



 INIT_LIST_HEAD(list);
# 410 "linux-2.6.26/include/linux/list.h"
 sync();
# 420 "linux-2.6.26/include/linux/list.h"
 last->next = at;
 __asm__ __volatile__("": : :"memory");
 head->next = first;
 first->prev = head;
 at->prev = last;
}
# 690 "linux-2.6.26/include/linux/list.h"
struct hlist_head {
 struct hlist_node *first;
};

struct hlist_node {
 struct hlist_node *next, **pprev;
};




static inline  __attribute__((always_inline)) void INIT_HLIST_NODE(struct hlist_node *h)
{
 h->next = ((void *)0);
 h->pprev = ((void *)0);
}

static inline  __attribute__((always_inline)) int hlist_unhashed(const struct hlist_node *h)
{
 return !h->pprev;
}

static inline  __attribute__((always_inline)) int hlist_empty(const struct hlist_head *h)
{
 return !h->first;
}

static inline  __attribute__((always_inline)) void __hlist_del(struct hlist_node *n)
{
 struct hlist_node *next = n->next;
 struct hlist_node **pprev = n->pprev;
 *pprev = next;
 if (next)
  next->pprev = pprev;
}

static inline  __attribute__((always_inline)) void hlist_del(struct hlist_node *n)
{
 __hlist_del(n);
 n->next = ((void *) 0x00100100);
 n->pprev = ((void *) 0x00200200);
}
# 752 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_del_rcu(struct hlist_node *n)
{
 __hlist_del(n);
 n->pprev = ((void *) 0x00200200);
}

static inline  __attribute__((always_inline)) void hlist_del_init(struct hlist_node *n)
{
 if (!hlist_unhashed(n)) {
  __hlist_del(n);
  INIT_HLIST_NODE(n);
 }
}
# 773 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_replace_rcu(struct hlist_node *old,
     struct hlist_node *new)
{
 struct hlist_node *next = old->next;

 new->next = next;
 new->pprev = old->pprev;
 __asm__ __volatile__("": : :"memory");
 if (next)
  new->next->pprev = &new->next;
 *new->pprev = new;
 old->pprev = ((void *) 0x00200200);
}

static inline  __attribute__((always_inline)) void hlist_add_head(struct hlist_node *n, struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 if (first)
  first->pprev = &n->next;
 h->first = n;
 n->pprev = &h->first;
}
# 817 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_add_head_rcu(struct hlist_node *n,
     struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 n->pprev = &h->first;
 __asm__ __volatile__("": : :"memory");
 if (first)
  first->pprev = &n->next;
 h->first = n;
}


static inline  __attribute__((always_inline)) void hlist_add_before(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 next->pprev = &n->next;
 *(n->pprev) = n;
}

static inline  __attribute__((always_inline)) void hlist_add_after(struct hlist_node *n,
     struct hlist_node *next)
{
 next->next = n->next;
 n->next = next;
 next->pprev = &n->next;

 if(next->next)
  next->next->pprev = &next->next;
}
# 868 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_add_before_rcu(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 __asm__ __volatile__("": : :"memory");
 next->pprev = &n->next;
 *(n->pprev) = n;
}
# 896 "linux-2.6.26/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_add_after_rcu(struct hlist_node *prev,
           struct hlist_node *n)
{
 n->next = prev->next;
 n->pprev = &prev->next;
 __asm__ __volatile__("": : :"memory");
 prev->next = n;
 if (n->next)
  n->next->pprev = &n->next;
}
# 12 "linux-2.6.26/include/linux/preempt.h" 2
# 50 "linux-2.6.26/include/linux/spinlock.h" 2




# 1 "linux-2.6.26/include/linux/stringify.h" 1
# 55 "linux-2.6.26/include/linux/spinlock.h" 2
# 1 "linux-2.6.26/include/linux/bottom_half.h" 1



extern void local_bh_disable(void);
extern void __local_bh_enable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);
# 56 "linux-2.6.26/include/linux/spinlock.h" 2
# 79 "linux-2.6.26/include/linux/spinlock.h"
# 1 "linux-2.6.26/include/linux/spinlock_types.h" 1
# 15 "linux-2.6.26/include/linux/spinlock_types.h"
# 1 "linux-2.6.26/include/linux/spinlock_types_up.h" 1
# 25 "linux-2.6.26/include/linux/spinlock_types_up.h"
typedef struct { } raw_spinlock_t;





typedef struct {

} raw_rwlock_t;
# 16 "linux-2.6.26/include/linux/spinlock_types.h" 2


# 1 "linux-2.6.26/include/linux/lockdep.h" 1
# 12 "linux-2.6.26/include/linux/lockdep.h"
struct task_struct;
struct lockdep_map;
# 313 "linux-2.6.26/include/linux/lockdep.h"
static inline  __attribute__((always_inline)) void lockdep_off(void)
{
}

static inline  __attribute__((always_inline)) void lockdep_on(void)
{
}
# 340 "linux-2.6.26/include/linux/lockdep.h"
struct lock_class_key { };
# 373 "linux-2.6.26/include/linux/lockdep.h"
static inline  __attribute__((always_inline)) void early_init_irq_lock_class(void)
{
}







static inline  __attribute__((always_inline)) void early_boot_irqs_off(void)
{
}
static inline  __attribute__((always_inline)) void early_boot_irqs_on(void)
{
}
static inline  __attribute__((always_inline)) void print_irqtrace_events(struct task_struct *curr)
{
}
# 19 "linux-2.6.26/include/linux/spinlock_types.h" 2

typedef struct {
 raw_spinlock_t raw_lock;
# 32 "linux-2.6.26/include/linux/spinlock_types.h"
} spinlock_t;



typedef struct {
 raw_rwlock_t raw_lock;
# 48 "linux-2.6.26/include/linux/spinlock_types.h"
} rwlock_t;
# 80 "linux-2.6.26/include/linux/spinlock.h" 2

extern int  __attribute__((section(".spinlock.text"))) generic__raw_read_trylock(raw_rwlock_t *lock);







# 1 "linux-2.6.26/include/linux/spinlock_up.h" 1
# 90 "linux-2.6.26/include/linux/spinlock.h" 2
# 141 "linux-2.6.26/include/linux/spinlock.h"
# 1 "linux-2.6.26/include/linux/spinlock_api_up.h" 1
# 142 "linux-2.6.26/include/linux/spinlock.h" 2
# 302 "linux-2.6.26/include/linux/spinlock.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1



# 1 "linux-2.6.26/include/asm/atomic_64.h" 1




# 1 "linux-2.6.26/include/asm/cmpxchg.h" 1
# 6 "linux-2.6.26/include/asm/atomic_64.h" 2
# 25 "linux-2.6.26/include/asm/atomic_64.h"
typedef struct {
 int counter;
} atomic_t;
# 55 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) void atomic_add(int i, atomic_t *v)
{
 asm volatile("" "addl %1,%0"
       : "=m" (v->counter)
       : "ir" (i), "m" (v->counter));
}
# 69 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) void atomic_sub(int i, atomic_t *v)
{
 asm volatile("" "subl %1,%0"
       : "=m" (v->counter)
       : "ir" (i), "m" (v->counter));
}
# 85 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic_sub_and_test(int i, atomic_t *v)
{
 unsigned char c;

 asm volatile("" "subl %2,%0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "ir" (i), "m" (v->counter) : "memory");
 return c;
}







static inline  __attribute__((always_inline)) void atomic_inc(atomic_t *v)
{
 asm volatile("" "incl %0"
       : "=m" (v->counter)
       : "m" (v->counter));
}







static inline  __attribute__((always_inline)) void atomic_dec(atomic_t *v)
{
 asm volatile("" "decl %0"
       : "=m" (v->counter)
       : "m" (v->counter));
}
# 129 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic_dec_and_test(atomic_t *v)
{
 unsigned char c;

 asm volatile("" "decl %0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "m" (v->counter) : "memory");
 return c != 0;
}
# 147 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic_inc_and_test(atomic_t *v)
{
 unsigned char c;

 asm volatile("" "incl %0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "m" (v->counter) : "memory");
 return c != 0;
}
# 166 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic_add_negative(int i, atomic_t *v)
{
 unsigned char c;

 asm volatile("" "addl %2,%0; sets %1"
       : "=m" (v->counter), "=qm" (c)
       : "ir" (i), "m" (v->counter) : "memory");
 return c;
}
# 183 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic_add_return(int i, atomic_t *v)
{
 int __i = i;
 asm volatile("" "xaddl %0, %1"
       : "+r" (i), "+m" (v->counter)
       : : "memory");
 return i + __i;
}

static inline  __attribute__((always_inline)) int atomic_sub_return(int i, atomic_t *v)
{
 return atomic_add_return(-i, v);
}






typedef struct {
 long counter;
} atomic64_t;
# 233 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) void atomic64_add(long i, atomic64_t *v)
{
 asm volatile("" "addq %1,%0"
       : "=m" (v->counter)
       : "ir" (i), "m" (v->counter));
}
# 247 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) void atomic64_sub(long i, atomic64_t *v)
{
 asm volatile("" "subq %1,%0"
       : "=m" (v->counter)
       : "ir" (i), "m" (v->counter));
}
# 263 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic64_sub_and_test(long i, atomic64_t *v)
{
 unsigned char c;

 asm volatile("" "subq %2,%0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "ir" (i), "m" (v->counter) : "memory");
 return c;
}







static inline  __attribute__((always_inline)) void atomic64_inc(atomic64_t *v)
{
 asm volatile("" "incq %0"
       : "=m" (v->counter)
       : "m" (v->counter));
}







static inline  __attribute__((always_inline)) void atomic64_dec(atomic64_t *v)
{
 asm volatile("" "decq %0"
       : "=m" (v->counter)
       : "m" (v->counter));
}
# 307 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic64_dec_and_test(atomic64_t *v)
{
 unsigned char c;

 asm volatile("" "decq %0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "m" (v->counter) : "memory");
 return c != 0;
}
# 325 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic64_inc_and_test(atomic64_t *v)
{
 unsigned char c;

 asm volatile("" "incq %0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "m" (v->counter) : "memory");
 return c != 0;
}
# 344 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic64_add_negative(long i, atomic64_t *v)
{
 unsigned char c;

 asm volatile("" "addq %2,%0; sets %1"
       : "=m" (v->counter), "=qm" (c)
       : "ir" (i), "m" (v->counter) : "memory");
 return c;
}
# 361 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) long atomic64_add_return(long i, atomic64_t *v)
{
 long __i = i;
 asm volatile("" "xaddq %0, %1;"
       : "+r" (i), "+m" (v->counter)
       : : "memory");
 return i + __i;
}

static inline  __attribute__((always_inline)) long atomic64_sub_return(long i, atomic64_t *v)
{
 return atomic64_add_return(-i, v);
}
# 393 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic_add_unless(atomic_t *v, int a, int u)
{
 int c, old;
 c = ((v)->counter);
 for (;;) {
  if (__builtin_expect(!!(c == (u)), 0))
   break;
  old = (((__typeof__(*(&(((v))->counter))))__cmpxchg((&(((v))->counter)), (unsigned long)((c)), (unsigned long)((c + (a))), sizeof(*(&(((v))->counter))))));
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return c != (u);
}
# 419 "linux-2.6.26/include/asm/atomic_64.h"
static inline  __attribute__((always_inline)) int atomic64_add_unless(atomic64_t *v, long a, long u)
{
 long c, old;
 c = ((v)->counter);
 for (;;) {
  if (__builtin_expect(!!(c == (u)), 0))
   break;
  old = (((__typeof__(*(&(((v))->counter))))__cmpxchg((&(((v))->counter)), (unsigned long)((c)), (unsigned long)((c + (a))), sizeof(*(&(((v))->counter))))));
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return c != (u);
}
# 452 "linux-2.6.26/include/asm/atomic_64.h"
# 1 "linux-2.6.26/include/asm-generic/atomic.h" 1
# 23 "linux-2.6.26/include/asm-generic/atomic.h"
typedef atomic64_t atomic_long_t;



static inline  __attribute__((always_inline)) long atomic_long_read(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)((v)->counter);
}

static inline  __attribute__((always_inline)) void atomic_long_set(atomic_long_t *l, long i)
{
 atomic64_t *v = (atomic64_t *)l;

 (((v)->counter) = (i));
}

static inline  __attribute__((always_inline)) void atomic_long_inc(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_inc(v);
}

static inline  __attribute__((always_inline)) void atomic_long_dec(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_dec(v);
}

static inline  __attribute__((always_inline)) void atomic_long_add(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_add(i, v);
}

static inline  __attribute__((always_inline)) void atomic_long_sub(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_sub(i, v);
}

static inline  __attribute__((always_inline)) int atomic_long_sub_and_test(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_sub_and_test(i, v);
}

static inline  __attribute__((always_inline)) int atomic_long_dec_and_test(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_dec_and_test(v);
}

static inline  __attribute__((always_inline)) int atomic_long_inc_and_test(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_inc_and_test(v);
}

static inline  __attribute__((always_inline)) int atomic_long_add_negative(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_add_negative(i, v);
}

static inline  __attribute__((always_inline)) long atomic_long_add_return(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_add_return(i, v);
}

static inline  __attribute__((always_inline)) long atomic_long_sub_return(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_sub_return(i, v);
}

static inline  __attribute__((always_inline)) long atomic_long_inc_return(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)(atomic64_add_return(1, (v)));
}

static inline  __attribute__((always_inline)) long atomic_long_dec_return(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)(atomic64_sub_return(1, (v)));
}

static inline  __attribute__((always_inline)) long atomic_long_add_unless(atomic_long_t *l, long a, long u)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_add_unless(v, a, u);
}
# 453 "linux-2.6.26/include/asm/atomic_64.h" 2
# 5 "linux-2.6.26/include/asm/atomic.h" 2
# 303 "linux-2.6.26/include/linux/spinlock.h" 2
# 311 "linux-2.6.26/include/linux/spinlock.h"
extern int _atomic_dec_and_lock(atomic_t *atomic, spinlock_t *lock);
# 8 "linux-2.6.26/include/linux/mmzone.h" 2

# 1 "linux-2.6.26/include/linux/wait.h" 1
# 26 "linux-2.6.26/include/linux/wait.h"
# 1 "linux-2.6.26/include/asm/current.h" 1
# 27 "linux-2.6.26/include/linux/wait.h" 2

typedef struct __wait_queue wait_queue_t;
typedef int (*wait_queue_func_t)(wait_queue_t *wait, unsigned mode, int sync, void *key);
int default_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);

struct __wait_queue {
 unsigned int flags;

 void *private;
 wait_queue_func_t func;
 struct list_head task_list;
};

struct wait_bit_key {
 void *flags;
 int bit_nr;
};

struct wait_bit_queue {
 struct wait_bit_key key;
 wait_queue_t wait;
};

struct __wait_queue_head {
 spinlock_t lock;
 struct list_head task_list;
};
typedef struct __wait_queue_head wait_queue_head_t;

struct task_struct;
# 80 "linux-2.6.26/include/linux/wait.h"
extern void init_waitqueue_head(wait_queue_head_t *q);
# 91 "linux-2.6.26/include/linux/wait.h"
static inline  __attribute__((always_inline)) void init_waitqueue_entry(wait_queue_t *q, struct task_struct *p)
{
 q->flags = 0;
 q->private = p;
 q->func = default_wake_function;
}

static inline  __attribute__((always_inline)) void init_waitqueue_func_entry(wait_queue_t *q,
     wait_queue_func_t func)
{
 q->flags = 0;
 q->private = ((void *)0);
 q->func = func;
}

static inline  __attribute__((always_inline)) int waitqueue_active(wait_queue_head_t *q)
{
 return !list_empty(&q->task_list);
}
# 120 "linux-2.6.26/include/linux/wait.h"
extern void add_wait_queue(wait_queue_head_t *q, wait_queue_t *wait);
extern void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t *wait);
extern void remove_wait_queue(wait_queue_head_t *q, wait_queue_t *wait);

static inline  __attribute__((always_inline)) void __add_wait_queue(wait_queue_head_t *head, wait_queue_t *new)
{
 list_add(&new->task_list, &head->task_list);
}




static inline  __attribute__((always_inline)) void __add_wait_queue_tail(wait_queue_head_t *head,
      wait_queue_t *new)
{
 list_add_tail(&new->task_list, &head->task_list);
}

static inline  __attribute__((always_inline)) void __remove_wait_queue(wait_queue_head_t *head,
       wait_queue_t *old)
{
 list_del(&old->task_list);
}

void __wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key);
extern void __wake_up_locked(wait_queue_head_t *q, unsigned int mode);
extern void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr);
void __wake_up_bit(wait_queue_head_t *, void *, int);
int __wait_on_bit(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
int __wait_on_bit_lock(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
void wake_up_bit(void *, int);
int out_of_line_wait_on_bit(void *, int, int (*)(void *), unsigned);
int out_of_line_wait_on_bit_lock(void *, int, int (*)(void *), unsigned);
wait_queue_head_t *bit_waitqueue(void *, int);
# 409 "linux-2.6.26/include/linux/wait.h"
static inline  __attribute__((always_inline)) void add_wait_queue_exclusive_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 wait->flags |= 0x01;
 __add_wait_queue_tail(q, wait);
}




static inline  __attribute__((always_inline)) void remove_wait_queue_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 __remove_wait_queue(q, wait);
}






extern void sleep_on(wait_queue_head_t *q);
extern long sleep_on_timeout(wait_queue_head_t *q,
          signed long timeout);
extern void interruptible_sleep_on(wait_queue_head_t *q);
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q,
        signed long timeout);




void prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state);
void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state);
void finish_wait(wait_queue_head_t *q, wait_queue_t *wait);
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
# 485 "linux-2.6.26/include/linux/wait.h"
static inline  __attribute__((always_inline)) int wait_on_bit(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!(__builtin_constant_p((bit)) ? constant_test_bit((bit), (word)) : variable_test_bit((bit), (word))))
  return 0;
 return out_of_line_wait_on_bit(word, bit, action, mode);
}
# 509 "linux-2.6.26/include/linux/wait.h"
static inline  __attribute__((always_inline)) int wait_on_bit_lock(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!test_and_set_bit(bit, word))
  return 0;
 return out_of_line_wait_on_bit_lock(word, bit, action, mode);
}
# 10 "linux-2.6.26/include/linux/mmzone.h" 2



# 1 "linux-2.6.26/include/linux/numa.h" 1
# 14 "linux-2.6.26/include/linux/mmzone.h" 2

# 1 "linux-2.6.26/include/linux/seqlock.h" 1
# 32 "linux-2.6.26/include/linux/seqlock.h"
typedef struct {
 unsigned sequence;
 spinlock_t lock;
} seqlock_t;
# 60 "linux-2.6.26/include/linux/seqlock.h"
static inline  __attribute__((always_inline)) void write_seqlock(seqlock_t *sl)
{
 do { do { } while (0); (void)0; (void)(&sl->lock); } while (0);
 ++sl->sequence;
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void write_sequnlock(seqlock_t *sl)
{
 __asm__ __volatile__("": : :"memory");
 sl->sequence++;
 do { do { } while (0); (void)0; (void)(&sl->lock); } while (0);
}

static inline  __attribute__((always_inline)) int write_tryseqlock(seqlock_t *sl)
{
 int ret = (({ do { do { } while (0); (void)0; (void)(&sl->lock); } while (0); 1; }));

 if (ret) {
  ++sl->sequence;
  __asm__ __volatile__("": : :"memory");
 }
 return ret;
}


static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned read_seqbegin(const seqlock_t *sl)
{
 unsigned ret;

repeat:
 ret = sl->sequence;
 __asm__ __volatile__("": : :"memory");
 if (__builtin_expect(!!(ret & 1), 0)) {
  cpu_relax();
  goto repeat;
 }

 return ret;
}






static inline   __attribute__((always_inline)) __attribute__((always_inline)) int read_seqretry(const seqlock_t *sl, unsigned start)
{
 __asm__ __volatile__("": : :"memory");

 return (sl->sequence != start);
}
# 121 "linux-2.6.26/include/linux/seqlock.h"
typedef struct seqcount {
 unsigned sequence;
} seqcount_t;





static inline  __attribute__((always_inline)) unsigned read_seqcount_begin(const seqcount_t *s)
{
 unsigned ret;

repeat:
 ret = s->sequence;
 __asm__ __volatile__("": : :"memory");
 if (__builtin_expect(!!(ret & 1), 0)) {
  cpu_relax();
  goto repeat;
 }
 return ret;
}




static inline  __attribute__((always_inline)) int read_seqcount_retry(const seqcount_t *s, unsigned start)
{
 __asm__ __volatile__("": : :"memory");

 return s->sequence != start;
}






static inline  __attribute__((always_inline)) void write_seqcount_begin(seqcount_t *s)
{
 s->sequence++;
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void write_seqcount_end(seqcount_t *s)
{
 __asm__ __volatile__("": : :"memory");
 s->sequence++;
}
# 16 "linux-2.6.26/include/linux/mmzone.h" 2
# 1 "linux-2.6.26/include/linux/nodemask.h" 1
# 92 "linux-2.6.26/include/linux/nodemask.h"
typedef struct { unsigned long bits[((((1 << 0)) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } nodemask_t;
typedef  nodemask_t  _GLOBAL_45_T; extern  _GLOBAL_45_T  global__unused_nodemask_arg_[NUM_STACKS];   


static inline  __attribute__((always_inline)) void __node_set(int node, volatile nodemask_t *dstp)
{
 set_bit(node, dstp->bits);
}


static inline  __attribute__((always_inline)) void __node_clear(int node, volatile nodemask_t *dstp)
{
 clear_bit(node, dstp->bits);
}


static inline  __attribute__((always_inline)) void __nodes_setall(nodemask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline  __attribute__((always_inline)) void __nodes_clear(nodemask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}






static inline  __attribute__((always_inline)) int __node_test_and_set(int node, nodemask_t *addr)
{
 return test_and_set_bit(node, addr->bits);
}



static inline  __attribute__((always_inline)) void __nodes_and(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_or(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_xor(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_andnot(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_complement(nodemask_t *dstp,
     const nodemask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodes_equal(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodes_intersects(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodes_subset(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodes_empty(const nodemask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodes_full(const nodemask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodes_weight(const nodemask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_shift_right(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_shift_left(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}





static inline  __attribute__((always_inline)) int __first_node(const nodemask_t *srcp)
{
 return ({ int __min1 = ((1 << 0)); int __min2 = (find_first_bit(srcp->bits, (1 << 0))); __min1 < __min2 ? __min1: __min2; });
}


static inline  __attribute__((always_inline)) int __next_node(int n, const nodemask_t *srcp)
{
 return ({ int __min1 = ((1 << 0)); int __min2 = (find_next_bit(srcp->bits, (1 << 0), n+1)); __min1 < __min2 ? __min1: __min2; });
}
# 255 "linux-2.6.26/include/linux/nodemask.h"
static inline  __attribute__((always_inline)) int __first_unset_node(const nodemask_t *maskp)
{
 return ({ int __min1 = ((1 << 0)); int __min2 = (find_first_zero_bit(maskp->bits, (1 << 0))); __min1 < __min2 ? __min1: __min2; })
                                                  ;
}
# 289 "linux-2.6.26/include/linux/nodemask.h"
static inline  __attribute__((always_inline)) int __nodemask_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodemask_parse_user(const char *buf, int len,
     nodemask_t *dstp, int nbits)
{
 return bitmap_parse_user(buf, len, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodelist_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline  __attribute__((always_inline)) int __nodelist_parse(const char *buf, nodemask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __node_remap(int oldbit,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_remap(nodemask_t *dstp, const nodemask_t *srcp,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_onto(nodemask_t *dstp, const nodemask_t *origp,
  const nodemask_t *relmapp, int nbits)
{
 bitmap_onto(dstp->bits, origp->bits, relmapp->bits, nbits);
}



static inline  __attribute__((always_inline)) void __nodes_fold(nodemask_t *dstp, const nodemask_t *origp,
  int sz, int nbits)
{
 bitmap_fold(dstp->bits, origp->bits, sz, nbits);
}
# 363 "linux-2.6.26/include/linux/nodemask.h"
enum node_states {
 N_POSSIBLE,
 N_ONLINE,
 N_NORMAL_MEMORY,



 N_HIGH_MEMORY = N_NORMAL_MEMORY,

 N_CPU,
 NR_NODE_STATES
};






typedef  nodemask_t  _GLOBAL_46_T; extern  _GLOBAL_46_T  node_states [ NR_NODE_STATES ] ;   
# 413 "linux-2.6.26/include/linux/nodemask.h"
static inline  __attribute__((always_inline)) int node_state(int node, enum node_states state)
{
 return node == 0;
}

static inline  __attribute__((always_inline)) void node_set_state(int node, enum node_states state)
{
}

static inline  __attribute__((always_inline)) void node_clear_state(int node, enum node_states state)
{
}

static inline  __attribute__((always_inline)) int num_node_state(enum node_states state)
{
 return 1;
}
# 17 "linux-2.6.26/include/linux/mmzone.h" 2
# 1 "linux-2.6.26/include/linux/pageblock-flags.h" 1
# 33 "linux-2.6.26/include/linux/pageblock-flags.h"
enum pageblock_bits {
 PB_migrate, PB_migrate_end = (PB_migrate + 3) - 1,
 NR_PAGEBLOCK_BITS
};
# 62 "linux-2.6.26/include/linux/pageblock-flags.h"
struct page;


unsigned long get_pageblock_flags_group(struct page *page,
     int start_bitidx, int end_bitidx);
void set_pageblock_flags_group(struct page *page, unsigned long flags,
     int start_bitidx, int end_bitidx);
# 18 "linux-2.6.26/include/linux/mmzone.h" 2
# 1 "linux-2.6.26/include/linux/bounds.h" 1
# 19 "linux-2.6.26/include/linux/mmzone.h" 2
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 20 "linux-2.6.26/include/linux/mmzone.h" 2
# 49 "linux-2.6.26/include/linux/mmzone.h"
typedef  int  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_page_group_by_mobility_disabled[NUM_STACKS];   

static inline  __attribute__((always_inline)) int get_pageblock_migratetype(struct page *page)
{
 if (__builtin_expect(!!(global_page_group_by_mobility_disabled[get_stack_id()]), 0))
  return 0;

 return get_pageblock_flags_group(page, PB_migrate, PB_migrate_end);
}

struct free_area {
 struct list_head free_list[5];
 unsigned long nr_free;
};

struct pglist_data;
# 81 "linux-2.6.26/include/linux/mmzone.h"
enum zone_stat_item {

 NR_FREE_PAGES,
 NR_INACTIVE,
 NR_ACTIVE,
 NR_ANON_PAGES,
 NR_FILE_MAPPED,

 NR_FILE_PAGES,
 NR_FILE_DIRTY,
 NR_WRITEBACK,

 NR_SLAB_RECLAIMABLE,
 NR_SLAB_UNRECLAIMABLE,
 NR_PAGETABLE,
 NR_UNSTABLE_NFS,
 NR_BOUNCE,
 NR_VMSCAN_WRITE,
 NR_WRITEBACK_TEMP,
# 108 "linux-2.6.26/include/linux/mmzone.h"
 NR_VM_ZONE_STAT_ITEMS };

struct per_cpu_pages {
 int count;
 int high;
 int batch;
 struct list_head list;
};

struct per_cpu_pageset {
 struct per_cpu_pages pcp;







} ;
# 136 "linux-2.6.26/include/linux/mmzone.h"
enum zone_type {
# 171 "linux-2.6.26/include/linux/mmzone.h"
 ZONE_NORMAL,
# 183 "linux-2.6.26/include/linux/mmzone.h"
 ZONE_MOVABLE,
 __MAX_NR_ZONES
};
# 207 "linux-2.6.26/include/linux/mmzone.h"
struct zone {

 unsigned long pages_min, pages_low, pages_high;
# 218 "linux-2.6.26/include/linux/mmzone.h"
 unsigned long lowmem_reserve[3];
# 229 "linux-2.6.26/include/linux/mmzone.h"
 struct per_cpu_pageset pageset[1];




 spinlock_t lock;




 struct free_area free_area[11];






 unsigned long *pageblock_flags;






 spinlock_t lru_lock;
 struct list_head active_list;
 struct list_head inactive_list;
 unsigned long nr_scan_active;
 unsigned long nr_scan_inactive;
 unsigned long pages_scanned;
 unsigned long flags;


 atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];
# 277 "linux-2.6.26/include/linux/mmzone.h"
 int prev_priority;



# 307 "linux-2.6.26/include/linux/mmzone.h"
 wait_queue_head_t * wait_table;
 unsigned long wait_table_hash_nr_entries;
 unsigned long wait_table_bits;




 struct pglist_data *zone_pgdat;

 unsigned long zone_start_pfn;
# 328 "linux-2.6.26/include/linux/mmzone.h"
 unsigned long spanned_pages;
 unsigned long present_pages;




 const char *name;
} ;

typedef enum {
 ZONE_ALL_UNRECLAIMABLE,
 ZONE_RECLAIM_LOCKED,
 ZONE_OOM_LOCKED,
} zone_flags_t;

static inline  __attribute__((always_inline)) void zone_set_flag(struct zone *zone, zone_flags_t flag)
{
 set_bit(flag, &zone->flags);
}

static inline  __attribute__((always_inline)) int zone_test_and_set_flag(struct zone *zone, zone_flags_t flag)
{
 return test_and_set_bit(flag, &zone->flags);
}

static inline  __attribute__((always_inline)) void zone_clear_flag(struct zone *zone, zone_flags_t flag)
{
 clear_bit(flag, &zone->flags);
}

static inline  __attribute__((always_inline)) int zone_is_all_unreclaimable(const struct zone *zone)
{
 return (__builtin_constant_p((ZONE_ALL_UNRECLAIMABLE)) ? constant_test_bit((ZONE_ALL_UNRECLAIMABLE), (&zone->flags)) : variable_test_bit((ZONE_ALL_UNRECLAIMABLE), (&zone->flags)));
}

static inline  __attribute__((always_inline)) int zone_is_reclaim_locked(const struct zone *zone)
{
 return (__builtin_constant_p((ZONE_RECLAIM_LOCKED)) ? constant_test_bit((ZONE_RECLAIM_LOCKED), (&zone->flags)) : variable_test_bit((ZONE_RECLAIM_LOCKED), (&zone->flags)));
}

static inline  __attribute__((always_inline)) int zone_is_oom_locked(const struct zone *zone)
{
 return (__builtin_constant_p((ZONE_OOM_LOCKED)) ? constant_test_bit((ZONE_OOM_LOCKED), (&zone->flags)) : variable_test_bit((ZONE_OOM_LOCKED), (&zone->flags)));
}
# 461 "linux-2.6.26/include/linux/mmzone.h"
struct zonelist_cache;






struct zoneref {
 struct zone *zone;
 int zone_idx;
};
# 490 "linux-2.6.26/include/linux/mmzone.h"
struct zonelist {
 struct zonelist_cache *zlcache_ptr;
 struct zoneref _zonerefs[((1 << 0) * 3) + 1];



};
# 508 "linux-2.6.26/include/linux/mmzone.h"
extern struct page *mem_map;
# 522 "linux-2.6.26/include/linux/mmzone.h"
struct bootmem_data;
typedef struct pglist_data {
 struct zone node_zones[3];
 struct zonelist node_zonelists[1];
 int nr_zones;



 struct bootmem_data *bdata;
# 541 "linux-2.6.26/include/linux/mmzone.h"
 unsigned long node_start_pfn;
 unsigned long node_present_pages;
 unsigned long node_spanned_pages;

 int node_id;
 wait_queue_head_t kswapd_wait;
 struct task_struct *kswapd;
 int kswapd_max_order;
} pg_data_t;
# 560 "linux-2.6.26/include/linux/mmzone.h"
# 1 "linux-2.6.26/include/linux/memory_hotplug.h" 1



# 1 "linux-2.6.26/include/linux/mmzone.h" 1
# 5 "linux-2.6.26/include/linux/memory_hotplug.h" 2

# 1 "linux-2.6.26/include/linux/notifier.h" 1
# 13 "linux-2.6.26/include/linux/notifier.h"
# 1 "linux-2.6.26/include/linux/mutex.h" 1
# 18 "linux-2.6.26/include/linux/mutex.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 19 "linux-2.6.26/include/linux/mutex.h" 2
# 48 "linux-2.6.26/include/linux/mutex.h"
struct mutex {

 atomic_t count;
 spinlock_t wait_lock;
 struct list_head wait_list;
# 61 "linux-2.6.26/include/linux/mutex.h"
};





struct mutex_waiter {
 struct list_head list;
 struct task_struct *task;




};
# 106 "linux-2.6.26/include/linux/mutex.h"
extern void __mutex_init(struct mutex *lock, const char *name,
    struct lock_class_key *key);







static inline  __attribute__((always_inline)) int mutex_is_locked(struct mutex *lock)
{
 return ((&lock->count)->counter) != 1;
}
# 135 "linux-2.6.26/include/linux/mutex.h"
extern void mutex_lock(struct mutex *lock);
extern int mutex_lock_interruptible(struct mutex *lock);
extern int mutex_lock_killable(struct mutex *lock);
# 148 "linux-2.6.26/include/linux/mutex.h"
extern int mutex_trylock(struct mutex *lock);
extern void mutex_unlock(struct mutex *lock);
# 14 "linux-2.6.26/include/linux/notifier.h" 2
# 1 "linux-2.6.26/include/linux/rwsem.h" 1
# 15 "linux-2.6.26/include/linux/rwsem.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 16 "linux-2.6.26/include/linux/rwsem.h" 2

struct rw_semaphore;


# 1 "linux-2.6.26/include/linux/rwsem-spinlock.h" 1
# 22 "linux-2.6.26/include/linux/rwsem-spinlock.h"
struct rwsem_waiter;
# 31 "linux-2.6.26/include/linux/rwsem-spinlock.h"
struct rw_semaphore {
 __s32 activity;
 spinlock_t wait_lock;
 struct list_head wait_list;



};
# 53 "linux-2.6.26/include/linux/rwsem-spinlock.h"
extern void __init_rwsem(struct rw_semaphore *sem, const char *name,
    struct lock_class_key *key);
# 63 "linux-2.6.26/include/linux/rwsem-spinlock.h"
extern void __down_read(struct rw_semaphore *sem);
extern int __down_read_trylock(struct rw_semaphore *sem);
extern void __down_write(struct rw_semaphore *sem);
extern void __down_write_nested(struct rw_semaphore *sem, int subclass);
extern int __down_write_trylock(struct rw_semaphore *sem);
extern void __up_read(struct rw_semaphore *sem);
extern void __up_write(struct rw_semaphore *sem);
extern void __downgrade_write(struct rw_semaphore *sem);

static inline  __attribute__((always_inline)) int rwsem_is_locked(struct rw_semaphore *sem)
{
 return (sem->activity != 0);
}
# 21 "linux-2.6.26/include/linux/rwsem.h" 2







extern void down_read(struct rw_semaphore *sem);




extern int down_read_trylock(struct rw_semaphore *sem);




extern void down_write(struct rw_semaphore *sem);




extern int down_write_trylock(struct rw_semaphore *sem);




extern void up_read(struct rw_semaphore *sem);




extern void up_write(struct rw_semaphore *sem);




extern void downgrade_write(struct rw_semaphore *sem);
# 15 "linux-2.6.26/include/linux/notifier.h" 2
# 1 "linux-2.6.26/include/linux/srcu.h" 1
# 30 "linux-2.6.26/include/linux/srcu.h"
struct srcu_struct_array {
 int c[2];
};

struct srcu_struct {
 int completed;
 struct srcu_struct_array *per_cpu_ref;
 struct mutex mutex;
};







int init_srcu_struct(struct srcu_struct *sp);
void cleanup_srcu_struct(struct srcu_struct *sp);
int srcu_read_lock(struct srcu_struct *sp) ;
void srcu_read_unlock(struct srcu_struct *sp, int idx) ;
void synchronize_srcu(struct srcu_struct *sp);
long srcu_batches_completed(struct srcu_struct *sp);
# 16 "linux-2.6.26/include/linux/notifier.h" 2
# 50 "linux-2.6.26/include/linux/notifier.h"
struct notifier_block {
 int (*notifier_call)(struct notifier_block *, unsigned long, void *);
 struct notifier_block *next;
 int priority;
};

struct atomic_notifier_head {
 spinlock_t lock;
 struct notifier_block *head;
};

struct blocking_notifier_head {
 struct rw_semaphore rwsem;
 struct notifier_block *head;
};

struct raw_notifier_head {
 struct notifier_block *head;
};

struct srcu_notifier_head {
 struct mutex mutex;
 struct srcu_struct srcu;
 struct notifier_block *head;
};
# 89 "linux-2.6.26/include/linux/notifier.h"
extern void srcu_init_notifier_head(struct srcu_notifier_head *nh);
# 115 "linux-2.6.26/include/linux/notifier.h"
extern int atomic_notifier_chain_register(struct atomic_notifier_head *nh,
  struct notifier_block *nb);
extern int blocking_notifier_chain_register(struct blocking_notifier_head *nh,
  struct notifier_block *nb);
extern int raw_notifier_chain_register(struct raw_notifier_head *nh,
  struct notifier_block *nb);
extern int srcu_notifier_chain_register(struct srcu_notifier_head *nh,
  struct notifier_block *nb);

extern int blocking_notifier_chain_cond_register(
  struct blocking_notifier_head *nh,
  struct notifier_block *nb);

extern int atomic_notifier_chain_unregister(struct atomic_notifier_head *nh,
  struct notifier_block *nb);
extern int blocking_notifier_chain_unregister(struct blocking_notifier_head *nh,
  struct notifier_block *nb);
extern int raw_notifier_chain_unregister(struct raw_notifier_head *nh,
  struct notifier_block *nb);
extern int srcu_notifier_chain_unregister(struct srcu_notifier_head *nh,
  struct notifier_block *nb);

extern int atomic_notifier_call_chain(struct atomic_notifier_head *nh,
  unsigned long val, void *v);
extern int __atomic_notifier_call_chain(struct atomic_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int blocking_notifier_call_chain(struct blocking_notifier_head *nh,
  unsigned long val, void *v);
extern int __blocking_notifier_call_chain(struct blocking_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int raw_notifier_call_chain(struct raw_notifier_head *nh,
  unsigned long val, void *v);
extern int __raw_notifier_call_chain(struct raw_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int srcu_notifier_call_chain(struct srcu_notifier_head *nh,
  unsigned long val, void *v);
extern int __srcu_notifier_call_chain(struct srcu_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
# 165 "linux-2.6.26/include/linux/notifier.h"
static inline  __attribute__((always_inline)) int notifier_from_errno(int err)
{
 return 0x8000 | (0x0001 - err);
}


static inline  __attribute__((always_inline)) int notifier_to_errno(int ret)
{
 ret &= ~0x8000;
 return ret > 0x0001 ? 0x0001 - ret : 0;
}
# 247 "linux-2.6.26/include/linux/notifier.h"
typedef  struct blocking_notifier_head   _GLOBAL_48_T; extern  _GLOBAL_48_T  global_reboot_notifier_list[NUM_STACKS];    
# 7 "linux-2.6.26/include/linux/memory_hotplug.h" 2

struct page;
struct zone;
struct pglist_data;
struct mem_section;
# 165 "linux-2.6.26/include/linux/memory_hotplug.h"
static inline  __attribute__((always_inline)) void pgdat_resize_lock(struct pglist_data *p, unsigned long *f) {}
static inline  __attribute__((always_inline)) void pgdat_resize_unlock(struct pglist_data *p, unsigned long *f) {}
static inline  __attribute__((always_inline)) void pgdat_resize_init(struct pglist_data *pgdat) {}

static inline  __attribute__((always_inline)) unsigned zone_span_seqbegin(struct zone *zone)
{
 return 0;
}
static inline  __attribute__((always_inline)) int zone_span_seqretry(struct zone *zone, unsigned iv)
{
 return 0;
}
static inline  __attribute__((always_inline)) void zone_span_writelock(struct zone *zone) {}
static inline  __attribute__((always_inline)) void zone_span_writeunlock(struct zone *zone) {}
static inline  __attribute__((always_inline)) void zone_seqlock_init(struct zone *zone) {}

static inline  __attribute__((always_inline)) int mhp_notimplemented(const char *func)
{
 printk("<4>" "%s() called, with CONFIG_MEMORY_HOTPLUG disabled\n", func);
 dump_stack();
 return -38;
}

static inline  __attribute__((always_inline)) void register_page_bootmem_info_node(struct pglist_data *pgdat)
{
}







extern int walk_memory_resource(unsigned long start_pfn,
   unsigned long nr_pages, void *arg,
   int (*func)(unsigned long, unsigned long, void *));

extern int add_memory(int nid, u64 start, u64 size);
extern int arch_add_memory(int nid, u64 start, u64 size);
extern int remove_memory(u64 start, u64 size);
extern int sparse_add_one_section(struct zone *zone, unsigned long start_pfn,
        int nr_pages);
extern void sparse_remove_one_section(struct zone *zone, struct mem_section *ms);
extern struct page *sparse_decode_mem_map(unsigned long coded_mem_map,
       unsigned long pnum);
# 561 "linux-2.6.26/include/linux/mmzone.h" 2

void get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free);
void build_all_zonelists(void);
void wakeup_kswapd(struct zone *zone, int order);
int zone_watermark_ok(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);
enum memmap_context {
 MEMMAP_EARLY,
 MEMMAP_HOTPLUG,
};
extern int init_currently_empty_zone(struct zone *zone, unsigned long start_pfn,
         unsigned long size,
         enum memmap_context context);




static inline  __attribute__((always_inline)) void memory_present(int nid, unsigned long start, unsigned long end) {}
# 591 "linux-2.6.26/include/linux/mmzone.h"
static inline  __attribute__((always_inline)) int populated_zone(struct zone *zone)
{
 return (!!zone->present_pages);
}

typedef  int  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_movable_zone[NUM_STACKS];   

static inline  __attribute__((always_inline)) int zone_movable_is_highmem(void)
{



 return 0;

}

static inline  __attribute__((always_inline)) int is_highmem_idx(enum zone_type idx)
{




 return 0;

}

static inline  __attribute__((always_inline)) int is_normal_idx(enum zone_type idx)
{
 return (idx == ZONE_NORMAL);
}







static inline  __attribute__((always_inline)) int is_highmem(struct zone *zone)
{






 return 0;

}

static inline  __attribute__((always_inline)) int is_normal(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + ZONE_NORMAL;
}

static inline  __attribute__((always_inline)) int is_dma32(struct zone *zone)
{



 return 0;

}

static inline  __attribute__((always_inline)) int is_dma(struct zone *zone)
{



 return 0;

}


struct ctl_table;
struct file;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
typedef  int  _GLOBAL_50_T; extern  _GLOBAL_50_T  _GLOBAL_0_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_1_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_2_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_3_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_4_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_5_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_6_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_7_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_8_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_9_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_10_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_11_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_12_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_13_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_14_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_15_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_16_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_17_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_18_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_19_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_20_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_21_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_22_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_23_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_24_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_25_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_26_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_27_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_28_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_29_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_30_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_31_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_32_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_33_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_34_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_35_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_36_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_37_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_38_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_39_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_40_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_41_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_42_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_43_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_44_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_45_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_46_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_47_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_48_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_50_T  _GLOBAL_49_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysctl_lowmem_reserve_ratio_I) *_GLOBAL_sysctl_lowmem_reserve_ratio_4_A[NUM_STACKS];   
int lowmem_reserve_ratio_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int percpu_pagelist_fraction_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int sysctl_min_unmapped_ratio_sysctl_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);
int sysctl_min_slab_ratio_sysctl_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);

extern int numa_zonelist_order_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);
extern char numa_zonelist_order[];


# 1 "linux-2.6.26/include/linux/topology.h" 1
# 33 "linux-2.6.26/include/linux/topology.h"
# 1 "linux-2.6.26/include/linux/smp.h" 1
# 11 "linux-2.6.26/include/linux/smp.h"
extern void cpu_idle(void);
# 89 "linux-2.6.26/include/linux/smp.h"
static inline  __attribute__((always_inline)) int up_smp_call_function(void (*func)(void *), void *info)
{
 return 0;
}
# 102 "linux-2.6.26/include/linux/smp.h"
static inline  __attribute__((always_inline)) void smp_send_reschedule(int cpu) { }
# 144 "linux-2.6.26/include/linux/smp.h"
void smp_setup_processor_id(void);
# 34 "linux-2.6.26/include/linux/topology.h" 2
# 1 "linux-2.6.26/include/asm/topology.h" 1
# 187 "linux-2.6.26/include/asm/topology.h"
# 1 "linux-2.6.26/include/asm-generic/topology.h" 1
# 188 "linux-2.6.26/include/asm/topology.h" 2

extern cpumask_t cpu_coregroup_map(int cpu);
# 198 "linux-2.6.26/include/asm/topology.h"
static inline  __attribute__((always_inline)) void arch_fix_phys_package_id(int num, u32 slot)
{
}

struct pci_bus;
void set_pci_bus_resources_arch_default(struct pci_bus *b);
# 214 "linux-2.6.26/include/asm/topology.h"
static inline  __attribute__((always_inline)) int get_mp_bus_to_node(int busnum)
{
 return 0;
}
static inline  __attribute__((always_inline)) void set_mp_bus_to_node(int busnum, int node)
{
}
# 35 "linux-2.6.26/include/linux/topology.h" 2
# 52 "linux-2.6.26/include/linux/topology.h"
void arch_update_cpu_topology(void);
# 684 "linux-2.6.26/include/linux/mmzone.h" 2







typedef  struct pglist_data   _GLOBAL_51_T; extern  _GLOBAL_51_T  global_contig_page_data[NUM_STACKS];    
# 701 "linux-2.6.26/include/linux/mmzone.h"
extern struct pglist_data *first_online_pgdat(void);
extern struct pglist_data *next_online_pgdat(struct pglist_data *pgdat);
extern struct zone *next_zone(struct zone *zone);
# 725 "linux-2.6.26/include/linux/mmzone.h"
static inline  __attribute__((always_inline)) struct zone *zonelist_zone(struct zoneref *zoneref)
{
 return zoneref->zone;
}

static inline  __attribute__((always_inline)) int zonelist_zone_idx(struct zoneref *zoneref)
{
 return zoneref->zone_idx;
}

static inline  __attribute__((always_inline)) int zonelist_node_idx(struct zoneref *zoneref)
{




 return 0;

}
# 757 "linux-2.6.26/include/linux/mmzone.h"
struct zoneref *next_zones_zonelist(struct zoneref *z,
     enum zone_type highest_zoneidx,
     nodemask_t *nodes,
     struct zone **zone);
# 775 "linux-2.6.26/include/linux/mmzone.h"
static inline  __attribute__((always_inline)) struct zoneref *first_zones_zonelist(struct zonelist *zonelist,
     enum zone_type highest_zoneidx,
     nodemask_t *nodes,
     struct zone **zone)
{
 return next_zones_zonelist(zonelist->_zonerefs, highest_zoneidx, nodes,
        zone);
}
# 818 "linux-2.6.26/include/linux/mmzone.h"
static inline  __attribute__((always_inline)) unsigned long early_pfn_to_nid(unsigned long pfn)
{
 return 0;
}
# 990 "linux-2.6.26/include/linux/mmzone.h"
void memory_present(int nid, unsigned long start, unsigned long end);
unsigned long   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) node_memmap_size_bytes(int, unsigned long, unsigned long);
# 5 "linux-2.6.26/include/linux/gfp.h" 2



struct vm_area_struct;
# 108 "linux-2.6.26/include/linux/gfp.h"
static inline  __attribute__((always_inline)) int allocflags_to_migratetype(gfp_t gfp_flags)
{
 ({ int __ret_warn_on = !!((gfp_flags & ((( gfp_t)0x80000u)|(( gfp_t)0x100000u))) == ((( gfp_t)0x80000u)|(( gfp_t)0x100000u))); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_on_slowpath("linux-2.6.26/include/linux/gfp.h", 110); __builtin_expect(!!(__ret_warn_on), 0); });

 if (__builtin_expect(!!(global_page_group_by_mobility_disabled[get_stack_id()]), 0))
  return 0;


 return (((gfp_flags & (( gfp_t)0x100000u)) != 0) << 1) |
  ((gfp_flags & (( gfp_t)0x80000u)) != 0);
}

static inline  __attribute__((always_inline)) enum zone_type gfp_zone(gfp_t flags)
{
# 130 "linux-2.6.26/include/linux/gfp.h"
 if ((flags & ((( gfp_t)0x02u) | (( gfp_t)0x100000u))) ==
   ((( gfp_t)0x02u) | (( gfp_t)0x100000u)))
  return ZONE_MOVABLE;




 return ZONE_NORMAL;
}
# 147 "linux-2.6.26/include/linux/gfp.h"
static inline  __attribute__((always_inline)) int gfp_zonelist(gfp_t flags)
{
 if (0 && __builtin_expect(!!(flags & (( gfp_t)0x40000u)), 0))
  return 1;

 return 0;
}
# 164 "linux-2.6.26/include/linux/gfp.h"
static inline  __attribute__((always_inline)) struct zonelist *node_zonelist(int nid, gfp_t flags)
{
 return (&global_contig_page_data[get_stack_id()])->node_zonelists + gfp_zonelist(flags);
}


static inline  __attribute__((always_inline)) void arch_free_page(struct page *page, int order) { }


static inline  __attribute__((always_inline)) void arch_alloc_page(struct page *page, int order) { }


extern struct page *__alloc_pages(gfp_t, unsigned int, struct zonelist *);

extern struct page *
__alloc_pages_nodemask(gfp_t, unsigned int,
    struct zonelist *, nodemask_t *nodemask);

static inline  __attribute__((always_inline)) struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{
 if (__builtin_expect(!!(order >= 11), 0))
  return ((void *)0);


 if (nid < 0)
  nid = (((void)(0),0));

 return __alloc_pages(gfp_mask, order, node_zonelist(nid, gfp_mask));
}
# 215 "linux-2.6.26/include/linux/gfp.h"
extern unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order);
extern unsigned long get_zeroed_page(gfp_t gfp_mask);







extern void __free_pages(struct page *page, unsigned int order);
extern void free_pages(unsigned long addr, unsigned int order);
extern void free_hot_page(struct page *page);
extern void free_cold_page(struct page *page);




void page_alloc_init(void);
void drain_zone_pages(struct zone *zone, struct per_cpu_pages *pcp);
void drain_all_pages(void);
void drain_local_pages(void *dummy);
# 9 "linux-2.6.26/include/linux/mm.h" 2


# 1 "linux-2.6.26/include/linux/rbtree.h" 1
# 100 "linux-2.6.26/include/linux/rbtree.h"
struct rb_node
{
 unsigned long rb_parent_color;


 struct rb_node *rb_right;
 struct rb_node *rb_left;
} __attribute__((aligned(sizeof(long)))) ;


struct rb_root
{
 struct rb_node *rb_node;
};
# 123 "linux-2.6.26/include/linux/rbtree.h"
static inline  __attribute__((always_inline)) void rb_set_parent(struct rb_node *rb, struct rb_node *p)
{
 rb->rb_parent_color = (rb->rb_parent_color & 3) | (unsigned long)p;
}
static inline  __attribute__((always_inline)) void rb_set_color(struct rb_node *rb, int color)
{
 rb->rb_parent_color = (rb->rb_parent_color & ~1) | color;
}
# 139 "linux-2.6.26/include/linux/rbtree.h"
extern void rb_insert_color(struct rb_node *, struct rb_root *);
extern void rb_erase(struct rb_node *, struct rb_root *);


extern struct rb_node *rb_next(struct rb_node *);
extern struct rb_node *rb_prev(struct rb_node *);
extern struct rb_node *rb_first(struct rb_root *);
extern struct rb_node *rb_last(struct rb_root *);


extern void rb_replace_node(struct rb_node *victim, struct rb_node *new,
       struct rb_root *root);

static inline  __attribute__((always_inline)) void rb_link_node(struct rb_node * node, struct rb_node * parent,
    struct rb_node ** rb_link)
{
 node->rb_parent_color = (unsigned long )parent;
 node->rb_left = node->rb_right = ((void *)0);

 *rb_link = node;
}
# 12 "linux-2.6.26/include/linux/mm.h" 2
# 1 "linux-2.6.26/include/linux/prio_tree.h" 1
# 14 "linux-2.6.26/include/linux/prio_tree.h"
struct raw_prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
};

struct prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
 unsigned long start;
 unsigned long last;
};

struct prio_tree_root {
 struct prio_tree_node *prio_tree_node;
 unsigned short index_bits;
 unsigned short raw;




};

struct prio_tree_iter {
 struct prio_tree_node *cur;
 unsigned long mask;
 unsigned long value;
 int size_level;

 struct prio_tree_root *root;
 unsigned long r_index;
 unsigned long h_index;
};

static inline  __attribute__((always_inline)) void prio_tree_iter_init(struct prio_tree_iter *iter,
  struct prio_tree_root *root, unsigned long r_index, unsigned long h_index)
{
 iter->root = root;
 iter->r_index = r_index;
 iter->h_index = h_index;
 iter->cur = ((void *)0);
}
# 84 "linux-2.6.26/include/linux/prio_tree.h"
static inline  __attribute__((always_inline)) int prio_tree_empty(const struct prio_tree_root *root)
{
 return root->prio_tree_node == ((void *)0);
}

static inline  __attribute__((always_inline)) int prio_tree_root(const struct prio_tree_node *node)
{
 return node->parent == node;
}

static inline  __attribute__((always_inline)) int prio_tree_left_empty(const struct prio_tree_node *node)
{
 return node->left == node;
}

static inline  __attribute__((always_inline)) int prio_tree_right_empty(const struct prio_tree_node *node)
{
 return node->right == node;
}


struct prio_tree_node *prio_tree_replace(struct prio_tree_root *root,
                struct prio_tree_node *old, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_insert(struct prio_tree_root *root,
                struct prio_tree_node *node);
void prio_tree_remove(struct prio_tree_root *root, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_next(struct prio_tree_iter *iter);
# 13 "linux-2.6.26/include/linux/mm.h" 2
# 1 "linux-2.6.26/include/linux/debug_locks.h" 1





struct task_struct;

typedef  int  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_debug_locks[NUM_STACKS];   
typedef  int  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_debug_locks_silent[NUM_STACKS];   




extern int debug_locks_off(void);
# 40 "linux-2.6.26/include/linux/debug_locks.h"
struct task_struct;
# 49 "linux-2.6.26/include/linux/debug_locks.h"
static inline  __attribute__((always_inline)) void debug_show_all_locks(void)
{
}

static inline  __attribute__((always_inline)) void __debug_show_held_locks(struct task_struct *task)
{
}

static inline  __attribute__((always_inline)) void debug_show_held_locks(struct task_struct *task)
{
}

static inline  __attribute__((always_inline)) void
debug_check_no_locks_freed(const void *from, unsigned long len)
{
}

static inline  __attribute__((always_inline)) void
debug_check_no_locks_held(struct task_struct *task)
{
}
# 14 "linux-2.6.26/include/linux/mm.h" 2
# 1 "linux-2.6.26/include/linux/mm_types.h" 1



# 1 "linux-2.6.26/include/linux/auxvec.h" 1



# 1 "linux-2.6.26/include/asm/auxvec.h" 1
# 5 "linux-2.6.26/include/linux/auxvec.h" 2
# 5 "linux-2.6.26/include/linux/mm_types.h" 2







# 1 "linux-2.6.26/include/linux/completion.h" 1
# 13 "linux-2.6.26/include/linux/completion.h"
struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};
# 39 "linux-2.6.26/include/linux/completion.h"
static inline  __attribute__((always_inline)) void init_completion(struct completion *x)
{
 x->done = 0;
 init_waitqueue_head(&x->wait);
}

extern void wait_for_completion(struct completion *);
extern int wait_for_completion_interruptible(struct completion *x);
extern int wait_for_completion_killable(struct completion *x);
extern unsigned long wait_for_completion_timeout(struct completion *x,
         unsigned long timeout);
extern unsigned long wait_for_completion_interruptible_timeout(
   struct completion *x, unsigned long timeout);

extern void complete(struct completion *);
extern void complete_all(struct completion *);
# 13 "linux-2.6.26/include/linux/mm_types.h" 2

# 1 "linux-2.6.26/include/asm/mmu.h" 1
# 13 "linux-2.6.26/include/asm/mmu.h"
typedef struct {
 void *ldt;

 rwlock_t ldtlock;

 int size;
 struct mutex lock;
 void *vdso;
} mm_context_t;




static inline  __attribute__((always_inline)) void leave_mm(int cpu)
{
}
# 15 "linux-2.6.26/include/linux/mm_types.h" 2






struct address_space;


typedef atomic_long_t mm_counter_t;
# 36 "linux-2.6.26/include/linux/mm_types.h"
struct page {
 unsigned long flags;

 atomic_t _count;
 union {
  atomic_t _mapcount;



  struct {
   u16 inuse;
   u16 objects;
  };
 };
 union {
     struct {
  unsigned long private;






  struct address_space *mapping;






     };

     spinlock_t ptl;

     struct kmem_cache *slab;
     struct page *first_page;
 };
 union {
  unsigned long index;
  void *freelist;
 };
 struct list_head lru;
# 97 "linux-2.6.26/include/linux/mm_types.h"
};







struct vm_area_struct {
 struct mm_struct * vm_mm;
 unsigned long vm_start;
 unsigned long vm_end;



 struct vm_area_struct *vm_next;

 pgprot_t vm_page_prot;
 unsigned long vm_flags;

 struct rb_node vm_rb;







 union {
  struct {
   struct list_head list;
   void *parent;
   struct vm_area_struct *head;
  } vm_set;

  struct raw_prio_tree_node prio_tree_node;
 } shared;







 struct list_head anon_vma_node;
 struct anon_vma *anon_vma;


 struct vm_operations_struct * vm_ops;


 unsigned long vm_pgoff;

 struct file * vm_file;
 void * vm_private_data;
 unsigned long vm_truncate_count;


 atomic_t vm_usage;




};

struct mm_struct {
 struct vm_area_struct * mmap;
 struct rb_root mm_rb;
 struct vm_area_struct * mmap_cache;
 unsigned long (*get_unmapped_area) (struct file *filp,
    unsigned long addr, unsigned long len,
    unsigned long pgoff, unsigned long flags);
 void (*unmap_area) (struct mm_struct *mm, unsigned long addr);
 unsigned long mmap_base;
 unsigned long task_size;
 unsigned long cached_hole_size;
 unsigned long free_area_cache;
 pgd_t * pgd;
 atomic_t mm_users;
 atomic_t mm_count;
 int map_count;
 int core_waiters;
 struct rw_semaphore mmap_sem;
 spinlock_t page_table_lock;

 struct list_head mmlist;







 mm_counter_t _file_rss;
 mm_counter_t _anon_rss;

 unsigned long hiwater_rss;
 unsigned long hiwater_vm;

 unsigned long total_vm, locked_vm, shared_vm, exec_vm;
 unsigned long stack_vm, reserved_vm, def_flags, nr_ptes;
 unsigned long start_code, end_code, start_data, end_data;
 unsigned long start_brk, brk, start_stack;
 unsigned long arg_start, arg_end, env_start, env_end;

 unsigned long saved_auxv[(2*(1 + (14 + 2) + 1))];

 cpumask_t cpu_vm_mask;


 mm_context_t context;
# 216 "linux-2.6.26/include/linux/mm_types.h"
 unsigned int faultstamp;
 unsigned int token_priority;
 unsigned int last_interval;

 unsigned long flags;


 struct completion *core_startup_done, core_done;


 rwlock_t ioctx_list_lock;
 struct kioctx *ioctx_list;
# 247 "linux-2.6.26/include/linux/mm_types.h"
};
# 15 "linux-2.6.26/include/linux/mm.h" 2

struct mempolicy;
struct anon_vma;
struct file_ra_state;
struct user_struct;
struct writeback_control;


typedef  unsigned long   _GLOBAL_54_T; extern  _GLOBAL_54_T  global_max_mapnr[NUM_STACKS];    


typedef  unsigned long   _GLOBAL_55_T; extern  _GLOBAL_55_T  global_num_physpages[NUM_STACKS];    
typedef  void  _GLOBAL_56_T; extern  _GLOBAL_56_T  * global_high_memory[NUM_STACKS];    
typedef  int  _GLOBAL_57_T; extern  _GLOBAL_57_T  global_page_cluster[NUM_STACKS];   


typedef  int  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_sysctl_legacy_va_layout[NUM_STACKS];   




typedef  unsigned long   _GLOBAL_59_T; extern  _GLOBAL_59_T  global_mmap_min_addr[NUM_STACKS];    


# 1 "linux-2.6.26/include/asm/pgtable.h" 1
# 155 "linux-2.6.26/include/asm/pgtable.h"
extern unsigned long empty_zero_page[((1UL) << 12) / sizeof(unsigned long)];


typedef  spinlock_t  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_pgd_lock[NUM_STACKS];   
typedef  struct list_head   _GLOBAL_61_T; extern  _GLOBAL_61_T  global_pgd_list[NUM_STACKS];    





static inline  __attribute__((always_inline)) int pte_dirty(pte_t pte)
{
 return native_pte_val(pte) & ((1L)<<6);
}

static inline  __attribute__((always_inline)) int pte_young(pte_t pte)
{
 return native_pte_val(pte) & ((1L)<<5);
}

static inline  __attribute__((always_inline)) int pte_write(pte_t pte)
{
 return native_pte_val(pte) & ((1L)<<1);
}

static inline  __attribute__((always_inline)) int pte_file(pte_t pte)
{
 return native_pte_val(pte) & ((1L)<<6);
}

static inline  __attribute__((always_inline)) int pte_huge(pte_t pte)
{
 return native_pte_val(pte) & ((1L)<<7);
}

static inline  __attribute__((always_inline)) int pte_global(pte_t pte)
{
 return native_pte_val(pte) & ((1L)<<8);
}

static inline  __attribute__((always_inline)) int pte_exec(pte_t pte)
{
 return !(native_pte_val(pte) & ((1ULL) << 63));
}

static inline  __attribute__((always_inline)) int pte_special(pte_t pte)
{
 return 0;
}

static inline  __attribute__((always_inline)) int pmd_large(pmd_t pte)
{
 return (native_pmd_val(pte) & (((1L)<<7) | ((1L)<<0))) ==
  (((1L)<<7) | ((1L)<<0));
}

static inline  __attribute__((always_inline)) pte_t pte_mkclean(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) & ~(pteval_t)((1L)<<6));
}

static inline  __attribute__((always_inline)) pte_t pte_mkold(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) & ~(pteval_t)((1L)<<5));
}

static inline  __attribute__((always_inline)) pte_t pte_wrprotect(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) & ~(pteval_t)((1L)<<1));
}

static inline  __attribute__((always_inline)) pte_t pte_mkexec(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) & ~(pteval_t)((1ULL) << 63));
}

static inline  __attribute__((always_inline)) pte_t pte_mkdirty(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) | ((1L)<<6));
}

static inline  __attribute__((always_inline)) pte_t pte_mkyoung(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) | ((1L)<<5));
}

static inline  __attribute__((always_inline)) pte_t pte_mkwrite(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) | ((1L)<<1));
}

static inline  __attribute__((always_inline)) pte_t pte_mkhuge(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) | ((1L)<<7));
}

static inline  __attribute__((always_inline)) pte_t pte_clrhuge(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) & ~(pteval_t)((1L)<<7));
}

static inline  __attribute__((always_inline)) pte_t pte_mkglobal(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) | ((1L)<<8));
}

static inline  __attribute__((always_inline)) pte_t pte_clrglobal(pte_t pte)
{
 return native_make_pte(native_pte_val(pte) & ~(pteval_t)((1L)<<8));
}

static inline  __attribute__((always_inline)) pte_t pte_mkspecial(pte_t pte)
{
 return pte;
}

typedef  pteval_t  _GLOBAL_62_T; extern  _GLOBAL_62_T  global___supported_pte_mask[NUM_STACKS];   

static inline  __attribute__((always_inline)) pte_t pfn_pte(unsigned long page_nr, pgprot_t pgprot)
{
 return native_make_pte((((phys_addr_t)page_nr << 12) | ((pgprot).pgprot)) & global___supported_pte_mask[get_stack_id()])
                                                   ;
}

static inline  __attribute__((always_inline)) pmd_t pfn_pmd(unsigned long page_nr, pgprot_t pgprot)
{
 return native_make_pmd((((phys_addr_t)page_nr << 12) | ((pgprot).pgprot)) & global___supported_pte_mask[get_stack_id()])
                                                   ;
}

static inline  __attribute__((always_inline)) pte_t pte_modify(pte_t pte, pgprot_t newprot)
{
 pteval_t val = native_pte_val(pte);





 val &= (((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)(1ULL << 46) - 1))) | ((1L)<<4) | ((1L)<<3) | ((1L)<<5) | ((1L)<<6));
 val |= ((newprot).pgprot) & (~(((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)(1ULL << 46) - 1))) | ((1L)<<4) | ((1L)<<3) | ((1L)<<5) | ((1L)<<6))) & global___supported_pte_mask[get_stack_id()];

 return native_make_pte(val);
}



static inline  __attribute__((always_inline)) pgprot_t pgprot_modify(pgprot_t oldprot, pgprot_t newprot)
{
 pgprotval_t preservebits = ((oldprot).pgprot) & (((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)(1ULL << 46) - 1))) | ((1L)<<4) | ((1L)<<3) | ((1L)<<5) | ((1L)<<6));
 pgprotval_t addbits = ((newprot).pgprot);
 return ((pgprot_t) { (preservebits | addbits) } );
}







struct file;
pgprot_t phys_mem_access_prot(struct file *file, unsigned long pfn,
                              unsigned long size, pgprot_t vma_prot);
int phys_mem_access_prot_allowed(struct file *file, unsigned long pfn,
                              unsigned long size, pgprot_t *vma_prot);
# 359 "linux-2.6.26/include/asm/pgtable.h"
# 1 "linux-2.6.26/include/asm/pgtable_64.h" 1
# 16 "linux-2.6.26/include/asm/pgtable_64.h"
typedef  pud_t  _GLOBAL_63_T; extern  _GLOBAL_63_T  _GLOBAL_0_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_1_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_2_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_3_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_4_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_5_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_6_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_7_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_8_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_9_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_10_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_11_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_12_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_13_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_14_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_15_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_16_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_17_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_18_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_19_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_20_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_21_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_22_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_23_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_24_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_25_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_26_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_27_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_28_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_29_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_30_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_31_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_32_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_33_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_34_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_35_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_36_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_37_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_38_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_39_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_40_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_41_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_42_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_43_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_44_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_45_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_46_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_47_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_48_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_63_T  _GLOBAL_49_level3_kernel_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level3_kernel_pgt_I) *_GLOBAL_level3_kernel_pgt_5_A[NUM_STACKS];  
typedef  pud_t  _GLOBAL_64_T; extern  _GLOBAL_64_T  _GLOBAL_0_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_1_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_2_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_3_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_4_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_5_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_6_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_7_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_8_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_9_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_10_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_11_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_12_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_13_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_14_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_15_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_16_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_17_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_18_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_19_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_20_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_21_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_22_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_23_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_24_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_25_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_26_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_27_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_28_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_29_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_30_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_31_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_32_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_33_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_34_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_35_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_36_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_37_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_38_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_39_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_40_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_41_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_42_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_43_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_44_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_45_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_46_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_47_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_48_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_64_T  _GLOBAL_49_level3_ident_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level3_ident_pgt_I) *_GLOBAL_level3_ident_pgt_6_A[NUM_STACKS];  
typedef  pmd_t  _GLOBAL_65_T; extern  _GLOBAL_65_T  _GLOBAL_0_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_1_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_2_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_3_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_4_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_5_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_6_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_7_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_8_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_9_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_10_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_11_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_12_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_13_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_14_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_15_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_16_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_17_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_18_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_19_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_20_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_21_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_22_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_23_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_24_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_25_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_26_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_27_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_28_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_29_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_30_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_31_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_32_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_33_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_34_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_35_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_36_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_37_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_38_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_39_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_40_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_41_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_42_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_43_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_44_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_45_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_46_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_47_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_48_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_65_T  _GLOBAL_49_level2_kernel_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level2_kernel_pgt_I) *_GLOBAL_level2_kernel_pgt_7_A[NUM_STACKS];  
typedef  pgd_t  _GLOBAL_66_T; extern  _GLOBAL_66_T  _GLOBAL_0_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_1_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_2_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_3_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_4_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_5_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_6_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_7_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_8_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_9_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_10_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_11_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_12_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_13_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_14_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_15_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_16_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_17_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_18_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_19_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_20_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_21_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_22_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_23_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_24_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_25_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_26_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_27_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_28_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_29_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_30_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_31_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_32_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_33_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_34_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_35_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_36_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_37_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_38_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_39_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_40_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_41_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_42_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_43_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_44_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_45_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_46_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_47_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_48_init_level4_pgt_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_49_init_level4_pgt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_init_level4_pgt_I) *_GLOBAL_init_level4_pgt_8_A[NUM_STACKS];  



extern void paging_init(void);
# 71 "linux-2.6.26/include/asm/pgtable_64.h"
struct mm_struct;

static inline  __attribute__((always_inline)) void native_pte_clear(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
 *ptep = native_make_pte(0);
}

static inline  __attribute__((always_inline)) void native_set_pte(pte_t *ptep, pte_t pte)
{
 *ptep = pte;
}

static inline  __attribute__((always_inline)) void native_set_pte_atomic(pte_t *ptep, pte_t pte)
{
 native_set_pte(ptep, pte);
}

static inline  __attribute__((always_inline)) pte_t native_ptep_get_and_clear(pte_t *xp)
{





 pte_t ret = *xp;
 native_pte_clear(((void *)0), 0, xp);
 return ret;

}

static inline  __attribute__((always_inline)) void native_set_pmd(pmd_t *pmdp, pmd_t pmd)
{
 *pmdp = pmd;
}

static inline  __attribute__((always_inline)) void native_pmd_clear(pmd_t *pmd)
{
 native_set_pmd(pmd, native_make_pmd(0));
}

static inline  __attribute__((always_inline)) void native_set_pud(pud_t *pudp, pud_t pud)
{
 *pudp = pud;
}

static inline  __attribute__((always_inline)) void native_pud_clear(pud_t *pud)
{
 native_set_pud(pud, native_make_pud(0));
}

static inline  __attribute__((always_inline)) void native_set_pgd(pgd_t *pgdp, pgd_t pgd)
{
 *pgdp = pgd;
}

static inline  __attribute__((always_inline)) void native_pgd_clear(pgd_t *pgd)
{
 native_set_pgd(pgd, native_make_pgd(0));
}
# 154 "linux-2.6.26/include/asm/pgtable_64.h"
static inline  __attribute__((always_inline)) int pgd_bad(pgd_t pgd)
{
 return (native_pgd_val(pgd) & ~(((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)(1ULL << 46) - 1))) | ((1L)<<2))) != (((1L)<<0) | ((1L)<<1) | ((1L)<<5) | ((1L)<<6));
}

static inline  __attribute__((always_inline)) int pud_bad(pud_t pud)
{
 return (native_pud_val(pud) & ~(((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)(1ULL << 46) - 1))) | ((1L)<<2))) != (((1L)<<0) | ((1L)<<1) | ((1L)<<5) | ((1L)<<6));
}

static inline  __attribute__((always_inline)) int pmd_bad(pmd_t pmd)
{
 return (native_pmd_val(pmd) & ~(((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)(1ULL << 46) - 1))) | ((1L)<<2))) != (((1L)<<0) | ((1L)<<1) | ((1L)<<5) | ((1L)<<6));
}
# 197 "linux-2.6.26/include/asm/pgtable_64.h"
static inline  __attribute__((always_inline)) int pgd_large(pgd_t pgd) { return 0; }
# 210 "linux-2.6.26/include/asm/pgtable_64.h"
static inline  __attribute__((always_inline)) int pud_large(pud_t pte)
{
 return (native_pud_val(pte) & (((1L)<<7) | ((1L)<<0))) ==
  (((1L)<<7) | ((1L)<<0));
}
# 250 "linux-2.6.26/include/asm/pgtable_64.h"
typedef  int  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_direct_gbpages[NUM_STACKS];   
# 260 "linux-2.6.26/include/asm/pgtable_64.h"
extern int kern_addr_valid(unsigned long addr);
extern void cleanup_highmap(void);
# 360 "linux-2.6.26/include/asm/pgtable.h" 2







enum {
 PG_LEVEL_NONE,
 PG_LEVEL_4K,
 PG_LEVEL_2M,
 PG_LEVEL_1G,
};







extern pte_t *lookup_address(unsigned long address, unsigned int *level);


static inline  __attribute__((always_inline)) pte_t native_local_ptep_get_and_clear(pte_t *ptep)
{
 pte_t res = *ptep;


 native_pte_clear(((void *)0), 0, ptep);
 return res;
}

static inline  __attribute__((always_inline)) void native_set_pte_at(struct mm_struct *mm, unsigned long addr,
         pte_t *ptep , pte_t pte)
{
 native_set_pte(ptep, pte);
}
# 424 "linux-2.6.26/include/asm/pgtable.h"
extern int ptep_set_access_flags(struct vm_area_struct *vma,
     unsigned long address, pte_t *ptep,
     pte_t entry, int dirty);


extern int ptep_test_and_clear_young(struct vm_area_struct *vma,
         unsigned long addr, pte_t *ptep);


extern int ptep_clear_flush_young(struct vm_area_struct *vma,
      unsigned long address, pte_t *ptep);


static inline  __attribute__((always_inline)) pte_t ptep_get_and_clear(struct mm_struct *mm, unsigned long addr,
           pte_t *ptep)
{
 pte_t pte = native_ptep_get_and_clear(ptep);
 do { } while (0);
 return pte;
}


static inline  __attribute__((always_inline)) pte_t ptep_get_and_clear_full(struct mm_struct *mm,
         unsigned long addr, pte_t *ptep,
         int full)
{
 pte_t pte;
 if (full) {




  pte = native_local_ptep_get_and_clear(ptep);
 } else {
  pte = ptep_get_and_clear(mm, addr, ptep);
 }
 return pte;
}


static inline  __attribute__((always_inline)) void ptep_set_wrprotect(struct mm_struct *mm,
          unsigned long addr, pte_t *ptep)
{
 clear_bit(1, (unsigned long *)&ptep->pte);
 do { } while (0);
}
# 481 "linux-2.6.26/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) void clone_pgd_range(pgd_t *dst, pgd_t *src, int count)
{
       memcpy(dst, src, count * sizeof(pgd_t));
}


# 1 "linux-2.6.26/include/asm-generic/pgtable.h" 1
# 488 "linux-2.6.26/include/asm/pgtable.h" 2
# 40 "linux-2.6.26/include/linux/mm.h" 2
# 53 "linux-2.6.26/include/linux/mm.h"
typedef  struct kmem_cache   _GLOBAL_68_T; extern  _GLOBAL_68_T  * global_vm_area_cachep[NUM_STACKS];    






struct vm_list_struct {
 struct vm_list_struct *next;
 struct vm_area_struct *vma;
};


typedef  struct rb_root   _GLOBAL_69_T; extern  _GLOBAL_69_T  global_nommu_vma_tree[NUM_STACKS];    
typedef  struct rw_semaphore   _GLOBAL_70_T; extern  _GLOBAL_70_T  global_nommu_vma_sem[NUM_STACKS];    

extern unsigned int kobjsize(const void *objp);
# 132 "linux-2.6.26/include/linux/mm.h"
extern pgprot_t protection_map[16];
# 147 "linux-2.6.26/include/linux/mm.h"
struct vm_fault {
 unsigned int flags;
 unsigned long pgoff;
 void *virtual_address;

 struct page *page;




};






struct vm_operations_struct {
 void (*open)(struct vm_area_struct * area);
 void (*close)(struct vm_area_struct * area);
 int (*fault)(struct vm_area_struct *vma, struct vm_fault *vmf);
 unsigned long (*nopfn)(struct vm_area_struct *area,
   unsigned long address);



 int (*page_mkwrite)(struct vm_area_struct *vma, struct page *page);
# 199 "linux-2.6.26/include/linux/mm.h"
};

struct mmu_gather;
struct inode;
# 211 "linux-2.6.26/include/linux/mm.h"
# 1 "linux-2.6.26/include/linux/page-flags.h" 1
# 72 "linux-2.6.26/include/linux/page-flags.h"
enum pageflags {
 PG_locked,
 PG_error,
 PG_referenced,
 PG_uptodate,
 PG_dirty,
 PG_lru,
 PG_active,
 PG_slab,
 PG_owner_priv_1,
 PG_arch_1,
 PG_reserved,
 PG_private,
 PG_writeback,




 PG_compound,

 PG_swapcache,
 PG_mappedtodisk,
 PG_reclaim,
 PG_buddy,



 __NR_PAGEFLAGS
};
# 149 "linux-2.6.26/include/linux/page-flags.h"
struct page;

static inline  __attribute__((always_inline)) int PageLocked(struct page *page) { return (__builtin_constant_p((PG_locked)) ? constant_test_bit((PG_locked), (&page->flags)) : variable_test_bit((PG_locked), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageLocked(struct page *page) { set_bit(PG_locked, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageLocked(struct page *page) { clear_bit(PG_locked, &page->flags); } static inline  __attribute__((always_inline)) int TestSetPageLocked(struct page *page) { return test_and_set_bit(PG_locked, &page->flags); } static inline  __attribute__((always_inline)) int TestClearPageLocked(struct page *page) { return test_and_clear_bit(PG_locked, &page->flags); }
static inline  __attribute__((always_inline)) int PageError(struct page *page) { return (__builtin_constant_p((PG_error)) ? constant_test_bit((PG_error), (&page->flags)) : variable_test_bit((PG_error), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageError(struct page *page) { set_bit(PG_error, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageError(struct page *page) { clear_bit(PG_error, &page->flags); }
static inline  __attribute__((always_inline)) int PageReferenced(struct page *page) { return (__builtin_constant_p((PG_referenced)) ? constant_test_bit((PG_referenced), (&page->flags)) : variable_test_bit((PG_referenced), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageReferenced(struct page *page) { set_bit(PG_referenced, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageReferenced(struct page *page) { clear_bit(PG_referenced, &page->flags); } static inline  __attribute__((always_inline)) int TestClearPageReferenced(struct page *page) { return test_and_clear_bit(PG_referenced, &page->flags); }
static inline  __attribute__((always_inline)) int PageDirty(struct page *page) { return (__builtin_constant_p((PG_dirty)) ? constant_test_bit((PG_dirty), (&page->flags)) : variable_test_bit((PG_dirty), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageDirty(struct page *page) { set_bit(PG_dirty, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageDirty(struct page *page) { clear_bit(PG_dirty, &page->flags); } static inline  __attribute__((always_inline)) int TestSetPageDirty(struct page *page) { return test_and_set_bit(PG_dirty, &page->flags); } static inline  __attribute__((always_inline)) int TestClearPageDirty(struct page *page) { return test_and_clear_bit(PG_dirty, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPageDirty(struct page *page) { __clear_bit(PG_dirty, &page->flags); }
static inline  __attribute__((always_inline)) int PageLRU(struct page *page) { return (__builtin_constant_p((PG_lru)) ? constant_test_bit((PG_lru), (&page->flags)) : variable_test_bit((PG_lru), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageLRU(struct page *page) { set_bit(PG_lru, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageLRU(struct page *page) { clear_bit(PG_lru, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPageLRU(struct page *page) { __clear_bit(PG_lru, &page->flags); }
static inline  __attribute__((always_inline)) int PageActive(struct page *page) { return (__builtin_constant_p((PG_active)) ? constant_test_bit((PG_active), (&page->flags)) : variable_test_bit((PG_active), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageActive(struct page *page) { set_bit(PG_active, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageActive(struct page *page) { clear_bit(PG_active, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPageActive(struct page *page) { __clear_bit(PG_active, &page->flags); }
static inline  __attribute__((always_inline)) int PageSlab(struct page *page) { return (__builtin_constant_p((PG_slab)) ? constant_test_bit((PG_slab), (&page->flags)) : variable_test_bit((PG_slab), (&page->flags))); } static inline  __attribute__((always_inline)) void __SetPageSlab(struct page *page) { __set_bit(PG_slab, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPageSlab(struct page *page) { __clear_bit(PG_slab, &page->flags); }
static inline  __attribute__((always_inline)) int PageChecked(struct page *page) { return (__builtin_constant_p((PG_owner_priv_1)) ? constant_test_bit((PG_owner_priv_1), (&page->flags)) : variable_test_bit((PG_owner_priv_1), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageChecked(struct page *page) { set_bit(PG_owner_priv_1, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageChecked(struct page *page) { clear_bit(PG_owner_priv_1, &page->flags); }
static inline  __attribute__((always_inline)) int PagePinned(struct page *page) { return (__builtin_constant_p((PG_owner_priv_1)) ? constant_test_bit((PG_owner_priv_1), (&page->flags)) : variable_test_bit((PG_owner_priv_1), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPagePinned(struct page *page) { set_bit(PG_owner_priv_1, &page->flags); } static inline  __attribute__((always_inline)) void ClearPagePinned(struct page *page) { clear_bit(PG_owner_priv_1, &page->flags); } static inline  __attribute__((always_inline)) int TestSetPagePinned(struct page *page) { return test_and_set_bit(PG_owner_priv_1, &page->flags); } static inline  __attribute__((always_inline)) int TestClearPagePinned(struct page *page) { return test_and_clear_bit(PG_owner_priv_1, &page->flags); }
static inline  __attribute__((always_inline)) int PageReserved(struct page *page) { return (__builtin_constant_p((PG_reserved)) ? constant_test_bit((PG_reserved), (&page->flags)) : variable_test_bit((PG_reserved), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageReserved(struct page *page) { set_bit(PG_reserved, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageReserved(struct page *page) { clear_bit(PG_reserved, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPageReserved(struct page *page) { __clear_bit(PG_reserved, &page->flags); }
static inline  __attribute__((always_inline)) int PagePrivate(struct page *page) { return (__builtin_constant_p((PG_private)) ? constant_test_bit((PG_private), (&page->flags)) : variable_test_bit((PG_private), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPagePrivate(struct page *page) { set_bit(PG_private, &page->flags); } static inline  __attribute__((always_inline)) void ClearPagePrivate(struct page *page) { clear_bit(PG_private, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPagePrivate(struct page *page) { __clear_bit(PG_private, &page->flags); }
 static inline  __attribute__((always_inline)) void __SetPagePrivate(struct page *page) { __set_bit(PG_private, &page->flags); }





static inline  __attribute__((always_inline)) int PageWriteback(struct page *page) { return (__builtin_constant_p((PG_writeback)) ? constant_test_bit((PG_writeback), (&page->flags)) : variable_test_bit((PG_writeback), (&page->flags))); } static inline  __attribute__((always_inline)) int TestSetPageWriteback(struct page *page) { return test_and_set_bit(PG_writeback, &page->flags); } static inline  __attribute__((always_inline)) int TestClearPageWriteback(struct page *page) { return test_and_clear_bit(PG_writeback, &page->flags); }
static inline  __attribute__((always_inline)) int PageBuddy(struct page *page) { return (__builtin_constant_p((PG_buddy)) ? constant_test_bit((PG_buddy), (&page->flags)) : variable_test_bit((PG_buddy), (&page->flags))); } static inline  __attribute__((always_inline)) void __SetPageBuddy(struct page *page) { __set_bit(PG_buddy, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPageBuddy(struct page *page) { __clear_bit(PG_buddy, &page->flags); }
static inline  __attribute__((always_inline)) int PageMappedToDisk(struct page *page) { return (__builtin_constant_p((PG_mappedtodisk)) ? constant_test_bit((PG_mappedtodisk), (&page->flags)) : variable_test_bit((PG_mappedtodisk), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageMappedToDisk(struct page *page) { set_bit(PG_mappedtodisk, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageMappedToDisk(struct page *page) { clear_bit(PG_mappedtodisk, &page->flags); }


static inline  __attribute__((always_inline)) int PageReclaim(struct page *page) { return (__builtin_constant_p((PG_reclaim)) ? constant_test_bit((PG_reclaim), (&page->flags)) : variable_test_bit((PG_reclaim), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageReclaim(struct page *page) { set_bit(PG_reclaim, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageReclaim(struct page *page) { clear_bit(PG_reclaim, &page->flags); } static inline  __attribute__((always_inline)) int TestClearPageReclaim(struct page *page) { return test_and_clear_bit(PG_reclaim, &page->flags); }
static inline  __attribute__((always_inline)) int PageReadahead(struct page *page) { return (__builtin_constant_p((PG_reclaim)) ? constant_test_bit((PG_reclaim), (&page->flags)) : variable_test_bit((PG_reclaim), (&page->flags))); } static inline  __attribute__((always_inline)) void SetPageReadahead(struct page *page) { set_bit(PG_reclaim, &page->flags); } static inline  __attribute__((always_inline)) void ClearPageReadahead(struct page *page) { clear_bit(PG_reclaim, &page->flags); }
# 183 "linux-2.6.26/include/linux/page-flags.h"
static inline  __attribute__((always_inline)) int PageHighMem(struct page *page) { return 0; }





static inline  __attribute__((always_inline)) int PageSwapCache(struct page *page) { return 0; }





static inline  __attribute__((always_inline)) int PageUncached(struct page *page) { return 0; }


static inline  __attribute__((always_inline)) int PageUptodate(struct page *page)
{
 int ret = (__builtin_constant_p((PG_uptodate)) ? constant_test_bit((PG_uptodate), (&(page)->flags)) : variable_test_bit((PG_uptodate), (&(page)->flags)));
# 210 "linux-2.6.26/include/linux/page-flags.h"
 if (ret)
  __asm__ __volatile__("": : :"memory");

 return ret;
}

static inline  __attribute__((always_inline)) void __SetPageUptodate(struct page *page)
{
 __asm__ __volatile__("": : :"memory");
 __set_bit(PG_uptodate, &(page)->flags);



}

static inline  __attribute__((always_inline)) void SetPageUptodate(struct page *page)
{
# 239 "linux-2.6.26/include/linux/page-flags.h"
 __asm__ __volatile__("": : :"memory");
 set_bit(PG_uptodate, &(page)->flags);

}

static inline  __attribute__((always_inline)) void ClearPageUptodate(struct page *page) { clear_bit(PG_uptodate, &page->flags); }

extern void cancel_dirty_page(struct page *page, unsigned int account_size);

int test_clear_page_writeback(struct page *page);
int test_set_page_writeback(struct page *page);

static inline  __attribute__((always_inline)) void set_page_writeback(struct page *page)
{
 test_set_page_writeback(page);
}
# 278 "linux-2.6.26/include/linux/page-flags.h"
static inline  __attribute__((always_inline)) int PageCompound(struct page *page) { return (__builtin_constant_p((PG_compound)) ? constant_test_bit((PG_compound), (&page->flags)) : variable_test_bit((PG_compound), (&page->flags))); }
static inline  __attribute__((always_inline)) int PageHead(struct page *page) { return (__builtin_constant_p((PG_compound)) ? constant_test_bit((PG_compound), (&page->flags)) : variable_test_bit((PG_compound), (&page->flags))); } static inline  __attribute__((always_inline)) void __SetPageHead(struct page *page) { __set_bit(PG_compound, &page->flags); } static inline  __attribute__((always_inline)) void __ClearPageHead(struct page *page) { __clear_bit(PG_compound, &page->flags); }
# 293 "linux-2.6.26/include/linux/page-flags.h"
static inline  __attribute__((always_inline)) int PageTail(struct page *page)
{
 return ((page->flags & ((1L << PG_compound) | (1L << PG_reclaim))) == ((1L << PG_compound) | (1L << PG_reclaim)));
}

static inline  __attribute__((always_inline)) void __SetPageTail(struct page *page)
{
 page->flags |= ((1L << PG_compound) | (1L << PG_reclaim));
}

static inline  __attribute__((always_inline)) void __ClearPageTail(struct page *page)
{
 page->flags &= ~((1L << PG_compound) | (1L << PG_reclaim));
}
# 212 "linux-2.6.26/include/linux/mm.h" 2
# 235 "linux-2.6.26/include/linux/mm.h"
static inline  __attribute__((always_inline)) int put_page_testzero(struct page *page)
{
 do { } while(0);
 return atomic_dec_and_test(&page->_count);
}





static inline  __attribute__((always_inline)) int get_page_unless_zero(struct page *page)
{
 do { } while(0);
 return atomic_add_unless((&page->_count), 1, 0);
}


struct page *vmalloc_to_page(const void *addr);
unsigned long vmalloc_to_pfn(const void *addr);







static inline  __attribute__((always_inline)) int is_vmalloc_addr(const void *x)
{





 return 0;

}

static inline  __attribute__((always_inline)) struct page *compound_head(struct page *page)
{
 if (__builtin_expect(!!(PageTail(page)), 0))
  return page->first_page;
 return page;
}

static inline  __attribute__((always_inline)) int page_count(struct page *page)
{
 return ((&compound_head(page)->_count)->counter);
}

static inline  __attribute__((always_inline)) void get_page(struct page *page)
{
 page = compound_head(page);
 do { } while(0);
 atomic_inc(&page->_count);
}

static inline  __attribute__((always_inline)) struct page *virt_to_head_page(const void *x)
{
 struct page *page = (mem_map + ((__phys_addr((unsigned long)(x)) >> 12) - (0UL)));
 return compound_head(page);
}





static inline  __attribute__((always_inline)) void init_page_count(struct page *page)
{
 (((&page->_count)->counter) = (1));
}

void put_page(struct page *page);
void put_pages_list(struct list_head *pages);

void split_page(struct page *page, unsigned int order);






typedef void compound_page_dtor(struct page *);

static inline  __attribute__((always_inline)) void set_compound_page_dtor(struct page *page,
      compound_page_dtor *dtor)
{
 page[1].lru.next = (void *)dtor;
}

static inline  __attribute__((always_inline)) compound_page_dtor *get_compound_page_dtor(struct page *page)
{
 return (compound_page_dtor *)page[1].lru.next;
}

static inline  __attribute__((always_inline)) int compound_order(struct page *page)
{
 if (!PageHead(page))
  return 0;
 return (unsigned long)page[1].lru.prev;
}

static inline  __attribute__((always_inline)) void set_compound_order(struct page *page, unsigned long order)
{
 page[1].lru.prev = (void *)order;
}
# 486 "linux-2.6.26/include/linux/mm.h"
static inline  __attribute__((always_inline)) enum zone_type page_zonenum(struct page *page)
{
 return (page->flags >> (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0))) & ((1UL << 2) - 1);
}
# 499 "linux-2.6.26/include/linux/mm.h"
static inline  __attribute__((always_inline)) int page_zone_id(struct page *page)
{
 return (page->flags >> ((((((sizeof(unsigned long)*8) - 0) - 0) < ((((sizeof(unsigned long)*8) - 0) - 0) - 2))? (((sizeof(unsigned long)*8) - 0) - 0) : ((((sizeof(unsigned long)*8) - 0) - 0) - 2)) * ((0 + 2) != 0))) & ((1UL << (0 + 2)) - 1);
}

static inline  __attribute__((always_inline)) int zone_to_nid(struct zone *zone)
{



 return 0;

}




static inline  __attribute__((always_inline)) int page_to_nid(struct page *page)
{
 return (page->flags >> ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0))) & ((1UL << 0) - 1);
}


static inline  __attribute__((always_inline)) struct zone *page_zone(struct page *page)
{
 return &(&global_contig_page_data[get_stack_id()])->node_zones[page_zonenum(page)];
}
# 534 "linux-2.6.26/include/linux/mm.h"
static inline  __attribute__((always_inline)) void set_page_zone(struct page *page, enum zone_type zone)
{
 page->flags &= ~(((1UL << 2) - 1) << (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0)));
 page->flags |= (zone & ((1UL << 2) - 1)) << (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0));
}

static inline  __attribute__((always_inline)) void set_page_node(struct page *page, unsigned long node)
{
 page->flags &= ~(((1UL << 0) - 1) << ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0)));
 page->flags |= (node & ((1UL << 0) - 1)) << ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0));
}

static inline  __attribute__((always_inline)) void set_page_section(struct page *page, unsigned long section)
{
 page->flags &= ~(((1UL << 0) - 1) << (((sizeof(unsigned long)*8) - 0) * (0 != 0)));
 page->flags |= (section & ((1UL << 0) - 1)) << (((sizeof(unsigned long)*8) - 0) * (0 != 0));
}

static inline  __attribute__((always_inline)) void set_page_links(struct page *page, enum zone_type zone,
 unsigned long node, unsigned long pfn)
{
 set_page_zone(page, zone);
 set_page_node(page, node);
 set_page_section(page, ((pfn) >> 0));
}





static inline  __attribute__((always_inline)) unsigned long round_hint_to_min(unsigned long hint)
{






 return hint;
}




# 1 "linux-2.6.26/include/linux/vmstat.h" 1




# 1 "linux-2.6.26/include/linux/percpu.h" 1




# 1 "linux-2.6.26/include/linux/slab.h" 1
# 56 "linux-2.6.26/include/linux/slab.h"
void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) kmem_cache_init(void);
int slab_is_available(void);

struct kmem_cache *kmem_cache_create(const char *, size_t, size_t,
   unsigned long,
   void (*)(struct kmem_cache *, void *));
void kmem_cache_destroy(struct kmem_cache *);
int kmem_cache_shrink(struct kmem_cache *);
void kmem_cache_free(struct kmem_cache *, void *);
unsigned int kmem_cache_size(struct kmem_cache *);
const char *kmem_cache_name(struct kmem_cache *);
int kmem_ptr_validate(struct kmem_cache *cachep, const void *ptr);
# 99 "linux-2.6.26/include/linux/slab.h"
void * krealloc(const void *, size_t, gfp_t);
void kfree(const void *);
size_t ksize(const void *);
# 123 "linux-2.6.26/include/linux/slab.h"
# 1 "linux-2.6.26/include/linux/slub_def.h" 1
# 11 "linux-2.6.26/include/linux/slub_def.h"
# 1 "linux-2.6.26/include/linux/workqueue.h" 1







# 1 "linux-2.6.26/include/linux/timer.h" 1




# 1 "linux-2.6.26/include/linux/ktime.h" 1
# 24 "linux-2.6.26/include/linux/ktime.h"
# 1 "linux-2.6.26/include/linux/time.h" 1
# 9 "linux-2.6.26/include/linux/time.h"
# 1 "linux-2.6.26/include/linux/math64.h" 1




# 1 "linux-2.6.26/include/asm/div64.h" 1
# 57 "linux-2.6.26/include/asm/div64.h"
# 1 "linux-2.6.26/include/asm-generic/div64.h" 1
# 58 "linux-2.6.26/include/asm/div64.h" 2
# 6 "linux-2.6.26/include/linux/math64.h" 2
# 15 "linux-2.6.26/include/linux/math64.h"
static inline  __attribute__((always_inline)) u64 div_u64_rem(u64 dividend, u32 divisor, u32 *remainder)
{
 *remainder = dividend % divisor;
 return dividend / divisor;
}




static inline  __attribute__((always_inline)) s64 div_s64_rem(s64 dividend, s32 divisor, s32 *remainder)
{
 *remainder = dividend % divisor;
 return dividend / divisor;
}




static inline  __attribute__((always_inline)) u64 div64_u64(u64 dividend, u64 divisor)
{
 return dividend / divisor;
}
# 66 "linux-2.6.26/include/linux/math64.h"
static inline  __attribute__((always_inline)) u64 div_u64(u64 dividend, u32 divisor)
{
 u32 remainder;
 return div_u64_rem(dividend, divisor, &remainder);
}






static inline  __attribute__((always_inline)) s64 div_s64(s64 dividend, s32 divisor)
{
 s32 remainder;
 return div_s64_rem(dividend, divisor, &remainder);
}


u32 iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder);

static inline   __attribute__((always_inline)) __attribute__((always_inline)) u32
__iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder)
{
 u32 ret = 0;

 while (dividend >= divisor) {


  asm("" : "+rm"(dividend));

  dividend -= divisor;
  ret++;
 }

 *remainder = dividend;

 return ret;
}
# 10 "linux-2.6.26/include/linux/time.h" 2




struct timespec {
 time_t tv_sec;
 long tv_nsec;
};


struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 41 "linux-2.6.26/include/linux/time.h"
static inline  __attribute__((always_inline)) int timespec_equal(const struct timespec *a,
                                 const struct timespec *b)
{
 return (a->tv_sec == b->tv_sec) && (a->tv_nsec == b->tv_nsec);
}






static inline  __attribute__((always_inline)) int timespec_compare(const struct timespec *lhs, const struct timespec *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_nsec - rhs->tv_nsec;
}

static inline  __attribute__((always_inline)) int timeval_compare(const struct timeval *lhs, const struct timeval *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_usec - rhs->tv_usec;
}

extern unsigned long mktime(const unsigned int year, const unsigned int mon,
       const unsigned int day, const unsigned int hour,
       const unsigned int min, const unsigned int sec);

extern void set_normalized_timespec(struct timespec *ts, time_t sec, long nsec);




static inline  __attribute__((always_inline)) struct timespec timespec_sub(struct timespec lhs,
      struct timespec rhs)
{
 struct timespec ts_delta;
 set_normalized_timespec(&ts_delta, lhs.tv_sec - rhs.tv_sec,
    lhs.tv_nsec - rhs.tv_nsec);
 return ts_delta;
}







typedef  struct timespec   _GLOBAL_71_T; extern  _GLOBAL_71_T  global_xtime[NUM_STACKS];    
typedef  struct timespec   _GLOBAL_72_T; extern  _GLOBAL_72_T  global_wall_to_monotonic[NUM_STACKS];    
typedef  seqlock_t  _GLOBAL_73_T; extern  _GLOBAL_73_T  global_xtime_lock[NUM_STACKS];   

extern unsigned long read_persistent_clock(void);
extern int update_persistent_clock(struct timespec now);
typedef  int  _GLOBAL_74_T; extern  _GLOBAL_74_T  global_no_sync_cmos_clock[NUM_STACKS] __attribute__((__section__(".data.read_mostly")))  ;    
void timekeeping_init(void);

unsigned long get_seconds(void);
struct timespec current_kernel_time(void);




extern void do_gettimeofday(struct timeval *tv);
extern int do_settimeofday(struct timespec *tv);
extern int do_sys_settimeofday(struct timespec *tv, struct timezone *tz);

extern long do_utimes(int dfd, char *filename, struct timespec *times, int flags);
struct itimerval;
extern int do_setitimer(int which, struct itimerval *value,
   struct itimerval *ovalue);
extern unsigned int alarm_setitimer(unsigned int seconds);
extern int do_getitimer(int which, struct itimerval *value);
extern void getnstimeofday(struct timespec *tv);
extern void getboottime(struct timespec *ts);
extern void monotonic_to_bootbased(struct timespec *ts);

extern struct timespec timespec_trunc(struct timespec t, unsigned gran);
extern int timekeeping_valid_for_hres(void);
extern void update_wall_time(void);
extern void update_xtime_cache(u64 nsec);
# 135 "linux-2.6.26/include/linux/time.h"
static inline  __attribute__((always_inline)) s64 timespec_to_ns(const struct timespec *ts)
{
 return ((s64) ts->tv_sec * 1000000000L) + ts->tv_nsec;
}
# 147 "linux-2.6.26/include/linux/time.h"
static inline  __attribute__((always_inline)) s64 timeval_to_ns(const struct timeval *tv)
{
 return ((s64) tv->tv_sec * 1000000000L) +
  tv->tv_usec * 1000L;
}







extern struct timespec ns_to_timespec(const s64 nsec);







extern struct timeval ns_to_timeval(const s64 nsec);
# 177 "linux-2.6.26/include/linux/time.h"
static inline   __attribute__((always_inline)) __attribute__((always_inline)) void timespec_add_ns(struct timespec *a, u64 ns)
{
 a->tv_sec += __iter_div_u64_rem(a->tv_nsec + ns, 1000000000L, &ns);
 a->tv_nsec = ns;
}
# 200 "linux-2.6.26/include/linux/time.h"
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 25 "linux-2.6.26/include/linux/ktime.h" 2
# 1 "linux-2.6.26/include/linux/jiffies.h" 1







# 1 "linux-2.6.26/include/linux/timex.h" 1
# 59 "linux-2.6.26/include/linux/timex.h"
# 1 "linux-2.6.26/include/asm/param.h" 1
# 60 "linux-2.6.26/include/linux/timex.h" 2
# 100 "linux-2.6.26/include/linux/timex.h"
struct timex {
 unsigned int modes;
 long offset;
 long freq;
 long maxerror;
 long esterror;
 int status;
 long constant;
 long precision;
 long tolerance;


 struct timeval time;
 long tick;

 long ppsfreq;
 long jitter;
 int shift;
 long stabil;
 long jitcnt;
 long calcnt;
 long errcnt;
 long stbcnt;

 int tai;

 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32;
};
# 195 "linux-2.6.26/include/linux/timex.h"
# 1 "linux-2.6.26/include/asm/timex.h" 1





# 1 "linux-2.6.26/include/asm/tsc.h" 1
# 15 "linux-2.6.26/include/asm/tsc.h"
typedef unsigned long long cycles_t;

typedef  unsigned int   _GLOBAL_75_T; extern  _GLOBAL_75_T  global_cpu_khz[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_76_T; extern  _GLOBAL_76_T  global_tsc_khz[NUM_STACKS];    

extern void disable_TSC(void);

static inline  __attribute__((always_inline)) cycles_t get_cycles(void)
{
 unsigned long long ret = 0;


 if (!(__builtin_constant_p((0*32+ 4)) && ( ((((0*32+ 4))>>5)==0 && (1UL<<(((0*32+ 4))&31) & ((1<<((0*32+ 0) & 31))|(1<<((0*32+ 3) & 31))|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|(1<<((0*32+13) & 31))|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((0*32+ 4))>>5)==1 && (1UL<<(((0*32+ 4))&31) & ((1<<((1*32+29) & 31))|0))) || ((((0*32+ 4))>>5)==2 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==3 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==4 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==5 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==6 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==7 && (1UL<<(((0*32+ 4))&31) & 0)) ) ? 1 : (__builtin_constant_p(((0*32+ 4))) ? constant_test_bit(((0*32+ 4)), ((unsigned long *)((&global_boot_cpu_data[get_stack_id()])->x86_capability))) : variable_test_bit(((0*32+ 4)), ((unsigned long *)((&global_boot_cpu_data[get_stack_id()])->x86_capability))))))
  return 0;

 ((ret) = native_read_tsc());

 return ret;
}

static inline   __attribute__((always_inline)) __attribute__((always_inline)) cycles_t vget_cycles(void)
{





 if (!(__builtin_constant_p((0*32+ 4)) && ( ((((0*32+ 4))>>5)==0 && (1UL<<(((0*32+ 4))&31) & ((1<<((0*32+ 0) & 31))|(1<<((0*32+ 3) & 31))|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|(1<<((0*32+13) & 31))|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((0*32+ 4))>>5)==1 && (1UL<<(((0*32+ 4))&31) & ((1<<((1*32+29) & 31))|0))) || ((((0*32+ 4))>>5)==2 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==3 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==4 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==5 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==6 && (1UL<<(((0*32+ 4))&31) & 0)) || ((((0*32+ 4))>>5)==7 && (1UL<<(((0*32+ 4))&31) & 0)) ) ? 1 : (__builtin_constant_p(((0*32+ 4))) ? constant_test_bit(((0*32+ 4)), ((unsigned long *)((&global_boot_cpu_data[get_stack_id()])->x86_capability))) : variable_test_bit(((0*32+ 4)), ((unsigned long *)((&global_boot_cpu_data[get_stack_id()])->x86_capability))))))
  return 0;

 return (cycles_t)__native_read_tsc();
}

extern void tsc_init(void);
extern void mark_tsc_unstable(char *reason);
extern int unsynchronized_tsc(void);
extern void init_tsc_clocksource(void);
int check_tsc_unstable(void);





extern void check_tsc_sync_source(int cpu);
extern void check_tsc_sync_target(void);

extern void tsc_calibrate(void);
extern int notsc_setup(char *);
# 7 "linux-2.6.26/include/asm/timex.h" 2
# 196 "linux-2.6.26/include/linux/timex.h" 2






typedef  unsigned long   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_tick_usec[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_78_T; extern  _GLOBAL_78_T  global_tick_nsec[NUM_STACKS];    
typedef  int  _GLOBAL_79_T; extern  _GLOBAL_79_T  global_tickadj[NUM_STACKS];   




typedef  int  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_time_status[NUM_STACKS];   
typedef  long  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_time_maxerror[NUM_STACKS];   
typedef  long  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_time_esterror[NUM_STACKS];   

typedef  long  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_time_adjust[NUM_STACKS];   

extern void ntp_init(void);
extern void ntp_clear(void);





static inline  __attribute__((always_inline)) int ntp_synced(void)
{
 return !(global_time_status[get_stack_id()] & 0x0040);
}
# 244 "linux-2.6.26/include/linux/timex.h"
typedef  u64  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_tick_length[NUM_STACKS];   

extern void second_overflow(void);
extern void update_ntp_one_tick(void);
extern int do_adjtimex(struct timex *);




int read_current_timer(unsigned long *timer_val);
# 9 "linux-2.6.26/include/linux/jiffies.h" 2
# 81 "linux-2.6.26/include/linux/jiffies.h"
typedef  u64   _GLOBAL_85_T; extern  __attribute__((section(".data")))   _GLOBAL_85_T  global_jiffies_64[NUM_STACKS];    
typedef  unsigned long    _GLOBAL_86_T; extern volatile  __attribute__((section(".data")))   _GLOBAL_86_T  global_jiffies[NUM_STACKS];      




static inline  __attribute__((always_inline)) u64 get_jiffies_64(void)
{
 return (u64)global_jiffies[get_stack_id()];
}
# 173 "linux-2.6.26/include/linux/jiffies.h"
typedef  unsigned long   _GLOBAL_87_T; extern  _GLOBAL_87_T  global_preset_lpj[NUM_STACKS];    
# 286 "linux-2.6.26/include/linux/jiffies.h"
extern unsigned int jiffies_to_msecs(const unsigned long j);
extern unsigned int jiffies_to_usecs(const unsigned long j);
extern unsigned long msecs_to_jiffies(const unsigned int m);
extern unsigned long usecs_to_jiffies(const unsigned int u);
extern unsigned long timespec_to_jiffies(const struct timespec *value);
extern void jiffies_to_timespec(const unsigned long jiffies,
    struct timespec *value);
extern unsigned long timeval_to_jiffies(const struct timeval *value);
extern void jiffies_to_timeval(const unsigned long jiffies,
          struct timeval *value);
extern clock_t jiffies_to_clock_t(long x);
extern unsigned long clock_t_to_jiffies(unsigned long x);
extern u64 jiffies_64_to_clock_t(u64 x);
extern u64 nsec_to_clock_t(u64 x);
# 26 "linux-2.6.26/include/linux/ktime.h" 2
# 46 "linux-2.6.26/include/linux/ktime.h"
union ktime {
 s64 tv64;
# 57 "linux-2.6.26/include/linux/ktime.h"
};

typedef union ktime ktime_t;
# 81 "linux-2.6.26/include/linux/ktime.h"
static inline  __attribute__((always_inline)) ktime_t ktime_set(const long secs, const unsigned long nsecs)
{

 if (__builtin_expect(!!(secs >= (((s64)~((u64)1 << 63)) / 1000000000L)), 0))
  return (ktime_t){ .tv64 = ((s64)~((u64)1 << 63)) };

 return (ktime_t) { .tv64 = (s64)secs * 1000000000L + (s64)nsecs };
}
# 113 "linux-2.6.26/include/linux/ktime.h"
static inline  __attribute__((always_inline)) ktime_t timespec_to_ktime(struct timespec ts)
{
 return ktime_set(ts.tv_sec, ts.tv_nsec);
}


static inline  __attribute__((always_inline)) ktime_t timeval_to_ktime(struct timeval tv)
{
 return ktime_set(tv.tv_sec, tv.tv_usec * 1000L);
}
# 287 "linux-2.6.26/include/linux/ktime.h"
static inline  __attribute__((always_inline)) int ktime_equal(const ktime_t cmp1, const ktime_t cmp2)
{
 return cmp1.tv64 == cmp2.tv64;
}

static inline  __attribute__((always_inline)) s64 ktime_to_us(const ktime_t kt)
{
 struct timeval tv = ns_to_timeval((kt).tv64);
 return (s64) tv.tv_sec * 1000000L + tv.tv_usec;
}

static inline  __attribute__((always_inline)) s64 ktime_us_delta(const ktime_t later, const ktime_t earlier)
{
       return ktime_to_us(({ (ktime_t){ .tv64 = (later).tv64 - (earlier).tv64 }; }));
}

static inline  __attribute__((always_inline)) ktime_t ktime_add_us(const ktime_t kt, const u64 usec)
{
 return ({ (ktime_t){ .tv64 = (kt).tv64 + (usec * 1000) }; });
}

static inline  __attribute__((always_inline)) ktime_t ktime_sub_us(const ktime_t kt, const u64 usec)
{
 return ({ (ktime_t){ .tv64 = (kt).tv64 - (usec * 1000) }; });
}

extern ktime_t ktime_add_safe(const ktime_t lhs, const ktime_t rhs);
# 325 "linux-2.6.26/include/linux/ktime.h"
extern void ktime_get_ts(struct timespec *ts);




static inline  __attribute__((always_inline)) ktime_t ns_to_ktime(u64 ns)
{
 typedef  const ktime_t   _GLOBAL_88_T; static  _GLOBAL_88_T  global_ktime_zero[NUM_STACKS] = {  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  };          
 return ({ (ktime_t){ .tv64 = (global_ktime_zero[get_stack_id()]).tv64 + (ns) }; });
}
# 6 "linux-2.6.26/include/linux/timer.h" 2

# 1 "linux-2.6.26/include/linux/debugobjects.h" 1






enum debug_obj_state {
 ODEBUG_STATE_NONE,
 ODEBUG_STATE_INIT,
 ODEBUG_STATE_INACTIVE,
 ODEBUG_STATE_ACTIVE,
 ODEBUG_STATE_DESTROYED,
 ODEBUG_STATE_NOTAVAILABLE,
 ODEBUG_STATE_MAX,
};

struct debug_obj_descr;
# 26 "linux-2.6.26/include/linux/debugobjects.h"
struct debug_obj {
 struct hlist_node node;
 enum debug_obj_state state;
 void *object;
 struct debug_obj_descr *descr;
};
# 45 "linux-2.6.26/include/linux/debugobjects.h"
struct debug_obj_descr {
 const char *name;

 int (*fixup_init) (void *addr, enum debug_obj_state state);
 int (*fixup_activate) (void *addr, enum debug_obj_state state);
 int (*fixup_destroy) (void *addr, enum debug_obj_state state);
 int (*fixup_free) (void *addr, enum debug_obj_state state);
};
# 66 "linux-2.6.26/include/linux/debugobjects.h"
static inline  __attribute__((always_inline)) void
debug_object_init (void *addr, struct debug_obj_descr *descr) { }
static inline  __attribute__((always_inline)) void
debug_object_init_on_stack(void *addr, struct debug_obj_descr *descr) { }
static inline  __attribute__((always_inline)) void
debug_object_activate (void *addr, struct debug_obj_descr *descr) { }
static inline  __attribute__((always_inline)) void
debug_object_deactivate(void *addr, struct debug_obj_descr *descr) { }
static inline  __attribute__((always_inline)) void
debug_object_destroy (void *addr, struct debug_obj_descr *descr) { }
static inline  __attribute__((always_inline)) void
debug_object_free (void *addr, struct debug_obj_descr *descr) { }

static inline  __attribute__((always_inline)) void debug_objects_early_init(void) { }
static inline  __attribute__((always_inline)) void debug_objects_mem_init(void) { }





static inline  __attribute__((always_inline)) void
debug_check_no_obj_freed(const void *address, unsigned long size) { }
# 8 "linux-2.6.26/include/linux/timer.h" 2

struct tvec_base;

struct timer_list {
 struct list_head entry;
 unsigned long expires;

 void (*function)(unsigned long);
 unsigned long data;

 struct tvec_base *base;





};

typedef  struct tvec_base   _GLOBAL_89_T; extern  _GLOBAL_89_T  _GLOBAL_0_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_1_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_2_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_3_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_4_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_5_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_6_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_7_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_8_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_9_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_10_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_11_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_12_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_13_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_14_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_15_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_16_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_17_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_18_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_19_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_20_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_21_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_22_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_23_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_24_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_25_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_26_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_27_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_28_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_29_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_30_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_31_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_32_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_33_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_34_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_35_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_36_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_37_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_38_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_39_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_40_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_41_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_42_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_43_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_44_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_45_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_46_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_47_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_48_boot_tvec_bases_I; extern  _GLOBAL_89_T  _GLOBAL_49_boot_tvec_bases_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_tvec_bases_I) *_GLOBAL_boot_tvec_bases_9_A[NUM_STACKS];   
# 40 "linux-2.6.26/include/linux/timer.h"
void init_timer(struct timer_list *timer);
void init_timer_deferrable(struct timer_list *timer);





static inline  __attribute__((always_inline)) void destroy_timer_on_stack(struct timer_list *timer) { }
static inline  __attribute__((always_inline)) void init_timer_on_stack(struct timer_list *timer)
{
 init_timer(timer);
}


static inline  __attribute__((always_inline)) void setup_timer(struct timer_list * timer,
    void (*function)(unsigned long),
    unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer(timer);
}

static inline  __attribute__((always_inline)) void setup_timer_on_stack(struct timer_list *timer,
     void (*function)(unsigned long),
     unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer_on_stack(timer);
}
# 82 "linux-2.6.26/include/linux/timer.h"
static inline  __attribute__((always_inline)) int timer_pending(const struct timer_list * timer)
{
 return timer->entry.next != ((void *)0);
}

extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int __mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer(struct timer_list *timer, unsigned long expires);
# 102 "linux-2.6.26/include/linux/timer.h"
extern unsigned long next_timer_interrupt(void);





extern unsigned long get_next_timer_interrupt(unsigned long now);
# 136 "linux-2.6.26/include/linux/timer.h"
static inline  __attribute__((always_inline)) void init_timer_stats(void)
{
}

static inline  __attribute__((always_inline)) void timer_stats_timer_set_start_info(struct timer_list *timer)
{
}

static inline  __attribute__((always_inline)) void timer_stats_timer_clear_start_info(struct timer_list *timer)
{
}
# 163 "linux-2.6.26/include/linux/timer.h"
static inline  __attribute__((always_inline)) void add_timer(struct timer_list *timer)
{
 do { if (__builtin_expect(!!(timer_pending(timer)), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
 __mod_timer(timer, timer->expires);
}
# 179 "linux-2.6.26/include/linux/timer.h"
extern void init_timers(void);
extern void run_local_timers(void);
struct hrtimer;
extern enum hrtimer_restart it_real_fn(struct hrtimer *);

unsigned long __round_jiffies(unsigned long j, int cpu);
unsigned long __round_jiffies_relative(unsigned long j, int cpu);
unsigned long round_jiffies(unsigned long j);
unsigned long round_jiffies_relative(unsigned long j);
# 9 "linux-2.6.26/include/linux/workqueue.h" 2



# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 13 "linux-2.6.26/include/linux/workqueue.h" 2

struct workqueue_struct;

struct work_struct;
typedef void (*work_func_t)(struct work_struct *work);







struct work_struct {
 atomic_long_t data;



 struct list_head entry;
 work_func_t func;



};



struct delayed_work {
 struct work_struct work;
 struct timer_list timer;
};

struct execute_work {
 struct work_struct work;
};
# 150 "linux-2.6.26/include/linux/workqueue.h"
extern struct workqueue_struct *
__create_workqueue_key(const char *name, int singlethread,
         int freezeable, struct lock_class_key *key,
         const char *lock_name);
# 179 "linux-2.6.26/include/linux/workqueue.h"
extern void destroy_workqueue(struct workqueue_struct *wq);

extern int queue_work(struct workqueue_struct *wq, struct work_struct *work);
extern int queue_delayed_work(struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);
extern int queue_delayed_work_on(int cpu, struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);

extern void flush_workqueue(struct workqueue_struct *wq);
extern void flush_scheduled_work(void);

extern int schedule_work(struct work_struct *work);
extern int schedule_delayed_work(struct delayed_work *work, unsigned long delay);
extern int schedule_delayed_work_on(int cpu, struct delayed_work *work,
     unsigned long delay);
extern int schedule_on_each_cpu(work_func_t func);
extern int current_is_keventd(void);
extern int keventd_up(void);

extern void init_workqueues(void);
int execute_in_process_context(work_func_t fn, struct execute_work *);

extern int cancel_work_sync(struct work_struct *work);







static inline  __attribute__((always_inline)) int cancel_delayed_work(struct delayed_work *work)
{
 int ret;

 ret = del_timer(&work->timer);
 if (ret)
  clear_bit(0, ((unsigned long *)(&(&work->work)->data)));
 return ret;
}

extern int cancel_delayed_work_sync(struct delayed_work *work);


static inline 
__attribute__((always_inline)) void cancel_rearming_delayed_workqueue(struct workqueue_struct *wq,
     struct delayed_work *work)
{
 cancel_delayed_work_sync(work);
}


static inline 
__attribute__((always_inline)) void cancel_rearming_delayed_work(struct delayed_work *work)
{
 cancel_delayed_work_sync(work);
}
# 12 "linux-2.6.26/include/linux/slub_def.h" 2
# 1 "linux-2.6.26/include/linux/kobject.h" 1
# 21 "linux-2.6.26/include/linux/kobject.h"
# 1 "linux-2.6.26/include/linux/sysfs.h" 1
# 18 "linux-2.6.26/include/linux/sysfs.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 19 "linux-2.6.26/include/linux/sysfs.h" 2

struct kobject;
struct module;





struct attribute {
 const char *name;
 struct module *owner;
 mode_t mode;
};

struct attribute_group {
 const char *name;
 mode_t (*is_visible)(struct kobject *,
           struct attribute *, int);
 struct attribute **attrs;
};
# 62 "linux-2.6.26/include/linux/sysfs.h"
struct vm_area_struct;

struct bin_attribute {
 struct attribute attr;
 size_t size;
 void *private;
 ssize_t (*read)(struct kobject *, struct bin_attribute *,
   char *, loff_t, size_t);
 ssize_t (*write)(struct kobject *, struct bin_attribute *,
    char *, loff_t, size_t);
 int (*mmap)(struct kobject *, struct bin_attribute *attr,
      struct vm_area_struct *vma);
};

struct sysfs_ops {
 ssize_t (*show)(struct kobject *, struct attribute *,char *);
 ssize_t (*store)(struct kobject *,struct attribute *,const char *, size_t);
};
# 123 "linux-2.6.26/include/linux/sysfs.h"
static inline  __attribute__((always_inline)) int sysfs_schedule_callback(struct kobject *kobj,
  void (*func)(void *), void *data, struct module *owner)
{
 return -38;
}

static inline  __attribute__((always_inline)) int sysfs_create_dir(struct kobject *kobj)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_dir(struct kobject *kobj)
{
}

static inline  __attribute__((always_inline)) int sysfs_rename_dir(struct kobject *kobj, const char *new_name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_move_dir(struct kobject *kobj,
     struct kobject *new_parent_kobj)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_create_file(struct kobject *kobj,
        const struct attribute *attr)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_chmod_file(struct kobject *kobj,
       struct attribute *attr, mode_t mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_file(struct kobject *kobj,
         const struct attribute *attr)
{
}

static inline  __attribute__((always_inline)) int sysfs_create_bin_file(struct kobject *kobj,
     struct bin_attribute *attr)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_bin_file(struct kobject *kobj,
      struct bin_attribute *attr)
{
}

static inline  __attribute__((always_inline)) int sysfs_create_link(struct kobject *kobj,
        struct kobject *target, const char *name)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_link(struct kobject *kobj, const char *name)
{
}

static inline  __attribute__((always_inline)) int sysfs_create_group(struct kobject *kobj,
         const struct attribute_group *grp)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_update_group(struct kobject *kobj,
    const struct attribute_group *grp)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_group(struct kobject *kobj,
          const struct attribute_group *grp)
{
}

static inline  __attribute__((always_inline)) int sysfs_add_file_to_group(struct kobject *kobj,
  const struct attribute *attr, const char *group)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_file_from_group(struct kobject *kobj,
  const struct attribute *attr, const char *group)
{
}

static inline  __attribute__((always_inline)) void sysfs_notify(struct kobject *kobj, char *dir, char *attr)
{
}

static inline  __attribute__((always_inline)) int sysfs_init(void)
{
 return 0;
}
# 22 "linux-2.6.26/include/linux/kobject.h" 2


# 1 "linux-2.6.26/include/linux/kref.h" 1
# 19 "linux-2.6.26/include/linux/kref.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 20 "linux-2.6.26/include/linux/kref.h" 2

struct kref {
 atomic_t refcount;
};

void kref_set(struct kref *kref, int num);
void kref_init(struct kref *kref);
void kref_get(struct kref *kref);
int kref_put(struct kref *kref, void (*release) (struct kref *kref));
# 25 "linux-2.6.26/include/linux/kobject.h" 2


# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 28 "linux-2.6.26/include/linux/kobject.h" 2







typedef  char  _GLOBAL_90_T; extern  _GLOBAL_90_T  _GLOBAL_0_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_1_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_2_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_3_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_4_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_5_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_6_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_7_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_8_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_9_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_10_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_11_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_12_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_13_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_14_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_15_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_16_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_17_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_18_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_19_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_20_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_21_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_22_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_23_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_24_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_25_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_26_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_27_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_28_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_29_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_30_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_31_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_32_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_33_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_34_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_35_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_36_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_37_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_38_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_39_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_40_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_41_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_42_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_43_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_44_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_45_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_46_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_47_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_48_uevent_helper_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_49_uevent_helper_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uevent_helper_I) *_GLOBAL_uevent_helper_10_A[NUM_STACKS];  


typedef  u64  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_uevent_seqnum[NUM_STACKS];   
# 50 "linux-2.6.26/include/linux/kobject.h"
enum kobject_action {
 KOBJ_ADD,
 KOBJ_REMOVE,
 KOBJ_CHANGE,
 KOBJ_MOVE,
 KOBJ_ONLINE,
 KOBJ_OFFLINE,
 KOBJ_MAX
};

struct kobject {
 const char *name;
 struct kref kref;
 struct list_head entry;
 struct kobject *parent;
 struct kset *kset;
 struct kobj_type *ktype;
 struct sysfs_dirent *sd;
 unsigned int state_initialized:1;
 unsigned int state_in_sysfs:1;
 unsigned int state_add_uevent_sent:1;
 unsigned int state_remove_uevent_sent:1;
};

extern int kobject_set_name(struct kobject *kobj, const char *name, ...)
       __attribute__((format(printf, 2, 3))) ;

static inline  __attribute__((always_inline)) const char *kobject_name(const struct kobject *kobj)
{
 return kobj->name;
}

extern void kobject_init(struct kobject *kobj, struct kobj_type *ktype);
extern int kobject_add(struct kobject *kobj,
        struct kobject *parent,
        const char *fmt, ...);
extern int kobject_init_and_add(struct kobject *kobj,
          struct kobj_type *ktype,
          struct kobject *parent,
          const char *fmt, ...);

extern void kobject_del(struct kobject *kobj);

extern struct kobject * kobject_create(void);
extern struct kobject * kobject_create_and_add(const char *name,
      struct kobject *parent);

extern int kobject_rename(struct kobject *, const char *new_name);
extern int kobject_move(struct kobject *, struct kobject *);

extern struct kobject *kobject_get(struct kobject *kobj);
extern void kobject_put(struct kobject *kobj);

extern char *kobject_get_path(struct kobject *kobj, gfp_t flag);

struct kobj_type {
 void (*release)(struct kobject *kobj);
 struct sysfs_ops *sysfs_ops;
 struct attribute **default_attrs;
};

struct kobj_uevent_env {
 char *envp[32];
 int envp_idx;
 char buf[2048];
 int buflen;
};

struct kset_uevent_ops {
 int (*filter)(struct kset *kset, struct kobject *kobj);
 const char *(*name)(struct kset *kset, struct kobject *kobj);
 int (*uevent)(struct kset *kset, struct kobject *kobj,
        struct kobj_uevent_env *env);
};

struct kobj_attribute {
 struct attribute attr;
 ssize_t (*show)(struct kobject *kobj, struct kobj_attribute *attr,
   char *buf);
 ssize_t (*store)(struct kobject *kobj, struct kobj_attribute *attr,
    const char *buf, size_t count);
};

typedef  struct sysfs_ops   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_kobj_sysfs_ops[NUM_STACKS];    
# 152 "linux-2.6.26/include/linux/kobject.h"
struct kset {
 struct list_head list;
 spinlock_t list_lock;
 struct kobject kobj;
 struct kset_uevent_ops *uevent_ops;
};

extern void kset_init(struct kset *kset);
extern int kset_register(struct kset *kset);
extern void kset_unregister(struct kset *kset);
extern struct kset * kset_create_and_add(const char *name,
      struct kset_uevent_ops *u,
      struct kobject *parent_kobj);

static inline  __attribute__((always_inline)) struct kset *to_kset(struct kobject *kobj)
{
 return kobj ? ({ const typeof( ((struct kset *)0)->kobj ) *__mptr = (kobj); (struct kset *)( (char *)__mptr - __builtin_offsetof(struct kset,kobj) );}) : ((void *)0);
}

static inline  __attribute__((always_inline)) struct kset *kset_get(struct kset *k)
{
 return k ? to_kset(kobject_get(&k->kobj)) : ((void *)0);
}

static inline  __attribute__((always_inline)) void kset_put(struct kset *k)
{
 kobject_put(&k->kobj);
}

static inline  __attribute__((always_inline)) struct kobj_type *get_ktype(struct kobject *kobj)
{
 return kobj->ktype;
}

extern struct kobject *kset_find_obj(struct kset *, const char *);


typedef  struct kobject   _GLOBAL_93_T; extern  _GLOBAL_93_T  * global_kernel_kobj[NUM_STACKS];    

typedef  struct kobject   _GLOBAL_94_T; extern  _GLOBAL_94_T  * global_hypervisor_kobj[NUM_STACKS];    

typedef  struct kobject   _GLOBAL_95_T; extern  _GLOBAL_95_T  * global_power_kobj[NUM_STACKS];    

typedef  struct kobject   _GLOBAL_96_T; extern  _GLOBAL_96_T  * global_firmware_kobj[NUM_STACKS];    
# 208 "linux-2.6.26/include/linux/kobject.h"
static inline  __attribute__((always_inline)) int kobject_uevent(struct kobject *kobj,
     enum kobject_action action)
{ return 0; }
static inline  __attribute__((always_inline)) int kobject_uevent_env(struct kobject *kobj,
          enum kobject_action action,
          char *envp[])
{ return 0; }

static inline  __attribute__((always_inline)) int add_uevent_var(struct kobj_uevent_env *env,
     const char *format, ...)
{ return 0; }

static inline  __attribute__((always_inline)) int kobject_action_type(const char *buf, size_t count,
          enum kobject_action *type)
{ return -22; }
# 13 "linux-2.6.26/include/linux/slub_def.h" 2

enum stat_item {
 ALLOC_FASTPATH,
 ALLOC_SLOWPATH,
 FREE_FASTPATH,
 FREE_SLOWPATH,
 FREE_FROZEN,
 FREE_ADD_PARTIAL,
 FREE_REMOVE_PARTIAL,
 ALLOC_FROM_PARTIAL,
 ALLOC_SLAB,
 ALLOC_REFILL,
 FREE_SLAB,
 CPUSLAB_FLUSH,
 DEACTIVATE_FULL,
 DEACTIVATE_EMPTY,
 DEACTIVATE_TO_HEAD,
 DEACTIVATE_TO_TAIL,
 DEACTIVATE_REMOTE_FREES,
 ORDER_FALLBACK,
 NR_SLUB_STAT_ITEMS };

struct kmem_cache_cpu {
 void **freelist;
 struct page *page;
 int node;
 unsigned int offset;
 unsigned int objsize;



};

struct kmem_cache_node {
 spinlock_t list_lock;
 unsigned long nr_partial;
 struct list_head partial;





};






struct kmem_cache_order_objects {
 unsigned long x;
};




struct kmem_cache {

 unsigned long flags;
 int size;
 int objsize;
 int offset;
 struct kmem_cache_order_objects oo;





 struct kmem_cache_node local_node;


 struct kmem_cache_order_objects max;
 struct kmem_cache_order_objects min;
 gfp_t allocflags;
 int refcount;
 void (*ctor)(struct kmem_cache *, void *);
 int inuse;
 int align;
 const char *name;
 struct list_head list;
# 107 "linux-2.6.26/include/linux/slub_def.h"
 struct kmem_cache_cpu cpu_slab;

};
# 126 "linux-2.6.26/include/linux/slub_def.h"
extern struct kmem_cache kmalloc_caches[12 + 1];





static inline   __attribute__((always_inline)) __attribute__((always_inline)) int kmalloc_index(size_t size)
{
 if (!size)
  return 0;

 if (size <= 8)
  return ( __builtin_constant_p(8) ? ( (8) < 1 ? ____ilog2_NaN() : (8) & (1ULL << 63) ? 63 : (8) & (1ULL << 62) ? 62 : (8) & (1ULL << 61) ? 61 : (8) & (1ULL << 60) ? 60 : (8) & (1ULL << 59) ? 59 : (8) & (1ULL << 58) ? 58 : (8) & (1ULL << 57) ? 57 : (8) & (1ULL << 56) ? 56 : (8) & (1ULL << 55) ? 55 : (8) & (1ULL << 54) ? 54 : (8) & (1ULL << 53) ? 53 : (8) & (1ULL << 52) ? 52 : (8) & (1ULL << 51) ? 51 : (8) & (1ULL << 50) ? 50 : (8) & (1ULL << 49) ? 49 : (8) & (1ULL << 48) ? 48 : (8) & (1ULL << 47) ? 47 : (8) & (1ULL << 46) ? 46 : (8) & (1ULL << 45) ? 45 : (8) & (1ULL << 44) ? 44 : (8) & (1ULL << 43) ? 43 : (8) & (1ULL << 42) ? 42 : (8) & (1ULL << 41) ? 41 : (8) & (1ULL << 40) ? 40 : (8) & (1ULL << 39) ? 39 : (8) & (1ULL << 38) ? 38 : (8) & (1ULL << 37) ? 37 : (8) & (1ULL << 36) ? 36 : (8) & (1ULL << 35) ? 35 : (8) & (1ULL << 34) ? 34 : (8) & (1ULL << 33) ? 33 : (8) & (1ULL << 32) ? 32 : (8) & (1ULL << 31) ? 31 : (8) & (1ULL << 30) ? 30 : (8) & (1ULL << 29) ? 29 : (8) & (1ULL << 28) ? 28 : (8) & (1ULL << 27) ? 27 : (8) & (1ULL << 26) ? 26 : (8) & (1ULL << 25) ? 25 : (8) & (1ULL << 24) ? 24 : (8) & (1ULL << 23) ? 23 : (8) & (1ULL << 22) ? 22 : (8) & (1ULL << 21) ? 21 : (8) & (1ULL << 20) ? 20 : (8) & (1ULL << 19) ? 19 : (8) & (1ULL << 18) ? 18 : (8) & (1ULL << 17) ? 17 : (8) & (1ULL << 16) ? 16 : (8) & (1ULL << 15) ? 15 : (8) & (1ULL << 14) ? 14 : (8) & (1ULL << 13) ? 13 : (8) & (1ULL << 12) ? 12 : (8) & (1ULL << 11) ? 11 : (8) & (1ULL << 10) ? 10 : (8) & (1ULL << 9) ? 9 : (8) & (1ULL << 8) ? 8 : (8) & (1ULL << 7) ? 7 : (8) & (1ULL << 6) ? 6 : (8) & (1ULL << 5) ? 5 : (8) & (1ULL << 4) ? 4 : (8) & (1ULL << 3) ? 3 : (8) & (1ULL << 2) ? 2 : (8) & (1ULL << 1) ? 1 : (8) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof(8) <= 4) ? __ilog2_u32(8) : __ilog2_u64(8) );


 if (size > 64 && size <= 96)
  return 1;
 if (size > 128 && size <= 192)
  return 2;

 if (size <= 8) return 3;
 if (size <= 16) return 4;
 if (size <= 32) return 5;
 if (size <= 64) return 6;
 if (size <= 128) return 7;
 if (size <= 256) return 8;
 if (size <= 512) return 9;
 if (size <= 1024) return 10;
 if (size <= 2 * 1024) return 11;
 if (size <= 4 * 1024) return 12;




 if (size <= 8 * 1024) return 13;
 if (size <= 16 * 1024) return 14;
 if (size <= 32 * 1024) return 15;
 if (size <= 64 * 1024) return 16;
 if (size <= 128 * 1024) return 17;
 if (size <= 256 * 1024) return 18;
 if (size <= 512 * 1024) return 19;
 if (size <= 1024 * 1024) return 20;
 if (size <= 2 * 1024 * 1024) return 21;
 return -1;
# 178 "linux-2.6.26/include/linux/slub_def.h"
}







static inline   __attribute__((always_inline)) __attribute__((always_inline)) struct kmem_cache *kmalloc_slab(size_t size)
{
 int index = kmalloc_index(size);

 if (index == 0)
  return ((void *)0);

 return &kmalloc_caches[index];
}
# 203 "linux-2.6.26/include/linux/slub_def.h"
void *kmem_cache_alloc(struct kmem_cache *, gfp_t);
void *__kmalloc(size_t size, gfp_t flags);

static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *kmalloc_large(size_t size, gfp_t flags)
{
 return (void *)__get_free_pages(flags | (( gfp_t)0x4000u), get_order(size));
}

static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *kmalloc(size_t size, gfp_t flags)
{
 if (__builtin_constant_p(size)) {
  if (size > ((1UL) << 12))
   return kmalloc_large(size, flags);

  if (!(flags & ( gfp_t)0)) {
   struct kmem_cache *s = kmalloc_slab(size);

   if (!s)
    return ((void *)16);

   return kmem_cache_alloc(s, flags);
  }
 }
 return __kmalloc(size, flags);
}
# 124 "linux-2.6.26/include/linux/slab.h" 2
# 181 "linux-2.6.26/include/linux/slab.h"
static inline  __attribute__((always_inline)) void *kcalloc(size_t n, size_t size, gfp_t flags)
{
 if (n != 0 && size > (~0UL) / n)
  return ((void *)0);
 return __kmalloc(n * size, flags | (( gfp_t)0x8000u));
}
# 199 "linux-2.6.26/include/linux/slab.h"
static inline  __attribute__((always_inline)) void *kmalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc(size, flags);
}

static inline  __attribute__((always_inline)) void *__kmalloc_node(size_t size, gfp_t flags, int node)
{
 return __kmalloc(size, flags);
}

void *kmem_cache_alloc(struct kmem_cache *, gfp_t);

static inline  __attribute__((always_inline)) void *kmem_cache_alloc_node(struct kmem_cache *cachep,
     gfp_t flags, int node)
{
 return kmem_cache_alloc(cachep, flags);
}
# 227 "linux-2.6.26/include/linux/slab.h"
extern void *__kmalloc_track_caller(size_t, gfp_t, void*);
# 264 "linux-2.6.26/include/linux/slab.h"
static inline  __attribute__((always_inline)) void *kmem_cache_zalloc(struct kmem_cache *k, gfp_t flags)
{
 return kmem_cache_alloc(k, flags | (( gfp_t)0x8000u));
}






static inline  __attribute__((always_inline)) void *kzalloc(size_t size, gfp_t flags)
{
 return kmalloc(size, flags | (( gfp_t)0x8000u));
}







static inline  __attribute__((always_inline)) void *kzalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc_node(size, flags | (( gfp_t)0x8000u), node);
}
# 6 "linux-2.6.26/include/linux/percpu.h" 2
# 89 "linux-2.6.26/include/linux/percpu.h"
static inline  __attribute__((always_inline)) void percpu_depopulate(void *__pdata, int cpu)
{
}

static inline  __attribute__((always_inline)) void __percpu_depopulate_mask(void *__pdata, cpumask_t *mask)
{
}

static inline  __attribute__((always_inline)) void *percpu_populate(void *__pdata, size_t size, gfp_t gfp,
        int cpu)
{
 return ({ (void)(cpu); (__pdata); });
}

static inline  __attribute__((always_inline)) int __percpu_populate_mask(void *__pdata, size_t size, gfp_t gfp,
      cpumask_t *mask)
{
 return 0;
}

static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *__percpu_alloc_mask(size_t size, gfp_t gfp, cpumask_t *mask)
{
 return kzalloc(size, gfp);
}

static inline  __attribute__((always_inline)) void percpu_free(void *__pdata)
{
 kfree(__pdata);
}
# 6 "linux-2.6.26/include/linux/vmstat.h" 2
# 1 "linux-2.6.26/include/linux/mm.h" 1
# 7 "linux-2.6.26/include/linux/vmstat.h" 2

# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 9 "linux-2.6.26/include/linux/vmstat.h" 2
# 31 "linux-2.6.26/include/linux/vmstat.h"
enum vm_event_item { PGPGIN, PGPGOUT, PSWPIN, PSWPOUT,
  PGALLOC_NORMAL , PGALLOC_MOVABLE,
  PGFREE, PGACTIVATE, PGDEACTIVATE,
  PGFAULT, PGMAJFAULT,
  PGREFILL_NORMAL , PGREFILL_MOVABLE,
  PGSTEAL_NORMAL , PGSTEAL_MOVABLE,
  PGSCAN_KSWAPD_NORMAL , PGSCAN_KSWAPD_MOVABLE,
  PGSCAN_DIRECT_NORMAL , PGSCAN_DIRECT_MOVABLE,
  PGINODESTEAL, SLABS_SCANNED, KSWAPD_STEAL, KSWAPD_INODESTEAL,
  PAGEOUTRUN, ALLOCSTALL, PGROTATED,



  NR_VM_EVENT_ITEMS
};
# 98 "linux-2.6.26/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void count_vm_event(enum vm_event_item item)
{
}
static inline  __attribute__((always_inline)) void count_vm_events(enum vm_event_item item, long delta)
{
}
static inline  __attribute__((always_inline)) void __count_vm_event(enum vm_event_item item)
{
}
static inline  __attribute__((always_inline)) void __count_vm_events(enum vm_event_item item, long delta)
{
}
static inline  __attribute__((always_inline)) void all_vm_events(unsigned long *ret)
{
}
static inline  __attribute__((always_inline)) void vm_events_fold_cpu(int cpu)
{
}
# 126 "linux-2.6.26/include/linux/vmstat.h"
typedef  atomic_long_t  _GLOBAL_97_T; extern  _GLOBAL_97_T  vm_stat [ NR_VM_ZONE_STAT_ITEMS ] ;   

static inline  __attribute__((always_inline)) void zone_page_state_add(long x, struct zone *zone,
     enum zone_stat_item item)
{
 atomic_long_add(x, &zone->vm_stat[item]);
 atomic_long_add(x, &vm_stat[item]);
}

static inline  __attribute__((always_inline)) unsigned long global_page_state(enum zone_stat_item item)
{
 long x = atomic_long_read(&vm_stat[item]);




 return x;
}

static inline  __attribute__((always_inline)) unsigned long zone_page_state(struct zone *zone,
     enum zone_stat_item item)
{
 long x = atomic_long_read(&zone->vm_stat[item]);




 return x;
}
# 198 "linux-2.6.26/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void zap_zone_vm_stats(struct zone *zone)
{
 memset(zone->vm_stat, 0, sizeof(zone->vm_stat));
}

extern void inc_zone_state(struct zone *, enum zone_stat_item);
# 226 "linux-2.6.26/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void __mod_zone_page_state(struct zone *zone,
   enum zone_stat_item item, int delta)
{
 zone_page_state_add(delta, zone, item);
}

static inline  __attribute__((always_inline)) void __inc_zone_state(struct zone *zone, enum zone_stat_item item)
{
 atomic_long_inc(&zone->vm_stat[item]);
 atomic_long_inc(&vm_stat[item]);
}

static inline  __attribute__((always_inline)) void __inc_zone_page_state(struct page *page,
   enum zone_stat_item item)
{
 __inc_zone_state(page_zone(page), item);
}

static inline  __attribute__((always_inline)) void __dec_zone_state(struct zone *zone, enum zone_stat_item item)
{
 atomic_long_dec(&zone->vm_stat[item]);
 atomic_long_dec(&vm_stat[item]);
}

static inline  __attribute__((always_inline)) void __dec_zone_page_state(struct page *page,
   enum zone_stat_item item)
{
 __dec_zone_state(page_zone(page), item);
}
# 264 "linux-2.6.26/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void refresh_cpu_vm_stats(int cpu) { }
# 579 "linux-2.6.26/include/linux/mm.h" 2

static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *lowmem_page_address(struct page *page)
{
 return ((void *)((unsigned long)(((unsigned long)((page) - mem_map) + (0UL)) << 12)+((unsigned long)(0xffff810000000000UL))));
}
# 621 "linux-2.6.26/include/linux/mm.h"
extern struct address_space swapper_space;
static inline  __attribute__((always_inline)) struct address_space *page_mapping(struct page *page)
{
 struct address_space *mapping = page->mapping;

 do { } while(0);





 if (__builtin_expect(!!((unsigned long)mapping & 1), 0))
  mapping = ((void *)0);
 return mapping;
}

static inline  __attribute__((always_inline)) int PageAnon(struct page *page)
{
 return ((unsigned long)page->mapping & 1) != 0;
}





static inline  __attribute__((always_inline)) unsigned long page_index(struct page *page)
{
 if (__builtin_expect(!!(PageSwapCache(page)), 0))
  return ((page)->private);
 return page->index;
}






static inline  __attribute__((always_inline)) void reset_page_mapcount(struct page *page)
{
 (((&(page)->_mapcount)->counter) = (-1));
}

static inline  __attribute__((always_inline)) int page_mapcount(struct page *page)
{
 return ((&(page)->_mapcount)->counter) + 1;
}




static inline  __attribute__((always_inline)) int page_mapped(struct page *page)
{
 return ((&(page)->_mapcount)->counter) >= 0;
}
# 703 "linux-2.6.26/include/linux/mm.h"
extern void show_free_areas(void);




static inline  __attribute__((always_inline)) int shmem_lock(struct file *file, int lock,
        struct user_struct *user)
{
 return 0;
}

struct file *shmem_file_setup(char *name, loff_t size, unsigned long flags);

int shmem_zero_setup(struct vm_area_struct *);


extern unsigned long shmem_get_unmapped_area(struct file *file,
          unsigned long addr,
          unsigned long len,
          unsigned long pgoff,
          unsigned long flags);


extern int can_do_mlock(void);
extern int user_shm_lock(size_t, struct user_struct *);
extern void user_shm_unlock(size_t, struct user_struct *);




struct zap_details {
 struct vm_area_struct *nonlinear_vma;
 struct address_space *check_mapping;
 unsigned long first_index;
 unsigned long last_index;
 spinlock_t *i_mmap_lock;
 unsigned long truncate_count;
};

struct page *vm_normal_page(struct vm_area_struct *vma, unsigned long addr,
  pte_t pte);

unsigned long zap_page_range(struct vm_area_struct *vma, unsigned long address,
  unsigned long size, struct zap_details *);
unsigned long unmap_vmas(struct mmu_gather **tlb,
  struct vm_area_struct *start_vma, unsigned long start_addr,
  unsigned long end_addr, unsigned long *nr_accounted,
  struct zap_details *);
# 762 "linux-2.6.26/include/linux/mm.h"
struct mm_walk {
 int (*pgd_entry)(pgd_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pud_entry)(pud_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pmd_entry)(pmd_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pte_entry)(pte_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pte_hole)(unsigned long, unsigned long, struct mm_walk *);
 struct mm_struct *mm;
 void *private;
};

int walk_page_range(unsigned long addr, unsigned long end,
  struct mm_walk *walk);
void free_pgd_range(struct mmu_gather **tlb, unsigned long addr,
  unsigned long end, unsigned long floor, unsigned long ceiling);
void free_pgtables(struct mmu_gather **tlb, struct vm_area_struct *start_vma,
  unsigned long floor, unsigned long ceiling);
int copy_page_range(struct mm_struct *dst, struct mm_struct *src,
   struct vm_area_struct *vma);
void unmap_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen, int even_cows);

static inline  __attribute__((always_inline)) void unmap_shared_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen)
{
 unmap_mapping_range(mapping, holebegin, holelen, 0);
}

extern int vmtruncate(struct inode * inode, loff_t offset);
extern int vmtruncate_range(struct inode * inode, loff_t offset, loff_t end);





static inline  __attribute__((always_inline)) int handle_mm_fault(struct mm_struct *mm,
   struct vm_area_struct *vma, unsigned long address,
   int write_access)
{

 do { asm volatile("ud2"); for (;;) ; } while (0);
 return 0x0002;
}


extern int make_pages_present(unsigned long addr, unsigned long end);
extern int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf, int len, int write);

int get_user_pages(struct task_struct *tsk, struct mm_struct *mm, unsigned long start,
  int len, int write, int force, struct page **pages, struct vm_area_struct **vmas);
void print_bad_pte(struct vm_area_struct *, pte_t, unsigned long);

extern int try_to_release_page(struct page * page, gfp_t gfp_mask);
extern void do_invalidatepage(struct page *page, unsigned long offset);

int __set_page_dirty_nobuffers(struct page *page);
int __set_page_dirty_no_writeback(struct page *page);
int redirty_page_for_writepage(struct writeback_control *wbc,
    struct page *page);
int set_page_dirty(struct page *page);
int set_page_dirty_lock(struct page *page);
int clear_page_dirty_for_io(struct page *page);

extern unsigned long move_page_tables(struct vm_area_struct *vma,
  unsigned long old_addr, struct vm_area_struct *new_vma,
  unsigned long new_addr, unsigned long len);
extern unsigned long do_mremap(unsigned long addr,
          unsigned long old_len, unsigned long new_len,
          unsigned long flags, unsigned long new_addr);
extern int mprotect_fixup(struct vm_area_struct *vma,
     struct vm_area_struct **pprev, unsigned long start,
     unsigned long end, unsigned long newflags);
# 849 "linux-2.6.26/include/linux/mm.h"
struct shrinker {
 int (*shrink)(int nr_to_scan, gfp_t gfp_mask);
 int seeks;


 struct list_head list;
 long nr;
};

extern void register_shrinker(struct shrinker *);
extern void unregister_shrinker(struct shrinker *);

int vma_wants_writenotify(struct vm_area_struct *vma);

extern pte_t *get_locked_pte(struct mm_struct *mm, unsigned long addr, spinlock_t **ptl);
# 872 "linux-2.6.26/include/linux/mm.h"
int __pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address);
# 882 "linux-2.6.26/include/linux/mm.h"
int __pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address);


int __pte_alloc(struct mm_struct *mm, pmd_t *pmd, unsigned long address);
int __pte_alloc_kernel(pmd_t *pmd, unsigned long address);
# 928 "linux-2.6.26/include/linux/mm.h"
static inline  __attribute__((always_inline)) void pgtable_page_ctor(struct page *page)
{
 do { do { *(&((page)->ptl)) = (spinlock_t) { .raw_lock = { }, }; } while (0); } while (0);
 __inc_zone_page_state(page, NR_PAGETABLE);
}

static inline  __attribute__((always_inline)) void pgtable_page_dtor(struct page *page)
{
 ((page)->mapping = ((void *)0));
 __dec_zone_page_state(page, NR_PAGETABLE);
}
# 966 "linux-2.6.26/include/linux/mm.h"
extern void free_area_init(unsigned long * zones_size);
extern void free_area_init_node(int nid, pg_data_t *pgdat,
 unsigned long * zones_size, unsigned long zone_start_pfn,
 unsigned long *zholes_size);
# 1019 "linux-2.6.26/include/linux/mm.h"
extern void set_dma_reserve(unsigned long new_dma_reserve);
extern void memmap_init_zone(unsigned long, int, unsigned long,
    unsigned long, enum memmap_context);
extern void setup_per_zone_pages_min(void);
extern void mem_init(void);
extern void show_mem(void);
extern void si_meminfo(struct sysinfo * val);
extern void si_meminfo_node(struct sysinfo *val, int nid);




static inline  __attribute__((always_inline)) void setup_per_cpu_pageset(void) {}



void vma_prio_tree_add(struct vm_area_struct *, struct vm_area_struct *old);
void vma_prio_tree_insert(struct vm_area_struct *, struct prio_tree_root *);
void vma_prio_tree_remove(struct vm_area_struct *, struct prio_tree_root *);
struct vm_area_struct *vma_prio_tree_next(struct vm_area_struct *vma,
 struct prio_tree_iter *iter);





static inline  __attribute__((always_inline)) void vma_nonlinear_insert(struct vm_area_struct *vma,
     struct list_head *list)
{
 vma->shared.vm_set.parent = ((void *)0);
 list_add_tail(&vma->shared.vm_set.list, list);
}


extern int __vm_enough_memory(struct mm_struct *mm, long pages, int cap_sys_admin);
extern void vma_adjust(struct vm_area_struct *vma, unsigned long start,
 unsigned long end, unsigned long pgoff, struct vm_area_struct *insert);
extern struct vm_area_struct *vma_merge(struct mm_struct *,
 struct vm_area_struct *prev, unsigned long addr, unsigned long end,
 unsigned long vm_flags, struct anon_vma *, struct file *, unsigned long,
 struct mempolicy *);
extern struct anon_vma *find_mergeable_anon_vma(struct vm_area_struct *);
extern int split_vma(struct mm_struct *,
 struct vm_area_struct *, unsigned long addr, int new_below);
extern int insert_vm_struct(struct mm_struct *, struct vm_area_struct *);
extern void __vma_link_rb(struct mm_struct *, struct vm_area_struct *,
 struct rb_node **, struct rb_node *);
extern void unlink_file_vma(struct vm_area_struct *);
extern struct vm_area_struct *copy_vma(struct vm_area_struct **,
 unsigned long addr, unsigned long len, unsigned long pgoff);
extern void exit_mmap(struct mm_struct *);






static inline  __attribute__((always_inline)) void added_exe_file_vma(struct mm_struct *mm)
{}

static inline  __attribute__((always_inline)) void removed_exe_file_vma(struct mm_struct *mm)
{}


extern int may_expand_vm(struct mm_struct *mm, unsigned long npages);
extern int install_special_mapping(struct mm_struct *mm,
       unsigned long addr, unsigned long len,
       unsigned long flags, struct page **pages);

extern unsigned long get_unmapped_area(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);

extern unsigned long do_mmap_pgoff(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long pgoff);
extern unsigned long mmap_region(struct file *file, unsigned long addr,
 unsigned long len, unsigned long flags,
 unsigned int vm_flags, unsigned long pgoff,
 int accountable);

static inline  __attribute__((always_inline)) unsigned long do_mmap(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long offset)
{
 unsigned long ret = -22;
 if ((offset + (((len)+((1UL) << 12)-1)&(~(((1UL) << 12)-1)))) < offset)
  goto out;
 if (!(offset & ~(~(((1UL) << 12)-1))))
  ret = do_mmap_pgoff(file, addr, len, prot, flag, offset >> 12);
out:
 return ret;
}

extern int do_munmap(struct mm_struct *, unsigned long, size_t);

extern unsigned long do_brk(unsigned long, unsigned long);


extern unsigned long page_unuse(struct page *);
extern void truncate_inode_pages(struct address_space *, loff_t);
extern void truncate_inode_pages_range(struct address_space *,
           loff_t lstart, loff_t lend);


extern int filemap_fault(struct vm_area_struct *, struct vm_fault *);


int write_one_page(struct page *page, int wait);





int do_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);
int force_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);

void page_cache_sync_readahead(struct address_space *mapping,
          struct file_ra_state *ra,
          struct file *filp,
          unsigned long offset,
          unsigned long size);

void page_cache_async_readahead(struct address_space *mapping,
    struct file_ra_state *ra,
    struct file *filp,
    struct page *pg,
    unsigned long offset,
    unsigned long size);

unsigned long max_sane_readahead(unsigned long nr);


extern int expand_stack(struct vm_area_struct *vma, unsigned long address);



extern int expand_stack_downwards(struct vm_area_struct *vma,
      unsigned long address);


extern struct vm_area_struct * find_vma(struct mm_struct * mm, unsigned long addr);
extern struct vm_area_struct * find_vma_prev(struct mm_struct * mm, unsigned long addr,
          struct vm_area_struct **pprev);



static inline  __attribute__((always_inline)) struct vm_area_struct * find_vma_intersection(struct mm_struct * mm, unsigned long start_addr, unsigned long end_addr)
{
 struct vm_area_struct * vma = find_vma(mm,start_addr);

 if (vma && end_addr <= vma->vm_start)
  vma = ((void *)0);
 return vma;
}

static inline  __attribute__((always_inline)) unsigned long vma_pages(struct vm_area_struct *vma)
{
 return (vma->vm_end - vma->vm_start) >> 12;
}

pgprot_t vm_get_page_prot(unsigned long vm_flags);
struct vm_area_struct *find_extend_vma(struct mm_struct *, unsigned long addr);
int remap_pfn_range(struct vm_area_struct *, unsigned long addr,
   unsigned long pfn, unsigned long size, pgprot_t);
int vm_insert_page(struct vm_area_struct *, unsigned long addr, struct page *);
int vm_insert_pfn(struct vm_area_struct *vma, unsigned long addr,
   unsigned long pfn);
int vm_insert_mixed(struct vm_area_struct *vma, unsigned long addr,
   unsigned long pfn);

struct page *follow_page(struct vm_area_struct *, unsigned long address,
   unsigned int foll_flags);





typedef int (*pte_fn_t)(pte_t *pte, pgtable_t token, unsigned long addr,
   void *data);
extern int apply_to_page_range(struct mm_struct *mm, unsigned long address,
          unsigned long size, pte_fn_t fn, void *data);




static inline  __attribute__((always_inline)) void vm_stat_account(struct mm_struct *mm,
   unsigned long flags, struct file *file, long pages)
{
}
# 1224 "linux-2.6.26/include/linux/mm.h"
static inline  __attribute__((always_inline)) void
kernel_map_pages(struct page *page, int numpages, int enable) {}
static inline  __attribute__((always_inline)) void enable_debug_pagealloc(void)
{
}





extern struct vm_area_struct *get_gate_vma(struct task_struct *tsk);

int in_gate_area_no_task(unsigned long addr);
int in_gate_area(struct task_struct *task, unsigned long addr);





int drop_caches_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
unsigned long shrink_slab(unsigned long scanned, gfp_t gfp_mask,
   unsigned long lru_pages);







const char * arch_vma_name(struct vm_area_struct *vma);
void print_vma_addr(char *prefix, unsigned long rip);

struct page *sparse_mem_map_populate(unsigned long pnum, int nid);
pgd_t *vmemmap_pgd_populate(unsigned long addr, int node);
pud_t *vmemmap_pud_populate(pgd_t *pgd, unsigned long addr, int node);
pmd_t *vmemmap_pmd_populate(pud_t *pud, unsigned long addr, int node);
pte_t *vmemmap_pte_populate(pmd_t *pmd, unsigned long addr, int node);
void *vmemmap_alloc_block(unsigned long size, int node);
void vmemmap_verify(pte_t *, int, unsigned long, unsigned long);
int vmemmap_populate_basepages(struct page *start_page,
      unsigned long pages, int node);
int vmemmap_populate(struct page *start_page, unsigned long pages, int node);
void vmemmap_populate_print_last(void);
# 16 "linux-2.6.26/net/sysctl_net.c" 2
# 1 "linux-2.6.26/include/linux/sysctl.h" 1
# 32 "linux-2.6.26/include/linux/sysctl.h"
struct file;
struct completion;






struct __sysctl_args {
 int *name;
 int nlen;
 void *oldval;
 size_t *oldlenp;
 void *newval;
 size_t newlen;
 unsigned long __unused[4];
};
# 60 "linux-2.6.26/include/linux/sysctl.h"
enum
{
 CTL_KERN=1,
 CTL_VM=2,
 CTL_NET=3,
 CTL_PROC=4,
 CTL_FS=5,
 CTL_DEBUG=6,
 CTL_DEV=7,
 CTL_BUS=8,
 CTL_ABI=9,
 CTL_CPU=10,
 CTL_ARLAN=254,
 CTL_S390DBF=5677,
 CTL_SUNRPC=7249,
 CTL_PM=9899,
 CTL_FRV=9898,
};


enum
{
 CTL_BUS_ISA=1
};


enum
{
 INOTIFY_MAX_USER_INSTANCES=1,
 INOTIFY_MAX_USER_WATCHES=2,
 INOTIFY_MAX_QUEUED_EVENTS=3
};


enum
{
 KERN_OSTYPE=1,
 KERN_OSRELEASE=2,
 KERN_OSREV=3,
 KERN_VERSION=4,
 KERN_SECUREMASK=5,
 KERN_PROF=6,
 KERN_NODENAME=7,
 KERN_DOMAINNAME=8,

 KERN_PANIC=15,
 KERN_REALROOTDEV=16,

 KERN_SPARC_REBOOT=21,
 KERN_CTLALTDEL=22,
 KERN_PRINTK=23,
 KERN_NAMETRANS=24,
 KERN_PPC_HTABRECLAIM=25,
 KERN_PPC_ZEROPAGED=26,
 KERN_PPC_POWERSAVE_NAP=27,
 KERN_MODPROBE=28,
 KERN_SG_BIG_BUFF=29,
 KERN_ACCT=30,
 KERN_PPC_L2CR=31,

 KERN_RTSIGNR=32,
 KERN_RTSIGMAX=33,

 KERN_SHMMAX=34,
 KERN_MSGMAX=35,
 KERN_MSGMNB=36,
 KERN_MSGPOOL=37,
 KERN_SYSRQ=38,
 KERN_MAX_THREADS=39,
  KERN_RANDOM=40,
  KERN_SHMALL=41,
  KERN_MSGMNI=42,
  KERN_SEM=43,
  KERN_SPARC_STOP_A=44,
  KERN_SHMMNI=45,
 KERN_OVERFLOWUID=46,
 KERN_OVERFLOWGID=47,
 KERN_SHMPATH=48,
 KERN_HOTPLUG=49,
 KERN_IEEE_EMULATION_WARNINGS=50,
 KERN_S390_USER_DEBUG_LOGGING=51,
 KERN_CORE_USES_PID=52,
 KERN_TAINTED=53,
 KERN_CADPID=54,
 KERN_PIDMAX=55,
   KERN_CORE_PATTERN=56,
 KERN_PANIC_ON_OOPS=57,
 KERN_HPPA_PWRSW=58,
 KERN_HPPA_UNALIGNED=59,
 KERN_PRINTK_RATELIMIT=60,
 KERN_PRINTK_RATELIMIT_BURST=61,
 KERN_PTY=62,
 KERN_NGROUPS_MAX=63,
 KERN_SPARC_SCONS_PWROFF=64,
 KERN_HZ_TIMER=65,
 KERN_UNKNOWN_NMI_PANIC=66,
 KERN_BOOTLOADER_TYPE=67,
 KERN_RANDOMIZE=68,
 KERN_SETUID_DUMPABLE=69,
 KERN_SPIN_RETRY=70,
 KERN_ACPI_VIDEO_FLAGS=71,
 KERN_IA64_UNALIGNED=72,
 KERN_COMPAT_LOG=73,
 KERN_MAX_LOCK_DEPTH=74,
 KERN_NMI_WATCHDOG=75,
 KERN_PANIC_ON_NMI=76,
};




enum
{
 VM_UNUSED1=1,
 VM_UNUSED2=2,
 VM_UNUSED3=3,
 VM_UNUSED4=4,
 VM_OVERCOMMIT_MEMORY=5,
 VM_UNUSED5=6,
 VM_UNUSED7=7,
 VM_UNUSED8=8,
 VM_UNUSED9=9,
 VM_PAGE_CLUSTER=10,
 VM_DIRTY_BACKGROUND=11,
 VM_DIRTY_RATIO=12,
 VM_DIRTY_WB_CS=13,
 VM_DIRTY_EXPIRE_CS=14,
 VM_NR_PDFLUSH_THREADS=15,
 VM_OVERCOMMIT_RATIO=16,
 VM_PAGEBUF=17,
 VM_HUGETLB_PAGES=18,
 VM_SWAPPINESS=19,
 VM_LOWMEM_RESERVE_RATIO=20,
 VM_MIN_FREE_KBYTES=21,
 VM_MAX_MAP_COUNT=22,
 VM_LAPTOP_MODE=23,
 VM_BLOCK_DUMP=24,
 VM_HUGETLB_GROUP=25,
 VM_VFS_CACHE_PRESSURE=26,
 VM_LEGACY_VA_LAYOUT=27,
 VM_SWAP_TOKEN_TIMEOUT=28,
 VM_DROP_PAGECACHE=29,
 VM_PERCPU_PAGELIST_FRACTION=30,
 VM_ZONE_RECLAIM_MODE=31,
 VM_MIN_UNMAPPED=32,
 VM_PANIC_ON_OOM=33,
 VM_VDSO_ENABLED=34,
 VM_MIN_SLAB=35,
};



enum
{
 NET_CORE=1,
 NET_ETHER=2,
 NET_802=3,
 NET_UNIX=4,
 NET_IPV4=5,
 NET_IPX=6,
 NET_ATALK=7,
 NET_NETROM=8,
 NET_AX25=9,
 NET_BRIDGE=10,
 NET_ROSE=11,
 NET_IPV6=12,
 NET_X25=13,
 NET_TR=14,
 NET_DECNET=15,
 NET_ECONET=16,
 NET_SCTP=17,
 NET_LLC=18,
 NET_NETFILTER=19,
 NET_DCCP=20,
 NET_IRDA=412,
};


enum
{
 RANDOM_POOLSIZE=1,
 RANDOM_ENTROPY_COUNT=2,
 RANDOM_READ_THRESH=3,
 RANDOM_WRITE_THRESH=4,
 RANDOM_BOOT_ID=5,
 RANDOM_UUID=6
};


enum
{
 PTY_MAX=1,
 PTY_NR=2
};


enum
{
 BUS_ISA_MEM_BASE=1,
 BUS_ISA_PORT_BASE=2,
 BUS_ISA_PORT_SHIFT=3
};


enum
{
 NET_CORE_WMEM_MAX=1,
 NET_CORE_RMEM_MAX=2,
 NET_CORE_WMEM_DEFAULT=3,
 NET_CORE_RMEM_DEFAULT=4,

 NET_CORE_MAX_BACKLOG=6,
 NET_CORE_FASTROUTE=7,
 NET_CORE_MSG_COST=8,
 NET_CORE_MSG_BURST=9,
 NET_CORE_OPTMEM_MAX=10,
 NET_CORE_HOT_LIST_LENGTH=11,
 NET_CORE_DIVERT_VERSION=12,
 NET_CORE_NO_CONG_THRESH=13,
 NET_CORE_NO_CONG=14,
 NET_CORE_LO_CONG=15,
 NET_CORE_MOD_CONG=16,
 NET_CORE_DEV_WEIGHT=17,
 NET_CORE_SOMAXCONN=18,
 NET_CORE_BUDGET=19,
 NET_CORE_AEVENT_ETIME=20,
 NET_CORE_AEVENT_RSEQTH=21,
 NET_CORE_WARNINGS=22,
};







enum
{
 NET_UNIX_DESTROY_DELAY=1,
 NET_UNIX_DELETE_DELAY=2,
 NET_UNIX_MAX_DGRAM_QLEN=3,
};


enum
{
 NET_NF_CONNTRACK_MAX=1,
 NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_NF_CONNTRACK_BUCKETS=14,
 NET_NF_CONNTRACK_LOG_INVALID=15,
 NET_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_NF_CONNTRACK_TCP_LOOSE=17,
 NET_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_NF_CONNTRACK_TCP_MAX_RETRANS=19,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_NF_CONNTRACK_COUNT=27,
 NET_NF_CONNTRACK_ICMPV6_TIMEOUT=28,
 NET_NF_CONNTRACK_FRAG6_TIMEOUT=29,
 NET_NF_CONNTRACK_FRAG6_LOW_THRESH=30,
 NET_NF_CONNTRACK_FRAG6_HIGH_THRESH=31,
 NET_NF_CONNTRACK_CHECKSUM=32,
};


enum
{

 NET_IPV4_FORWARD=8,
 NET_IPV4_DYNADDR=9,

 NET_IPV4_CONF=16,
 NET_IPV4_NEIGH=17,
 NET_IPV4_ROUTE=18,
 NET_IPV4_FIB_HASH=19,
 NET_IPV4_NETFILTER=20,

 NET_IPV4_TCP_TIMESTAMPS=33,
 NET_IPV4_TCP_WINDOW_SCALING=34,
 NET_IPV4_TCP_SACK=35,
 NET_IPV4_TCP_RETRANS_COLLAPSE=36,
 NET_IPV4_DEFAULT_TTL=37,
 NET_IPV4_AUTOCONFIG=38,
 NET_IPV4_NO_PMTU_DISC=39,
 NET_IPV4_TCP_SYN_RETRIES=40,
 NET_IPV4_IPFRAG_HIGH_THRESH=41,
 NET_IPV4_IPFRAG_LOW_THRESH=42,
 NET_IPV4_IPFRAG_TIME=43,
 NET_IPV4_TCP_MAX_KA_PROBES=44,
 NET_IPV4_TCP_KEEPALIVE_TIME=45,
 NET_IPV4_TCP_KEEPALIVE_PROBES=46,
 NET_IPV4_TCP_RETRIES1=47,
 NET_IPV4_TCP_RETRIES2=48,
 NET_IPV4_TCP_FIN_TIMEOUT=49,
 NET_IPV4_IP_MASQ_DEBUG=50,
 NET_TCP_SYNCOOKIES=51,
 NET_TCP_STDURG=52,
 NET_TCP_RFC1337=53,
 NET_TCP_SYN_TAILDROP=54,
 NET_TCP_MAX_SYN_BACKLOG=55,
 NET_IPV4_LOCAL_PORT_RANGE=56,
 NET_IPV4_ICMP_ECHO_IGNORE_ALL=57,
 NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS=58,
 NET_IPV4_ICMP_SOURCEQUENCH_RATE=59,
 NET_IPV4_ICMP_DESTUNREACH_RATE=60,
 NET_IPV4_ICMP_TIMEEXCEED_RATE=61,
 NET_IPV4_ICMP_PARAMPROB_RATE=62,
 NET_IPV4_ICMP_ECHOREPLY_RATE=63,
 NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES=64,
 NET_IPV4_IGMP_MAX_MEMBERSHIPS=65,
 NET_TCP_TW_RECYCLE=66,
 NET_IPV4_ALWAYS_DEFRAG=67,
 NET_IPV4_TCP_KEEPALIVE_INTVL=68,
 NET_IPV4_INET_PEER_THRESHOLD=69,
 NET_IPV4_INET_PEER_MINTTL=70,
 NET_IPV4_INET_PEER_MAXTTL=71,
 NET_IPV4_INET_PEER_GC_MINTIME=72,
 NET_IPV4_INET_PEER_GC_MAXTIME=73,
 NET_TCP_ORPHAN_RETRIES=74,
 NET_TCP_ABORT_ON_OVERFLOW=75,
 NET_TCP_SYNACK_RETRIES=76,
 NET_TCP_MAX_ORPHANS=77,
 NET_TCP_MAX_TW_BUCKETS=78,
 NET_TCP_FACK=79,
 NET_TCP_REORDERING=80,
 NET_TCP_ECN=81,
 NET_TCP_DSACK=82,
 NET_TCP_MEM=83,
 NET_TCP_WMEM=84,
 NET_TCP_RMEM=85,
 NET_TCP_APP_WIN=86,
 NET_TCP_ADV_WIN_SCALE=87,
 NET_IPV4_NONLOCAL_BIND=88,
 NET_IPV4_ICMP_RATELIMIT=89,
 NET_IPV4_ICMP_RATEMASK=90,
 NET_TCP_TW_REUSE=91,
 NET_TCP_FRTO=92,
 NET_TCP_LOW_LATENCY=93,
 NET_IPV4_IPFRAG_SECRET_INTERVAL=94,
 NET_IPV4_IGMP_MAX_MSF=96,
 NET_TCP_NO_METRICS_SAVE=97,
 NET_TCP_DEFAULT_WIN_SCALE=105,
 NET_TCP_MODERATE_RCVBUF=106,
 NET_TCP_TSO_WIN_DIVISOR=107,
 NET_TCP_BIC_BETA=108,
 NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR=109,
 NET_TCP_CONG_CONTROL=110,
 NET_TCP_ABC=111,
 NET_IPV4_IPFRAG_MAX_DIST=112,
  NET_TCP_MTU_PROBING=113,
 NET_TCP_BASE_MSS=114,
 NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS=115,
 NET_TCP_DMA_COPYBREAK=116,
 NET_TCP_SLOW_START_AFTER_IDLE=117,
 NET_CIPSOV4_CACHE_ENABLE=118,
 NET_CIPSOV4_CACHE_BUCKET_SIZE=119,
 NET_CIPSOV4_RBM_OPTFMT=120,
 NET_CIPSOV4_RBM_STRICTVALID=121,
 NET_TCP_AVAIL_CONG_CONTROL=122,
 NET_TCP_ALLOWED_CONG_CONTROL=123,
 NET_TCP_MAX_SSTHRESH=124,
 NET_TCP_FRTO_RESPONSE=125,
};

enum {
 NET_IPV4_ROUTE_FLUSH=1,
 NET_IPV4_ROUTE_MIN_DELAY=2,
 NET_IPV4_ROUTE_MAX_DELAY=3,
 NET_IPV4_ROUTE_GC_THRESH=4,
 NET_IPV4_ROUTE_MAX_SIZE=5,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL=6,
 NET_IPV4_ROUTE_GC_TIMEOUT=7,
 NET_IPV4_ROUTE_GC_INTERVAL=8,
 NET_IPV4_ROUTE_REDIRECT_LOAD=9,
 NET_IPV4_ROUTE_REDIRECT_NUMBER=10,
 NET_IPV4_ROUTE_REDIRECT_SILENCE=11,
 NET_IPV4_ROUTE_ERROR_COST=12,
 NET_IPV4_ROUTE_ERROR_BURST=13,
 NET_IPV4_ROUTE_GC_ELASTICITY=14,
 NET_IPV4_ROUTE_MTU_EXPIRES=15,
 NET_IPV4_ROUTE_MIN_PMTU=16,
 NET_IPV4_ROUTE_MIN_ADVMSS=17,
 NET_IPV4_ROUTE_SECRET_INTERVAL=18,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS=19,
};

enum
{
 NET_PROTO_CONF_ALL=-2,
 NET_PROTO_CONF_DEFAULT=-3


};

enum
{
 NET_IPV4_CONF_FORWARDING=1,
 NET_IPV4_CONF_MC_FORWARDING=2,
 NET_IPV4_CONF_PROXY_ARP=3,
 NET_IPV4_CONF_ACCEPT_REDIRECTS=4,
 NET_IPV4_CONF_SECURE_REDIRECTS=5,
 NET_IPV4_CONF_SEND_REDIRECTS=6,
 NET_IPV4_CONF_SHARED_MEDIA=7,
 NET_IPV4_CONF_RP_FILTER=8,
 NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE=9,
 NET_IPV4_CONF_BOOTP_RELAY=10,
 NET_IPV4_CONF_LOG_MARTIANS=11,
 NET_IPV4_CONF_TAG=12,
 NET_IPV4_CONF_ARPFILTER=13,
 NET_IPV4_CONF_MEDIUM_ID=14,
 NET_IPV4_CONF_NOXFRM=15,
 NET_IPV4_CONF_NOPOLICY=16,
 NET_IPV4_CONF_FORCE_IGMP_VERSION=17,
 NET_IPV4_CONF_ARP_ANNOUNCE=18,
 NET_IPV4_CONF_ARP_IGNORE=19,
 NET_IPV4_CONF_PROMOTE_SECONDARIES=20,
 NET_IPV4_CONF_ARP_ACCEPT=21,
 __NET_IPV4_CONF_MAX
};


enum
{
 NET_IPV4_NF_CONNTRACK_MAX=1,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_IPV4_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_IPV4_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_IPV4_NF_CONNTRACK_BUCKETS=14,
 NET_IPV4_NF_CONNTRACK_LOG_INVALID=15,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_IPV4_NF_CONNTRACK_TCP_LOOSE=17,
 NET_IPV4_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_IPV4_NF_CONNTRACK_TCP_MAX_RETRANS=19,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_IPV4_NF_CONNTRACK_COUNT=27,
 NET_IPV4_NF_CONNTRACK_CHECKSUM=28,
};


enum {
 NET_IPV6_CONF=16,
 NET_IPV6_NEIGH=17,
 NET_IPV6_ROUTE=18,
 NET_IPV6_ICMP=19,
 NET_IPV6_BINDV6ONLY=20,
 NET_IPV6_IP6FRAG_HIGH_THRESH=21,
 NET_IPV6_IP6FRAG_LOW_THRESH=22,
 NET_IPV6_IP6FRAG_TIME=23,
 NET_IPV6_IP6FRAG_SECRET_INTERVAL=24,
 NET_IPV6_MLD_MAX_MSF=25,
};

enum {
 NET_IPV6_ROUTE_FLUSH=1,
 NET_IPV6_ROUTE_GC_THRESH=2,
 NET_IPV6_ROUTE_MAX_SIZE=3,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL=4,
 NET_IPV6_ROUTE_GC_TIMEOUT=5,
 NET_IPV6_ROUTE_GC_INTERVAL=6,
 NET_IPV6_ROUTE_GC_ELASTICITY=7,
 NET_IPV6_ROUTE_MTU_EXPIRES=8,
 NET_IPV6_ROUTE_MIN_ADVMSS=9,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL_MS=10
};

enum {
 NET_IPV6_FORWARDING=1,
 NET_IPV6_HOP_LIMIT=2,
 NET_IPV6_MTU=3,
 NET_IPV6_ACCEPT_RA=4,
 NET_IPV6_ACCEPT_REDIRECTS=5,
 NET_IPV6_AUTOCONF=6,
 NET_IPV6_DAD_TRANSMITS=7,
 NET_IPV6_RTR_SOLICITS=8,
 NET_IPV6_RTR_SOLICIT_INTERVAL=9,
 NET_IPV6_RTR_SOLICIT_DELAY=10,
 NET_IPV6_USE_TEMPADDR=11,
 NET_IPV6_TEMP_VALID_LFT=12,
 NET_IPV6_TEMP_PREFERED_LFT=13,
 NET_IPV6_REGEN_MAX_RETRY=14,
 NET_IPV6_MAX_DESYNC_FACTOR=15,
 NET_IPV6_MAX_ADDRESSES=16,
 NET_IPV6_FORCE_MLD_VERSION=17,
 NET_IPV6_ACCEPT_RA_DEFRTR=18,
 NET_IPV6_ACCEPT_RA_PINFO=19,
 NET_IPV6_ACCEPT_RA_RTR_PREF=20,
 NET_IPV6_RTR_PROBE_INTERVAL=21,
 NET_IPV6_ACCEPT_RA_RT_INFO_MAX_PLEN=22,
 NET_IPV6_PROXY_NDP=23,
 NET_IPV6_ACCEPT_SOURCE_ROUTE=25,
 __NET_IPV6_MAX
};


enum {
 NET_IPV6_ICMP_RATELIMIT=1
};


enum {
 NET_NEIGH_MCAST_SOLICIT=1,
 NET_NEIGH_UCAST_SOLICIT=2,
 NET_NEIGH_APP_SOLICIT=3,
 NET_NEIGH_RETRANS_TIME=4,
 NET_NEIGH_REACHABLE_TIME=5,
 NET_NEIGH_DELAY_PROBE_TIME=6,
 NET_NEIGH_GC_STALE_TIME=7,
 NET_NEIGH_UNRES_QLEN=8,
 NET_NEIGH_PROXY_QLEN=9,
 NET_NEIGH_ANYCAST_DELAY=10,
 NET_NEIGH_PROXY_DELAY=11,
 NET_NEIGH_LOCKTIME=12,
 NET_NEIGH_GC_INTERVAL=13,
 NET_NEIGH_GC_THRESH1=14,
 NET_NEIGH_GC_THRESH2=15,
 NET_NEIGH_GC_THRESH3=16,
 NET_NEIGH_RETRANS_TIME_MS=17,
 NET_NEIGH_REACHABLE_TIME_MS=18,
 __NET_NEIGH_MAX
};


enum {
 NET_DCCP_DEFAULT=1,
};


enum {
 NET_IPX_PPROP_BROADCASTING=1,
 NET_IPX_FORWARDING=2
};


enum {
 NET_LLC2=1,
 NET_LLC_STATION=2,
};


enum {
 NET_LLC2_TIMEOUT=1,
};


enum {
 NET_LLC_STATION_ACK_TIMEOUT=1,
};


enum {
 NET_LLC2_ACK_TIMEOUT=1,
 NET_LLC2_P_TIMEOUT=2,
 NET_LLC2_REJ_TIMEOUT=3,
 NET_LLC2_BUSY_TIMEOUT=4,
};


enum {
 NET_ATALK_AARP_EXPIRY_TIME=1,
 NET_ATALK_AARP_TICK_TIME=2,
 NET_ATALK_AARP_RETRANSMIT_LIMIT=3,
 NET_ATALK_AARP_RESOLVE_TIME=4
};



enum {
 NET_NETROM_DEFAULT_PATH_QUALITY=1,
 NET_NETROM_OBSOLESCENCE_COUNT_INITIALISER=2,
 NET_NETROM_NETWORK_TTL_INITIALISER=3,
 NET_NETROM_TRANSPORT_TIMEOUT=4,
 NET_NETROM_TRANSPORT_MAXIMUM_TRIES=5,
 NET_NETROM_TRANSPORT_ACKNOWLEDGE_DELAY=6,
 NET_NETROM_TRANSPORT_BUSY_DELAY=7,
 NET_NETROM_TRANSPORT_REQUESTED_WINDOW_SIZE=8,
 NET_NETROM_TRANSPORT_NO_ACTIVITY_TIMEOUT=9,
 NET_NETROM_ROUTING_CONTROL=10,
 NET_NETROM_LINK_FAILS_COUNT=11,
 NET_NETROM_RESET=12
};


enum {
 NET_AX25_IP_DEFAULT_MODE=1,
 NET_AX25_DEFAULT_MODE=2,
 NET_AX25_BACKOFF_TYPE=3,
 NET_AX25_CONNECT_MODE=4,
 NET_AX25_STANDARD_WINDOW=5,
 NET_AX25_EXTENDED_WINDOW=6,
 NET_AX25_T1_TIMEOUT=7,
 NET_AX25_T2_TIMEOUT=8,
 NET_AX25_T3_TIMEOUT=9,
 NET_AX25_IDLE_TIMEOUT=10,
 NET_AX25_N2=11,
 NET_AX25_PACLEN=12,
 NET_AX25_PROTOCOL=13,
 NET_AX25_DAMA_SLAVE_TIMEOUT=14
};


enum {
 NET_ROSE_RESTART_REQUEST_TIMEOUT=1,
 NET_ROSE_CALL_REQUEST_TIMEOUT=2,
 NET_ROSE_RESET_REQUEST_TIMEOUT=3,
 NET_ROSE_CLEAR_REQUEST_TIMEOUT=4,
 NET_ROSE_ACK_HOLD_BACK_TIMEOUT=5,
 NET_ROSE_ROUTING_CONTROL=6,
 NET_ROSE_LINK_FAIL_TIMEOUT=7,
 NET_ROSE_MAX_VCS=8,
 NET_ROSE_WINDOW_SIZE=9,
 NET_ROSE_NO_ACTIVITY_TIMEOUT=10
};


enum {
 NET_X25_RESTART_REQUEST_TIMEOUT=1,
 NET_X25_CALL_REQUEST_TIMEOUT=2,
 NET_X25_RESET_REQUEST_TIMEOUT=3,
 NET_X25_CLEAR_REQUEST_TIMEOUT=4,
 NET_X25_ACK_HOLD_BACK_TIMEOUT=5,
 NET_X25_FORWARD=6
};


enum
{
 NET_TR_RIF_TIMEOUT=1
};


enum {
 NET_DECNET_NODE_TYPE = 1,
 NET_DECNET_NODE_ADDRESS = 2,
 NET_DECNET_NODE_NAME = 3,
 NET_DECNET_DEFAULT_DEVICE = 4,
 NET_DECNET_TIME_WAIT = 5,
 NET_DECNET_DN_COUNT = 6,
 NET_DECNET_DI_COUNT = 7,
 NET_DECNET_DR_COUNT = 8,
 NET_DECNET_DST_GC_INTERVAL = 9,
 NET_DECNET_CONF = 10,
 NET_DECNET_NO_FC_MAX_CWND = 11,
 NET_DECNET_MEM = 12,
 NET_DECNET_RMEM = 13,
 NET_DECNET_WMEM = 14,
 NET_DECNET_DEBUG_LEVEL = 255
};


enum {
 NET_DECNET_CONF_LOOPBACK = -2,
 NET_DECNET_CONF_DDCMP = -3,
 NET_DECNET_CONF_PPP = -4,
 NET_DECNET_CONF_X25 = -5,
 NET_DECNET_CONF_GRE = -6,
 NET_DECNET_CONF_ETHER = -7


};


enum {
 NET_DECNET_CONF_DEV_PRIORITY = 1,
 NET_DECNET_CONF_DEV_T1 = 2,
 NET_DECNET_CONF_DEV_T2 = 3,
 NET_DECNET_CONF_DEV_T3 = 4,
 NET_DECNET_CONF_DEV_FORWARDING = 5,
 NET_DECNET_CONF_DEV_BLKSIZE = 6,
 NET_DECNET_CONF_DEV_STATE = 7
};


enum {
 NET_SCTP_RTO_INITIAL = 1,
 NET_SCTP_RTO_MIN = 2,
 NET_SCTP_RTO_MAX = 3,
 NET_SCTP_RTO_ALPHA = 4,
 NET_SCTP_RTO_BETA = 5,
 NET_SCTP_VALID_COOKIE_LIFE = 6,
 NET_SCTP_ASSOCIATION_MAX_RETRANS = 7,
 NET_SCTP_PATH_MAX_RETRANS = 8,
 NET_SCTP_MAX_INIT_RETRANSMITS = 9,
 NET_SCTP_HB_INTERVAL = 10,
 NET_SCTP_PRESERVE_ENABLE = 11,
 NET_SCTP_MAX_BURST = 12,
 NET_SCTP_ADDIP_ENABLE = 13,
 NET_SCTP_PRSCTP_ENABLE = 14,
 NET_SCTP_SNDBUF_POLICY = 15,
 NET_SCTP_SACK_TIMEOUT = 16,
 NET_SCTP_RCVBUF_POLICY = 17,
};


enum {
 NET_BRIDGE_NF_CALL_ARPTABLES = 1,
 NET_BRIDGE_NF_CALL_IPTABLES = 2,
 NET_BRIDGE_NF_CALL_IP6TABLES = 3,
 NET_BRIDGE_NF_FILTER_VLAN_TAGGED = 4,
 NET_BRIDGE_NF_FILTER_PPPOE_TAGGED = 5,
};


enum {
 NET_IRDA_DISCOVERY=1,
 NET_IRDA_DEVNAME=2,
 NET_IRDA_DEBUG=3,
 NET_IRDA_FAST_POLL=4,
 NET_IRDA_DISCOVERY_SLOTS=5,
 NET_IRDA_DISCOVERY_TIMEOUT=6,
 NET_IRDA_SLOT_TIMEOUT=7,
 NET_IRDA_MAX_BAUD_RATE=8,
 NET_IRDA_MIN_TX_TURN_TIME=9,
 NET_IRDA_MAX_TX_DATA_SIZE=10,
 NET_IRDA_MAX_TX_WINDOW=11,
 NET_IRDA_MAX_NOREPLY_TIME=12,
 NET_IRDA_WARN_NOREPLY_TIME=13,
 NET_IRDA_LAP_KEEPALIVE_TIME=14,
};



enum
{
 FS_NRINODE=1,
 FS_STATINODE=2,
 FS_MAXINODE=3,
 FS_NRDQUOT=4,
 FS_MAXDQUOT=5,
 FS_NRFILE=6,
 FS_MAXFILE=7,
 FS_DENTRY=8,
 FS_NRSUPER=9,
 FS_MAXSUPER=10,
 FS_OVERFLOWUID=11,
 FS_OVERFLOWGID=12,
 FS_LEASES=13,
 FS_DIR_NOTIFY=14,
 FS_LEASE_TIME=15,
 FS_DQSTATS=16,
 FS_XFS=17,
 FS_AIO_NR=18,
 FS_AIO_MAX_NR=19,
 FS_INOTIFY=20,
 FS_OCFS2=988,
};


enum {
 FS_DQ_LOOKUPS = 1,
 FS_DQ_DROPS = 2,
 FS_DQ_READS = 3,
 FS_DQ_WRITES = 4,
 FS_DQ_CACHE_HITS = 5,
 FS_DQ_ALLOCATED = 6,
 FS_DQ_FREE = 7,
 FS_DQ_SYNCS = 8,
 FS_DQ_WARNINGS = 9,
};




enum {
 DEV_CDROM=1,
 DEV_HWMON=2,
 DEV_PARPORT=3,
 DEV_RAID=4,
 DEV_MAC_HID=5,
 DEV_SCSI=6,
 DEV_IPMI=7,
};


enum {
 DEV_CDROM_INFO=1,
 DEV_CDROM_AUTOCLOSE=2,
 DEV_CDROM_AUTOEJECT=3,
 DEV_CDROM_DEBUG=4,
 DEV_CDROM_LOCK=5,
 DEV_CDROM_CHECK_MEDIA=6
};


enum {
 DEV_PARPORT_DEFAULT=-3
};


enum {
 DEV_RAID_SPEED_LIMIT_MIN=1,
 DEV_RAID_SPEED_LIMIT_MAX=2
};


enum {
 DEV_PARPORT_DEFAULT_TIMESLICE=1,
 DEV_PARPORT_DEFAULT_SPINTIME=2
};


enum {
 DEV_PARPORT_SPINTIME=1,
 DEV_PARPORT_BASE_ADDR=2,
 DEV_PARPORT_IRQ=3,
 DEV_PARPORT_DMA=4,
 DEV_PARPORT_MODES=5,
 DEV_PARPORT_DEVICES=6,
 DEV_PARPORT_AUTOPROBE=16
};


enum {
 DEV_PARPORT_DEVICES_ACTIVE=-3,
};


enum {
 DEV_PARPORT_DEVICE_TIMESLICE=1,
};


enum {
 DEV_MAC_HID_KEYBOARD_SENDS_LINUX_KEYCODES=1,
 DEV_MAC_HID_KEYBOARD_LOCK_KEYCODES=2,
 DEV_MAC_HID_MOUSE_BUTTON_EMULATION=3,
 DEV_MAC_HID_MOUSE_BUTTON2_KEYCODE=4,
 DEV_MAC_HID_MOUSE_BUTTON3_KEYCODE=5,
 DEV_MAC_HID_ADB_MOUSE_SENDS_KEYCODES=6
};


enum {
 DEV_SCSI_LOGGING_LEVEL=1,
};


enum {
 DEV_IPMI_POWEROFF_POWERCYCLE=1,
};


enum
{
 ABI_DEFHANDLER_COFF=1,
 ABI_DEFHANDLER_ELF=2,
 ABI_DEFHANDLER_LCALL7=3,
 ABI_DEFHANDLER_LIBCSO=4,
 ABI_TRACE=5,
 ABI_FAKE_UTSNAME=6,
};





struct ctl_table;
struct nsproxy;
struct ctl_table_root;

extern struct ctl_table_header *sysctl_head_next(struct ctl_table_header *prev);
extern struct ctl_table_header *__sysctl_head_next(struct nsproxy *namespaces,
      struct ctl_table_header *prev);
extern void sysctl_head_finish(struct ctl_table_header *prev);
extern int sysctl_perm(struct ctl_table_root *root,
  struct ctl_table *table, int op);

typedef struct ctl_table ctl_table;

typedef int ctl_handler (struct ctl_table *table, int *name, int nlen,
    void *oldval, size_t *oldlenp,
    void *newval, size_t newlen);

typedef int proc_handler (struct ctl_table *ctl, int write, struct file * filp,
     void *buffer, size_t *lenp, loff_t *ppos);

extern int proc_dostring(struct ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec(struct ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec_minmax(struct ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec_jiffies(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int proc_dointvec_userhz_jiffies(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int proc_dointvec_ms_jiffies(struct ctl_table *, int, struct file *,
        void *, size_t *, loff_t *);
extern int proc_doulongvec_minmax(struct ctl_table *, int, struct file *,
      void *, size_t *, loff_t *);
extern int proc_doulongvec_ms_jiffies_minmax(struct ctl_table *table, int,
          struct file *, void *, size_t *, loff_t *);

extern int do_sysctl (int *name, int nlen,
        void *oldval, size_t *oldlenp,
        void *newval, size_t newlen);

extern ctl_handler sysctl_data;
extern ctl_handler sysctl_string;
extern ctl_handler sysctl_intvec;
extern ctl_handler sysctl_jiffies;
extern ctl_handler sysctl_ms_jiffies;
# 1035 "linux-2.6.26/include/linux/sysctl.h"
struct ctl_table
{
 int ctl_name;
 const char *procname;
 void *data;
 int maxlen;
 mode_t mode;
 struct ctl_table *child;
 struct ctl_table *parent;
 proc_handler *proc_handler;
 ctl_handler *strategy;
 void *extra1;
 void *extra2;
};

struct ctl_table_root {
 struct list_head root_list;
 struct list_head header_list;
 struct list_head *(*lookup)(struct ctl_table_root *root,
        struct nsproxy *namespaces);
 int (*permissions)(struct ctl_table_root *root,
   struct nsproxy *namespaces, struct ctl_table *table);
};



struct ctl_table_header
{
 struct ctl_table *ctl_table;
 struct list_head ctl_entry;
 int used;
 struct completion *unregistering;
 struct ctl_table *ctl_table_arg;
 struct ctl_table_root *root;
};


struct ctl_path {
 const char *procname;
 int ctl_name;
};

void register_sysctl_root(struct ctl_table_root *root);
struct ctl_table_header *__register_sysctl_paths(
 struct ctl_table_root *root, struct nsproxy *namespaces,
 const struct ctl_path *path, struct ctl_table *table);
struct ctl_table_header *register_sysctl_table(struct ctl_table * table);
struct ctl_table_header *register_sysctl_paths(const struct ctl_path *path,
      struct ctl_table *table);

void unregister_sysctl_table(struct ctl_table_header * table);
int sysctl_check_table(struct nsproxy *namespaces, struct ctl_table *table);
# 17 "linux-2.6.26/net/sysctl_net.c" 2
# 1 "linux-2.6.26/include/linux/nsproxy.h" 1




# 1 "linux-2.6.26/include/linux/sched.h" 1
# 44 "linux-2.6.26/include/linux/sched.h"
struct sched_param {
 int sched_priority;
};



# 1 "linux-2.6.26/include/linux/capability.h" 1
# 18 "linux-2.6.26/include/linux/capability.h"
struct task_struct;
# 40 "linux-2.6.26/include/linux/capability.h"
typedef struct __user_cap_header_struct {
 __u32 version;
 int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct {
        __u32 effective;
        __u32 permitted;
        __u32 inheritable;
} *cap_user_data_t;
# 72 "linux-2.6.26/include/linux/capability.h"
struct vfs_cap_data {
 __le32 magic_etc;
 struct {
  __le32 permitted;
  __le32 inheritable;
 } data[2];
};
# 95 "linux-2.6.26/include/linux/capability.h"
typedef struct kernel_cap_struct {
 __u32 cap[2];
} kernel_cap_t;
# 416 "linux-2.6.26/include/linux/capability.h"
static inline  __attribute__((always_inline)) kernel_cap_t cap_combine(const kernel_cap_t a,
           const kernel_cap_t b)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] | b.cap[__capi]; } } while (0);
 return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_intersect(const kernel_cap_t a,
      const kernel_cap_t b)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] & b.cap[__capi]; } } while (0);
 return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_drop(const kernel_cap_t a,
        const kernel_cap_t drop)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] &~ drop.cap[__capi]; } } while (0);
 return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_invert(const kernel_cap_t c)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = ~ c.cap[__capi]; } } while (0);
 return dest;
}

static inline  __attribute__((always_inline)) int cap_isclear(const kernel_cap_t a)
{
 unsigned __capi;
 for (__capi = 0; __capi < 2; ++__capi) {
  if (a.cap[__capi] != 0)
   return 0;
 }
 return 1;
}

static inline  __attribute__((always_inline)) int cap_issubset(const kernel_cap_t a, const kernel_cap_t set)
{
 kernel_cap_t dest;
 dest = cap_drop(a, set);
 return cap_isclear(dest);
}



static inline  __attribute__((always_inline)) int cap_is_fs_cap(int cap)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))), ((1 << ((32) & 31))) } });
 return !!((1 << ((cap) & 31)) & __cap_fs_set.cap[((cap) >> 5)]);
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_drop_fs_set(const kernel_cap_t a)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))), ((1 << ((32) & 31))) } });
 return cap_drop(a, __cap_fs_set);
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_raise_fs_set(const kernel_cap_t a,
         const kernel_cap_t permitted)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))), ((1 << ((32) & 31))) } });
 return cap_combine(a,
      cap_intersect(permitted, __cap_fs_set));
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_drop_nfsd_set(const kernel_cap_t a)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31)))|(1 << ((24) & 31)), ((1 << ((32) & 31))) } });
 return cap_drop(a, __cap_fs_set);
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_raise_nfsd_set(const kernel_cap_t a,
           const kernel_cap_t permitted)
{
 const kernel_cap_t __cap_nfsd_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31)))|(1 << ((24) & 31)), ((1 << ((32) & 31))) } });
 return cap_combine(a,
      cap_intersect(permitted, __cap_nfsd_set));
}

typedef  const kernel_cap_t   _GLOBAL_98_T; extern  _GLOBAL_98_T  global___cap_empty_set[NUM_STACKS];    
typedef  const kernel_cap_t   _GLOBAL_99_T; extern  _GLOBAL_99_T  global___cap_full_set[NUM_STACKS];    
typedef  const kernel_cap_t   _GLOBAL_100_T; extern  _GLOBAL_100_T  global___cap_init_eff_set[NUM_STACKS];    

kernel_cap_t cap_set_effective(const kernel_cap_t pE_new);

int capable(int cap);
int __capable(struct task_struct *t, int cap);
# 51 "linux-2.6.26/include/linux/sched.h" 2
# 66 "linux-2.6.26/include/linux/sched.h"
# 1 "linux-2.6.26/include/asm/cputime.h" 1
# 1 "linux-2.6.26/include/asm-generic/cputime.h" 1






typedef unsigned long cputime_t;
# 24 "linux-2.6.26/include/asm-generic/cputime.h"
typedef u64 cputime64_t;
# 1 "linux-2.6.26/include/asm/cputime.h" 2
# 67 "linux-2.6.26/include/linux/sched.h" 2


# 1 "linux-2.6.26/include/linux/sem.h" 1



# 1 "linux-2.6.26/include/linux/ipc.h" 1
# 9 "linux-2.6.26/include/linux/ipc.h"
struct ipc_perm
{
 __kernel_key_t key;
 __kernel_uid_t uid;
 __kernel_gid_t gid;
 __kernel_uid_t cuid;
 __kernel_gid_t cgid;
 __kernel_mode_t mode;
 unsigned short seq;
};


# 1 "linux-2.6.26/include/asm/ipcbuf.h" 1
# 14 "linux-2.6.26/include/asm/ipcbuf.h"
struct ipc64_perm {
 __kernel_key_t key;
 __kernel_uid32_t uid;
 __kernel_gid32_t gid;
 __kernel_uid32_t cuid;
 __kernel_gid32_t cgid;
 __kernel_mode_t mode;
 unsigned short __pad1;
 unsigned short seq;
 unsigned short __pad2;
 unsigned long __unused1;
 unsigned long __unused2;
};
# 22 "linux-2.6.26/include/linux/ipc.h" 2
# 57 "linux-2.6.26/include/linux/ipc.h"
struct ipc_kludge {
 struct msgbuf *msgp;
 long msgtyp;
};
# 88 "linux-2.6.26/include/linux/ipc.h"
struct kern_ipc_perm
{
 spinlock_t lock;
 int deleted;
 int id;
 key_t key;
 uid_t uid;
 gid_t gid;
 uid_t cuid;
 gid_t cgid;
 mode_t mode;
 unsigned long seq;
 void *security;
};
# 5 "linux-2.6.26/include/linux/sem.h" 2
# 23 "linux-2.6.26/include/linux/sem.h"
struct semid_ds {
 struct ipc_perm sem_perm;
 __kernel_time_t sem_otime;
 __kernel_time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned short sem_nsems;
};


# 1 "linux-2.6.26/include/asm/sembuf.h" 1
# 13 "linux-2.6.26/include/asm/sembuf.h"
struct semid64_ds {
 struct ipc64_perm sem_perm;
 __kernel_time_t sem_otime;
 unsigned long __unused1;
 __kernel_time_t sem_ctime;
 unsigned long __unused2;
 unsigned long sem_nsems;
 unsigned long __unused3;
 unsigned long __unused4;
};
# 36 "linux-2.6.26/include/linux/sem.h" 2


struct sembuf {
 unsigned short sem_num;
 short sem_op;
 short sem_flg;
};


union semun {
 int val;
 struct semid_ds *buf;
 unsigned short *array;
 struct seminfo *__buf;
 void *__pad;
};

struct seminfo {
 int semmap;
 int semmni;
 int semmns;
 int semmnu;
 int semmsl;
 int semopm;
 int semume;
 int semusz;
 int semvmx;
 int semaem;
};
# 80 "linux-2.6.26/include/linux/sem.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 81 "linux-2.6.26/include/linux/sem.h" 2

struct task_struct;


struct sem {
 int semval;
 int sempid;
};


struct sem_array {
 struct kern_ipc_perm sem_perm;
 time_t sem_otime;
 time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned long sem_nsems;
};


struct sem_queue {
 struct sem_queue * next;
 struct sem_queue ** prev;
 struct task_struct* sleeper;
 struct sem_undo * undo;
 int pid;
 int status;
 struct sem_array * sma;
 int id;
 struct sembuf * sops;
 int nsops;
 int alter;
};




struct sem_undo {
 struct sem_undo * proc_next;
 struct sem_undo * id_next;
 int semid;
 short * semadj;
};




struct sem_undo_list {
 atomic_t refcnt;
 spinlock_t lock;
 struct sem_undo *proc_list;
};

struct sysv_sem {
 struct sem_undo_list *undo_list;
};







static inline  __attribute__((always_inline)) int copy_semundo(unsigned long clone_flags, struct task_struct *tsk)
{
 return 0;
}

static inline  __attribute__((always_inline)) void exit_sem(struct task_struct *tsk)
{
 return;
}
# 70 "linux-2.6.26/include/linux/sched.h" 2
# 1 "linux-2.6.26/include/linux/signal.h" 1



# 1 "linux-2.6.26/include/asm/signal.h" 1
# 10 "linux-2.6.26/include/asm/signal.h"
struct siginfo;
# 28 "linux-2.6.26/include/asm/signal.h"
typedef unsigned long old_sigset_t;

typedef struct {
 unsigned long sig[(64 / 64)];
} sigset_t;
# 120 "linux-2.6.26/include/asm/signal.h"
# 1 "linux-2.6.26/include/asm-generic/signal.h" 1
# 17 "linux-2.6.26/include/asm-generic/signal.h"
typedef void __signalfn_t(int);
typedef __signalfn_t *__sighandler_t;

typedef void __restorefn_t(void);
typedef __restorefn_t *__sigrestore_t;
# 121 "linux-2.6.26/include/asm/signal.h" 2
# 162 "linux-2.6.26/include/asm/signal.h"
struct sigaction {
 __sighandler_t sa_handler;
 unsigned long sa_flags;
 __sigrestore_t sa_restorer;
 sigset_t sa_mask;
};

struct k_sigaction {
 struct sigaction sa;
};



typedef struct sigaltstack {
 void *ss_sp;
 int ss_flags;
 size_t ss_size;
} stack_t;
# 5 "linux-2.6.26/include/linux/signal.h" 2
# 1 "linux-2.6.26/include/asm/siginfo.h" 1







# 1 "linux-2.6.26/include/asm-generic/siginfo.h" 1






typedef union sigval {
 int sival_int;
 void *sival_ptr;
} sigval_t;
# 40 "linux-2.6.26/include/asm-generic/siginfo.h"
typedef struct siginfo {
 int si_signo;
 int si_errno;
 int si_code;

 union {
  int _pad[((128 - (4 * sizeof(int))) / sizeof(int))];


  struct {
   pid_t _pid;
   uid_t _uid;
  } _kill;


  struct {
   timer_t _tid;
   int _overrun;
   char _pad[sizeof( uid_t) - sizeof(int)];
   sigval_t _sigval;
   int _sys_private;
  } _timer;


  struct {
   pid_t _pid;
   uid_t _uid;
   sigval_t _sigval;
  } _rt;


  struct {
   pid_t _pid;
   uid_t _uid;
   int _status;
   clock_t _utime;
   clock_t _stime;
  } _sigchld;


  struct {
   void *_addr;



  } _sigfault;


  struct {
   long _band;
   int _fd;
  } _sigpoll;
 } _sifields;
} siginfo_t;
# 251 "linux-2.6.26/include/asm-generic/siginfo.h"
typedef struct sigevent {
 sigval_t sigev_value;
 int sigev_signo;
 int sigev_notify;
 union {
  int _pad[((64 - (sizeof(int) * 2 + sizeof(sigval_t))) / sizeof(int))];
   int _tid;

  struct {
   void (*_function)(sigval_t);
   void *_attribute;
  } _sigev_thread;
 } _sigev_un;
} sigevent_t;







struct siginfo;
void do_schedule_next_timer(struct siginfo *info);





static inline  __attribute__((always_inline)) void copy_siginfo(struct siginfo *to, struct siginfo *from)
{
 if (from->si_code < 0)
  memcpy(to, from, sizeof(*to));
 else

  memcpy(to, from, (4 * sizeof(int)) + sizeof(from->_sifields._sigchld));
}



extern int copy_siginfo_to_user(struct siginfo *to, struct siginfo *from);
# 9 "linux-2.6.26/include/asm/siginfo.h" 2
# 6 "linux-2.6.26/include/linux/signal.h" 2
# 14 "linux-2.6.26/include/linux/signal.h"
struct sigqueue {
 struct list_head list;
 int flags;
 siginfo_t info;
 struct user_struct *user;
};




struct sigpending {
 struct list_head list;
 sigset_t signal;
};
# 38 "linux-2.6.26/include/linux/signal.h"
static inline  __attribute__((always_inline)) void sigaddset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  set->sig[0] |= 1UL << sig;
 else
  set->sig[sig / 64] |= 1UL << (sig % 64);
}

static inline  __attribute__((always_inline)) void sigdelset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  set->sig[0] &= ~(1UL << sig);
 else
  set->sig[sig / 64] &= ~(1UL << (sig % 64));
}

static inline  __attribute__((always_inline)) int sigismember(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  return 1 & (set->sig[0] >> sig);
 else
  return 1 & (set->sig[sig / 64] >> (sig % 64));
}

static inline  __attribute__((always_inline)) int sigfindinword(unsigned long word)
{
 return ffz(~word);
}



static inline  __attribute__((always_inline)) int sigisemptyset(sigset_t *set)
{
 extern void _NSIG_WORDS_is_unsupported_size(void);
 switch ((64 / 64)) {
 case 4:
  return (set->sig[3] | set->sig[2] |
   set->sig[1] | set->sig[0]) == 0;
 case 2:
  return (set->sig[1] | set->sig[0]) == 0;
 case 1:
  return set->sig[0] == 0;
 default:
  _NSIG_WORDS_is_unsupported_size();
  return 0;
 }
}
# 119 "linux-2.6.26/include/linux/signal.h"
static inline  __attribute__((always_inline)) void sigorsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) | (b3)); r->sig[2] = ((a2) | (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) | (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) | (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline  __attribute__((always_inline)) void sigandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & (b3)); r->sig[2] = ((a2) & (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline  __attribute__((always_inline)) void signandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & ~(b3)); r->sig[2] = ((a2) & ~(b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & ~(b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & ~(b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }
# 149 "linux-2.6.26/include/linux/signal.h"
static inline  __attribute__((always_inline)) void signotset(sigset_t *set) { extern void _NSIG_WORDS_is_unsupported_size(void); switch ((64 / 64)) { case 4: set->sig[3] = (~(set->sig[3])); set->sig[2] = (~(set->sig[2])); case 2: set->sig[1] = (~(set->sig[1])); case 1: set->sig[0] = (~(set->sig[0])); break; default: _NSIG_WORDS_is_unsupported_size(); } }




static inline  __attribute__((always_inline)) void sigemptyset(sigset_t *set)
{
 switch ((64 / 64)) {
 default:
  memset(set, 0, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = 0;
 case 1: set->sig[0] = 0;
  break;
 }
}

static inline  __attribute__((always_inline)) void sigfillset(sigset_t *set)
{
 switch ((64 / 64)) {
 default:
  memset(set, -1, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = -1;
 case 1: set->sig[0] = -1;
  break;
 }
}



static inline  __attribute__((always_inline)) void sigaddsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] |= mask;
}

static inline  __attribute__((always_inline)) void sigdelsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] &= ~mask;
}

static inline  __attribute__((always_inline)) int sigtestsetmask(sigset_t *set, unsigned long mask)
{
 return (set->sig[0] & mask) != 0;
}

static inline  __attribute__((always_inline)) void siginitset(sigset_t *set, unsigned long mask)
{
 set->sig[0] = mask;
 switch ((64 / 64)) {
 default:
  memset(&set->sig[1], 0, sizeof(long)*((64 / 64)-1));
  break;
 case 2: set->sig[1] = 0;
 case 1: ;
 }
}

static inline  __attribute__((always_inline)) void siginitsetinv(sigset_t *set, unsigned long mask)
{
 set->sig[0] = ~mask;
 switch ((64 / 64)) {
 default:
  memset(&set->sig[1], -1, sizeof(long)*((64 / 64)-1));
  break;
 case 2: set->sig[1] = -1;
 case 1: ;
 }
}



static inline  __attribute__((always_inline)) void init_sigpending(struct sigpending *sig)
{
 sigemptyset(&sig->signal);
 INIT_LIST_HEAD(&sig->list);
}

extern void flush_sigqueue(struct sigpending *queue);


static inline  __attribute__((always_inline)) int valid_signal(unsigned long sig)
{
 return sig <= 64 ? 1 : 0;
}

extern int next_signal(struct sigpending *pending, sigset_t *mask);
extern int group_send_sig_info(int sig, struct siginfo *info, struct task_struct *p);
extern int __group_send_sig_info(int, struct siginfo *, struct task_struct *);
extern long do_sigpending(void *, unsigned long);
extern int sigprocmask(int, sigset_t *, sigset_t *);
typedef  int  _GLOBAL_101_T; extern  _GLOBAL_101_T  global_show_unhandled_signals[NUM_STACKS];   

struct pt_regs;
extern int get_signal_to_deliver(siginfo_t *info, struct k_sigaction *return_ka, struct pt_regs *regs, void *cookie);
extern void exit_signals(struct task_struct *tsk);

extern struct kmem_cache *sighand_cachep;

int unhandled_signal(struct task_struct *tsk, int sig);
# 373 "linux-2.6.26/include/linux/signal.h"
void signals_init(void);
# 71 "linux-2.6.26/include/linux/sched.h" 2
# 1 "linux-2.6.26/include/linux/fs_struct.h" 1



# 1 "linux-2.6.26/include/linux/path.h" 1



struct dentry;
struct vfsmount;

struct path {
 struct vfsmount *mnt;
 struct dentry *dentry;
};

extern void path_get(struct path *);
extern void path_put(struct path *);
# 5 "linux-2.6.26/include/linux/fs_struct.h" 2

struct fs_struct {
 atomic_t count;
 rwlock_t lock;
 int umask;
 struct path root, pwd, altroot;
};







extern struct kmem_cache *fs_cachep;

extern void exit_fs(struct task_struct *);
extern void set_fs_altroot(void);
extern void set_fs_root(struct fs_struct *, struct path *);
extern void set_fs_pwd(struct fs_struct *, struct path *);
extern struct fs_struct *copy_fs_struct(struct fs_struct *);
extern void put_fs_struct(struct fs_struct *);
# 72 "linux-2.6.26/include/linux/sched.h" 2


# 1 "linux-2.6.26/include/linux/pid.h" 1



# 1 "linux-2.6.26/include/linux/rcupdate.h" 1
# 49 "linux-2.6.26/include/linux/rcupdate.h"
struct rcu_head {
 struct rcu_head *next;
 void (*func)(struct rcu_head *head);
};


# 1 "linux-2.6.26/include/linux/rcuclassic.h" 1
# 45 "linux-2.6.26/include/linux/rcuclassic.h"
struct rcu_ctrlblk {
 long cur;
 long completed;
 int next_pending;

 int signaled;

 spinlock_t lock ;
 cpumask_t cpumask;

} ;


static inline  __attribute__((always_inline)) int rcu_batch_before(long a, long b)
{
 return (a - b) < 0;
}


static inline  __attribute__((always_inline)) int rcu_batch_after(long a, long b)
{
 return (a - b) > 0;
}






struct rcu_data {

 long quiescbatch;
 int passed_quiesc;
 int qs_pending;


 long batch;
 struct rcu_head *nxtlist;
 struct rcu_head **nxttail;
 long qlen;
 struct rcu_head *curlist;
 struct rcu_head **curtail;
 struct rcu_head *donelist;
 struct rcu_head **donetail;
 long blimit;
 int cpu;
 struct rcu_head barrier;
};

typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_102_T; extern  _GLOBAL_102_T  global_per_cpu__rcu_data[NUM_STACKS];    
typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_103_T; extern  _GLOBAL_103_T  global_per_cpu__rcu_bh_data[NUM_STACKS];    







static inline  __attribute__((always_inline)) void rcu_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*((void)(cpu), &global_per_cpu__rcu_data[get_stack_id()]));
 rdp->passed_quiesc = 1;
}
static inline  __attribute__((always_inline)) void rcu_bh_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*((void)(cpu), &global_per_cpu__rcu_bh_data[get_stack_id()]));
 rdp->passed_quiesc = 1;
}

extern int rcu_pending(int cpu);
extern int rcu_needs_cpu(int cpu);
# 154 "linux-2.6.26/include/linux/rcuclassic.h"
extern void __rcu_init(void);
extern void rcu_check_callbacks(int cpu, int user);
extern void rcu_restart_cpu(int cpu);

extern long rcu_batches_completed(void);
extern long rcu_batches_completed_bh(void);
# 56 "linux-2.6.26/include/linux/rcupdate.h" 2
# 200 "linux-2.6.26/include/linux/rcupdate.h"
extern void call_rcu(struct rcu_head *head,
         void (*func)(struct rcu_head *head));
# 221 "linux-2.6.26/include/linux/rcupdate.h"
extern void call_rcu_bh(struct rcu_head *head,
   void (*func)(struct rcu_head *head));


extern void synchronize_rcu(void);
extern void rcu_barrier(void);
extern long rcu_batches_completed(void);
extern long rcu_batches_completed_bh(void);


extern void rcu_init(void);
extern int rcu_needs_cpu(int cpu);
# 5 "linux-2.6.26/include/linux/pid.h" 2

enum pid_type
{
 PIDTYPE_PID,
 PIDTYPE_PGID,
 PIDTYPE_SID,
 PIDTYPE_MAX
};
# 50 "linux-2.6.26/include/linux/pid.h"
struct upid {

 int nr;
 struct pid_namespace *ns;
 struct hlist_node pid_chain;
};

struct pid
{
 atomic_t count;

 struct hlist_head tasks[PIDTYPE_MAX];
 struct rcu_head rcu;
 unsigned int level;
 struct upid numbers[1];
};

typedef  struct pid   _GLOBAL_104_T; extern  _GLOBAL_104_T  global_init_struct_pid[NUM_STACKS];    

struct pid_link
{
 struct hlist_node node;
 struct pid *pid;
};

static inline  __attribute__((always_inline)) struct pid *get_pid(struct pid *pid)
{
 if (pid)
  atomic_inc(&pid->count);
 return pid;
}

extern void put_pid(struct pid *pid);
extern struct task_struct *pid_task(struct pid *pid, enum pid_type);
extern struct task_struct *get_pid_task(struct pid *pid, enum pid_type);

extern struct pid *get_task_pid(struct task_struct *task, enum pid_type type);





extern void attach_pid(struct task_struct *task, enum pid_type type,
   struct pid *pid);
extern void detach_pid(struct task_struct *task, enum pid_type);
extern void change_pid(struct task_struct *task, enum pid_type,
   struct pid *pid);
extern void transfer_pid(struct task_struct *old, struct task_struct *new,
    enum pid_type);

struct pid_namespace;
extern struct pid_namespace init_pid_ns;
# 113 "linux-2.6.26/include/linux/pid.h"
extern struct pid *find_pid_ns(int nr, struct pid_namespace *ns);
extern struct pid *find_vpid(int nr);
extern struct pid *find_pid(int nr);




extern struct pid *find_get_pid(int nr);
extern struct pid *find_ge_pid(int nr, struct pid_namespace *);
int next_pidmap(struct pid_namespace *pid_ns, int last);

extern struct pid *alloc_pid(struct pid_namespace *ns);
extern void free_pid(struct pid *pid);
# 138 "linux-2.6.26/include/linux/pid.h"
static inline  __attribute__((always_inline)) pid_t pid_nr(struct pid *pid)
{
 pid_t nr = 0;
 if (pid)
  nr = pid->numbers[0].nr;
 return nr;
}

pid_t pid_nr_ns(struct pid *pid, struct pid_namespace *ns);
pid_t pid_vnr(struct pid *pid);
# 75 "linux-2.6.26/include/linux/sched.h" 2


# 1 "linux-2.6.26/include/linux/proportions.h" 1
# 12 "linux-2.6.26/include/linux/proportions.h"
# 1 "linux-2.6.26/include/linux/percpu_counter.h" 1
# 78 "linux-2.6.26/include/linux/percpu_counter.h"
struct percpu_counter {
 s64 count;
};

static inline  __attribute__((always_inline)) int percpu_counter_init(struct percpu_counter *fbc, s64 amount)
{
 fbc->count = amount;
 return 0;
}



static inline  __attribute__((always_inline)) void percpu_counter_destroy(struct percpu_counter *fbc)
{
}

static inline  __attribute__((always_inline)) void percpu_counter_set(struct percpu_counter *fbc, s64 amount)
{
 fbc->count = amount;
}




static inline  __attribute__((always_inline)) void
percpu_counter_add(struct percpu_counter *fbc, s64 amount)
{
 do { } while (0);
 fbc->count += amount;
 do { } while (0);
}

static inline  __attribute__((always_inline)) s64 percpu_counter_read(struct percpu_counter *fbc)
{
 return fbc->count;
}

static inline  __attribute__((always_inline)) s64 percpu_counter_read_positive(struct percpu_counter *fbc)
{
 return fbc->count;
}

static inline  __attribute__((always_inline)) s64 percpu_counter_sum_positive(struct percpu_counter *fbc)
{
 return percpu_counter_read_positive(fbc);
}

static inline  __attribute__((always_inline)) s64 percpu_counter_sum(struct percpu_counter *fbc)
{
 return percpu_counter_read(fbc);
}



static inline  __attribute__((always_inline)) void percpu_counter_inc(struct percpu_counter *fbc)
{
 percpu_counter_add(fbc, 1);
}

static inline  __attribute__((always_inline)) void percpu_counter_dec(struct percpu_counter *fbc)
{
 percpu_counter_add(fbc, -1);
}

static inline  __attribute__((always_inline)) void percpu_counter_sub(struct percpu_counter *fbc, s64 amount)
{
 percpu_counter_add(fbc, -amount);
}
# 13 "linux-2.6.26/include/linux/proportions.h" 2



struct prop_global {





 int shift;






 struct percpu_counter events;
};






struct prop_descriptor {
 int index;
 struct prop_global pg[2];
 struct mutex mutex;
};

int prop_descriptor_init(struct prop_descriptor *pd, int shift);
void prop_change_shift(struct prop_descriptor *pd, int new_shift);





struct prop_local_percpu {



 struct percpu_counter events;




 int shift;
 unsigned long period;
 spinlock_t lock;
};

int prop_local_init_percpu(struct prop_local_percpu *pl);
void prop_local_destroy_percpu(struct prop_local_percpu *pl);
void __prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl);
void prop_fraction_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl,
  long *numerator, long *denominator);

static inline 
__attribute__((always_inline)) void prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl)
{
 unsigned long flags;

 (void)(flags);
 __prop_inc_percpu(pd, pl);
 (void)(flags);
}
# 89 "linux-2.6.26/include/linux/proportions.h"
void __prop_inc_percpu_max(struct prop_descriptor *pd,
      struct prop_local_percpu *pl, long frac);






struct prop_local_single {



 unsigned long events;





 int shift;
 unsigned long period;
 spinlock_t lock;
};





int prop_local_init_single(struct prop_local_single *pl);
void prop_local_destroy_single(struct prop_local_single *pl);
void __prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl);
void prop_fraction_single(struct prop_descriptor *pd, struct prop_local_single *pl,
  long *numerator, long *denominator);

static inline 
__attribute__((always_inline)) void prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl)
{
 unsigned long flags;

 (void)(flags);
 __prop_inc_single(pd, pl);
 (void)(flags);
}
# 78 "linux-2.6.26/include/linux/sched.h" 2
# 1 "linux-2.6.26/include/linux/seccomp.h" 1
# 24 "linux-2.6.26/include/linux/seccomp.h"
typedef struct { } seccomp_t;



static inline  __attribute__((always_inline)) long prctl_get_seccomp(void)
{
 return -22;
}

static inline  __attribute__((always_inline)) long prctl_set_seccomp(unsigned long arg2)
{
 return -22;
}
# 79 "linux-2.6.26/include/linux/sched.h" 2

# 1 "linux-2.6.26/include/linux/rtmutex.h" 1
# 16 "linux-2.6.26/include/linux/rtmutex.h"
# 1 "linux-2.6.26/include/linux/plist.h" 1
# 80 "linux-2.6.26/include/linux/plist.h"
struct plist_head {
 struct list_head prio_list;
 struct list_head node_list;



};

struct plist_node {
 int prio;
 struct plist_head plist;
};
# 127 "linux-2.6.26/include/linux/plist.h"
static inline  __attribute__((always_inline)) void
plist_head_init(struct plist_head *head, spinlock_t *lock)
{
 INIT_LIST_HEAD(&head->prio_list);
 INIT_LIST_HEAD(&head->node_list);



}






static inline  __attribute__((always_inline)) void plist_node_init(struct plist_node *node, int prio)
{
 node->prio = prio;
 plist_head_init(&node->plist, ((void *)0));
}

extern void plist_add(struct plist_node *node, struct plist_head *head);
extern void plist_del(struct plist_node *node, struct plist_head *head);
# 195 "linux-2.6.26/include/linux/plist.h"
static inline  __attribute__((always_inline)) int plist_head_empty(const struct plist_head *head)
{
 return list_empty(&head->node_list);
}





static inline  __attribute__((always_inline)) int plist_node_empty(const struct plist_node *node)
{
 return plist_head_empty(&node->plist);
}
# 234 "linux-2.6.26/include/linux/plist.h"
static inline  __attribute__((always_inline)) struct plist_node* plist_first(const struct plist_head *head)
{
 return ({ const typeof( ((struct plist_node *)0)->plist.node_list ) *__mptr = (head->node_list.next); (struct plist_node *)( (char *)__mptr - __builtin_offsetof(struct plist_node,plist.node_list) );})
                                        ;
}
# 17 "linux-2.6.26/include/linux/rtmutex.h" 2
# 26 "linux-2.6.26/include/linux/rtmutex.h"
struct rt_mutex {
 spinlock_t wait_lock;
 struct plist_head wait_list;
 struct task_struct *owner;






};

struct rt_mutex_waiter;
struct hrtimer_sleeper;






 static inline  __attribute__((always_inline)) int rt_mutex_debug_check_no_locks_freed(const void *from,
             unsigned long len)
 {
 return 0;
 }
# 80 "linux-2.6.26/include/linux/rtmutex.h"
static inline  __attribute__((always_inline)) int rt_mutex_is_locked(struct rt_mutex *lock)
{
 return lock->owner != ((void *)0);
}

extern void __rt_mutex_init(struct rt_mutex *lock, const char *name);
extern void rt_mutex_destroy(struct rt_mutex *lock);

extern void rt_mutex_lock(struct rt_mutex *lock);
extern int rt_mutex_lock_interruptible(struct rt_mutex *lock,
      int detect_deadlock);
extern int rt_mutex_timed_lock(struct rt_mutex *lock,
     struct hrtimer_sleeper *timeout,
     int detect_deadlock);

extern int rt_mutex_trylock(struct rt_mutex *lock);

extern void rt_mutex_unlock(struct rt_mutex *lock);
# 81 "linux-2.6.26/include/linux/sched.h" 2


# 1 "linux-2.6.26/include/linux/param.h" 1
# 84 "linux-2.6.26/include/linux/sched.h" 2
# 1 "linux-2.6.26/include/linux/resource.h" 1





struct task_struct;
# 24 "linux-2.6.26/include/linux/resource.h"
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;
 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;
};

struct rlimit {
 unsigned long rlim_cur;
 unsigned long rlim_max;
};
# 71 "linux-2.6.26/include/linux/resource.h"
# 1 "linux-2.6.26/include/asm/resource.h" 1
# 1 "linux-2.6.26/include/asm-generic/resource.h" 1
# 1 "linux-2.6.26/include/asm/resource.h" 2
# 72 "linux-2.6.26/include/linux/resource.h" 2

int getrusage(struct task_struct *p, int who, struct rusage *ru);
# 85 "linux-2.6.26/include/linux/sched.h" 2

# 1 "linux-2.6.26/include/linux/hrtimer.h" 1
# 24 "linux-2.6.26/include/linux/hrtimer.h"
struct hrtimer_clock_base;
struct hrtimer_cpu_base;




enum hrtimer_mode {
 HRTIMER_MODE_ABS,
 HRTIMER_MODE_REL,
};




enum hrtimer_restart {
 HRTIMER_NORESTART,
 HRTIMER_RESTART,
};
# 53 "linux-2.6.26/include/linux/hrtimer.h"
enum hrtimer_cb_mode {
 HRTIMER_CB_SOFTIRQ,
 HRTIMER_CB_IRQSAFE,
 HRTIMER_CB_IRQSAFE_NO_RESTART,
 HRTIMER_CB_IRQSAFE_NO_SOFTIRQ,
};
# 112 "linux-2.6.26/include/linux/hrtimer.h"
struct hrtimer {
 struct rb_node node;
 ktime_t expires;
 enum hrtimer_restart (*function)(struct hrtimer *);
 struct hrtimer_clock_base *base;
 unsigned long state;
 enum hrtimer_cb_mode cb_mode;
 struct list_head cb_entry;





};
# 134 "linux-2.6.26/include/linux/hrtimer.h"
struct hrtimer_sleeper {
 struct hrtimer timer;
 struct task_struct *task;
};
# 153 "linux-2.6.26/include/linux/hrtimer.h"
struct hrtimer_clock_base {
 struct hrtimer_cpu_base *cpu_base;
 clockid_t index;
 struct rb_root active;
 struct rb_node *first;
 ktime_t resolution;
 ktime_t (*get_time)(void);
 ktime_t (*get_softirq_time)(void);
 ktime_t softirq_time;






};
# 189 "linux-2.6.26/include/linux/hrtimer.h"
struct hrtimer_cpu_base {
 spinlock_t lock;
 struct hrtimer_clock_base clock_base[2];
 struct list_head cb_pending;





};
# 241 "linux-2.6.26/include/linux/hrtimer.h"
static inline  __attribute__((always_inline)) void clock_was_set(void) { }

static inline  __attribute__((always_inline)) void hres_timers_resume(void) { }





static inline  __attribute__((always_inline)) ktime_t hrtimer_cb_get_time(struct hrtimer *timer)
{
 return timer->base->softirq_time;
}

static inline  __attribute__((always_inline)) int hrtimer_is_hres_active(struct hrtimer *timer)
{
 return 0;
}


extern ktime_t ktime_get(void);
extern ktime_t ktime_get_real(void);




extern void hrtimer_init(struct hrtimer *timer, clockid_t which_clock,
    enum hrtimer_mode mode);







static inline  __attribute__((always_inline)) void hrtimer_init_on_stack(struct hrtimer *timer,
      clockid_t which_clock,
      enum hrtimer_mode mode)
{
 hrtimer_init(timer, which_clock, mode);
}
static inline  __attribute__((always_inline)) void destroy_hrtimer_on_stack(struct hrtimer *timer) { }



extern int hrtimer_start(struct hrtimer *timer, ktime_t tim,
    const enum hrtimer_mode mode);
extern int hrtimer_cancel(struct hrtimer *timer);
extern int hrtimer_try_to_cancel(struct hrtimer *timer);

static inline  __attribute__((always_inline)) int hrtimer_restart(struct hrtimer *timer)
{
 return hrtimer_start(timer, timer->expires, HRTIMER_MODE_ABS);
}


extern ktime_t hrtimer_get_remaining(const struct hrtimer *timer);
extern int hrtimer_get_res(const clockid_t which_clock, struct timespec *tp);

extern ktime_t hrtimer_get_next_event(void);





static inline  __attribute__((always_inline)) int hrtimer_active(const struct hrtimer *timer)
{
 return timer->state != 0x00;
}




static inline  __attribute__((always_inline)) int hrtimer_is_queued(struct hrtimer *timer)
{
 return timer->state &
  (0x01 | 0x04);
}





static inline  __attribute__((always_inline)) int hrtimer_callback_running(struct hrtimer *timer)
{
 return timer->state & 0x02;
}


extern u64
hrtimer_forward(struct hrtimer *timer, ktime_t now, ktime_t interval);


static inline  __attribute__((always_inline)) u64 hrtimer_forward_now(struct hrtimer *timer,
          ktime_t interval)
{
 return hrtimer_forward(timer, timer->base->get_time(), interval);
}


extern long hrtimer_nanosleep(struct timespec *rqtp,
         struct timespec *rmtp,
         const enum hrtimer_mode mode,
         const clockid_t clockid);
extern long hrtimer_nanosleep_restart(struct restart_block *restart_block);

extern void hrtimer_init_sleeper(struct hrtimer_sleeper *sl,
     struct task_struct *tsk);


extern void hrtimer_run_queues(void);
extern void hrtimer_run_pending(void);


extern void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) hrtimers_init(void);
# 363 "linux-2.6.26/include/linux/hrtimer.h"
extern void sysrq_timer_list_show(void);
# 393 "linux-2.6.26/include/linux/hrtimer.h"
static inline  __attribute__((always_inline)) void timer_stats_account_hrtimer(struct hrtimer *timer)
{
}

static inline  __attribute__((always_inline)) void timer_stats_hrtimer_set_start_info(struct hrtimer *timer)
{
}

static inline  __attribute__((always_inline)) void timer_stats_hrtimer_clear_start_info(struct hrtimer *timer)
{
}
# 87 "linux-2.6.26/include/linux/sched.h" 2
# 1 "linux-2.6.26/include/linux/task_io_accounting.h" 1
# 35 "linux-2.6.26/include/linux/task_io_accounting.h"
struct task_io_accounting {
};
# 88 "linux-2.6.26/include/linux/sched.h" 2

# 1 "linux-2.6.26/include/linux/latencytop.h" 1
# 33 "linux-2.6.26/include/linux/latencytop.h"
static inline  __attribute__((always_inline)) void
account_scheduler_latency(struct task_struct *task, int usecs, int inter)
{
}

static inline  __attribute__((always_inline)) void clear_all_latency_tracing(struct task_struct *p)
{
}
# 90 "linux-2.6.26/include/linux/sched.h" 2



struct mem_cgroup;
struct exec_domain;
struct futex_pi_state;
struct robust_list_head;
struct bio;
# 115 "linux-2.6.26/include/linux/sched.h"
typedef  unsigned long   _GLOBAL_105_T; extern  _GLOBAL_105_T  _GLOBAL_0_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_1_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_2_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_3_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_4_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_5_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_6_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_7_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_8_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_9_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_10_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_11_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_12_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_13_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_14_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_15_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_16_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_17_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_18_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_19_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_20_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_21_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_22_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_23_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_24_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_25_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_26_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_27_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_28_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_29_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_30_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_31_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_32_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_33_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_34_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_35_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_36_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_37_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_38_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_39_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_40_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_41_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_42_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_43_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_44_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_45_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_46_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_47_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_48_avenrun_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_49_avenrun_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_avenrun_I) *_GLOBAL_avenrun_11_A[NUM_STACKS];   
# 129 "linux-2.6.26/include/linux/sched.h"
typedef  unsigned long   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_total_forks[NUM_STACKS];    
typedef  int  _GLOBAL_107_T; extern  _GLOBAL_107_T  global_nr_threads[NUM_STACKS];   
typedef  __typeof__ ( unsigned long  )   _GLOBAL_108_T; extern  _GLOBAL_108_T  global_per_cpu__process_counts[NUM_STACKS];    
extern int nr_processes(void);
extern unsigned long nr_running(void);
extern unsigned long nr_uninterruptible(void);
extern unsigned long nr_active(void);
extern unsigned long nr_iowait(void);
extern unsigned long weighted_cpuload(const int cpu);

struct seq_file;
struct cfs_rq;
struct task_group;






static inline  __attribute__((always_inline)) void
proc_sched_show_task(struct task_struct *p, struct seq_file *m)
{
}
static inline  __attribute__((always_inline)) void proc_sched_set_task(struct task_struct *p)
{
}
static inline  __attribute__((always_inline)) void
print_cfs_rq(struct seq_file *m, int cpu, struct cfs_rq *cfs_rq)
{
}


typedef  unsigned long long    _GLOBAL_109_T; extern  _GLOBAL_109_T  global_time_sync_thresh[NUM_STACKS];     
# 238 "linux-2.6.26/include/linux/sched.h"
typedef  rwlock_t  _GLOBAL_110_T; extern  _GLOBAL_110_T  global_tasklist_lock[NUM_STACKS];   
typedef  spinlock_t  _GLOBAL_111_T; extern  _GLOBAL_111_T  global_mmlist_lock[NUM_STACKS];   

struct task_struct;

extern void sched_init(void);
extern void sched_init_smp(void);
extern void schedule_tail(struct task_struct *prev);
extern void init_idle(struct task_struct *idle, int cpu);
extern void init_idle_bootup_task(struct task_struct *idle);

typedef  cpumask_t  _GLOBAL_112_T; extern  _GLOBAL_112_T  global_nohz_cpu_mask[NUM_STACKS];   



static inline  __attribute__((always_inline)) int select_nohz_load_balancer(int cpu)
{
 return 0;
}


extern unsigned long rt_needs_cpu(int cpu);




extern void show_state_filter(unsigned long state_filter);

static inline  __attribute__((always_inline)) void show_state(void)
{
 show_state_filter(0);
}

extern void show_regs(struct pt_regs *);






extern void show_stack(struct task_struct *task, unsigned long *sp);

void io_schedule(void);
long io_schedule_timeout(long timeout);

extern void cpu_init (void);
extern void trap_init(void);
extern void account_process_tick(struct task_struct *task, int user);
extern void update_process_times(int user);
extern void scheduler_tick(void);
extern void hrtick_resched(void);

extern void sched_show_task(struct task_struct *p);
# 302 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) void softlockup_tick(void)
{
}
static inline  __attribute__((always_inline)) void spawn_softlockup_task(void)
{
}
static inline  __attribute__((always_inline)) void touch_softlockup_watchdog(void)
{
}
static inline  __attribute__((always_inline)) void touch_all_softlockup_watchdogs(void)
{
}







extern char __sched_text_start[], __sched_text_end[];


extern int in_sched_functions(unsigned long addr);


extern signed long schedule_timeout(signed long timeout);
extern signed long schedule_timeout_interruptible(signed long timeout);
extern signed long schedule_timeout_killable(signed long timeout);
extern signed long schedule_timeout_uninterruptible(signed long timeout);
 void schedule(void);

struct nsproxy;
struct user_namespace;




typedef  int  _GLOBAL_113_T; extern  _GLOBAL_113_T  global_sysctl_max_map_count[NUM_STACKS];   

# 1 "linux-2.6.26/include/linux/aio.h" 1





# 1 "linux-2.6.26/include/linux/aio_abi.h" 1
# 32 "linux-2.6.26/include/linux/aio_abi.h"
typedef unsigned long aio_context_t;

enum {
 IOCB_CMD_PREAD = 0,
 IOCB_CMD_PWRITE = 1,
 IOCB_CMD_FSYNC = 2,
 IOCB_CMD_FDSYNC = 3,




 IOCB_CMD_NOOP = 6,
 IOCB_CMD_PREADV = 7,
 IOCB_CMD_PWRITEV = 8,
};
# 57 "linux-2.6.26/include/linux/aio_abi.h"
struct io_event {
 __u64 data;
 __u64 obj;
 __s64 res;
 __s64 res2;
};
# 78 "linux-2.6.26/include/linux/aio_abi.h"
struct iocb {

 __u64 aio_data;
 __u32 aio_key, aio_reserved1;



 __u16 aio_lio_opcode;
 __s16 aio_reqprio;
 __u32 aio_fildes;

 __u64 aio_buf;
 __u64 aio_nbytes;
 __s64 aio_offset;


 __u64 aio_reserved2;


 __u32 aio_flags;





 __u32 aio_resfd;
};
# 7 "linux-2.6.26/include/linux/aio.h" 2
# 1 "linux-2.6.26/include/linux/uio.h" 1
# 16 "linux-2.6.26/include/linux/uio.h"
struct iovec
{
 void *iov_base;
 __kernel_size_t iov_len;
};



struct kvec {
 void *iov_base;
 size_t iov_len;
};
# 45 "linux-2.6.26/include/linux/uio.h"
static inline  __attribute__((always_inline)) size_t iov_length(const struct iovec *iov, unsigned long nr_segs)
{
 unsigned long seg;
 size_t ret = 0;

 for (seg = 0; seg < nr_segs; seg++)
  ret += iov[seg].iov_len;
 return ret;
}

unsigned long iov_shorten(struct iovec *iov, unsigned long nr_segs, size_t to);
# 8 "linux-2.6.26/include/linux/aio.h" 2

# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 10 "linux-2.6.26/include/linux/aio.h" 2





struct kioctx;
# 87 "linux-2.6.26/include/linux/aio.h"
struct kiocb {
 struct list_head ki_run_list;
 unsigned long ki_flags;
 int ki_users;
 unsigned ki_key;

 struct file *ki_filp;
 struct kioctx *ki_ctx;
 int (*ki_cancel)(struct kiocb *, struct io_event *);
 ssize_t (*ki_retry)(struct kiocb *);
 void (*ki_dtor)(struct kiocb *);

 union {
  void *user;
  struct task_struct *tsk;
 } ki_obj;

 __u64 ki_user_data;
 wait_queue_t ki_wait;
 loff_t ki_pos;

 void *private;

 unsigned short ki_opcode;
 size_t ki_nbytes;
 char *ki_buf;
 size_t ki_left;
 struct iovec ki_inline_vec;
  struct iovec *ki_iovec;
  unsigned long ki_nr_segs;
  unsigned long ki_cur_seg;

 struct list_head ki_list;






 struct file *ki_eventfd;
};
# 149 "linux-2.6.26/include/linux/aio.h"
struct aio_ring {
 unsigned id;
 unsigned nr;
 unsigned head;
 unsigned tail;

 unsigned magic;
 unsigned compat_features;
 unsigned incompat_features;
 unsigned header_length;


 struct io_event io_events[0];
};




struct aio_ring_info {
 unsigned long mmap_base;
 unsigned long mmap_size;

 struct page **ring_pages;
 spinlock_t ring_lock;
 long nr_pages;

 unsigned nr, tail;

 struct page *internal_pages[8];
};

struct kioctx {
 atomic_t users;
 int dead;
 struct mm_struct *mm;


 unsigned long user_id;
 struct kioctx *next;

 wait_queue_head_t wait;

 spinlock_t ctx_lock;

 int reqs_active;
 struct list_head active_reqs;
 struct list_head run_list;


 unsigned max_reqs;

 struct aio_ring_info ring_info;

 struct delayed_work wq;
};


typedef  unsigned  _GLOBAL_114_T; extern  _GLOBAL_114_T  global_aio_max_size[NUM_STACKS];   

extern ssize_t wait_on_sync_kiocb(struct kiocb *iocb);
extern int aio_put_req(struct kiocb *iocb);
extern void kick_iocb(struct kiocb *iocb);
extern int aio_complete(struct kiocb *iocb, long res, long res2);
struct mm_struct;
extern void exit_aio(struct mm_struct *mm);





static inline  __attribute__((always_inline)) struct kiocb *list_kiocb(struct list_head *h)
{
 return ({ const typeof( ((struct kiocb *)0)->ki_list ) *__mptr = (h); (struct kiocb *)( (char *)__mptr - __builtin_offsetof(struct kiocb,ki_list) );});
}


typedef  unsigned long   _GLOBAL_115_T; extern  _GLOBAL_115_T  global_aio_nr[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_116_T; extern  _GLOBAL_116_T  global_aio_max_nr[NUM_STACKS];    
# 342 "linux-2.6.26/include/linux/sched.h" 2

extern unsigned long
arch_get_unmapped_area(struct file *, unsigned long, unsigned long,
         unsigned long, unsigned long);
extern unsigned long
arch_get_unmapped_area_topdown(struct file *filp, unsigned long addr,
     unsigned long len, unsigned long pgoff,
     unsigned long flags);
extern void arch_unmap_area(struct mm_struct *, unsigned long);
extern void arch_unmap_area_topdown(struct mm_struct *, unsigned long);
# 389 "linux-2.6.26/include/linux/sched.h"
extern void set_dumpable(struct mm_struct *mm, int value);
extern int get_dumpable(struct mm_struct *mm);
# 411 "linux-2.6.26/include/linux/sched.h"
struct sighand_struct {
 atomic_t count;
 struct k_sigaction action[64];
 spinlock_t siglock;
 wait_queue_head_t signalfd_wqh;
};

struct pacct_struct {
 int ac_flag;
 long ac_exitcode;
 unsigned long ac_mem;
 cputime_t ac_utime, ac_stime;
 unsigned long ac_minflt, ac_majflt;
};
# 433 "linux-2.6.26/include/linux/sched.h"
struct signal_struct {
 atomic_t count;
 atomic_t live;

 wait_queue_head_t wait_chldexit;


 struct task_struct *curr_target;


 struct sigpending shared_pending;


 int group_exit_code;





 struct task_struct *group_exit_task;
 int notify_count;


 int group_stop_count;
 unsigned int flags;


 struct list_head posix_timers;


 struct hrtimer real_timer;
 struct pid *leader_pid;
 ktime_t it_real_incr;


 cputime_t it_prof_expires, it_virt_expires;
 cputime_t it_prof_incr, it_virt_incr;
# 478 "linux-2.6.26/include/linux/sched.h"
 union {
  pid_t pgrp ;
  pid_t __pgrp;
 };

 struct pid *tty_old_pgrp;

 union {
  pid_t session ;
  pid_t __session;
 };


 int leader;

 struct tty_struct *tty;







 cputime_t utime, stime, cutime, cstime;
 cputime_t gtime;
 cputime_t cgtime;
 unsigned long nvcsw, nivcsw, cnvcsw, cnivcsw;
 unsigned long min_flt, maj_flt, cmin_flt, cmaj_flt;
 unsigned long inblock, oublock, cinblock, coublock;







 unsigned long long sum_sched_runtime;
# 525 "linux-2.6.26/include/linux/sched.h"
 struct rlimit rlim[16];

 struct list_head cpu_timers[3];
# 545 "linux-2.6.26/include/linux/sched.h"
};
# 569 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) int signal_group_exit(const struct signal_struct *sig)
{
 return (sig->flags & 0x00000008) ||
  (sig->group_exit_task != ((void *)0));
}




struct user_struct {
 atomic_t __count;
 atomic_t processes;
 atomic_t files;
 atomic_t sigpending;
# 591 "linux-2.6.26/include/linux/sched.h"
 unsigned long locked_shm;







 struct hlist_node uidhash_node;
 uid_t uid;
# 609 "linux-2.6.26/include/linux/sched.h"
};

extern int uids_sysfs_init(void);

extern struct user_struct *find_user(uid_t);

typedef  struct user_struct   _GLOBAL_117_T; extern  _GLOBAL_117_T  global_root_user[NUM_STACKS];    


struct backing_dev_info;
struct reclaim_state;
# 672 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) int sched_info_on(void)
{






 return 0;

}

enum cpu_idle_type {
 CPU_IDLE,
 CPU_NOT_IDLE,
 CPU_NEWLY_IDLE,
 CPU_MAX_IDLE_TYPES
};
# 832 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) int above_background_load(void)
{
 unsigned long cpu;

 for (((cpu)) = 0; ((cpu)) < 1; ((cpu))++, (void)global_cpu_online_map[get_stack_id()]) {
  if (weighted_cpuload(cpu) >= (1L << 10))
   return 1;
 }
 return 0;
}

struct io_context;


struct group_info {
 int ngroups;
 atomic_t usage;
 gid_t small_block[32];
 int nblocks;
 gid_t *blocks[0];
};
# 869 "linux-2.6.26/include/linux/sched.h"
extern struct group_info *groups_alloc(int gidsetsize);
extern void groups_free(struct group_info *group_info);
extern int set_current_groups(struct group_info *group_info);
extern int groups_search(struct group_info *group_info, gid_t grp);







static inline  __attribute__((always_inline)) void prefetch_stack(struct task_struct *t) { }


struct audit_context;
struct mempolicy;
struct pipe_inode_info;
struct uts_namespace;

struct rq;
struct sched_domain;

struct sched_class {
 const struct sched_class *next;

 void (*enqueue_task) (struct rq *rq, struct task_struct *p, int wakeup);
 void (*dequeue_task) (struct rq *rq, struct task_struct *p, int sleep);
 void (*yield_task) (struct rq *rq);
 int (*select_task_rq)(struct task_struct *p, int sync);

 void (*check_preempt_curr) (struct rq *rq, struct task_struct *p);

 struct task_struct * (*pick_next_task) (struct rq *rq);
 void (*put_prev_task) (struct rq *rq, struct task_struct *p);
# 918 "linux-2.6.26/include/linux/sched.h"
 void (*set_curr_task) (struct rq *rq);
 void (*task_tick) (struct rq *rq, struct task_struct *p, int queued);
 void (*task_new) (struct rq *rq, struct task_struct *p);
 void (*set_cpus_allowed)(struct task_struct *p,
     const cpumask_t *newmask);

 void (*join_domain)(struct rq *rq);
 void (*leave_domain)(struct rq *rq);

 void (*switched_from) (struct rq *this_rq, struct task_struct *task,
          int running);
 void (*switched_to) (struct rq *this_rq, struct task_struct *task,
        int running);
 void (*prio_changed) (struct rq *this_rq, struct task_struct *task,
        int oldprio, int running);




};

struct load_weight {
 unsigned long weight, inv_weight;
};
# 953 "linux-2.6.26/include/linux/sched.h"
struct sched_entity {
 struct load_weight load;
 struct rb_node run_node;
 struct list_head group_node;
 unsigned int on_rq;

 u64 exec_start;
 u64 sum_exec_runtime;
 u64 vruntime;
 u64 prev_sum_exec_runtime;

 u64 last_wakeup;
 u64 avg_overlap;
# 1008 "linux-2.6.26/include/linux/sched.h"
};

struct sched_rt_entity {
 struct list_head run_list;
 unsigned int time_slice;
 unsigned long timeout;
 int nr_cpus_allowed;

 struct sched_rt_entity *back;







};

struct task_struct {
 volatile long state;
 void *stack;
 atomic_t usage;
 unsigned int flags;
 unsigned int ptrace;

 int lock_depth;







 int prio, static_prio, normal_prio;
 const struct sched_class *sched_class;
 struct sched_entity se;
 struct sched_rt_entity rt;
# 1059 "linux-2.6.26/include/linux/sched.h"
 unsigned char fpu_counter;
 s8 oomkilladj;




 unsigned int policy;
 cpumask_t cpus_allowed;
# 1077 "linux-2.6.26/include/linux/sched.h"
 struct list_head tasks;




 struct list_head ptrace_children;
 struct list_head ptrace_list;

 struct mm_struct *mm, *active_mm;


 struct linux_binfmt *binfmt;
 int exit_state;
 int exit_code, exit_signal;
 int pdeath_signal;

 unsigned int personality;
 unsigned did_exec:1;
 pid_t pid;
 pid_t tgid;
# 1107 "linux-2.6.26/include/linux/sched.h"
 struct task_struct *real_parent;
 struct task_struct *parent;




 struct list_head children;
 struct list_head sibling;
 struct task_struct *group_leader;


 struct pid_link pids[PIDTYPE_MAX];
 struct list_head thread_group;

 struct completion *vfork_done;
 int *set_child_tid;
 int *clear_child_tid;

 unsigned int rt_priority;
 cputime_t utime, stime, utimescaled, stimescaled;
 cputime_t gtime;
 cputime_t prev_utime, prev_stime;
 unsigned long nvcsw, nivcsw;
 struct timespec start_time;
 struct timespec real_start_time;

 unsigned long min_flt, maj_flt;

   cputime_t it_prof_expires, it_virt_expires;
 unsigned long long it_sched_expires;
 struct list_head cpu_timers[3];


 uid_t uid,euid,suid,fsuid;
 gid_t gid,egid,sgid,fsgid;
 struct group_info *group_info;
 kernel_cap_t cap_effective, cap_inheritable, cap_permitted, cap_bset;
 unsigned securebits;
 struct user_struct *user;





 char comm[16];




 int link_count, total_link_count;
# 1167 "linux-2.6.26/include/linux/sched.h"
 struct thread_struct thread;

 struct fs_struct *fs;

 struct files_struct *files;

 struct nsproxy *nsproxy;

 struct signal_struct *signal;
 struct sighand_struct *sighand;

 sigset_t blocked, real_blocked;
 sigset_t saved_sigmask;
 struct sigpending pending;

 unsigned long sas_ss_sp;
 size_t sas_ss_size;
 int (*notifier)(void *priv);
 void *notifier_data;
 sigset_t *notifier_mask;



 struct audit_context *audit_context;




 seccomp_t seccomp;


    u32 parent_exec_id;
    u32 self_exec_id;

 spinlock_t alloc_lock;


 spinlock_t pi_lock;
# 1241 "linux-2.6.26/include/linux/sched.h"
 void *journal_info;


 struct bio *bio_list, **bio_tail;


 struct reclaim_state *reclaim_state;

 struct backing_dev_info *backing_dev_info;

 struct io_context *io_context;

 unsigned long ptrace_message;
 siginfo_t *last_siginfo;




 struct task_io_accounting ioac;
# 1288 "linux-2.6.26/include/linux/sched.h"
 atomic_t fs_excl;
 struct rcu_head rcu;




 struct pipe_inode_info *splice_pipe;






 struct prop_local_single dirties;




};
# 1327 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) int rt_prio(int prio)
{
 if (__builtin_expect(!!(prio < 100), 0))
  return 1;
 return 0;
}

static inline  __attribute__((always_inline)) int rt_task(struct task_struct *p)
{
 return rt_prio(p->prio);
}

static inline  __attribute__((always_inline)) void set_task_session(struct task_struct *tsk, pid_t session)
{
 tsk->signal->__session = session;
}

static inline  __attribute__((always_inline)) void set_task_pgrp(struct task_struct *tsk, pid_t pgrp)
{
 tsk->signal->__pgrp = pgrp;
}

static inline  __attribute__((always_inline)) struct pid *task_pid(struct task_struct *task)
{
 return task->pids[PIDTYPE_PID].pid;
}

static inline  __attribute__((always_inline)) struct pid *task_tgid(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_PID].pid;
}

static inline  __attribute__((always_inline)) struct pid *task_pgrp(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_PGID].pid;
}

static inline  __attribute__((always_inline)) struct pid *task_session(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_SID].pid;
}

struct pid_namespace;
# 1385 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) pid_t task_pid_nr(struct task_struct *tsk)
{
 return tsk->pid;
}

pid_t task_pid_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline  __attribute__((always_inline)) pid_t task_pid_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_pid(tsk));
}


static inline  __attribute__((always_inline)) pid_t task_tgid_nr(struct task_struct *tsk)
{
 return tsk->tgid;
}

pid_t task_tgid_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline  __attribute__((always_inline)) pid_t task_tgid_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_tgid(tsk));
}


static inline  __attribute__((always_inline)) pid_t task_pgrp_nr(struct task_struct *tsk)
{
 return tsk->signal->__pgrp;
}

pid_t task_pgrp_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline  __attribute__((always_inline)) pid_t task_pgrp_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_pgrp(tsk));
}


static inline  __attribute__((always_inline)) pid_t task_session_nr(struct task_struct *tsk)
{
 return tsk->signal->__session;
}

pid_t task_session_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline  __attribute__((always_inline)) pid_t task_session_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_session(tsk));
}
# 1445 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) int pid_alive(struct task_struct *p)
{
 return p->pids[PIDTYPE_PID].pid != ((void *)0);
}







static inline  __attribute__((always_inline)) int is_global_init(struct task_struct *tsk)
{
 return tsk->pid == 1;
}





extern int is_container_init(struct task_struct *tsk);

typedef  struct pid   _GLOBAL_118_T; extern  _GLOBAL_118_T  * global_cad_pid[NUM_STACKS];    

extern void free_task(struct task_struct *tsk);


extern void __put_task_struct(struct task_struct *t);

static inline  __attribute__((always_inline)) void put_task_struct(struct task_struct *t)
{
 if (atomic_dec_and_test(&t->usage))
  __put_task_struct(t);
}
# 1540 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) int set_cpus_allowed_ptr(struct task_struct *p,
           const cpumask_t *new_mask)
{
 if (!(__builtin_constant_p(((0))) ? constant_test_bit(((0)), ((*new_mask).bits)) : variable_test_bit(((0)), ((*new_mask).bits))))
  return -22;
 return 0;
}

static inline  __attribute__((always_inline)) int set_cpus_allowed(struct task_struct *p, cpumask_t new_mask)
{
 return set_cpus_allowed_ptr(p, &new_mask);
}

extern unsigned long long sched_clock(void);


static inline  __attribute__((always_inline)) void sched_clock_init(void)
{
}

static inline  __attribute__((always_inline)) u64 sched_clock_cpu(int cpu)
{
 return sched_clock();
}

static inline  __attribute__((always_inline)) void sched_clock_tick(void)
{
}

static inline  __attribute__((always_inline)) void sched_clock_idle_sleep_event(void)
{
}

static inline  __attribute__((always_inline)) void sched_clock_idle_wakeup_event(u64 delta_ns)
{
}
# 1588 "linux-2.6.26/include/linux/sched.h"
extern unsigned long long cpu_clock(int cpu);

extern unsigned long long
task_sched_runtime(struct task_struct *task);
# 1600 "linux-2.6.26/include/linux/sched.h"
extern void sched_clock_idle_sleep_event(void);
extern void sched_clock_idle_wakeup_event(u64 delta_ns);




static inline  __attribute__((always_inline)) void idle_task_exit(void) {}


extern void sched_idle_next(void);




static inline  __attribute__((always_inline)) void wake_up_idle_cpu(int cpu) { }
# 1630 "linux-2.6.26/include/linux/sched.h"
typedef  unsigned int   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_sysctl_sched_rt_period[NUM_STACKS];    
typedef  int  _GLOBAL_120_T; extern  _GLOBAL_120_T  global_sysctl_sched_rt_runtime[NUM_STACKS];   

int sched_rt_handler(struct ctl_table *table, int write,
  struct file *filp, void *buffer, size_t *lenp,
  loff_t *ppos);

typedef  unsigned int   _GLOBAL_121_T; extern  _GLOBAL_121_T  global_sysctl_sched_compat_yield[NUM_STACKS];    






static inline  __attribute__((always_inline)) int rt_mutex_getprio(struct task_struct *p)
{
 return p->normal_prio;
}



extern void set_user_nice(struct task_struct *p, long nice);
extern int task_prio(const struct task_struct *p);
extern int task_nice(const struct task_struct *p);
extern int can_nice(const struct task_struct *p, const int nice);
extern int task_curr(const struct task_struct *p);
extern int idle_cpu(int cpu);
extern int sched_setscheduler(struct task_struct *, int, struct sched_param *);
extern struct task_struct *idle_task(int cpu);
extern struct task_struct *curr_task(int cpu);
extern void set_curr_task(int cpu, struct task_struct *p);

void yield(void);




typedef  struct exec_domain   _GLOBAL_122_T; extern  _GLOBAL_122_T  global_default_exec_domain[NUM_STACKS];    

union thread_union {
 struct thread_info thread_info;
 unsigned long stack[(((1UL) << 12) << 1)/sizeof(long)];
};


static inline  __attribute__((always_inline)) int kstack_end(void *addr)
{



 return !(((unsigned long)addr+sizeof(void*)-1) & ((((1UL) << 12) << 1)-sizeof(void*)));
}


typedef  union thread_union   _GLOBAL_123_T; extern  _GLOBAL_123_T  global_init_thread_union[NUM_STACKS];    
typedef  struct task_struct   _GLOBAL_124_T; extern  _GLOBAL_124_T  global_init_task[NUM_STACKS];    

typedef  struct mm_struct   _GLOBAL_125_T; extern  _GLOBAL_125_T  global_init_mm[NUM_STACKS];    

extern struct pid_namespace init_pid_ns;
# 1707 "linux-2.6.26/include/linux/sched.h"
extern struct task_struct *find_task_by_pid_type_ns(int type, int pid,
  struct pid_namespace *ns);

static inline  __attribute__((always_inline)) struct task_struct * find_task_by_pid(pid_t nr)
{
 return find_task_by_pid_type_ns(PIDTYPE_PID, nr, &init_pid_ns);
}
extern struct task_struct *find_task_by_vpid(pid_t nr);
extern struct task_struct *find_task_by_pid_ns(pid_t nr,
  struct pid_namespace *ns);

extern void __set_special_pids(struct pid *pid);


extern struct user_struct * alloc_uid(struct user_namespace *, uid_t);
static inline  __attribute__((always_inline)) struct user_struct *get_uid(struct user_struct *u)
{
 atomic_inc(&u->__count);
 return u;
}
extern void free_uid(struct user_struct *);
extern void switch_uid(struct user_struct *);
extern void release_uids(struct user_namespace *ns);

# 1 "linux-2.6.26/include/asm/current.h" 1
# 1732 "linux-2.6.26/include/linux/sched.h" 2

extern void do_timer(unsigned long ticks);

extern int wake_up_state(struct task_struct *tsk, unsigned int state);
extern int wake_up_process(struct task_struct *tsk);
extern void wake_up_new_task(struct task_struct *tsk,
    unsigned long clone_flags);



 static inline  __attribute__((always_inline)) void kick_process(struct task_struct *tsk) { }

extern void sched_fork(struct task_struct *p, int clone_flags);
extern void sched_dead(struct task_struct *p);

extern int in_group_p(gid_t);
extern int in_egroup_p(gid_t);

extern void proc_caches_init(void);
extern void flush_signals(struct task_struct *);
extern void ignore_signals(struct task_struct *);
extern void flush_signal_handlers(struct task_struct *, int force_default);
extern int dequeue_signal(struct task_struct *tsk, sigset_t *mask, siginfo_t *info);

static inline  __attribute__((always_inline)) int dequeue_signal_lock(struct task_struct *tsk, sigset_t *mask, siginfo_t *info)
{
 unsigned long flags;
 int ret;

 do { (void)(flags); do { do { } while (0); (void)0; (void)(&tsk->sighand->siglock); } while (0); } while (0);
 ret = dequeue_signal(tsk, mask, info);
 do { (void)(flags); do { do { } while (0); (void)0; (void)(&tsk->sighand->siglock); } while (0); } while (0);

 return ret;
}

extern void block_all_signals(int (*notifier)(void *priv), void *priv,
         sigset_t *mask);
extern void unblock_all_signals(void);
extern void release_task(struct task_struct * p);
extern int send_sig_info(int, struct siginfo *, struct task_struct *);
extern int force_sigsegv(int, struct task_struct *);
extern int force_sig_info(int, struct siginfo *, struct task_struct *);
extern int __kill_pgrp_info(int sig, struct siginfo *info, struct pid *pgrp);
extern int kill_pid_info(int sig, struct siginfo *info, struct pid *pid);
extern int kill_pid_info_as_uid(int, struct siginfo *, struct pid *, uid_t, uid_t, u32);
extern int kill_pgrp(struct pid *pid, int sig, int priv);
extern int kill_pid(struct pid *pid, int sig, int priv);
extern int kill_proc_info(int, struct siginfo *, pid_t);
extern void do_notify_parent(struct task_struct *, int);
extern void force_sig(int, struct task_struct *);
extern void force_sig_specific(int, struct task_struct *);
extern int send_sig(int, struct task_struct *, int);
extern void zap_other_threads(struct task_struct *p);
extern int kill_proc(pid_t, int, int);
extern struct sigqueue *sigqueue_alloc(void);
extern void sigqueue_free(struct sigqueue *);
extern int send_sigqueue(struct sigqueue *, struct task_struct *, int group);
extern int do_sigaction(int, struct k_sigaction *, struct k_sigaction *);
extern int do_sigaltstack(const stack_t *, stack_t *, unsigned long);

static inline  __attribute__((always_inline)) int kill_cad_pid(int sig, int priv)
{
 return kill_pid(global_cad_pid[get_stack_id()], sig, priv);
}






static inline  __attribute__((always_inline)) int is_si_special(const struct siginfo *info)
{
 return info <= ((struct siginfo *) 2);
}



static inline  __attribute__((always_inline)) int on_sig_stack(unsigned long sp)
{
 return (sp - nsc_get_task()->sas_ss_sp < nsc_get_task()->sas_ss_size);
}

static inline  __attribute__((always_inline)) int sas_ss_flags(unsigned long sp)
{
 return (nsc_get_task()->sas_ss_size == 0 ? 2
  : on_sig_stack(sp) ? 1 : 0);
}




extern struct mm_struct * mm_alloc(void);


extern void __mmdrop(struct mm_struct *);
static inline  __attribute__((always_inline)) void mmdrop(struct mm_struct * mm)
{
 if (__builtin_expect(!!(atomic_dec_and_test(&mm->mm_count)), 0))
  __mmdrop(mm);
}


extern void mmput(struct mm_struct *);

extern struct mm_struct *get_task_mm(struct task_struct *task);

extern void mm_release(struct task_struct *, struct mm_struct *);

extern struct mm_struct *dup_mm(struct task_struct *tsk);

extern int copy_thread(int, unsigned long, unsigned long, unsigned long, struct task_struct *, struct pt_regs *);
extern void flush_thread(void);
extern void exit_thread(void);

extern void exit_files(struct task_struct *);
extern void __cleanup_signal(struct signal_struct *);
extern void __cleanup_sighand(struct sighand_struct *);

extern void exit_itimers(struct signal_struct *);
extern void flush_itimer_signals(void);

extern void do_group_exit(int);

extern void daemonize(const char *, ...);
extern int allow_signal(int);
extern int disallow_signal(int);

extern int do_execve(char *, char * *, char * *, struct pt_regs *);
extern long do_fork(unsigned long, unsigned long, struct pt_regs *, unsigned long, int *, int *);
struct task_struct *fork_idle(int);

extern void set_task_comm(struct task_struct *tsk, char *from);
extern char *get_task_comm(char *to, struct task_struct *tsk);
# 1900 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) int has_group_leader_pid(struct task_struct *p)
{
 return p->pid == p->tgid;
}

static inline 
__attribute__((always_inline)) int same_thread_group(struct task_struct *p1, struct task_struct *p2)
{
 return p1->tgid == p2->tgid;
}

static inline  __attribute__((always_inline)) struct task_struct *next_thread(const struct task_struct *p)
{
 return ({ const typeof( ((struct task_struct *)0)->thread_group ) *__mptr = (({ typeof(p->thread_group.next) _________p1 = (*(volatile typeof(p->thread_group.next) *)&(p->thread_group.next)); do { } while (0); (_________p1); })); (struct task_struct *)( (char *)__mptr - __builtin_offsetof(struct task_struct,thread_group) );})
                                      ;
}

static inline  __attribute__((always_inline)) int thread_group_empty(struct task_struct *p)
{
 return list_empty(&p->thread_group);
}
# 1935 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) void task_lock(struct task_struct *p)
{
 do { do { } while (0); (void)0; (void)(&p->alloc_lock); } while (0);
}

static inline  __attribute__((always_inline)) void task_unlock(struct task_struct *p)
{
 do { do { } while (0); (void)0; (void)(&p->alloc_lock); } while (0);
}

extern struct sighand_struct *lock_task_sighand(struct task_struct *tsk,
       unsigned long *flags);

static inline  __attribute__((always_inline)) void unlock_task_sighand(struct task_struct *tsk,
      unsigned long *flags)
{
 do { (void)(*flags); do { do { } while (0); (void)0; (void)(&tsk->sighand->siglock); } while (0); } while (0);
}






static inline  __attribute__((always_inline)) void setup_thread_stack(struct task_struct *p, struct task_struct *org)
{
 *((struct thread_info *)(p)->stack) = *((struct thread_info *)(org)->stack);
 ((struct thread_info *)(p)->stack)->task = p;
}

static inline  __attribute__((always_inline)) unsigned long *end_of_stack(struct task_struct *p)
{
 return (unsigned long *)(((struct thread_info *)(p)->stack) + 1);
}



extern void thread_info_cache_init(void);




static inline  __attribute__((always_inline)) void set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 set_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline  __attribute__((always_inline)) void clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 clear_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline  __attribute__((always_inline)) int test_and_set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_set_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline  __attribute__((always_inline)) int test_and_clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_clear_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline  __attribute__((always_inline)) int test_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline  __attribute__((always_inline)) void set_tsk_need_resched(struct task_struct *tsk)
{
 set_tsk_thread_flag(tsk,3);
}

static inline  __attribute__((always_inline)) void clear_tsk_need_resched(struct task_struct *tsk)
{
 clear_tsk_thread_flag(tsk,3);
}

static inline  __attribute__((always_inline)) int test_tsk_need_resched(struct task_struct *tsk)
{
 return __builtin_expect(!!(test_tsk_thread_flag(tsk,3)), 0);
}

static inline  __attribute__((always_inline)) int signal_pending(struct task_struct *p)
{
 return __builtin_expect(!!(test_tsk_thread_flag(p,2)), 0);
}

extern int __fatal_signal_pending(struct task_struct *p);

static inline  __attribute__((always_inline)) int fatal_signal_pending(struct task_struct *p)
{
 return signal_pending(p) && __fatal_signal_pending(p);
}

static inline  __attribute__((always_inline)) int signal_pending_state(long state, struct task_struct *p)
{
 if (!(state & (1 | 128)))
  return 0;
 if (!signal_pending(p))
  return 0;

 if (state & (4 | 8))
  return 0;

 return (state & 1) || __fatal_signal_pending(p);
}

static inline  __attribute__((always_inline)) int need_resched(void)
{
 return __builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 3)), 0);
}
# 2054 "linux-2.6.26/include/linux/sched.h"
extern int _cond_resched(void);






static inline  __attribute__((always_inline)) int cond_resched(void)
{
 return _cond_resched();
}

extern int cond_resched_lock(spinlock_t * lock);
extern int cond_resched_softirq(void);
static inline  __attribute__((always_inline)) int cond_resched_bkl(void)
{
 return _cond_resched();
}






static inline  __attribute__((always_inline)) int spin_needbreak(spinlock_t *lock)
{



 return 0;

}







extern void recalc_sigpending_and_wake(struct task_struct *t);
extern void recalc_sigpending(void);

extern void signal_wake_up(struct task_struct *t, int resume_stopped);
# 2112 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) unsigned int task_cpu(const struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) void set_task_cpu(struct task_struct *p, unsigned int cpu)
{
}




extern void arch_pick_mmap_layout(struct mm_struct *mm);
# 2134 "linux-2.6.26/include/linux/sched.h"
extern long sched_setaffinity(pid_t pid, const cpumask_t *new_mask);
extern long sched_getaffinity(pid_t pid, cpumask_t *mask);

typedef  int  _GLOBAL_126_T; extern  _GLOBAL_126_T  global_sched_mc_power_savings[NUM_STACKS]; extern  _GLOBAL_126_T  global_sched_smt_power_savings[NUM_STACKS];    

extern void normalize_rt_tasks(void);
# 2186 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) void add_rchar(struct task_struct *tsk, ssize_t amt)
{
}

static inline  __attribute__((always_inline)) void add_wchar(struct task_struct *tsk, ssize_t amt)
{
}

static inline  __attribute__((always_inline)) void inc_syscr(struct task_struct *tsk)
{
}

static inline  __attribute__((always_inline)) void inc_syscw(struct task_struct *tsk)
{
}





static inline  __attribute__((always_inline)) void migration_init(void)
{
}
# 2219 "linux-2.6.26/include/linux/sched.h"
static inline  __attribute__((always_inline)) void mm_update_next_owner(struct mm_struct *mm)
{
}

static inline  __attribute__((always_inline)) void mm_init_owner(struct mm_struct *mm, struct task_struct *p)
{
}
# 6 "linux-2.6.26/include/linux/nsproxy.h" 2

struct mnt_namespace;
struct uts_namespace;
struct ipc_namespace;
struct pid_namespace;
# 24 "linux-2.6.26/include/linux/nsproxy.h"
struct nsproxy {
 atomic_t count;
 struct uts_namespace *uts_ns;
 struct ipc_namespace *ipc_ns;
 struct mnt_namespace *mnt_ns;
 struct pid_namespace *pid_ns;
 struct user_namespace *user_ns;
 struct net *net_ns;
};
typedef  struct nsproxy   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_init_nsproxy[NUM_STACKS];    
# 60 "linux-2.6.26/include/linux/nsproxy.h"
static inline  __attribute__((always_inline)) struct nsproxy *task_nsproxy(struct task_struct *tsk)
{
 return ({ typeof(tsk->nsproxy) _________p1 = (*(volatile typeof(tsk->nsproxy) *)&(tsk->nsproxy)); do { } while (0); (_________p1); });
}

int copy_namespaces(unsigned long flags, struct task_struct *tsk);
void exit_task_namespaces(struct task_struct *tsk);
void switch_task_namespaces(struct task_struct *tsk, struct nsproxy *new);
void free_nsproxy(struct nsproxy *ns);
int unshare_nsproxy_namespaces(unsigned long, struct nsproxy **,
 struct fs_struct *);

static inline  __attribute__((always_inline)) void put_nsproxy(struct nsproxy *ns)
{
 if (atomic_dec_and_test(&ns->count)) {
  free_nsproxy(ns);
 }
}

static inline  __attribute__((always_inline)) void get_nsproxy(struct nsproxy *ns)
{
 atomic_inc(&ns->count);
}




static inline  __attribute__((always_inline)) int ns_cgroup_clone(struct task_struct *tsk) { return 0; }
# 18 "linux-2.6.26/net/sysctl_net.c" 2

# 1 "linux-2.6.26/include/net/sock.h" 1
# 47 "linux-2.6.26/include/net/sock.h"
# 1 "linux-2.6.26/include/linux/module.h" 1
# 10 "linux-2.6.26/include/linux/module.h"
# 1 "linux-2.6.26/include/linux/stat.h" 1





# 1 "linux-2.6.26/include/asm/stat.h" 1
# 68 "linux-2.6.26/include/asm/stat.h"
struct stat {
 unsigned long st_dev;
 unsigned long st_ino;
 unsigned long st_nlink;

 unsigned int st_mode;
 unsigned int st_uid;
 unsigned int st_gid;
 unsigned int __pad0;
 unsigned long st_rdev;
 long st_size;
 long st_blksize;
 long st_blocks;

 unsigned long st_atime;
 unsigned long st_atime_nsec;
 unsigned long st_mtime;
 unsigned long st_mtime_nsec;
 unsigned long st_ctime;
 unsigned long st_ctime_nsec;
 long __unused[3];
};



struct __old_kernel_stat {
 unsigned short st_dev;
 unsigned short st_ino;
 unsigned short st_mode;
 unsigned short st_nlink;
 unsigned short st_uid;
 unsigned short st_gid;
 unsigned short st_rdev;






 unsigned int st_size;
 unsigned int st_atime;
 unsigned int st_mtime;
 unsigned int st_ctime;

};
# 7 "linux-2.6.26/include/linux/stat.h" 2
# 62 "linux-2.6.26/include/linux/stat.h"
struct kstat {
 u64 ino;
 dev_t dev;
 umode_t mode;
 unsigned int nlink;
 uid_t uid;
 gid_t gid;
 dev_t rdev;
 loff_t size;
 struct timespec atime;
 struct timespec mtime;
 struct timespec ctime;
 unsigned long blksize;
 unsigned long long blocks;
};
# 11 "linux-2.6.26/include/linux/module.h" 2


# 1 "linux-2.6.26/include/linux/kmod.h" 1
# 33 "linux-2.6.26/include/linux/kmod.h"
static inline  __attribute__((always_inline)) int request_module(const char * name, ...) { return -38; }




struct key;
struct file;
struct subprocess_info;


struct subprocess_info *call_usermodehelper_setup(char *path,
        char **argv, char **envp);


void call_usermodehelper_setkeys(struct subprocess_info *info,
     struct key *session_keyring);
int call_usermodehelper_stdinpipe(struct subprocess_info *sub_info,
      struct file **filp);
void call_usermodehelper_setcleanup(struct subprocess_info *info,
        void (*cleanup)(char **argv, char **envp));

enum umh_wait {
 UMH_NO_WAIT = -1,
 UMH_WAIT_EXEC = 0,
 UMH_WAIT_PROC = 1,
};


int call_usermodehelper_exec(struct subprocess_info *info, enum umh_wait wait);



void call_usermodehelper_freeinfo(struct subprocess_info *info);

static inline  __attribute__((always_inline)) int
call_usermodehelper(char *path, char **argv, char **envp, enum umh_wait wait)
{
 struct subprocess_info *info;

 info = call_usermodehelper_setup(path, argv, envp);
 if (info == ((void *)0))
  return -12;
 return call_usermodehelper_exec(info, wait);
}

static inline  __attribute__((always_inline)) int
call_usermodehelper_keys(char *path, char **argv, char **envp,
    struct key *session_keyring, enum umh_wait wait)
{
 struct subprocess_info *info;

 info = call_usermodehelper_setup(path, argv, envp);
 if (info == ((void *)0))
  return -12;

 call_usermodehelper_setkeys(info, session_keyring);
 return call_usermodehelper_exec(info, wait);
}

extern void usermodehelper_init(void);

struct file;
extern int call_usermodehelper_pipe(char *path, char *argv[], char *envp[],
        struct file **filp);
# 14 "linux-2.6.26/include/linux/module.h" 2
# 1 "linux-2.6.26/include/linux/elf.h" 1




# 1 "linux-2.6.26/include/linux/elf-em.h" 1
# 6 "linux-2.6.26/include/linux/elf.h" 2

# 1 "linux-2.6.26/include/asm/elf.h" 1
# 9 "linux-2.6.26/include/asm/elf.h"
# 1 "linux-2.6.26/include/asm/user.h" 1



# 1 "linux-2.6.26/include/asm/user_64.h" 1
# 50 "linux-2.6.26/include/asm/user_64.h"
struct user_i387_struct {
 unsigned short cwd;
 unsigned short swd;
 unsigned short twd;

 unsigned short fop;
 __u64 rip;
 __u64 rdp;
 __u32 mxcsr;
 __u32 mxcsr_mask;
 __u32 st_space[32];
 __u32 xmm_space[64];
 __u32 padding[24];
};




struct user_regs_struct {
 unsigned long r15;
 unsigned long r14;
 unsigned long r13;
 unsigned long r12;
 unsigned long bp;
 unsigned long bx;
 unsigned long r11;
 unsigned long r10;
 unsigned long r9;
 unsigned long r8;
 unsigned long ax;
 unsigned long cx;
 unsigned long dx;
 unsigned long si;
 unsigned long di;
 unsigned long orig_ax;
 unsigned long ip;
 unsigned long cs;
 unsigned long flags;
 unsigned long sp;
 unsigned long ss;
 unsigned long fs_base;
 unsigned long gs_base;
 unsigned long ds;
 unsigned long es;
 unsigned long fs;
 unsigned long gs;
};





struct user {


  struct user_regs_struct regs;

  int u_fpvalid;

  int pad0;
  struct user_i387_struct i387;

  unsigned long int u_tsize;
  unsigned long int u_dsize;
  unsigned long int u_ssize;
  unsigned long start_code;
  unsigned long start_stack;



  long int signal;
  int reserved;
  int pad1;
  unsigned long u_ar0;

  struct user_i387_struct *u_fpstate;
  unsigned long magic;
  char u_comm[32];
  unsigned long u_debugreg[8];
  unsigned long error_code;
  unsigned long fault_address;
};
# 5 "linux-2.6.26/include/asm/user.h" 2
# 10 "linux-2.6.26/include/asm/elf.h" 2


typedef unsigned long elf_greg_t;


typedef elf_greg_t elf_gregset_t[(sizeof(struct user_regs_struct) / sizeof(elf_greg_t))];

typedef struct user_i387_struct elf_fpregset_t;
# 75 "linux-2.6.26/include/asm/elf.h"
# 1 "linux-2.6.26/include/asm/vdso.h" 1




typedef  const char   _GLOBAL_128_T; extern  _GLOBAL_128_T  _GLOBAL_0_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_1_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_2_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_3_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_4_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_5_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_6_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_7_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_8_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_9_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_10_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_11_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_12_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_13_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_14_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_15_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_16_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_17_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_18_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_19_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_20_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_21_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_22_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_23_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_24_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_25_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_26_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_27_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_28_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_29_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_30_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_31_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_32_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_33_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_34_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_35_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_36_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_37_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_38_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_39_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_40_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_41_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_42_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_43_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_44_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_45_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_46_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_47_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_48_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_49_VDSO64_PRELINK_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_VDSO64_PRELINK_I) *_GLOBAL_VDSO64_PRELINK_12_A[NUM_STACKS];   
# 36 "linux-2.6.26/include/asm/vdso.h"
extern void __kernel_sigreturn;
extern void __kernel_rt_sigreturn;
# 76 "linux-2.6.26/include/asm/elf.h" 2

typedef  unsigned int   _GLOBAL_129_T; extern  _GLOBAL_129_T  global_vdso_enabled[NUM_STACKS];    
# 149 "linux-2.6.26/include/asm/elf.h"
static inline  __attribute__((always_inline)) void start_ia32_thread(struct pt_regs *regs, u32 ip, u32 sp)
{
 asm volatile("movl %0,%%fs" :: "r" (0));
 asm volatile("movl %0,%%es; movl %0,%%ds" : : "r" (0x2b));
 load_gs_index(0);
 regs->ip = ip;
 regs->sp = sp;
 regs->flags = 0x00000200;
 regs->cs = 0x23;
 regs->ss = 0x2b;
}

static inline  __attribute__((always_inline)) void elf_common_init(struct thread_struct *t,
       struct pt_regs *regs, const u16 ds)
{
 regs->ax = regs->bx = regs->cx = regs->dx = 0;
 regs->si = regs->di = regs->bp = 0;
 regs->r8 = regs->r9 = regs->r10 = regs->r11 = 0;
 regs->r12 = regs->r13 = regs->r14 = regs->r15 = 0;
 t->fs = t->gs = 0;
 t->fsindex = t->gsindex = 0;
 t->ds = t->es = ds;
}
# 239 "linux-2.6.26/include/asm/elf.h"
extern void set_personality_64bit(void);
typedef  unsigned int   _GLOBAL_130_T; extern  _GLOBAL_130_T  global_sysctl_vsyscall32[NUM_STACKS];    
typedef  int  _GLOBAL_131_T; extern  _GLOBAL_131_T  global_force_personality32[NUM_STACKS];   
# 278 "linux-2.6.26/include/asm/elf.h"
struct task_struct;
# 323 "linux-2.6.26/include/asm/elf.h"
struct linux_binprm;


extern int arch_setup_additional_pages(struct linux_binprm *bprm,
           int executable_stack);

extern int syscall32_setup_pages(struct linux_binprm *, int exstack);


extern unsigned long arch_randomize_brk(struct mm_struct *mm);
# 8 "linux-2.6.26/include/linux/elf.h" 2


struct file;
# 20 "linux-2.6.26/include/linux/elf.h"
typedef __u32 Elf32_Addr;
typedef __u16 Elf32_Half;
typedef __u32 Elf32_Off;
typedef __s32 Elf32_Sword;
typedef __u32 Elf32_Word;


typedef __u64 Elf64_Addr;
typedef __u16 Elf64_Half;
typedef __s16 Elf64_SHalf;
typedef __u64 Elf64_Off;
typedef __s32 Elf64_Sword;
typedef __u32 Elf64_Word;
typedef __u64 Elf64_Xword;
typedef __s64 Elf64_Sxword;
# 127 "linux-2.6.26/include/linux/elf.h"
typedef struct dynamic{
  Elf32_Sword d_tag;
  union{
    Elf32_Sword d_val;
    Elf32_Addr d_ptr;
  } d_un;
} Elf32_Dyn;

typedef struct {
  Elf64_Sxword d_tag;
  union {
    Elf64_Xword d_val;
    Elf64_Addr d_ptr;
  } d_un;
} Elf64_Dyn;
# 150 "linux-2.6.26/include/linux/elf.h"
typedef struct elf32_rel {
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;

typedef struct elf64_rel {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;

typedef struct elf32_rela{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct elf64_rela {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;

typedef struct elf32_sym{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Half st_shndx;
} Elf32_Sym;

typedef struct elf64_sym {
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Half st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct elf32_hdr{
  unsigned char e_ident[16];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct elf64_hdr {
  unsigned char e_ident[16];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;







typedef struct elf32_phdr{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct elf64_phdr {
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 289 "linux-2.6.26/include/linux/elf.h"
typedef struct {
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct elf64_shdr {
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 365 "linux-2.6.26/include/linux/elf.h"
typedef struct elf32_note {
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;


typedef struct elf64_note {
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;
# 388 "linux-2.6.26/include/linux/elf.h"
extern Elf64_Dyn _DYNAMIC [];
# 398 "linux-2.6.26/include/linux/elf.h"
static inline  __attribute__((always_inline)) int elf_coredump_extra_notes_size(void) { return 0; }
static inline  __attribute__((always_inline)) int elf_coredump_extra_notes_write(struct file *file,
   loff_t *foffset) { return 0; }
# 15 "linux-2.6.26/include/linux/module.h" 2


# 1 "linux-2.6.26/include/linux/moduleparam.h" 1
# 29 "linux-2.6.26/include/linux/moduleparam.h"
struct kernel_param;


typedef int (*param_set_fn)(const char *val, struct kernel_param *kp);

typedef int (*param_get_fn)(char *buffer, struct kernel_param *kp);

struct kernel_param {
 const char *name;
 unsigned int perm;
 param_set_fn set;
 param_get_fn get;
 union {
  void *arg;
  const struct kparam_string *str;
  const struct kparam_array *arr;
 };
};


struct kparam_string {
 unsigned int maxlen;
 char *string;
};


struct kparam_array
{
 unsigned int max;
 unsigned int *num;
 param_set_fn set;
 param_get_fn get;
 unsigned int elemsize;
 void *elem;
};
# 112 "linux-2.6.26/include/linux/moduleparam.h"
extern int parse_args(const char *name,
        char *args,
        struct kernel_param *params,
        unsigned num,
        int (*unknown)(char *param, char *val));







extern int param_set_byte(const char *val, struct kernel_param *kp);
extern int param_get_byte(char *buffer, struct kernel_param *kp);


extern int param_set_short(const char *val, struct kernel_param *kp);
extern int param_get_short(char *buffer, struct kernel_param *kp);


extern int param_set_ushort(const char *val, struct kernel_param *kp);
extern int param_get_ushort(char *buffer, struct kernel_param *kp);


extern int param_set_int(const char *val, struct kernel_param *kp);
extern int param_get_int(char *buffer, struct kernel_param *kp);


extern int param_set_uint(const char *val, struct kernel_param *kp);
extern int param_get_uint(char *buffer, struct kernel_param *kp);


extern int param_set_long(const char *val, struct kernel_param *kp);
extern int param_get_long(char *buffer, struct kernel_param *kp);


extern int param_set_ulong(const char *val, struct kernel_param *kp);
extern int param_get_ulong(char *buffer, struct kernel_param *kp);


extern int param_set_charp(const char *val, struct kernel_param *kp);
extern int param_get_charp(char *buffer, struct kernel_param *kp);


extern int param_set_bool(const char *val, struct kernel_param *kp);
extern int param_get_bool(char *buffer, struct kernel_param *kp);


extern int param_set_invbool(const char *val, struct kernel_param *kp);
extern int param_get_invbool(char *buffer, struct kernel_param *kp);
# 176 "linux-2.6.26/include/linux/moduleparam.h"
extern int param_array_set(const char *val, struct kernel_param *kp);
extern int param_array_get(char *buffer, struct kernel_param *kp);

extern int param_set_copystring(const char *val, struct kernel_param *kp);
extern int param_get_string(char *buffer, struct kernel_param *kp);



struct module;
# 193 "linux-2.6.26/include/linux/moduleparam.h"
static inline  __attribute__((always_inline)) int module_param_sysfs_setup(struct module *mod,
        struct kernel_param *kparam,
        unsigned int num_params)
{
 return 0;
}

static inline  __attribute__((always_inline)) void module_param_sysfs_remove(struct module *mod)
{ }
# 18 "linux-2.6.26/include/linux/module.h" 2
# 1 "linux-2.6.26/include/linux/marker.h" 1
# 17 "linux-2.6.26/include/linux/marker.h"
struct module;
struct marker;
# 32 "linux-2.6.26/include/linux/marker.h"
typedef void marker_probe_func(void *probe_private, void *call_private,
  const char *fmt, va_list *args);

struct marker_probe_closure {
 marker_probe_func *func;
 void *probe_private;
};

struct marker {
 const char *name;
 const char *format;


 char state;
 char ptype;
 void (*call)(const struct marker *mdata,
  void *call_private, const char *fmt, ...);
 struct marker_probe_closure single;
 struct marker_probe_closure *multi;
} __attribute__((aligned(8))) ;
# 85 "linux-2.6.26/include/linux/marker.h"
static inline  __attribute__((always_inline)) void marker_update_probe_range(struct marker *begin,
 struct marker *end)
{ }
# 107 "linux-2.6.26/include/linux/marker.h"
static inline  __attribute__((always_inline)) void  __attribute__((format(printf,1,2))) ___mark_check_format(const char *fmt, ...)
{
}







extern marker_probe_func __mark_empty_function;

extern void marker_probe_cb(const struct marker *mdata,
 void *call_private, const char *fmt, ...);
extern void marker_probe_cb_noarg(const struct marker *mdata,
 void *call_private, const char *fmt, ...);





extern int marker_probe_register(const char *name, const char *format,
    marker_probe_func *probe, void *probe_private);




extern int marker_probe_unregister(const char *name,
 marker_probe_func *probe, void *probe_private);



extern int marker_probe_unregister_private_data(marker_probe_func *probe,
 void *probe_private);

extern void *marker_get_private_data(const char *name, marker_probe_func *probe,
 int num);
# 19 "linux-2.6.26/include/linux/module.h" 2
# 1 "linux-2.6.26/include/asm/local.h" 1






# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 8 "linux-2.6.26/include/asm/local.h" 2


typedef struct {
 atomic_long_t a;
} local_t;






static inline  __attribute__((always_inline)) void local_inc(local_t *l)
{
 asm volatile(" incq " "%0"
       : "+m" (l->a.counter));
}

static inline  __attribute__((always_inline)) void local_dec(local_t *l)
{
 asm volatile(" decq " "%0"
       : "+m" (l->a.counter));
}

static inline  __attribute__((always_inline)) void local_add(long i, local_t *l)
{
 asm volatile(" addq " "%1,%0"
       : "+m" (l->a.counter)
       : "ir" (i));
}

static inline  __attribute__((always_inline)) void local_sub(long i, local_t *l)
{
 asm volatile(" subq " "%1,%0"
       : "+m" (l->a.counter)
       : "ir" (i));
}
# 54 "linux-2.6.26/include/asm/local.h"
static inline  __attribute__((always_inline)) int local_sub_and_test(long i, local_t *l)
{
 unsigned char c;

 asm volatile(" subq " "%2,%0; sete %1"
       : "+m" (l->a.counter), "=qm" (c)
       : "ir" (i) : "memory");
 return c;
}
# 72 "linux-2.6.26/include/asm/local.h"
static inline  __attribute__((always_inline)) int local_dec_and_test(local_t *l)
{
 unsigned char c;

 asm volatile(" decq " "%0; sete %1"
       : "+m" (l->a.counter), "=qm" (c)
       : : "memory");
 return c != 0;
}
# 90 "linux-2.6.26/include/asm/local.h"
static inline  __attribute__((always_inline)) int local_inc_and_test(local_t *l)
{
 unsigned char c;

 asm volatile(" incq " "%0; sete %1"
       : "+m" (l->a.counter), "=qm" (c)
       : : "memory");
 return c != 0;
}
# 109 "linux-2.6.26/include/asm/local.h"
static inline  __attribute__((always_inline)) int local_add_negative(long i, local_t *l)
{
 unsigned char c;

 asm volatile(" addq " "%2,%0; sets %1"
       : "+m" (l->a.counter), "=qm" (c)
       : "ir" (i) : "memory");
 return c;
}
# 126 "linux-2.6.26/include/asm/local.h"
static inline  __attribute__((always_inline)) long local_add_return(long i, local_t *l)
{
 long __i;

 unsigned long flags;
 if (__builtin_expect(!!(global_boot_cpu_data[get_stack_id()].x86 <= 3), 0))
  goto no_xadd;


 __i = i;
 asm volatile(" xaddq " "%0, %1;"
       : "+r" (i), "+m" (l->a.counter)
       : : "memory");
 return i + __i;


no_xadd:
 (void)(flags);
 __i = atomic_long_read(&(l)->a);
 atomic_long_set(&(l)->a, (i + __i));
 (void)(flags);
 return i + __i;

}

static inline  __attribute__((always_inline)) long local_sub_return(long i, local_t *l)
{
 return local_add_return(-i, l);
}
# 20 "linux-2.6.26/include/linux/module.h" 2

# 1 "linux-2.6.26/include/asm/module.h" 1




struct mod_arch_specific {};
# 22 "linux-2.6.26/include/linux/module.h" 2
# 33 "linux-2.6.26/include/linux/module.h"
struct kernel_symbol
{
 unsigned long value;
 const char *name;
};

struct modversion_info
{
 unsigned long crc;
 char name[(64 - sizeof(unsigned long))];
};

struct module;

struct module_attribute {
        struct attribute attr;
        ssize_t (*show)(struct module_attribute *, struct module *, char *);
        ssize_t (*store)(struct module_attribute *, struct module *,
    const char *, size_t count);
 void (*setup)(struct module *, const char *);
 int (*test)(struct module *);
 void (*free)(struct module *);
};

struct module_kobject
{
 struct kobject kobj;
 struct module *mod;
 struct kobject *drivers_dir;
};


extern int init_module(void);
extern void cleanup_module(void);


struct exception_table_entry;

const struct exception_table_entry *
search_extable(const struct exception_table_entry *first,
        const struct exception_table_entry *last,
        unsigned long value);
void sort_extable(struct exception_table_entry *start,
    struct exception_table_entry *finish);
void sort_main_extable(void);
# 163 "linux-2.6.26/include/linux/module.h"
const struct exception_table_entry *search_exception_tables(unsigned long add);

struct notifier_block;
# 461 "linux-2.6.26/include/linux/module.h"
static inline  __attribute__((always_inline)) const struct exception_table_entry *
search_module_extables(unsigned long addr)
{
 return ((void *)0);
}


static inline  __attribute__((always_inline)) struct module *module_text_address(unsigned long addr)
{
 return ((void *)0);
}


static inline  __attribute__((always_inline)) struct module *__module_text_address(unsigned long addr)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) int is_module_address(unsigned long addr)
{
 return 0;
}






static inline  __attribute__((always_inline)) void __module_get(struct module *module)
{
}

static inline  __attribute__((always_inline)) int try_module_get(struct module *module)
{
 return 1;
}

static inline  __attribute__((always_inline)) void module_put(struct module *module)
{
}




static inline  __attribute__((always_inline)) const char *module_address_lookup(unsigned long addr,
       unsigned long *symbolsize,
       unsigned long *offset,
       char **modname,
       char *namebuf)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) int lookup_module_symbol_name(unsigned long addr, char *symname)
{
 return -34;
}

static inline  __attribute__((always_inline)) int lookup_module_symbol_attrs(unsigned long addr, unsigned long *size, unsigned long *offset, char *modname, char *name)
{
 return -34;
}

static inline  __attribute__((always_inline)) int module_get_kallsym(unsigned int symnum, unsigned long *value,
     char *type, char *name,
     char *module_name, int *exported)
{
 return -34;
}

static inline  __attribute__((always_inline)) unsigned long module_kallsyms_lookup_name(const char *name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int register_module_notifier(struct notifier_block * nb)
{

 return 0;
}

static inline  __attribute__((always_inline)) int unregister_module_notifier(struct notifier_block * nb)
{
 return 0;
}



static inline  __attribute__((always_inline)) void print_modules(void)
{
}

static inline  __attribute__((always_inline)) void module_update_markers(void)
{
}



struct device_driver;
# 576 "linux-2.6.26/include/linux/module.h"
static inline  __attribute__((always_inline)) int mod_sysfs_init(struct module *mod)
{
 return 0;
}

static inline  __attribute__((always_inline)) int mod_sysfs_setup(struct module *mod,
      struct kernel_param *kparam,
      unsigned int num_params)
{
 return 0;
}

static inline  __attribute__((always_inline)) int module_add_modinfo_attrs(struct module *mod)
{
 return 0;
}

static inline  __attribute__((always_inline)) void module_remove_modinfo_attrs(struct module *mod)
{ }
# 48 "linux-2.6.26/include/net/sock.h" 2

# 1 "linux-2.6.26/include/linux/netdevice.h" 1
# 28 "linux-2.6.26/include/linux/netdevice.h"
# 1 "linux-2.6.26/include/linux/if.h" 1
# 23 "linux-2.6.26/include/linux/if.h"
# 1 "linux-2.6.26/include/linux/socket.h" 1
# 11 "linux-2.6.26/include/linux/socket.h"
struct __kernel_sockaddr_storage {
 unsigned short ss_family;

 char __data[128 - sizeof(unsigned short)];


} __attribute__ ((aligned((__alignof__ (struct sockaddr *))))) ;



# 1 "linux-2.6.26/include/asm/socket.h" 1



# 1 "linux-2.6.26/include/asm/sockios.h" 1
# 5 "linux-2.6.26/include/asm/socket.h" 2
# 22 "linux-2.6.26/include/linux/socket.h" 2
# 1 "linux-2.6.26/include/linux/sockios.h" 1
# 23 "linux-2.6.26/include/linux/socket.h" 2
# 32 "linux-2.6.26/include/linux/socket.h"
typedef unsigned short sa_family_t;





struct sockaddr {
 sa_family_t sa_family;
 char sa_data[14];
};

struct linger {
 int l_onoff;
 int l_linger;
};
# 56 "linux-2.6.26/include/linux/socket.h"
struct msghdr {
 void * msg_name;
 int msg_namelen;
 struct iovec * msg_iov;
 __kernel_size_t msg_iovlen;
 void * msg_control;
 __kernel_size_t msg_controllen;
 unsigned msg_flags;
};







struct cmsghdr {
 __kernel_size_t cmsg_len;
        int cmsg_level;
        int cmsg_type;
};
# 129 "linux-2.6.26/include/linux/socket.h"
static inline  __attribute__((always_inline)) struct cmsghdr * __cmsg_nxthdr(void *__ctl, __kernel_size_t __size,
            struct cmsghdr *__cmsg)
{
 struct cmsghdr * __ptr;

 __ptr = (struct cmsghdr*)(((unsigned char *) __cmsg) + ( ((__cmsg->cmsg_len)+sizeof(long)-1) & ~(sizeof(long)-1) ));
 if ((unsigned long)((char*)(__ptr+1) - (char *) __ctl) > __size)
  return (struct cmsghdr *)0;

 return __ptr;
}

static inline  __attribute__((always_inline)) struct cmsghdr * cmsg_nxthdr (struct msghdr *__msg, struct cmsghdr *__cmsg)
{
 return __cmsg_nxthdr(__msg->msg_control, __msg->msg_controllen, __cmsg);
}







struct ucred {
 __u32 pid;
 __u32 uid;
 __u32 gid;
};
# 301 "linux-2.6.26/include/linux/socket.h"
extern int memcpy_fromiovec(unsigned char *kdata, struct iovec *iov, int len);
extern int memcpy_fromiovecend(unsigned char *kdata, struct iovec *iov,
    int offset, int len);
extern int csum_partial_copy_fromiovecend(unsigned char *kdata,
       struct iovec *iov,
       int offset,
       unsigned int len, __wsum *csump);

extern int verify_iovec(struct msghdr *m, struct iovec *iov, char *address, int mode);
extern int memcpy_toiovec(struct iovec *v, unsigned char *kdata, int len);
extern int move_addr_to_user(void *kaddr, int klen, void *uaddr, int *ulen);
extern int move_addr_to_kernel(void *uaddr, int ulen, void *kaddr);
extern int put_cmsg(struct msghdr*, int level, int type, int len, void *data);
# 24 "linux-2.6.26/include/linux/if.h" 2



# 1 "linux-2.6.26/include/linux/hdlc/ioctl.h" 1
# 37 "linux-2.6.26/include/linux/hdlc/ioctl.h"
typedef struct {
 unsigned int clock_rate;
 unsigned int clock_type;
 unsigned short loopback;
} sync_serial_settings;

typedef struct {
 unsigned int clock_rate;
 unsigned int clock_type;
 unsigned short loopback;
 unsigned int slot_map;
} te1_settings;

typedef struct {
 unsigned short encoding;
 unsigned short parity;
} raw_hdlc_proto;

typedef struct {
 unsigned int t391;
 unsigned int t392;
 unsigned int n391;
 unsigned int n392;
 unsigned int n393;
 unsigned short lmi;
 unsigned short dce;
} fr_proto;

typedef struct {
 unsigned int dlci;
} fr_proto_pvc;

typedef struct {
 unsigned int dlci;
 char master[16];
}fr_proto_pvc_info;

typedef struct {
    unsigned int interval;
    unsigned int timeout;
} cisco_proto;
# 28 "linux-2.6.26/include/linux/if.h" 2
# 96 "linux-2.6.26/include/linux/if.h"
enum {
 IF_OPER_UNKNOWN,
 IF_OPER_NOTPRESENT,
 IF_OPER_DOWN,
 IF_OPER_LOWERLAYERDOWN,
 IF_OPER_TESTING,
 IF_OPER_DORMANT,
 IF_OPER_UP,
};


enum {
 IF_LINK_MODE_DEFAULT,
 IF_LINK_MODE_DORMANT,
};
# 122 "linux-2.6.26/include/linux/if.h"
struct ifmap
{
 unsigned long mem_start;
 unsigned long mem_end;
 unsigned short base_addr;
 unsigned char irq;
 unsigned char dma;
 unsigned char port;

};

struct if_settings
{
 unsigned int type;
 unsigned int size;
 union {

  raw_hdlc_proto *raw_hdlc;
  cisco_proto *cisco;
  fr_proto *fr;
  fr_proto_pvc *fr_pvc;
  fr_proto_pvc_info *fr_pvc_info;


  sync_serial_settings *sync;
  te1_settings *te1;
 } ifs_ifsu;
};
# 158 "linux-2.6.26/include/linux/if.h"
struct ifreq
{

 union
 {
  char ifrn_name[16];
 } ifr_ifrn;

 union {
  struct sockaddr ifru_addr;
  struct sockaddr ifru_dstaddr;
  struct sockaddr ifru_broadaddr;
  struct sockaddr ifru_netmask;
  struct sockaddr ifru_hwaddr;
  short ifru_flags;
  int ifru_ivalue;
  int ifru_mtu;
  struct ifmap ifru_map;
  char ifru_slave[16];
  char ifru_newname[16];
  void * ifru_data;
  struct if_settings ifru_settings;
 } ifr_ifru;
};
# 208 "linux-2.6.26/include/linux/if.h"
struct ifconf
{
 int ifc_len;
 union
 {
  char *ifcu_buf;
  struct ifreq *ifcu_req;
 } ifc_ifcu;
};
# 29 "linux-2.6.26/include/linux/netdevice.h" 2
# 1 "linux-2.6.26/include/linux/if_ether.h" 1
# 107 "linux-2.6.26/include/linux/if_ether.h"
struct ethhdr {
 unsigned char h_dest[6];
 unsigned char h_source[6];
 __be16 h_proto;
} __attribute__((packed)) ;


# 1 "linux-2.6.26/include/linux/skbuff.h" 1
# 22 "linux-2.6.26/include/linux/skbuff.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 23 "linux-2.6.26/include/linux/skbuff.h" 2


# 1 "linux-2.6.26/include/linux/net.h" 1
# 25 "linux-2.6.26/include/linux/net.h"
struct poll_table_struct;
struct pipe_inode_info;
struct inode;
struct net;
# 50 "linux-2.6.26/include/linux/net.h"
typedef enum {
 SS_FREE = 0,
 SS_UNCONNECTED,
 SS_CONNECTING,
 SS_CONNECTED,
 SS_DISCONNECTING
} socket_state;





# 1 "linux-2.6.26/include/linux/random.h" 1
# 10 "linux-2.6.26/include/linux/random.h"
# 1 "linux-2.6.26/include/linux/ioctl.h" 1



# 1 "linux-2.6.26/include/asm/ioctl.h" 1
# 1 "linux-2.6.26/include/asm-generic/ioctl.h" 1
# 72 "linux-2.6.26/include/asm-generic/ioctl.h"
typedef  unsigned int   _GLOBAL_132_T; extern  _GLOBAL_132_T  global___invalid_size_argument_for_IOC[NUM_STACKS];    
# 1 "linux-2.6.26/include/asm/ioctl.h" 2
# 5 "linux-2.6.26/include/linux/ioctl.h" 2
# 11 "linux-2.6.26/include/linux/random.h" 2
# 35 "linux-2.6.26/include/linux/random.h"
struct rand_pool_info {
 int entropy_count;
 int buf_size;
 __u32 buf[0];
};





extern void rand_initialize_irq(int irq);

extern void add_input_randomness(unsigned int type, unsigned int code,
     unsigned int value);
extern void add_interrupt_randomness(int irq);

extern void get_random_bytes(void *buf, int nbytes);
void generate_random_uuid(unsigned char uuid_out[16]);

extern __u32 secure_ip_id(__be32 daddr);
extern u32 secure_ipv4_port_ephemeral(__be32 saddr, __be32 daddr, __be16 dport);
extern u32 secure_ipv6_port_ephemeral(const __be32 *saddr, const __be32 *daddr,
          __be16 dport);
extern __u32 secure_tcp_sequence_number(__be32 saddr, __be32 daddr,
     __be16 sport, __be16 dport);
extern __u32 secure_tcpv6_sequence_number(__be32 *saddr, __be32 *daddr,
       __be16 sport, __be16 dport);
extern u64 secure_dccp_sequence_number(__be32 saddr, __be32 daddr,
           __be16 sport, __be16 dport);


extern const struct file_operations random_fops, urandom_fops;


unsigned int get_random_int(void);
unsigned long randomize_range(unsigned long start, unsigned long end, unsigned long len);

u32 random32(void);
void srandom32(u32 seed);
# 63 "linux-2.6.26/include/linux/net.h" 2
# 86 "linux-2.6.26/include/linux/net.h"
enum sock_type {
 SOCK_STREAM = 1,
 SOCK_DGRAM = 2,
 SOCK_RAW = 3,
 SOCK_RDM = 4,
 SOCK_SEQPACKET = 5,
 SOCK_DCCP = 6,
 SOCK_PACKET = 10,
};





enum sock_shutdown_cmd {
 SHUT_RD = 0,
 SHUT_WR = 1,
 SHUT_RDWR = 2,
};
# 117 "linux-2.6.26/include/linux/net.h"
struct socket {
 socket_state state;
 unsigned long flags;
 const struct proto_ops *ops;
 struct fasync_struct *fasync_list;
 struct file *file;
 struct sock *sk;
 wait_queue_head_t wait;
 short type;
};

struct vm_area_struct;
struct page;
struct kiocb;
struct sockaddr;
struct msghdr;
struct module;

struct proto_ops {
 int family;
 struct module *owner;
 int (*release) (struct socket *sock);
 int (*bind) (struct socket *sock,
          struct sockaddr *myaddr,
          int sockaddr_len);
 int (*connect) (struct socket *sock,
          struct sockaddr *vaddr,
          int sockaddr_len, int flags);
 int (*socketpair)(struct socket *sock1,
          struct socket *sock2);
 int (*accept) (struct socket *sock,
          struct socket *newsock, int flags);
 int (*getname) (struct socket *sock,
          struct sockaddr *addr,
          int *sockaddr_len, int peer);
 unsigned int (*poll) (struct file *file, struct socket *sock,
          struct poll_table_struct *wait);
 int (*ioctl) (struct socket *sock, unsigned int cmd,
          unsigned long arg);
 int (*compat_ioctl) (struct socket *sock, unsigned int cmd,
          unsigned long arg);
 int (*listen) (struct socket *sock, int len);
 int (*shutdown) (struct socket *sock, int flags);
 int (*setsockopt)(struct socket *sock, int level,
          int optname, char *optval, int optlen);
 int (*getsockopt)(struct socket *sock, int level,
          int optname, char *optval, int *optlen);
 int (*compat_setsockopt)(struct socket *sock, int level,
          int optname, char *optval, int optlen);
 int (*compat_getsockopt)(struct socket *sock, int level,
          int optname, char *optval, int *optlen);
 int (*sendmsg) (struct kiocb *iocb, struct socket *sock,
          struct msghdr *m, size_t total_len);
 int (*recvmsg) (struct kiocb *iocb, struct socket *sock,
          struct msghdr *m, size_t total_len,
          int flags);
 int (*mmap) (struct file *file, struct socket *sock,
          struct vm_area_struct * vma);
 ssize_t (*sendpage) (struct socket *sock, struct page *page,
          int offset, size_t size, int flags);
 ssize_t (*splice_read)(struct socket *sock, loff_t *ppos,
           struct pipe_inode_info *pipe, size_t len, unsigned int flags);
};

struct net_proto_family {
 int family;
 int (*create)(struct net *net, struct socket *sock, int protocol);
 struct module *owner;
};

struct iovec;
struct kvec;

enum {
 SOCK_WAKE_IO,
 SOCK_WAKE_WAITD,
 SOCK_WAKE_SPACE,
 SOCK_WAKE_URG,
};

extern int sock_wake_async(struct socket *sk, int how, int band);
extern int sock_register(const struct net_proto_family *fam);
extern void sock_unregister(int family);
extern int sock_create(int family, int type, int proto,
     struct socket **res);
extern int sock_create_kern(int family, int type, int proto,
          struct socket **res);
extern int sock_create_lite(int family, int type, int proto,
          struct socket **res);
extern void sock_release(struct socket *sock);
extern int sock_sendmsg(struct socket *sock, struct msghdr *msg,
      size_t len);
extern int sock_recvmsg(struct socket *sock, struct msghdr *msg,
      size_t size, int flags);
extern int sock_map_fd(struct socket *sock);
extern struct socket *sockfd_lookup(int fd, int *err);

extern int net_ratelimit(void);




extern int kernel_sendmsg(struct socket *sock, struct msghdr *msg,
        struct kvec *vec, size_t num, size_t len);
extern int kernel_recvmsg(struct socket *sock, struct msghdr *msg,
        struct kvec *vec, size_t num,
        size_t len, int flags);

extern int kernel_bind(struct socket *sock, struct sockaddr *addr,
         int addrlen);
extern int kernel_listen(struct socket *sock, int backlog);
extern int kernel_accept(struct socket *sock, struct socket **newsock,
    int flags);
extern int kernel_connect(struct socket *sock, struct sockaddr *addr,
     int addrlen, int flags);
extern int kernel_getsockname(struct socket *sock, struct sockaddr *addr,
         int *addrlen);
extern int kernel_getpeername(struct socket *sock, struct sockaddr *addr,
         int *addrlen);
extern int kernel_getsockopt(struct socket *sock, int level, int optname,
        char *optval, int *optlen);
extern int kernel_setsockopt(struct socket *sock, int level, int optname,
        char *optval, int optlen);
extern int kernel_sendpage(struct socket *sock, struct page *page, int offset,
      size_t size, int flags);
extern int kernel_sock_ioctl(struct socket *sock, int cmd, unsigned long arg);
extern int kernel_sock_shutdown(struct socket *sock,
    enum sock_shutdown_cmd how);
# 341 "linux-2.6.26/include/linux/net.h"
typedef  int  _GLOBAL_133_T; extern  _GLOBAL_133_T  global_net_msg_cost[NUM_STACKS];   
typedef  int  _GLOBAL_134_T; extern  _GLOBAL_134_T  global_net_msg_burst[NUM_STACKS];   
# 26 "linux-2.6.26/include/linux/skbuff.h" 2
# 1 "linux-2.6.26/include/linux/textsearch.h" 1







# 1 "linux-2.6.26/include/linux/err.h" 1





# 1 "linux-2.6.26/include/asm/errno.h" 1
# 7 "linux-2.6.26/include/linux/err.h" 2
# 22 "linux-2.6.26/include/linux/err.h"
static inline  __attribute__((always_inline)) void *ERR_PTR(long error)
{
 return (void *) error;
}

static inline  __attribute__((always_inline)) long PTR_ERR(const void *ptr)
{
 return (long) ptr;
}

static inline  __attribute__((always_inline)) long IS_ERR(const void *ptr)
{
 return __builtin_expect(!!(((unsigned long)ptr) >= (unsigned long)-4095), 0);
}
# 44 "linux-2.6.26/include/linux/err.h"
static inline  __attribute__((always_inline)) void *ERR_CAST(const void *ptr)
{

 return (void *) ptr;
}
# 9 "linux-2.6.26/include/linux/textsearch.h" 2


struct ts_config;
# 23 "linux-2.6.26/include/linux/textsearch.h"
struct ts_state
{
 unsigned int offset;
 char cb[40];
};
# 39 "linux-2.6.26/include/linux/textsearch.h"
struct ts_ops
{
 const char *name;
 struct ts_config * (*init)(const void *, unsigned int, gfp_t);
 unsigned int (*find)(struct ts_config *,
     struct ts_state *);
 void (*destroy)(struct ts_config *);
 void * (*get_pattern)(struct ts_config *);
 unsigned int (*get_pattern_len)(struct ts_config *);
 struct module *owner;
 struct list_head list;
};







struct ts_config
{
 struct ts_ops *ops;
# 74 "linux-2.6.26/include/linux/textsearch.h"
 unsigned int (*get_next_block)(unsigned int consumed,
        const u8 **dst,
        struct ts_config *conf,
        struct ts_state *state);
# 87 "linux-2.6.26/include/linux/textsearch.h"
 void (*finish)(struct ts_config *conf,
       struct ts_state *state);
};
# 103 "linux-2.6.26/include/linux/textsearch.h"
static inline  __attribute__((always_inline)) unsigned int textsearch_next(struct ts_config *conf,
        struct ts_state *state)
{
 unsigned int ret = conf->ops->find(conf, state);

 if (conf->finish)
  conf->finish(conf, state);

 return ret;
}
# 122 "linux-2.6.26/include/linux/textsearch.h"
static inline  __attribute__((always_inline)) unsigned int textsearch_find(struct ts_config *conf,
        struct ts_state *state)
{
 state->offset = 0;
 return textsearch_next(conf, state);
}





static inline  __attribute__((always_inline)) void *textsearch_get_pattern(struct ts_config *conf)
{
 return conf->ops->get_pattern(conf);
}





static inline  __attribute__((always_inline)) unsigned int textsearch_get_pattern_len(struct ts_config *conf)
{
 return conf->ops->get_pattern_len(conf);
}

extern int textsearch_register(struct ts_ops *);
extern int textsearch_unregister(struct ts_ops *);
extern struct ts_config *textsearch_prepare(const char *, const void *,
         unsigned int, gfp_t, int);
extern void textsearch_destroy(struct ts_config *conf);
extern unsigned int textsearch_find_continuous(struct ts_config *,
            struct ts_state *,
            const void *, unsigned int);





static inline  __attribute__((always_inline)) struct ts_config *alloc_ts_config(size_t payload,
      gfp_t gfp_mask)
{
 struct ts_config *conf;

 conf = kmalloc((((sizeof(*conf)) + 8 -1) & ~(8 -1)) + payload, gfp_mask);
 if (conf == ((void *)0))
  return ERR_PTR(-12);

 memset(conf, 0, (((sizeof(*conf)) + 8 -1) & ~(8 -1)) + payload);
 return conf;
}

static inline  __attribute__((always_inline)) void *ts_config_priv(struct ts_config *conf)
{
 return ((u8 *) conf + (((sizeof(struct ts_config)) + 8 -1) & ~(8 -1)));
}
# 27 "linux-2.6.26/include/linux/skbuff.h" 2
# 1 "linux-2.6.26/include/net/checksum.h" 1
# 25 "linux-2.6.26/include/net/checksum.h"
# 1 "linux-2.6.26/include/asm/uaccess.h" 1



# 1 "linux-2.6.26/include/asm/uaccess_64.h" 1
# 70 "linux-2.6.26/include/asm/uaccess_64.h"
struct exception_table_entry {
 unsigned long insn, fixup;
};

extern int fixup_exception(struct pt_regs *regs);
# 131 "linux-2.6.26/include/asm/uaccess_64.h"
extern void __put_user_1(void);
extern void __put_user_2(void);
extern void __put_user_4(void);
extern void __put_user_8(void);
extern void __put_user_bad(void);
# 212 "linux-2.6.26/include/asm/uaccess_64.h"
struct __large_struct { unsigned long buf[100]; };
# 241 "linux-2.6.26/include/asm/uaccess_64.h"
extern int __get_user_1(void);
extern int __get_user_2(void);
extern int __get_user_4(void);
extern int __get_user_8(void);
extern int __get_user_bad(void);
# 286 "linux-2.6.26/include/asm/uaccess_64.h"
 unsigned long
copy_user_generic(void *to, const void *from, unsigned len);

 unsigned long
copy_to_user(void *to, const void *from, unsigned len);
 unsigned long
copy_from_user(void *to, const void *from, unsigned len);
 unsigned long
copy_in_user(void *to, const void *from, unsigned len);

static inline  
__attribute__((always_inline)) __attribute__((always_inline)) int __copy_from_user(void *dst, const void *src, unsigned size)
{
 int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(dst, ( void *)src, size);
 switch (size) {
 case 1:asm volatile("1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=q" (*(u8 *)dst) : "m" ((*(struct __large_struct *)((u8 *)src))), "i"(1), "0"(ret))
                                ;
  return ret;
 case 2:asm volatile("1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (*(u16 *)dst) : "m" ((*(struct __large_struct *)((u16 *)src))), "i"(2), "0"(ret))
                                ;
  return ret;
 case 4:asm volatile("1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (*(u32 *)dst) : "m" ((*(struct __large_struct *)((u32 *)src))), "i"(4), "0"(ret))
                                ;
  return ret;
 case 8:asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i"(8), "0"(ret))
                               ;
  return ret;
 case 10:
  asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i"(16), "0"(ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm volatile("1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (*(u16 *)(8 + (char *)dst)) : "m" ((*(struct __large_struct *)((u16 *)(8 + (char *)src)))), "i"(2), "0"(ret))

                                 ;
  return ret;
 case 16:
  asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i"(16), "0"(ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (*(u64 *)(8 + (char *)dst)) : "m" ((*(struct __large_struct *)((u64 *)(8 + (char *)src)))), "i"(8), "0"(ret))

                                ;
  return ret;
 default:
  return copy_user_generic(dst, ( void *)src, size);
 }
}

static inline  
__attribute__((always_inline)) __attribute__((always_inline)) int __copy_to_user(void *dst, const void *src, unsigned size)
{
 int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst, src, size);
 switch (size) {
 case 1:asm volatile("1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "iq" (*(u8 *)src), "m" ((*(struct __large_struct *)((u8 *)dst))), "i" (1), "0" (ret))
                                ;
  return ret;
 case 2:asm volatile("1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (*(u16 *)src), "m" ((*(struct __large_struct *)((u16 *)dst))), "i" (2), "0" (ret))
                                ;
  return ret;
 case 4:asm volatile("1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (*(u32 *)src), "m" ((*(struct __large_struct *)((u32 *)dst))), "i" (4), "0" (ret))
                                ;
  return ret;
 case 8:asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (8), "0" (ret))
                               ;
  return ret;
 case 10:
  asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (10), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm("":::"memory");
  asm volatile("1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (4[(u16 *)src]), "m" ((*(struct __large_struct *)(4 + (u16 *)dst))), "i" (2), "0" (ret))
                                 ;
  return ret;
 case 16:
  asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (16), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm("":::"memory");
  asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (1[(u64 *)src]), "m" ((*(struct __large_struct *)(1 + (u64 *)dst))), "i" (8), "0" (ret))
                                ;
  return ret;
 default:
  return copy_user_generic(( void *)dst, src, size);
 }
}

static inline  
__attribute__((always_inline)) __attribute__((always_inline)) int __copy_in_user(void *dst, const void *src, unsigned size)
{
 int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst,
      ( void *)src, size);
 switch (size) {
 case 1: {
  u8 tmp;
  asm volatile("1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=q" (tmp) : "m" ((*(struct __large_struct *)((u8 *)src))), "i"(1), "0"(ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm volatile("1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "iq" (tmp), "m" ((*(struct __large_struct *)((u8 *)dst))), "i" (1), "0" (ret))
                                  ;
  return ret;
 }
 case 2: {
  u16 tmp;
  asm volatile("1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (tmp) : "m" ((*(struct __large_struct *)((u16 *)src))), "i"(2), "0"(ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm volatile("1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (tmp), "m" ((*(struct __large_struct *)((u16 *)dst))), "i" (2), "0" (ret))
                                  ;
  return ret;
 }

 case 4: {
  u32 tmp;
  asm volatile("1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (tmp) : "m" ((*(struct __large_struct *)((u32 *)src))), "i"(4), "0"(ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm volatile("1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (tmp), "m" ((*(struct __large_struct *)((u32 *)dst))), "i" (4), "0" (ret))
                                  ;
  return ret;
 }
 case 8: {
  u64 tmp;
  asm volatile("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r" (tmp) : "m" ((*(struct __large_struct *)((u64 *)src))), "i"(8), "0"(ret))
                                ;
  if (__builtin_expect(!!(!ret), 1))
   asm volatile("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup, \"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " .balign 8 " "\n" " .quad " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir" (tmp), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (8), "0" (ret))
                                 ;
  return ret;
 }
 default:
  return copy_user_generic(( void *)dst,
      ( void *)src, size);
 }
}

 long
strncpy_from_user(char *dst, const char *src, long count);
 long
__strncpy_from_user(char *dst, const char *src, long count);
 long strnlen_user(const char *str, long n);
 long __strnlen_user(const char *str, long n);
 long strlen_user(const char *str);
 unsigned long clear_user(void *mem, unsigned long len);
 unsigned long __clear_user(void *mem, unsigned long len);

 long __copy_from_user_inatomic(void *dst, const void *src,
         unsigned size);

static inline   __attribute__((always_inline)) __attribute__((always_inline)) int
__copy_to_user_inatomic(void *dst, const void *src, unsigned size)
{
 return copy_user_generic(( void *)dst, src, size);
}


extern long __copy_user_nocache(void *dst, const void *src,
    unsigned size, int zerorest);

static inline  __attribute__((always_inline)) int __copy_from_user_nocache(void *dst, const void *src,
        unsigned size)
{
 do { do { } while (0); } while (0);
 return __copy_user_nocache(dst, src, size, 1);
}

static inline  __attribute__((always_inline)) int __copy_from_user_inatomic_nocache(void *dst,
          const void *src,
          unsigned size)
{
 return __copy_user_nocache(dst, src, size, 0);
}
# 5 "linux-2.6.26/include/asm/uaccess.h" 2
# 26 "linux-2.6.26/include/net/checksum.h" 2
# 1 "linux-2.6.26/include/asm/checksum.h" 1



# 1 "linux-2.6.26/include/asm/checksum_64.h" 1
# 11 "linux-2.6.26/include/asm/checksum_64.h"
# 1 "linux-2.6.26/include/asm/uaccess.h" 1
# 12 "linux-2.6.26/include/asm/checksum_64.h" 2
# 22 "linux-2.6.26/include/asm/checksum_64.h"
static inline  __attribute__((always_inline)) __sum16 csum_fold(__wsum sum)
{
 asm("  addl %1,%0\n"
     "  adcl $0xffff,%0"
     : "=r" (sum)
     : "r" (( u32)sum << 16),
       "0" (( u32)sum & 0xffff0000));
 return ( __sum16)(~( u32)sum >> 16);
}
# 45 "linux-2.6.26/include/asm/checksum_64.h"
static inline  __attribute__((always_inline)) __sum16 ip_fast_csum(const void *iph, unsigned int ihl)
{
 unsigned int sum;

 asm("  movl (%1), %0\n"
     "  subl $4, %2\n"
     "  jbe 2f\n"
     "  addl 4(%1), %0\n"
     "  adcl 8(%1), %0\n"
     "  adcl 12(%1), %0\n"
     "1: adcl 16(%1), %0\n"
     "  lea 4(%1), %1\n"
     "  decl %2\n"
     "  jne	1b\n"
     "  adcl $0, %0\n"
     "  movl %0, %2\n"
     "  shrl $16, %0\n"
     "  addw %w2, %w0\n"
     "  adcl $0, %0\n"
     "  notl %0\n"
     "2:"



     : "=r" (sum), "=r" (iph), "=r" (ihl)
     : "1" (iph), "2" (ihl)
     : "memory");
 return ( __sum16)sum;
}
# 86 "linux-2.6.26/include/asm/checksum_64.h"
static inline  __attribute__((always_inline)) __wsum
csum_tcpudp_nofold(__be32 saddr, __be32 daddr, unsigned short len,
     unsigned short proto, __wsum sum)
{
 asm("  addl %1, %0\n"
     "  adcl %2, %0\n"
     "  adcl %3, %0\n"
     "  adcl $0, %0\n"
     : "=r" (sum)
     : "g" (daddr), "g" (saddr),
       "g" ((len + proto)<<8), "0" (sum));
 return sum;
}
# 112 "linux-2.6.26/include/asm/checksum_64.h"
static inline  __attribute__((always_inline)) __sum16 csum_tcpudp_magic(__be32 saddr, __be32 daddr,
     unsigned short len,
     unsigned short proto, __wsum sum)
{
 return csum_fold(csum_tcpudp_nofold(saddr, daddr, len, proto, sum));
}
# 129 "linux-2.6.26/include/asm/checksum_64.h"
extern __wsum csum_partial(const void *buff, int len, __wsum sum);






extern __wsum csum_partial_copy_generic(const void *src, const void *dst,
     int len, __wsum sum,
     int *src_err_ptr, int *dst_err_ptr);


extern __wsum csum_partial_copy_from_user(const void *src, void *dst,
       int len, __wsum isum, int *errp);
extern __wsum csum_partial_copy_to_user(const void *src, void *dst,
     int len, __wsum isum, int *errp);
extern __wsum csum_partial_copy_nocheck(const void *src, void *dst,
     int len, __wsum sum);
# 160 "linux-2.6.26/include/asm/checksum_64.h"
extern __sum16 ip_compute_csum(const void *buff, int len);
# 175 "linux-2.6.26/include/asm/checksum_64.h"
struct in6_addr;


extern __sum16
csum_ipv6_magic(const struct in6_addr *saddr, const struct in6_addr *daddr,
  __u32 len, unsigned short proto, __wsum sum);

static inline  __attribute__((always_inline)) unsigned add32_with_carry(unsigned a, unsigned b)
{
 asm("addl %2,%0\n\t"
     "adcl $0,%0"
     : "=r" (a)
     : "0" (a), "r" (b));
 return a;
}
# 5 "linux-2.6.26/include/asm/checksum.h" 2
# 27 "linux-2.6.26/include/net/checksum.h" 2
# 60 "linux-2.6.26/include/net/checksum.h"
static inline  __attribute__((always_inline)) __wsum csum_add(__wsum csum, __wsum addend)
{
 u32 res = ( u32)csum;
 res += ( u32)addend;
 return ( __wsum)(res + (res < ( u32)addend));
}

static inline  __attribute__((always_inline)) __wsum csum_sub(__wsum csum, __wsum addend)
{
 return csum_add(csum, ~addend);
}

static inline  __attribute__((always_inline)) __wsum
csum_block_add(__wsum csum, __wsum csum2, int offset)
{
 u32 sum = ( u32)csum2;
 if (offset&1)
  sum = ((sum&0xFF00FF)<<8)+((sum>>8)&0xFF00FF);
 return csum_add(csum, ( __wsum)sum);
}

static inline  __attribute__((always_inline)) __wsum
csum_block_sub(__wsum csum, __wsum csum2, int offset)
{
 u32 sum = ( u32)csum2;
 if (offset&1)
  sum = ((sum&0xFF00FF)<<8)+((sum>>8)&0xFF00FF);
 return csum_sub(csum, ( __wsum)sum);
}

static inline  __attribute__((always_inline)) __wsum csum_unfold(__sum16 n)
{
 return ( __wsum)n;
}



static inline  __attribute__((always_inline)) void csum_replace4(__sum16 *sum, __be32 from, __be32 to)
{
 __be32 diff[] = { ~from, to };

 *sum = csum_fold(csum_partial((char *)diff, sizeof(diff), ~csum_unfold(*sum)));
}

static inline  __attribute__((always_inline)) void csum_replace2(__sum16 *sum, __be16 from, __be16 to)
{
 csum_replace4(sum, ( __be32)from, ( __be32)to);
}

struct sk_buff;
extern void inet_proto_csum_replace4(__sum16 *sum, struct sk_buff *skb,
         __be32 from, __be32 to, int pseudohdr);

static inline  __attribute__((always_inline)) void inet_proto_csum_replace2(__sum16 *sum, struct sk_buff *skb,
         __be16 from, __be16 to,
         int pseudohdr)
{
 inet_proto_csum_replace4(sum, skb, ( __be32)from,
     ( __be32)to, pseudohdr);
}
# 28 "linux-2.6.26/include/linux/skbuff.h" 2

# 1 "linux-2.6.26/include/linux/dmaengine.h" 1
# 24 "linux-2.6.26/include/linux/dmaengine.h"
# 1 "linux-2.6.26/include/linux/device.h" 1
# 15 "linux-2.6.26/include/linux/device.h"
# 1 "linux-2.6.26/include/linux/ioport.h" 1
# 18 "linux-2.6.26/include/linux/ioport.h"
struct resource {
 resource_size_t start;
 resource_size_t end;
 const char *name;
 unsigned long flags;
 struct resource *parent, *sibling, *child;
};

struct resource_list {
 struct resource_list *next;
 struct resource *res;
 struct pci_dev *dev;
};
# 101 "linux-2.6.26/include/linux/ioport.h"
typedef  struct resource   _GLOBAL_135_T; extern  _GLOBAL_135_T  global_ioport_resource[NUM_STACKS];    
typedef  struct resource   _GLOBAL_136_T; extern  _GLOBAL_136_T  global_iomem_resource[NUM_STACKS];    

extern int request_resource(struct resource *root, struct resource *new);
extern int release_resource(struct resource *new);
extern int insert_resource(struct resource *parent, struct resource *new);
extern int allocate_resource(struct resource *root, struct resource *new,
        resource_size_t size, resource_size_t min,
        resource_size_t max, resource_size_t align,
        void (*alignf)(void *, struct resource *,
         resource_size_t, resource_size_t),
        void *alignf_data);
int adjust_resource(struct resource *res, resource_size_t start,
      resource_size_t size);
resource_size_t resource_alignment(struct resource *res);






extern struct resource * __request_region(struct resource *,
     resource_size_t start,
     resource_size_t n, const char *name);






extern int __check_region(struct resource *, resource_size_t, resource_size_t);
extern void __release_region(struct resource *, resource_size_t,
    resource_size_t);

static inline  __attribute__((always_inline)) int check_region(resource_size_t s,
      resource_size_t n)
{
 return __check_region(&global_ioport_resource[get_stack_id()], s, n);
}


struct device;





extern struct resource * __devm_request_region(struct device *dev,
    struct resource *parent, resource_size_t start,
    resource_size_t n, const char *name);






extern void __devm_release_region(struct device *dev, struct resource *parent,
      resource_size_t start, resource_size_t n);
# 16 "linux-2.6.26/include/linux/device.h" 2

# 1 "linux-2.6.26/include/linux/klist.h" 1
# 20 "linux-2.6.26/include/linux/klist.h"
struct klist_node;
struct klist {
 spinlock_t k_lock;
 struct list_head k_list;
 void (*get)(struct klist_node *);
 void (*put)(struct klist_node *);
};
# 37 "linux-2.6.26/include/linux/klist.h"
extern void klist_init(struct klist *k, void (*get)(struct klist_node *),
         void (*put)(struct klist_node *));

struct klist_node {
 struct klist *n_klist;
 struct list_head n_node;
 struct kref n_ref;
 struct completion n_removed;
};

extern void klist_add_tail(struct klist_node *n, struct klist *k);
extern void klist_add_head(struct klist_node *n, struct klist *k);
extern void klist_add_after(struct klist_node *n, struct klist_node *pos);
extern void klist_add_before(struct klist_node *n, struct klist_node *pos);

extern void klist_del(struct klist_node *n);
extern void klist_remove(struct klist_node *n);

extern int klist_node_attached(struct klist_node *n);


struct klist_iter {
 struct klist *i_klist;
 struct list_head *i_head;
 struct klist_node *i_cur;
};


extern void klist_iter_init(struct klist *k, struct klist_iter *i);
extern void klist_iter_init_node(struct klist *k, struct klist_iter *i,
     struct klist_node *n);
extern void klist_iter_exit(struct klist_iter *i);
extern struct klist_node *klist_next(struct klist_iter *i);
# 18 "linux-2.6.26/include/linux/device.h" 2




# 1 "linux-2.6.26/include/linux/pm.h" 1
# 25 "linux-2.6.26/include/linux/pm.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 26 "linux-2.6.26/include/linux/pm.h" 2
# 1 "linux-2.6.26/include/asm/errno.h" 1
# 27 "linux-2.6.26/include/linux/pm.h" 2






typedef int pm_request_t;
# 42 "linux-2.6.26/include/linux/pm.h"
typedef int pm_dev_t;
# 55 "linux-2.6.26/include/linux/pm.h"
enum
{
 PM_SYS_UNKNOWN = 0x00000000,
 PM_SYS_KBC = 0x41d00303,
 PM_SYS_COM = 0x41d00500,
 PM_SYS_IRDA = 0x41d00510,
 PM_SYS_FDC = 0x41d00700,
 PM_SYS_VGA = 0x41d00900,
 PM_SYS_PCMCIA = 0x41d00e00,
};
# 74 "linux-2.6.26/include/linux/pm.h"
struct pm_dev;

typedef int (*pm_callback)(struct pm_dev *dev, pm_request_t rqst, void *data);




struct pm_dev
{
 pm_dev_t type;
 unsigned long id;
 pm_callback callback;
 void *data;

 unsigned long flags;
 unsigned long state;
 unsigned long prev_state;

 struct list_head entry;
};







typedef  void   ( *_GLOBAL_138_T  )  ( void  ) ; extern  _GLOBAL_138_T global_pm_idle[NUM_STACKS];   
typedef  void   ( *_GLOBAL_140_T  )  ( void  ) ; extern  _GLOBAL_140_T global_pm_power_off[NUM_STACKS];   
typedef  void   ( *_GLOBAL_142_T  )  ( void  ) ; extern  _GLOBAL_142_T global_pm_power_off_prepare[NUM_STACKS];   





struct device;

typedef struct pm_message {
 int event;
} pm_message_t;
# 181 "linux-2.6.26/include/linux/pm.h"
struct dev_pm_info {
 pm_message_t power_state;
 unsigned can_wakeup:1;
 unsigned should_wakeup:1;
 bool sleeping:1;



};

extern int device_power_down(pm_message_t state);
extern void device_power_up(void);
extern void device_resume(void);
# 208 "linux-2.6.26/include/linux/pm.h"
static inline  __attribute__((always_inline)) int device_suspend(pm_message_t state)
{
 return 0;
}
# 221 "linux-2.6.26/include/linux/pm.h"
typedef  unsigned int   _GLOBAL_143_T; extern  _GLOBAL_143_T  global_pm_flags[NUM_STACKS];    
# 23 "linux-2.6.26/include/linux/device.h" 2
# 1 "linux-2.6.26/include/linux/semaphore.h" 1
# 16 "linux-2.6.26/include/linux/semaphore.h"
struct semaphore {
 spinlock_t lock;
 unsigned int count;
 struct list_head wait_list;
};
# 34 "linux-2.6.26/include/linux/semaphore.h"
static inline  __attribute__((always_inline)) void sema_init(struct semaphore *sem, int val)
{
 typedef  struct lock_class_key   _GLOBAL_144_T; static  _GLOBAL_144_T  global___key[NUM_STACKS];    
 *sem = (struct semaphore) { .lock = (spinlock_t) { .raw_lock = { }, }, .count = val, .wait_list = { &((*sem).wait_list), &((*sem).wait_list) }, };
 do { (void)(&global___key[get_stack_id()]); } while (0);
}




extern void down(struct semaphore *sem);
extern int down_interruptible(struct semaphore *sem);
extern int down_killable(struct semaphore *sem);
extern int down_trylock(struct semaphore *sem);
extern int down_timeout(struct semaphore *sem, long jiffies);
extern void up(struct semaphore *sem);
# 24 "linux-2.6.26/include/linux/device.h" 2
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 25 "linux-2.6.26/include/linux/device.h" 2
# 1 "linux-2.6.26/include/asm/device.h" 1



struct dev_archdata {






};
# 26 "linux-2.6.26/include/linux/device.h" 2
# 34 "linux-2.6.26/include/linux/device.h"
struct device;
struct device_driver;
struct driver_private;
struct class;
struct bus_type;
struct bus_type_private;

struct bus_attribute {
 struct attribute attr;
 ssize_t (*show)(struct bus_type *bus, char *buf);
 ssize_t (*store)(struct bus_type *bus, const char *buf, size_t count);
};




extern int bus_create_file(struct bus_type *,
     struct bus_attribute *);
extern void bus_remove_file(struct bus_type *, struct bus_attribute *);

struct bus_type {
 const char *name;
 struct bus_attribute *bus_attrs;
 struct device_attribute *dev_attrs;
 struct driver_attribute *drv_attrs;

 int (*match)(struct device *dev, struct device_driver *drv);
 int (*uevent)(struct device *dev, struct kobj_uevent_env *env);
 int (*probe)(struct device *dev);
 int (*remove)(struct device *dev);
 void (*shutdown)(struct device *dev);

 int (*suspend)(struct device *dev, pm_message_t state);
 int (*suspend_late)(struct device *dev, pm_message_t state);
 int (*resume_early)(struct device *dev);
 int (*resume)(struct device *dev);

 struct bus_type_private *p;
};

extern int bus_register(struct bus_type *bus);
extern void bus_unregister(struct bus_type *bus);

extern int bus_rescan_devices(struct bus_type *bus);



int bus_for_each_dev(struct bus_type *bus, struct device *start, void *data,
       int (*fn)(struct device *dev, void *data));
struct device *bus_find_device(struct bus_type *bus, struct device *start,
          void *data,
          int (*match)(struct device *dev, void *data));
struct device *bus_find_device_by_name(struct bus_type *bus,
           struct device *start,
           const char *name);

int bus_for_each_drv(struct bus_type *bus,
      struct device_driver *start, void *data,
      int (*fn)(struct device_driver *, void *));







struct notifier_block;

extern int bus_register_notifier(struct bus_type *bus,
     struct notifier_block *nb);
extern int bus_unregister_notifier(struct bus_type *bus,
       struct notifier_block *nb);
# 117 "linux-2.6.26/include/linux/device.h"
extern struct kset *bus_get_kset(struct bus_type *bus);
extern struct klist *bus_get_device_klist(struct bus_type *bus);

struct device_driver {
 const char *name;
 struct bus_type *bus;

 struct module *owner;
 const char *mod_name;

 int (*probe) (struct device *dev);
 int (*remove) (struct device *dev);
 void (*shutdown) (struct device *dev);
 int (*suspend) (struct device *dev, pm_message_t state);
 int (*resume) (struct device *dev);
 struct attribute_group **groups;

 struct driver_private *p;
};


extern int driver_register(struct device_driver *drv);
extern void driver_unregister(struct device_driver *drv);

extern struct device_driver *get_driver(struct device_driver *drv);
extern void put_driver(struct device_driver *drv);
extern struct device_driver *driver_find(const char *name,
      struct bus_type *bus);
extern int driver_probe_done(void);



struct driver_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device_driver *driver, char *buf);
 ssize_t (*store)(struct device_driver *driver, const char *buf,
    size_t count);
};





extern int driver_create_file(struct device_driver *driver,
        struct driver_attribute *attr);
extern void driver_remove_file(struct device_driver *driver,
          struct driver_attribute *attr);

extern int driver_add_kobj(struct device_driver *drv,
     struct kobject *kobj,
     const char *fmt, ...);

extern int driver_for_each_device(struct device_driver *drv,
            struct device *start,
            void *data,
            int (*fn)(struct device *dev,
        void *));
struct device *driver_find_device(struct device_driver *drv,
      struct device *start, void *data,
      int (*match)(struct device *dev, void *data));




struct class {
 const char *name;
 struct module *owner;

 struct kset subsys;
 struct list_head devices;
 struct list_head interfaces;
 struct kset class_dirs;
 struct semaphore sem;
 struct class_attribute *class_attrs;
 struct device_attribute *dev_attrs;

 int (*dev_uevent)(struct device *dev, struct kobj_uevent_env *env);

 void (*class_release)(struct class *class);
 void (*dev_release)(struct device *dev);

 int (*suspend)(struct device *dev, pm_message_t state);
 int (*resume)(struct device *dev);
};

extern int class_register(struct class *class);
extern void class_unregister(struct class *class);
extern int class_for_each_device(struct class *class, void *data,
     int (*fn)(struct device *dev, void *data));
extern struct device *class_find_device(struct class *class, void *data,
     int (*match)(struct device *, void *));

struct class_attribute {
 struct attribute attr;
 ssize_t (*show)(struct class *class, char *buf);
 ssize_t (*store)(struct class *class, const char *buf, size_t count);
};




extern int class_create_file(struct class *class,
       const struct class_attribute *attr);
extern void class_remove_file(struct class *class,
         const struct class_attribute *attr);

struct class_interface {
 struct list_head node;
 struct class *class;

 int (*add_dev) (struct device *, struct class_interface *);
 void (*remove_dev) (struct device *, struct class_interface *);
};

extern int class_interface_register(struct class_interface *);
extern void class_interface_unregister(struct class_interface *);

extern struct class *class_create(struct module *owner, const char *name);
extern void class_destroy(struct class *cls);
# 246 "linux-2.6.26/include/linux/device.h"
struct device_type {
 const char *name;
 struct attribute_group **groups;
 int (*uevent)(struct device *dev, struct kobj_uevent_env *env);
 void (*release)(struct device *dev);
 int (*suspend)(struct device *dev, pm_message_t state);
 int (*resume)(struct device *dev);
};


struct device_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device *dev, struct device_attribute *attr,
   char *buf);
 ssize_t (*store)(struct device *dev, struct device_attribute *attr,
    const char *buf, size_t count);
};




extern int device_create_file(struct device *device,
        struct device_attribute *entry);
extern void device_remove_file(struct device *dev,
          struct device_attribute *attr);
extern int device_create_bin_file(struct device *dev,
            struct bin_attribute *attr);
extern void device_remove_bin_file(struct device *dev,
       struct bin_attribute *attr);
extern int device_schedule_callback_owner(struct device *dev,
  void (*func)(struct device *dev), struct module *owner);






typedef void (*dr_release_t)(struct device *dev, void *res);
typedef int (*dr_match_t)(struct device *dev, void *res, void *match_data);







extern void *devres_alloc(dr_release_t release, size_t size, gfp_t gfp);

extern void devres_free(void *res);
extern void devres_add(struct device *dev, void *res);
extern void *devres_find(struct device *dev, dr_release_t release,
    dr_match_t match, void *match_data);
extern void *devres_get(struct device *dev, void *new_res,
   dr_match_t match, void *match_data);
extern void *devres_remove(struct device *dev, dr_release_t release,
      dr_match_t match, void *match_data);
extern int devres_destroy(struct device *dev, dr_release_t release,
     dr_match_t match, void *match_data);


extern void * devres_open_group(struct device *dev, void *id,
          gfp_t gfp);
extern void devres_close_group(struct device *dev, void *id);
extern void devres_remove_group(struct device *dev, void *id);
extern int devres_release_group(struct device *dev, void *id);


extern void *devm_kzalloc(struct device *dev, size_t size, gfp_t gfp);
extern void devm_kfree(struct device *dev, void *p);

struct device_dma_parameters {




 unsigned int max_segment_size;
 unsigned long segment_boundary_mask;
};

struct device {
 struct klist klist_children;
 struct klist_node knode_parent;
 struct klist_node knode_driver;
 struct klist_node knode_bus;
 struct device *parent;

 struct kobject kobj;
 char bus_id[20];
 struct device_type *type;
 unsigned uevent_suppress:1;

 struct semaphore sem;



 struct bus_type *bus;
 struct device_driver *driver;

 void *driver_data;
 void *platform_data;

 struct dev_pm_info power;




 u64 *dma_mask;
 u64 coherent_dma_mask;





 struct device_dma_parameters *dma_parms;

 struct list_head dma_pools;

 struct dma_coherent_mem *dma_mem;


 struct dev_archdata archdata;

 spinlock_t devres_lock;
 struct list_head devres_head;

 struct list_head node;
 struct class *class;
 dev_t devt;
 struct attribute_group **groups;

 void (*release)(struct device *dev);
};


# 1 "linux-2.6.26/include/linux/pm_wakeup.h" 1
# 70 "linux-2.6.26/include/linux/pm_wakeup.h"
static inline  __attribute__((always_inline)) void device_init_wakeup(struct device *dev, int val)
{
 dev->power.can_wakeup = !!val;
}

static inline  __attribute__((always_inline)) int device_can_wakeup(struct device *dev)
{
 return dev->power.can_wakeup;
}




static inline  __attribute__((always_inline)) int call_platform_enable_wakeup(struct device *dev, int is_on)
{
 return 0;
}
# 381 "linux-2.6.26/include/linux/device.h" 2

static inline  __attribute__((always_inline)) const char *dev_name(struct device *dev)
{

 return dev->bus_id;
}

extern int dev_set_name(struct device *dev, const char *name, ...)
   __attribute__((format(printf, 2, 3))) ;
# 401 "linux-2.6.26/include/linux/device.h"
static inline  __attribute__((always_inline)) int dev_to_node(struct device *dev)
{
 return -1;
}
static inline  __attribute__((always_inline)) void set_dev_node(struct device *dev, int node)
{
}


static inline  __attribute__((always_inline)) void *dev_get_drvdata(struct device *dev)
{
 return dev->driver_data;
}

static inline  __attribute__((always_inline)) void dev_set_drvdata(struct device *dev, void *data)
{
 dev->driver_data = data;
}

static inline  __attribute__((always_inline)) int device_is_registered(struct device *dev)
{
 return dev->kobj.state_in_sysfs;
}

void driver_init(void);




extern int device_register(struct device *dev);
extern void device_unregister(struct device *dev);
extern void device_initialize(struct device *dev);
extern int device_add(struct device *dev);
extern void device_del(struct device *dev);
extern int device_for_each_child(struct device *dev, void *data,
       int (*fn)(struct device *dev, void *data));
extern struct device *device_find_child(struct device *dev, void *data,
    int (*match)(struct device *dev, void *data));
extern int device_rename(struct device *dev, char *new_name);
extern int device_move(struct device *dev, struct device *new_parent);





extern int device_bind_driver(struct device *dev);
extern void device_release_driver(struct device *dev);
extern int device_attach(struct device *dev);
extern int driver_attach(struct device_driver *drv);
extern int device_reprobe(struct device *dev);




extern struct device *device_create_vargs(struct class *cls,
       struct device *parent,
       dev_t devt,
       void *drvdata,
       const char *fmt,
       va_list vargs);
extern struct device *device_create(struct class *cls, struct device *parent,
        dev_t devt, const char *fmt, ...)
        __attribute__((format(printf, 4, 5))) ;
extern struct device *device_create_drvdata(struct class *cls,
         struct device *parent,
         dev_t devt,
         void *drvdata,
         const char *fmt, ...)
        __attribute__((format(printf, 5, 6))) ;
extern void device_destroy(struct class *cls, dev_t devt);







typedef  int   ( *_GLOBAL_146_T  )  ( struct device   * dev   ) ; extern  _GLOBAL_146_T global_platform_notify[NUM_STACKS];     

typedef  int   ( *_GLOBAL_148_T  )  ( struct device   * dev   ) ; extern  _GLOBAL_148_T global_platform_notify_remove[NUM_STACKS];     






extern struct device *get_device(struct device *dev);
extern void put_device(struct device *dev);



extern void device_shutdown(void);


extern void sysdev_shutdown(void);


extern const char *dev_driver_string(struct device *dev);
# 25 "linux-2.6.26/include/linux/dmaengine.h" 2




# 1 "linux-2.6.26/include/linux/dma-mapping.h" 1
# 9 "linux-2.6.26/include/linux/dma-mapping.h"
enum dma_data_direction {
 DMA_BIDIRECTIONAL = 0,
 DMA_TO_DEVICE = 1,
 DMA_FROM_DEVICE = 2,
 DMA_NONE = 3,
};
# 39 "linux-2.6.26/include/linux/dma-mapping.h"
static inline  __attribute__((always_inline)) int valid_dma_direction(int dma_direction)
{
 return ((dma_direction == DMA_BIDIRECTIONAL) ||
  (dma_direction == DMA_TO_DEVICE) ||
  (dma_direction == DMA_FROM_DEVICE));
}

static inline  __attribute__((always_inline)) int is_device_dma_capable(struct device *dev)
{
 return dev->dma_mask != ((void *)0) && *dev->dma_mask != 0x0ULL;
}




# 1 "linux-2.6.26/include/asm-generic/dma-mapping-broken.h" 1
# 9 "linux-2.6.26/include/asm-generic/dma-mapping-broken.h"
struct scatterlist;

extern void *
dma_alloc_coherent(struct device *dev, size_t size, dma_addr_t *dma_handle,
     gfp_t flag);

extern void
dma_free_coherent(struct device *dev, size_t size, void *cpu_addr,
      dma_addr_t dma_handle);




extern dma_addr_t
dma_map_single(struct device *dev, void *ptr, size_t size,
        enum dma_data_direction direction);

extern void
dma_unmap_single(struct device *dev, dma_addr_t dma_addr, size_t size,
   enum dma_data_direction direction);

extern int
dma_map_sg(struct device *dev, struct scatterlist *sg, int nents,
    enum dma_data_direction direction);

extern void
dma_unmap_sg(struct device *dev, struct scatterlist *sg, int nhwentries,
      enum dma_data_direction direction);

extern dma_addr_t
dma_map_page(struct device *dev, struct page *page, unsigned long offset,
      size_t size, enum dma_data_direction direction);

extern void
dma_unmap_page(struct device *dev, dma_addr_t dma_address, size_t size,
        enum dma_data_direction direction);

extern void
dma_sync_single_for_cpu(struct device *dev, dma_addr_t dma_handle, size_t size,
   enum dma_data_direction direction);

extern void
dma_sync_single_range_for_cpu(struct device *dev, dma_addr_t dma_handle,
         unsigned long offset, size_t size,
         enum dma_data_direction direction);

extern void
dma_sync_sg_for_cpu(struct device *dev, struct scatterlist *sg, int nelems,
      enum dma_data_direction direction);





extern int
dma_mapping_error(dma_addr_t dma_addr);

extern int
dma_supported(struct device *dev, u64 mask);

extern int
dma_set_mask(struct device *dev, u64 mask);

extern int
dma_get_cache_alignment(void);

extern int
dma_is_consistent(struct device *dev, dma_addr_t dma_handle);

extern void
dma_cache_sync(struct device *dev, void *vaddr, size_t size,
        enum dma_data_direction direction);
# 55 "linux-2.6.26/include/linux/dma-mapping.h" 2






extern u64 dma_get_required_mask(struct device *dev);

static inline  __attribute__((always_inline)) unsigned int dma_get_max_seg_size(struct device *dev)
{
 return dev->dma_parms ? dev->dma_parms->max_segment_size : 65536;
}

static inline  __attribute__((always_inline)) unsigned int dma_set_max_seg_size(struct device *dev,
      unsigned int size)
{
 if (dev->dma_parms) {
  dev->dma_parms->max_segment_size = size;
  return 0;
 } else
  return -5;
}

static inline  __attribute__((always_inline)) unsigned long dma_get_seg_boundary(struct device *dev)
{
 return dev->dma_parms ?
  dev->dma_parms->segment_boundary_mask : 0xffffffff;
}

static inline  __attribute__((always_inline)) int dma_set_seg_boundary(struct device *dev, unsigned long mask)
{
 if (dev->dma_parms) {
  dev->dma_parms->segment_boundary_mask = mask;
  return 0;
 } else
  return -5;
}
# 100 "linux-2.6.26/include/linux/dma-mapping.h"
static inline  __attribute__((always_inline)) int
dma_declare_coherent_memory(struct device *dev, dma_addr_t bus_addr,
       dma_addr_t device_addr, size_t size, int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) void
dma_release_declared_memory(struct device *dev)
{
}

static inline  __attribute__((always_inline)) void *
dma_mark_declared_memory_occupied(struct device *dev,
      dma_addr_t device_addr, size_t size)
{
 return ERR_PTR(-16);
}





extern void *dmam_alloc_coherent(struct device *dev, size_t size,
     dma_addr_t *dma_handle, gfp_t gfp);
extern void dmam_free_coherent(struct device *dev, size_t size, void *vaddr,
          dma_addr_t dma_handle);
extern void *dmam_alloc_noncoherent(struct device *dev, size_t size,
        dma_addr_t *dma_handle, gfp_t gfp);
extern void dmam_free_noncoherent(struct device *dev, size_t size, void *vaddr,
      dma_addr_t dma_handle);






static inline  __attribute__((always_inline)) int dmam_declare_coherent_memory(struct device *dev,
    dma_addr_t bus_addr, dma_addr_t device_addr,
    size_t size, gfp_t gfp)
{
 return 0;
}

static inline  __attribute__((always_inline)) void dmam_release_declared_memory(struct device *dev)
{
}



struct dma_attrs;
# 30 "linux-2.6.26/include/linux/dmaengine.h" 2
# 38 "linux-2.6.26/include/linux/dmaengine.h"
enum dma_state {
 DMA_RESOURCE_SUSPEND,
 DMA_RESOURCE_RESUME,
 DMA_RESOURCE_AVAILABLE,
 DMA_RESOURCE_REMOVED,
};







enum dma_state_client {
 DMA_ACK,
 DMA_DUP,
 DMA_NAK,
};






typedef s32 dma_cookie_t;
# 72 "linux-2.6.26/include/linux/dmaengine.h"
enum dma_status {
 DMA_SUCCESS,
 DMA_IN_PROGRESS,
 DMA_ERROR,
};




enum dma_transaction_type {
 DMA_MEMCPY,
 DMA_XOR,
 DMA_PQ_XOR,
 DMA_DUAL_XOR,
 DMA_PQ_UPDATE,
 DMA_ZERO_SUM,
 DMA_PQ_ZERO_SUM,
 DMA_MEMSET,
 DMA_MEMCPY_CRC32C,
 DMA_INTERRUPT,
};
# 106 "linux-2.6.26/include/linux/dmaengine.h"
enum dma_ctrl_flags {
 DMA_PREP_INTERRUPT = (1 << 0),
 DMA_CTRL_ACK = (1 << 1),
};





typedef struct { unsigned long bits[((((DMA_INTERRUPT + 1)) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } dma_cap_mask_t;
# 124 "linux-2.6.26/include/linux/dmaengine.h"
struct dma_chan_percpu {
 local_t refcount;

 unsigned long memcpy_count;
 unsigned long bytes_transferred;
};
# 143 "linux-2.6.26/include/linux/dmaengine.h"
struct dma_chan {
 struct dma_device *device;
 dma_cookie_t cookie;


 int chan_id;
 struct device dev;

 struct kref refcount;
 int slow_ref;
 struct rcu_head rcu;

 struct list_head device_node;
 struct dma_chan_percpu *local;
};



void dma_chan_cleanup(struct kref *kref);

static inline  __attribute__((always_inline)) void dma_chan_get(struct dma_chan *chan)
{
 if (__builtin_expect(!!(chan->slow_ref), 0))
  kref_get(&chan->refcount);
 else {
  local_inc(&(({ (void)((({ do { } while (0); 0; }))); ((chan->local)); })->refcount));
  do { } while (0);
 }
}

static inline  __attribute__((always_inline)) void dma_chan_put(struct dma_chan *chan)
{
 if (__builtin_expect(!!(chan->slow_ref), 0))
  kref_put(&chan->refcount, dma_chan_cleanup);
 else {
  local_dec(&(({ (void)((({ do { } while (0); 0; }))); ((chan->local)); })->refcount));
  do { } while (0);
 }
}
# 196 "linux-2.6.26/include/linux/dmaengine.h"
struct dma_client;
typedef enum dma_state_client (*dma_event_callback) (struct dma_client *client,
  struct dma_chan *chan, enum dma_state state);
# 207 "linux-2.6.26/include/linux/dmaengine.h"
struct dma_client {
 dma_event_callback event_callback;
 dma_cap_mask_t cap_mask;
 struct list_head global_node;
};

typedef void (*dma_async_tx_callback)(void *dma_async_param);
# 233 "linux-2.6.26/include/linux/dmaengine.h"
struct dma_async_tx_descriptor {
 dma_cookie_t cookie;
 enum dma_ctrl_flags flags;
 dma_addr_t phys;
 struct list_head tx_list;
 struct dma_chan *chan;
 dma_cookie_t (*tx_submit)(struct dma_async_tx_descriptor *tx);
 dma_async_tx_callback callback;
 void *callback_param;
 struct dma_async_tx_descriptor *next;
 struct dma_async_tx_descriptor *parent;
 spinlock_t lock;
};
# 268 "linux-2.6.26/include/linux/dmaengine.h"
struct dma_device {

 unsigned int chancnt;
 struct list_head channels;
 struct list_head global_node;
 dma_cap_mask_t cap_mask;
 int max_xor;

 struct kref refcount;
 struct completion done;

 int dev_id;
 struct device *dev;

 int (*device_alloc_chan_resources)(struct dma_chan *chan);
 void (*device_free_chan_resources)(struct dma_chan *chan);

 struct dma_async_tx_descriptor *(*device_prep_dma_memcpy)(
  struct dma_chan *chan, dma_addr_t dest, dma_addr_t src,
  size_t len, unsigned long flags);
 struct dma_async_tx_descriptor *(*device_prep_dma_xor)(
  struct dma_chan *chan, dma_addr_t dest, dma_addr_t *src,
  unsigned int src_cnt, size_t len, unsigned long flags);
 struct dma_async_tx_descriptor *(*device_prep_dma_zero_sum)(
  struct dma_chan *chan, dma_addr_t *src, unsigned int src_cnt,
  size_t len, u32 *result, unsigned long flags);
 struct dma_async_tx_descriptor *(*device_prep_dma_memset)(
  struct dma_chan *chan, dma_addr_t dest, int value, size_t len,
  unsigned long flags);
 struct dma_async_tx_descriptor *(*device_prep_dma_interrupt)(
  struct dma_chan *chan, unsigned long flags);

 enum dma_status (*device_is_tx_complete)(struct dma_chan *chan,
   dma_cookie_t cookie, dma_cookie_t *last,
   dma_cookie_t *used);
 void (*device_issue_pending)(struct dma_chan *chan);
};



void dma_async_client_register(struct dma_client *client);
void dma_async_client_unregister(struct dma_client *client);
void dma_async_client_chan_request(struct dma_client *client);
dma_cookie_t dma_async_memcpy_buf_to_buf(struct dma_chan *chan,
 void *dest, void *src, size_t len);
dma_cookie_t dma_async_memcpy_buf_to_pg(struct dma_chan *chan,
 struct page *page, unsigned int offset, void *kdata, size_t len);
dma_cookie_t dma_async_memcpy_pg_to_pg(struct dma_chan *chan,
 struct page *dest_pg, unsigned int dest_off, struct page *src_pg,
 unsigned int src_off, size_t len);
void dma_async_tx_descriptor_init(struct dma_async_tx_descriptor *tx,
 struct dma_chan *chan);

static inline  __attribute__((always_inline)) void
async_tx_ack(struct dma_async_tx_descriptor *tx)
{
 tx->flags |= DMA_CTRL_ACK;
}

static inline  __attribute__((always_inline)) int
async_tx_test_ack(struct dma_async_tx_descriptor *tx)
{
 return tx->flags & DMA_CTRL_ACK;
}


static inline  __attribute__((always_inline)) int __first_dma_cap(const dma_cap_mask_t *srcp)
{
 return ({ int __min1 = ((DMA_INTERRUPT + 1)); int __min2 = (find_first_bit(srcp->bits, (DMA_INTERRUPT + 1))); __min1 < __min2 ? __min1: __min2; })
                                              ;
}


static inline  __attribute__((always_inline)) int __next_dma_cap(int n, const dma_cap_mask_t *srcp)
{
 return ({ int __min1 = ((DMA_INTERRUPT + 1)); int __min2 = (find_next_bit(srcp->bits, (DMA_INTERRUPT + 1), n+1)); __min1 < __min2 ? __min1: __min2; })
                                                  ;
}


static inline  __attribute__((always_inline)) void
__dma_cap_set(enum dma_transaction_type tx_type, dma_cap_mask_t *dstp)
{
 set_bit(tx_type, dstp->bits);
}


static inline  __attribute__((always_inline)) int
__dma_has_cap(enum dma_transaction_type tx_type, dma_cap_mask_t *srcp)
{
 return (__builtin_constant_p((tx_type)) ? constant_test_bit((tx_type), (srcp->bits)) : variable_test_bit((tx_type), (srcp->bits)));
}
# 373 "linux-2.6.26/include/linux/dmaengine.h"
static inline  __attribute__((always_inline)) void dma_async_issue_pending(struct dma_chan *chan)
{
 chan->device->device_issue_pending(chan);
}
# 391 "linux-2.6.26/include/linux/dmaengine.h"
static inline  __attribute__((always_inline)) enum dma_status dma_async_is_tx_complete(struct dma_chan *chan,
 dma_cookie_t cookie, dma_cookie_t *last, dma_cookie_t *used)
{
 return chan->device->device_is_tx_complete(chan, cookie, last, used);
}
# 409 "linux-2.6.26/include/linux/dmaengine.h"
static inline  __attribute__((always_inline)) enum dma_status dma_async_is_complete(dma_cookie_t cookie,
   dma_cookie_t last_complete, dma_cookie_t last_used)
{
 if (last_complete <= last_used) {
  if ((cookie <= last_complete) || (cookie > last_used))
   return DMA_SUCCESS;
 } else {
  if ((cookie <= last_complete) && (cookie > last_used))
   return DMA_SUCCESS;
 }
 return DMA_IN_PROGRESS;
}

enum dma_status dma_sync_wait(struct dma_chan *chan, dma_cookie_t cookie);



int dma_async_device_register(struct dma_device *device);
void dma_async_device_unregister(struct dma_device *device);



struct dma_page_list {
 char *base_address;
 int nr_pages;
 struct page **pages;
};

struct dma_pinned_list {
 int nr_iovecs;
 struct dma_page_list page_list[0];
};

struct dma_pinned_list *dma_pin_iovec_pages(struct iovec *iov, size_t len);
void dma_unpin_iovec_pages(struct dma_pinned_list* pinned_list);

dma_cookie_t dma_memcpy_to_iovec(struct dma_chan *chan, struct iovec *iov,
 struct dma_pinned_list *pinned_list, unsigned char *kdata, size_t len);
dma_cookie_t dma_memcpy_pg_to_iovec(struct dma_chan *chan, struct iovec *iov,
 struct dma_pinned_list *pinned_list, struct page *page,
 unsigned int offset, size_t len);
# 30 "linux-2.6.26/include/linux/skbuff.h" 2
# 96 "linux-2.6.26/include/linux/skbuff.h"
struct net_device;
struct scatterlist;
struct pipe_inode_info;
# 116 "linux-2.6.26/include/linux/skbuff.h"
struct sk_buff_head {

 struct sk_buff *next;
 struct sk_buff *prev;

 __u32 qlen;
 spinlock_t lock;
};

struct sk_buff;




typedef struct skb_frag_struct skb_frag_t;

struct skb_frag_struct {
 struct page *page;
 __u32 page_offset;
 __u32 size;
};




struct skb_shared_info {
 atomic_t dataref;
 unsigned short nr_frags;
 unsigned short gso_size;

 unsigned short gso_segs;
 unsigned short gso_type;
 __be32 ip6_frag_id;
 struct sk_buff *frag_list;
 skb_frag_t frags[(65536/((1UL) << 12) + 2)];
};
# 168 "linux-2.6.26/include/linux/skbuff.h"
enum {
 SKB_FCLONE_UNAVAILABLE,
 SKB_FCLONE_ORIG,
 SKB_FCLONE_CLONE,
};

enum {
 SKB_GSO_TCPV4 = 1 << 0,
 SKB_GSO_UDP = 1 << 1,


 SKB_GSO_DODGY = 1 << 2,


 SKB_GSO_TCP_ECN = 1 << 3,

 SKB_GSO_TCPV6 = 1 << 4,
};






typedef unsigned int sk_buff_data_t;
# 251 "linux-2.6.26/include/linux/skbuff.h"
struct sk_buff {

 struct sk_buff *next;
 struct sk_buff *prev;

 struct sock *sk;
 ktime_t tstamp;
 struct net_device *dev;

 union {
  struct dst_entry *dst;
  struct rtable *rtable;
 };
 struct sec_path *sp;







 char cb[48];

 unsigned int len,
    data_len;
 __u16 mac_len,
    hdr_len;
 union {
  __wsum csum;
  struct {
   __u16 csum_start;
   __u16 csum_offset;
  };
 };
 __u32 priority;
 __u8 local_df:1,
    cloned:1,
    ip_summed:2,
    nohdr:1,
    nfctinfo:3;
 __u8 pkt_type:3,
    fclone:2,
    ipvs_property:1,
    peeked:1,
    nf_trace:1;
 __be16 protocol;

 void (*destructor)(struct sk_buff *skb);
# 307 "linux-2.6.26/include/linux/skbuff.h"
 int iif;




 __u16 tc_index;





 __u8 ndisc_nodetype:2;
# 329 "linux-2.6.26/include/linux/skbuff.h"
 __u32 mark;

 sk_buff_data_t transport_header;
 sk_buff_data_t network_header;
 sk_buff_data_t mac_header;

 sk_buff_data_t tail;
 sk_buff_data_t end;
 unsigned char *head,
    *data;
 unsigned int truesize;
 atomic_t users;
};
# 351 "linux-2.6.26/include/linux/skbuff.h"
extern void kfree_skb(struct sk_buff *skb);
extern void __kfree_skb(struct sk_buff *skb);
extern struct sk_buff *__alloc_skb(unsigned int size,
       gfp_t priority, int fclone, int node);
static inline  __attribute__((always_inline)) struct sk_buff *alloc_skb(unsigned int size,
     gfp_t priority)
{
 return __alloc_skb(size, priority, 0, -1);
}

static inline  __attribute__((always_inline)) struct sk_buff *alloc_skb_fclone(unsigned int size,
            gfp_t priority)
{
 return __alloc_skb(size, priority, 1, -1);
}

extern struct sk_buff *skb_morph(struct sk_buff *dst, struct sk_buff *src);
extern struct sk_buff *skb_clone(struct sk_buff *skb,
     gfp_t priority);
extern struct sk_buff *skb_copy(const struct sk_buff *skb,
    gfp_t priority);
extern struct sk_buff *pskb_copy(struct sk_buff *skb,
     gfp_t gfp_mask);
extern int pskb_expand_head(struct sk_buff *skb,
     int nhead, int ntail,
     gfp_t gfp_mask);
extern struct sk_buff *skb_realloc_headroom(struct sk_buff *skb,
         unsigned int headroom);
extern struct sk_buff *skb_copy_expand(const struct sk_buff *skb,
           int newheadroom, int newtailroom,
           gfp_t priority);
extern int skb_to_sgvec(struct sk_buff *skb,
        struct scatterlist *sg, int offset,
        int len);
extern int skb_cow_data(struct sk_buff *skb, int tailbits,
        struct sk_buff **trailer);
extern int skb_pad(struct sk_buff *skb, int pad);

extern void skb_over_panic(struct sk_buff *skb, int len,
         void *here);
extern void skb_under_panic(struct sk_buff *skb, int len,
          void *here);
extern void skb_truesize_bug(struct sk_buff *skb);

static inline  __attribute__((always_inline)) void skb_truesize_check(struct sk_buff *skb)
{
 int len = sizeof(struct sk_buff) + skb->len;

 if (__builtin_expect(!!((int)skb->truesize < len), 0))
  skb_truesize_bug(skb);
}

extern int skb_append_datato_frags(struct sock *sk, struct sk_buff *skb,
   int getfrag(void *from, char *to, int offset,
   int len,int odd, struct sk_buff *skb),
   void *from, int length);

struct skb_seq_state
{
 __u32 lower_offset;
 __u32 upper_offset;
 __u32 frag_idx;
 __u32 stepped_offset;
 struct sk_buff *root_skb;
 struct sk_buff *cur_skb;
 __u8 *frag_data;
};

extern void skb_prepare_seq_read(struct sk_buff *skb,
        unsigned int from, unsigned int to,
        struct skb_seq_state *st);
extern unsigned int skb_seq_read(unsigned int consumed, const u8 **data,
       struct skb_seq_state *st);
extern void skb_abort_seq_read(struct skb_seq_state *st);

extern unsigned int skb_find_text(struct sk_buff *skb, unsigned int from,
        unsigned int to, struct ts_config *config,
        struct ts_state *state);


static inline  __attribute__((always_inline)) unsigned char *skb_end_pointer(const struct sk_buff *skb)
{
 return skb->head + skb->end;
}
# 451 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_queue_empty(const struct sk_buff_head *list)
{
 return list->next == (struct sk_buff *)list;
}
# 463 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) struct sk_buff *skb_get(struct sk_buff *skb)
{
 atomic_inc(&skb->users);
 return skb;
}
# 482 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_cloned(const struct sk_buff *skb)
{
 return skb->cloned &&
        (((&((struct skb_shared_info *)(skb_end_pointer(skb)))->dataref)->counter) & ((1 << 16) - 1)) != 1;
}
# 495 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_header_cloned(const struct sk_buff *skb)
{
 int dataref;

 if (!skb->cloned)
  return 0;

 dataref = ((&((struct skb_shared_info *)(skb_end_pointer(skb)))->dataref)->counter);
 dataref = (dataref & ((1 << 16) - 1)) - (dataref >> 16);
 return dataref != 1;
}
# 515 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_header_release(struct sk_buff *skb)
{
 do { if (__builtin_expect(!!(skb->nohdr), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
 skb->nohdr = 1;
 atomic_add(1 << 16, &((struct skb_shared_info *)(skb_end_pointer(skb)))->dataref);
}
# 529 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_shared(const struct sk_buff *skb)
{
 return ((&skb->users)->counter) != 1;
}
# 547 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) struct sk_buff *skb_share_check(struct sk_buff *skb,
           gfp_t pri)
{
 do { if (pri & (( gfp_t)0x10u)) do { do { } while (0); } while (0); } while (0);
 if (skb_shared(skb)) {
  struct sk_buff *nskb = skb_clone(skb, pri);
  kfree_skb(skb);
  skb = nskb;
 }
 return skb;
}
# 579 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) struct sk_buff *skb_unshare(struct sk_buff *skb,
       gfp_t pri)
{
 do { if (pri & (( gfp_t)0x10u)) do { do { } while (0); } while (0); } while (0);
 if (skb_cloned(skb)) {
  struct sk_buff *nskb = skb_copy(skb, pri);
  kfree_skb(skb);
  skb = nskb;
 }
 return skb;
}
# 604 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) struct sk_buff *skb_peek(struct sk_buff_head *list_)
{
 struct sk_buff *list = ((struct sk_buff *)list_)->next;
 if (list == (struct sk_buff *)list_)
  list = ((void *)0);
 return list;
}
# 625 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) struct sk_buff *skb_peek_tail(struct sk_buff_head *list_)
{
 struct sk_buff *list = ((struct sk_buff *)list_)->prev;
 if (list == (struct sk_buff *)list_)
  list = ((void *)0);
 return list;
}







static inline  __attribute__((always_inline)) __u32 skb_queue_len(const struct sk_buff_head *list_)
{
 return list_->qlen;
}
# 652 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_queue_head_init(struct sk_buff_head *list)
{
 do { *(&list->lock) = (spinlock_t) { .raw_lock = { }, }; } while (0);
 list->prev = list->next = (struct sk_buff *)list;
 list->qlen = 0;
}

static inline  __attribute__((always_inline)) void skb_queue_head_init_class(struct sk_buff_head *list,
  struct lock_class_key *class)
{
 skb_queue_head_init(list);
 do { (void)(class); } while (0);
}







extern void skb_insert(struct sk_buff *old, struct sk_buff *newsk, struct sk_buff_head *list);
static inline  __attribute__((always_inline)) void __skb_insert(struct sk_buff *newsk,
    struct sk_buff *prev, struct sk_buff *next,
    struct sk_buff_head *list)
{
 newsk->next = next;
 newsk->prev = prev;
 next->prev = prev->next = newsk;
 list->qlen++;
}
# 694 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void __skb_queue_after(struct sk_buff_head *list,
         struct sk_buff *prev,
         struct sk_buff *newsk)
{
 __skb_insert(newsk, prev, prev->next, list);
}

extern void skb_append(struct sk_buff *old, struct sk_buff *newsk,
         struct sk_buff_head *list);

static inline  __attribute__((always_inline)) void __skb_queue_before(struct sk_buff_head *list,
          struct sk_buff *next,
          struct sk_buff *newsk)
{
 __skb_insert(newsk, next->prev, next, list);
}
# 721 "linux-2.6.26/include/linux/skbuff.h"
extern void skb_queue_head(struct sk_buff_head *list, struct sk_buff *newsk);
static inline  __attribute__((always_inline)) void __skb_queue_head(struct sk_buff_head *list,
        struct sk_buff *newsk)
{
 __skb_queue_after(list, (struct sk_buff *)list, newsk);
}
# 738 "linux-2.6.26/include/linux/skbuff.h"
extern void skb_queue_tail(struct sk_buff_head *list, struct sk_buff *newsk);
static inline  __attribute__((always_inline)) void __skb_queue_tail(struct sk_buff_head *list,
       struct sk_buff *newsk)
{
 __skb_queue_before(list, (struct sk_buff *)list, newsk);
}





extern void skb_unlink(struct sk_buff *skb, struct sk_buff_head *list);
static inline  __attribute__((always_inline)) void __skb_unlink(struct sk_buff *skb, struct sk_buff_head *list)
{
 struct sk_buff *next, *prev;

 list->qlen--;
 next = skb->next;
 prev = skb->prev;
 skb->next = skb->prev = ((void *)0);
 next->prev = prev;
 prev->next = next;
}
# 770 "linux-2.6.26/include/linux/skbuff.h"
extern struct sk_buff *skb_dequeue(struct sk_buff_head *list);
static inline  __attribute__((always_inline)) struct sk_buff *__skb_dequeue(struct sk_buff_head *list)
{
 struct sk_buff *skb = skb_peek(list);
 if (skb)
  __skb_unlink(skb, list);
 return skb;
}
# 787 "linux-2.6.26/include/linux/skbuff.h"
extern struct sk_buff *skb_dequeue_tail(struct sk_buff_head *list);
static inline  __attribute__((always_inline)) struct sk_buff *__skb_dequeue_tail(struct sk_buff_head *list)
{
 struct sk_buff *skb = skb_peek_tail(list);
 if (skb)
  __skb_unlink(skb, list);
 return skb;
}


static inline  __attribute__((always_inline)) int skb_is_nonlinear(const struct sk_buff *skb)
{
 return skb->data_len;
}

static inline  __attribute__((always_inline)) unsigned int skb_headlen(const struct sk_buff *skb)
{
 return skb->len - skb->data_len;
}

static inline  __attribute__((always_inline)) int skb_pagelen(const struct sk_buff *skb)
{
 int i, len = 0;

 for (i = (int)((struct skb_shared_info *)(skb_end_pointer(skb)))->nr_frags - 1; i >= 0; i--)
  len += ((struct skb_shared_info *)(skb_end_pointer(skb)))->frags[i].size;
 return len + skb_headlen(skb);
}

static inline  __attribute__((always_inline)) void skb_fill_page_desc(struct sk_buff *skb, int i,
          struct page *page, int off, int size)
{
 skb_frag_t *frag = &((struct skb_shared_info *)(skb_end_pointer(skb)))->frags[i];

 frag->page = page;
 frag->page_offset = off;
 frag->size = size;
 ((struct skb_shared_info *)(skb_end_pointer(skb)))->nr_frags = i + 1;
}






static inline  __attribute__((always_inline)) unsigned char *skb_tail_pointer(const struct sk_buff *skb)
{
 return skb->head + skb->tail;
}

static inline  __attribute__((always_inline)) void skb_reset_tail_pointer(struct sk_buff *skb)
{
 skb->tail = skb->data - skb->head;
}

static inline  __attribute__((always_inline)) void skb_set_tail_pointer(struct sk_buff *skb, const int offset)
{
 skb_reset_tail_pointer(skb);
 skb->tail += offset;
}
# 868 "linux-2.6.26/include/linux/skbuff.h"
extern unsigned char *skb_put(struct sk_buff *skb, unsigned int len);
static inline  __attribute__((always_inline)) unsigned char *__skb_put(struct sk_buff *skb, unsigned int len)
{
 unsigned char *tmp = skb_tail_pointer(skb);
 do { if (__builtin_expect(!!(skb_is_nonlinear(skb)), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
 skb->tail += len;
 skb->len += len;
 return tmp;
}

extern unsigned char *skb_push(struct sk_buff *skb, unsigned int len);
static inline  __attribute__((always_inline)) unsigned char *__skb_push(struct sk_buff *skb, unsigned int len)
{
 skb->data -= len;
 skb->len += len;
 return skb->data;
}

extern unsigned char *skb_pull(struct sk_buff *skb, unsigned int len);
static inline  __attribute__((always_inline)) unsigned char *__skb_pull(struct sk_buff *skb, unsigned int len)
{
 skb->len -= len;
 do { if (__builtin_expect(!!(skb->len < skb->data_len), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
 return skb->data += len;
}

extern unsigned char *__pskb_pull_tail(struct sk_buff *skb, int delta);

static inline  __attribute__((always_inline)) unsigned char *__pskb_pull(struct sk_buff *skb, unsigned int len)
{
 if (len > skb_headlen(skb) &&
     !__pskb_pull_tail(skb, len-skb_headlen(skb)))
  return ((void *)0);
 skb->len -= len;
 return skb->data += len;
}

static inline  __attribute__((always_inline)) unsigned char *pskb_pull(struct sk_buff *skb, unsigned int len)
{
 return __builtin_expect(!!(len > skb->len), 0) ? ((void *)0) : __pskb_pull(skb, len);
}

static inline  __attribute__((always_inline)) int pskb_may_pull(struct sk_buff *skb, unsigned int len)
{
 if (__builtin_expect(!!(len <= skb_headlen(skb)), 1))
  return 1;
 if (__builtin_expect(!!(len > skb->len), 0))
  return 0;
 return __pskb_pull_tail(skb, len-skb_headlen(skb)) != ((void *)0);
}







static inline  __attribute__((always_inline)) unsigned int skb_headroom(const struct sk_buff *skb)
{
 return skb->data - skb->head;
}







static inline  __attribute__((always_inline)) int skb_tailroom(const struct sk_buff *skb)
{
 return skb_is_nonlinear(skb) ? 0 : skb->end - skb->tail;
}
# 949 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_reserve(struct sk_buff *skb, int len)
{
 skb->data += len;
 skb->tail += len;
}


static inline  __attribute__((always_inline)) unsigned char *skb_transport_header(const struct sk_buff *skb)
{
 return skb->head + skb->transport_header;
}

static inline  __attribute__((always_inline)) void skb_reset_transport_header(struct sk_buff *skb)
{
 skb->transport_header = skb->data - skb->head;
}

static inline  __attribute__((always_inline)) void skb_set_transport_header(struct sk_buff *skb,
         const int offset)
{
 skb_reset_transport_header(skb);
 skb->transport_header += offset;
}

static inline  __attribute__((always_inline)) unsigned char *skb_network_header(const struct sk_buff *skb)
{
 return skb->head + skb->network_header;
}

static inline  __attribute__((always_inline)) void skb_reset_network_header(struct sk_buff *skb)
{
 skb->network_header = skb->data - skb->head;
}

static inline  __attribute__((always_inline)) void skb_set_network_header(struct sk_buff *skb, const int offset)
{
 skb_reset_network_header(skb);
 skb->network_header += offset;
}

static inline  __attribute__((always_inline)) unsigned char *skb_mac_header(const struct sk_buff *skb)
{
 return skb->head + skb->mac_header;
}

static inline  __attribute__((always_inline)) int skb_mac_header_was_set(const struct sk_buff *skb)
{
 return skb->mac_header != ~0U;
}

static inline  __attribute__((always_inline)) void skb_reset_mac_header(struct sk_buff *skb)
{
 skb->mac_header = skb->data - skb->head;
}

static inline  __attribute__((always_inline)) void skb_set_mac_header(struct sk_buff *skb, const int offset)
{
 skb_reset_mac_header(skb);
 skb->mac_header += offset;
}
# 1064 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_transport_offset(const struct sk_buff *skb)
{
 return skb_transport_header(skb) - skb->data;
}

static inline  __attribute__((always_inline)) u32 skb_network_header_len(const struct sk_buff *skb)
{
 return skb->transport_header - skb->network_header;
}

static inline  __attribute__((always_inline)) int skb_network_offset(const struct sk_buff *skb)
{
 return skb_network_header(skb) - skb->data;
}
# 1122 "linux-2.6.26/include/linux/skbuff.h"
extern int ___pskb_trim(struct sk_buff *skb, unsigned int len);

static inline  __attribute__((always_inline)) void __skb_trim(struct sk_buff *skb, unsigned int len)
{
 if (__builtin_expect(!!(skb->data_len), 0)) {
  ({ int __ret_warn_on = !!(1); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_on_slowpath("linux-2.6.26/include/linux/skbuff.h", 1127); __builtin_expect(!!(__ret_warn_on), 0); });
  return;
 }
 skb->len = len;
 skb_set_tail_pointer(skb, len);
}

extern void skb_trim(struct sk_buff *skb, unsigned int len);

static inline  __attribute__((always_inline)) int __pskb_trim(struct sk_buff *skb, unsigned int len)
{
 if (skb->data_len)
  return ___pskb_trim(skb, len);
 __skb_trim(skb, len);
 return 0;
}

static inline  __attribute__((always_inline)) int pskb_trim(struct sk_buff *skb, unsigned int len)
{
 return (len < skb->len) ? __pskb_trim(skb, len) : 0;
}
# 1158 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void pskb_trim_unique(struct sk_buff *skb, unsigned int len)
{
 int err = pskb_trim(skb, len);
 do { if (__builtin_expect(!!(err), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
}
# 1172 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_orphan(struct sk_buff *skb)
{
 if (skb->destructor)
  skb->destructor(skb);
 skb->destructor = ((void *)0);
 skb->sk = ((void *)0);
}
# 1188 "linux-2.6.26/include/linux/skbuff.h"
extern void skb_queue_purge(struct sk_buff_head *list);
static inline  __attribute__((always_inline)) void __skb_queue_purge(struct sk_buff_head *list)
{
 struct sk_buff *skb;
 while ((skb = __skb_dequeue(list)) != ((void *)0))
  kfree_skb(skb);
}
# 1208 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) struct sk_buff *__dev_alloc_skb(unsigned int length,
           gfp_t gfp_mask)
{
 struct sk_buff *skb = alloc_skb(length + 16, gfp_mask);
 if (__builtin_expect(!!(skb), 1))
  skb_reserve(skb, 16);
 return skb;
}

extern struct sk_buff *dev_alloc_skb(unsigned int length);

extern struct sk_buff *__netdev_alloc_skb(struct net_device *dev,
  unsigned int length, gfp_t gfp_mask);
# 1235 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) struct sk_buff *netdev_alloc_skb(struct net_device *dev,
  unsigned int length)
{
 return __netdev_alloc_skb(dev, length, ((( gfp_t)0x20u)));
}
# 1249 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_clone_writable(struct sk_buff *skb, unsigned int len)
{
 return !skb_header_cloned(skb) &&
        skb_headroom(skb) + len <= skb->hdr_len;
}

static inline  __attribute__((always_inline)) int __skb_cow(struct sk_buff *skb, unsigned int headroom,
       int cloned)
{
 int delta = 0;

 if (headroom < 16)
  headroom = 16;
 if (headroom > skb_headroom(skb))
  delta = headroom - skb_headroom(skb);

 if (delta || cloned)
  return pskb_expand_head(skb, (((delta)+((typeof(delta))(16)-1))&~((typeof(delta))(16)-1)), 0,
     ((( gfp_t)0x20u)));
 return 0;
}
# 1283 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_cow(struct sk_buff *skb, unsigned int headroom)
{
 return __skb_cow(skb, headroom, skb_cloned(skb));
}
# 1298 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_cow_head(struct sk_buff *skb, unsigned int headroom)
{
 return __skb_cow(skb, headroom, skb_header_cloned(skb));
}
# 1314 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_padto(struct sk_buff *skb, unsigned int len)
{
 unsigned int size = skb->len;
 if (__builtin_expect(!!(size >= len), 1))
  return 0;
 return skb_pad(skb, len-size);
}

static inline  __attribute__((always_inline)) int skb_add_data(struct sk_buff *skb,
          char *from, int copy)
{
 const int off = skb->len;

 if (skb->ip_summed == 0) {
  int err = 0;
  __wsum csum = csum_partial_copy_from_user(from, skb_put(skb, copy),
           copy, 0, &err);
  if (!err) {
   skb->csum = csum_block_add(skb->csum, csum, off);
   return 0;
  }
 } else if (!copy_from_user(skb_put(skb, copy), from, copy))
  return 0;

 __skb_trim(skb, off);
 return -14;
}

static inline  __attribute__((always_inline)) int skb_can_coalesce(struct sk_buff *skb, int i,
       struct page *page, int off)
{
 if (i) {
  struct skb_frag_struct *frag = &((struct skb_shared_info *)(skb_end_pointer(skb)))->frags[i - 1];

  return page == frag->page &&
         off == frag->page_offset + frag->size;
 }
 return 0;
}

static inline  __attribute__((always_inline)) int __skb_linearize(struct sk_buff *skb)
{
 return __pskb_pull_tail(skb, skb->data_len) ? 0 : -12;
}
# 1366 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_linearize(struct sk_buff *skb)
{
 return skb_is_nonlinear(skb) ? __skb_linearize(skb) : 0;
}
# 1378 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_linearize_cow(struct sk_buff *skb)
{
 return skb_is_nonlinear(skb) || skb_cloned(skb) ?
        __skb_linearize(skb) : 0;
}
# 1395 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_postpull_rcsum(struct sk_buff *skb,
          const void *start, unsigned int len)
{
 if (skb->ip_summed == 2)
  skb->csum = csum_sub(skb->csum, csum_partial(start, len, 0));
}

unsigned char *skb_pull_rcsum(struct sk_buff *skb, unsigned int len);
# 1413 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int pskb_trim_rcsum(struct sk_buff *skb, unsigned int len)
{
 if (__builtin_expect(!!(len >= skb->len), 1))
  return 0;
 if (skb->ip_summed == 2)
  skb->ip_summed = 0;
 return __pskb_trim(skb, len);
}
# 1438 "linux-2.6.26/include/linux/skbuff.h"
extern struct sk_buff *__skb_recv_datagram(struct sock *sk, unsigned flags,
        int *peeked, int *err);
extern struct sk_buff *skb_recv_datagram(struct sock *sk, unsigned flags,
      int noblock, int *err);
extern unsigned int datagram_poll(struct file *file, struct socket *sock,
         struct poll_table_struct *wait);
extern int skb_copy_datagram_iovec(const struct sk_buff *from,
            int offset, struct iovec *to,
            int size);
extern int skb_copy_and_csum_datagram_iovec(struct sk_buff *skb,
       int hlen,
       struct iovec *iov);
extern void skb_free_datagram(struct sock *sk, struct sk_buff *skb);
extern int skb_kill_datagram(struct sock *sk, struct sk_buff *skb,
      unsigned int flags);
extern __wsum skb_checksum(const struct sk_buff *skb, int offset,
        int len, __wsum csum);
extern int skb_copy_bits(const struct sk_buff *skb, int offset,
         void *to, int len);
extern int skb_store_bits(struct sk_buff *skb, int offset,
          const void *from, int len);
extern __wsum skb_copy_and_csum_bits(const struct sk_buff *skb,
           int offset, u8 *to, int len,
           __wsum csum);
extern int skb_splice_bits(struct sk_buff *skb,
      unsigned int offset,
      struct pipe_inode_info *pipe,
      unsigned int len,
      unsigned int flags);
extern void skb_copy_and_csum_dev(const struct sk_buff *skb, u8 *to);
extern void skb_split(struct sk_buff *skb,
     struct sk_buff *skb1, const u32 len);

extern struct sk_buff *skb_segment(struct sk_buff *skb, int features);

static inline  __attribute__((always_inline)) void *skb_header_pointer(const struct sk_buff *skb, int offset,
           int len, void *buffer)
{
 int hlen = skb_headlen(skb);

 if (hlen - offset >= len)
  return skb->data + offset;

 if (skb_copy_bits(skb, offset, buffer, len) < 0)
  return ((void *)0);

 return buffer;
}

static inline  __attribute__((always_inline)) void skb_copy_from_linear_data(const struct sk_buff *skb,
          void *to,
          const unsigned int len)
{
 memcpy(to, skb->data, len);
}

static inline  __attribute__((always_inline)) void skb_copy_from_linear_data_offset(const struct sk_buff *skb,
          const int offset, void *to,
          const unsigned int len)
{
 memcpy(to, skb->data + offset, len);
}

static inline  __attribute__((always_inline)) void skb_copy_to_linear_data(struct sk_buff *skb,
        const void *from,
        const unsigned int len)
{
 memcpy(skb->data, from, len);
}

static inline  __attribute__((always_inline)) void skb_copy_to_linear_data_offset(struct sk_buff *skb,
        const int offset,
        const void *from,
        const unsigned int len)
{
 memcpy(skb->data + offset, from, len);
}

extern void skb_init(void);
# 1527 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_get_timestamp(const struct sk_buff *skb, struct timeval *stamp)
{
 *stamp = ns_to_timeval((skb->tstamp).tv64);
}

static inline  __attribute__((always_inline)) void __net_timestamp(struct sk_buff *skb)
{
 skb->tstamp = ktime_get_real();
}

static inline  __attribute__((always_inline)) ktime_t net_timedelta(ktime_t t)
{
 return ({ (ktime_t){ .tv64 = (ktime_get_real()).tv64 - (t).tv64 }; });
}

static inline  __attribute__((always_inline)) ktime_t net_invalid_timestamp(void)
{
 return ktime_set(0, 0);
}

extern __sum16 __skb_checksum_complete_head(struct sk_buff *skb, int len);
extern __sum16 __skb_checksum_complete(struct sk_buff *skb);

static inline  __attribute__((always_inline)) int skb_csum_unnecessary(const struct sk_buff *skb)
{
 return skb->ip_summed & 1;
}
# 1571 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) __sum16 skb_checksum_complete(struct sk_buff *skb)
{
 return skb_csum_unnecessary(skb) ?
        0 : __skb_checksum_complete(skb);
}
# 1612 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void nf_reset(struct sk_buff *skb)
{
# 1624 "linux-2.6.26/include/linux/skbuff.h"
}


static inline  __attribute__((always_inline)) void __nf_copy(struct sk_buff *dst, const struct sk_buff *src)
{
# 1640 "linux-2.6.26/include/linux/skbuff.h"
}

static inline  __attribute__((always_inline)) void nf_copy(struct sk_buff *dst, const struct sk_buff *src)
{







 __nf_copy(dst, src);
}
# 1665 "linux-2.6.26/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_copy_secmark(struct sk_buff *to, const struct sk_buff *from)
{ }

static inline  __attribute__((always_inline)) void skb_init_secmark(struct sk_buff *skb)
{ }


static inline  __attribute__((always_inline)) void skb_set_queue_mapping(struct sk_buff *skb, u16 queue_mapping)
{



}

static inline  __attribute__((always_inline)) u16 skb_get_queue_mapping(struct sk_buff *skb)
{



 return 0;

}

static inline  __attribute__((always_inline)) void skb_copy_queue_mapping(struct sk_buff *to, const struct sk_buff *from)
{



}

static inline  __attribute__((always_inline)) int skb_is_gso(const struct sk_buff *skb)
{
 return ((struct skb_shared_info *)(skb_end_pointer(skb)))->gso_size;
}

static inline  __attribute__((always_inline)) int skb_is_gso_v6(const struct sk_buff *skb)
{
 return ((struct skb_shared_info *)(skb_end_pointer(skb)))->gso_type & SKB_GSO_TCPV6;
}

static inline  __attribute__((always_inline)) void skb_forward_csum(struct sk_buff *skb)
{

 if (skb->ip_summed == 2)
  skb->ip_summed = 0;
}

bool skb_partial_csum_set(struct sk_buff *skb, u16 start, u16 off);
# 115 "linux-2.6.26/include/linux/if_ether.h" 2

static inline  __attribute__((always_inline)) struct ethhdr *eth_hdr(const struct sk_buff *skb)
{
 return (struct ethhdr *)skb_mac_header(skb);
}

int eth_header_parse(const struct sk_buff *skb, unsigned char *haddr);


typedef  struct ctl_table   _GLOBAL_149_T; extern  _GLOBAL_149_T  _GLOBAL_0_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_1_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_2_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_3_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_4_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_5_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_6_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_7_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_8_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_9_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_10_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_11_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_12_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_13_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_14_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_15_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_16_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_17_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_18_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_19_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_20_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_21_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_22_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_23_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_24_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_25_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_26_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_27_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_28_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_29_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_30_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_31_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_32_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_33_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_34_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_35_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_36_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_37_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_38_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_39_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_40_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_41_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_42_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_43_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_44_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_45_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_46_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_47_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_48_ether_table_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_49_ether_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_table_I) *_GLOBAL_ether_table_13_A[NUM_STACKS];   


extern ssize_t sysfs_format_mac(char *buf, const unsigned char *addr, int len);




extern char *print_mac(char *buf, const unsigned char *addr);
# 30 "linux-2.6.26/include/linux/netdevice.h" 2
# 1 "linux-2.6.26/include/linux/if_packet.h" 1





struct sockaddr_pkt
{
 unsigned short spkt_family;
 unsigned char spkt_device[14];
 __be16 spkt_protocol;
};

struct sockaddr_ll
{
 unsigned short sll_family;
 __be16 sll_protocol;
 int sll_ifindex;
 unsigned short sll_hatype;
 unsigned char sll_pkttype;
 unsigned char sll_halen;
 unsigned char sll_addr[8];
};
# 47 "linux-2.6.26/include/linux/if_packet.h"
struct tpacket_stats
{
 unsigned int tp_packets;
 unsigned int tp_drops;
};

struct tpacket_auxdata
{
 __u32 tp_status;
 __u32 tp_len;
 __u32 tp_snaplen;
 __u16 tp_mac;
 __u16 tp_net;
};

struct tpacket_hdr
{
 unsigned long tp_status;





 unsigned int tp_len;
 unsigned int tp_snaplen;
 unsigned short tp_mac;
 unsigned short tp_net;
 unsigned int tp_sec;
 unsigned int tp_usec;
};
# 95 "linux-2.6.26/include/linux/if_packet.h"
struct tpacket_req
{
 unsigned int tp_block_size;
 unsigned int tp_block_nr;
 unsigned int tp_frame_size;
 unsigned int tp_frame_nr;
};

struct packet_mreq
{
 int mr_ifindex;
 unsigned short mr_type;
 unsigned short mr_alen;
 unsigned char mr_address[8];
};
# 31 "linux-2.6.26/include/linux/netdevice.h" 2



# 1 "linux-2.6.26/include/linux/delay.h" 1
# 12 "linux-2.6.26/include/linux/delay.h"
typedef  unsigned long   _GLOBAL_150_T; extern  _GLOBAL_150_T  global_loops_per_jiffy[NUM_STACKS];    

# 1 "linux-2.6.26/include/asm/delay.h" 1
# 11 "linux-2.6.26/include/asm/delay.h"
extern void __bad_udelay(void);
extern void __bad_ndelay(void);

extern void __udelay(unsigned long usecs);
extern void __ndelay(unsigned long nsecs);
extern void __const_udelay(unsigned long xloops);
extern void __delay(unsigned long loops);
# 29 "linux-2.6.26/include/asm/delay.h"
void use_tsc_delay(void);
# 15 "linux-2.6.26/include/linux/delay.h" 2
# 44 "linux-2.6.26/include/linux/delay.h"
void calibrate_delay(void);
void msleep(unsigned int msecs);
unsigned long msleep_interruptible(unsigned int msecs);

static inline  __attribute__((always_inline)) void ssleep(unsigned int seconds)
{
 msleep(seconds * 1000);
}
# 35 "linux-2.6.26/include/linux/netdevice.h" 2
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 36 "linux-2.6.26/include/linux/netdevice.h" 2
# 44 "linux-2.6.26/include/linux/netdevice.h"
# 1 "linux-2.6.26/include/net/net_namespace.h" 1






# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 8 "linux-2.6.26/include/net/net_namespace.h" 2



# 1 "linux-2.6.26/include/net/netns/core.h" 1



struct ctl_table_header;
struct prot_inuse;

struct netns_core {

 struct ctl_table_header *sysctl_hdr;

 int sysctl_somaxconn;

 struct prot_inuse *inuse;
};
# 12 "linux-2.6.26/include/net/net_namespace.h" 2
# 1 "linux-2.6.26/include/net/netns/unix.h" 1






struct ctl_table_header;
struct netns_unix {
 int sysctl_max_dgram_qlen;
 struct ctl_table_header *ctl;
};
# 13 "linux-2.6.26/include/net/net_namespace.h" 2
# 1 "linux-2.6.26/include/net/netns/packet.h" 1
# 10 "linux-2.6.26/include/net/netns/packet.h"
struct netns_packet {
 rwlock_t sklist_lock;
 struct hlist_head sklist;
};
# 14 "linux-2.6.26/include/net/net_namespace.h" 2
# 1 "linux-2.6.26/include/net/netns/ipv4.h" 1







# 1 "linux-2.6.26/include/net/inet_frag.h" 1



struct netns_frags {
 int nqueues;
 atomic_t mem;
 struct list_head lru_list;


 int timeout;
 int high_thresh;
 int low_thresh;
};

struct inet_frag_queue {
 struct hlist_node list;
 struct netns_frags *net;
 struct list_head lru_list;
 spinlock_t lock;
 atomic_t refcnt;
 struct timer_list timer;
 struct sk_buff *fragments;
 ktime_t stamp;
 int len;
 int meat;
 __u8 last_in;




};



struct inet_frags {
 struct hlist_head hash[64];
 rwlock_t lock;
 u32 rnd;
 int qsize;
 int secret_interval;
 struct timer_list secret_timer;

 unsigned int (*hashfn)(struct inet_frag_queue *);
 void (*constructor)(struct inet_frag_queue *q,
      void *arg);
 void (*destructor)(struct inet_frag_queue *);
 void (*skb_free)(struct sk_buff *);
 int (*match)(struct inet_frag_queue *q,
      void *arg);
 void (*frag_expire)(unsigned long data);
};

void inet_frags_init(struct inet_frags *);
void inet_frags_fini(struct inet_frags *);

void inet_frags_init_net(struct netns_frags *nf);
void inet_frags_exit_net(struct netns_frags *nf, struct inet_frags *f);

void inet_frag_kill(struct inet_frag_queue *q, struct inet_frags *f);
void inet_frag_destroy(struct inet_frag_queue *q,
    struct inet_frags *f, int *work);
int inet_frag_evictor(struct netns_frags *nf, struct inet_frags *f);
struct inet_frag_queue *inet_frag_find(struct netns_frags *nf,
  struct inet_frags *f, void *key, unsigned int hash);

static inline  __attribute__((always_inline)) void inet_frag_put(struct inet_frag_queue *q, struct inet_frags *f)
{
 if (atomic_dec_and_test(&q->refcnt))
  inet_frag_destroy(q, f, ((void *)0));
}
# 9 "linux-2.6.26/include/net/netns/ipv4.h" 2

struct ctl_table_header;
struct ipv4_devconf;
struct fib_rules_ops;
struct hlist_head;
struct sock;

struct netns_ipv4 {

 struct ctl_table_header *forw_hdr;
 struct ctl_table_header *frags_hdr;
 struct ctl_table_header *ipv4_hdr;

 struct ipv4_devconf *devconf_all;
 struct ipv4_devconf *devconf_dflt;



 struct hlist_head *fib_table_hash;
 struct sock *fibnl;

 struct sock **icmp_sk;
 struct sock *tcp_sock;

 struct netns_frags frags;







 int sysctl_icmp_echo_ignore_all;
 int sysctl_icmp_echo_ignore_broadcasts;
 int sysctl_icmp_ignore_bogus_error_responses;
 int sysctl_icmp_ratelimit;
 int sysctl_icmp_ratemask;
 int sysctl_icmp_errors_use_inbound_ifaddr;
};
# 15 "linux-2.6.26/include/net/net_namespace.h" 2
# 1 "linux-2.6.26/include/net/netns/ipv6.h" 1
# 10 "linux-2.6.26/include/net/netns/ipv6.h"
struct ctl_table_header;

struct netns_sysctl_ipv6 {

 struct ctl_table_header *table;
 struct ctl_table_header *frags_hdr;

 int bindv6only;
 int flush_delay;
 int ip6_rt_max_size;
 int ip6_rt_gc_min_interval;
 int ip6_rt_gc_timeout;
 int ip6_rt_gc_interval;
 int ip6_rt_gc_elasticity;
 int ip6_rt_mtu_expires;
 int ip6_rt_min_advmss;
 int icmpv6_time;
};

struct netns_ipv6 {
 struct netns_sysctl_ipv6 sysctl;
 struct ipv6_devconf *devconf_all;
 struct ipv6_devconf *devconf_dflt;
 struct netns_frags frags;





 struct rt6_info *ip6_null_entry;
 struct rt6_statistics *rt6_stats;
 struct timer_list *ip6_fib_timer;
 struct hlist_head *fib_table_hash;
 struct fib6_table *fib6_main_tbl;
 struct dst_ops *ip6_dst_ops;
 unsigned int ip6_rt_gc_expire;
 unsigned long ip6_rt_last_gc;






 struct sock **icmp_sk;
 struct sock *ndisc_sk;
 struct sock *tcp_sk;
 struct sock *igmp_sk;
};
# 16 "linux-2.6.26/include/net/net_namespace.h" 2
# 1 "linux-2.6.26/include/net/netns/dccp.h" 1



struct sock;

struct netns_dccp {
 struct sock *v4_ctl_sk;
 struct sock *v6_ctl_sk;
};
# 17 "linux-2.6.26/include/net/net_namespace.h" 2
# 1 "linux-2.6.26/include/net/netns/x_tables.h" 1






struct netns_xt {
 struct list_head tables[34];
};
# 18 "linux-2.6.26/include/net/net_namespace.h" 2

struct proc_dir_entry;
struct net_device;
struct sock;
struct ctl_table_header;
struct net_generic;

struct net {
 atomic_t count;







 struct list_head list;
 struct work_struct work;

 struct proc_dir_entry *proc_net;
 struct proc_dir_entry *proc_net_stat;

 struct list_head sysctl_table_headers;

 struct net_device *loopback_dev;

 struct list_head dev_base_head;
 struct hlist_head *dev_name_head;
 struct hlist_head *dev_index_head;


 struct list_head rules_ops;
 spinlock_t rules_mod_lock;

 struct sock *rtnl;

 struct netns_core core;
 struct netns_packet packet;
 struct netns_unix unx;
 struct netns_ipv4 ipv4;

 struct netns_ipv6 ipv6;







 struct net_generic *gen;
};


# 1 "linux-2.6.26/include/linux/seq_file_net.h" 1



# 1 "linux-2.6.26/include/linux/seq_file.h" 1







struct seq_operations;
struct file;
struct path;
struct inode;
struct dentry;

struct seq_file {
 char *buf;
 size_t size;
 size_t from;
 size_t count;
 loff_t index;
 u64 version;
 struct mutex lock;
 const struct seq_operations *op;
 void *private;
};

struct seq_operations {
 void * (*start) (struct seq_file *m, loff_t *pos);
 void (*stop) (struct seq_file *m, void *v);
 void * (*next) (struct seq_file *m, void *v, loff_t *pos);
 int (*show) (struct seq_file *m, void *v);
};



int seq_open(struct file *, const struct seq_operations *);
ssize_t seq_read(struct file *, char *, size_t, loff_t *);
loff_t seq_lseek(struct file *, loff_t, int);
int seq_release(struct inode *, struct file *);
int seq_escape(struct seq_file *, const char *, const char *);
int seq_putc(struct seq_file *m, char c);
int seq_puts(struct seq_file *m, const char *s);

int seq_printf(struct seq_file *, const char *, ...)
 __attribute__ ((format (printf,2,3))) ;

int seq_path(struct seq_file *, struct path *, char *);
int seq_dentry(struct seq_file *, struct dentry *, char *);
int seq_path_root(struct seq_file *m, struct path *path, struct path *root,
    char *esc);

int single_open(struct file *, int (*)(struct seq_file *, void *), void *);
int single_release(struct inode *, struct file *);
void *__seq_open_private(struct file *, const struct seq_operations *, int);
int seq_open_private(struct file *, const struct seq_operations *, int);
int seq_release_private(struct inode *, struct file *);







extern struct list_head *seq_list_start(struct list_head *head,
  loff_t pos);
extern struct list_head *seq_list_start_head(struct list_head *head,
  loff_t pos);
extern struct list_head *seq_list_next(void *v, struct list_head *head,
  loff_t *ppos);
# 5 "linux-2.6.26/include/linux/seq_file_net.h" 2

struct net;
typedef  struct net   _GLOBAL_151_T; extern  _GLOBAL_151_T  global_init_net[NUM_STACKS];    

struct seq_net_private {



};

int seq_open_net(struct inode *, struct file *,
   const struct seq_operations *, int);
int seq_release_net(struct inode *, struct file *);
static inline  __attribute__((always_inline)) struct net *seq_file_net(struct seq_file *seq)
{



 return &global_init_net[get_stack_id()];

}
# 72 "linux-2.6.26/include/net/net_namespace.h" 2


typedef  struct net   _GLOBAL_152_T; extern  _GLOBAL_152_T  global_init_net[NUM_STACKS];    




extern struct net *copy_net_ns(unsigned long flags, struct net *net_ns);
# 93 "linux-2.6.26/include/net/net_namespace.h"
typedef  struct list_head   _GLOBAL_153_T; extern  _GLOBAL_153_T  global_net_namespace_list[NUM_STACKS];    
# 134 "linux-2.6.26/include/net/net_namespace.h"
static inline  __attribute__((always_inline)) int net_alive(struct net *net)
{
 return 1;
}

static inline  __attribute__((always_inline)) struct net *get_net(struct net *net)
{
 return net;
}

static inline  __attribute__((always_inline)) void put_net(struct net *net)
{
}

static inline  __attribute__((always_inline)) struct net *maybe_get_net(struct net *net)
{
 return net;
}

static inline 
__attribute__((always_inline)) int net_eq(const struct net *net1, const struct net *net2)
{
 return 1;
}
# 175 "linux-2.6.26/include/net/net_namespace.h"
static inline  __attribute__((always_inline)) struct net *hold_net(struct net *net)
{
 return net;
}

static inline  __attribute__((always_inline)) void release_net(struct net *net)
{
}
# 199 "linux-2.6.26/include/net/net_namespace.h"
struct pernet_operations {
 struct list_head list;
 int (*init)(struct net *net);
 void (*exit)(struct net *net);
};

extern int register_pernet_subsys(struct pernet_operations *);
extern void unregister_pernet_subsys(struct pernet_operations *);
extern int register_pernet_device(struct pernet_operations *);
extern void unregister_pernet_device(struct pernet_operations *);
extern int register_pernet_gen_device(int *id, struct pernet_operations *);
extern void unregister_pernet_gen_device(int id, struct pernet_operations *);

struct ctl_path;
struct ctl_table;
struct ctl_table_header;
extern struct ctl_table_header *register_net_sysctl_table(struct net *net,
 const struct ctl_path *path, struct ctl_table *table);
extern void unregister_net_sysctl_table(struct ctl_table_header *header);
# 45 "linux-2.6.26/include/linux/netdevice.h" 2

struct vlan_group;
struct ethtool_ops;
struct netpoll_info;

struct wireless_dev;
# 121 "linux-2.6.26/include/linux/netdevice.h"
struct net_device_subqueue
{



 unsigned long state;
};






struct net_device_stats
{
 unsigned long rx_packets;
 unsigned long tx_packets;
 unsigned long rx_bytes;
 unsigned long tx_bytes;
 unsigned long rx_errors;
 unsigned long tx_errors;
 unsigned long rx_dropped;
 unsigned long tx_dropped;
 unsigned long multicast;
 unsigned long collisions;


 unsigned long rx_length_errors;
 unsigned long rx_over_errors;
 unsigned long rx_crc_errors;
 unsigned long rx_frame_errors;
 unsigned long rx_fifo_errors;
 unsigned long rx_missed_errors;


 unsigned long tx_aborted_errors;
 unsigned long tx_carrier_errors;
 unsigned long tx_fifo_errors;
 unsigned long tx_heartbeat_errors;
 unsigned long tx_window_errors;


 unsigned long rx_compressed;
 unsigned long tx_compressed;
};



enum {
        IF_PORT_UNKNOWN = 0,
        IF_PORT_10BASE2,
        IF_PORT_10BASET,
        IF_PORT_AUI,
        IF_PORT_100BASET,
        IF_PORT_100BASETX,
        IF_PORT_100BASEFX
};






struct neighbour;
struct neigh_parms;
struct sk_buff;

struct netif_rx_stats
{
 unsigned total;
 unsigned dropped;
 unsigned time_squeeze;
 unsigned cpu_collision;
};

typedef  __typeof__ ( struct netif_rx_stats  )   _GLOBAL_154_T; extern  _GLOBAL_154_T  global_per_cpu__netdev_rx_stat[NUM_STACKS];    

struct dev_addr_list
{
 struct dev_addr_list *next;
 u8 da_addr[32];
 u8 da_addrlen;
 u8 da_synced;
 int da_users;
 int da_gusers;
};
# 218 "linux-2.6.26/include/linux/netdevice.h"
struct hh_cache
{
 struct hh_cache *hh_next;
 atomic_t hh_refcnt;






 __be16 hh_type ;




 u16 hh_len;
 int (*hh_output)(struct sk_buff *skb);
 seqlock_t hh_lock;







 unsigned long hh_data[(((32)+(16 -1))&~(16 - 1)) / sizeof(long)];
};
# 264 "linux-2.6.26/include/linux/netdevice.h"
struct header_ops {
 int (*create) (struct sk_buff *skb, struct net_device *dev,
      unsigned short type, const void *daddr,
      const void *saddr, unsigned len);
 int (*parse)(const struct sk_buff *skb, unsigned char *haddr);
 int (*rebuild)(struct sk_buff *skb);

 int (*cache)(const struct neighbour *neigh, struct hh_cache *hh);
 void (*cache_update)(struct hh_cache *hh,
    const struct net_device *dev,
    const unsigned char *haddr);
};






enum netdev_state_t
{
 __LINK_STATE_XOFF=0,
 __LINK_STATE_START,
 __LINK_STATE_PRESENT,
 __LINK_STATE_SCHED,
 __LINK_STATE_NOCARRIER,
 __LINK_STATE_LINKWATCH_PENDING,
 __LINK_STATE_DORMANT,
 __LINK_STATE_QDISC_RUNNING,
};






struct netdev_boot_setup {
 char name[16];
 struct ifmap map;
};


extern int   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) netdev_boot_setup(char *str);




struct napi_struct {






 struct list_head poll_list;

 unsigned long state;
 int weight;
 int (*poll)(struct napi_struct *, int);






};

enum
{
 NAPI_STATE_SCHED,
 NAPI_STATE_DISABLE,
};

extern void __napi_schedule(struct napi_struct *n);

static inline  __attribute__((always_inline)) int napi_disable_pending(struct napi_struct *n)
{
 return (__builtin_constant_p((NAPI_STATE_DISABLE)) ? constant_test_bit((NAPI_STATE_DISABLE), (&n->state)) : variable_test_bit((NAPI_STATE_DISABLE), (&n->state)));
}
# 352 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) int napi_schedule_prep(struct napi_struct *n)
{
 return !napi_disable_pending(n) &&
  !test_and_set_bit(NAPI_STATE_SCHED, &n->state);
}
# 365 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) void napi_schedule(struct napi_struct *n)
{
 if (napi_schedule_prep(n))
  __napi_schedule(n);
}


static inline  __attribute__((always_inline)) int napi_reschedule(struct napi_struct *napi)
{
 if (napi_schedule_prep(napi)) {
  __napi_schedule(napi);
  return 1;
 }
 return 0;
}







static inline  __attribute__((always_inline)) void __napi_complete(struct napi_struct *n)
{
 do { if (__builtin_expect(!!(!(__builtin_constant_p((NAPI_STATE_SCHED)) ? constant_test_bit((NAPI_STATE_SCHED), (&n->state)) : variable_test_bit((NAPI_STATE_SCHED), (&n->state)))), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
 list_del(&n->poll_list);
 __asm__ __volatile__("": : :"memory");
 clear_bit(NAPI_STATE_SCHED, &n->state);
}

static inline  __attribute__((always_inline)) void napi_complete(struct napi_struct *n)
{
 unsigned long flags;

 (void)(flags);
 __napi_complete(n);
 (void)(flags);
}
# 411 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) void napi_disable(struct napi_struct *n)
{
 set_bit(NAPI_STATE_DISABLE, &n->state);
 while (test_and_set_bit(NAPI_STATE_SCHED, &n->state))
  msleep(1);
 clear_bit(NAPI_STATE_DISABLE, &n->state);
}
# 426 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) void napi_enable(struct napi_struct *n)
{
 do { if (__builtin_expect(!!(!(__builtin_constant_p((NAPI_STATE_SCHED)) ? constant_test_bit((NAPI_STATE_SCHED), (&n->state)) : variable_test_bit((NAPI_STATE_SCHED), (&n->state)))), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
 __asm__ __volatile__("": : :"memory");
 clear_bit(NAPI_STATE_SCHED, &n->state);
}
# 461 "linux-2.6.26/include/linux/netdevice.h"
struct net_device
{






 char name[16];

 struct hlist_node name_hlist;





 unsigned long mem_end;
 unsigned long mem_start;
 unsigned long base_addr;
 unsigned int irq;






 unsigned char if_port;
 unsigned char dma;

 unsigned long state;

 struct list_head dev_list;





 int (*init)(struct net_device *dev);




 unsigned long features;
# 540 "linux-2.6.26/include/linux/netdevice.h"
 struct net_device *next_sched;


 int ifindex;
 int iflink;


 struct net_device_stats* (*get_stats)(struct net_device *dev);
 struct net_device_stats stats;
# 557 "linux-2.6.26/include/linux/netdevice.h"
 const struct ethtool_ops *ethtool_ops;


 const struct header_ops *header_ops;
# 569 "linux-2.6.26/include/linux/netdevice.h"
 unsigned int flags;
 unsigned short gflags;
        unsigned short priv_flags;
 unsigned short padded;

 unsigned char operstate;
 unsigned char link_mode;

 unsigned mtu;
 unsigned short type;
 unsigned short hard_header_len;





 unsigned short needed_headroom;
 unsigned short needed_tailroom;

 struct net_device *master;




 unsigned char perm_addr[32];
 unsigned char addr_len;
 unsigned short dev_id;

 struct dev_addr_list *uc_list;
 int uc_count;
 int uc_promisc;
 struct dev_addr_list *mc_list;
 int mc_count;
 int promiscuity;
 int allmulti;




 void *atalk_ptr;
 void *ip_ptr;
 void *dn_ptr;
 void *ip6_ptr;
 void *ec_ptr;
 void *ax25_ptr;
 struct wireless_dev *ieee80211_ptr;





 unsigned long last_rx;

 unsigned char dev_addr[32];


 unsigned char broadcast[32];


 spinlock_t ingress_lock;
 struct Qdisc *qdisc_ingress;





 spinlock_t queue_lock ;
 struct Qdisc *qdisc;
 struct Qdisc *qdisc_sleeping;
 struct list_head qdisc_list;
 unsigned long tx_queue_len;


 struct sk_buff *gso_skb;





 spinlock_t _xmit_lock ;



 int xmit_lock_owner;
 void *priv;
 int (*hard_start_xmit) (struct sk_buff *skb,
          struct net_device *dev);

 unsigned long trans_start;

 int watchdog_timeo;
 struct timer_list watchdog_timer;





 atomic_t refcnt ;


 struct list_head todo_list;

 struct hlist_node index_hlist;

 struct net_device *link_watch_next;


 enum { NETREG_UNINITIALIZED=0,
        NETREG_REGISTERED,
        NETREG_UNREGISTERING,
        NETREG_UNREGISTERED,
        NETREG_RELEASED,
 } reg_state;


 void (*uninit)(struct net_device *dev);

 void (*destructor)(struct net_device *dev);


 int (*open)(struct net_device *dev);
 int (*stop)(struct net_device *dev);


 void (*change_rx_flags)(struct net_device *dev,
         int flags);

 void (*set_rx_mode)(struct net_device *dev);

 void (*set_multicast_list)(struct net_device *dev);

 int (*set_mac_address)(struct net_device *dev,
         void *addr);

 int (*validate_addr)(struct net_device *dev);

 int (*do_ioctl)(struct net_device *dev,
         struct ifreq *ifr, int cmd);

 int (*set_config)(struct net_device *dev,
           struct ifmap *map);

 int (*change_mtu)(struct net_device *dev, int new_mtu);


 void (*tx_timeout) (struct net_device *dev);

 void (*vlan_rx_register)(struct net_device *dev,
          struct vlan_group *grp);
 void (*vlan_rx_add_vid)(struct net_device *dev,
         unsigned short vid);
 void (*vlan_rx_kill_vid)(struct net_device *dev,
          unsigned short vid);

 int (*neigh_setup)(struct net_device *dev, struct neigh_parms *);
# 737 "linux-2.6.26/include/linux/netdevice.h"
 void *ml_priv;


 struct net_bridge_port *br_port;

 struct macvlan_port *macvlan_port;


 struct device dev;

 struct attribute_group *sysfs_groups[3];


 const struct rtnl_link_ops *rtnl_link_ops;


 unsigned long vlan_features;



 unsigned int gso_max_size;


 unsigned int egress_subqueue_count;
 struct net_device_subqueue egress_subqueue[1];
};
# 771 "linux-2.6.26/include/linux/netdevice.h"
static inline 
__attribute__((always_inline)) struct net *dev_net(const struct net_device *dev)
{



 return &global_init_net[get_stack_id()];

}

static inline 
__attribute__((always_inline)) void dev_net_set(struct net_device *dev, struct net *net)
{




}







static inline  __attribute__((always_inline)) void *netdev_priv(const struct net_device *dev)
{
 return dev->priv;
}
# 816 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) void netif_napi_add(struct net_device *dev,
      struct napi_struct *napi,
      int (*poll)(struct napi_struct *, int),
      int weight)
{
 INIT_LIST_HEAD(&napi->poll_list);
 napi->poll = poll;
 napi->weight = weight;






 set_bit(NAPI_STATE_SCHED, &napi->state);
}

struct packet_type {
 __be16 type;
 struct net_device *dev;
 int (*func) (struct sk_buff *,
      struct net_device *,
      struct packet_type *,
      struct net_device *);
 struct sk_buff *(*gso_segment)(struct sk_buff *skb,
      int features);
 int (*gso_send_check)(struct sk_buff *skb);
 void *af_packet_priv;
 struct list_head list;
};

# 1 "linux-2.6.26/include/linux/interrupt.h" 1
# 10 "linux-2.6.26/include/linux/interrupt.h"
# 1 "linux-2.6.26/include/linux/irqreturn.h" 1
# 19 "linux-2.6.26/include/linux/irqreturn.h"
typedef int irqreturn_t;
# 11 "linux-2.6.26/include/linux/interrupt.h" 2
# 1 "linux-2.6.26/include/linux/hardirq.h" 1




# 1 "linux-2.6.26/include/linux/smp_lock.h" 1
# 6 "linux-2.6.26/include/linux/hardirq.h" 2

# 1 "linux-2.6.26/include/asm/hardirq.h" 1



# 1 "linux-2.6.26/include/asm/hardirq_64.h" 1
# 27 "linux-2.6.26/include/asm/hardirq_64.h"
# 1 "linux-2.6.26/include/linux/irq.h" 1
# 23 "linux-2.6.26/include/linux/irq.h"
# 1 "linux-2.6.26/include/asm/irq.h" 1



# 1 "linux-2.6.26/include/asm/irq_64.h" 1
# 37 "linux-2.6.26/include/asm/irq_64.h"
static inline  __attribute__((always_inline)) int irq_canonicalize(int irq)
{
 return ((irq == 2) ? 9 : irq);
}
# 5 "linux-2.6.26/include/asm/irq.h" 2
# 24 "linux-2.6.26/include/linux/irq.h" 2

# 1 "linux-2.6.26/include/asm/irq_regs.h" 1



# 1 "linux-2.6.26/include/asm/irq_regs_64.h" 1
# 1 "linux-2.6.26/include/asm-generic/irq_regs.h" 1
# 21 "linux-2.6.26/include/asm-generic/irq_regs.h"
typedef  __typeof__ ( struct pt_regs  *  )   _GLOBAL_155_T; extern  _GLOBAL_155_T  global_per_cpu____irq_regs[NUM_STACKS];     

static inline  __attribute__((always_inline)) struct pt_regs *get_irq_regs(void)
{
 return global_per_cpu____irq_regs[get_stack_id()];
}

static inline  __attribute__((always_inline)) struct pt_regs *set_irq_regs(struct pt_regs *new_regs)
{
 struct pt_regs *old_regs, **pp_regs = &global_per_cpu____irq_regs[get_stack_id()];

 old_regs = *pp_regs;
 *pp_regs = new_regs;
 return old_regs;
}
# 1 "linux-2.6.26/include/asm/irq_regs_64.h" 2
# 5 "linux-2.6.26/include/asm/irq_regs.h" 2
# 26 "linux-2.6.26/include/linux/irq.h" 2

struct irq_desc;
typedef void (*irq_flow_handler_t)(unsigned int irq,
         struct irq_desc *desc);
# 74 "linux-2.6.26/include/linux/irq.h"
struct proc_dir_entry;
struct msi_desc;
# 99 "linux-2.6.26/include/linux/irq.h"
struct irq_chip {
 const char *name;
 unsigned int (*startup)(unsigned int irq);
 void (*shutdown)(unsigned int irq);
 void (*enable)(unsigned int irq);
 void (*disable)(unsigned int irq);

 void (*ack)(unsigned int irq);
 void (*mask)(unsigned int irq);
 void (*mask_ack)(unsigned int irq);
 void (*unmask)(unsigned int irq);
 void (*eoi)(unsigned int irq);

 void (*end)(unsigned int irq);
 void (*set_affinity)(unsigned int irq, cpumask_t dest);
 int (*retrigger)(unsigned int irq);
 int (*set_type)(unsigned int irq, unsigned int flow_type);
 int (*set_wake)(unsigned int irq, unsigned int on);
# 126 "linux-2.6.26/include/linux/irq.h"
 const char *typename;
};
# 153 "linux-2.6.26/include/linux/irq.h"
struct irq_desc {
 irq_flow_handler_t handle_irq;
 struct irq_chip *chip;
 struct msi_desc *msi_desc;
 void *handler_data;
 void *chip_data;
 struct irqaction *action;
 unsigned int status;

 unsigned int depth;
 unsigned int wake_depth;
 unsigned int irq_count;
 unsigned int irqs_unhandled;
 unsigned long last_unhandled;
 spinlock_t lock;
# 178 "linux-2.6.26/include/linux/irq.h"
 const char *name;
} ;

extern struct irq_desc irq_desc[(256 + (32 * 1))];





typedef struct irq_chip hw_irq_controller;

typedef struct irq_desc irq_desc_t;




# 1 "linux-2.6.26/include/asm/hw_irq.h" 1



# 1 "linux-2.6.26/include/asm/hw_irq_64.h" 1
# 18 "linux-2.6.26/include/asm/hw_irq_64.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 19 "linux-2.6.26/include/asm/hw_irq_64.h" 2
# 1 "linux-2.6.26/include/asm/irq.h" 1
# 20 "linux-2.6.26/include/asm/hw_irq_64.h" 2
# 1 "linux-2.6.26/include/linux/profile.h" 1
# 9 "linux-2.6.26/include/linux/profile.h"
# 1 "linux-2.6.26/include/asm/errno.h" 1
# 10 "linux-2.6.26/include/linux/profile.h" 2

typedef  int  _GLOBAL_156_T; extern  _GLOBAL_156_T  global_prof_on[NUM_STACKS] __attribute__((__section__(".data.read_mostly")))  ;    






struct proc_dir_entry;
struct pt_regs;
struct notifier_block;


void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) profile_init(void);
void profile_tick(int);




void profile_hits(int, void *ip, unsigned int nr_hits);




static inline  __attribute__((always_inline)) void profile_hit(int type, void *ip)
{



 if (__builtin_expect(!!(global_prof_on[get_stack_id()] == type), 0))
  profile_hits(type, ip, 1);
}







enum profile_type {
 PROFILE_TASK_EXIT,
 PROFILE_MUNMAP
};
# 83 "linux-2.6.26/include/linux/profile.h"
static inline  __attribute__((always_inline)) int task_handoff_register(struct notifier_block * n)
{
 return -38;
}

static inline  __attribute__((always_inline)) int task_handoff_unregister(struct notifier_block * n)
{
 return -38;
}

static inline  __attribute__((always_inline)) int profile_event_register(enum profile_type t, struct notifier_block * n)
{
 return -38;
}

static inline  __attribute__((always_inline)) int profile_event_unregister(enum profile_type t, struct notifier_block * n)
{
 return -38;
}





static inline  __attribute__((always_inline)) int register_timer_hook(int (*hook)(struct pt_regs *))
{
 return -38;
}

static inline  __attribute__((always_inline)) void unregister_timer_hook(int (*hook)(struct pt_regs *))
{
 return;
}
# 21 "linux-2.6.26/include/asm/hw_irq_64.h" 2
# 100 "linux-2.6.26/include/asm/hw_irq_64.h"
void apic_timer_interrupt(void);
void spurious_interrupt(void);
void error_interrupt(void);
void reschedule_interrupt(void);
void call_function_interrupt(void);
void irq_move_cleanup_interrupt(void);
void invalidate_interrupt0(void);
void invalidate_interrupt1(void);
void invalidate_interrupt2(void);
void invalidate_interrupt3(void);
void invalidate_interrupt4(void);
void invalidate_interrupt5(void);
void invalidate_interrupt6(void);
void invalidate_interrupt7(void);
void thermal_interrupt(void);
void threshold_interrupt(void);
void i8254_timer_resume(void);

typedef int vector_irq_t[256];
typedef  __typeof__ ( vector_irq_t )   _GLOBAL_157_T; extern  _GLOBAL_157_T  global_per_cpu__vector_irq[NUM_STACKS];   
extern void __setup_vector_irq(int cpu);
typedef  spinlock_t  _GLOBAL_158_T; extern  _GLOBAL_158_T  global_vector_lock[NUM_STACKS];   
# 130 "linux-2.6.26/include/asm/hw_irq_64.h"
extern void disable_8259A_irq(unsigned int irq);
extern void enable_8259A_irq(unsigned int irq);
extern int i8259A_irq_pending(unsigned int irq);
extern void make_8259A_irq(unsigned int irq);
extern void init_8259A(int aeoi);
extern void send_IPI_self(int vector);
extern void init_VISWS_APIC_irqs(void);
extern void setup_IO_APIC(void);
extern void enable_IO_APIC(void);
extern void disable_IO_APIC(void);
extern void print_IO_APIC(void);
extern int IO_APIC_get_PCI_irq_vector(int bus, int slot, int fn);
extern void send_IPI(int dest, int vector);
extern void setup_ioapic_dest(void);
extern void native_init_IRQ(void);

typedef  unsigned long   _GLOBAL_159_T; extern  _GLOBAL_159_T  global_io_apic_irqs[NUM_STACKS];    

typedef  atomic_t  _GLOBAL_160_T; extern  _GLOBAL_160_T  global_irq_err_count[NUM_STACKS];   
typedef  atomic_t  _GLOBAL_161_T; extern  _GLOBAL_161_T  global_irq_mis_count[NUM_STACKS];   
# 5 "linux-2.6.26/include/asm/hw_irq.h" 2
# 195 "linux-2.6.26/include/linux/irq.h" 2

extern int setup_irq(unsigned int irq, struct irqaction *new);
# 28 "linux-2.6.26/include/asm/hardirq_64.h" 2

typedef struct {
        unsigned int __softirq_pending;
        unsigned long idle_timestamp;
        unsigned int __nmi_count;
        unsigned int apic_timer_irqs;
}  __attribute__((__aligned__((1 << (5))))) irq_cpustat_t;

typedef  __typeof__ ( irq_cpustat_t )   _GLOBAL_162_T; extern  _GLOBAL_162_T  global_per_cpu__irq_stat[NUM_STACKS];   
typedef  irq_cpustat_t  _GLOBAL_163_T; extern  _GLOBAL_163_T  _GLOBAL_0_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_1_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_2_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_3_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_4_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_5_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_6_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_7_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_8_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_9_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_10_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_11_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_12_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_13_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_14_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_15_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_16_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_17_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_18_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_19_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_20_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_21_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_22_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_23_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_24_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_25_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_26_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_27_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_28_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_29_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_30_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_31_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_32_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_33_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_34_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_35_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_36_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_37_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_38_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_39_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_40_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_41_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_42_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_43_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_44_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_45_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_46_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_47_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_48_irq_stat_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_49_irq_stat_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_irq_stat_I) *_GLOBAL_irq_stat_14_A[NUM_STACKS];  




# 1 "linux-2.6.26/include/linux/irq_cpustat.h" 1
# 43 "linux-2.6.26/include/asm/hardirq_64.h" 2
# 5 "linux-2.6.26/include/asm/hardirq.h" 2
# 8 "linux-2.6.26/include/linux/hardirq.h" 2
# 113 "linux-2.6.26/include/linux/hardirq.h"
struct task_struct;


static inline  __attribute__((always_inline)) void account_system_vtime(struct task_struct *tsk)
{
}
# 146 "linux-2.6.26/include/linux/hardirq.h"
extern void irq_enter(void);
# 162 "linux-2.6.26/include/linux/hardirq.h"
extern void irq_exit(void);
# 12 "linux-2.6.26/include/linux/interrupt.h" 2


# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 15 "linux-2.6.26/include/linux/interrupt.h" 2
# 58 "linux-2.6.26/include/linux/interrupt.h"
typedef irqreturn_t (*irq_handler_t)(int, void *);

struct irqaction {
 irq_handler_t handler;
 unsigned long flags;
 cpumask_t mask;
 const char *name;
 void *dev_id;
 struct irqaction *next;
 int irq;
 struct proc_dir_entry *dir;
};

extern irqreturn_t no_action(int cpl, void *dev_id);
extern int request_irq(unsigned int, irq_handler_t handler,
         unsigned long, const char *, void *);
extern void free_irq(unsigned int, void *);

struct device;

extern int devm_request_irq(struct device *dev, unsigned int irq,
       irq_handler_t handler, unsigned long irqflags,
       const char *devname, void *dev_id);
extern void devm_free_irq(struct device *dev, unsigned int irq, void *dev_id);
# 101 "linux-2.6.26/include/linux/interrupt.h"
extern void disable_irq_nosync(unsigned int irq);
extern void disable_irq(unsigned int irq);
extern void enable_irq(unsigned int irq);
# 112 "linux-2.6.26/include/linux/interrupt.h"
static inline  __attribute__((always_inline)) int irq_set_affinity(unsigned int irq, cpumask_t cpumask)
{
 return -22;
}

static inline  __attribute__((always_inline)) int irq_can_set_affinity(unsigned int irq)
{
 return 0;
}
# 205 "linux-2.6.26/include/linux/interrupt.h"
static inline  __attribute__((always_inline)) int enable_irq_wake(unsigned int irq)
{
 return 0;
}

static inline  __attribute__((always_inline)) int disable_irq_wake(unsigned int irq)
{
 return 0;
}
# 225 "linux-2.6.26/include/linux/interrupt.h"
static inline  __attribute__((always_inline)) void cli(void)
{
 ;
}
static inline  __attribute__((always_inline)) void sti(void)
{
 ;
}
static inline  __attribute__((always_inline)) void save_flags(unsigned long *x)
{
 (void)(*x);
}

static inline  __attribute__((always_inline)) void restore_flags(unsigned long x)
{
 (void)(x);
}

static inline  __attribute__((always_inline)) void save_and_cli(unsigned long *x)
{
 (void)(*x);
}
# 266 "linux-2.6.26/include/linux/interrupt.h"
enum
{
 HI_SOFTIRQ=0,
 TIMER_SOFTIRQ,
 NET_TX_SOFTIRQ,
 NET_RX_SOFTIRQ,
 BLOCK_SOFTIRQ,
 TASKLET_SOFTIRQ,
 SCHED_SOFTIRQ,



 RCU_SOFTIRQ,
};





struct softirq_action
{
 void (*action)(struct softirq_action *);
 void *data;
};

 void do_softirq(void);
 void __do_softirq(void);
extern void open_softirq(int nr, void (*action)(struct softirq_action*), void *data);
extern void softirq_init(void);

extern void raise_softirq_irqoff(unsigned int nr);
extern void raise_softirq(unsigned int nr);
# 320 "linux-2.6.26/include/linux/interrupt.h"
struct tasklet_struct
{
 struct tasklet_struct *next;
 unsigned long state;
 atomic_t count;
 void (*func)(unsigned long);
 unsigned long data;
};
# 336 "linux-2.6.26/include/linux/interrupt.h"
enum
{
 TASKLET_STATE_SCHED,
 TASKLET_STATE_RUN
};
# 364 "linux-2.6.26/include/linux/interrupt.h"
extern void __tasklet_schedule(struct tasklet_struct *t);

static inline  __attribute__((always_inline)) void tasklet_schedule(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_schedule(t);
}

extern void __tasklet_hi_schedule(struct tasklet_struct *t);

static inline  __attribute__((always_inline)) void tasklet_hi_schedule(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_hi_schedule(t);
}


static inline  __attribute__((always_inline)) void tasklet_disable_nosync(struct tasklet_struct *t)
{
 atomic_inc(&t->count);
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void tasklet_disable(struct tasklet_struct *t)
{
 tasklet_disable_nosync(t);
 do { } while (0);
 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void tasklet_enable(struct tasklet_struct *t)
{
 __asm__ __volatile__("": : :"memory");
 atomic_dec(&t->count);
}

static inline  __attribute__((always_inline)) void tasklet_hi_enable(struct tasklet_struct *t)
{
 __asm__ __volatile__("": : :"memory");
 atomic_dec(&t->count);
}

extern void tasklet_kill(struct tasklet_struct *t);
extern void tasklet_kill_immediate(struct tasklet_struct *t, unsigned int cpu);
extern void tasklet_init(struct tasklet_struct *t,
    void (*func)(unsigned long), unsigned long data);
# 453 "linux-2.6.26/include/linux/interrupt.h"
extern unsigned long probe_irq_on(void);
extern int probe_irq_off(unsigned long);
extern unsigned int probe_irq_mask(unsigned long);






static inline  __attribute__((always_inline)) void init_irq_proc(void)
{
}


int show_interrupts(struct seq_file *p, void *v);
# 848 "linux-2.6.26/include/linux/netdevice.h" 2


typedef  rwlock_t  _GLOBAL_164_T; extern  _GLOBAL_164_T  global_dev_base_lock[NUM_STACKS];   
# 861 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) struct net_device *next_net_device(struct net_device *dev)
{
 struct list_head *lh;
 struct net *net;

 net = dev_net(dev);
 lh = dev->dev_list.next;
 return lh == &net->dev_base_head ? ((void *)0) : ({ const typeof( ((struct net_device *)0)->dev_list ) *__mptr = (lh); (struct net_device *)( (char *)__mptr - __builtin_offsetof(struct net_device,dev_list) );});
}

static inline  __attribute__((always_inline)) struct net_device *first_net_device(struct net *net)
{
 return list_empty(&net->dev_base_head) ? ((void *)0) :
  ({ const typeof( ((struct net_device *)0)->dev_list ) *__mptr = (net->dev_base_head.next); (struct net_device *)( (char *)__mptr - __builtin_offsetof(struct net_device,dev_list) );});
}

extern int netdev_boot_setup_check(struct net_device *dev);
extern unsigned long netdev_boot_base(const char *prefix, int unit);
extern struct net_device *dev_getbyhwaddr(struct net *net, unsigned short type, char *hwaddr);
extern struct net_device *dev_getfirstbyhwtype(struct net *net, unsigned short type);
extern struct net_device *__dev_getfirstbyhwtype(struct net *net, unsigned short type);
extern void dev_add_pack(struct packet_type *pt);
extern void dev_remove_pack(struct packet_type *pt);
extern void __dev_remove_pack(struct packet_type *pt);

extern struct net_device *dev_get_by_flags(struct net *net, unsigned short flags,
        unsigned short mask);
extern struct net_device *dev_get_by_name(struct net *net, const char *name);
extern struct net_device *__dev_get_by_name(struct net *net, const char *name);
extern int dev_alloc_name(struct net_device *dev, const char *name);
extern int dev_open(struct net_device *dev);
extern int dev_close(struct net_device *dev);
extern int dev_queue_xmit(struct sk_buff *skb);
extern int register_netdevice(struct net_device *dev);
extern void unregister_netdevice(struct net_device *dev);
extern void free_netdev(struct net_device *dev);
extern void synchronize_net(void);
extern int register_netdevice_notifier(struct notifier_block *nb);
extern int unregister_netdevice_notifier(struct notifier_block *nb);
extern int call_netdevice_notifiers(unsigned long val, struct net_device *dev);
extern struct net_device *dev_get_by_index(struct net *net, int ifindex);
extern struct net_device *__dev_get_by_index(struct net *net, int ifindex);
extern int dev_restart(struct net_device *dev);




static inline  __attribute__((always_inline)) int dev_hard_header(struct sk_buff *skb, struct net_device *dev,
      unsigned short type,
      const void *daddr, const void *saddr,
      unsigned len)
{
 if (!dev->header_ops || !dev->header_ops->create)
  return 0;

 return dev->header_ops->create(skb, dev, type, daddr, saddr, len);
}

static inline  __attribute__((always_inline)) int dev_parse_header(const struct sk_buff *skb,
       unsigned char *haddr)
{
 const struct net_device *dev = skb->dev;

 if (!dev->header_ops || !dev->header_ops->parse)
  return 0;
 return dev->header_ops->parse(skb, haddr);
}

typedef int gifconf_func_t(struct net_device * dev, char * bufptr, int len);
extern int register_gifconf(unsigned int family, gifconf_func_t * gifconf);
static inline  __attribute__((always_inline)) int unregister_gifconf(unsigned int family)
{
 return register_gifconf(family, ((void *)0));
}





struct softnet_data
{
 struct net_device *output_queue;
 struct sk_buff_head input_pkt_queue;
 struct list_head poll_list;
 struct sk_buff *completion_queue;

 struct napi_struct backlog;



};

typedef  __typeof__ ( struct softnet_data  )   _GLOBAL_165_T; extern  _GLOBAL_165_T  global_per_cpu__softnet_data[NUM_STACKS];    



extern void __netif_schedule(struct net_device *dev);

static inline  __attribute__((always_inline)) void netif_schedule(struct net_device *dev)
{
 if (!(__builtin_constant_p((__LINK_STATE_XOFF)) ? constant_test_bit((__LINK_STATE_XOFF), (&dev->state)) : variable_test_bit((__LINK_STATE_XOFF), (&dev->state))))
  __netif_schedule(dev);
}







static inline  __attribute__((always_inline)) void netif_start_queue(struct net_device *dev)
{
 clear_bit(__LINK_STATE_XOFF, &dev->state);
}
# 983 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) void netif_wake_queue(struct net_device *dev)
{






 if (test_and_clear_bit(__LINK_STATE_XOFF, &dev->state))
  __netif_schedule(dev);
}
# 1002 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) void netif_stop_queue(struct net_device *dev)
{
 set_bit(__LINK_STATE_XOFF, &dev->state);
}







static inline  __attribute__((always_inline)) int netif_queue_stopped(const struct net_device *dev)
{
 return (__builtin_constant_p((__LINK_STATE_XOFF)) ? constant_test_bit((__LINK_STATE_XOFF), (&dev->state)) : variable_test_bit((__LINK_STATE_XOFF), (&dev->state)));
}







static inline  __attribute__((always_inline)) int netif_running(const struct net_device *dev)
{
 return (__builtin_constant_p((__LINK_STATE_START)) ? constant_test_bit((__LINK_STATE_START), (&dev->state)) : variable_test_bit((__LINK_STATE_START), (&dev->state)));
}
# 1043 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) void netif_start_subqueue(struct net_device *dev, u16 queue_index)
{



}
# 1057 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) void netif_stop_subqueue(struct net_device *dev, u16 queue_index)
{







}
# 1075 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) int __netif_subqueue_stopped(const struct net_device *dev,
      u16 queue_index)
{




 return 0;

}

static inline  __attribute__((always_inline)) int netif_subqueue_stopped(const struct net_device *dev,
      struct sk_buff *skb)
{
 return __netif_subqueue_stopped(dev, skb_get_queue_mapping(skb));
}
# 1099 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) void netif_wake_subqueue(struct net_device *dev, u16 queue_index)
{
# 1110 "linux-2.6.26/include/linux/netdevice.h"
}
# 1119 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) int netif_is_multiqueue(const struct net_device *dev)
{



 return 0;

}





extern void dev_kfree_skb_irq(struct sk_buff *skb);





extern void dev_kfree_skb_any(struct sk_buff *skb);


extern int netif_rx(struct sk_buff *skb);
extern int netif_rx_ni(struct sk_buff *skb);

extern int netif_receive_skb(struct sk_buff *skb);
extern int dev_valid_name(const char *name);
extern int dev_ioctl(struct net *net, unsigned int cmd, void *);
extern int dev_ethtool(struct net *net, struct ifreq *);
extern unsigned dev_get_flags(const struct net_device *);
extern int dev_change_flags(struct net_device *, unsigned);
extern int dev_change_name(struct net_device *, char *);
extern int dev_change_net_namespace(struct net_device *,
       struct net *, const char *);
extern int dev_set_mtu(struct net_device *, int);
extern int dev_set_mac_address(struct net_device *,
         struct sockaddr *);
extern int dev_hard_start_xmit(struct sk_buff *skb,
         struct net_device *dev);

typedef  int  _GLOBAL_166_T; extern  _GLOBAL_166_T  global_netdev_budget[NUM_STACKS];   


extern void netdev_run_todo(void);







static inline  __attribute__((always_inline)) void dev_put(struct net_device *dev)
{
 atomic_dec(&dev->refcnt);
}







static inline  __attribute__((always_inline)) void dev_hold(struct net_device *dev)
{
 atomic_inc(&dev->refcnt);
}
# 1195 "linux-2.6.26/include/linux/netdevice.h"
extern void linkwatch_fire_event(struct net_device *dev);







static inline  __attribute__((always_inline)) int netif_carrier_ok(const struct net_device *dev)
{
 return !(__builtin_constant_p((__LINK_STATE_NOCARRIER)) ? constant_test_bit((__LINK_STATE_NOCARRIER), (&dev->state)) : variable_test_bit((__LINK_STATE_NOCARRIER), (&dev->state)));
}

extern void __netdev_watchdog_up(struct net_device *dev);

extern void netif_carrier_on(struct net_device *dev);

extern void netif_carrier_off(struct net_device *dev);
# 1227 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) void netif_dormant_on(struct net_device *dev)
{
 if (!test_and_set_bit(__LINK_STATE_DORMANT, &dev->state))
  linkwatch_fire_event(dev);
}







static inline  __attribute__((always_inline)) void netif_dormant_off(struct net_device *dev)
{
 if (test_and_clear_bit(__LINK_STATE_DORMANT, &dev->state))
  linkwatch_fire_event(dev);
}







static inline  __attribute__((always_inline)) int netif_dormant(const struct net_device *dev)
{
 return (__builtin_constant_p((__LINK_STATE_DORMANT)) ? constant_test_bit((__LINK_STATE_DORMANT), (&dev->state)) : variable_test_bit((__LINK_STATE_DORMANT), (&dev->state)));
}
# 1263 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) int netif_oper_up(const struct net_device *dev) {
 return (dev->operstate == IF_OPER_UP ||
  dev->operstate == IF_OPER_UNKNOWN );
}







static inline  __attribute__((always_inline)) int netif_device_present(struct net_device *dev)
{
 return (__builtin_constant_p((__LINK_STATE_PRESENT)) ? constant_test_bit((__LINK_STATE_PRESENT), (&dev->state)) : variable_test_bit((__LINK_STATE_PRESENT), (&dev->state)));
}

extern void netif_device_detach(struct net_device *dev);

extern void netif_device_attach(struct net_device *dev);






enum {
 NETIF_MSG_DRV = 0x0001,
 NETIF_MSG_PROBE = 0x0002,
 NETIF_MSG_LINK = 0x0004,
 NETIF_MSG_TIMER = 0x0008,
 NETIF_MSG_IFDOWN = 0x0010,
 NETIF_MSG_IFUP = 0x0020,
 NETIF_MSG_RX_ERR = 0x0040,
 NETIF_MSG_TX_ERR = 0x0080,
 NETIF_MSG_TX_QUEUED = 0x0100,
 NETIF_MSG_INTR = 0x0200,
 NETIF_MSG_TX_DONE = 0x0400,
 NETIF_MSG_RX_STATUS = 0x0800,
 NETIF_MSG_PKTDATA = 0x1000,
 NETIF_MSG_HW = 0x2000,
 NETIF_MSG_WOL = 0x4000,
};
# 1322 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) u32 netif_msg_init(int debug_value, int default_msg_enable_bits)
{

 if (debug_value < 0 || debug_value >= (sizeof(u32) * 8))
  return default_msg_enable_bits;
 if (debug_value == 0)
  return 0;

 return (1 << debug_value) - 1;
}


static inline  __attribute__((always_inline)) int netif_rx_schedule_prep(struct net_device *dev,
      struct napi_struct *napi)
{
 return napi_schedule_prep(napi);
}




static inline  __attribute__((always_inline)) void __netif_rx_schedule(struct net_device *dev,
           struct napi_struct *napi)
{
 __napi_schedule(napi);
}



static inline  __attribute__((always_inline)) void netif_rx_schedule(struct net_device *dev,
         struct napi_struct *napi)
{
 if (netif_rx_schedule_prep(dev, napi))
  __netif_rx_schedule(dev, napi);
}


static inline  __attribute__((always_inline)) int netif_rx_reschedule(struct net_device *dev,
          struct napi_struct *napi)
{
 if (napi_schedule_prep(napi)) {
  __netif_rx_schedule(dev, napi);
  return 1;
 }
 return 0;
}




static inline  __attribute__((always_inline)) void __netif_rx_complete(struct net_device *dev,
           struct napi_struct *napi)
{
 __napi_complete(napi);
}






static inline  __attribute__((always_inline)) void netif_rx_complete(struct net_device *dev,
         struct napi_struct *napi)
{
 unsigned long flags;

 (void)(flags);
 __netif_rx_complete(dev, napi);
 (void)(flags);
}
# 1400 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) void __netif_tx_lock(struct net_device *dev, int cpu)
{
 do { do { } while (0); (void)0; (void)(&dev->_xmit_lock); } while (0);
 dev->xmit_lock_owner = cpu;
}

static inline  __attribute__((always_inline)) void netif_tx_lock(struct net_device *dev)
{
 __netif_tx_lock(dev, 0);
}

static inline  __attribute__((always_inline)) void netif_tx_lock_bh(struct net_device *dev)
{
 do { local_bh_disable(); do { do { } while (0); (void)0; (void)(&dev->_xmit_lock); } while (0); } while (0);
 dev->xmit_lock_owner = 0;
}

static inline  __attribute__((always_inline)) int netif_tx_trylock(struct net_device *dev)
{
 int ok = (({ do { do { } while (0); (void)0; (void)(&dev->_xmit_lock); } while (0); 1; }));
 if (__builtin_expect(!!(ok), 1))
  dev->xmit_lock_owner = 0;
 return ok;
}

static inline  __attribute__((always_inline)) void netif_tx_unlock(struct net_device *dev)
{
 dev->xmit_lock_owner = -1;
 do { do { } while (0); (void)0; (void)(&dev->_xmit_lock); } while (0);
}

static inline  __attribute__((always_inline)) void netif_tx_unlock_bh(struct net_device *dev)
{
 dev->xmit_lock_owner = -1;
 do { do { } while (0); local_bh_enable(); (void)0; (void)(&dev->_xmit_lock); } while (0);
}
# 1449 "linux-2.6.26/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) void netif_tx_disable(struct net_device *dev)
{
 netif_tx_lock_bh(dev);
 netif_stop_queue(dev);
 netif_tx_unlock_bh(dev);
}



extern void ether_setup(struct net_device *dev);


extern struct net_device *alloc_netdev_mq(int sizeof_priv, const char *name,
           void (*setup)(struct net_device *),
           unsigned int queue_count);


extern int register_netdev(struct net_device *dev);
extern void unregister_netdev(struct net_device *dev);

extern void dev_set_rx_mode(struct net_device *dev);
extern void __dev_set_rx_mode(struct net_device *dev);
extern int dev_unicast_delete(struct net_device *dev, void *addr, int alen);
extern int dev_unicast_add(struct net_device *dev, void *addr, int alen);
extern int dev_unicast_sync(struct net_device *to, struct net_device *from);
extern void dev_unicast_unsync(struct net_device *to, struct net_device *from);
extern int dev_mc_delete(struct net_device *dev, void *addr, int alen, int all);
extern int dev_mc_add(struct net_device *dev, void *addr, int alen, int newonly);
extern int dev_mc_sync(struct net_device *to, struct net_device *from);
extern void dev_mc_unsync(struct net_device *to, struct net_device *from);
extern int __dev_addr_delete(struct dev_addr_list **list, int *count, void *addr, int alen, int all);
extern int __dev_addr_add(struct dev_addr_list **list, int *count, void *addr, int alen, int newonly);
extern int __dev_addr_sync(struct dev_addr_list **to, int *to_count, struct dev_addr_list **from, int *from_count);
extern void __dev_addr_unsync(struct dev_addr_list **to, int *to_count, struct dev_addr_list **from, int *from_count);
extern void dev_set_promiscuity(struct net_device *dev, int inc);
extern void dev_set_allmulti(struct net_device *dev, int inc);
extern void netdev_state_change(struct net_device *dev);
extern void netdev_features_change(struct net_device *dev);

extern void dev_load(struct net *net, const char *name);
extern void dev_mcast_init(void);
typedef  int  _GLOBAL_167_T; extern  _GLOBAL_167_T  global_netdev_max_backlog[NUM_STACKS];   
typedef  int  _GLOBAL_168_T; extern  _GLOBAL_168_T  global_weight_p[NUM_STACKS];   
extern int netdev_set_master(struct net_device *dev, struct net_device *master);
extern int skb_checksum_help(struct sk_buff *skb);
extern struct sk_buff *skb_gso_segment(struct sk_buff *skb, int features);

extern void netdev_rx_csum_fault(struct net_device *dev);






extern void net_enable_timestamp(void);
extern void net_disable_timestamp(void);







extern void linkwatch_run_queue(void);

extern int netdev_compute_features(unsigned long all, unsigned long one);

static inline  __attribute__((always_inline)) int net_gso_ok(int features, int gso_type)
{
 int feature = gso_type << 16;
 return (features & feature) == feature;
}

static inline  __attribute__((always_inline)) int skb_gso_ok(struct sk_buff *skb, int features)
{
 return net_gso_ok(features, ((struct skb_shared_info *)(skb_end_pointer(skb)))->gso_type);
}

static inline  __attribute__((always_inline)) int netif_needs_gso(struct net_device *dev, struct sk_buff *skb)
{
 return skb_is_gso(skb) &&
        (!skb_gso_ok(skb, dev->features) ||
  __builtin_expect(!!(skb->ip_summed != 3), 0));
}

static inline  __attribute__((always_inline)) void netif_set_gso_max_size(struct net_device *dev,
       unsigned int size)
{
 dev->gso_max_size = size;
}





static inline  __attribute__((always_inline)) int skb_bond_should_drop(struct sk_buff *skb)
{
 struct net_device *dev = skb->dev;
 struct net_device *master = dev->master;

 if (master &&
     (dev->priv_flags & 0x4)) {
  if ((dev->priv_flags & 0x40) &&
      skb->protocol == (( __be16)((__u16)( (((__u16)((0x0806)) & (__u16)0x00ffU) << 8) | (((__u16)((0x0806)) & (__u16)0xff00U) >> 8) ))))
   return 0;

  if (master->priv_flags & 0x10) {
   if (skb->pkt_type != 1 &&
       skb->pkt_type != 2)
    return 0;
  }
  if (master->priv_flags & 0x8 &&
      skb->protocol == (( __be16)((__u16)( (((__u16)((0x8809)) & (__u16)0x00ffU) << 8) | (((__u16)((0x8809)) & (__u16)0xff00U) >> 8) ))))
   return 0;

  return 1;
 }
 return 0;
}
# 50 "linux-2.6.26/include/net/sock.h" 2


# 1 "linux-2.6.26/include/linux/security.h" 1
# 25 "linux-2.6.26/include/linux/security.h"
# 1 "linux-2.6.26/include/linux/fs.h" 1
# 9 "linux-2.6.26/include/linux/fs.h"
# 1 "linux-2.6.26/include/linux/limits.h" 1
# 10 "linux-2.6.26/include/linux/fs.h" 2
# 24 "linux-2.6.26/include/linux/fs.h"
typedef  int  _GLOBAL_169_T; extern  _GLOBAL_169_T  global_sysctl_nr_open[NUM_STACKS];   
# 36 "linux-2.6.26/include/linux/fs.h"
struct files_stat_struct {
 int nr_files;
 int nr_free_files;
 int max_files;
};
typedef  struct files_stat_struct   _GLOBAL_170_T; extern  _GLOBAL_170_T  global_files_stat[NUM_STACKS];    
extern int get_max_files(void);

struct inodes_stat_t {
 int nr_inodes;
 int nr_unused;
 int dummy[5];
};
typedef  struct inodes_stat_t   _GLOBAL_171_T; extern  _GLOBAL_171_T  global_inodes_stat[NUM_STACKS];    

typedef  int  _GLOBAL_172_T; extern  _GLOBAL_172_T  global_leases_enable[NUM_STACKS]; extern  _GLOBAL_172_T  global_lease_break_time[NUM_STACKS];    
# 278 "linux-2.6.26/include/linux/fs.h"
# 1 "linux-2.6.26/include/linux/kdev_t.h" 1
# 21 "linux-2.6.26/include/linux/kdev_t.h"
static inline  __attribute__((always_inline)) int old_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < 256 && ((unsigned int) ((dev) & ((1U << 20) - 1))) < 256;
}

static inline  __attribute__((always_inline)) u16 old_encode_dev(dev_t dev)
{
 return (((unsigned int) ((dev) >> 20)) << 8) | ((unsigned int) ((dev) & ((1U << 20) - 1)));
}

static inline  __attribute__((always_inline)) dev_t old_decode_dev(u16 val)
{
 return ((((val >> 8) & 255) << 20) | (val & 255));
}

static inline  __attribute__((always_inline)) int new_valid_dev(dev_t dev)
{
 return 1;
}

static inline  __attribute__((always_inline)) u32 new_encode_dev(dev_t dev)
{
 unsigned major = ((unsigned int) ((dev) >> 20));
 unsigned minor = ((unsigned int) ((dev) & ((1U << 20) - 1)));
 return (minor & 0xff) | (major << 8) | ((minor & ~0xff) << 12);
}

static inline  __attribute__((always_inline)) dev_t new_decode_dev(u32 dev)
{
 unsigned major = (dev & 0xfff00) >> 8;
 unsigned minor = (dev & 0xff) | ((dev >> 12) & 0xfff00);
 return (((major) << 20) | (minor));
}

static inline  __attribute__((always_inline)) int huge_valid_dev(dev_t dev)
{
 return 1;
}

static inline  __attribute__((always_inline)) u64 huge_encode_dev(dev_t dev)
{
 return new_encode_dev(dev);
}

static inline  __attribute__((always_inline)) dev_t huge_decode_dev(u64 dev)
{
 return new_decode_dev(dev);
}

static inline  __attribute__((always_inline)) int sysv_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < (1<<14) && ((unsigned int) ((dev) & ((1U << 20) - 1))) < (1<<18);
}

static inline  __attribute__((always_inline)) u32 sysv_encode_dev(dev_t dev)
{
 return ((unsigned int) ((dev) & ((1U << 20) - 1))) | (((unsigned int) ((dev) >> 20)) << 18);
}

static inline  __attribute__((always_inline)) unsigned sysv_major(u32 dev)
{
 return (dev >> 18) & 0x3fff;
}

static inline  __attribute__((always_inline)) unsigned sysv_minor(u32 dev)
{
 return dev & 0x3ffff;
}
# 279 "linux-2.6.26/include/linux/fs.h" 2
# 1 "linux-2.6.26/include/linux/dcache.h" 1



# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 5 "linux-2.6.26/include/linux/dcache.h" 2





struct nameidata;
struct path;
struct vfsmount;
# 32 "linux-2.6.26/include/linux/dcache.h"
struct qstr {
 unsigned int hash;
 unsigned int len;
 const unsigned char *name;
};

struct dentry_stat_t {
 int nr_dentry;
 int nr_unused;
 int age_limit;
 int want_pages;
 int dummy[2];
};
typedef  struct dentry_stat_t   _GLOBAL_173_T; extern  _GLOBAL_173_T  global_dentry_stat[NUM_STACKS];    






static inline  __attribute__((always_inline)) unsigned long
partial_name_hash(unsigned long c, unsigned long prevhash)
{
 return (prevhash + (c << 4) + (c >> 4)) * 11;
}





static inline  __attribute__((always_inline)) unsigned long end_name_hash(unsigned long hash)
{
 return (unsigned int) hash;
}


static inline  __attribute__((always_inline)) unsigned int
full_name_hash(const unsigned char *name, unsigned int len)
{
 unsigned long hash = 0;
 while (len--)
  hash = partial_name_hash(*name++, hash);
 return end_name_hash(hash);
}

struct dcookie_struct;



struct dentry {
 atomic_t d_count;
 unsigned int d_flags;
 spinlock_t d_lock;
 struct inode *d_inode;





 struct hlist_node d_hash;
 struct dentry *d_parent;
 struct qstr d_name;

 struct list_head d_lru;



 union {
  struct list_head d_child;
   struct rcu_head d_rcu;
 } d_u;
 struct list_head d_subdirs;
 struct list_head d_alias;
 unsigned long d_time;
 struct dentry_operations *d_op;
 struct super_block *d_sb;
 void *d_fsdata;



 int d_mounted;
 unsigned char d_iname[36];
};







enum dentry_d_lock_class
{
 DENTRY_D_LOCK_NORMAL,
 DENTRY_D_LOCK_NESTED
};

struct dentry_operations {
 int (*d_revalidate)(struct dentry *, struct nameidata *);
 int (*d_hash) (struct dentry *, struct qstr *);
 int (*d_compare) (struct dentry *, struct qstr *, struct qstr *);
 int (*d_delete)(struct dentry *);
 void (*d_release)(struct dentry *);
 void (*d_iput)(struct dentry *, struct inode *);
 char *(*d_dname)(struct dentry *, char *, int);
};
# 179 "linux-2.6.26/include/linux/dcache.h"
typedef  spinlock_t  _GLOBAL_174_T; extern  _GLOBAL_174_T  global_dcache_lock[NUM_STACKS];   
typedef  seqlock_t  _GLOBAL_175_T; extern  _GLOBAL_175_T  global_rename_lock[NUM_STACKS];   
# 198 "linux-2.6.26/include/linux/dcache.h"
static inline  __attribute__((always_inline)) void __d_drop(struct dentry *dentry)
{
 if (!(dentry->d_flags & 0x0010)) {
  dentry->d_flags |= 0x0010;
  hlist_del_rcu(&dentry->d_hash);
 }
}

static inline  __attribute__((always_inline)) void d_drop(struct dentry *dentry)
{
 do { do { } while (0); (void)0; (void)(&global_dcache_lock[get_stack_id()]); } while (0);
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
  __d_drop(dentry);
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 do { do { } while (0); (void)0; (void)(&global_dcache_lock[get_stack_id()]); } while (0);
}

static inline  __attribute__((always_inline)) int dname_external(struct dentry *dentry)
{
 return dentry->d_name.name != dentry->d_iname;
}




extern void d_instantiate(struct dentry *, struct inode *);
extern struct dentry * d_instantiate_unique(struct dentry *, struct inode *);
extern struct dentry * d_materialise_unique(struct dentry *, struct inode *);
extern void d_delete(struct dentry *);


extern struct dentry * d_alloc(struct dentry *, const struct qstr *);
extern struct dentry * d_alloc_anon(struct inode *);
extern struct dentry * d_splice_alias(struct inode *, struct dentry *);
extern void shrink_dcache_sb(struct super_block *);
extern void shrink_dcache_parent(struct dentry *);
extern void shrink_dcache_for_umount(struct super_block *);
extern int d_invalidate(struct dentry *);


extern struct dentry * d_alloc_root(struct inode *);


extern void d_genocide(struct dentry *);

extern struct dentry *d_find_alias(struct inode *);
extern void d_prune_aliases(struct inode *);


extern int have_submounts(struct dentry *);




extern void d_rehash(struct dentry *);
# 263 "linux-2.6.26/include/linux/dcache.h"
static inline  __attribute__((always_inline)) void d_add(struct dentry *entry, struct inode *inode)
{
 d_instantiate(entry, inode);
 d_rehash(entry);
}
# 277 "linux-2.6.26/include/linux/dcache.h"
static inline  __attribute__((always_inline)) struct dentry *d_add_unique(struct dentry *entry, struct inode *inode)
{
 struct dentry *res;

 res = d_instantiate_unique(entry, inode);
 d_rehash(res != ((void *)0) ? res : entry);
 return res;
}


extern void d_move(struct dentry *, struct dentry *);


extern struct dentry * d_lookup(struct dentry *, struct qstr *);
extern struct dentry * __d_lookup(struct dentry *, struct qstr *);
extern struct dentry * d_hash_and_lookup(struct dentry *, struct qstr *);


extern int d_validate(struct dentry *, struct dentry *);




extern char *dynamic_dname(struct dentry *, char *, int, const char *, ...);

extern char *__d_path(const struct path *path, struct path *root, char *, int);
extern char *d_path(const struct path *, char *, int);
extern char *dentry_path(struct dentry *, char *, int);
# 321 "linux-2.6.26/include/linux/dcache.h"
static inline  __attribute__((always_inline)) struct dentry *dget(struct dentry *dentry)
{
 if (dentry) {
  do { if (__builtin_expect(!!(!((&dentry->d_count)->counter)), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
  atomic_inc(&dentry->d_count);
 }
 return dentry;
}

extern struct dentry * dget_locked(struct dentry *);
# 339 "linux-2.6.26/include/linux/dcache.h"
static inline  __attribute__((always_inline)) int d_unhashed(struct dentry *dentry)
{
 return (dentry->d_flags & 0x0010);
}

static inline  __attribute__((always_inline)) struct dentry *dget_parent(struct dentry *dentry)
{
 struct dentry *ret;

 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 ret = dget(dentry->d_parent);
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 return ret;
}

extern void dput(struct dentry *);

static inline  __attribute__((always_inline)) int d_mountpoint(struct dentry *dentry)
{
 return dentry->d_mounted;
}

extern struct vfsmount *lookup_mnt(struct vfsmount *, struct dentry *);
extern struct dentry *lookup_create(struct nameidata *nd, int is_dir);

typedef  int  _GLOBAL_176_T; extern  _GLOBAL_176_T  global_sysctl_vfs_cache_pressure[NUM_STACKS];   
# 280 "linux-2.6.26/include/linux/fs.h" 2
# 1 "linux-2.6.26/include/linux/namei.h" 1







struct vfsmount;

struct open_intent {
 int flags;
 int create_mode;
 struct file *file;
};

enum { MAX_NESTED_LINKS = 8 };

struct nameidata {
 struct path path;
 struct qstr last;
 unsigned int flags;
 int last_type;
 unsigned depth;
 char *saved_names[MAX_NESTED_LINKS + 1];


 union {
  struct open_intent open;
 } intent;
};




enum {LAST_NORM, LAST_ROOT, LAST_DOT, LAST_DOTDOT, LAST_BIND};
# 60 "linux-2.6.26/include/linux/namei.h"
extern int __user_walk(const char *, unsigned, struct nameidata *);
extern int __user_walk_fd(int dfd, const char *, unsigned, struct nameidata *);




extern int path_lookup(const char *, unsigned, struct nameidata *);
extern int vfs_path_lookup(struct dentry *, struct vfsmount *,
      const char *, unsigned int, struct nameidata *);

extern int __user_path_lookup_open(const char *, unsigned lookup_flags, struct nameidata *nd, int open_flags);
extern int path_lookup_open(int dfd, const char *name, unsigned lookup_flags, struct nameidata *, int open_flags);
extern struct file *lookup_instantiate_filp(struct nameidata *nd, struct dentry *dentry,
  int (*open)(struct inode *, struct file *));
extern struct file *nameidata_to_filp(struct nameidata *nd, int flags);
extern void release_open_intent(struct nameidata *);

extern struct dentry *lookup_one_len(const char *, struct dentry *, int);
extern struct dentry *lookup_one_noperm(const char *, struct dentry *);

extern int follow_down(struct vfsmount **, struct dentry **);
extern int follow_up(struct vfsmount **, struct dentry **);

extern struct dentry *lock_rename(struct dentry *, struct dentry *);
extern void unlock_rename(struct dentry *, struct dentry *);

static inline  __attribute__((always_inline)) void nd_set_link(struct nameidata *nd, char *path)
{
 nd->saved_names[nd->depth] = path;
}

static inline  __attribute__((always_inline)) char *nd_get_link(struct nameidata *nd)
{
 return nd->saved_names[nd->depth];
}
# 281 "linux-2.6.26/include/linux/fs.h" 2




# 1 "linux-2.6.26/include/linux/radix-tree.h" 1
# 41 "linux-2.6.26/include/linux/radix-tree.h"
static inline  __attribute__((always_inline)) void *radix_tree_ptr_to_indirect(void *ptr)
{
 return (void *)((unsigned long)ptr | 1);
}

static inline  __attribute__((always_inline)) void *radix_tree_indirect_to_ptr(void *ptr)
{
 return (void *)((unsigned long)ptr & ~1);
}

static inline  __attribute__((always_inline)) int radix_tree_is_indirect_ptr(void *ptr)
{
 return (int)((unsigned long)ptr & 1);
}






struct radix_tree_root {
 unsigned int height;
 gfp_t gfp_mask;
 struct radix_tree_node *rnode;
};
# 134 "linux-2.6.26/include/linux/radix-tree.h"
static inline  __attribute__((always_inline)) void *radix_tree_deref_slot(void **pslot)
{
 void *ret = *pslot;
 if (__builtin_expect(!!(radix_tree_is_indirect_ptr(ret)), 0))
  ret = ((void *)-1UL);
 return ret;
}
# 149 "linux-2.6.26/include/linux/radix-tree.h"
static inline  __attribute__((always_inline)) void radix_tree_replace_slot(void **pslot, void *item)
{
 do { if (__builtin_expect(!!(radix_tree_is_indirect_ptr(item)), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
 ({ if (!__builtin_constant_p(item) || ((item) != ((void *)0))) __asm__ __volatile__("": : :"memory"); (*pslot) = (item); });
}

int radix_tree_insert(struct radix_tree_root *, unsigned long, void *);
void *radix_tree_lookup(struct radix_tree_root *, unsigned long);
void **radix_tree_lookup_slot(struct radix_tree_root *, unsigned long);
void *radix_tree_delete(struct radix_tree_root *, unsigned long);
unsigned int
radix_tree_gang_lookup(struct radix_tree_root *root, void **results,
   unsigned long first_index, unsigned int max_items);
unsigned long radix_tree_next_hole(struct radix_tree_root *root,
    unsigned long index, unsigned long max_scan);
int radix_tree_preload(gfp_t gfp_mask);
void radix_tree_init(void);
void *radix_tree_tag_set(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
void *radix_tree_tag_clear(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
int radix_tree_tag_get(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
unsigned int
radix_tree_gang_lookup_tag(struct radix_tree_root *root, void **results,
  unsigned long first_index, unsigned int max_items,
  unsigned int tag);
int radix_tree_tagged(struct radix_tree_root *root, unsigned int tag);

static inline  __attribute__((always_inline)) void radix_tree_preload_end(void)
{
 do { } while (0);
}
# 286 "linux-2.6.26/include/linux/fs.h" 2







# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 294 "linux-2.6.26/include/linux/fs.h" 2


struct export_operations;
struct hd_geometry;
struct iovec;
struct nameidata;
struct kiocb;
struct pipe_inode_info;
struct poll_table_struct;
struct kstatfs;
struct vm_area_struct;
struct vfsmount;

extern void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) inode_init(void);
extern void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) inode_init_early(void);
extern void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) files_init(unsigned long);

struct buffer_head;
typedef int (get_block_t)(struct inode *inode, sector_t iblock,
   struct buffer_head *bh_result, int create);
typedef void (dio_iodone_t)(struct kiocb *iocb, loff_t offset,
   ssize_t bytes, void *private);
# 347 "linux-2.6.26/include/linux/fs.h"
struct iattr {
 unsigned int ia_valid;
 umode_t ia_mode;
 uid_t ia_uid;
 gid_t ia_gid;
 loff_t ia_size;
 struct timespec ia_atime;
 struct timespec ia_mtime;
 struct timespec ia_ctime;






 struct file *ia_file;
};




# 1 "linux-2.6.26/include/linux/quota.h" 1
# 44 "linux-2.6.26/include/linux/quota.h"
typedef __kernel_uid32_t qid_t;
typedef __u64 qsize_t;
# 103 "linux-2.6.26/include/linux/quota.h"
struct if_dqblk {
 __u64 dqb_bhardlimit;
 __u64 dqb_bsoftlimit;
 __u64 dqb_curspace;
 __u64 dqb_ihardlimit;
 __u64 dqb_isoftlimit;
 __u64 dqb_curinodes;
 __u64 dqb_btime;
 __u64 dqb_itime;
 __u32 dqb_valid;
};
# 124 "linux-2.6.26/include/linux/quota.h"
struct if_dqinfo {
 __u64 dqi_bgrace;
 __u64 dqi_igrace;
 __u32 dqi_flags;
 __u32 dqi_valid;
};
# 142 "linux-2.6.26/include/linux/quota.h"
enum {
 QUOTA_NL_C_UNSPEC,
 QUOTA_NL_C_WARNING,
 __QUOTA_NL_C_MAX,
};


enum {
 QUOTA_NL_A_UNSPEC,
 QUOTA_NL_A_QTYPE,
 QUOTA_NL_A_EXCESS_ID,
 QUOTA_NL_A_WARNING,
 QUOTA_NL_A_DEV_MAJOR,
 QUOTA_NL_A_DEV_MINOR,
 QUOTA_NL_A_CAUSED_ID,
 __QUOTA_NL_A_MAX,
};
# 169 "linux-2.6.26/include/linux/quota.h"
# 1 "linux-2.6.26/include/linux/dqblk_xfs.h" 1
# 50 "linux-2.6.26/include/linux/dqblk_xfs.h"
typedef struct fs_disk_quota {
 __s8 d_version;
 __s8 d_flags;
 __u16 d_fieldmask;
 __u32 d_id;
 __u64 d_blk_hardlimit;
 __u64 d_blk_softlimit;
 __u64 d_ino_hardlimit;
 __u64 d_ino_softlimit;
 __u64 d_bcount;
 __u64 d_icount;
 __s32 d_itimer;

 __s32 d_btimer;
 __u16 d_iwarns;
 __u16 d_bwarns;
 __s32 d_padding2;
 __u64 d_rtb_hardlimit;
 __u64 d_rtb_softlimit;
 __u64 d_rtbcount;
 __s32 d_rtbtimer;
 __u16 d_rtbwarns;
 __s16 d_padding3;
 char d_padding4[8];
} fs_disk_quota_t;
# 137 "linux-2.6.26/include/linux/dqblk_xfs.h"
typedef struct fs_qfilestat {
 __u64 qfs_ino;
 __u64 qfs_nblks;
 __u32 qfs_nextents;
} fs_qfilestat_t;

typedef struct fs_quota_stat {
 __s8 qs_version;
 __u16 qs_flags;
 __s8 qs_pad;
 fs_qfilestat_t qs_uquota;
 fs_qfilestat_t qs_gquota;
 __u32 qs_incoredqs;
 __s32 qs_btimelimit;
 __s32 qs_itimelimit;
 __s32 qs_rtbtimelimit;
 __u16 qs_bwarnlimit;
 __u16 qs_iwarnlimit;
} fs_quota_stat_t;
# 170 "linux-2.6.26/include/linux/quota.h" 2
# 1 "linux-2.6.26/include/linux/dqblk_v1.h" 1
# 21 "linux-2.6.26/include/linux/dqblk_v1.h"
struct v1_mem_dqinfo {
};
# 171 "linux-2.6.26/include/linux/quota.h" 2
# 1 "linux-2.6.26/include/linux/dqblk_v2.h" 1
# 20 "linux-2.6.26/include/linux/dqblk_v2.h"
struct v2_mem_dqinfo {
 unsigned int dqi_blocks;
 unsigned int dqi_free_blk;
 unsigned int dqi_free_entry;
};
# 172 "linux-2.6.26/include/linux/quota.h" 2

# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 174 "linux-2.6.26/include/linux/quota.h" 2

typedef  spinlock_t  _GLOBAL_177_T; extern  _GLOBAL_177_T  global_dq_data_lock[NUM_STACKS];   
# 187 "linux-2.6.26/include/linux/quota.h"
struct mem_dqblk {
 __u32 dqb_bhardlimit;
 __u32 dqb_bsoftlimit;
 qsize_t dqb_curspace;
 __u32 dqb_ihardlimit;
 __u32 dqb_isoftlimit;
 __u32 dqb_curinodes;
 time_t dqb_btime;
 time_t dqb_itime;
};




struct quota_format_type;

struct mem_dqinfo {
 struct quota_format_type *dqi_format;
 int dqi_fmt_id;

 struct list_head dqi_dirty_list;
 unsigned long dqi_flags;
 unsigned int dqi_bgrace;
 unsigned int dqi_igrace;
 qsize_t dqi_maxblimit;
 qsize_t dqi_maxilimit;
 union {
  struct v1_mem_dqinfo v1_i;
  struct v2_mem_dqinfo v2_i;
 } u;
};

struct super_block;





extern void mark_info_dirty(struct super_block *sb, int type);







struct dqstats {
 int lookups;
 int drops;
 int reads;
 int writes;
 int cache_hits;
 int allocated_dquots;
 int free_dquots;
 int syncs;
};

typedef  struct dqstats   _GLOBAL_178_T; extern  _GLOBAL_178_T  global_dqstats[NUM_STACKS];    
# 253 "linux-2.6.26/include/linux/quota.h"
struct dquot {
 struct hlist_node dq_hash;
 struct list_head dq_inuse;
 struct list_head dq_free;
 struct list_head dq_dirty;
 struct mutex dq_lock;
 atomic_t dq_count;
 wait_queue_head_t dq_wait_unused;
 struct super_block *dq_sb;
 unsigned int dq_id;
 loff_t dq_off;
 unsigned long dq_flags;
 short dq_type;
 struct mem_dqblk dq_dqb;
};







struct quota_format_ops {
 int (*check_quota_file)(struct super_block *sb, int type);
 int (*read_file_info)(struct super_block *sb, int type);
 int (*write_file_info)(struct super_block *sb, int type);
 int (*free_file_info)(struct super_block *sb, int type);
 int (*read_dqblk)(struct dquot *dquot);
 int (*commit_dqblk)(struct dquot *dquot);
 int (*release_dqblk)(struct dquot *dquot);
};


struct dquot_operations {
 int (*initialize) (struct inode *, int);
 int (*drop) (struct inode *);
 int (*alloc_space) (struct inode *, qsize_t, int);
 int (*alloc_inode) (const struct inode *, unsigned long);
 int (*free_space) (struct inode *, qsize_t);
 int (*free_inode) (const struct inode *, unsigned long);
 int (*transfer) (struct inode *, struct iattr *);
 int (*write_dquot) (struct dquot *);
 int (*acquire_dquot) (struct dquot *);
 int (*release_dquot) (struct dquot *);
 int (*mark_dirty) (struct dquot *);
 int (*write_info) (struct super_block *, int);
};


struct quotactl_ops {
 int (*quota_on)(struct super_block *, int, int, char *, int);
 int (*quota_off)(struct super_block *, int, int);
 int (*quota_sync)(struct super_block *, int);
 int (*get_info)(struct super_block *, int, struct if_dqinfo *);
 int (*set_info)(struct super_block *, int, struct if_dqinfo *);
 int (*get_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*set_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*get_xstate)(struct super_block *, struct fs_quota_stat *);
 int (*set_xstate)(struct super_block *, unsigned int, int);
 int (*get_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
 int (*set_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
};

struct quota_format_type {
 int qf_fmt_id;
 struct quota_format_ops *qf_ops;
 struct module *qf_owner;
 struct quota_format_type *qf_next;
};
# 330 "linux-2.6.26/include/linux/quota.h"
struct quota_info {
 unsigned int flags;
 struct mutex dqio_mutex;
 struct mutex dqonoff_mutex;
 struct rw_semaphore dqptr_sem;
 struct inode *files[2];
 struct mem_dqinfo info[2];
 struct quota_format_ops *ops[2];
};
# 353 "linux-2.6.26/include/linux/quota.h"
int register_quota_format(struct quota_format_type *fmt);
void unregister_quota_format(struct quota_format_type *fmt);

struct quota_module_name {
 int qm_fmt_id;
 char *qm_mod_name;
};
# 369 "linux-2.6.26/include/linux/fs.h" 2
# 396 "linux-2.6.26/include/linux/fs.h"
enum positive_aop_returns {
 AOP_WRITEPAGE_ACTIVATE = 0x80000,
 AOP_TRUNCATED_PAGE = 0x80001,
};







struct page;
struct address_space;
struct writeback_control;

struct iov_iter {
 const struct iovec *iov;
 unsigned long nr_segs;
 size_t iov_offset;
 size_t count;
};

size_t iov_iter_copy_from_user_atomic(struct page *page,
  struct iov_iter *i, unsigned long offset, size_t bytes);
size_t iov_iter_copy_from_user(struct page *page,
  struct iov_iter *i, unsigned long offset, size_t bytes);
void iov_iter_advance(struct iov_iter *i, size_t bytes);
int iov_iter_fault_in_readable(struct iov_iter *i, size_t bytes);
size_t iov_iter_single_seg_count(struct iov_iter *i);

static inline  __attribute__((always_inline)) void iov_iter_init(struct iov_iter *i,
   const struct iovec *iov, unsigned long nr_segs,
   size_t count, size_t written)
{
 i->iov = iov;
 i->nr_segs = nr_segs;
 i->iov_offset = 0;
 i->count = count + written;

 iov_iter_advance(i, written);
}

static inline  __attribute__((always_inline)) size_t iov_iter_count(struct iov_iter *i)
{
 return i->count;
}


struct address_space_operations {
 int (*writepage)(struct page *page, struct writeback_control *wbc);
 int (*readpage)(struct file *, struct page *);
 void (*sync_page)(struct page *);


 int (*writepages)(struct address_space *, struct writeback_control *);


 int (*set_page_dirty)(struct page *page);

 int (*readpages)(struct file *filp, struct address_space *mapping,
   struct list_head *pages, unsigned nr_pages);





 int (*prepare_write)(struct file *, struct page *, unsigned, unsigned);
 int (*commit_write)(struct file *, struct page *, unsigned, unsigned);

 int (*write_begin)(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned flags,
    struct page **pagep, void **fsdata);
 int (*write_end)(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned copied,
    struct page *page, void *fsdata);


 sector_t (*bmap)(struct address_space *, sector_t);
 void (*invalidatepage) (struct page *, unsigned long);
 int (*releasepage) (struct page *, gfp_t);
 ssize_t (*direct_IO)(int, struct kiocb *, const struct iovec *iov,
   loff_t offset, unsigned long nr_segs);
 int (*get_xip_mem)(struct address_space *, unsigned long, int,
      void **, unsigned long *);

 int (*migratepage) (struct address_space *,
   struct page *, struct page *);
 int (*launder_page) (struct page *);
};





int pagecache_write_begin(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned flags,
    struct page **pagep, void **fsdata);

int pagecache_write_end(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned copied,
    struct page *page, void *fsdata);

struct backing_dev_info;
struct address_space {
 struct inode *host;
 struct radix_tree_root page_tree;
 rwlock_t tree_lock;
 unsigned int i_mmap_writable;
 struct prio_tree_root i_mmap;
 struct list_head i_mmap_nonlinear;
 spinlock_t i_mmap_lock;
 unsigned int truncate_count;
 unsigned long nrpages;
 unsigned long writeback_index;
 const struct address_space_operations *a_ops;
 unsigned long flags;
 struct backing_dev_info *backing_dev_info;
 spinlock_t private_lock;
 struct list_head private_list;
 struct address_space *assoc_mapping;
} __attribute__((aligned(sizeof(long)))) ;






struct block_device {
 dev_t bd_dev;
 struct inode * bd_inode;
 int bd_openers;
 struct mutex bd_mutex;
 struct semaphore bd_mount_sem;
 struct list_head bd_inodes;
 void * bd_holder;
 int bd_holders;



 struct block_device * bd_contains;
 unsigned bd_block_size;
 struct hd_struct * bd_part;

 unsigned bd_part_count;
 int bd_invalidated;
 struct gendisk * bd_disk;
 struct list_head bd_list;
 struct backing_dev_info *bd_inode_backing_dev_info;






 unsigned long bd_private;
};
# 560 "linux-2.6.26/include/linux/fs.h"
int mapping_tagged(struct address_space *mapping, int tag);




static inline  __attribute__((always_inline)) int mapping_mapped(struct address_space *mapping)
{
 return !prio_tree_empty(&mapping->i_mmap) ||
  !list_empty(&mapping->i_mmap_nonlinear);
}







static inline  __attribute__((always_inline)) int mapping_writably_mapped(struct address_space *mapping)
{
 return mapping->i_mmap_writable != 0;
}
# 593 "linux-2.6.26/include/linux/fs.h"
struct inode {
 struct hlist_node i_hash;
 struct list_head i_list;
 struct list_head i_sb_list;
 struct list_head i_dentry;
 unsigned long i_ino;
 atomic_t i_count;
 unsigned int i_nlink;
 uid_t i_uid;
 gid_t i_gid;
 dev_t i_rdev;
 u64 i_version;
 loff_t i_size;



 struct timespec i_atime;
 struct timespec i_mtime;
 struct timespec i_ctime;
 unsigned int i_blkbits;
 blkcnt_t i_blocks;
 unsigned short i_bytes;
 umode_t i_mode;
 spinlock_t i_lock;
 struct mutex i_mutex;
 struct rw_semaphore i_alloc_sem;
 const struct inode_operations *i_op;
 const struct file_operations *i_fop;
 struct super_block *i_sb;
 struct file_lock *i_flock;
 struct address_space *i_mapping;
 struct address_space i_data;



 struct list_head i_devices;
 union {
  struct pipe_inode_info *i_pipe;
  struct block_device *i_bdev;
  struct cdev *i_cdev;
 };
 int i_cindex;

 __u32 i_generation;
# 648 "linux-2.6.26/include/linux/fs.h"
 unsigned long i_state;
 unsigned long dirtied_when;

 unsigned int i_flags;

 atomic_t i_writecount;



 void *i_private;
};
# 671 "linux-2.6.26/include/linux/fs.h"
enum inode_i_mutex_lock_class
{
 I_MUTEX_NORMAL,
 I_MUTEX_PARENT,
 I_MUTEX_CHILD,
 I_MUTEX_XATTR,
 I_MUTEX_QUOTA
};

extern void inode_double_lock(struct inode *inode1, struct inode *inode2);
extern void inode_double_unlock(struct inode *inode1, struct inode *inode2);
# 693 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) loff_t i_size_read(const struct inode *inode)
{
# 712 "linux-2.6.26/include/linux/fs.h"
 return inode->i_size;

}






static inline  __attribute__((always_inline)) void i_size_write(struct inode *inode, loff_t i_size)
{
# 732 "linux-2.6.26/include/linux/fs.h"
 inode->i_size = i_size;

}

static inline  __attribute__((always_inline)) unsigned iminor(const struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) & ((1U << 20) - 1)));
}

static inline  __attribute__((always_inline)) unsigned imajor(const struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) >> 20));
}

extern struct block_device *I_BDEV(struct inode *inode);

struct fown_struct {
 rwlock_t lock;
 struct pid *pid;
 enum pid_type pid_type;
 uid_t uid, euid;
 int signum;
};




struct file_ra_state {
 unsigned long start;
 unsigned int size;
 unsigned int async_size;


 unsigned int ra_pages;
 int mmap_miss;
 loff_t prev_pos;
};




static inline  __attribute__((always_inline)) int ra_has_index(struct file_ra_state *ra, unsigned long index)
{
 return (index >= ra->start &&
  index < ra->start + ra->size);
}




struct file {




 union {
  struct list_head fu_list;
  struct rcu_head fu_rcuhead;
 } f_u;
 struct path f_path;


 const struct file_operations *f_op;
 atomic_t f_count;
 unsigned int f_flags;
 mode_t f_mode;
 loff_t f_pos;
 struct fown_struct f_owner;
 unsigned int f_uid, f_gid;
 struct file_ra_state f_ra;

 u64 f_version;




 void *private_data;






 struct address_space *f_mapping;



};
typedef  spinlock_t  _GLOBAL_179_T; extern  _GLOBAL_179_T  global_files_lock[NUM_STACKS];   
# 860 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) void file_take_write(struct file *filp) {}
static inline  __attribute__((always_inline)) void file_release_write(struct file *filp) {}
static inline  __attribute__((always_inline)) void file_reset_write(struct file *filp) {}
static inline  __attribute__((always_inline)) void file_check_state(struct file *filp) {}
static inline  __attribute__((always_inline)) int file_check_writeable(struct file *filp)
{
 return 0;
}
# 895 "linux-2.6.26/include/linux/fs.h"
typedef struct files_struct *fl_owner_t;

struct file_lock_operations {
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
};

struct lock_manager_operations {
 int (*fl_compare_owner)(struct file_lock *, struct file_lock *);
 void (*fl_notify)(struct file_lock *);
 int (*fl_grant)(struct file_lock *, struct file_lock *, int);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
 void (*fl_break)(struct file_lock *);
 int (*fl_mylease)(struct file_lock *, struct file_lock *);
 int (*fl_change)(struct file_lock **, int);
};


# 1 "linux-2.6.26/include/linux/nfs_fs_i.h" 1





# 1 "linux-2.6.26/include/linux/nfs.h" 1
# 39 "linux-2.6.26/include/linux/nfs.h"
 enum nfs_stat {
 NFS_OK = 0,
 NFSERR_PERM = 1,
 NFSERR_NOENT = 2,
 NFSERR_IO = 5,
 NFSERR_NXIO = 6,
 NFSERR_EAGAIN = 11,
 NFSERR_ACCES = 13,
 NFSERR_EXIST = 17,
 NFSERR_XDEV = 18,
 NFSERR_NODEV = 19,
 NFSERR_NOTDIR = 20,
 NFSERR_ISDIR = 21,
 NFSERR_INVAL = 22,
 NFSERR_FBIG = 27,
 NFSERR_NOSPC = 28,
 NFSERR_ROFS = 30,
 NFSERR_MLINK = 31,
 NFSERR_OPNOTSUPP = 45,
 NFSERR_NAMETOOLONG = 63,
 NFSERR_NOTEMPTY = 66,
 NFSERR_DQUOT = 69,
 NFSERR_STALE = 70,
 NFSERR_REMOTE = 71,
 NFSERR_WFLUSH = 99,
 NFSERR_BADHANDLE = 10001,
 NFSERR_NOT_SYNC = 10002,
 NFSERR_BAD_COOKIE = 10003,
 NFSERR_NOTSUPP = 10004,
 NFSERR_TOOSMALL = 10005,
 NFSERR_SERVERFAULT = 10006,
 NFSERR_BADTYPE = 10007,
 NFSERR_JUKEBOX = 10008,
 NFSERR_SAME = 10009,
 NFSERR_DENIED = 10010,
 NFSERR_EXPIRED = 10011,
 NFSERR_LOCKED = 10012,
 NFSERR_GRACE = 10013,
 NFSERR_FHEXPIRED = 10014,
 NFSERR_SHARE_DENIED = 10015,
 NFSERR_WRONGSEC = 10016,
 NFSERR_CLID_INUSE = 10017,
 NFSERR_RESOURCE = 10018,
 NFSERR_MOVED = 10019,
 NFSERR_NOFILEHANDLE = 10020,
 NFSERR_MINOR_VERS_MISMATCH = 10021,
 NFSERR_STALE_CLIENTID = 10022,
 NFSERR_STALE_STATEID = 10023,
 NFSERR_OLD_STATEID = 10024,
 NFSERR_BAD_STATEID = 10025,
 NFSERR_BAD_SEQID = 10026,
 NFSERR_NOT_SAME = 10027,
 NFSERR_LOCK_RANGE = 10028,
 NFSERR_SYMLINK = 10029,
 NFSERR_RESTOREFH = 10030,
 NFSERR_LEASE_MOVED = 10031,
 NFSERR_ATTRNOTSUPP = 10032,
 NFSERR_NO_GRACE = 10033,
 NFSERR_RECLAIM_BAD = 10034,
 NFSERR_RECLAIM_CONFLICT = 10035,
 NFSERR_BAD_XDR = 10036,
 NFSERR_LOCKS_HELD = 10037,
 NFSERR_OPENMODE = 10038,
 NFSERR_BADOWNER = 10039,
 NFSERR_BADCHAR = 10040,
 NFSERR_BADNAME = 10041,
 NFSERR_BAD_RANGE = 10042,
 NFSERR_LOCK_NOTSUPP = 10043,
 NFSERR_OP_ILLEGAL = 10044,
 NFSERR_DEADLOCK = 10045,
 NFSERR_FILE_OPEN = 10046,
 NFSERR_ADMIN_REVOKED = 10047,
 NFSERR_CB_PATH_DOWN = 10048,
 NFSERR_REPLAY_ME = 10049
};



enum nfs_ftype {
 NFNON = 0,
 NFREG = 1,
 NFDIR = 2,
 NFBLK = 3,
 NFCHR = 4,
 NFLNK = 5,
 NFSOCK = 6,
 NFBAD = 7,
 NFFIFO = 8
};


# 1 "linux-2.6.26/include/linux/sunrpc/msg_prot.h" 1
# 18 "linux-2.6.26/include/linux/sunrpc/msg_prot.h"
typedef u32 rpc_authflavor_t;

enum rpc_auth_flavors {
 RPC_AUTH_NULL = 0,
 RPC_AUTH_UNIX = 1,
 RPC_AUTH_SHORT = 2,
 RPC_AUTH_DES = 3,
 RPC_AUTH_KRB = 4,
 RPC_AUTH_GSS = 6,
 RPC_AUTH_MAXFLAVOR = 8,

 RPC_AUTH_GSS_KRB5 = 390003,
 RPC_AUTH_GSS_KRB5I = 390004,
 RPC_AUTH_GSS_KRB5P = 390005,
 RPC_AUTH_GSS_LKEY = 390006,
 RPC_AUTH_GSS_LKEYI = 390007,
 RPC_AUTH_GSS_LKEYP = 390008,
 RPC_AUTH_GSS_SPKM = 390009,
 RPC_AUTH_GSS_SPKMI = 390010,
 RPC_AUTH_GSS_SPKMP = 390011,
};




enum rpc_msg_type {
 RPC_CALL = 0,
 RPC_REPLY = 1
};

enum rpc_reply_stat {
 RPC_MSG_ACCEPTED = 0,
 RPC_MSG_DENIED = 1
};

enum rpc_accept_stat {
 RPC_SUCCESS = 0,
 RPC_PROG_UNAVAIL = 1,
 RPC_PROG_MISMATCH = 2,
 RPC_PROC_UNAVAIL = 3,
 RPC_GARBAGE_ARGS = 4,
 RPC_SYSTEM_ERR = 5,

 RPC_DROP_REPLY = 60000,
};

enum rpc_reject_stat {
 RPC_MISMATCH = 0,
 RPC_AUTH_ERROR = 1
};

enum rpc_auth_stat {
 RPC_AUTH_OK = 0,
 RPC_AUTH_BADCRED = 1,
 RPC_AUTH_REJECTEDCRED = 2,
 RPC_AUTH_BADVERF = 3,
 RPC_AUTH_REJECTEDVERF = 4,
 RPC_AUTH_TOOWEAK = 5,

 RPCSEC_GSS_CREDPROBLEM = 13,
 RPCSEC_GSS_CTXPROBLEM = 14
};
# 102 "linux-2.6.26/include/linux/sunrpc/msg_prot.h"
typedef __be32 rpc_fraghdr;
# 131 "linux-2.6.26/include/linux/nfs.h" 2






struct nfs_fh {
 unsigned short size;
 unsigned char data[128];
};





static inline  __attribute__((always_inline)) int nfs_compare_fh(const struct nfs_fh *a, const struct nfs_fh *b)
{
 return a->size != b->size || memcmp(a->data, b->data, a->size) != 0;
}

static inline  __attribute__((always_inline)) void nfs_copy_fh(struct nfs_fh *target, const struct nfs_fh *source)
{
 target->size = source->size;
 memcpy(target->data, source->data, source->size);
}
# 165 "linux-2.6.26/include/linux/nfs.h"
enum nfs3_stable_how {
 NFS_UNSTABLE = 0,
 NFS_DATA_SYNC = 1,
 NFS_FILE_SYNC = 2
};
# 7 "linux-2.6.26/include/linux/nfs_fs_i.h" 2

struct nlm_lockowner;




struct nfs_lock_info {
 u32 state;
 struct nlm_lockowner *owner;
 struct list_head list;
};

struct nfs4_lock_state;
struct nfs4_lock_info {
 struct nfs4_lock_state *owner;
};
# 915 "linux-2.6.26/include/linux/fs.h" 2

struct file_lock {
 struct file_lock *fl_next;
 struct list_head fl_link;
 struct list_head fl_block;
 fl_owner_t fl_owner;
 unsigned int fl_pid;
 struct pid *fl_nspid;
 wait_queue_head_t fl_wait;
 struct file *fl_file;
 unsigned char fl_flags;
 unsigned char fl_type;
 loff_t fl_start;
 loff_t fl_end;

 struct fasync_struct * fl_fasync;
 unsigned long fl_break_time;

 struct file_lock_operations *fl_ops;
 struct lock_manager_operations *fl_lmops;
 union {
  struct nfs_lock_info nfs_fl;
  struct nfs4_lock_info nfs4_fl;
  struct {
   struct list_head link;
   int state;
  } afs;
 } fl_u;
};
# 952 "linux-2.6.26/include/linux/fs.h"
# 1 "linux-2.6.26/include/linux/fcntl.h" 1



# 1 "linux-2.6.26/include/asm/fcntl.h" 1
# 1 "linux-2.6.26/include/asm-generic/fcntl.h" 1
# 117 "linux-2.6.26/include/asm-generic/fcntl.h"
struct flock {
 short l_type;
 short l_whence;
 off_t l_start;
 off_t l_len;
 pid_t l_pid;

};
# 140 "linux-2.6.26/include/asm-generic/fcntl.h"
struct flock64 {
 short l_type;
 short l_whence;
 loff_t l_start;
 loff_t l_len;
 pid_t l_pid;

};
# 1 "linux-2.6.26/include/asm/fcntl.h" 2
# 5 "linux-2.6.26/include/linux/fcntl.h" 2
# 953 "linux-2.6.26/include/linux/fs.h" 2

extern int fcntl_getlk(struct file *, struct flock *);
extern int fcntl_setlk(unsigned int, struct file *, unsigned int,
   struct flock *);







extern void send_sigio(struct fown_struct *fown, int fd, int band);
extern int fcntl_setlease(unsigned int fd, struct file *filp, long arg);
extern int fcntl_getlease(struct file *filp);


extern int do_sync_mapping_range(struct address_space *mapping, loff_t offset,
   loff_t endbyte, unsigned int flags);


extern void locks_init_lock(struct file_lock *);
extern void locks_copy_lock(struct file_lock *, struct file_lock *);
extern void __locks_copy_lock(struct file_lock *, const struct file_lock *);
extern void locks_remove_posix(struct file *, fl_owner_t);
extern void locks_remove_flock(struct file *);
extern void posix_test_lock(struct file *, struct file_lock *);
extern int posix_lock_file(struct file *, struct file_lock *, struct file_lock *);
extern int posix_lock_file_wait(struct file *, struct file_lock *);
extern int posix_unblock_lock(struct file *, struct file_lock *);
extern int vfs_test_lock(struct file *, struct file_lock *);
extern int vfs_lock_file(struct file *, unsigned int, struct file_lock *, struct file_lock *);
extern int vfs_cancel_lock(struct file *filp, struct file_lock *fl);
extern int flock_lock_file_wait(struct file *filp, struct file_lock *fl);
extern int __break_lease(struct inode *inode, unsigned int flags);
extern void lease_get_mtime(struct inode *, struct timespec *time);
extern int generic_setlease(struct file *, long, struct file_lock **);
extern int vfs_setlease(struct file *, long, struct file_lock **);
extern int lease_modify(struct file_lock **, int);
extern int lock_may_read(struct inode *, loff_t start, unsigned long count);
extern int lock_may_write(struct inode *, loff_t start, unsigned long count);
extern struct seq_operations locks_seq_operations;

struct fasync_struct {
 int magic;
 int fa_fd;
 struct fasync_struct *fa_next;
 struct file *fa_file;
};




extern int fasync_helper(int, struct file *, int, struct fasync_struct **);

extern void kill_fasync(struct fasync_struct **, int, int);

extern void __kill_fasync(struct fasync_struct *, int, int);

extern int __f_setown(struct file *filp, struct pid *, enum pid_type, int force);
extern int f_setown(struct file *filp, unsigned long arg, int force);
extern void f_delown(struct file *filp);
extern pid_t f_getown(struct file *filp);
extern int send_sigurg(struct fown_struct *fown);
# 1025 "linux-2.6.26/include/linux/fs.h"
typedef  struct list_head   _GLOBAL_180_T; extern  _GLOBAL_180_T  global_super_blocks[NUM_STACKS];    
typedef  spinlock_t  _GLOBAL_181_T; extern  _GLOBAL_181_T  global_sb_lock[NUM_STACKS];   


struct super_block {
 struct list_head s_list;
 dev_t s_dev;
 unsigned long s_blocksize;
 unsigned char s_blocksize_bits;
 unsigned char s_dirt;
 unsigned long long s_maxbytes;
 struct file_system_type *s_type;
 const struct super_operations *s_op;
 struct dquot_operations *dq_op;
  struct quotactl_ops *s_qcop;
 const struct export_operations *s_export_op;
 unsigned long s_flags;
 unsigned long s_magic;
 struct dentry *s_root;
 struct rw_semaphore s_umount;
 struct mutex s_lock;
 int s_count;
 int s_syncing;
 int s_need_sync_fs;
 atomic_t s_active;



 struct xattr_handler **s_xattr;

 struct list_head s_inodes;
 struct list_head s_dirty;
 struct list_head s_io;
 struct list_head s_more_io;
 struct hlist_head s_anon;
 struct list_head s_files;

 struct block_device *s_bdev;
 struct mtd_info *s_mtd;
 struct list_head s_instances;
 struct quota_info s_dquot;

 int s_frozen;
 wait_queue_head_t s_wait_unfrozen;

 char s_id[32];

 void *s_fs_info;





 struct mutex s_vfs_rename_mutex;



 u32 s_time_gran;





 char *s_subtype;





 char *s_options;
};

extern struct timespec current_fs_time(struct super_block *sb);




enum {
 SB_UNFROZEN = 0,
 SB_FREEZE_WRITE = 1,
 SB_FREEZE_TRANS = 2,
};
# 1119 "linux-2.6.26/include/linux/fs.h"
extern void lock_super(struct super_block *);
extern void unlock_super(struct super_block *);




extern int vfs_permission(struct nameidata *, int);
extern int vfs_create(struct inode *, struct dentry *, int, struct nameidata *);
extern int vfs_mkdir(struct inode *, struct dentry *, int);
extern int vfs_mknod(struct inode *, struct dentry *, int, dev_t);
extern int vfs_symlink(struct inode *, struct dentry *, const char *, int);
extern int vfs_link(struct dentry *, struct inode *, struct dentry *);
extern int vfs_rmdir(struct inode *, struct dentry *);
extern int vfs_unlink(struct inode *, struct dentry *);
extern int vfs_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);




extern void dentry_unhash(struct dentry *dentry);




extern int file_permission(struct file *, int);
# 1164 "linux-2.6.26/include/linux/fs.h"
int generic_osync_inode(struct inode *, struct address_space *, int);







typedef int (*filldir_t)(void *, const char *, int, loff_t, u64, unsigned);

struct block_device_operations {
 int (*open) (struct inode *, struct file *);
 int (*release) (struct inode *, struct file *);
 int (*ioctl) (struct inode *, struct file *, unsigned, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned, unsigned long);
 int (*direct_access) (struct block_device *, sector_t,
      void **, unsigned long *);
 int (*media_changed) (struct gendisk *);
 int (*revalidate_disk) (struct gendisk *);
 int (*getgeo)(struct block_device *, struct hd_geometry *);
 struct module *owner;
};
# 1197 "linux-2.6.26/include/linux/fs.h"
typedef struct {
 size_t written;
 size_t count;
 union {
  char * buf;
  void *data;
 } arg;
 int error;
} read_descriptor_t;

typedef int (*read_actor_t)(read_descriptor_t *, struct page *, unsigned long, unsigned long);
# 1220 "linux-2.6.26/include/linux/fs.h"
struct file_operations {
 struct module *owner;
 loff_t (*llseek) (struct file *, loff_t, int);
 ssize_t (*read) (struct file *, char *, size_t, loff_t *);
 ssize_t (*write) (struct file *, const char *, size_t, loff_t *);
 ssize_t (*aio_read) (struct kiocb *, const struct iovec *, unsigned long, loff_t);
 ssize_t (*aio_write) (struct kiocb *, const struct iovec *, unsigned long, loff_t);
 int (*readdir) (struct file *, void *, filldir_t);
 unsigned int (*poll) (struct file *, struct poll_table_struct *);
 int (*ioctl) (struct inode *, struct file *, unsigned int, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned int, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned int, unsigned long);
 int (*mmap) (struct file *, struct vm_area_struct *);
 int (*open) (struct inode *, struct file *);
 int (*flush) (struct file *, fl_owner_t id);
 int (*release) (struct inode *, struct file *);
 int (*fsync) (struct file *, struct dentry *, int datasync);
 int (*aio_fsync) (struct kiocb *, int datasync);
 int (*fasync) (int, struct file *, int);
 int (*lock) (struct file *, int, struct file_lock *);
 ssize_t (*sendpage) (struct file *, struct page *, int, size_t, loff_t *, int);
 unsigned long (*get_unmapped_area)(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
 int (*check_flags)(int);
 int (*dir_notify)(struct file *filp, unsigned long arg);
 int (*flock) (struct file *, int, struct file_lock *);
 ssize_t (*splice_write)(struct pipe_inode_info *, struct file *, loff_t *, size_t, unsigned int);
 ssize_t (*splice_read)(struct file *, loff_t *, struct pipe_inode_info *, size_t, unsigned int);
 int (*setlease)(struct file *, long, struct file_lock **);
};

struct inode_operations {
 int (*create) (struct inode *,struct dentry *,int, struct nameidata *);
 struct dentry * (*lookup) (struct inode *,struct dentry *, struct nameidata *);
 int (*link) (struct dentry *,struct inode *,struct dentry *);
 int (*unlink) (struct inode *,struct dentry *);
 int (*symlink) (struct inode *,struct dentry *,const char *);
 int (*mkdir) (struct inode *,struct dentry *,int);
 int (*rmdir) (struct inode *,struct dentry *);
 int (*mknod) (struct inode *,struct dentry *,int,dev_t);
 int (*rename) (struct inode *, struct dentry *,
   struct inode *, struct dentry *);
 int (*readlink) (struct dentry *, char *,int);
 void * (*follow_link) (struct dentry *, struct nameidata *);
 void (*put_link) (struct dentry *, struct nameidata *, void *);
 void (*truncate) (struct inode *);
 int (*permission) (struct inode *, int, struct nameidata *);
 int (*setattr) (struct dentry *, struct iattr *);
 int (*getattr) (struct vfsmount *mnt, struct dentry *, struct kstat *);
 int (*setxattr) (struct dentry *, const char *,const void *,size_t,int);
 ssize_t (*getxattr) (struct dentry *, const char *, void *, size_t);
 ssize_t (*listxattr) (struct dentry *, char *, size_t);
 int (*removexattr) (struct dentry *, const char *);
 void (*truncate_range)(struct inode *, loff_t, loff_t);
 long (*fallocate)(struct inode *inode, int mode, loff_t offset,
     loff_t len);
};

struct seq_file;

ssize_t rw_copy_check_uvector(int type, const struct iovec * uvector,
    unsigned long nr_segs, unsigned long fast_segs,
    struct iovec *fast_pointer,
    struct iovec **ret_pointer);

extern ssize_t vfs_read(struct file *, char *, size_t, loff_t *);
extern ssize_t vfs_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t vfs_readv(struct file *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t vfs_writev(struct file *, const struct iovec *,
  unsigned long, loff_t *);

struct super_operations {
    struct inode *(*alloc_inode)(struct super_block *sb);
 void (*destroy_inode)(struct inode *);

    void (*dirty_inode) (struct inode *);
 int (*write_inode) (struct inode *, int);
 void (*drop_inode) (struct inode *);
 void (*delete_inode) (struct inode *);
 void (*put_super) (struct super_block *);
 void (*write_super) (struct super_block *);
 int (*sync_fs)(struct super_block *sb, int wait);
 void (*write_super_lockfs) (struct super_block *);
 void (*unlockfs) (struct super_block *);
 int (*statfs) (struct dentry *, struct kstatfs *);
 int (*remount_fs) (struct super_block *, int *, char *);
 void (*clear_inode) (struct inode *);
 void (*umount_begin) (struct super_block *);

 int (*show_options)(struct seq_file *, struct vfsmount *);
 int (*show_stats)(struct seq_file *, struct vfsmount *);




};
# 1384 "linux-2.6.26/include/linux/fs.h"
extern void __mark_inode_dirty(struct inode *, int);
static inline  __attribute__((always_inline)) void mark_inode_dirty(struct inode *inode)
{
 __mark_inode_dirty(inode, (1 | 2 | 4));
}

static inline  __attribute__((always_inline)) void mark_inode_dirty_sync(struct inode *inode)
{
 __mark_inode_dirty(inode, 1);
}
# 1403 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) void inc_nlink(struct inode *inode)
{
 inode->i_nlink++;
}

static inline  __attribute__((always_inline)) void inode_inc_link_count(struct inode *inode)
{
 inc_nlink(inode);
 mark_inode_dirty(inode);
}
# 1425 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) void drop_nlink(struct inode *inode)
{
 inode->i_nlink--;
}
# 1438 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) void clear_nlink(struct inode *inode)
{
 inode->i_nlink = 0;
}

static inline  __attribute__((always_inline)) void inode_dec_link_count(struct inode *inode)
{
 drop_nlink(inode);
 mark_inode_dirty(inode);
}
# 1457 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) void inode_inc_iversion(struct inode *inode)
{
       do { do { } while (0); (void)0; (void)(&inode->i_lock); } while (0);
       inode->i_version++;
       do { do { } while (0); (void)0; (void)(&inode->i_lock); } while (0);
}

extern void touch_atime(struct vfsmount *mnt, struct dentry *dentry);
static inline  __attribute__((always_inline)) void file_accessed(struct file *file)
{
 if (!(file->f_flags & 01000000))
  touch_atime(file->f_path.mnt, file->f_path.dentry);
}

int sync_inode(struct inode *inode, struct writeback_control *wbc);

struct file_system_type {
 const char *name;
 int fs_flags;
 int (*get_sb) (struct file_system_type *, int,
         const char *, void *, struct vfsmount *);
 void (*kill_sb) (struct super_block *);
 struct module *owner;
 struct file_system_type * next;
 struct list_head fs_supers;

 struct lock_class_key s_lock_key;
 struct lock_class_key s_umount_key;

 struct lock_class_key i_lock_key;
 struct lock_class_key i_mutex_key;
 struct lock_class_key i_mutex_dir_key;
 struct lock_class_key i_alloc_sem_key;
};

extern int get_sb_bdev(struct file_system_type *fs_type,
 int flags, const char *dev_name, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
extern int get_sb_single(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
extern int get_sb_nodev(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
void generic_shutdown_super(struct super_block *sb);
void kill_block_super(struct super_block *sb);
void kill_anon_super(struct super_block *sb);
void kill_litter_super(struct super_block *sb);
void deactivate_super(struct super_block *sb);
int set_anon_super(struct super_block *s, void *data);
struct super_block *sget(struct file_system_type *type,
   int (*test)(struct super_block *,void *),
   int (*set)(struct super_block *,void *),
   void *data);
extern int get_sb_pseudo(struct file_system_type *, char *,
 const struct super_operations *ops, unsigned long,
 struct vfsmount *mnt);
extern int simple_set_mnt(struct vfsmount *mnt, struct super_block *sb);
int __put_super_and_need_restart(struct super_block *sb);
void unnamed_dev_init(void);







extern int register_filesystem(struct file_system_type *);
extern int unregister_filesystem(struct file_system_type *);
extern struct vfsmount *kern_mount_data(struct file_system_type *, void *data);

extern int may_umount_tree(struct vfsmount *);
extern int may_umount(struct vfsmount *);
extern long do_mount(char *, char *, char *, unsigned long, void *);
extern struct vfsmount *collect_mounts(struct vfsmount *, struct dentry *);
extern void drop_collected_mounts(struct vfsmount *);

extern int vfs_statfs(struct dentry *, struct kstatfs *);


typedef  struct kobject   _GLOBAL_182_T; extern  _GLOBAL_182_T  * global_fs_kobj[NUM_STACKS];    




extern int locks_mandatory_locked(struct inode *);
extern int locks_mandatory_area(int, struct inode *, struct file *, loff_t, size_t);






static inline  __attribute__((always_inline)) int __mandatory_lock(struct inode *ino)
{
 return (ino->i_mode & (0002000 | 00010)) == 0002000;
}






static inline  __attribute__((always_inline)) int mandatory_lock(struct inode *ino)
{
 return ((ino)->i_sb->s_flags & (64)) && __mandatory_lock(ino);
}

static inline  __attribute__((always_inline)) int locks_verify_locked(struct inode *inode)
{
 if (mandatory_lock(inode))
  return locks_mandatory_locked(inode);
 return 0;
}

extern int rw_verify_area(int, struct file *, loff_t *, size_t);

static inline  __attribute__((always_inline)) int locks_verify_truncate(struct inode *inode,
        struct file *filp,
        loff_t size)
{
 if (inode->i_flock && mandatory_lock(inode))
  return locks_mandatory_area(
   2, inode, filp,
   size < inode->i_size ? size : inode->i_size,
   (size < inode->i_size ? inode->i_size - size
    : size - inode->i_size)
  );
 return 0;
}

static inline  __attribute__((always_inline)) int break_lease(struct inode *inode, unsigned int mode)
{
 if (inode->i_flock)
  return __break_lease(inode, mode);
 return 0;
}



extern int do_truncate(struct dentry *, loff_t start, unsigned int time_attrs,
         struct file *filp);
extern long do_sys_open(int dfd, const char *filename, int flags,
   int mode);
extern struct file *filp_open(const char *, int, int);
extern struct file * dentry_open(struct dentry *, struct vfsmount *, int);
extern int filp_close(struct file *, fl_owner_t id);
extern char * getname(const char *);


extern void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) vfs_caches_init_early(void);
extern void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) vfs_caches_init(unsigned long);

typedef  struct kmem_cache   _GLOBAL_183_T; extern  _GLOBAL_183_T  * global_names_cachep[NUM_STACKS];    
# 1632 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) void bd_forget(struct inode *inode) {}

typedef  const struct file_operations    _GLOBAL_184_T; extern  _GLOBAL_184_T  global_def_blk_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_185_T; extern  _GLOBAL_185_T  global_def_chr_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_186_T; extern  _GLOBAL_186_T  global_bad_sock_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_187_T; extern  _GLOBAL_187_T  global_def_fifo_fops[NUM_STACKS];     
# 1660 "linux-2.6.26/include/linux/fs.h"
extern int alloc_chrdev_region(dev_t *, unsigned, unsigned, const char *);
extern int register_chrdev_region(dev_t, unsigned, const char *);
extern int register_chrdev(unsigned int, const char *,
      const struct file_operations *);
extern void unregister_chrdev(unsigned int, const char *);
extern void unregister_chrdev_region(dev_t, unsigned);
extern void chrdev_show(struct seq_file *,off_t);
# 1683 "linux-2.6.26/include/linux/fs.h"
extern void init_special_inode(struct inode *, umode_t, dev_t);


extern void make_bad_inode(struct inode *);
extern int is_bad_inode(struct inode *);

typedef  const struct file_operations    _GLOBAL_188_T; extern  _GLOBAL_188_T  global_read_fifo_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_189_T; extern  _GLOBAL_189_T  global_write_fifo_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_190_T; extern  _GLOBAL_190_T  global_rdwr_fifo_fops[NUM_STACKS];     

extern int fs_may_remount_ro(struct super_block *);
# 1710 "linux-2.6.26/include/linux/fs.h"
extern int invalidate_inodes(struct super_block *);
unsigned long __invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end,
     bool be_atomic);
unsigned long invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end);

static inline  __attribute__((always_inline)) unsigned long
invalidate_inode_pages(struct address_space *mapping)
{
 return invalidate_mapping_pages(mapping, 0, ~0UL);
}

static inline  __attribute__((always_inline)) void invalidate_remote_inode(struct inode *inode)
{
 if ((((inode->i_mode) & 00170000) == 0100000) || (((inode->i_mode) & 00170000) == 0040000) ||
     (((inode->i_mode) & 00170000) == 0120000))
  invalidate_mapping_pages(inode->i_mapping, 0, -1);
}
extern int invalidate_inode_pages2(struct address_space *mapping);
extern int invalidate_inode_pages2_range(struct address_space *mapping,
      unsigned long start, unsigned long end);
extern int write_inode_now(struct inode *, int);
extern int filemap_fdatawrite(struct address_space *);
extern int filemap_flush(struct address_space *);
extern int filemap_fdatawait(struct address_space *);
extern int filemap_write_and_wait(struct address_space *mapping);
extern int filemap_write_and_wait_range(struct address_space *mapping,
            loff_t lstart, loff_t lend);
extern int wait_on_page_writeback_range(struct address_space *mapping,
    unsigned long start, unsigned long end);
extern int __filemap_fdatawrite_range(struct address_space *mapping,
    loff_t start, loff_t end, int sync_mode);

extern long do_fsync(struct file *file, int datasync);
extern void sync_supers(void);
extern void sync_filesystems(int wait);
extern void __fsync_super(struct super_block *sb);
extern void emergency_sync(void);
extern void emergency_remount(void);
extern int do_remount_sb(struct super_block *sb, int flags,
    void *data, int force);



extern int notify_change(struct dentry *, struct iattr *);
extern int permission(struct inode *, int, struct nameidata *);
extern int generic_permission(struct inode *, int,
  int (*check_acl)(struct inode *, int));

extern int get_write_access(struct inode *);
extern int deny_write_access(struct file *);
static inline  __attribute__((always_inline)) void put_write_access(struct inode * inode)
{
 atomic_dec(&inode->i_writecount);
}
static inline  __attribute__((always_inline)) void allow_write_access(struct file *file)
{
 if (file)
  atomic_inc(&file->f_path.dentry->d_inode->i_writecount);
}
extern int do_pipe(int *);
extern struct file *create_read_pipe(struct file *f);
extern struct file *create_write_pipe(void);
extern void free_write_pipe(struct file *);

extern struct file *do_filp_open(int dfd, const char *pathname,
  int open_flag, int mode);
extern int may_open(struct nameidata *, int, int);

extern int kernel_read(struct file *, unsigned long, char *, unsigned long);
extern struct file * open_exec(const char *);


extern int is_subdir(struct dentry *, struct dentry *);
extern ino_t find_inode_number(struct dentry *, struct qstr *);




extern loff_t default_llseek(struct file *file, loff_t offset, int origin);

extern loff_t vfs_llseek(struct file *file, loff_t offset, int origin);

extern void inode_init_once(struct inode *);
extern void iput(struct inode *);
extern struct inode * igrab(struct inode *);
extern ino_t iunique(struct super_block *, ino_t);
extern int inode_needs_sync(struct inode *inode);
extern void generic_delete_inode(struct inode *inode);
extern void generic_drop_inode(struct inode *inode);

extern struct inode *ilookup5_nowait(struct super_block *sb,
  unsigned long hashval, int (*test)(struct inode *, void *),
  void *data);
extern struct inode *ilookup5(struct super_block *sb, unsigned long hashval,
  int (*test)(struct inode *, void *), void *data);
extern struct inode *ilookup(struct super_block *sb, unsigned long ino);

extern struct inode * iget5_locked(struct super_block *, unsigned long, int (*test)(struct inode *, void *), int (*set)(struct inode *, void *), void *);
extern struct inode * iget_locked(struct super_block *, unsigned long);
extern void unlock_new_inode(struct inode *);

extern void __iget(struct inode * inode);
extern void iget_failed(struct inode *);
extern void clear_inode(struct inode *);
extern void destroy_inode(struct inode *);
extern struct inode *new_inode(struct super_block *);
extern int should_remove_suid(struct dentry *);
extern int remove_suid(struct dentry *);

extern void __insert_inode_hash(struct inode *, unsigned long hashval);
extern void remove_inode_hash(struct inode *);
static inline  __attribute__((always_inline)) void insert_inode_hash(struct inode *inode) {
 __insert_inode_hash(inode, inode->i_ino);
}

extern struct file * get_empty_filp(void);
extern void file_move(struct file *f, struct list_head *list);
extern void file_kill(struct file *f);





extern int set_blocksize(struct block_device *, int);
extern int sb_set_blocksize(struct super_block *, int);
extern int sb_min_blocksize(struct super_block *, int);
extern int sb_has_dirty_inodes(struct super_block *);

extern int generic_file_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_readonly_mmap(struct file *, struct vm_area_struct *);
extern int file_read_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
int generic_write_checks(struct file *file, loff_t *pos, size_t *count, int isblk);
extern ssize_t generic_file_aio_read(struct kiocb *, const struct iovec *, unsigned long, loff_t);
extern ssize_t generic_file_aio_write(struct kiocb *, const struct iovec *, unsigned long, loff_t);
extern ssize_t generic_file_aio_write_nolock(struct kiocb *, const struct iovec *,
  unsigned long, loff_t);
extern ssize_t generic_file_direct_write(struct kiocb *, const struct iovec *,
  unsigned long *, loff_t, loff_t *, size_t, size_t);
extern ssize_t generic_file_buffered_write(struct kiocb *, const struct iovec *,
  unsigned long, loff_t, loff_t *, size_t, ssize_t);
extern ssize_t do_sync_read(struct file *filp, char *buf, size_t len, loff_t *ppos);
extern ssize_t do_sync_write(struct file *filp, const char *buf, size_t len, loff_t *ppos);
extern int generic_segment_checks(const struct iovec *iov,
  unsigned long *nr_segs, size_t *count, int access_flags);


extern ssize_t generic_file_splice_read(struct file *, loff_t *,
  struct pipe_inode_info *, size_t, unsigned int);
extern ssize_t generic_file_splice_write(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_file_splice_write_nolock(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_splice_sendpage(struct pipe_inode_info *pipe,
  struct file *out, loff_t *, size_t len, unsigned int flags);
extern long do_splice_direct(struct file *in, loff_t *ppos, struct file *out,
  size_t len, unsigned int flags);

extern void
file_ra_state_init(struct file_ra_state *ra, struct address_space *mapping);
extern loff_t no_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek(struct file *file, loff_t offset, int origin);
extern loff_t remote_llseek(struct file *file, loff_t offset, int origin);
extern int generic_file_open(struct inode * inode, struct file * filp);
extern int nonseekable_open(struct inode * inode, struct file * filp);
# 1885 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) int xip_truncate_page(struct address_space *mapping, loff_t from)
{
 return 0;
}
# 1931 "linux-2.6.26/include/linux/fs.h"
typedef  const struct file_operations    _GLOBAL_191_T; extern  _GLOBAL_191_T  global_generic_ro_fops[NUM_STACKS];     



extern int vfs_readlink(struct dentry *, char *, int, const char *);
extern int vfs_follow_link(struct nameidata *, const char *);
extern int page_readlink(struct dentry *, char *, int);
extern void *page_follow_link_light(struct dentry *, struct nameidata *);
extern void page_put_link(struct dentry *, struct nameidata *, void *);
extern int __page_symlink(struct inode *inode, const char *symname, int len,
  gfp_t gfp_mask);
extern int page_symlink(struct inode *inode, const char *symname, int len);
typedef  const struct inode_operations    _GLOBAL_192_T; extern  _GLOBAL_192_T  global_page_symlink_inode_operations[NUM_STACKS];     
extern int generic_readlink(struct dentry *, char *, int);
extern void generic_fillattr(struct inode *, struct kstat *);
extern int vfs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
void inode_add_bytes(struct inode *inode, loff_t bytes);
void inode_sub_bytes(struct inode *inode, loff_t bytes);
loff_t inode_get_bytes(struct inode *inode);
void inode_set_bytes(struct inode *inode, loff_t bytes);

extern int vfs_readdir(struct file *, filldir_t, void *);

extern int vfs_stat(char *, struct kstat *);
extern int vfs_lstat(char *, struct kstat *);
extern int vfs_stat_fd(int dfd, char *, struct kstat *);
extern int vfs_lstat_fd(int dfd, char *, struct kstat *);
extern int vfs_fstat(unsigned int, struct kstat *);

extern int do_vfs_ioctl(struct file *filp, unsigned int fd, unsigned int cmd,
      unsigned long arg);

extern void get_filesystem(struct file_system_type *fs);
extern void put_filesystem(struct file_system_type *fs);
extern struct file_system_type *get_fs_type(const char *name);
extern struct super_block *get_super(struct block_device *);
extern struct super_block *user_get_super(dev_t);
extern void drop_super(struct super_block *sb);

extern int dcache_dir_open(struct inode *, struct file *);
extern int dcache_dir_close(struct inode *, struct file *);
extern loff_t dcache_dir_lseek(struct file *, loff_t, int);
extern int dcache_readdir(struct file *, void *, filldir_t);
extern int simple_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int simple_statfs(struct dentry *, struct kstatfs *);
extern int simple_link(struct dentry *, struct inode *, struct dentry *);
extern int simple_unlink(struct inode *, struct dentry *);
extern int simple_rmdir(struct inode *, struct dentry *);
extern int simple_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);
extern int simple_sync_file(struct file *, struct dentry *, int);
extern int simple_empty(struct dentry *);
extern int simple_readpage(struct file *file, struct page *page);
extern int simple_prepare_write(struct file *file, struct page *page,
   unsigned offset, unsigned to);
extern int simple_write_begin(struct file *file, struct address_space *mapping,
   loff_t pos, unsigned len, unsigned flags,
   struct page **pagep, void **fsdata);
extern int simple_write_end(struct file *file, struct address_space *mapping,
   loff_t pos, unsigned len, unsigned copied,
   struct page *page, void *fsdata);

extern struct dentry *simple_lookup(struct inode *, struct dentry *, struct nameidata *);
extern ssize_t generic_read_dir(struct file *, char *, size_t, loff_t *);
typedef  const struct file_operations    _GLOBAL_193_T; extern  _GLOBAL_193_T  global_simple_dir_operations[NUM_STACKS];     
typedef  const struct inode_operations    _GLOBAL_194_T; extern  _GLOBAL_194_T  global_simple_dir_inode_operations[NUM_STACKS];     
struct tree_descr { char *name; const struct file_operations *ops; int mode; };
struct dentry *d_alloc_name(struct dentry *, const char *);
extern int simple_fill_super(struct super_block *, int, struct tree_descr *);
extern int simple_pin_fs(struct file_system_type *, struct vfsmount **mount, int *count);
extern void simple_release_fs(struct vfsmount **mount, int *count);

extern ssize_t simple_read_from_buffer(void *to, size_t count,
   loff_t *ppos, const void *from, size_t available);
extern ssize_t memory_read_from_buffer(void *to, size_t count, loff_t *ppos,
   const void *from, size_t available);
# 2014 "linux-2.6.26/include/linux/fs.h"
extern int inode_change_ok(struct inode *, struct iattr *);
extern int inode_setattr(struct inode *, struct iattr *);

extern void file_update_time(struct file *file);

extern int generic_show_options(struct seq_file *m, struct vfsmount *mnt);
extern void save_mount_options(struct super_block *sb, char *options);

static inline  __attribute__((always_inline)) ino_t parent_ino(struct dentry *dentry)
{
 ino_t res;

 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 res = dentry->d_parent->d_inode->i_ino;
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 return res;
}







struct simple_transaction_argresp {
 ssize_t size;
 char data[0];
};



char *simple_transaction_get(struct file *file, const char *buf,
    size_t size);
ssize_t simple_transaction_read(struct file *file, char *buf,
    size_t size, loff_t *pos);
int simple_transaction_release(struct inode *inode, struct file *file);

static inline  __attribute__((always_inline)) void simple_transaction_set(struct file *file, size_t n)
{
 struct simple_transaction_argresp *ar = file->private_data;

 do { if (__builtin_expect(!!(n > (((1UL) << 12) - sizeof(struct simple_transaction_argresp))), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);





 __asm__ __volatile__("": : :"memory");
 ar->size = n;
}
# 2095 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) void 
__attribute__((format(printf, 1, 2))) __simple_attr_check_format(const char *fmt, ...)
{

}

int simple_attr_open(struct inode *inode, struct file *file,
       int (*get)(void *, u64 *), int (*set)(void *, u64),
       const char *fmt);
int simple_attr_release(struct inode *inode, struct file *file);
ssize_t simple_attr_read(struct file *file, char *buf,
    size_t len, loff_t *ppos);
ssize_t simple_attr_write(struct file *file, const char *buf,
     size_t len, loff_t *ppos);
# 2122 "linux-2.6.26/include/linux/fs.h"
static inline  __attribute__((always_inline)) char *alloc_secdata(void)
{
 return (char *)1;
}

static inline  __attribute__((always_inline)) void free_secdata(void *secdata)
{ }


struct ctl_table;
int proc_nr_files(struct ctl_table *table, int write, struct file *filp,
    void *buffer, size_t *lenp, loff_t *ppos);

int get_filesystem_list(char * buf);
# 26 "linux-2.6.26/include/linux/security.h" 2
# 1 "linux-2.6.26/include/linux/binfmts.h" 1





struct pt_regs;
# 27 "linux-2.6.26/include/linux/binfmts.h"
struct linux_binprm{
 char buf[128];




 struct page *page[32];

 struct mm_struct *mm;
 unsigned long p;
 unsigned int sh_bang:1,
       misc_bang:1;
 struct file * file;
 int e_uid, e_gid;
 kernel_cap_t cap_inheritable, cap_permitted;
 bool cap_effective;
 void *security;
 int argc, envc;
 char * filename;
 char * interp;


 unsigned interp_flags;
 unsigned interp_data;
 unsigned long loader, exec;
};
# 66 "linux-2.6.26/include/linux/binfmts.h"
struct linux_binfmt {
 struct list_head lh;
 struct module *module;
 int (*load_binary)(struct linux_binprm *, struct pt_regs * regs);
 int (*load_shlib)(struct file *);
 int (*core_dump)(long signr, struct pt_regs *regs, struct file *file, unsigned long limit);
 unsigned long min_coredump;
 int hasvdso;
};

extern int register_binfmt(struct linux_binfmt *);
extern void unregister_binfmt(struct linux_binfmt *);

extern int prepare_binprm(struct linux_binprm *);
extern int remove_arg_zero(struct linux_binprm *);
extern int search_binary_handler(struct linux_binprm *,struct pt_regs *);
extern int flush_old_exec(struct linux_binprm * bprm);

typedef  int  _GLOBAL_195_T; extern  _GLOBAL_195_T  global_suid_dumpable[NUM_STACKS];   
# 94 "linux-2.6.26/include/linux/binfmts.h"
extern int setup_arg_pages(struct linux_binprm * bprm,
      unsigned long stack_top,
      int executable_stack);
extern int bprm_mm_init(struct linux_binprm *bprm);
extern int copy_strings_kernel(int argc,char ** argv,struct linux_binprm *bprm);
extern void compute_creds(struct linux_binprm *binprm);
extern int do_coredump(long signr, int exit_code, struct pt_regs * regs);
extern int set_binfmt(struct linux_binfmt *new);
extern void free_bprm(struct linux_binprm *);
# 27 "linux-2.6.26/include/linux/security.h" 2



# 1 "linux-2.6.26/include/linux/shm.h" 1
# 28 "linux-2.6.26/include/linux/shm.h"
# 1 "linux-2.6.26/include/asm/shmparam.h" 1
# 29 "linux-2.6.26/include/linux/shm.h" 2



struct shmid_ds {
 struct ipc_perm shm_perm;
 int shm_segsz;
 __kernel_time_t shm_atime;
 __kernel_time_t shm_dtime;
 __kernel_time_t shm_ctime;
 __kernel_ipc_pid_t shm_cpid;
 __kernel_ipc_pid_t shm_lpid;
 unsigned short shm_nattch;
 unsigned short shm_unused;
 void *shm_unused2;
 void *shm_unused3;
};


# 1 "linux-2.6.26/include/asm/shmbuf.h" 1
# 17 "linux-2.6.26/include/asm/shmbuf.h"
struct shmid64_ds {
 struct ipc64_perm shm_perm;
 size_t shm_segsz;
 __kernel_time_t shm_atime;



 __kernel_time_t shm_dtime;



 __kernel_time_t shm_ctime;



 __kernel_pid_t shm_cpid;
 __kernel_pid_t shm_lpid;
 unsigned long shm_nattch;
 unsigned long __unused4;
 unsigned long __unused5;
};

struct shminfo64 {
 unsigned long shmmax;
 unsigned long shmmin;
 unsigned long shmmni;
 unsigned long shmseg;
 unsigned long shmall;
 unsigned long __unused1;
 unsigned long __unused2;
 unsigned long __unused3;
 unsigned long __unused4;
};
# 48 "linux-2.6.26/include/linux/shm.h" 2
# 68 "linux-2.6.26/include/linux/shm.h"
struct shminfo {
 int shmmax;
 int shmmin;
 int shmmni;
 int shmseg;
 int shmall;
};

struct shm_info {
 int used_ids;
 unsigned long shm_tot;
 unsigned long shm_rss;
 unsigned long shm_swp;
 unsigned long swap_attempts;
 unsigned long swap_successes;
};


struct shmid_kernel
{
 struct kern_ipc_perm shm_perm;
 struct file * shm_file;
 unsigned long shm_nattch;
 unsigned long shm_segsz;
 time_t shm_atim;
 time_t shm_dtim;
 time_t shm_ctim;
 pid_t shm_cprid;
 pid_t shm_lprid;
 struct user_struct *mlock_user;
};
# 110 "linux-2.6.26/include/linux/shm.h"
static inline  __attribute__((always_inline)) long do_shmat(int shmid, char *shmaddr,
    int shmflg, unsigned long *addr)
{
 return -38;
}
static inline  __attribute__((always_inline)) int is_file_shm_hugepages(struct file *file)
{
 return 0;
}
# 31 "linux-2.6.26/include/linux/security.h" 2
# 1 "linux-2.6.26/include/linux/msg.h" 1
# 15 "linux-2.6.26/include/linux/msg.h"
struct msqid_ds {
 struct ipc_perm msg_perm;
 struct msg *msg_first;
 struct msg *msg_last;
 __kernel_time_t msg_stime;
 __kernel_time_t msg_rtime;
 __kernel_time_t msg_ctime;
 unsigned long msg_lcbytes;
 unsigned long msg_lqbytes;
 unsigned short msg_cbytes;
 unsigned short msg_qnum;
 unsigned short msg_qbytes;
 __kernel_ipc_pid_t msg_lspid;
 __kernel_ipc_pid_t msg_lrpid;
};


# 1 "linux-2.6.26/include/asm/msgbuf.h" 1
# 16 "linux-2.6.26/include/asm/msgbuf.h"
struct msqid64_ds {
 struct ipc64_perm msg_perm;
 __kernel_time_t msg_stime;



 __kernel_time_t msg_rtime;



 __kernel_time_t msg_ctime;



 unsigned long msg_cbytes;
 unsigned long msg_qnum;
 unsigned long msg_qbytes;
 __kernel_pid_t msg_lspid;
 __kernel_pid_t msg_lrpid;
 unsigned long __unused4;
 unsigned long __unused5;
};
# 33 "linux-2.6.26/include/linux/msg.h" 2


struct msgbuf {
 long mtype;
 char mtext[1];
};


struct msginfo {
 int msgpool;
 int msgmap;
 int msgmax;
 int msgmnb;
 int msgmni;
 int msgssz;
 int msgtql;
 unsigned short msgseg;
};
# 78 "linux-2.6.26/include/linux/msg.h"
struct msg_msg {
 struct list_head m_list;
 long m_type;
 int m_ts;
 struct msg_msgseg* next;
 void *security;

};


struct msg_queue {
 struct kern_ipc_perm q_perm;
 time_t q_stime;
 time_t q_rtime;
 time_t q_ctime;
 unsigned long q_cbytes;
 unsigned long q_qnum;
 unsigned long q_qbytes;
 pid_t q_lspid;
 pid_t q_lrpid;

 struct list_head q_messages;
 struct list_head q_receivers;
 struct list_head q_senders;
};


extern long do_msgsnd(int msqid, long mtype, void *mtext,
   size_t msgsz, int msgflg);
extern long do_msgrcv(int msqid, long *pmtype, void *mtext,
   size_t msgsz, long msgtyp, int msgflg);
# 32 "linux-2.6.26/include/linux/security.h" 2

# 1 "linux-2.6.26/include/linux/key.h" 1
# 23 "linux-2.6.26/include/linux/key.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 24 "linux-2.6.26/include/linux/key.h" 2




typedef int32_t key_serial_t;


typedef uint32_t key_perm_t;

struct key;
# 34 "linux-2.6.26/include/linux/security.h" 2
# 1 "linux-2.6.26/include/linux/xfrm.h" 1
# 13 "linux-2.6.26/include/linux/xfrm.h"
typedef union
{
 __be32 a4;
 __be32 a6[4];
} xfrm_address_t;





struct xfrm_id
{
 xfrm_address_t daddr;
 __be32 spi;
 __u8 proto;
};

struct xfrm_sec_ctx {
 __u8 ctx_doi;
 __u8 ctx_alg;
 __u16 ctx_len;
 __u32 ctx_sid;
 char ctx_str[0];
};
# 48 "linux-2.6.26/include/linux/xfrm.h"
struct xfrm_selector
{
 xfrm_address_t daddr;
 xfrm_address_t saddr;
 __be16 dport;
 __be16 dport_mask;
 __be16 sport;
 __be16 sport_mask;
 __u16 family;
 __u8 prefixlen_d;
 __u8 prefixlen_s;
 __u8 proto;
 int ifindex;
 uid_t user;
};



struct xfrm_lifetime_cfg
{
 __u64 soft_byte_limit;
 __u64 hard_byte_limit;
 __u64 soft_packet_limit;
 __u64 hard_packet_limit;
 __u64 soft_add_expires_seconds;
 __u64 hard_add_expires_seconds;
 __u64 soft_use_expires_seconds;
 __u64 hard_use_expires_seconds;
};

struct xfrm_lifetime_cur
{
 __u64 bytes;
 __u64 packets;
 __u64 add_time;
 __u64 use_time;
};

struct xfrm_replay_state
{
 __u32 oseq;
 __u32 seq;
 __u32 bitmap;
};

struct xfrm_algo {
 char alg_name[64];
 unsigned int alg_key_len;
 char alg_key[0];
};

struct xfrm_algo_aead {
 char alg_name[64];
 unsigned int alg_key_len;
 unsigned int alg_icv_len;
 char alg_key[0];
};

struct xfrm_stats {
 __u32 replay_window;
 __u32 replay;
 __u32 integrity_failed;
};

enum
{
 XFRM_POLICY_TYPE_MAIN = 0,
 XFRM_POLICY_TYPE_SUB = 1,
 XFRM_POLICY_TYPE_MAX = 2,
 XFRM_POLICY_TYPE_ANY = 255
};

enum
{
 XFRM_POLICY_IN = 0,
 XFRM_POLICY_OUT = 1,
 XFRM_POLICY_FWD = 2,
 XFRM_POLICY_MASK = 3,
 XFRM_POLICY_MAX = 3
};

enum
{
 XFRM_SHARE_ANY,
 XFRM_SHARE_SESSION,
 XFRM_SHARE_USER,
 XFRM_SHARE_UNIQUE
};
# 145 "linux-2.6.26/include/linux/xfrm.h"
enum {
 XFRM_MSG_BASE = 0x10,

 XFRM_MSG_NEWSA = 0x10,

 XFRM_MSG_DELSA,

 XFRM_MSG_GETSA,


 XFRM_MSG_NEWPOLICY,

 XFRM_MSG_DELPOLICY,

 XFRM_MSG_GETPOLICY,


 XFRM_MSG_ALLOCSPI,

 XFRM_MSG_ACQUIRE,

 XFRM_MSG_EXPIRE,


 XFRM_MSG_UPDPOLICY,

 XFRM_MSG_UPDSA,


 XFRM_MSG_POLEXPIRE,


 XFRM_MSG_FLUSHSA,

 XFRM_MSG_FLUSHPOLICY,


 XFRM_MSG_NEWAE,

 XFRM_MSG_GETAE,


 XFRM_MSG_REPORT,


 XFRM_MSG_MIGRATE,


 XFRM_MSG_NEWSADINFO,

 XFRM_MSG_GETSADINFO,


 XFRM_MSG_NEWSPDINFO,

 XFRM_MSG_GETSPDINFO,

 __XFRM_MSG_MAX
};
# 212 "linux-2.6.26/include/linux/xfrm.h"
struct xfrm_user_sec_ctx {
 __u16 len;
 __u16 exttype;
 __u8 ctx_alg;
 __u8 ctx_doi;
 __u16 ctx_len;
};

struct xfrm_user_tmpl {
 struct xfrm_id id;
 __u16 family;
 xfrm_address_t saddr;
 __u32 reqid;
 __u8 mode;
 __u8 share;
 __u8 optional;
 __u32 aalgos;
 __u32 ealgos;
 __u32 calgos;
};

struct xfrm_encap_tmpl {
 __u16 encap_type;
 __be16 encap_sport;
 __be16 encap_dport;
 xfrm_address_t encap_oa;
};


enum xfrm_ae_ftype_t {
 XFRM_AE_UNSPEC,
 XFRM_AE_RTHR=1,
 XFRM_AE_RVAL=2,
 XFRM_AE_LVAL=4,
 XFRM_AE_ETHR=8,
 XFRM_AE_CR=16,
 XFRM_AE_CE=32,
 XFRM_AE_CU=64,
 __XFRM_AE_MAX


};

struct xfrm_userpolicy_type {
 __u8 type;
 __u16 reserved1;
 __u8 reserved2;
};


enum xfrm_attr_type_t {
 XFRMA_UNSPEC,
 XFRMA_ALG_AUTH,
 XFRMA_ALG_CRYPT,
 XFRMA_ALG_COMP,
 XFRMA_ENCAP,
 XFRMA_TMPL,
 XFRMA_SA,
 XFRMA_POLICY,
 XFRMA_SEC_CTX,
 XFRMA_LTIME_VAL,
 XFRMA_REPLAY_VAL,
 XFRMA_REPLAY_THRESH,
 XFRMA_ETIMER_THRESH,
 XFRMA_SRCADDR,
 XFRMA_COADDR,
 XFRMA_LASTUSED,
 XFRMA_POLICY_TYPE,
 XFRMA_MIGRATE,
 XFRMA_ALG_AEAD,
 __XFRMA_MAX


};

enum xfrm_sadattr_type_t {
 XFRMA_SAD_UNSPEC,
 XFRMA_SAD_CNT,
 XFRMA_SAD_HINFO,
 __XFRMA_SAD_MAX


};

struct xfrmu_sadhinfo {
 __u32 sadhcnt;
 __u32 sadhmcnt;
};

enum xfrm_spdattr_type_t {
 XFRMA_SPD_UNSPEC,
 XFRMA_SPD_INFO,
 XFRMA_SPD_HINFO,
 __XFRMA_SPD_MAX


};

struct xfrmu_spdinfo {
 __u32 incnt;
 __u32 outcnt;
 __u32 fwdcnt;
 __u32 inscnt;
 __u32 outscnt;
 __u32 fwdscnt;
};

struct xfrmu_spdhinfo {
 __u32 spdhcnt;
 __u32 spdhmcnt;
};

struct xfrm_usersa_info {
 struct xfrm_selector sel;
 struct xfrm_id id;
 xfrm_address_t saddr;
 struct xfrm_lifetime_cfg lft;
 struct xfrm_lifetime_cur curlft;
 struct xfrm_stats stats;
 __u32 seq;
 __u32 reqid;
 __u16 family;
 __u8 mode;
 __u8 replay_window;
 __u8 flags;






};

struct xfrm_usersa_id {
 xfrm_address_t daddr;
 __be32 spi;
 __u16 family;
 __u8 proto;
};

struct xfrm_aevent_id {
 struct xfrm_usersa_id sa_id;
 xfrm_address_t saddr;
 __u32 flags;
 __u32 reqid;
};

struct xfrm_userspi_info {
 struct xfrm_usersa_info info;
 __u32 min;
 __u32 max;
};

struct xfrm_userpolicy_info {
 struct xfrm_selector sel;
 struct xfrm_lifetime_cfg lft;
 struct xfrm_lifetime_cur curlft;
 __u32 priority;
 __u32 index;
 __u8 dir;
 __u8 action;


 __u8 flags;



 __u8 share;
};

struct xfrm_userpolicy_id {
 struct xfrm_selector sel;
 __u32 index;
 __u8 dir;
};

struct xfrm_user_acquire {
 struct xfrm_id id;
 xfrm_address_t saddr;
 struct xfrm_selector sel;
 struct xfrm_userpolicy_info policy;
 __u32 aalgos;
 __u32 ealgos;
 __u32 calgos;
 __u32 seq;
};

struct xfrm_user_expire {
 struct xfrm_usersa_info state;
 __u8 hard;
};

struct xfrm_user_polexpire {
 struct xfrm_userpolicy_info pol;
 __u8 hard;
};

struct xfrm_usersa_flush {
 __u8 proto;
};

struct xfrm_user_report {
 __u8 proto;
 struct xfrm_selector sel;
};

struct xfrm_user_migrate {
 xfrm_address_t old_daddr;
 xfrm_address_t old_saddr;
 xfrm_address_t new_daddr;
 xfrm_address_t new_saddr;
 __u8 proto;
 __u8 mode;
 __u16 reserved;
 __u32 reqid;
 __u16 old_family;
 __u16 new_family;
};
# 440 "linux-2.6.26/include/linux/xfrm.h"
enum xfrm_nlgroups {
 XFRMNLGRP_NONE,

 XFRMNLGRP_ACQUIRE,

 XFRMNLGRP_EXPIRE,

 XFRMNLGRP_SA,

 XFRMNLGRP_POLICY,

 XFRMNLGRP_AEVENTS,

 XFRMNLGRP_REPORT,

 XFRMNLGRP_MIGRATE,

 __XFRMNLGRP_MAX
};
# 35 "linux-2.6.26/include/linux/security.h" 2
# 1 "linux-2.6.26/include/net/flow.h" 1
# 10 "linux-2.6.26/include/net/flow.h"
# 1 "linux-2.6.26/include/linux/in6.h" 1
# 30 "linux-2.6.26/include/linux/in6.h"
struct in6_addr
{
 union
 {
  __u8 u6_addr8[16];
  __be16 u6_addr16[8];
  __be32 u6_addr32[4];
 } in6_u;



};





typedef  const struct in6_addr    _GLOBAL_196_T; extern  _GLOBAL_196_T  global_in6addr_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_197_T; extern  _GLOBAL_197_T  global_in6addr_loopback[NUM_STACKS];     


typedef  const struct in6_addr    _GLOBAL_198_T; extern  _GLOBAL_198_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     


typedef  const struct in6_addr    _GLOBAL_199_T; extern  _GLOBAL_199_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     




struct sockaddr_in6 {
 unsigned short int sin6_family;
 __be16 sin6_port;
 __be32 sin6_flowinfo;
 struct in6_addr sin6_addr;
 __u32 sin6_scope_id;
};

struct ipv6_mreq {

 struct in6_addr ipv6mr_multiaddr;


 int ipv6mr_ifindex;
};



struct in6_flowlabel_req
{
 struct in6_addr flr_dst;
 __be32 flr_label;
 __u8 flr_action;
 __u8 flr_share;
 __u16 flr_flags;
 __u16 flr_expires;
 __u16 flr_linger;
 __u32 __flr_pad;

};
# 11 "linux-2.6.26/include/net/flow.h" 2
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 12 "linux-2.6.26/include/net/flow.h" 2

struct flowi {
 int oif;
 int iif;
 __u32 mark;

 union {
  struct {
   __be32 daddr;
   __be32 saddr;
   __u8 tos;
   __u8 scope;
  } ip4_u;

  struct {
   struct in6_addr daddr;
   struct in6_addr saddr;
   __be32 flowlabel;
  } ip6_u;

  struct {
   __le16 daddr;
   __le16 saddr;
   __u8 scope;
  } dn_u;
 } nl_u;
# 49 "linux-2.6.26/include/net/flow.h"
 __u8 proto;
 __u8 flags;
 union {
  struct {
   __be16 sport;
   __be16 dport;
  } ports;

  struct {
   __u8 type;
   __u8 code;
  } icmpt;

  struct {
   __le16 sport;
   __le16 dport;
  } dnports;

  __be32 spi;

  struct {
   __u8 type;
  } mht;
 } uli_u;






 __u32 secid;
} __attribute__((__aligned__(64/8))) ;





struct sock;
typedef int (*flow_resolve_t)(struct flowi *key, u16 family, u8 dir,
          void **objp, atomic_t **obj_refp);

extern void *flow_cache_lookup(struct flowi *key, u16 family, u8 dir,
           flow_resolve_t resolver);
extern void flow_cache_flush(void);
typedef  atomic_t  _GLOBAL_200_T; extern  _GLOBAL_200_T  global_flow_cache_genid[NUM_STACKS];   

static inline  __attribute__((always_inline)) int flow_cache_uli_match(struct flowi *fl1, struct flowi *fl2)
{
 return (fl1->proto == fl2->proto &&
  !memcmp(&fl1->uli_u, &fl2->uli_u, sizeof(fl1->uli_u)));
}
# 36 "linux-2.6.26/include/linux/security.h" 2




struct ctl_table;
struct audit_krule;





extern int cap_capable(struct task_struct *tsk, int cap);
extern int cap_settime(struct timespec *ts, struct timezone *tz);
extern int cap_ptrace(struct task_struct *parent, struct task_struct *child);
extern int cap_capget(struct task_struct *target, kernel_cap_t *effective, kernel_cap_t *inheritable, kernel_cap_t *permitted);
extern int cap_capset_check(struct task_struct *target, kernel_cap_t *effective, kernel_cap_t *inheritable, kernel_cap_t *permitted);
extern void cap_capset_set(struct task_struct *target, kernel_cap_t *effective, kernel_cap_t *inheritable, kernel_cap_t *permitted);
extern int cap_bprm_set_security(struct linux_binprm *bprm);
extern void cap_bprm_apply_creds(struct linux_binprm *bprm, int unsafe);
extern int cap_bprm_secureexec(struct linux_binprm *bprm);
extern int cap_inode_setxattr(struct dentry *dentry, const char *name,
         const void *value, size_t size, int flags);
extern int cap_inode_removexattr(struct dentry *dentry, const char *name);
extern int cap_inode_need_killpriv(struct dentry *dentry);
extern int cap_inode_killpriv(struct dentry *dentry);
extern int cap_task_post_setuid(uid_t old_ruid, uid_t old_euid, uid_t old_suid, int flags);
extern void cap_task_reparent_to_init(struct task_struct *p);
extern int cap_task_prctl(int option, unsigned long arg2, unsigned long arg3,
     unsigned long arg4, unsigned long arg5, long *rc_p);
extern int cap_task_setscheduler(struct task_struct *p, int policy, struct sched_param *lp);
extern int cap_task_setioprio(struct task_struct *p, int ioprio);
extern int cap_task_setnice(struct task_struct *p, int nice);
extern int cap_syslog(int type);
extern int cap_vm_enough_memory(struct mm_struct *mm, long pages);

struct msghdr;
struct sk_buff;
struct sock;
struct sockaddr;
struct socket;
struct flowi;
struct dst_entry;
struct xfrm_selector;
struct xfrm_policy;
struct xfrm_state;
struct xfrm_user_sec_ctx;

extern int cap_netlink_send(struct sock *sk, struct sk_buff *skb);
extern int cap_netlink_recv(struct sk_buff *skb, int cap);

typedef  unsigned long   _GLOBAL_201_T; extern  _GLOBAL_201_T  global_mmap_min_addr[NUM_STACKS];    
# 103 "linux-2.6.26/include/linux/security.h"
struct nfsctl_arg;
struct sched_param;
struct swap_info_struct;
struct request_sock;
# 1737 "linux-2.6.26/include/linux/security.h"
struct security_mnt_opts {
};

static inline  __attribute__((always_inline)) void security_init_mnt_opts(struct security_mnt_opts *opts)
{
}

static inline  __attribute__((always_inline)) void security_free_mnt_opts(struct security_mnt_opts *opts)
{
}






static inline  __attribute__((always_inline)) int security_init(void)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_ptrace(struct task_struct *parent, struct task_struct *child)
{
 return cap_ptrace(parent, child);
}

static inline  __attribute__((always_inline)) int security_capget(struct task_struct *target,
       kernel_cap_t *effective,
       kernel_cap_t *inheritable,
       kernel_cap_t *permitted)
{
 return cap_capget(target, effective, inheritable, permitted);
}

static inline  __attribute__((always_inline)) int security_capset_check(struct task_struct *target,
      kernel_cap_t *effective,
      kernel_cap_t *inheritable,
      kernel_cap_t *permitted)
{
 return cap_capset_check(target, effective, inheritable, permitted);
}

static inline  __attribute__((always_inline)) void security_capset_set(struct task_struct *target,
     kernel_cap_t *effective,
     kernel_cap_t *inheritable,
     kernel_cap_t *permitted)
{
 cap_capset_set(target, effective, inheritable, permitted);
}

static inline  __attribute__((always_inline)) int security_capable(struct task_struct *tsk, int cap)
{
 return cap_capable(tsk, cap);
}

static inline  __attribute__((always_inline)) int security_acct(struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sysctl(struct ctl_table *table, int op)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_quotactl(int cmds, int type, int id,
         struct super_block *sb)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_quota_on(struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_syslog(int type)
{
 return cap_syslog(type);
}

static inline  __attribute__((always_inline)) int security_settime(struct timespec *ts, struct timezone *tz)
{
 return cap_settime(ts, tz);
}

static inline  __attribute__((always_inline)) int security_vm_enough_memory(long pages)
{
 return cap_vm_enough_memory(nsc_get_task()->mm, pages);
}

static inline  __attribute__((always_inline)) int security_vm_enough_memory_mm(struct mm_struct *mm, long pages)
{
 return cap_vm_enough_memory(mm, pages);
}

static inline  __attribute__((always_inline)) int security_bprm_alloc(struct linux_binprm *bprm)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_bprm_free(struct linux_binprm *bprm)
{ }

static inline  __attribute__((always_inline)) void security_bprm_apply_creds(struct linux_binprm *bprm, int unsafe)
{
 cap_bprm_apply_creds(bprm, unsafe);
}

static inline  __attribute__((always_inline)) void security_bprm_post_apply_creds(struct linux_binprm *bprm)
{
 return;
}

static inline  __attribute__((always_inline)) int security_bprm_set(struct linux_binprm *bprm)
{
 return cap_bprm_set_security(bprm);
}

static inline  __attribute__((always_inline)) int security_bprm_check(struct linux_binprm *bprm)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_bprm_secureexec(struct linux_binprm *bprm)
{
 return cap_bprm_secureexec(bprm);
}

static inline  __attribute__((always_inline)) int security_sb_alloc(struct super_block *sb)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sb_free(struct super_block *sb)
{ }

static inline  __attribute__((always_inline)) int security_sb_copy_data(char *orig, char *copy)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_kern_mount(struct super_block *sb, void *data)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_statfs(struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_mount(char *dev_name, struct path *path,
        char *type, unsigned long flags,
        void *data)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_check_sb(struct vfsmount *mnt,
           struct path *path)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_umount(struct vfsmount *mnt, int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sb_umount_close(struct vfsmount *mnt)
{ }

static inline  __attribute__((always_inline)) void security_sb_umount_busy(struct vfsmount *mnt)
{ }

static inline  __attribute__((always_inline)) void security_sb_post_remount(struct vfsmount *mnt,
          unsigned long flags, void *data)
{ }

static inline  __attribute__((always_inline)) void security_sb_post_addmount(struct vfsmount *mnt,
          struct path *mountpoint)
{ }

static inline  __attribute__((always_inline)) int security_sb_pivotroot(struct path *old_path,
     struct path *new_path)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sb_post_pivotroot(struct path *old_path,
           struct path *new_path)
{ }
static inline  __attribute__((always_inline)) int security_sb_get_mnt_opts(const struct super_block *sb,
        struct security_mnt_opts *opts)
{
 security_init_mnt_opts(opts);
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_set_mnt_opts(struct super_block *sb,
        struct security_mnt_opts *opts)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sb_clone_mnt_opts(const struct super_block *oldsb,
           struct super_block *newsb)
{ }

static inline  __attribute__((always_inline)) int security_sb_parse_opts_str(char *options, struct security_mnt_opts *opts)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_alloc(struct inode *inode)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_inode_free(struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_inode_init_security(struct inode *inode,
      struct inode *dir,
      char **name,
      void **value,
      size_t *len)
{
 return -95;
}

static inline  __attribute__((always_inline)) int security_inode_create(struct inode *dir,
      struct dentry *dentry,
      int mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_link(struct dentry *old_dentry,
           struct inode *dir,
           struct dentry *new_dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_unlink(struct inode *dir,
      struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_symlink(struct inode *dir,
       struct dentry *dentry,
       const char *old_name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_mkdir(struct inode *dir,
     struct dentry *dentry,
     int mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_rmdir(struct inode *dir,
     struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_mknod(struct inode *dir,
     struct dentry *dentry,
     int mode, dev_t dev)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_rename(struct inode *old_dir,
      struct dentry *old_dentry,
      struct inode *new_dir,
      struct dentry *new_dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_readlink(struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_follow_link(struct dentry *dentry,
           struct nameidata *nd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_permission(struct inode *inode, int mask,
          struct nameidata *nd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_setattr(struct dentry *dentry,
       struct iattr *attr)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_getattr(struct vfsmount *mnt,
       struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_inode_delete(struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_inode_setxattr(struct dentry *dentry,
  const char *name, const void *value, size_t size, int flags)
{
 return cap_inode_setxattr(dentry, name, value, size, flags);
}

static inline  __attribute__((always_inline)) void security_inode_post_setxattr(struct dentry *dentry,
  const char *name, const void *value, size_t size, int flags)
{ }

static inline  __attribute__((always_inline)) int security_inode_getxattr(struct dentry *dentry,
   const char *name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_listxattr(struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_removexattr(struct dentry *dentry,
   const char *name)
{
 return cap_inode_removexattr(dentry, name);
}

static inline  __attribute__((always_inline)) int security_inode_need_killpriv(struct dentry *dentry)
{
 return cap_inode_need_killpriv(dentry);
}

static inline  __attribute__((always_inline)) int security_inode_killpriv(struct dentry *dentry)
{
 return cap_inode_killpriv(dentry);
}

static inline  __attribute__((always_inline)) int security_inode_getsecurity(const struct inode *inode, const char *name, void **buffer, bool alloc)
{
 return -95;
}

static inline  __attribute__((always_inline)) int security_inode_setsecurity(struct inode *inode, const char *name, const void *value, size_t size, int flags)
{
 return -95;
}

static inline  __attribute__((always_inline)) int security_inode_listsecurity(struct inode *inode, char *buffer, size_t buffer_size)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_inode_getsecid(const struct inode *inode, u32 *secid)
{
 *secid = 0;
}

static inline  __attribute__((always_inline)) int security_file_permission(struct file *file, int mask)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_alloc(struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_file_free(struct file *file)
{ }

static inline  __attribute__((always_inline)) int security_file_ioctl(struct file *file, unsigned int cmd,
          unsigned long arg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_mmap(struct file *file, unsigned long reqprot,
         unsigned long prot,
         unsigned long flags,
         unsigned long addr,
         unsigned long addr_only)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_mprotect(struct vm_area_struct *vma,
      unsigned long reqprot,
      unsigned long prot)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_lock(struct file *file, unsigned int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_fcntl(struct file *file, unsigned int cmd,
          unsigned long arg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_set_fowner(struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_send_sigiotask(struct task_struct *tsk,
            struct fown_struct *fown,
            int sig)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_receive(struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_dentry_open(struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_create(unsigned long clone_flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_alloc(struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_task_free(struct task_struct *p)
{ }

static inline  __attribute__((always_inline)) int security_task_setuid(uid_t id0, uid_t id1, uid_t id2,
           int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_post_setuid(uid_t old_ruid, uid_t old_euid,
         uid_t old_suid, int flags)
{
 return cap_task_post_setuid(old_ruid, old_euid, old_suid, flags);
}

static inline  __attribute__((always_inline)) int security_task_setgid(gid_t id0, gid_t id1, gid_t id2,
           int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setpgid(struct task_struct *p, pid_t pgid)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_getpgid(struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_getsid(struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_task_getsecid(struct task_struct *p, u32 *secid)
{
 *secid = 0;
}

static inline  __attribute__((always_inline)) int security_task_setgroups(struct group_info *group_info)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setnice(struct task_struct *p, int nice)
{
 return cap_task_setnice(p, nice);
}

static inline  __attribute__((always_inline)) int security_task_setioprio(struct task_struct *p, int ioprio)
{
 return cap_task_setioprio(p, ioprio);
}

static inline  __attribute__((always_inline)) int security_task_getioprio(struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setrlimit(unsigned int resource,
       struct rlimit *new_rlim)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setscheduler(struct task_struct *p,
          int policy,
          struct sched_param *lp)
{
 return cap_task_setscheduler(p, policy, lp);
}

static inline  __attribute__((always_inline)) int security_task_getscheduler(struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_movememory(struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_kill(struct task_struct *p,
         struct siginfo *info, int sig,
         u32 secid)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_wait(struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_prctl(int option, unsigned long arg2,
          unsigned long arg3,
          unsigned long arg4,
          unsigned long arg5, long *rc_p)
{
 return cap_task_prctl(option, arg2, arg3, arg3, arg5, rc_p);
}

static inline  __attribute__((always_inline)) void security_task_reparent_to_init(struct task_struct *p)
{
 cap_task_reparent_to_init(p);
}

static inline  __attribute__((always_inline)) void security_task_to_inode(struct task_struct *p, struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_ipc_permission(struct kern_ipc_perm *ipcp,
       short flag)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_ipc_getsecid(struct kern_ipc_perm *ipcp, u32 *secid)
{
 *secid = 0;
}

static inline  __attribute__((always_inline)) int security_msg_msg_alloc(struct msg_msg *msg)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_msg_msg_free(struct msg_msg *msg)
{ }

static inline  __attribute__((always_inline)) int security_msg_queue_alloc(struct msg_queue *msq)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_msg_queue_free(struct msg_queue *msq)
{ }

static inline  __attribute__((always_inline)) int security_msg_queue_associate(struct msg_queue *msq,
            int msqflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_msg_queue_msgctl(struct msg_queue *msq, int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_msg_queue_msgsnd(struct msg_queue *msq,
         struct msg_msg *msg, int msqflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_msg_queue_msgrcv(struct msg_queue *msq,
         struct msg_msg *msg,
         struct task_struct *target,
         long type, int mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_shm_alloc(struct shmid_kernel *shp)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_shm_free(struct shmid_kernel *shp)
{ }

static inline  __attribute__((always_inline)) int security_shm_associate(struct shmid_kernel *shp,
      int shmflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_shm_shmctl(struct shmid_kernel *shp, int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_shm_shmat(struct shmid_kernel *shp,
         char *shmaddr, int shmflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sem_alloc(struct sem_array *sma)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sem_free(struct sem_array *sma)
{ }

static inline  __attribute__((always_inline)) int security_sem_associate(struct sem_array *sma, int semflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sem_semctl(struct sem_array *sma, int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sem_semop(struct sem_array *sma,
         struct sembuf *sops, unsigned nsops,
         int alter)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_d_instantiate(struct dentry *dentry, struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_getprocattr(struct task_struct *p, char *name, char **value)
{
 return -22;
}

static inline  __attribute__((always_inline)) int security_setprocattr(struct task_struct *p, char *name, void *value, size_t size)
{
 return -22;
}

static inline  __attribute__((always_inline)) int security_netlink_send(struct sock *sk, struct sk_buff *skb)
{
 return cap_netlink_send(sk, skb);
}

static inline  __attribute__((always_inline)) int security_netlink_recv(struct sk_buff *skb, int cap)
{
 return cap_netlink_recv(skb, cap);
}

static inline  __attribute__((always_inline)) struct dentry *securityfs_create_dir(const char *name,
     struct dentry *parent)
{
 return ERR_PTR(-19);
}

static inline  __attribute__((always_inline)) struct dentry *securityfs_create_file(const char *name,
      mode_t mode,
      struct dentry *parent,
      void *data,
      const struct file_operations *fops)
{
 return ERR_PTR(-19);
}

static inline  __attribute__((always_inline)) void securityfs_remove(struct dentry *dentry)
{
}

static inline  __attribute__((always_inline)) int security_secid_to_secctx(u32 secid, char **secdata, u32 *seclen)
{
 return -95;
}

static inline  __attribute__((always_inline)) int security_secctx_to_secid(const char *secdata,
        u32 seclen,
        u32 *secid)
{
 return -95;
}

static inline  __attribute__((always_inline)) void security_release_secctx(char *secdata, u32 seclen)
{
}
# 2503 "linux-2.6.26/include/linux/security.h"
static inline  __attribute__((always_inline)) int security_unix_stream_connect(struct socket *sock,
            struct socket *other,
            struct sock *newsk)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_unix_may_send(struct socket *sock,
      struct socket *other)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_create(int family, int type,
      int protocol, int kern)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_post_create(struct socket *sock,
           int family,
           int type,
           int protocol, int kern)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_bind(struct socket *sock,
           struct sockaddr *address,
           int addrlen)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_connect(struct socket *sock,
       struct sockaddr *address,
       int addrlen)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_listen(struct socket *sock, int backlog)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_accept(struct socket *sock,
      struct socket *newsock)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_socket_post_accept(struct socket *sock,
            struct socket *newsock)
{
}

static inline  __attribute__((always_inline)) int security_socket_sendmsg(struct socket *sock,
       struct msghdr *msg, int size)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_recvmsg(struct socket *sock,
       struct msghdr *msg, int size,
       int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getsockname(struct socket *sock)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getpeername(struct socket *sock)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getsockopt(struct socket *sock,
          int level, int optname)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_setsockopt(struct socket *sock,
          int level, int optname)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_shutdown(struct socket *sock, int how)
{
 return 0;
}
static inline  __attribute__((always_inline)) int security_sock_rcv_skb(struct sock *sk,
     struct sk_buff *skb)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getpeersec_stream(struct socket *sock, char *optval,
          int *optlen, unsigned len)
{
 return -92;
}

static inline  __attribute__((always_inline)) int security_socket_getpeersec_dgram(struct socket *sock, struct sk_buff *skb, u32 *secid)
{
 return -92;
}

static inline  __attribute__((always_inline)) int security_sk_alloc(struct sock *sk, int family, gfp_t priority)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sk_free(struct sock *sk)
{
}

static inline  __attribute__((always_inline)) void security_sk_clone(const struct sock *sk, struct sock *newsk)
{
}

static inline  __attribute__((always_inline)) void security_sk_classify_flow(struct sock *sk, struct flowi *fl)
{
}

static inline  __attribute__((always_inline)) void security_req_classify_flow(const struct request_sock *req, struct flowi *fl)
{
}

static inline  __attribute__((always_inline)) void security_sock_graft(struct sock *sk, struct socket *parent)
{
}

static inline  __attribute__((always_inline)) int security_inet_conn_request(struct sock *sk,
   struct sk_buff *skb, struct request_sock *req)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_inet_csk_clone(struct sock *newsk,
   const struct request_sock *req)
{
}

static inline  __attribute__((always_inline)) void security_inet_conn_established(struct sock *sk,
   struct sk_buff *skb)
{
}
# 2677 "linux-2.6.26/include/linux/security.h"
static inline  __attribute__((always_inline)) int security_xfrm_policy_alloc(struct xfrm_sec_ctx **ctxp, struct xfrm_user_sec_ctx *sec_ctx)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_policy_clone(struct xfrm_sec_ctx *old, struct xfrm_sec_ctx **new_ctxp)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_xfrm_policy_free(struct xfrm_sec_ctx *ctx)
{
}

static inline  __attribute__((always_inline)) int security_xfrm_policy_delete(struct xfrm_sec_ctx *ctx)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_state_alloc(struct xfrm_state *x,
     struct xfrm_user_sec_ctx *sec_ctx)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_state_alloc_acquire(struct xfrm_state *x,
     struct xfrm_sec_ctx *polsec, u32 secid)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_xfrm_state_free(struct xfrm_state *x)
{
}

static inline  __attribute__((always_inline)) int security_xfrm_state_delete(struct xfrm_state *x)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_policy_lookup(struct xfrm_sec_ctx *ctx, u32 fl_secid, u8 dir)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_state_pol_flow_match(struct xfrm_state *x,
   struct xfrm_policy *xp, struct flowi *fl)
{
 return 1;
}

static inline  __attribute__((always_inline)) int security_xfrm_decode_session(struct sk_buff *skb, u32 *secid)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_skb_classify_flow(struct sk_buff *skb, struct flowi *fl)
{
}
# 53 "linux-2.6.26/include/net/sock.h" 2

# 1 "linux-2.6.26/include/linux/filter.h" 1
# 12 "linux-2.6.26/include/linux/filter.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 13 "linux-2.6.26/include/linux/filter.h" 2
# 26 "linux-2.6.26/include/linux/filter.h"
struct sock_filter
{
 __u16 code;
 __u8 jt;
 __u8 jf;
 __u32 k;
};

struct sock_fprog
{
 unsigned short len;
 struct sock_filter *filter;
};
# 130 "linux-2.6.26/include/linux/filter.h"
struct sk_filter
{
 atomic_t refcnt;
 unsigned int len;
 struct rcu_head rcu;
 struct sock_filter insns[0];
};

static inline  __attribute__((always_inline)) unsigned int sk_filter_len(const struct sk_filter *fp)
{
 return fp->len * sizeof(struct sock_filter) + sizeof(*fp);
}

struct sk_buff;
struct sock;

extern int sk_filter(struct sock *sk, struct sk_buff *skb);
extern unsigned int sk_run_filter(struct sk_buff *skb,
      struct sock_filter *filter, int flen);
extern int sk_attach_filter(struct sock_fprog *fprog, struct sock *sk);
extern int sk_detach_filter(struct sock *sk);
extern int sk_chk_filter(struct sock_filter *filter, int flen);
# 55 "linux-2.6.26/include/net/sock.h" 2

# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 57 "linux-2.6.26/include/net/sock.h" 2
# 1 "linux-2.6.26/include/net/dst.h" 1
# 12 "linux-2.6.26/include/net/dst.h"
# 1 "linux-2.6.26/include/linux/rtnetlink.h" 1



# 1 "linux-2.6.26/include/linux/netlink.h" 1
# 30 "linux-2.6.26/include/linux/netlink.h"
struct net;

struct sockaddr_nl
{
 sa_family_t nl_family;
 unsigned short nl_pad;
 __u32 nl_pid;
        __u32 nl_groups;
};

struct nlmsghdr
{
 __u32 nlmsg_len;
 __u16 nlmsg_type;
 __u16 nlmsg_flags;
 __u32 nlmsg_seq;
 __u32 nlmsg_pid;
};
# 97 "linux-2.6.26/include/linux/netlink.h"
struct nlmsgerr
{
 int error;
 struct nlmsghdr msg;
};





struct nl_pktinfo
{
 __u32 group;
};



enum {
 NETLINK_UNCONNECTED = 0,
 NETLINK_CONNECTED,
};
# 128 "linux-2.6.26/include/linux/netlink.h"
struct nlattr
{
 __u16 nla_len;
 __u16 nla_type;
};
# 157 "linux-2.6.26/include/linux/netlink.h"
static inline  __attribute__((always_inline)) struct nlmsghdr *nlmsg_hdr(const struct sk_buff *skb)
{
 return (struct nlmsghdr *)skb->data;
}

struct netlink_skb_parms
{
 struct ucred creds;
 __u32 pid;
 __u32 dst_group;
 kernel_cap_t eff_cap;
 __u32 loginuid;
 __u32 sessionid;
 __u32 sid;
};





extern struct sock *netlink_kernel_create(struct net *net,
       int unit,unsigned int groups,
       void (*input)(struct sk_buff *skb),
       struct mutex *cb_mutex,
       struct module *module);
extern void netlink_kernel_release(struct sock *sk);
extern int netlink_change_ngroups(struct sock *sk, unsigned int groups);
extern void netlink_clear_multicast_users(struct sock *sk, unsigned int group);
extern void netlink_ack(struct sk_buff *in_skb, struct nlmsghdr *nlh, int err);
extern int netlink_has_listeners(struct sock *sk, unsigned int group);
extern int netlink_unicast(struct sock *ssk, struct sk_buff *skb, __u32 pid, int nonblock);
extern int netlink_broadcast(struct sock *ssk, struct sk_buff *skb, __u32 pid,
        __u32 group, gfp_t allocation);
extern void netlink_set_err(struct sock *ssk, __u32 pid, __u32 group, int code);
extern int netlink_register_notifier(struct notifier_block *nb);
extern int netlink_unregister_notifier(struct notifier_block *nb);


struct sock *netlink_getsockbyfilp(struct file *filp);
int netlink_attachskb(struct sock *sk, struct sk_buff *skb, int nonblock,
        long *timeo, struct sock *ssk);
void netlink_detachskb(struct sock *sk, struct sk_buff *skb);
int netlink_sendskb(struct sock *sk, struct sk_buff *skb);
# 216 "linux-2.6.26/include/linux/netlink.h"
struct netlink_callback
{
 struct sk_buff *skb;
 struct nlmsghdr *nlh;
 int (*dump)(struct sk_buff * skb, struct netlink_callback *cb);
 int (*done)(struct netlink_callback *cb);
 int family;
 long args[6];
};

struct netlink_notify
{
 struct net *net;
 int pid;
 int protocol;
};

static __inline__  __attribute__((always_inline)) struct nlmsghdr *
__nlmsg_put(struct sk_buff *skb, u32 pid, u32 seq, int type, int len, int flags)
{
 struct nlmsghdr *nlh;
 int size = ((len)+( ((((int) ( ((sizeof(struct nlmsghdr))+4 -1) & ~(4 -1) )))+4 -1) & ~(4 -1) ));

 nlh = (struct nlmsghdr*)skb_put(skb, ( ((size)+4 -1) & ~(4 -1) ));
 nlh->nlmsg_type = type;
 nlh->nlmsg_len = size;
 nlh->nlmsg_flags = flags;
 nlh->nlmsg_pid = pid;
 nlh->nlmsg_seq = seq;
 memset(((void*)(((char*)nlh) + ((0)+( ((((int) ( ((sizeof(struct nlmsghdr))+4 -1) & ~(4 -1) )))+4 -1) & ~(4 -1) )))) + len, 0, ( ((size)+4 -1) & ~(4 -1) ) - size);
 return nlh;
}
# 257 "linux-2.6.26/include/linux/netlink.h"
extern int netlink_dump_start(struct sock *ssk, struct sk_buff *skb,
         struct nlmsghdr *nlh,
         int (*dump)(struct sk_buff *skb, struct netlink_callback*),
         int (*done)(struct netlink_callback*));




extern void netlink_set_nonroot(int protocol, unsigned flag);
# 5 "linux-2.6.26/include/linux/rtnetlink.h" 2
# 1 "linux-2.6.26/include/linux/if_link.h" 1






struct rtnl_link_stats
{
 __u32 rx_packets;
 __u32 tx_packets;
 __u32 rx_bytes;
 __u32 tx_bytes;
 __u32 rx_errors;
 __u32 tx_errors;
 __u32 rx_dropped;
 __u32 tx_dropped;
 __u32 multicast;
 __u32 collisions;


 __u32 rx_length_errors;
 __u32 rx_over_errors;
 __u32 rx_crc_errors;
 __u32 rx_frame_errors;
 __u32 rx_fifo_errors;
 __u32 rx_missed_errors;


 __u32 tx_aborted_errors;
 __u32 tx_carrier_errors;
 __u32 tx_fifo_errors;
 __u32 tx_heartbeat_errors;
 __u32 tx_window_errors;


 __u32 rx_compressed;
 __u32 tx_compressed;
};


struct rtnl_link_ifmap
{
 __u64 mem_start;
 __u64 mem_end;
 __u64 base_addr;
 __u16 irq;
 __u8 dma;
 __u8 port;
};

enum
{
 IFLA_UNSPEC,
 IFLA_ADDRESS,
 IFLA_BROADCAST,
 IFLA_IFNAME,
 IFLA_MTU,
 IFLA_LINK,
 IFLA_QDISC,
 IFLA_STATS,
 IFLA_COST,

 IFLA_PRIORITY,

 IFLA_MASTER,

 IFLA_WIRELESS,

 IFLA_PROTINFO,

 IFLA_TXQLEN,

 IFLA_MAP,

 IFLA_WEIGHT,

 IFLA_OPERSTATE,
 IFLA_LINKMODE,
 IFLA_LINKINFO,

 IFLA_NET_NS_PID,
 __IFLA_MAX
};
# 124 "linux-2.6.26/include/linux/if_link.h"
enum
{
 IFLA_INET6_UNSPEC,
 IFLA_INET6_FLAGS,
 IFLA_INET6_CONF,
 IFLA_INET6_STATS,
 IFLA_INET6_MCAST,
 IFLA_INET6_CACHEINFO,
 IFLA_INET6_ICMP6STATS,
 __IFLA_INET6_MAX
};



struct ifla_cacheinfo
{
 __u32 max_reasm_len;
 __u32 tstamp;
 __u32 reachable_time;
 __u32 retrans_time;
};

enum
{
 IFLA_INFO_UNSPEC,
 IFLA_INFO_KIND,
 IFLA_INFO_DATA,
 IFLA_INFO_XSTATS,
 __IFLA_INFO_MAX,
};





enum
{
 IFLA_VLAN_UNSPEC,
 IFLA_VLAN_ID,
 IFLA_VLAN_FLAGS,
 IFLA_VLAN_EGRESS_QOS,
 IFLA_VLAN_INGRESS_QOS,
 __IFLA_VLAN_MAX,
};



struct ifla_vlan_flags {
 __u32 flags;
 __u32 mask;
};

enum
{
 IFLA_VLAN_QOS_UNSPEC,
 IFLA_VLAN_QOS_MAPPING,
 __IFLA_VLAN_QOS_MAX
};



struct ifla_vlan_qos_mapping
{
 __u32 from;
 __u32 to;
};
# 6 "linux-2.6.26/include/linux/rtnetlink.h" 2
# 1 "linux-2.6.26/include/linux/if_addr.h" 1





struct ifaddrmsg
{
 __u8 ifa_family;
 __u8 ifa_prefixlen;
 __u8 ifa_flags;
 __u8 ifa_scope;
 __u32 ifa_index;
};
# 22 "linux-2.6.26/include/linux/if_addr.h"
enum
{
 IFA_UNSPEC,
 IFA_ADDRESS,
 IFA_LOCAL,
 IFA_LABEL,
 IFA_BROADCAST,
 IFA_ANYCAST,
 IFA_CACHEINFO,
 IFA_MULTICAST,
 __IFA_MAX,
};
# 48 "linux-2.6.26/include/linux/if_addr.h"
struct ifa_cacheinfo
{
 __u32 ifa_prefered;
 __u32 ifa_valid;
 __u32 cstamp;
 __u32 tstamp;
};
# 7 "linux-2.6.26/include/linux/rtnetlink.h" 2
# 1 "linux-2.6.26/include/linux/neighbour.h" 1





struct ndmsg
{
 __u8 ndm_family;
 __u8 ndm_pad1;
 __u16 ndm_pad2;
 __s32 ndm_ifindex;
 __u16 ndm_state;
 __u8 ndm_flags;
 __u8 ndm_type;
};

enum
{
 NDA_UNSPEC,
 NDA_DST,
 NDA_LLADDR,
 NDA_CACHEINFO,
 NDA_PROBES,
 __NDA_MAX
};
# 57 "linux-2.6.26/include/linux/neighbour.h"
struct nda_cacheinfo
{
 __u32 ndm_confirmed;
 __u32 ndm_used;
 __u32 ndm_updated;
 __u32 ndm_refcnt;
};
# 90 "linux-2.6.26/include/linux/neighbour.h"
struct ndt_stats
{
 __u64 ndts_allocs;
 __u64 ndts_destroys;
 __u64 ndts_hash_grows;
 __u64 ndts_res_failed;
 __u64 ndts_lookups;
 __u64 ndts_hits;
 __u64 ndts_rcv_probes_mcast;
 __u64 ndts_rcv_probes_ucast;
 __u64 ndts_periodic_gc_runs;
 __u64 ndts_forced_gc_runs;
};

enum {
 NDTPA_UNSPEC,
 NDTPA_IFINDEX,
 NDTPA_REFCNT,
 NDTPA_REACHABLE_TIME,
 NDTPA_BASE_REACHABLE_TIME,
 NDTPA_RETRANS_TIME,
 NDTPA_GC_STALETIME,
 NDTPA_DELAY_PROBE_TIME,
 NDTPA_QUEUE_LEN,
 NDTPA_APP_PROBES,
 NDTPA_UCAST_PROBES,
 NDTPA_MCAST_PROBES,
 NDTPA_ANYCAST_DELAY,
 NDTPA_PROXY_DELAY,
 NDTPA_PROXY_QLEN,
 NDTPA_LOCKTIME,
 __NDTPA_MAX
};


struct ndtmsg
{
 __u8 ndtm_family;
 __u8 ndtm_pad1;
 __u16 ndtm_pad2;
};

struct ndt_config
{
 __u16 ndtc_key_len;
 __u16 ndtc_entry_size;
 __u32 ndtc_entries;
 __u32 ndtc_last_flush;
 __u32 ndtc_last_rand;
 __u32 ndtc_hash_rnd;
 __u32 ndtc_hash_mask;
 __u32 ndtc_hash_chain_gc;
 __u32 ndtc_proxy_qlen;
};

enum {
 NDTA_UNSPEC,
 NDTA_NAME,
 NDTA_THRESH1,
 NDTA_THRESH2,
 NDTA_THRESH3,
 NDTA_CONFIG,
 NDTA_PARMS,
 NDTA_STATS,
 NDTA_GC_INTERVAL,
 __NDTA_MAX
};
# 8 "linux-2.6.26/include/linux/rtnetlink.h" 2







enum {
 RTM_BASE = 16,


 RTM_NEWLINK = 16,

 RTM_DELLINK,

 RTM_GETLINK,

 RTM_SETLINK,


 RTM_NEWADDR = 20,

 RTM_DELADDR,

 RTM_GETADDR,


 RTM_NEWROUTE = 24,

 RTM_DELROUTE,

 RTM_GETROUTE,


 RTM_NEWNEIGH = 28,

 RTM_DELNEIGH,

 RTM_GETNEIGH,


 RTM_NEWRULE = 32,

 RTM_DELRULE,

 RTM_GETRULE,


 RTM_NEWQDISC = 36,

 RTM_DELQDISC,

 RTM_GETQDISC,


 RTM_NEWTCLASS = 40,

 RTM_DELTCLASS,

 RTM_GETTCLASS,


 RTM_NEWTFILTER = 44,

 RTM_DELTFILTER,

 RTM_GETTFILTER,


 RTM_NEWACTION = 48,

 RTM_DELACTION,

 RTM_GETACTION,


 RTM_NEWPREFIX = 52,


 RTM_GETMULTICAST = 58,


 RTM_GETANYCAST = 62,


 RTM_NEWNEIGHTBL = 64,

 RTM_GETNEIGHTBL = 66,

 RTM_SETNEIGHTBL,


 RTM_NEWNDUSEROPT = 68,


 RTM_NEWADDRLABEL = 72,

 RTM_DELADDRLABEL,

 RTM_GETADDRLABEL,


 __RTM_MAX,

};
# 124 "linux-2.6.26/include/linux/rtnetlink.h"
struct rtattr
{
 unsigned short rta_len;
 unsigned short rta_type;
};
# 151 "linux-2.6.26/include/linux/rtnetlink.h"
struct rtmsg
{
 unsigned char rtm_family;
 unsigned char rtm_dst_len;
 unsigned char rtm_src_len;
 unsigned char rtm_tos;

 unsigned char rtm_table;
 unsigned char rtm_protocol;
 unsigned char rtm_scope;
 unsigned char rtm_type;

 unsigned rtm_flags;
};



enum
{
 RTN_UNSPEC,
 RTN_UNICAST,
 RTN_LOCAL,
 RTN_BROADCAST,

 RTN_ANYCAST,

 RTN_MULTICAST,
 RTN_BLACKHOLE,
 RTN_UNREACHABLE,
 RTN_PROHIBIT,
 RTN_THROW,
 RTN_NAT,
 RTN_XRESOLVE,
 __RTN_MAX
};
# 226 "linux-2.6.26/include/linux/rtnetlink.h"
enum rt_scope_t
{
 RT_SCOPE_UNIVERSE=0,

 RT_SCOPE_SITE=200,
 RT_SCOPE_LINK=253,
 RT_SCOPE_HOST=254,
 RT_SCOPE_NOWHERE=255
};
# 245 "linux-2.6.26/include/linux/rtnetlink.h"
enum rt_class_t
{
 RT_TABLE_UNSPEC=0,

 RT_TABLE_COMPAT=252,
 RT_TABLE_DEFAULT=253,
 RT_TABLE_MAIN=254,
 RT_TABLE_LOCAL=255,
 RT_TABLE_MAX=0xFFFFFFFF
};




enum rtattr_type_t
{
 RTA_UNSPEC,
 RTA_DST,
 RTA_SRC,
 RTA_IIF,
 RTA_OIF,
 RTA_GATEWAY,
 RTA_PRIORITY,
 RTA_PREFSRC,
 RTA_METRICS,
 RTA_MULTIPATH,
 RTA_PROTOINFO,
 RTA_FLOW,
 RTA_CACHEINFO,
 RTA_SESSION,
 RTA_MP_ALGO,
 RTA_TABLE,
 __RTA_MAX
};
# 294 "linux-2.6.26/include/linux/rtnetlink.h"
struct rtnexthop
{
 unsigned short rtnh_len;
 unsigned char rtnh_flags;
 unsigned char rtnh_hops;
 int rtnh_ifindex;
};
# 321 "linux-2.6.26/include/linux/rtnetlink.h"
struct rta_cacheinfo
{
 __u32 rta_clntref;
 __u32 rta_lastuse;
 __s32 rta_expires;
 __u32 rta_error;
 __u32 rta_used;


 __u32 rta_id;
 __u32 rta_ts;
 __u32 rta_tsage;
};



enum
{
 RTAX_UNSPEC,

 RTAX_LOCK,

 RTAX_MTU,

 RTAX_WINDOW,

 RTAX_RTT,

 RTAX_RTTVAR,

 RTAX_SSTHRESH,

 RTAX_CWND,

 RTAX_ADVMSS,

 RTAX_REORDERING,

 RTAX_HOPLIMIT,

 RTAX_INITCWND,

 RTAX_FEATURES,

 RTAX_RTO_MIN,

 __RTAX_MAX
};
# 377 "linux-2.6.26/include/linux/rtnetlink.h"
struct rta_session
{
 __u8 proto;
 __u8 pad1;
 __u16 pad2;

 union {
  struct {
   __u16 sport;
   __u16 dport;
  } ports;

  struct {
   __u8 type;
   __u8 code;
   __u16 ident;
  } icmpt;

  __u32 spi;
 } u;
};





struct rtgenmsg
{
 unsigned char rtgen_family;
};
# 417 "linux-2.6.26/include/linux/rtnetlink.h"
struct ifinfomsg
{
 unsigned char ifi_family;
 unsigned char __ifi_pad;
 unsigned short ifi_type;
 int ifi_index;
 unsigned ifi_flags;
 unsigned ifi_change;
};





struct prefixmsg
{
 unsigned char prefix_family;
 unsigned char prefix_pad1;
 unsigned short prefix_pad2;
 int prefix_ifindex;
 unsigned char prefix_type;
 unsigned char prefix_len;
 unsigned char prefix_flags;
 unsigned char prefix_pad3;
};

enum
{
 PREFIX_UNSPEC,
 PREFIX_ADDRESS,
 PREFIX_CACHEINFO,
 __PREFIX_MAX
};



struct prefix_cacheinfo
{
 __u32 preferred_time;
 __u32 valid_time;
};






struct tcmsg
{
 unsigned char tcm_family;
 unsigned char tcm__pad1;
 unsigned short tcm__pad2;
 int tcm_ifindex;
 __u32 tcm_handle;
 __u32 tcm_parent;
 __u32 tcm_info;
};

enum
{
 TCA_UNSPEC,
 TCA_KIND,
 TCA_OPTIONS,
 TCA_STATS,
 TCA_XSTATS,
 TCA_RATE,
 TCA_FCNT,
 TCA_STATS2,
 __TCA_MAX
};
# 497 "linux-2.6.26/include/linux/rtnetlink.h"
struct nduseroptmsg
{
 unsigned char nduseropt_family;
 unsigned char nduseropt_pad1;
 unsigned short nduseropt_opts_len;
 int nduseropt_ifindex;
 __u8 nduseropt_icmp_type;
 __u8 nduseropt_icmp_code;
 unsigned short nduseropt_pad2;
 unsigned int nduseropt_pad3;

};

enum
{
 NDUSEROPT_UNSPEC,
 NDUSEROPT_SRCADDR,
 __NDUSEROPT_MAX
};
# 543 "linux-2.6.26/include/linux/rtnetlink.h"
enum rtnetlink_groups {
 RTNLGRP_NONE,

 RTNLGRP_LINK,

 RTNLGRP_NOTIFY,

 RTNLGRP_NEIGH,

 RTNLGRP_TC,

 RTNLGRP_IPV4_IFADDR,

 RTNLGRP_IPV4_MROUTE,

 RTNLGRP_IPV4_ROUTE,

 RTNLGRP_IPV4_RULE,

 RTNLGRP_IPV6_IFADDR,

 RTNLGRP_IPV6_MROUTE,

 RTNLGRP_IPV6_ROUTE,

 RTNLGRP_IPV6_IFINFO,

 RTNLGRP_DECnet_IFADDR,

 RTNLGRP_NOP2,
 RTNLGRP_DECnet_ROUTE,

 RTNLGRP_DECnet_RULE,

 RTNLGRP_NOP4,
 RTNLGRP_IPV6_PREFIX,

 RTNLGRP_IPV6_RULE,

 RTNLGRP_ND_USEROPT,

 __RTNLGRP_MAX
};



struct tcamsg
{
 unsigned char tca_family;
 unsigned char tca__pad1;
 unsigned short tca__pad2;
};
# 606 "linux-2.6.26/include/linux/rtnetlink.h"
static __inline__  __attribute__((always_inline)) int rtattr_strcmp(const struct rtattr *rta, const char *str)
{
 int len = strlen(str) + 1;
 return len > rta->rta_len || memcmp(((void*)(((char*)(rta)) + (( ((sizeof(struct rtattr))+4 -1) & ~(4 -1) ) + (0)))), str, len);
}

extern int rtnetlink_send(struct sk_buff *skb, struct net *net, u32 pid, u32 group, int echo);
extern int rtnl_unicast(struct sk_buff *skb, struct net *net, u32 pid);
extern int rtnl_notify(struct sk_buff *skb, struct net *net, u32 pid, u32 group,
         struct nlmsghdr *nlh, gfp_t flags);
extern void rtnl_set_sk_err(struct net *net, u32 group, int error);
extern int rtnetlink_put_metrics(struct sk_buff *skb, u32 *metrics);
extern int rtnl_put_cacheinfo(struct sk_buff *skb, struct dst_entry *dst,
         u32 id, u32 ts, u32 tsage, long expires,
         u32 error);

extern void __rta_fill(struct sk_buff *skb, int attrtype, int attrlen, const void *data);
# 720 "linux-2.6.26/include/linux/rtnetlink.h"
static inline  __attribute__((always_inline)) struct rtattr *
__rta_reserve(struct sk_buff *skb, int attrtype, int attrlen)
{
 struct rtattr *rta;
 int size = (( ((sizeof(struct rtattr))+4 -1) & ~(4 -1) ) + (attrlen));

 rta = (struct rtattr*)skb_put(skb, ( ((size)+4 -1) & ~(4 -1) ));
 rta->rta_type = attrtype;
 rta->rta_len = size;
 memset(((void*)(((char*)(rta)) + (( ((sizeof(struct rtattr))+4 -1) & ~(4 -1) ) + (0)))) + attrlen, 0, ( ((size)+4 -1) & ~(4 -1) ) - size);
 return rta;
}






extern void rtmsg_ifinfo(int type, struct net_device *dev, unsigned change);


extern void rtnl_lock(void);
extern void rtnl_unlock(void);
extern int rtnl_trylock(void);
extern int rtnl_is_locked(void);

extern void rtnetlink_init(void);
extern void __rtnl_unlock(void);
# 764 "linux-2.6.26/include/linux/rtnetlink.h"
static inline  __attribute__((always_inline)) u32 rtm_get_table(struct rtattr **rta, u8 table)
{
 return ({ if (!rta[RTA_TABLE-1] || ((int)((rta[RTA_TABLE-1])->rta_len) - (( ((sizeof(struct rtattr))+4 -1) & ~(4 -1) ) + (0))) < sizeof(u32)) goto rtattr_failure; *(u32 *) ((void*)(((char*)(rta[RTA_TABLE-1])) + (( ((sizeof(struct rtattr))+4 -1) & ~(4 -1) ) + (0)))); });
rtattr_failure:
 return table;
}
# 13 "linux-2.6.26/include/net/dst.h" 2


# 1 "linux-2.6.26/include/net/neighbour.h" 1
# 19 "linux-2.6.26/include/net/neighbour.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 20 "linux-2.6.26/include/net/neighbour.h" 2







# 1 "linux-2.6.26/include/net/rtnetlink.h" 1




# 1 "linux-2.6.26/include/net/netlink.h" 1
# 168 "linux-2.6.26/include/net/netlink.h"
enum {
 NLA_UNSPEC,
 NLA_U8,
 NLA_U16,
 NLA_U32,
 NLA_U64,
 NLA_STRING,
 NLA_FLAG,
 NLA_MSECS,
 NLA_NESTED,
 NLA_NESTED_COMPAT,
 NLA_NUL_STRING,
 NLA_BINARY,
 __NLA_TYPE_MAX,
};
# 209 "linux-2.6.26/include/net/netlink.h"
struct nla_policy {
 u16 type;
 u16 len;
};






struct nl_info {
 struct nlmsghdr *nlh;
 struct net *nl_net;
 u32 pid;
};

extern int netlink_rcv_skb(struct sk_buff *skb,
     int (*cb)(struct sk_buff *,
        struct nlmsghdr *));
extern int nlmsg_notify(struct sock *sk, struct sk_buff *skb,
         u32 pid, unsigned int group, int report,
         gfp_t flags);

extern int nla_validate(struct nlattr *head, int len, int maxtype,
         const struct nla_policy *policy);
extern int nla_parse(struct nlattr *tb[], int maxtype,
      struct nlattr *head, int len,
      const struct nla_policy *policy);
extern struct nlattr * nla_find(struct nlattr *head, int len, int attrtype);
extern size_t nla_strlcpy(char *dst, const struct nlattr *nla,
        size_t dstsize);
extern int nla_memcpy(void *dest, struct nlattr *src, int count);
extern int nla_memcmp(const struct nlattr *nla, const void *data,
       size_t size);
extern int nla_strcmp(const struct nlattr *nla, const char *str);
extern struct nlattr * __nla_reserve(struct sk_buff *skb, int attrtype,
          int attrlen);
extern void * __nla_reserve_nohdr(struct sk_buff *skb, int attrlen);
extern struct nlattr * nla_reserve(struct sk_buff *skb, int attrtype,
        int attrlen);
extern void * nla_reserve_nohdr(struct sk_buff *skb, int attrlen);
extern void __nla_put(struct sk_buff *skb, int attrtype,
      int attrlen, const void *data);
extern void __nla_put_nohdr(struct sk_buff *skb, int attrlen,
     const void *data);
extern int nla_put(struct sk_buff *skb, int attrtype,
    int attrlen, const void *data);
extern int nla_put_nohdr(struct sk_buff *skb, int attrlen,
          const void *data);
extern int nla_append(struct sk_buff *skb, int attrlen,
       const void *data);
# 269 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) int nlmsg_msg_size(int payload)
{
 return ((int) ( ((sizeof(struct nlmsghdr))+4 -1) & ~(4 -1) )) + payload;
}





static inline  __attribute__((always_inline)) int nlmsg_total_size(int payload)
{
 return ( ((nlmsg_msg_size(payload))+4 -1) & ~(4 -1) );
}





static inline  __attribute__((always_inline)) int nlmsg_padlen(int payload)
{
 return nlmsg_total_size(payload) - nlmsg_msg_size(payload);
}





static inline  __attribute__((always_inline)) void *nlmsg_data(const struct nlmsghdr *nlh)
{
 return (unsigned char *) nlh + ((int) ( ((sizeof(struct nlmsghdr))+4 -1) & ~(4 -1) ));
}





static inline  __attribute__((always_inline)) int nlmsg_len(const struct nlmsghdr *nlh)
{
 return nlh->nlmsg_len - ((int) ( ((sizeof(struct nlmsghdr))+4 -1) & ~(4 -1) ));
}






static inline  __attribute__((always_inline)) struct nlattr *nlmsg_attrdata(const struct nlmsghdr *nlh,
         int hdrlen)
{
 unsigned char *data = nlmsg_data(nlh);
 return (struct nlattr *) (data + ( ((hdrlen)+4 -1) & ~(4 -1) ));
}






static inline  __attribute__((always_inline)) int nlmsg_attrlen(const struct nlmsghdr *nlh, int hdrlen)
{
 return nlmsg_len(nlh) - ( ((hdrlen)+4 -1) & ~(4 -1) );
}






static inline  __attribute__((always_inline)) int nlmsg_ok(const struct nlmsghdr *nlh, int remaining)
{
 return (remaining >= sizeof(struct nlmsghdr) &&
  nlh->nlmsg_len >= sizeof(struct nlmsghdr) &&
  nlh->nlmsg_len <= remaining);
}
# 352 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) struct nlmsghdr *nlmsg_next(struct nlmsghdr *nlh, int *remaining)
{
 int totlen = ( ((nlh->nlmsg_len)+4 -1) & ~(4 -1) );

 *remaining -= totlen;

 return (struct nlmsghdr *) ((unsigned char *) nlh + totlen);
}
# 371 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) int nlmsg_parse(struct nlmsghdr *nlh, int hdrlen,
         struct nlattr *tb[], int maxtype,
         const struct nla_policy *policy)
{
 if (nlh->nlmsg_len < nlmsg_msg_size(hdrlen))
  return -22;

 return nla_parse(tb, maxtype, nlmsg_attrdata(nlh, hdrlen),
    nlmsg_attrlen(nlh, hdrlen), policy);
}
# 390 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) struct nlattr *nlmsg_find_attr(struct nlmsghdr *nlh,
          int hdrlen, int attrtype)
{
 return nla_find(nlmsg_attrdata(nlh, hdrlen),
   nlmsg_attrlen(nlh, hdrlen), attrtype);
}
# 404 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) int nlmsg_validate(struct nlmsghdr *nlh, int hdrlen, int maxtype,
     const struct nla_policy *policy)
{
 if (nlh->nlmsg_len < nlmsg_msg_size(hdrlen))
  return -22;

 return nla_validate(nlmsg_attrdata(nlh, hdrlen),
       nlmsg_attrlen(nlh, hdrlen), maxtype, policy);
}







static inline  __attribute__((always_inline)) int nlmsg_report(struct nlmsghdr *nlh)
{
 return !!(nlh->nlmsg_flags & 8);
}
# 483 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) struct nlmsghdr *nlmsg_put(struct sk_buff *skb, u32 pid, u32 seq,
      int type, int payload, int flags)
{
 if (__builtin_expect(!!(skb_tailroom(skb) < nlmsg_total_size(payload)), 0))
  return ((void *)0);

 return __nlmsg_put(skb, pid, seq, type, payload, flags);
}
# 503 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) struct nlmsghdr *nlmsg_put_answer(struct sk_buff *skb,
      struct netlink_callback *cb,
      int type, int payload,
      int flags)
{
 return nlmsg_put(skb, (*(struct netlink_skb_parms*)&((cb->skb)->cb)).pid, cb->nlh->nlmsg_seq,
    type, payload, flags);
}
# 520 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) struct sk_buff *nlmsg_new(size_t payload, gfp_t flags)
{
 return alloc_skb(nlmsg_total_size(payload), flags);
}
# 536 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) int nlmsg_end(struct sk_buff *skb, struct nlmsghdr *nlh)
{
 nlh->nlmsg_len = skb_tail_pointer(skb) - (unsigned char *)nlh;

 return skb->len;
}







static inline  __attribute__((always_inline)) void *nlmsg_get_pos(struct sk_buff *skb)
{
 return skb_tail_pointer(skb);
}
# 561 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) void nlmsg_trim(struct sk_buff *skb, const void *mark)
{
 if (mark)
  skb_trim(skb, (unsigned char *) mark - skb->data);
}
# 575 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) void nlmsg_cancel(struct sk_buff *skb, struct nlmsghdr *nlh)
{
 nlmsg_trim(skb, nlh);
}





static inline  __attribute__((always_inline)) void nlmsg_free(struct sk_buff *skb)
{
 kfree_skb(skb);
}
# 597 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) int nlmsg_multicast(struct sock *sk, struct sk_buff *skb,
      u32 pid, unsigned int group, gfp_t flags)
{
 int err;

 (*(struct netlink_skb_parms*)&((skb)->cb)).dst_group = group;

 err = netlink_broadcast(sk, skb, pid, group, flags);
 if (err > 0)
  err = 0;

 return err;
}







static inline  __attribute__((always_inline)) int nlmsg_unicast(struct sock *sk, struct sk_buff *skb, u32 pid)
{
 int err;

 err = netlink_unicast(sk, skb, pid, 0x40);
 if (err > 0)
  err = 0;

 return err;
}
# 648 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) int nla_attr_size(int payload)
{
 return ((int) (((sizeof(struct nlattr)) + 4 - 1) & ~(4 - 1))) + payload;
}





static inline  __attribute__((always_inline)) int nla_total_size(int payload)
{
 return (((nla_attr_size(payload)) + 4 - 1) & ~(4 - 1));
}





static inline  __attribute__((always_inline)) int nla_padlen(int payload)
{
 return nla_total_size(payload) - nla_attr_size(payload);
}





static inline  __attribute__((always_inline)) int nla_type(const struct nlattr *nla)
{
 return nla->nla_type & ~((1 << 15) | (1 << 14));
}





static inline  __attribute__((always_inline)) void *nla_data(const struct nlattr *nla)
{
 return (char *) nla + ((int) (((sizeof(struct nlattr)) + 4 - 1) & ~(4 - 1)));
}





static inline  __attribute__((always_inline)) int nla_len(const struct nlattr *nla)
{
 return nla->nla_len - ((int) (((sizeof(struct nlattr)) + 4 - 1) & ~(4 - 1)));
}






static inline  __attribute__((always_inline)) int nla_ok(const struct nlattr *nla, int remaining)
{
 return remaining >= sizeof(*nla) &&
        nla->nla_len >= sizeof(*nla) &&
        nla->nla_len <= remaining;
}
# 718 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) struct nlattr *nla_next(const struct nlattr *nla, int *remaining)
{
 int totlen = (((nla->nla_len) + 4 - 1) & ~(4 - 1));

 *remaining -= totlen;
 return (struct nlattr *) ((char *) nla + totlen);
}
# 733 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) struct nlattr *nla_find_nested(struct nlattr *nla, int attrtype)
{
 return nla_find(nla_data(nla), nla_len(nla), attrtype);
}
# 747 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) int nla_parse_nested(struct nlattr *tb[], int maxtype,
       struct nlattr *nla,
       const struct nla_policy *policy)
{
 return nla_parse(tb, maxtype, nla_data(nla), nla_len(nla), policy);
}
# 768 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) int __nla_parse_nested_compat(struct nlattr *tb[], int maxtype,
         struct nlattr *nla,
         const struct nla_policy *policy,
         int len)
{
 int nested_len = nla_len(nla) - (((len) + 4 - 1) & ~(4 - 1));

 if (nested_len < 0)
  return -22;
 if (nested_len >= nla_attr_size(0))
  return nla_parse(tb, maxtype, nla_data(nla) + (((len) + 4 - 1) & ~(4 - 1)),
     nested_len, policy);
 memset(tb, 0, sizeof(struct nlattr *) * (maxtype + 1));
 return 0;
}
# 793 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) int nla_put_u8(struct sk_buff *skb, int attrtype, u8 value)
{
 return nla_put(skb, attrtype, sizeof(u8), &value);
}







static inline  __attribute__((always_inline)) int nla_put_u16(struct sk_buff *skb, int attrtype, u16 value)
{
 return nla_put(skb, attrtype, sizeof(u16), &value);
}







static inline  __attribute__((always_inline)) int nla_put_u32(struct sk_buff *skb, int attrtype, u32 value)
{
 return nla_put(skb, attrtype, sizeof(u32), &value);
}







static inline  __attribute__((always_inline)) int nla_put_u64(struct sk_buff *skb, int attrtype, u64 value)
{
 return nla_put(skb, attrtype, sizeof(u64), &value);
}







static inline  __attribute__((always_inline)) int nla_put_string(struct sk_buff *skb, int attrtype,
     const char *str)
{
 return nla_put(skb, attrtype, strlen(str) + 1, str);
}






static inline  __attribute__((always_inline)) int nla_put_flag(struct sk_buff *skb, int attrtype)
{
 return nla_put(skb, attrtype, 0, ((void *)0));
}







static inline  __attribute__((always_inline)) int nla_put_msecs(struct sk_buff *skb, int attrtype,
    unsigned long jiffies)
{
 u64 tmp = jiffies_to_msecs(jiffies);
 return nla_put(skb, attrtype, sizeof(u64), &tmp);
}
# 912 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) u32 nla_get_u32(struct nlattr *nla)
{
 return *(u32 *) nla_data(nla);
}





static inline  __attribute__((always_inline)) __be32 nla_get_be32(struct nlattr *nla)
{
 return *(__be32 *) nla_data(nla);
}





static inline  __attribute__((always_inline)) u16 nla_get_u16(struct nlattr *nla)
{
 return *(u16 *) nla_data(nla);
}





static inline  __attribute__((always_inline)) __be16 nla_get_be16(struct nlattr *nla)
{
 return *(__be16 *) nla_data(nla);
}





static inline  __attribute__((always_inline)) __le16 nla_get_le16(struct nlattr *nla)
{
 return *(__le16 *) nla_data(nla);
}





static inline  __attribute__((always_inline)) u8 nla_get_u8(struct nlattr *nla)
{
 return *(u8 *) nla_data(nla);
}





static inline  __attribute__((always_inline)) u64 nla_get_u64(struct nlattr *nla)
{
 u64 tmp;

 nla_memcpy(&tmp, nla, sizeof(tmp));

 return tmp;
}





static inline  __attribute__((always_inline)) int nla_get_flag(struct nlattr *nla)
{
 return !!nla;
}







static inline  __attribute__((always_inline)) unsigned long nla_get_msecs(struct nlattr *nla)
{
 u64 msecs = nla_get_u64(nla);

 return msecs_to_jiffies((unsigned long) msecs);
}
# 1004 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) struct nlattr *nla_nest_start(struct sk_buff *skb, int attrtype)
{
 struct nlattr *start = (struct nlattr *)skb_tail_pointer(skb);

 if (nla_put(skb, attrtype, 0, ((void *)0)) < 0)
  return ((void *)0);

 return start;
}
# 1024 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) int nla_nest_end(struct sk_buff *skb, struct nlattr *start)
{
 start->nla_len = skb_tail_pointer(skb) - (unsigned char *)start;
 return skb->len;
}
# 1042 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) struct nlattr *nla_nest_compat_start(struct sk_buff *skb,
         int attrtype, int attrlen,
         const void *data)
{
 struct nlattr *start = (struct nlattr *)skb_tail_pointer(skb);

 if (nla_put(skb, attrtype, attrlen, data) < 0)
  return ((void *)0);
 if (nla_nest_start(skb, attrtype) == ((void *)0)) {
  nlmsg_trim(skb, start);
  return ((void *)0);
 }
 return start;
}
# 1067 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) int nla_nest_compat_end(struct sk_buff *skb, struct nlattr *start)
{
 struct nlattr *nest = (void *)start + ( ((start->nla_len)+4 -1) & ~(4 -1) );

 start->nla_len = skb_tail_pointer(skb) - (unsigned char *)start;
 return nla_nest_end(skb, nest);
}
# 1083 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) void nla_nest_cancel(struct sk_buff *skb, struct nlattr *start)
{
 nlmsg_trim(skb, start);
}
# 1100 "linux-2.6.26/include/net/netlink.h"
static inline  __attribute__((always_inline)) int nla_validate_nested(struct nlattr *start, int maxtype,
          const struct nla_policy *policy)
{
 return nla_validate(nla_data(start), nla_len(start), maxtype, policy);
}
# 6 "linux-2.6.26/include/net/rtnetlink.h" 2

typedef int (*rtnl_doit_func)(struct sk_buff *, struct nlmsghdr *, void *);
typedef int (*rtnl_dumpit_func)(struct sk_buff *, struct netlink_callback *);

extern int __rtnl_register(int protocol, int msgtype,
    rtnl_doit_func, rtnl_dumpit_func);
extern void rtnl_register(int protocol, int msgtype,
         rtnl_doit_func, rtnl_dumpit_func);
extern int rtnl_unregister(int protocol, int msgtype);
extern void rtnl_unregister_all(int protocol);

static inline  __attribute__((always_inline)) int rtnl_msg_family(struct nlmsghdr *nlh)
{
 if (nlmsg_len(nlh) >= sizeof(struct rtgenmsg))
  return ((struct rtgenmsg *) nlmsg_data(nlh))->rtgen_family;
 else
  return 0;
}
# 45 "linux-2.6.26/include/net/rtnetlink.h"
struct rtnl_link_ops {
 struct list_head list;

 const char *kind;

 size_t priv_size;
 void (*setup)(struct net_device *dev);

 int maxtype;
 const struct nla_policy *policy;
 int (*validate)(struct nlattr *tb[],
         struct nlattr *data[]);

 int (*newlink)(struct net_device *dev,
        struct nlattr *tb[],
        struct nlattr *data[]);
 int (*changelink)(struct net_device *dev,
           struct nlattr *tb[],
           struct nlattr *data[]);
 void (*dellink)(struct net_device *dev);

 size_t (*get_size)(const struct net_device *dev);
 int (*fill_info)(struct sk_buff *skb,
          const struct net_device *dev);

 size_t (*get_xstats_size)(const struct net_device *dev);
 int (*fill_xstats)(struct sk_buff *skb,
            const struct net_device *dev);
};

extern int __rtnl_link_register(struct rtnl_link_ops *ops);
extern void __rtnl_link_unregister(struct rtnl_link_ops *ops);
extern void rtnl_kill_links(struct net *net, struct rtnl_link_ops *ops);

extern int rtnl_link_register(struct rtnl_link_ops *ops);
extern void rtnl_link_unregister(struct rtnl_link_ops *ops);

extern struct net_device *rtnl_create_link(struct net *net, char *ifname,
  const struct rtnl_link_ops *ops, struct nlattr *tb[]);
typedef  const struct nla_policy    _GLOBAL_202_T; extern  _GLOBAL_202_T  _GLOBAL_0_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_1_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_2_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_3_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_4_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_5_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_6_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_7_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_8_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_9_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_10_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_11_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_12_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_13_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_14_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_15_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_16_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_17_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_18_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_19_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_20_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_21_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_22_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_23_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_24_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_25_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_26_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_27_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_28_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_29_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_30_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_31_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_32_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_33_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_34_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_35_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_36_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_37_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_38_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_39_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_40_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_41_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_42_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_43_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_44_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_45_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_46_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_47_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_48_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; extern  _GLOBAL_202_T  _GLOBAL_49_ifla_policy_I [ ( __IFLA_MAX - 1  )  + 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ifla_policy_I) *_GLOBAL_ifla_policy_15_A[NUM_STACKS];      
# 28 "linux-2.6.26/include/net/neighbour.h" 2
# 37 "linux-2.6.26/include/net/neighbour.h"
struct neighbour;

struct neigh_parms
{



 struct net_device *dev;
 struct neigh_parms *next;
 int (*neigh_setup)(struct neighbour *);
 void (*neigh_cleanup)(struct neighbour *);
 struct neigh_table *tbl;

 void *sysctl_table;

 int dead;
 atomic_t refcnt;
 struct rcu_head rcu_head;

 int base_reachable_time;
 int retrans_time;
 int gc_staletime;
 int reachable_time;
 int delay_probe_time;

 int queue_len;
 int ucast_probes;
 int app_probes;
 int mcast_probes;
 int anycast_delay;
 int proxy_delay;
 int proxy_qlen;
 int locktime;
};

struct neigh_statistics
{
 unsigned long allocs;
 unsigned long destroys;
 unsigned long hash_grows;

 unsigned long res_failed;

 unsigned long lookups;
 unsigned long hits;

 unsigned long rcv_probes_mcast;
 unsigned long rcv_probes_ucast;

 unsigned long periodic_gc_runs;
 unsigned long forced_gc_runs;
};
# 97 "linux-2.6.26/include/net/neighbour.h"
struct neighbour
{
 struct neighbour *next;
 struct neigh_table *tbl;
 struct neigh_parms *parms;
 struct net_device *dev;
 unsigned long used;
 unsigned long confirmed;
 unsigned long updated;
 __u8 flags;
 __u8 nud_state;
 __u8 type;
 __u8 dead;
 atomic_t probes;
 rwlock_t lock;
 unsigned char ha[(((32)+((typeof(32))(sizeof(unsigned long))-1))&~((typeof(32))(sizeof(unsigned long))-1))];
 struct hh_cache *hh;
 atomic_t refcnt;
 int (*output)(struct sk_buff *skb);
 struct sk_buff_head arp_queue;
 struct timer_list timer;
 struct neigh_ops *ops;
 u8 primary_key[0];
};

struct neigh_ops
{
 int family;
 void (*solicit)(struct neighbour *, struct sk_buff*);
 void (*error_report)(struct neighbour *, struct sk_buff*);
 int (*output)(struct sk_buff*);
 int (*connected_output)(struct sk_buff*);
 int (*hh_output)(struct sk_buff*);
 int (*queue_xmit)(struct sk_buff*);
};

struct pneigh_entry
{
 struct pneigh_entry *next;



 struct net_device *dev;
 u8 flags;
 u8 key[0];
};






struct neigh_table
{
 struct neigh_table *next;
 int family;
 int entry_size;
 int key_len;
 __u32 (*hash)(const void *pkey, const struct net_device *);
 int (*constructor)(struct neighbour *);
 int (*pconstructor)(struct pneigh_entry *);
 void (*pdestructor)(struct pneigh_entry *);
 void (*proxy_redo)(struct sk_buff *skb);
 char *id;
 struct neigh_parms parms;

 int gc_interval;
 int gc_thresh1;
 int gc_thresh2;
 int gc_thresh3;
 unsigned long last_flush;
 struct timer_list gc_timer;
 struct timer_list proxy_timer;
 struct sk_buff_head proxy_queue;
 atomic_t entries;
 rwlock_t lock;
 unsigned long last_rand;
 struct kmem_cache *kmem_cachep;
 struct neigh_statistics *stats;
 struct neighbour **hash_buckets;
 unsigned int hash_mask;
 __u32 hash_rnd;
 unsigned int hash_chain_gc;
 struct pneigh_entry **phash_buckets;



};
# 193 "linux-2.6.26/include/net/neighbour.h"
extern void neigh_table_init(struct neigh_table *tbl);
extern void neigh_table_init_no_netlink(struct neigh_table *tbl);
extern int neigh_table_clear(struct neigh_table *tbl);
extern struct neighbour * neigh_lookup(struct neigh_table *tbl,
          const void *pkey,
          struct net_device *dev);
extern struct neighbour * neigh_lookup_nodev(struct neigh_table *tbl,
         struct net *net,
         const void *pkey);
extern struct neighbour * neigh_create(struct neigh_table *tbl,
          const void *pkey,
          struct net_device *dev);
extern void neigh_destroy(struct neighbour *neigh);
extern int __neigh_event_send(struct neighbour *neigh, struct sk_buff *skb);
extern int neigh_update(struct neighbour *neigh, const u8 *lladdr, u8 new,
          u32 flags);
extern void neigh_changeaddr(struct neigh_table *tbl, struct net_device *dev);
extern int neigh_ifdown(struct neigh_table *tbl, struct net_device *dev);
extern int neigh_resolve_output(struct sk_buff *skb);
extern int neigh_connected_output(struct sk_buff *skb);
extern int neigh_compat_output(struct sk_buff *skb);
extern struct neighbour *neigh_event_ns(struct neigh_table *tbl,
      u8 *lladdr, void *saddr,
      struct net_device *dev);

extern struct neigh_parms *neigh_parms_alloc(struct net_device *dev, struct neigh_table *tbl);
extern void neigh_parms_release(struct neigh_table *tbl, struct neigh_parms *parms);

static inline 
__attribute__((always_inline)) struct net *neigh_parms_net(const struct neigh_parms *parms)
{



 return &global_init_net[get_stack_id()];

}

extern unsigned long neigh_rand_reach_time(unsigned long base);

extern void pneigh_enqueue(struct neigh_table *tbl, struct neigh_parms *p,
            struct sk_buff *skb);
extern struct pneigh_entry *pneigh_lookup(struct neigh_table *tbl, struct net *net, const void *key, struct net_device *dev, int creat);
extern struct pneigh_entry *__pneigh_lookup(struct neigh_table *tbl,
       struct net *net,
       const void *key,
       struct net_device *dev);
extern int pneigh_delete(struct neigh_table *tbl, struct net *net, const void *key, struct net_device *dev);

static inline 
__attribute__((always_inline)) struct net *pneigh_net(const struct pneigh_entry *pneigh)
{



 return &global_init_net[get_stack_id()];

}

extern void neigh_app_ns(struct neighbour *n);
extern void neigh_for_each(struct neigh_table *tbl, void (*cb)(struct neighbour *, void *), void *cookie);
extern void __neigh_for_each_release(struct neigh_table *tbl, int (*cb)(struct neighbour *));
extern void pneigh_for_each(struct neigh_table *tbl, void (*cb)(struct pneigh_entry *));

struct neigh_seq_state {
 struct seq_net_private p;
 struct neigh_table *tbl;
 void *(*neigh_sub_iter)(struct neigh_seq_state *state,
    struct neighbour *n, loff_t *pos);
 unsigned int bucket;
 unsigned int flags;



};
extern void *neigh_seq_start(struct seq_file *, loff_t *, struct neigh_table *, unsigned int);
extern void *neigh_seq_next(struct seq_file *, void *, loff_t *);
extern void neigh_seq_stop(struct seq_file *, void *);

extern int neigh_sysctl_register(struct net_device *dev,
            struct neigh_parms *p,
            int p_id, int pdev_id,
            char *p_name,
            proc_handler *proc_handler,
            ctl_handler *strategy);
extern void neigh_sysctl_unregister(struct neigh_parms *p);

static inline  __attribute__((always_inline)) void __neigh_parms_put(struct neigh_parms *parms)
{
 atomic_dec(&parms->refcnt);
}

static inline  __attribute__((always_inline)) struct neigh_parms *neigh_parms_clone(struct neigh_parms *parms)
{
 atomic_inc(&parms->refcnt);
 return parms;
}





static inline  __attribute__((always_inline)) void neigh_release(struct neighbour *neigh)
{
 if (atomic_dec_and_test(&neigh->refcnt))
  neigh_destroy(neigh);
}

static inline  __attribute__((always_inline)) struct neighbour * neigh_clone(struct neighbour *neigh)
{
 if (neigh)
  atomic_inc(&neigh->refcnt);
 return neigh;
}



static inline  __attribute__((always_inline)) void neigh_confirm(struct neighbour *neigh)
{
 if (neigh)
  neigh->confirmed = global_jiffies[get_stack_id()];
}

static inline  __attribute__((always_inline)) int neigh_event_send(struct neighbour *neigh, struct sk_buff *skb)
{
 neigh->used = global_jiffies[get_stack_id()];
 if (!(neigh->nud_state&((0x80|0x40|0x02)|0x08|0x10)))
  return __neigh_event_send(neigh, skb);
 return 0;
}

static inline  __attribute__((always_inline)) int neigh_hh_output(struct hh_cache *hh, struct sk_buff *skb)
{
 unsigned seq;
 int hh_len;

 do {
  int hh_alen;

  seq = read_seqbegin(&hh->hh_lock);
  hh_len = hh->hh_len;
  hh_alen = (((hh_len)+(16 -1))&~(16 - 1));
  memcpy(skb->data - hh_alen, hh->hh_data, hh_alen);
 } while (read_seqretry(&hh->hh_lock, seq));

 skb_push(skb, hh_len);
 return hh->hh_output(skb);
}

static inline  __attribute__((always_inline)) struct neighbour *
__neigh_lookup(struct neigh_table *tbl, const void *pkey, struct net_device *dev, int creat)
{
 struct neighbour *n = neigh_lookup(tbl, pkey, dev);

 if (n || !creat)
  return n;

 n = neigh_create(tbl, pkey, dev);
 return IS_ERR(n) ? ((void *)0) : n;
}

static inline  __attribute__((always_inline)) struct neighbour *
__neigh_lookup_errno(struct neigh_table *tbl, const void *pkey,
  struct net_device *dev)
{
 struct neighbour *n = neigh_lookup(tbl, pkey, dev);

 if (n)
  return n;

 return neigh_create(tbl, pkey, dev);
}

struct neighbour_cb {
 unsigned long sched_next;
 unsigned int flags;
};
# 16 "linux-2.6.26/include/net/dst.h" 2
# 36 "linux-2.6.26/include/net/dst.h"
struct sk_buff;

struct dst_entry
{
 struct rcu_head rcu_head;
 struct dst_entry *child;
 struct net_device *dev;
 short error;
 short obsolete;
 int flags;




 unsigned long expires;

 unsigned short header_len;
 unsigned short trailer_len;

 unsigned int rate_tokens;
 unsigned long rate_last;

 struct dst_entry *path;

 struct neighbour *neighbour;
 struct hh_cache *hh;
 struct xfrm_state *xfrm;

 int (*input)(struct sk_buff*);
 int (*output)(struct sk_buff*);

 struct dst_ops *ops;

 u32 metrics[(__RTAX_MAX - 1)];
# 79 "linux-2.6.26/include/net/dst.h"
 atomic_t __refcnt;
 int __use;
 unsigned long lastuse;
 union {
  struct dst_entry *next;
  struct rtable *rt_next;
  struct rt6_info *rt6_next;
  struct dn_route *dn_next;
 };
};


struct dst_ops
{
 unsigned short family;
 __be16 protocol;
 unsigned gc_thresh;

 int (*gc)(struct dst_ops *ops);
 struct dst_entry * (*check)(struct dst_entry *, __u32 cookie);
 void (*destroy)(struct dst_entry *);
 void (*ifdown)(struct dst_entry *,
       struct net_device *dev, int how);
 struct dst_entry * (*negative_advice)(struct dst_entry *);
 void (*link_failure)(struct sk_buff *);
 void (*update_pmtu)(struct dst_entry *dst, u32 mtu);
 int (*local_out)(struct sk_buff *skb);
 int entry_size;

 atomic_t entries;
 struct kmem_cache *kmem_cachep;
 struct net *dst_net;
};



static inline  __attribute__((always_inline)) u32
dst_metric(const struct dst_entry *dst, int metric)
{
 return dst->metrics[metric-1];
}

static inline  __attribute__((always_inline)) u32 dst_mtu(const struct dst_entry *dst)
{
 u32 mtu = dst_metric(dst, RTAX_MTU);



 __asm__ __volatile__("": : :"memory");
 return mtu;
}

static inline  __attribute__((always_inline)) u32
dst_allfrag(const struct dst_entry *dst)
{
 int ret = dst_metric(dst, RTAX_FEATURES) & 0x00000008;

 __asm__ __volatile__("": : :"memory");
 return ret;
}

static inline  __attribute__((always_inline)) int
dst_metric_locked(struct dst_entry *dst, int metric)
{
 return dst_metric(dst, RTAX_LOCK) & (1<<metric);
}

static inline  __attribute__((always_inline)) void dst_hold(struct dst_entry * dst)
{
 atomic_inc(&dst->__refcnt);
}

static inline  __attribute__((always_inline)) void dst_use(struct dst_entry *dst, unsigned long time)
{
 dst_hold(dst);
 dst->__use++;
 dst->lastuse = time;
}

static inline 
__attribute__((always_inline)) struct dst_entry * dst_clone(struct dst_entry * dst)
{
 if (dst)
  atomic_inc(&dst->__refcnt);
 return dst;
}

extern void dst_release(struct dst_entry *dst);





static inline  __attribute__((always_inline)) struct dst_entry *dst_pop(struct dst_entry *dst)
{
 struct dst_entry *child = dst_clone(dst->child);

 dst_release(dst);
 return child;
}

extern int dst_discard(struct sk_buff *skb);
extern void * dst_alloc(struct dst_ops * ops);
extern void __dst_free(struct dst_entry * dst);
extern struct dst_entry *dst_destroy(struct dst_entry * dst);

static inline  __attribute__((always_inline)) void dst_free(struct dst_entry * dst)
{
 if (dst->obsolete > 1)
  return;
 if (!((&dst->__refcnt)->counter)) {
  dst = dst_destroy(dst);
  if (!dst)
   return;
 }
 __dst_free(dst);
}

static inline  __attribute__((always_inline)) void dst_rcu_free(struct rcu_head *head)
{
 struct dst_entry *dst = ({ const typeof( ((struct dst_entry *)0)->rcu_head ) *__mptr = (head); (struct dst_entry *)( (char *)__mptr - __builtin_offsetof(struct dst_entry,rcu_head) );});
 dst_free(dst);
}

static inline  __attribute__((always_inline)) void dst_confirm(struct dst_entry *dst)
{
 if (dst)
  neigh_confirm(dst->neighbour);
}

static inline  __attribute__((always_inline)) void dst_negative_advice(struct dst_entry **dst_p)
{
 struct dst_entry * dst = *dst_p;
 if (dst && dst->ops->negative_advice)
  *dst_p = dst->ops->negative_advice(dst);
}

static inline  __attribute__((always_inline)) void dst_link_failure(struct sk_buff *skb)
{
 struct dst_entry * dst = skb->dst;
 if (dst && dst->ops && dst->ops->link_failure)
  dst->ops->link_failure(skb);
}

static inline  __attribute__((always_inline)) void dst_set_expires(struct dst_entry *dst, int timeout)
{
 unsigned long expires = global_jiffies[get_stack_id()] + timeout;

 if (expires == 0)
  expires = 1;

 if (dst->expires == 0 || (({ unsigned long __dummy; typeof(dst->expires) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ({ unsigned long __dummy; typeof(expires) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ((long)(expires) - (long)(dst->expires) < 0)))
  dst->expires = expires;
}


static inline  __attribute__((always_inline)) int dst_output(struct sk_buff *skb)
{
 return skb->dst->output(skb);
}


static inline  __attribute__((always_inline)) int dst_input(struct sk_buff *skb)
{
 int err;

 for (;;) {
  err = skb->dst->input(skb);

  if (__builtin_expect(!!(err == 0), 1))
   return err;

  if (__builtin_expect(!!(err != 4), 0))
   return err;
 }
}

static inline  __attribute__((always_inline)) struct dst_entry *dst_check(struct dst_entry *dst, u32 cookie)
{
 if (dst->obsolete)
  dst = dst->ops->check(dst, cookie);
 return dst;
}

extern void dst_init(void);


enum {
 XFRM_LOOKUP_WAIT = 1 << 0,
 XFRM_LOOKUP_ICMP = 1 << 1,
};

struct flowi;

static inline  __attribute__((always_inline)) int xfrm_lookup(struct dst_entry **dst_p, struct flowi *fl,
         struct sock *sk, int flags)
{
 return 0;
}
static inline  __attribute__((always_inline)) int __xfrm_lookup(struct dst_entry **dst_p, struct flowi *fl,
    struct sock *sk, int flags)
{
 return 0;
}
# 58 "linux-2.6.26/include/net/sock.h" 2
# 83 "linux-2.6.26/include/net/sock.h"
typedef struct {
 spinlock_t slock;
 int owned;
 wait_queue_head_t wq;
# 96 "linux-2.6.26/include/net/sock.h"
} socket_lock_t;

struct sock;
struct proto;
struct net;
# 118 "linux-2.6.26/include/net/sock.h"
struct sock_common {
 unsigned short skc_family;
 volatile unsigned char skc_state;
 unsigned char skc_reuse;
 int skc_bound_dev_if;
 struct hlist_node skc_node;
 struct hlist_node skc_bind_node;
 atomic_t skc_refcnt;
 unsigned int skc_hash;
 struct proto *skc_prot;



};
# 198 "linux-2.6.26/include/net/sock.h"
struct sock {




 struct sock_common __sk_common;
# 214 "linux-2.6.26/include/net/sock.h"
 unsigned char sk_shutdown : 2,
    sk_no_check : 2,
    sk_userlocks : 4;
 unsigned char sk_protocol;
 unsigned short sk_type;
 int sk_rcvbuf;
 socket_lock_t sk_lock;





 struct {
  struct sk_buff *head;
  struct sk_buff *tail;
 } sk_backlog;
 wait_queue_head_t *sk_sleep;
 struct dst_entry *sk_dst_cache;
 struct xfrm_policy *sk_policy[2];
 rwlock_t sk_dst_lock;
 atomic_t sk_rmem_alloc;
 atomic_t sk_wmem_alloc;
 atomic_t sk_omem_alloc;
 int sk_sndbuf;
 struct sk_buff_head sk_receive_queue;
 struct sk_buff_head sk_write_queue;
 struct sk_buff_head sk_async_wait_queue;
 int sk_wmem_queued;
 int sk_forward_alloc;
 gfp_t sk_allocation;
 int sk_route_caps;
 int sk_gso_type;
 unsigned int sk_gso_max_size;
 int sk_rcvlowat;
 unsigned long sk_flags;
 unsigned long sk_lingertime;
 struct sk_buff_head sk_error_queue;
 struct proto *sk_prot_creator;
 rwlock_t sk_callback_lock;
 int sk_err,
    sk_err_soft;
 atomic_t sk_drops;
 unsigned short sk_ack_backlog;
 unsigned short sk_max_ack_backlog;
 __u32 sk_priority;
 struct ucred sk_peercred;
 long sk_rcvtimeo;
 long sk_sndtimeo;
 struct sk_filter *sk_filter;
 void *sk_protinfo;
 struct timer_list sk_timer;
 ktime_t sk_stamp;
 struct socket *sk_socket;
 void *sk_user_data;
 struct page *sk_sndmsg_page;
 struct sk_buff *sk_send_head;
 __u32 sk_sndmsg_off;
 int sk_write_pending;
 void *sk_security;
 __u32 sk_mark;

 void (*sk_state_change)(struct sock *sk);
 void (*sk_data_ready)(struct sock *sk, int bytes);
 void (*sk_write_space)(struct sock *sk);
 void (*sk_error_report)(struct sock *sk);
   int (*sk_backlog_rcv)(struct sock *sk,
        struct sk_buff *skb);
 void (*sk_destruct)(struct sock *sk);
};




static inline  __attribute__((always_inline)) struct sock *__sk_head(const struct hlist_head *head)
{
 return ({ const typeof( ((struct sock *)0)->__sk_common.skc_node ) *__mptr = (head->first); (struct sock *)( (char *)__mptr - __builtin_offsetof(struct sock,__sk_common.skc_node) );});
}

static inline  __attribute__((always_inline)) struct sock *sk_head(const struct hlist_head *head)
{
 return hlist_empty(head) ? ((void *)0) : __sk_head(head);
}

static inline  __attribute__((always_inline)) struct sock *sk_next(const struct sock *sk)
{
 return sk->__sk_common.skc_node.next ?
  ({ const typeof( ((struct sock *)0)->__sk_common.skc_node ) *__mptr = (sk->__sk_common.skc_node.next); (struct sock *)( (char *)__mptr - __builtin_offsetof(struct sock,__sk_common.skc_node) );}) : ((void *)0);
}

static inline  __attribute__((always_inline)) int sk_unhashed(const struct sock *sk)
{
 return hlist_unhashed(&sk->__sk_common.skc_node);
}

static inline  __attribute__((always_inline)) int sk_hashed(const struct sock *sk)
{
 return !sk_unhashed(sk);
}

static __inline__  __attribute__((always_inline)) void sk_node_init(struct hlist_node *node)
{
 node->pprev = ((void *)0);
}

static __inline__  __attribute__((always_inline)) void __sk_del_node(struct sock *sk)
{
 __hlist_del(&sk->__sk_common.skc_node);
}

static __inline__  __attribute__((always_inline)) int __sk_del_node_init(struct sock *sk)
{
 if (sk_hashed(sk)) {
  __sk_del_node(sk);
  sk_node_init(&sk->__sk_common.skc_node);
  return 1;
 }
 return 0;
}







static inline  __attribute__((always_inline)) void sock_hold(struct sock *sk)
{
 atomic_inc(&sk->__sk_common.skc_refcnt);
}




static inline  __attribute__((always_inline)) void __sock_put(struct sock *sk)
{
 atomic_dec(&sk->__sk_common.skc_refcnt);
}

static __inline__  __attribute__((always_inline)) int sk_del_node_init(struct sock *sk)
{
 int rc = __sk_del_node_init(sk);

 if (rc) {

  ({ int __ret_warn_on = !!(((&sk->__sk_common.skc_refcnt)->counter) == 1); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_on_slowpath("linux-2.6.26/include/net/sock.h", 358); __builtin_expect(!!(__ret_warn_on), 0); });
  __sock_put(sk);
 }
 return rc;
}

static __inline__  __attribute__((always_inline)) void __sk_add_node(struct sock *sk, struct hlist_head *list)
{
 hlist_add_head(&sk->__sk_common.skc_node, list);
}

static __inline__  __attribute__((always_inline)) void sk_add_node(struct sock *sk, struct hlist_head *list)
{
 sock_hold(sk);
 __sk_add_node(sk, list);
}

static __inline__  __attribute__((always_inline)) void __sk_del_bind_node(struct sock *sk)
{
 __hlist_del(&sk->__sk_common.skc_bind_node);
}

static __inline__  __attribute__((always_inline)) void sk_add_bind_node(struct sock *sk,
     struct hlist_head *list)
{
 hlist_add_head(&sk->__sk_common.skc_bind_node, list);
}
# 400 "linux-2.6.26/include/net/sock.h"
enum sock_flags {
 SOCK_DEAD,
 SOCK_DONE,
 SOCK_URGINLINE,
 SOCK_KEEPOPEN,
 SOCK_LINGER,
 SOCK_DESTROY,
 SOCK_BROADCAST,
 SOCK_TIMESTAMP,
 SOCK_ZAPPED,
 SOCK_USE_WRITE_QUEUE,
 SOCK_DBG,
 SOCK_RCVTSTAMP,
 SOCK_RCVTSTAMPNS,
 SOCK_LOCALROUTE,
 SOCK_QUEUE_SHRUNK,
};

static inline  __attribute__((always_inline)) void sock_copy_flags(struct sock *nsk, struct sock *osk)
{
 nsk->sk_flags = osk->sk_flags;
}

static inline  __attribute__((always_inline)) void sock_set_flag(struct sock *sk, enum sock_flags flag)
{
 __set_bit(flag, &sk->sk_flags);
}

static inline  __attribute__((always_inline)) void sock_reset_flag(struct sock *sk, enum sock_flags flag)
{
 __clear_bit(flag, &sk->sk_flags);
}

static inline  __attribute__((always_inline)) int sock_flag(struct sock *sk, enum sock_flags flag)
{
 return (__builtin_constant_p((flag)) ? constant_test_bit((flag), (&sk->sk_flags)) : variable_test_bit((flag), (&sk->sk_flags)));
}

static inline  __attribute__((always_inline)) void sk_acceptq_removed(struct sock *sk)
{
 sk->sk_ack_backlog--;
}

static inline  __attribute__((always_inline)) void sk_acceptq_added(struct sock *sk)
{
 sk->sk_ack_backlog++;
}

static inline  __attribute__((always_inline)) int sk_acceptq_is_full(struct sock *sk)
{
 return sk->sk_ack_backlog > sk->sk_max_ack_backlog;
}




static inline  __attribute__((always_inline)) int sk_stream_min_wspace(struct sock *sk)
{
 return sk->sk_wmem_queued >> 1;
}

static inline  __attribute__((always_inline)) int sk_stream_wspace(struct sock *sk)
{
 return sk->sk_sndbuf - sk->sk_wmem_queued;
}

extern void sk_stream_write_space(struct sock *sk);

static inline  __attribute__((always_inline)) int sk_stream_memory_free(struct sock *sk)
{
 return sk->sk_wmem_queued < sk->sk_sndbuf;
}


static inline  __attribute__((always_inline)) void sk_add_backlog(struct sock *sk, struct sk_buff *skb)
{
 if (!sk->sk_backlog.tail) {
  sk->sk_backlog.head = sk->sk_backlog.tail = skb;
 } else {
  sk->sk_backlog.tail->next = skb;
  sk->sk_backlog.tail = skb;
 }
 skb->next = ((void *)0);
}
# 497 "linux-2.6.26/include/net/sock.h"
extern int sk_stream_wait_connect(struct sock *sk, long *timeo_p);
extern int sk_stream_wait_memory(struct sock *sk, long *timeo_p);
extern void sk_stream_wait_close(struct sock *sk, long timeo_p);
extern int sk_stream_error(struct sock *sk, int flags, int err);
extern void sk_stream_kill_queues(struct sock *sk);

extern int sk_wait_data(struct sock *sk, long *timeo);

struct request_sock_ops;
struct timewait_sock_ops;
struct inet_hashinfo;
struct raw_hashinfo;





struct proto {
 void (*close)(struct sock *sk,
     long timeout);
 int (*connect)(struct sock *sk,
            struct sockaddr *uaddr,
     int addr_len);
 int (*disconnect)(struct sock *sk, int flags);

 struct sock * (*accept) (struct sock *sk, int flags, int *err);

 int (*ioctl)(struct sock *sk, int cmd,
      unsigned long arg);
 int (*init)(struct sock *sk);
 int (*destroy)(struct sock *sk);
 void (*shutdown)(struct sock *sk, int how);
 int (*setsockopt)(struct sock *sk, int level,
     int optname, char *optval,
     int optlen);
 int (*getsockopt)(struct sock *sk, int level,
     int optname, char *optval,
     int *option);
 int (*compat_setsockopt)(struct sock *sk,
     int level,
     int optname, char *optval,
     int optlen);
 int (*compat_getsockopt)(struct sock *sk,
     int level,
     int optname, char *optval,
     int *option);
 int (*sendmsg)(struct kiocb *iocb, struct sock *sk,
        struct msghdr *msg, size_t len);
 int (*recvmsg)(struct kiocb *iocb, struct sock *sk,
        struct msghdr *msg,
     size_t len, int noblock, int flags,
     int *addr_len);
 int (*sendpage)(struct sock *sk, struct page *page,
     int offset, size_t size, int flags);
 int (*bind)(struct sock *sk,
     struct sockaddr *uaddr, int addr_len);

 int (*backlog_rcv) (struct sock *sk,
      struct sk_buff *skb);


 void (*hash)(struct sock *sk);
 void (*unhash)(struct sock *sk);
 int (*get_port)(struct sock *sk, unsigned short snum);







 void (*enter_memory_pressure)(void);
 atomic_t *memory_allocated;
 atomic_t *sockets_allocated;






 int *memory_pressure;
 int *sysctl_mem;
 int *sysctl_wmem;
 int *sysctl_rmem;
 int max_header;

 struct kmem_cache *slab;
 unsigned int obj_size;

 atomic_t *orphan_count;

 struct request_sock_ops *rsk_prot;
 struct timewait_sock_ops *twsk_prot;

 union {
  struct inet_hashinfo *hashinfo;
  struct hlist_head *udp_hash;
  struct raw_hashinfo *raw_hash;
 } h;

 struct module *owner;

 char name[32];

 struct list_head node;



};

extern int proto_register(struct proto *prot, int alloc_slab);
extern void proto_unregister(struct proto *prot);
# 641 "linux-2.6.26/include/net/sock.h"
static void inline  __attribute__((always_inline)) sock_prot_inuse_add(struct net *net, struct proto *prot,
  int inc)
{
}






static inline  __attribute__((always_inline)) void __sk_prot_rehash(struct sock *sk)
{
 sk->__sk_common.skc_prot->unhash(sk);
 sk->__sk_common.skc_prot->hash(sk);
}
# 673 "linux-2.6.26/include/net/sock.h"
struct sock_iocb {
 struct list_head list;

 int flags;
 int size;
 struct socket *sock;
 struct sock *sk;
 struct scm_cookie *scm;
 struct msghdr *msg, async_msg;
 struct kiocb *kiocb;
};

static inline  __attribute__((always_inline)) struct sock_iocb *kiocb_to_siocb(struct kiocb *iocb)
{
 return (struct sock_iocb *)iocb->private;
}

static inline  __attribute__((always_inline)) struct kiocb *siocb_to_kiocb(struct sock_iocb *si)
{
 return si->kiocb;
}

struct socket_alloc {
 struct socket socket;
 struct inode vfs_inode;
};

static inline  __attribute__((always_inline)) struct socket *SOCKET_I(struct inode *inode)
{
 return &({ const typeof( ((struct socket_alloc *)0)->vfs_inode ) *__mptr = (inode); (struct socket_alloc *)( (char *)__mptr - __builtin_offsetof(struct socket_alloc,vfs_inode) );})->socket;
}

static inline  __attribute__((always_inline)) struct inode *SOCK_INODE(struct socket *socket)
{
 return &({ const typeof( ((struct socket_alloc *)0)->socket ) *__mptr = (socket); (struct socket_alloc *)( (char *)__mptr - __builtin_offsetof(struct socket_alloc,socket) );})->vfs_inode;
}




extern int __sk_mem_schedule(struct sock *sk, int size, int kind);
extern void __sk_mem_reclaim(struct sock *sk);






static inline  __attribute__((always_inline)) int sk_mem_pages(int amt)
{
 return (amt + ((int)((1UL) << 12)) - 1) >> ( __builtin_constant_p(((int)((1UL) << 12))) ? ( (((int)((1UL) << 12))) < 1 ? ____ilog2_NaN() : (((int)((1UL) << 12))) & (1ULL << 63) ? 63 : (((int)((1UL) << 12))) & (1ULL << 62) ? 62 : (((int)((1UL) << 12))) & (1ULL << 61) ? 61 : (((int)((1UL) << 12))) & (1ULL << 60) ? 60 : (((int)((1UL) << 12))) & (1ULL << 59) ? 59 : (((int)((1UL) << 12))) & (1ULL << 58) ? 58 : (((int)((1UL) << 12))) & (1ULL << 57) ? 57 : (((int)((1UL) << 12))) & (1ULL << 56) ? 56 : (((int)((1UL) << 12))) & (1ULL << 55) ? 55 : (((int)((1UL) << 12))) & (1ULL << 54) ? 54 : (((int)((1UL) << 12))) & (1ULL << 53) ? 53 : (((int)((1UL) << 12))) & (1ULL << 52) ? 52 : (((int)((1UL) << 12))) & (1ULL << 51) ? 51 : (((int)((1UL) << 12))) & (1ULL << 50) ? 50 : (((int)((1UL) << 12))) & (1ULL << 49) ? 49 : (((int)((1UL) << 12))) & (1ULL << 48) ? 48 : (((int)((1UL) << 12))) & (1ULL << 47) ? 47 : (((int)((1UL) << 12))) & (1ULL << 46) ? 46 : (((int)((1UL) << 12))) & (1ULL << 45) ? 45 : (((int)((1UL) << 12))) & (1ULL << 44) ? 44 : (((int)((1UL) << 12))) & (1ULL << 43) ? 43 : (((int)((1UL) << 12))) & (1ULL << 42) ? 42 : (((int)((1UL) << 12))) & (1ULL << 41) ? 41 : (((int)((1UL) << 12))) & (1ULL << 40) ? 40 : (((int)((1UL) << 12))) & (1ULL << 39) ? 39 : (((int)((1UL) << 12))) & (1ULL << 38) ? 38 : (((int)((1UL) << 12))) & (1ULL << 37) ? 37 : (((int)((1UL) << 12))) & (1ULL << 36) ? 36 : (((int)((1UL) << 12))) & (1ULL << 35) ? 35 : (((int)((1UL) << 12))) & (1ULL << 34) ? 34 : (((int)((1UL) << 12))) & (1ULL << 33) ? 33 : (((int)((1UL) << 12))) & (1ULL << 32) ? 32 : (((int)((1UL) << 12))) & (1ULL << 31) ? 31 : (((int)((1UL) << 12))) & (1ULL << 30) ? 30 : (((int)((1UL) << 12))) & (1ULL << 29) ? 29 : (((int)((1UL) << 12))) & (1ULL << 28) ? 28 : (((int)((1UL) << 12))) & (1ULL << 27) ? 27 : (((int)((1UL) << 12))) & (1ULL << 26) ? 26 : (((int)((1UL) << 12))) & (1ULL << 25) ? 25 : (((int)((1UL) << 12))) & (1ULL << 24) ? 24 : (((int)((1UL) << 12))) & (1ULL << 23) ? 23 : (((int)((1UL) << 12))) & (1ULL << 22) ? 22 : (((int)((1UL) << 12))) & (1ULL << 21) ? 21 : (((int)((1UL) << 12))) & (1ULL << 20) ? 20 : (((int)((1UL) << 12))) & (1ULL << 19) ? 19 : (((int)((1UL) << 12))) & (1ULL << 18) ? 18 : (((int)((1UL) << 12))) & (1ULL << 17) ? 17 : (((int)((1UL) << 12))) & (1ULL << 16) ? 16 : (((int)((1UL) << 12))) & (1ULL << 15) ? 15 : (((int)((1UL) << 12))) & (1ULL << 14) ? 14 : (((int)((1UL) << 12))) & (1ULL << 13) ? 13 : (((int)((1UL) << 12))) & (1ULL << 12) ? 12 : (((int)((1UL) << 12))) & (1ULL << 11) ? 11 : (((int)((1UL) << 12))) & (1ULL << 10) ? 10 : (((int)((1UL) << 12))) & (1ULL << 9) ? 9 : (((int)((1UL) << 12))) & (1ULL << 8) ? 8 : (((int)((1UL) << 12))) & (1ULL << 7) ? 7 : (((int)((1UL) << 12))) & (1ULL << 6) ? 6 : (((int)((1UL) << 12))) & (1ULL << 5) ? 5 : (((int)((1UL) << 12))) & (1ULL << 4) ? 4 : (((int)((1UL) << 12))) & (1ULL << 3) ? 3 : (((int)((1UL) << 12))) & (1ULL << 2) ? 2 : (((int)((1UL) << 12))) & (1ULL << 1) ? 1 : (((int)((1UL) << 12))) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof(((int)((1UL) << 12))) <= 4) ? __ilog2_u32(((int)((1UL) << 12))) : __ilog2_u64(((int)((1UL) << 12))) );
}

static inline  __attribute__((always_inline)) int sk_has_account(struct sock *sk)
{

 return !!sk->__sk_common.skc_prot->memory_allocated;
}

static inline  __attribute__((always_inline)) int sk_wmem_schedule(struct sock *sk, int size)
{
 if (!sk_has_account(sk))
  return 1;
 return size <= sk->sk_forward_alloc ||
  __sk_mem_schedule(sk, size, 0);
}

static inline  __attribute__((always_inline)) int sk_rmem_schedule(struct sock *sk, int size)
{
 if (!sk_has_account(sk))
  return 1;
 return size <= sk->sk_forward_alloc ||
  __sk_mem_schedule(sk, size, 1);
}

static inline  __attribute__((always_inline)) void sk_mem_reclaim(struct sock *sk)
{
 if (!sk_has_account(sk))
  return;
 if (sk->sk_forward_alloc >= ((int)((1UL) << 12)))
  __sk_mem_reclaim(sk);
}

static inline  __attribute__((always_inline)) void sk_mem_reclaim_partial(struct sock *sk)
{
 if (!sk_has_account(sk))
  return;
 if (sk->sk_forward_alloc > ((int)((1UL) << 12)))
  __sk_mem_reclaim(sk);
}

static inline  __attribute__((always_inline)) void sk_mem_charge(struct sock *sk, int size)
{
 if (!sk_has_account(sk))
  return;
 sk->sk_forward_alloc -= size;
}

static inline  __attribute__((always_inline)) void sk_mem_uncharge(struct sock *sk, int size)
{
 if (!sk_has_account(sk))
  return;
 sk->sk_forward_alloc += size;
}

static inline  __attribute__((always_inline)) void sk_wmem_free_skb(struct sock *sk, struct sk_buff *skb)
{
 skb_truesize_check(skb);
 sock_set_flag(sk, SOCK_QUEUE_SHRUNK);
 sk->sk_wmem_queued -= skb->truesize;
 sk_mem_uncharge(sk, skb->truesize);
 __kfree_skb(skb);
}
# 821 "linux-2.6.26/include/net/sock.h"
extern void lock_sock_nested(struct sock *sk, int subclass);

static inline  __attribute__((always_inline)) void lock_sock(struct sock *sk)
{
 lock_sock_nested(sk, 0);
}

extern void release_sock(struct sock *sk);
# 837 "linux-2.6.26/include/net/sock.h"
extern struct sock *sk_alloc(struct net *net, int family,
       gfp_t priority,
       struct proto *prot);
extern void sk_free(struct sock *sk);
extern void sk_release_kernel(struct sock *sk);
extern struct sock *sk_clone(const struct sock *sk,
       const gfp_t priority);

extern struct sk_buff *sock_wmalloc(struct sock *sk,
           unsigned long size, int force,
           gfp_t priority);
extern struct sk_buff *sock_rmalloc(struct sock *sk,
           unsigned long size, int force,
           gfp_t priority);
extern void sock_wfree(struct sk_buff *skb);
extern void sock_rfree(struct sk_buff *skb);

extern int sock_setsockopt(struct socket *sock, int level,
      int op, char *optval,
      int optlen);

extern int sock_getsockopt(struct socket *sock, int level,
      int op, char *optval,
      int *optlen);
extern struct sk_buff *sock_alloc_send_skb(struct sock *sk,
           unsigned long size,
           int noblock,
           int *errcode);
extern void *sock_kmalloc(struct sock *sk, int size,
     gfp_t priority);
extern void sock_kfree_s(struct sock *sk, void *mem, int size);
extern void sk_send_sigurg(struct sock *sk);





extern int sock_no_bind(struct socket *,
          struct sockaddr *, int);
extern int sock_no_connect(struct socket *,
      struct sockaddr *, int, int);
extern int sock_no_socketpair(struct socket *,
         struct socket *);
extern int sock_no_accept(struct socket *,
            struct socket *, int);
extern int sock_no_getname(struct socket *,
      struct sockaddr *, int *, int);
extern unsigned int sock_no_poll(struct file *, struct socket *,
          struct poll_table_struct *);
extern int sock_no_ioctl(struct socket *, unsigned int,
           unsigned long);
extern int sock_no_listen(struct socket *, int);
extern int sock_no_shutdown(struct socket *, int);
extern int sock_no_getsockopt(struct socket *, int , int,
         char *, int *);
extern int sock_no_setsockopt(struct socket *, int, int,
         char *, int);
extern int sock_no_sendmsg(struct kiocb *, struct socket *,
      struct msghdr *, size_t);
extern int sock_no_recvmsg(struct kiocb *, struct socket *,
      struct msghdr *, size_t, int);
extern int sock_no_mmap(struct file *file,
          struct socket *sock,
          struct vm_area_struct *vma);
extern ssize_t sock_no_sendpage(struct socket *sock,
      struct page *page,
      int offset, size_t size,
      int flags);





extern int sock_common_getsockopt(struct socket *sock, int level, int optname,
      char *optval, int *optlen);
extern int sock_common_recvmsg(struct kiocb *iocb, struct socket *sock,
          struct msghdr *msg, size_t size, int flags);
extern int sock_common_setsockopt(struct socket *sock, int level, int optname,
      char *optval, int optlen);
extern int compat_sock_common_getsockopt(struct socket *sock, int level,
  int optname, char *optval, int *optlen);
extern int compat_sock_common_setsockopt(struct socket *sock, int level,
  int optname, char *optval, int optlen);

extern void sk_common_release(struct sock *sk);






extern void sock_init_data(struct socket *sock, struct sock *sk);
# 938 "linux-2.6.26/include/net/sock.h"
static inline  __attribute__((always_inline)) void sk_filter_release(struct sk_filter *fp)
{
 if (atomic_dec_and_test(&fp->refcnt))
  kfree(fp);
}

static inline  __attribute__((always_inline)) void sk_filter_uncharge(struct sock *sk, struct sk_filter *fp)
{
 unsigned int size = sk_filter_len(fp);

 atomic_sub(size, &sk->sk_omem_alloc);
 sk_filter_release(fp);
}

static inline  __attribute__((always_inline)) void sk_filter_charge(struct sock *sk, struct sk_filter *fp)
{
 atomic_inc(&fp->refcnt);
 atomic_add(sk_filter_len(fp), &sk->sk_omem_alloc);
}
# 984 "linux-2.6.26/include/net/sock.h"
static inline  __attribute__((always_inline)) void sock_put(struct sock *sk)
{
 if (atomic_dec_and_test(&sk->__sk_common.skc_refcnt))
  sk_free(sk);
}

extern int sk_receive_skb(struct sock *sk, struct sk_buff *skb,
     const int nested);
# 1000 "linux-2.6.26/include/net/sock.h"
static inline  __attribute__((always_inline)) void sock_orphan(struct sock *sk)
{
 do { local_bh_disable(); do { do { } while (0); (void)0; (void)(&sk->sk_callback_lock); } while (0); } while (0);
 sock_set_flag(sk, SOCK_DEAD);
 sk->sk_socket = ((void *)0);
 sk->sk_sleep = ((void *)0);
 do { do { } while (0); local_bh_enable(); (void)0; (void)(&sk->sk_callback_lock); } while (0);
}

static inline  __attribute__((always_inline)) void sock_graft(struct sock *sk, struct socket *parent)
{
 do { local_bh_disable(); do { do { } while (0); (void)0; (void)(&sk->sk_callback_lock); } while (0); } while (0);
 sk->sk_sleep = &parent->wait;
 parent->sk = sk;
 sk->sk_socket = parent;
 security_sock_graft(sk, parent);
 do { do { } while (0); local_bh_enable(); (void)0; (void)(&sk->sk_callback_lock); } while (0);
}

extern int sock_i_uid(struct sock *sk);
extern unsigned long sock_i_ino(struct sock *sk);

static inline  __attribute__((always_inline)) struct dst_entry *
__sk_dst_get(struct sock *sk)
{
 return sk->sk_dst_cache;
}

static inline  __attribute__((always_inline)) struct dst_entry *
sk_dst_get(struct sock *sk)
{
 struct dst_entry *dst;

 do { do { } while (0); (void)0; (void)(&sk->sk_dst_lock); } while (0);
 dst = sk->sk_dst_cache;
 if (dst)
  dst_hold(dst);
 do { do { } while (0); (void)0; (void)(&sk->sk_dst_lock); } while (0);
 return dst;
}

static inline  __attribute__((always_inline)) void
__sk_dst_set(struct sock *sk, struct dst_entry *dst)
{
 struct dst_entry *old_dst;

 old_dst = sk->sk_dst_cache;
 sk->sk_dst_cache = dst;
 dst_release(old_dst);
}

static inline  __attribute__((always_inline)) void
sk_dst_set(struct sock *sk, struct dst_entry *dst)
{
 do { do { } while (0); (void)0; (void)(&sk->sk_dst_lock); } while (0);
 __sk_dst_set(sk, dst);
 do { do { } while (0); (void)0; (void)(&sk->sk_dst_lock); } while (0);
}

static inline  __attribute__((always_inline)) void
__sk_dst_reset(struct sock *sk)
{
 struct dst_entry *old_dst;

 old_dst = sk->sk_dst_cache;
 sk->sk_dst_cache = ((void *)0);
 dst_release(old_dst);
}

static inline  __attribute__((always_inline)) void
sk_dst_reset(struct sock *sk)
{
 do { do { } while (0); (void)0; (void)(&sk->sk_dst_lock); } while (0);
 __sk_dst_reset(sk);
 do { do { } while (0); (void)0; (void)(&sk->sk_dst_lock); } while (0);
}

extern struct dst_entry *__sk_dst_check(struct sock *sk, u32 cookie);

extern struct dst_entry *sk_dst_check(struct sock *sk, u32 cookie);

static inline  __attribute__((always_inline)) int sk_can_gso(const struct sock *sk)
{
 return net_gso_ok(sk->sk_route_caps, sk->sk_gso_type);
}

extern void sk_setup_caps(struct sock *sk, struct dst_entry *dst);

static inline  __attribute__((always_inline)) int skb_copy_to_page(struct sock *sk, char *from,
       struct sk_buff *skb, struct page *page,
       int off, int copy)
{
 if (skb->ip_summed == 0) {
  int err = 0;
  __wsum csum = csum_partial_copy_from_user(from,
           lowmem_page_address(page) + off,
           copy, 0, &err);
  if (err)
   return err;
  skb->csum = csum_block_add(skb->csum, csum, skb->len);
 } else if (copy_from_user(lowmem_page_address(page) + off, from, copy))
  return -14;

 skb->len += copy;
 skb->data_len += copy;
 skb->truesize += copy;
 sk->sk_wmem_queued += copy;
 sk_mem_charge(sk, copy);
 return 0;
}
# 1120 "linux-2.6.26/include/net/sock.h"
static inline  __attribute__((always_inline)) void skb_set_owner_w(struct sk_buff *skb, struct sock *sk)
{
 sock_hold(sk);
 skb->sk = sk;
 skb->destructor = sock_wfree;
 atomic_add(skb->truesize, &sk->sk_wmem_alloc);
}

static inline  __attribute__((always_inline)) void skb_set_owner_r(struct sk_buff *skb, struct sock *sk)
{
 skb->sk = sk;
 skb->destructor = sock_rfree;
 atomic_add(skb->truesize, &sk->sk_rmem_alloc);
 sk_mem_charge(sk, skb->truesize);
}

extern void sk_reset_timer(struct sock *sk, struct timer_list* timer,
      unsigned long expires);

extern void sk_stop_timer(struct sock *sk, struct timer_list* timer);

extern int sock_queue_rcv_skb(struct sock *sk, struct sk_buff *skb);

static inline  __attribute__((always_inline)) int sock_queue_err_skb(struct sock *sk, struct sk_buff *skb)
{



 if (((&sk->sk_rmem_alloc)->counter) + skb->truesize >=
     (unsigned)sk->sk_rcvbuf)
  return -12;
 skb_set_owner_r(skb, sk);
 skb_queue_tail(&sk->sk_error_queue, skb);
 if (!sock_flag(sk, SOCK_DEAD))
  sk->sk_data_ready(sk, skb->len);
 return 0;
}





static inline  __attribute__((always_inline)) int sock_error(struct sock *sk)
{
 int err;
 if (__builtin_expect(!!(!sk->sk_err), 1))
  return 0;
 err = ((__typeof__(*(&sk->sk_err)))__xchg((unsigned long)(0), (&sk->sk_err), sizeof(*(&sk->sk_err))));
 return -err;
}

static inline  __attribute__((always_inline)) unsigned long sock_wspace(struct sock *sk)
{
 int amt = 0;

 if (!(sk->sk_shutdown & 2)) {
  amt = sk->sk_sndbuf - ((&sk->sk_wmem_alloc)->counter);
  if (amt < 0)
   amt = 0;
 }
 return amt;
}

static inline  __attribute__((always_inline)) void sk_wake_async(struct sock *sk, int how, int band)
{
 if (sk->sk_socket && sk->sk_socket->fasync_list)
  sock_wake_async(sk->sk_socket, how, band);
}




static inline  __attribute__((always_inline)) void sk_stream_moderate_sndbuf(struct sock *sk)
{
 if (!(sk->sk_userlocks & 1)) {
  sk->sk_sndbuf = ({ typeof(sk->sk_sndbuf) _min1 = (sk->sk_sndbuf); typeof(sk->sk_wmem_queued >> 1) _min2 = (sk->sk_wmem_queued >> 1); (void) (&_min1 == &_min2); _min1 < _min2 ? _min1 : _min2; });
  sk->sk_sndbuf = ({ typeof(sk->sk_sndbuf) _max1 = (sk->sk_sndbuf); typeof(2048) _max2 = (2048); (void) (&_max1 == &_max2); _max1 > _max2 ? _max1 : _max2; });
 }
}

struct sk_buff *sk_stream_alloc_skb(struct sock *sk, int size, gfp_t gfp);

static inline  __attribute__((always_inline)) struct page *sk_stream_alloc_page(struct sock *sk)
{
 struct page *page = ((void *)0);

 page = alloc_pages_node((((void)(0),0)), sk->sk_allocation, 0);
 if (!page) {
  sk->__sk_common.skc_prot->enter_memory_pressure();
  sk_stream_moderate_sndbuf(sk);
 }
 return page;
}




static inline  __attribute__((always_inline)) int sock_writeable(const struct sock *sk)
{
 return ((&sk->sk_wmem_alloc)->counter) < (sk->sk_sndbuf >> 1);
}

static inline  __attribute__((always_inline)) gfp_t gfp_any(void)
{
 return (((current_thread_info()->preempt_count) & ~0x10000000) != 0) ? ((( gfp_t)0x20u)) : ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u));
}

static inline  __attribute__((always_inline)) long sock_rcvtimeo(const struct sock *sk, int noblock)
{
 return noblock ? 0 : sk->sk_rcvtimeo;
}

static inline  __attribute__((always_inline)) long sock_sndtimeo(const struct sock *sk, int noblock)
{
 return noblock ? 0 : sk->sk_sndtimeo;
}

static inline  __attribute__((always_inline)) int sock_rcvlowat(const struct sock *sk, int waitall, int len)
{
 return (waitall ? len : ({ int __min1 = (sk->sk_rcvlowat); int __min2 = (len); __min1 < __min2 ? __min1: __min2; })) ? : 1;
}




static inline  __attribute__((always_inline)) int sock_intr_errno(long timeo)
{
 return timeo == ((long)(~0UL>>1)) ? -512 : -4;
}

extern void __sock_recv_timestamp(struct msghdr *msg, struct sock *sk,
 struct sk_buff *skb);

static __inline__  __attribute__((always_inline)) void
sock_recv_timestamp(struct msghdr *msg, struct sock *sk, struct sk_buff *skb)
{
 ktime_t kt = skb->tstamp;

 if (sock_flag(sk, SOCK_RCVTSTAMP))
  __sock_recv_timestamp(msg, sk, skb);
 else
  sk->sk_stamp = kt;
}
# 1283 "linux-2.6.26/include/net/sock.h"
static inline  __attribute__((always_inline)) void sk_eat_skb(struct sock *sk, struct sk_buff *skb, int copied_early)
{
 __skb_unlink(skb, &sk->sk_receive_queue);
 __kfree_skb(skb);
}


static inline 
__attribute__((always_inline)) struct net *sock_net(const struct sock *sk)
{



 return &global_init_net[get_stack_id()];

}

static inline 
__attribute__((always_inline)) void sock_net_set(struct sock *sk, struct net *net)
{



}







static inline  __attribute__((always_inline)) void sk_change_net(struct sock *sk, struct net *net)
{
 put_net(sock_net(sk));
 sock_net_set(sk, hold_net(net));
}

extern void sock_enable_timestamp(struct sock *sk);
extern int sock_get_timestamp(struct sock *, struct timeval *);
extern int sock_get_timestampns(struct sock *, struct timespec *);




typedef  int  _GLOBAL_203_T; extern  _GLOBAL_203_T  global_net_msg_warn[NUM_STACKS];   
# 1358 "linux-2.6.26/include/net/sock.h"
typedef  __u32  _GLOBAL_204_T; extern  _GLOBAL_204_T  global_sysctl_wmem_max[NUM_STACKS];   
typedef  __u32  _GLOBAL_205_T; extern  _GLOBAL_205_T  global_sysctl_rmem_max[NUM_STACKS];   

extern void sk_init(void);

typedef  int  _GLOBAL_206_T; extern  _GLOBAL_206_T  global_sysctl_optmem_max[NUM_STACKS];   

typedef  __u32  _GLOBAL_207_T; extern  _GLOBAL_207_T  global_sysctl_wmem_default[NUM_STACKS];   
typedef  __u32  _GLOBAL_208_T; extern  _GLOBAL_208_T  global_sysctl_rmem_default[NUM_STACKS];   
# 20 "linux-2.6.26/net/sysctl_net.c" 2


# 1 "linux-2.6.26/include/net/ip.h" 1
# 26 "linux-2.6.26/include/net/ip.h"
# 1 "linux-2.6.26/include/linux/ip.h" 1
# 85 "linux-2.6.26/include/linux/ip.h"
struct iphdr {

 __u8 ihl:4,
  version:4;






 __u8 tos;
 __be16 tot_len;
 __be16 id;
 __be16 frag_off;
 __u8 ttl;
 __u8 protocol;
 __sum16 check;
 __be32 saddr;
 __be32 daddr;

};




static inline  __attribute__((always_inline)) struct iphdr *ip_hdr(const struct sk_buff *skb)
{
 return (struct iphdr *)skb_network_header(skb);
}

static inline  __attribute__((always_inline)) struct iphdr *ipip_hdr(const struct sk_buff *skb)
{
 return (struct iphdr *)skb_transport_header(skb);
}


struct ip_auth_hdr {
 __u8 nexthdr;
 __u8 hdrlen;
 __be16 reserved;
 __be32 spi;
 __be32 seq_no;
 __u8 auth_data[0];
};

struct ip_esp_hdr {
 __be32 spi;
 __be32 seq_no;
 __u8 enc_data[0];
};

struct ip_comp_hdr {
 __u8 nexthdr;
 __u8 flags;
 __be16 cpi;
};

struct ip_beet_phdr {
 __u8 nexthdr;
 __u8 hdrlen;
 __u8 padlen;
 __u8 reserved;
};
# 27 "linux-2.6.26/include/net/ip.h" 2
# 1 "linux-2.6.26/include/linux/in.h" 1
# 25 "linux-2.6.26/include/linux/in.h"
enum {
  IPPROTO_IP = 0,
  IPPROTO_ICMP = 1,
  IPPROTO_IGMP = 2,
  IPPROTO_IPIP = 4,
  IPPROTO_TCP = 6,
  IPPROTO_EGP = 8,
  IPPROTO_PUP = 12,
  IPPROTO_UDP = 17,
  IPPROTO_IDP = 22,
  IPPROTO_DCCP = 33,
  IPPROTO_RSVP = 46,
  IPPROTO_GRE = 47,

  IPPROTO_IPV6 = 41,

  IPPROTO_ESP = 50,
  IPPROTO_AH = 51,
  IPPROTO_BEETPH = 94,
  IPPROTO_PIM = 103,

  IPPROTO_COMP = 108,
  IPPROTO_SCTP = 132,
  IPPROTO_UDPLITE = 136,

  IPPROTO_RAW = 255,
  IPPROTO_MAX
};



struct in_addr {
 __be32 s_addr;
};
# 115 "linux-2.6.26/include/linux/in.h"
struct ip_mreq
{
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};

struct ip_mreqn
{
 struct in_addr imr_multiaddr;
 struct in_addr imr_address;
 int imr_ifindex;
};

struct ip_mreq_source {
 __be32 imr_multiaddr;
 __be32 imr_interface;
 __be32 imr_sourceaddr;
};

struct ip_msfilter {
 __be32 imsf_multiaddr;
 __be32 imsf_interface;
 __u32 imsf_fmode;
 __u32 imsf_numsrc;
 __be32 imsf_slist[1];
};





struct group_req
{
 __u32 gr_interface;
 struct __kernel_sockaddr_storage gr_group;
};

struct group_source_req
{
 __u32 gsr_interface;
 struct __kernel_sockaddr_storage gsr_group;
 struct __kernel_sockaddr_storage gsr_source;
};

struct group_filter
{
 __u32 gf_interface;
 struct __kernel_sockaddr_storage gf_group;
 __u32 gf_fmode;
 __u32 gf_numsrc;
 struct __kernel_sockaddr_storage gf_slist[1];
};





struct in_pktinfo
{
 int ipi_ifindex;
 struct in_addr ipi_spec_dst;
 struct in_addr ipi_addr;
};



struct sockaddr_in {
  sa_family_t sin_family;
  __be16 sin_port;
  struct in_addr sin_addr;


  unsigned char __pad[16 - sizeof(short int) -
   sizeof(unsigned short int) - sizeof(struct in_addr)];
};
# 250 "linux-2.6.26/include/linux/in.h"
static inline  __attribute__((always_inline)) bool ipv4_is_loopback(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xff000000)))) == (( __be32)__fswab32((0x7f000000)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_multicast(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xf0000000)))) == (( __be32)__fswab32((0xe0000000)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_local_multicast(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xffffff00)))) == (( __be32)__fswab32((0xe0000000)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_lbcast(__be32 addr)
{

 return addr == (( __be32)__fswab32((((unsigned long int) 0xffffffff))));
}

static inline  __attribute__((always_inline)) bool ipv4_is_zeronet(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xff000000)))) == (( __be32)__fswab32((0x00000000)));
}



static inline  __attribute__((always_inline)) bool ipv4_is_private_10(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xff000000)))) == (( __be32)__fswab32((0x0a000000)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_private_172(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xfff00000)))) == (( __be32)__fswab32((0xac100000)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_private_192(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xffff0000)))) == (( __be32)__fswab32((0xc0a80000)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_linklocal_169(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xffff0000)))) == (( __be32)__fswab32((0xa9fe0000)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_anycast_6to4(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xffffff00)))) == (( __be32)__fswab32((0xc0586300)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_test_192(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xffffff00)))) == (( __be32)__fswab32((0xc0000200)));
}

static inline  __attribute__((always_inline)) bool ipv4_is_test_198(__be32 addr)
{
 return (addr & (( __be32)__fswab32((0xfffe0000)))) == (( __be32)__fswab32((0xc6120000)));
}
# 28 "linux-2.6.26/include/net/ip.h" 2


# 1 "linux-2.6.26/include/net/inet_sock.h" 1
# 22 "linux-2.6.26/include/net/inet_sock.h"
# 1 "linux-2.6.26/include/linux/jhash.h" 1
# 44 "linux-2.6.26/include/linux/jhash.h"
static inline  __attribute__((always_inline)) u32 jhash(const void *key, u32 length, u32 initval)
{
 u32 a, b, c, len;
 const u8 *k = key;

 len = length;
 a = b = 0x9e3779b9;
 c = initval;

 while (len >= 12) {
  a += (k[0] +((u32)k[1]<<8) +((u32)k[2]<<16) +((u32)k[3]<<24));
  b += (k[4] +((u32)k[5]<<8) +((u32)k[6]<<16) +((u32)k[7]<<24));
  c += (k[8] +((u32)k[9]<<8) +((u32)k[10]<<16)+((u32)k[11]<<24));

  { a -= b; a -= c; a ^= (c>>13); b -= c; b -= a; b ^= (a<<8); c -= a; c -= b; c ^= (b>>13); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<16); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>3); b -= c; b -= a; b ^= (a<<10); c -= a; c -= b; c ^= (b>>15); };

  k += 12;
  len -= 12;
 }

 c += length;
 switch (len) {
 case 11: c += ((u32)k[10]<<24);
 case 10: c += ((u32)k[9]<<16);
 case 9 : c += ((u32)k[8]<<8);
 case 8 : b += ((u32)k[7]<<24);
 case 7 : b += ((u32)k[6]<<16);
 case 6 : b += ((u32)k[5]<<8);
 case 5 : b += k[4];
 case 4 : a += ((u32)k[3]<<24);
 case 3 : a += ((u32)k[2]<<16);
 case 2 : a += ((u32)k[1]<<8);
 case 1 : a += k[0];
 };

 { a -= b; a -= c; a ^= (c>>13); b -= c; b -= a; b ^= (a<<8); c -= a; c -= b; c ^= (b>>13); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<16); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>3); b -= c; b -= a; b ^= (a<<10); c -= a; c -= b; c ^= (b>>15); };

 return c;
}




static inline  __attribute__((always_inline)) u32 jhash2(const u32 *k, u32 length, u32 initval)
{
 u32 a, b, c, len;

 a = b = 0x9e3779b9;
 c = initval;
 len = length;

 while (len >= 3) {
  a += k[0];
  b += k[1];
  c += k[2];
  { a -= b; a -= c; a ^= (c>>13); b -= c; b -= a; b ^= (a<<8); c -= a; c -= b; c ^= (b>>13); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<16); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>3); b -= c; b -= a; b ^= (a<<10); c -= a; c -= b; c ^= (b>>15); };
  k += 3; len -= 3;
 }

 c += length * 4;

 switch (len) {
 case 2 : b += k[1];
 case 1 : a += k[0];
 };

 { a -= b; a -= c; a ^= (c>>13); b -= c; b -= a; b ^= (a<<8); c -= a; c -= b; c ^= (b>>13); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<16); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>3); b -= c; b -= a; b ^= (a<<10); c -= a; c -= b; c ^= (b>>15); };

 return c;
}
# 122 "linux-2.6.26/include/linux/jhash.h"
static inline  __attribute__((always_inline)) u32 jhash_3words(u32 a, u32 b, u32 c, u32 initval)
{
 a += 0x9e3779b9;
 b += 0x9e3779b9;
 c += initval;

 { a -= b; a -= c; a ^= (c>>13); b -= c; b -= a; b ^= (a<<8); c -= a; c -= b; c ^= (b>>13); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<16); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>3); b -= c; b -= a; b ^= (a<<10); c -= a; c -= b; c ^= (b>>15); };

 return c;
}

static inline  __attribute__((always_inline)) u32 jhash_2words(u32 a, u32 b, u32 initval)
{
 return jhash_3words(a, b, 0, initval);
}

static inline  __attribute__((always_inline)) u32 jhash_1word(u32 a, u32 initval)
{
 return jhash_3words(a, 0, 0, initval);
}
# 23 "linux-2.6.26/include/net/inet_sock.h" 2



# 1 "linux-2.6.26/include/net/request_sock.h" 1
# 24 "linux-2.6.26/include/net/request_sock.h"
struct request_sock;
struct sk_buff;
struct dst_entry;
struct proto;

struct request_sock_ops {
 int family;
 int obj_size;
 struct kmem_cache *slab;
 int (*rtx_syn_ack)(struct sock *sk,
           struct request_sock *req);
 void (*send_ack)(struct sk_buff *skb,
        struct request_sock *req);
 void (*send_reset)(struct sock *sk,
          struct sk_buff *skb);
 void (*destructor)(struct request_sock *req);
};



struct request_sock {
 struct request_sock *dl_next;
 u16 mss;
 u8 retrans;
 u8 cookie_ts;

 u32 window_clamp;
 u32 rcv_wnd;
 u32 ts_recent;
 unsigned long expires;
 const struct request_sock_ops *rsk_ops;
 struct sock *sk;
 u32 secid;
 u32 peer_secid;
};

static inline  __attribute__((always_inline)) struct request_sock *reqsk_alloc(const struct request_sock_ops *ops)
{
 struct request_sock *req = kmem_cache_alloc(ops->slab, ((( gfp_t)0x20u)));

 if (req != ((void *)0))
  req->rsk_ops = ops;

 return req;
}

static inline  __attribute__((always_inline)) void __reqsk_free(struct request_sock *req)
{
 kmem_cache_free(req->rsk_ops->slab, req);
}

static inline  __attribute__((always_inline)) void reqsk_free(struct request_sock *req)
{
 req->rsk_ops->destructor(req);
 __reqsk_free(req);
}

typedef  int  _GLOBAL_209_T; extern  _GLOBAL_209_T  global_sysctl_max_syn_backlog[NUM_STACKS];   





struct listen_sock {
 u8 max_qlen_log;

 int qlen;
 int qlen_young;
 int clock_hand;
 u32 hash_rnd;
 u32 nr_table_entries;
 struct request_sock *syn_table[0];
};
# 114 "linux-2.6.26/include/net/request_sock.h"
struct request_sock_queue {
 struct request_sock *rskq_accept_head;
 struct request_sock *rskq_accept_tail;
 rwlock_t syn_wait_lock;
 u8 rskq_defer_accept;

 struct listen_sock *listen_opt;
};

extern int reqsk_queue_alloc(struct request_sock_queue *queue,
        unsigned int nr_table_entries);

extern void __reqsk_queue_destroy(struct request_sock_queue *queue);
extern void reqsk_queue_destroy(struct request_sock_queue *queue);

static inline  __attribute__((always_inline)) struct request_sock *
 reqsk_queue_yank_acceptq(struct request_sock_queue *queue)
{
 struct request_sock *req = queue->rskq_accept_head;

 queue->rskq_accept_head = ((void *)0);
 return req;
}

static inline  __attribute__((always_inline)) int reqsk_queue_empty(struct request_sock_queue *queue)
{
 return queue->rskq_accept_head == ((void *)0);
}

static inline  __attribute__((always_inline)) void reqsk_queue_unlink(struct request_sock_queue *queue,
          struct request_sock *req,
          struct request_sock **prev_req)
{
 do { do { } while (0); (void)0; (void)(&queue->syn_wait_lock); } while (0);
 *prev_req = req->dl_next;
 do { do { } while (0); (void)0; (void)(&queue->syn_wait_lock); } while (0);
}

static inline  __attribute__((always_inline)) void reqsk_queue_add(struct request_sock_queue *queue,
       struct request_sock *req,
       struct sock *parent,
       struct sock *child)
{
 req->sk = child;
 sk_acceptq_added(parent);

 if (queue->rskq_accept_head == ((void *)0))
  queue->rskq_accept_head = req;
 else
  queue->rskq_accept_tail->dl_next = req;

 queue->rskq_accept_tail = req;
 req->dl_next = ((void *)0);
}

static inline  __attribute__((always_inline)) struct request_sock *reqsk_queue_remove(struct request_sock_queue *queue)
{
 struct request_sock *req = queue->rskq_accept_head;

 do { if (__builtin_expect(!!(!(req != ((void *)0))), 0)) { printk("<3>" "KERNEL: assertion (%s) failed at %s (%d)\n", "req != NULL", "linux-2.6.26/include/net/request_sock.h" , 173); } } while(0);

 queue->rskq_accept_head = req->dl_next;
 if (queue->rskq_accept_head == ((void *)0))
  queue->rskq_accept_tail = ((void *)0);

 return req;
}

static inline  __attribute__((always_inline)) struct sock *reqsk_queue_get_child(struct request_sock_queue *queue,
       struct sock *parent)
{
 struct request_sock *req = reqsk_queue_remove(queue);
 struct sock *child = req->sk;

 do { if (__builtin_expect(!!(!(child != ((void *)0))), 0)) { printk("<3>" "KERNEL: assertion (%s) failed at %s (%d)\n", "child != NULL", "linux-2.6.26/include/net/request_sock.h" , 188); } } while(0);

 sk_acceptq_removed(parent);
 __reqsk_free(req);
 return child;
}

static inline  __attribute__((always_inline)) int reqsk_queue_removed(struct request_sock_queue *queue,
          struct request_sock *req)
{
 struct listen_sock *lopt = queue->listen_opt;

 if (req->retrans == 0)
  --lopt->qlen_young;

 return --lopt->qlen;
}

static inline  __attribute__((always_inline)) int reqsk_queue_added(struct request_sock_queue *queue)
{
 struct listen_sock *lopt = queue->listen_opt;
 const int prev_qlen = lopt->qlen;

 lopt->qlen_young++;
 lopt->qlen++;
 return prev_qlen;
}

static inline  __attribute__((always_inline)) int reqsk_queue_len(const struct request_sock_queue *queue)
{
 return queue->listen_opt != ((void *)0) ? queue->listen_opt->qlen : 0;
}

static inline  __attribute__((always_inline)) int reqsk_queue_len_young(const struct request_sock_queue *queue)
{
 return queue->listen_opt->qlen_young;
}

static inline  __attribute__((always_inline)) int reqsk_queue_is_full(const struct request_sock_queue *queue)
{
 return queue->listen_opt->qlen >> queue->listen_opt->max_qlen_log;
}

static inline  __attribute__((always_inline)) void reqsk_queue_hash_req(struct request_sock_queue *queue,
     u32 hash, struct request_sock *req,
     unsigned long timeout)
{
 struct listen_sock *lopt = queue->listen_opt;

 req->expires = global_jiffies[get_stack_id()] + timeout;
 req->retrans = 0;
 req->sk = ((void *)0);
 req->dl_next = lopt->syn_table[hash];

 do { do { } while (0); (void)0; (void)(&queue->syn_wait_lock); } while (0);
 lopt->syn_table[hash] = req;
 do { do { } while (0); (void)0; (void)(&queue->syn_wait_lock); } while (0);
}
# 27 "linux-2.6.26/include/net/inet_sock.h" 2
# 1 "linux-2.6.26/include/net/route.h" 1
# 28 "linux-2.6.26/include/net/route.h"
# 1 "linux-2.6.26/include/net/inetpeer.h" 1
# 16 "linux-2.6.26/include/net/inetpeer.h"
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 17 "linux-2.6.26/include/net/inetpeer.h" 2

struct inet_peer
{

 struct inet_peer *avl_left, *avl_right;
 __be32 v4daddr;
 __u16 avl_height;
 __u16 ip_id_count;
 struct list_head unused;
 __u32 dtime;

 atomic_t refcnt;
 atomic_t rid;
 __u32 tcp_ts;
 unsigned long tcp_ts_stamp;
};

void inet_initpeers(void)  __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) ;


struct inet_peer *inet_getpeer(__be32 daddr, int create);


extern void inet_putpeer(struct inet_peer *p);

typedef  spinlock_t  _GLOBAL_210_T; extern  _GLOBAL_210_T  global_inet_peer_idlock[NUM_STACKS];   

static inline  __attribute__((always_inline)) __u16 inet_getid(struct inet_peer *p, int more)
{
 __u16 id;

 do { local_bh_disable(); do { do { } while (0); (void)0; (void)(&global_inet_peer_idlock[get_stack_id()]); } while (0); } while (0);
 id = p->ip_id_count;
 p->ip_id_count += 1 + more;
 do { do { } while (0); local_bh_enable(); (void)0; (void)(&global_inet_peer_idlock[get_stack_id()]); } while (0);
 return id;
}
# 29 "linux-2.6.26/include/net/route.h" 2


# 1 "linux-2.6.26/include/linux/in_route.h" 1
# 32 "linux-2.6.26/include/net/route.h" 2

# 1 "linux-2.6.26/include/linux/route.h" 1
# 30 "linux-2.6.26/include/linux/route.h"
struct rtentry
{
 unsigned long rt_pad1;
 struct sockaddr rt_dst;
 struct sockaddr rt_gateway;
 struct sockaddr rt_genmask;
 unsigned short rt_flags;
 short rt_pad2;
 unsigned long rt_pad3;
 void *rt_pad4;
 short rt_metric;
 char *rt_dev;
 unsigned long rt_mtu;



 unsigned long rt_window;
 unsigned short rt_irtt;
};
# 34 "linux-2.6.26/include/net/route.h" 2
# 50 "linux-2.6.26/include/net/route.h"
struct fib_nh;
struct inet_peer;
struct rtable
{
 union
 {
  struct dst_entry dst;
 } u;


 struct flowi fl;

 struct in_device *idev;

 int rt_genid;
 unsigned rt_flags;
 __u16 rt_type;

 __be32 rt_dst;
 __be32 rt_src;
 int rt_iif;


 __be32 rt_gateway;


 __be32 rt_spec_dst;
 struct inet_peer *peer;
};

struct ip_rt_acct
{
 __u32 o_bytes;
 __u32 o_packets;
 __u32 i_bytes;
 __u32 i_packets;
};

struct rt_cache_stat
{
        unsigned int in_hit;
        unsigned int in_slow_tot;
        unsigned int in_slow_mc;
        unsigned int in_no_route;
        unsigned int in_brd;
        unsigned int in_martian_dst;
        unsigned int in_martian_src;
        unsigned int out_hit;
        unsigned int out_slow_tot;
        unsigned int out_slow_mc;
        unsigned int gc_total;
        unsigned int gc_ignored;
        unsigned int gc_goal_miss;
        unsigned int gc_dst_overflow;
        unsigned int in_hlist_search;
        unsigned int out_hlist_search;
};

typedef  struct ip_rt_acct   _GLOBAL_211_T; extern  _GLOBAL_211_T  * global_ip_rt_acct[NUM_STACKS];    

struct in_device;
extern int ip_rt_init(void);
extern void ip_rt_redirect(__be32 old_gw, __be32 dst, __be32 new_gw,
           __be32 src, struct net_device *dev);
extern void rt_cache_flush(int how);
extern int __ip_route_output_key(struct net *, struct rtable **, const struct flowi *flp);
extern int ip_route_output_key(struct net *, struct rtable **, struct flowi *flp);
extern int ip_route_output_flow(struct net *, struct rtable **rp, struct flowi *flp, struct sock *sk, int flags);
extern int ip_route_input(struct sk_buff*, __be32 dst, __be32 src, u8 tos, struct net_device *devin);
extern unsigned short ip_rt_frag_needed(struct net *net, struct iphdr *iph, unsigned short new_mtu, struct net_device *dev);
extern void ip_rt_send_redirect(struct sk_buff *skb);

extern unsigned inet_addr_type(struct net *net, __be32 addr);
extern unsigned inet_dev_addr_type(struct net *net, const struct net_device *dev, __be32 addr);
extern void ip_rt_multicast_event(struct in_device *);
extern int ip_rt_ioctl(struct net *, unsigned int cmd, void *arg);
extern void ip_rt_get_source(u8 *src, struct rtable *rt);
extern int ip_rt_dump(struct sk_buff *skb, struct netlink_callback *cb);

struct in_ifaddr;
extern void fib_add_ifaddr(struct in_ifaddr *);

static inline  __attribute__((always_inline)) void ip_rt_put(struct rtable * rt)
{
 if (rt)
  dst_release(&rt->u.dst);
}



typedef  const __u8   _GLOBAL_212_T; extern  _GLOBAL_212_T  _GLOBAL_0_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_1_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_2_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_3_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_4_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_5_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_6_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_7_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_8_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_9_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_10_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_11_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_12_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_13_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_14_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_15_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_16_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_17_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_18_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_19_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_20_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_21_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_22_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_23_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_24_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_25_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_26_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_27_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_28_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_29_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_30_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_31_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_32_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_33_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_34_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_35_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_36_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_37_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_38_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_39_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_40_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_41_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_42_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_43_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_44_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_45_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_46_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_47_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_48_ip_tos2prio_I [ 16 ] ; extern  _GLOBAL_212_T  _GLOBAL_49_ip_tos2prio_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip_tos2prio_I) *_GLOBAL_ip_tos2prio_16_A[NUM_STACKS] = { &_GLOBAL_0_ip_tos2prio_I, &_GLOBAL_1_ip_tos2prio_I, &_GLOBAL_2_ip_tos2prio_I, &_GLOBAL_3_ip_tos2prio_I, &_GLOBAL_4_ip_tos2prio_I, &_GLOBAL_5_ip_tos2prio_I, &_GLOBAL_6_ip_tos2prio_I, &_GLOBAL_7_ip_tos2prio_I, &_GLOBAL_8_ip_tos2prio_I, &_GLOBAL_9_ip_tos2prio_I, &_GLOBAL_10_ip_tos2prio_I, &_GLOBAL_11_ip_tos2prio_I, &_GLOBAL_12_ip_tos2prio_I, &_GLOBAL_13_ip_tos2prio_I, &_GLOBAL_14_ip_tos2prio_I, &_GLOBAL_15_ip_tos2prio_I, &_GLOBAL_16_ip_tos2prio_I, &_GLOBAL_17_ip_tos2prio_I, &_GLOBAL_18_ip_tos2prio_I, &_GLOBAL_19_ip_tos2prio_I, &_GLOBAL_20_ip_tos2prio_I, &_GLOBAL_21_ip_tos2prio_I, &_GLOBAL_22_ip_tos2prio_I, &_GLOBAL_23_ip_tos2prio_I, &_GLOBAL_24_ip_tos2prio_I, &_GLOBAL_25_ip_tos2prio_I, &_GLOBAL_26_ip_tos2prio_I, &_GLOBAL_27_ip_tos2prio_I, &_GLOBAL_28_ip_tos2prio_I, &_GLOBAL_29_ip_tos2prio_I, &_GLOBAL_30_ip_tos2prio_I, &_GLOBAL_31_ip_tos2prio_I, &_GLOBAL_32_ip_tos2prio_I, &_GLOBAL_33_ip_tos2prio_I, &_GLOBAL_34_ip_tos2prio_I, &_GLOBAL_35_ip_tos2prio_I, &_GLOBAL_36_ip_tos2prio_I, &_GLOBAL_37_ip_tos2prio_I, &_GLOBAL_38_ip_tos2prio_I, &_GLOBAL_39_ip_tos2prio_I, &_GLOBAL_40_ip_tos2prio_I, &_GLOBAL_41_ip_tos2prio_I, &_GLOBAL_42_ip_tos2prio_I, &_GLOBAL_43_ip_tos2prio_I, &_GLOBAL_44_ip_tos2prio_I, &_GLOBAL_45_ip_tos2prio_I, &_GLOBAL_46_ip_tos2prio_I, &_GLOBAL_47_ip_tos2prio_I, &_GLOBAL_48_ip_tos2prio_I, &_GLOBAL_49_ip_tos2prio_I, };   

static inline  __attribute__((always_inline)) char rt_tos2priority(u8 tos)
{
 return (*_GLOBAL_ip_tos2prio_16_A[get_stack_id()])[((tos)&0x1E)>>1];
}

static inline  __attribute__((always_inline)) int ip_route_connect(struct rtable **rp, __be32 dst,
       __be32 src, u32 tos, int oif, u8 protocol,
       __be16 sport, __be16 dport, struct sock *sk,
       int flags)
{
 struct flowi fl = { .oif = oif,
       .mark = sk->sk_mark,
       .nl_u = { .ip4_u = { .daddr = dst,
       .saddr = src,
       .tos = tos } },
       .proto = protocol,
       .uli_u = { .ports =
           { .sport = sport,
      .dport = dport } } };

 int err;
 struct net *net = sock_net(sk);
 if (!dst || !src) {
  err = __ip_route_output_key(net, rp, &fl);
  if (err)
   return err;
  fl.nl_u.ip4_u.daddr = (*rp)->rt_dst;
  fl.nl_u.ip4_u.saddr = (*rp)->rt_src;
  ip_rt_put(*rp);
  *rp = ((void *)0);
 }
 security_sk_classify_flow(sk, &fl);
 return ip_route_output_flow(net, rp, &fl, sk, flags);
}

static inline  __attribute__((always_inline)) int ip_route_newports(struct rtable **rp, u8 protocol,
        __be16 sport, __be16 dport, struct sock *sk)
{
 if (sport != (*rp)->fl.uli_u.ports.sport ||
     dport != (*rp)->fl.uli_u.ports.dport) {
  struct flowi fl;

  memcpy(&fl, &(*rp)->fl, sizeof(fl));
  fl.uli_u.ports.sport = sport;
  fl.uli_u.ports.dport = dport;
  fl.proto = protocol;
  ip_rt_put(*rp);
  *rp = ((void *)0);
  security_sk_classify_flow(sk, &fl);
  return ip_route_output_flow(sock_net(sk), rp, &fl, sk, 0);
 }
 return 0;
}

extern void rt_bind_peer(struct rtable *rt, int create);

static inline  __attribute__((always_inline)) struct inet_peer *rt_get_peer(struct rtable *rt)
{
 if (rt->peer)
  return rt->peer;

 rt_bind_peer(rt, 0);
 return rt->peer;
}

typedef  ctl_table  _GLOBAL_213_T; extern  _GLOBAL_213_T  _GLOBAL_0_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_1_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_2_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_3_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_4_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_5_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_6_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_7_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_8_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_9_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_10_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_11_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_12_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_13_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_14_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_15_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_16_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_17_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_18_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_19_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_20_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_21_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_22_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_23_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_24_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_25_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_26_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_27_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_28_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_29_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_30_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_31_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_32_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_33_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_34_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_35_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_36_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_37_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_38_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_39_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_40_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_41_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_42_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_43_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_44_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_45_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_46_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_47_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_48_ipv4_route_table_I [ ] ; extern  _GLOBAL_213_T  _GLOBAL_49_ipv4_route_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipv4_route_table_I) *_GLOBAL_ipv4_route_table_17_A[NUM_STACKS];  
# 28 "linux-2.6.26/include/net/inet_sock.h" 2
# 40 "linux-2.6.26/include/net/inet_sock.h"
struct ip_options {
 __be32 faddr;
 unsigned char optlen;
 unsigned char srr;
 unsigned char rr;
 unsigned char ts;
 unsigned char is_strictroute:1,
   srr_is_hit:1,
   is_changed:1,
   rr_needaddr:1,
   ts_needtime:1,
   ts_needaddr:1;
 unsigned char router_alert;
 unsigned char cipso;
 unsigned char __pad2;
 unsigned char __data[0];
};



struct inet_request_sock {
 struct request_sock req;

 u16 inet6_rsk_offset;


 __be32 loc_addr;
 __be32 rmt_addr;
 __be16 rmt_port;
 u16 snd_wscale : 4,
    rcv_wscale : 4,
    tstamp_ok : 1,
    sack_ok : 1,
    wscale_ok : 1,
    ecn_ok : 1,
    acked : 1;
 struct ip_options *opt;
};

static inline  __attribute__((always_inline)) struct inet_request_sock *inet_rsk(const struct request_sock *sk)
{
 return (struct inet_request_sock *)sk;
}

struct ip_mc_socklist;
struct ipv6_pinfo;
struct rtable;
# 107 "linux-2.6.26/include/net/inet_sock.h"
struct inet_sock {

 struct sock sk;

 struct ipv6_pinfo *pinet6;


 __be32 daddr;
 __be32 rcv_saddr;
 __be16 dport;
 __u16 num;
 __be32 saddr;
 __s16 uc_ttl;
 __u16 cmsg_flags;
 struct ip_options *opt;
 __be16 sport;
 __u16 id;
 __u8 tos;
 __u8 mc_ttl;
 __u8 pmtudisc;
 __u8 recverr:1,
    is_icsk:1,
    freebind:1,
    hdrincl:1,
    mc_loop:1;
 int mc_index;
 __be32 mc_addr;
 struct ip_mc_socklist *mc_list;
 struct {
  unsigned int flags;
  unsigned int fragsize;
  struct ip_options *opt;
  struct dst_entry *dst;
  int length;
  __be32 addr;
  struct flowi fl;
 } cork;
};




static inline  __attribute__((always_inline)) struct inet_sock *inet_sk(const struct sock *sk)
{
 return (struct inet_sock *)sk;
}

static inline  __attribute__((always_inline)) void __inet_sk_copy_descendant(struct sock *sk_to,
          const struct sock *sk_from,
          const int ancestor_size)
{
 memcpy(inet_sk(sk_to) + 1, inet_sk(sk_from) + 1,
        sk_from->__sk_common.skc_prot->obj_size - ancestor_size);
}
# 169 "linux-2.6.26/include/net/inet_sock.h"
extern int inet_sk_rebuild_header(struct sock *sk);

typedef  u32  _GLOBAL_214_T; extern  _GLOBAL_214_T  global_inet_ehash_secret[NUM_STACKS];   
extern void build_ehash_secret(void);

static inline  __attribute__((always_inline)) unsigned int inet_ehashfn(const __be32 laddr, const __u16 lport,
     const __be32 faddr, const __be16 fport)
{
 return jhash_3words(( __u32) laddr,
       ( __u32) faddr,
       ((__u32) lport) << 16 | ( __u32)fport,
       global_inet_ehash_secret[get_stack_id()]);
}

static inline  __attribute__((always_inline)) int inet_sk_ehashfn(const struct sock *sk)
{
 const struct inet_sock *inet = inet_sk(sk);
 const __be32 laddr = inet->rcv_saddr;
 const __u16 lport = inet->num;
 const __be32 faddr = inet->daddr;
 const __be16 fport = inet->dport;

 return inet_ehashfn(laddr, lport, faddr, fport);
}


static inline  __attribute__((always_inline)) int inet_iif(const struct sk_buff *skb)
{
 return skb->rtable->rt_iif;
}

static inline  __attribute__((always_inline)) struct request_sock *inet_reqsk_alloc(struct request_sock_ops *ops)
{
 struct request_sock *req = reqsk_alloc(ops);

 if (req != ((void *)0))
  inet_rsk(req)->opt = ((void *)0);

 return req;
}
# 31 "linux-2.6.26/include/net/ip.h" 2
# 1 "linux-2.6.26/include/net/snmp.h" 1
# 25 "linux-2.6.26/include/net/snmp.h"
# 1 "linux-2.6.26/include/linux/snmp.h" 1
# 18 "linux-2.6.26/include/linux/snmp.h"
enum
{
 IPSTATS_MIB_NUM = 0,
 IPSTATS_MIB_INRECEIVES,
 IPSTATS_MIB_INHDRERRORS,
 IPSTATS_MIB_INTOOBIGERRORS,
 IPSTATS_MIB_INNOROUTES,
 IPSTATS_MIB_INADDRERRORS,
 IPSTATS_MIB_INUNKNOWNPROTOS,
 IPSTATS_MIB_INTRUNCATEDPKTS,
 IPSTATS_MIB_INDISCARDS,
 IPSTATS_MIB_INDELIVERS,
 IPSTATS_MIB_OUTFORWDATAGRAMS,
 IPSTATS_MIB_OUTREQUESTS,
 IPSTATS_MIB_OUTDISCARDS,
 IPSTATS_MIB_OUTNOROUTES,
 IPSTATS_MIB_REASMTIMEOUT,
 IPSTATS_MIB_REASMREQDS,
 IPSTATS_MIB_REASMOKS,
 IPSTATS_MIB_REASMFAILS,
 IPSTATS_MIB_FRAGOKS,
 IPSTATS_MIB_FRAGFAILS,
 IPSTATS_MIB_FRAGCREATES,
 IPSTATS_MIB_INMCASTPKTS,
 IPSTATS_MIB_OUTMCASTPKTS,
 IPSTATS_MIB_INBCASTPKTS,
 IPSTATS_MIB_OUTBCASTPKTS,
 __IPSTATS_MIB_MAX
};






enum
{
 ICMP_MIB_NUM = 0,
 ICMP_MIB_INMSGS,
 ICMP_MIB_INERRORS,
 ICMP_MIB_INDESTUNREACHS,
 ICMP_MIB_INTIMEEXCDS,
 ICMP_MIB_INPARMPROBS,
 ICMP_MIB_INSRCQUENCHS,
 ICMP_MIB_INREDIRECTS,
 ICMP_MIB_INECHOS,
 ICMP_MIB_INECHOREPS,
 ICMP_MIB_INTIMESTAMPS,
 ICMP_MIB_INTIMESTAMPREPS,
 ICMP_MIB_INADDRMASKS,
 ICMP_MIB_INADDRMASKREPS,
 ICMP_MIB_OUTMSGS,
 ICMP_MIB_OUTERRORS,
 ICMP_MIB_OUTDESTUNREACHS,
 ICMP_MIB_OUTTIMEEXCDS,
 ICMP_MIB_OUTPARMPROBS,
 ICMP_MIB_OUTSRCQUENCHS,
 ICMP_MIB_OUTREDIRECTS,
 ICMP_MIB_OUTECHOS,
 ICMP_MIB_OUTECHOREPS,
 ICMP_MIB_OUTTIMESTAMPS,
 ICMP_MIB_OUTTIMESTAMPREPS,
 ICMP_MIB_OUTADDRMASKS,
 ICMP_MIB_OUTADDRMASKREPS,
 __ICMP_MIB_MAX
};







enum
{
 ICMP6_MIB_NUM = 0,
 ICMP6_MIB_INMSGS,
 ICMP6_MIB_INERRORS,
 ICMP6_MIB_OUTMSGS,
 __ICMP6_MIB_MAX
};
# 107 "linux-2.6.26/include/linux/snmp.h"
enum
{
 TCP_MIB_NUM = 0,
 TCP_MIB_RTOALGORITHM,
 TCP_MIB_RTOMIN,
 TCP_MIB_RTOMAX,
 TCP_MIB_MAXCONN,
 TCP_MIB_ACTIVEOPENS,
 TCP_MIB_PASSIVEOPENS,
 TCP_MIB_ATTEMPTFAILS,
 TCP_MIB_ESTABRESETS,
 TCP_MIB_CURRESTAB,
 TCP_MIB_INSEGS,
 TCP_MIB_OUTSEGS,
 TCP_MIB_RETRANSSEGS,
 TCP_MIB_INERRS,
 TCP_MIB_OUTRSTS,
 __TCP_MIB_MAX
};






enum
{
 UDP_MIB_NUM = 0,
 UDP_MIB_INDATAGRAMS,
 UDP_MIB_NOPORTS,
 UDP_MIB_INERRORS,
 UDP_MIB_OUTDATAGRAMS,
 UDP_MIB_RCVBUFERRORS,
 UDP_MIB_SNDBUFERRORS,
 __UDP_MIB_MAX
};


enum
{
 LINUX_MIB_NUM = 0,
 LINUX_MIB_SYNCOOKIESSENT,
 LINUX_MIB_SYNCOOKIESRECV,
 LINUX_MIB_SYNCOOKIESFAILED,
 LINUX_MIB_EMBRYONICRSTS,
 LINUX_MIB_PRUNECALLED,
 LINUX_MIB_RCVPRUNED,
 LINUX_MIB_OFOPRUNED,
 LINUX_MIB_OUTOFWINDOWICMPS,
 LINUX_MIB_LOCKDROPPEDICMPS,
 LINUX_MIB_ARPFILTER,
 LINUX_MIB_TIMEWAITED,
 LINUX_MIB_TIMEWAITRECYCLED,
 LINUX_MIB_TIMEWAITKILLED,
 LINUX_MIB_PAWSPASSIVEREJECTED,
 LINUX_MIB_PAWSACTIVEREJECTED,
 LINUX_MIB_PAWSESTABREJECTED,
 LINUX_MIB_DELAYEDACKS,
 LINUX_MIB_DELAYEDACKLOCKED,
 LINUX_MIB_DELAYEDACKLOST,
 LINUX_MIB_LISTENOVERFLOWS,
 LINUX_MIB_LISTENDROPS,
 LINUX_MIB_TCPPREQUEUED,
 LINUX_MIB_TCPDIRECTCOPYFROMBACKLOG,
 LINUX_MIB_TCPDIRECTCOPYFROMPREQUEUE,
 LINUX_MIB_TCPPREQUEUEDROPPED,
 LINUX_MIB_TCPHPHITS,
 LINUX_MIB_TCPHPHITSTOUSER,
 LINUX_MIB_TCPPUREACKS,
 LINUX_MIB_TCPHPACKS,
 LINUX_MIB_TCPRENORECOVERY,
 LINUX_MIB_TCPSACKRECOVERY,
 LINUX_MIB_TCPSACKRENEGING,
 LINUX_MIB_TCPFACKREORDER,
 LINUX_MIB_TCPSACKREORDER,
 LINUX_MIB_TCPRENOREORDER,
 LINUX_MIB_TCPTSREORDER,
 LINUX_MIB_TCPFULLUNDO,
 LINUX_MIB_TCPPARTIALUNDO,
 LINUX_MIB_TCPDSACKUNDO,
 LINUX_MIB_TCPLOSSUNDO,
 LINUX_MIB_TCPLOSS,
 LINUX_MIB_TCPLOSTRETRANSMIT,
 LINUX_MIB_TCPRENOFAILURES,
 LINUX_MIB_TCPSACKFAILURES,
 LINUX_MIB_TCPLOSSFAILURES,
 LINUX_MIB_TCPFASTRETRANS,
 LINUX_MIB_TCPFORWARDRETRANS,
 LINUX_MIB_TCPSLOWSTARTRETRANS,
 LINUX_MIB_TCPTIMEOUTS,
 LINUX_MIB_TCPRENORECOVERYFAIL,
 LINUX_MIB_TCPSACKRECOVERYFAIL,
 LINUX_MIB_TCPSCHEDULERFAILED,
 LINUX_MIB_TCPRCVCOLLAPSED,
 LINUX_MIB_TCPDSACKOLDSENT,
 LINUX_MIB_TCPDSACKOFOSENT,
 LINUX_MIB_TCPDSACKRECV,
 LINUX_MIB_TCPDSACKOFORECV,
 LINUX_MIB_TCPABORTONSYN,
 LINUX_MIB_TCPABORTONDATA,
 LINUX_MIB_TCPABORTONCLOSE,
 LINUX_MIB_TCPABORTONMEMORY,
 LINUX_MIB_TCPABORTONTIMEOUT,
 LINUX_MIB_TCPABORTONLINGER,
 LINUX_MIB_TCPABORTFAILED,
 LINUX_MIB_TCPMEMORYPRESSURES,
 LINUX_MIB_TCPSACKDISCARD,
 LINUX_MIB_TCPDSACKIGNOREDOLD,
 LINUX_MIB_TCPDSACKIGNOREDNOUNDO,
 LINUX_MIB_TCPSPURIOUSRTOS,
 __LINUX_MIB_MAX
};


enum
{
 LINUX_MIB_XFRMNUM = 0,
 LINUX_MIB_XFRMINERROR,
 LINUX_MIB_XFRMINBUFFERERROR,
 LINUX_MIB_XFRMINHDRERROR,
 LINUX_MIB_XFRMINNOSTATES,
 LINUX_MIB_XFRMINSTATEPROTOERROR,
 LINUX_MIB_XFRMINSTATEMODEERROR,
 LINUX_MIB_XFRMINSTATESEQERROR,
 LINUX_MIB_XFRMINSTATEEXPIRED,
 LINUX_MIB_XFRMINSTATEMISMATCH,
 LINUX_MIB_XFRMINSTATEINVALID,
 LINUX_MIB_XFRMINTMPLMISMATCH,
 LINUX_MIB_XFRMINNOPOLS,
 LINUX_MIB_XFRMINPOLBLOCK,
 LINUX_MIB_XFRMINPOLERROR,
 LINUX_MIB_XFRMOUTERROR,
 LINUX_MIB_XFRMOUTBUNDLEGENERROR,
 LINUX_MIB_XFRMOUTBUNDLECHECKERROR,
 LINUX_MIB_XFRMOUTNOSTATES,
 LINUX_MIB_XFRMOUTSTATEPROTOERROR,
 LINUX_MIB_XFRMOUTSTATEMODEERROR,
 LINUX_MIB_XFRMOUTSTATESEQERROR,
 LINUX_MIB_XFRMOUTSTATEEXPIRED,
 LINUX_MIB_XFRMOUTPOLBLOCK,
 LINUX_MIB_XFRMOUTPOLDEAD,
 LINUX_MIB_XFRMOUTPOLERROR,
 __LINUX_MIB_XFRMMAX
};
# 26 "linux-2.6.26/include/net/snmp.h" 2
# 36 "linux-2.6.26/include/net/snmp.h"
struct snmp_mib {
 char *name;
 int entry;
};
# 74 "linux-2.6.26/include/net/snmp.h"
struct ipstats_mib {
 unsigned long mibs[__IPSTATS_MIB_MAX];
} __attribute__((__aligned__((1 << (5))))) ;





struct icmp_mib {
 unsigned long mibs[(__ICMP_MIB_MAX + 1)];
} __attribute__((__aligned__((1 << (5))))) ;


struct icmpmsg_mib {
 unsigned long mibs[512];
} __attribute__((__aligned__((1 << (5))))) ;



struct icmpv6_mib {
 unsigned long mibs[__ICMP6_MIB_MAX];
} __attribute__((__aligned__((1 << (5))))) ;


struct icmpv6msg_mib {
 unsigned long mibs[512];
} __attribute__((__aligned__((1 << (5))))) ;




struct tcp_mib {
 unsigned long mibs[__TCP_MIB_MAX];
} __attribute__((__aligned__((1 << (5))))) ;



struct udp_mib {
 unsigned long mibs[__UDP_MIB_MAX];
} __attribute__((__aligned__((1 << (5))))) ;



struct linux_mib {
 unsigned long mibs[__LINUX_MIB_MAX];
};



struct linux_xfrm_mib {
 unsigned long mibs[__LINUX_MIB_XFRMMAX];
};
# 32 "linux-2.6.26/include/net/ip.h" 2

struct sock;

struct inet_skb_parm
{
 struct ip_options opt;
 unsigned char flags;






};

static inline  __attribute__((always_inline)) unsigned int ip_hdrlen(const struct sk_buff *skb)
{
 return ip_hdr(skb)->ihl * 4;
}

struct ipcm_cookie
{
 __be32 addr;
 int oif;
 struct ip_options *opt;
};



struct ip_ra_chain
{
 struct ip_ra_chain *next;
 struct sock *sk;
 void (*destructor)(struct sock *);
};

typedef  struct ip_ra_chain   _GLOBAL_215_T; extern  _GLOBAL_215_T  * global_ip_ra_chain[NUM_STACKS];    
typedef  rwlock_t  _GLOBAL_216_T; extern  _GLOBAL_216_T  global_ip_ra_lock[NUM_STACKS];   
# 79 "linux-2.6.26/include/net/ip.h"
struct msghdr;
struct net_device;
struct packet_type;
struct rtable;
struct sockaddr;

extern int igmp_mc_proc_init(void);





extern int ip_build_and_send_pkt(struct sk_buff *skb, struct sock *sk,
           __be32 saddr, __be32 daddr,
           struct ip_options *opt);
extern int ip_rcv(struct sk_buff *skb, struct net_device *dev,
          struct packet_type *pt, struct net_device *orig_dev);
extern int ip_local_deliver(struct sk_buff *skb);
extern int ip_mr_input(struct sk_buff *skb);
extern int ip_output(struct sk_buff *skb);
extern int ip_mc_output(struct sk_buff *skb);
extern int ip_fragment(struct sk_buff *skb, int (*output)(struct sk_buff *));
extern int ip_do_nat(struct sk_buff *skb);
extern void ip_send_check(struct iphdr *ip);
extern int __ip_local_out(struct sk_buff *skb);
extern int ip_local_out(struct sk_buff *skb);
extern int ip_queue_xmit(struct sk_buff *skb, int ipfragok);
extern void ip_init(void);
extern int ip_append_data(struct sock *sk,
           int getfrag(void *from, char *to, int offset, int len,
         int odd, struct sk_buff *skb),
    void *from, int len, int protolen,
    struct ipcm_cookie *ipc,
    struct rtable *rt,
    unsigned int flags);
extern int ip_generic_getfrag(void *from, char *to, int offset, int len, int odd, struct sk_buff *skb);
extern ssize_t ip_append_page(struct sock *sk, struct page *page,
    int offset, size_t size, int flags);
extern int ip_push_pending_frames(struct sock *sk);
extern void ip_flush_pending_frames(struct sock *sk);


extern int ip4_datagram_connect(struct sock *sk,
          struct sockaddr *uaddr, int addr_len);
# 131 "linux-2.6.26/include/net/ip.h"
static inline  __attribute__((always_inline)) void ip_tr_mc_map(__be32 addr, char *buf)
{
 buf[0]=0xC0;
 buf[1]=0x00;
 buf[2]=0x00;
 buf[3]=0x04;
 buf[4]=0x00;
 buf[5]=0x00;
}

struct ip_reply_arg {
 struct kvec iov[1];
 __wsum csum;
 int csumoffset;

 int bound_dev_if;
};

void ip_send_reply(struct sock *sk, struct sk_buff *skb, struct ip_reply_arg *arg,
     unsigned int len);

struct ipv4_config
{
 int log_martians;
 int no_pmtu_disc;
};

typedef  struct ipv4_config   _GLOBAL_217_T; extern  _GLOBAL_217_T  global_ipv4_config[NUM_STACKS];    
typedef  __typeof__ ( struct ipstats_mib  )   _GLOBAL_218_T; extern  _GLOBAL_218_T  * _GLOBAL_0_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_1_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_2_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_3_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_4_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_5_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_6_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_7_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_8_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_9_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_10_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_11_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_12_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_13_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_14_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_15_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_16_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_17_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_18_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_19_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_20_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_21_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_22_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_23_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_24_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_25_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_26_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_27_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_28_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_29_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_30_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_31_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_32_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_33_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_34_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_35_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_36_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_37_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_38_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_39_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_40_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_41_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_42_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_43_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_44_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_45_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_46_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_47_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_48_ip_statistics_I [ 2 ]  ; extern  _GLOBAL_218_T  * _GLOBAL_49_ip_statistics_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip_statistics_I) *_GLOBAL_ip_statistics_18_A[NUM_STACKS];   




typedef  __typeof__ ( struct linux_mib  )   _GLOBAL_219_T; extern  _GLOBAL_219_T  * _GLOBAL_0_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_1_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_2_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_3_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_4_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_5_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_6_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_7_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_8_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_9_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_10_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_11_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_12_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_13_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_14_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_15_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_16_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_17_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_18_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_19_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_20_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_21_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_22_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_23_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_24_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_25_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_26_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_27_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_28_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_29_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_30_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_31_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_32_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_33_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_34_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_35_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_36_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_37_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_38_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_39_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_40_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_41_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_42_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_43_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_44_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_45_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_46_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_47_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_48_net_statistics_I [ 2 ]  ; extern  _GLOBAL_219_T  * _GLOBAL_49_net_statistics_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_net_statistics_I) *_GLOBAL_net_statistics_19_A[NUM_STACKS];   






extern unsigned long snmp_fold_field(void *mib[], int offt);
extern int snmp_mib_init(void *ptr[2], size_t mibsize);
extern void snmp_mib_free(void *ptr[2]);

extern void inet_get_local_port_range(int *low, int *high);

typedef  int  _GLOBAL_220_T; extern  _GLOBAL_220_T  global_sysctl_ip_default_ttl[NUM_STACKS];   
typedef  int  _GLOBAL_221_T; extern  _GLOBAL_221_T  global_sysctl_ip_nonlocal_bind[NUM_STACKS];   

typedef  struct ctl_path   _GLOBAL_222_T; extern  _GLOBAL_222_T  _GLOBAL_0_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_1_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_2_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_3_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_4_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_5_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_6_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_7_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_8_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_9_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_10_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_11_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_12_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_13_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_14_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_15_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_16_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_17_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_18_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_19_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_20_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_21_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_22_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_23_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_24_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_25_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_26_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_27_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_28_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_29_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_30_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_31_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_32_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_33_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_34_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_35_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_36_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_37_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_38_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_39_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_40_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_41_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_42_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_43_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_44_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_45_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_46_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_47_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_48_net_ipv4_ctl_path_I [ ] ; extern  _GLOBAL_222_T  _GLOBAL_49_net_ipv4_ctl_path_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_net_ipv4_ctl_path_I) *_GLOBAL_net_ipv4_ctl_path_20_A[NUM_STACKS];   


typedef  int  _GLOBAL_223_T; extern  _GLOBAL_223_T  global_inet_peer_threshold[NUM_STACKS];   
typedef  int  _GLOBAL_224_T; extern  _GLOBAL_224_T  global_inet_peer_minttl[NUM_STACKS];   
typedef  int  _GLOBAL_225_T; extern  _GLOBAL_225_T  global_inet_peer_maxttl[NUM_STACKS];   
typedef  int  _GLOBAL_226_T; extern  _GLOBAL_226_T  global_inet_peer_gc_mintime[NUM_STACKS];   
typedef  int  _GLOBAL_227_T; extern  _GLOBAL_227_T  global_inet_peer_gc_maxtime[NUM_STACKS];   


typedef  int  _GLOBAL_228_T; extern  _GLOBAL_228_T  global_sysctl_ip_dynaddr[NUM_STACKS];   

extern void ipfrag_init(void);






static inline 
__attribute__((always_inline)) int ip_decrease_ttl(struct iphdr *iph)
{
 u32 check = ( u32)iph->check;
 check += ( u32)(( __be16)__fswab16((0x0100)));
 iph->check = ( __sum16)(check + (check>=0xFFFF));
 return --iph->ttl;
}

static inline 
__attribute__((always_inline)) int ip_dont_fragment(struct sock *sk, struct dst_entry *dst)
{
 return (inet_sk(sk)->pmtudisc == 2 ||
  (inet_sk(sk)->pmtudisc == 1 &&
   !(dst_metric_locked(dst, RTAX_MTU))));
}

extern void __ip_select_ident(struct iphdr *iph, struct dst_entry *dst, int more);

static inline  __attribute__((always_inline)) void ip_select_ident(struct iphdr *iph, struct dst_entry *dst, struct sock *sk)
{
 if (iph->frag_off & (( __be16)__fswab16((0x4000)))) {





  iph->id = (sk && inet_sk(sk)->daddr) ?
     (( __be16)__fswab16((inet_sk(sk)->id++))) : 0;
 } else
  __ip_select_ident(iph, dst, 0);
}

static inline  __attribute__((always_inline)) void ip_select_ident_more(struct iphdr *iph, struct dst_entry *dst, struct sock *sk, int more)
{
 if (iph->frag_off & (( __be16)__fswab16((0x4000)))) {
  if (sk && inet_sk(sk)->daddr) {
   iph->id = (( __be16)__fswab16((inet_sk(sk)->id)));
   inet_sk(sk)->id += 1 + more;
  } else
   iph->id = 0;
 } else
  __ip_select_ident(iph, dst, more);
}





static inline  __attribute__((always_inline)) void ip_eth_mc_map(__be32 naddr, char *buf)
{
 __u32 addr=__fswab32(( __u32)(__be32)(naddr));
 buf[0]=0x01;
 buf[1]=0x00;
 buf[2]=0x5e;
 buf[5]=addr&0xFF;
 addr>>=8;
 buf[4]=addr&0xFF;
 addr>>=8;
 buf[3]=addr&0x7F;
}






static inline  __attribute__((always_inline)) void ip_ib_mc_map(__be32 naddr, const unsigned char *broadcast, char *buf)
{
 __u32 addr;
 unsigned char scope = broadcast[5] & 0xF;

 buf[0] = 0;
 buf[1] = 0xff;
 buf[2] = 0xff;
 buf[3] = 0xff;
 addr = __fswab32(( __u32)(__be32)(naddr));
 buf[4] = 0xff;
 buf[5] = 0x10 | scope;
 buf[6] = 0x40;
 buf[7] = 0x1b;
 buf[8] = broadcast[8];
 buf[9] = broadcast[9];
 buf[10] = 0;
 buf[11] = 0;
 buf[12] = 0;
 buf[13] = 0;
 buf[14] = 0;
 buf[15] = 0;
 buf[19] = addr & 0xff;
 addr >>= 8;
 buf[18] = addr & 0xff;
 addr >>= 8;
 buf[17] = addr & 0xff;
 addr >>= 8;
 buf[16] = addr & 0x0f;
}


# 1 "linux-2.6.26/include/linux/ipv6.h" 1
# 18 "linux-2.6.26/include/linux/ipv6.h"
struct in6_pktinfo {
 struct in6_addr ipi6_addr;
 int ipi6_ifindex;
};


struct in6_ifreq {
 struct in6_addr ifr6_addr;
 __u32 ifr6_prefixlen;
 int ifr6_ifindex;
};
# 37 "linux-2.6.26/include/linux/ipv6.h"
struct ipv6_rt_hdr {
 __u8 nexthdr;
 __u8 hdrlen;
 __u8 type;
 __u8 segments_left;





};


struct ipv6_opt_hdr {
 __u8 nexthdr;
 __u8 hdrlen;



} __attribute__ ((packed)) ;
# 69 "linux-2.6.26/include/linux/ipv6.h"
struct rt0_hdr {
 struct ipv6_rt_hdr rt_hdr;
 __u32 reserved;
 struct in6_addr addr[0];


};





struct rt2_hdr {
 struct ipv6_rt_hdr rt_hdr;
 __u32 reserved;
 struct in6_addr addr;


};





struct ipv6_destopt_hao {
 __u8 type;
 __u8 length;
 struct in6_addr addr;
} __attribute__ ((__packed__)) ;
# 106 "linux-2.6.26/include/linux/ipv6.h"
struct ipv6hdr {

 __u8 priority:4,
    version:4;






 __u8 flow_lbl[3];

 __be16 payload_len;
 __u8 nexthdr;
 __u8 hop_limit;

 struct in6_addr saddr;
 struct in6_addr daddr;
};




struct ipv6_devconf {
 __s32 forwarding;
 __s32 hop_limit;
 __s32 mtu6;
 __s32 accept_ra;
 __s32 accept_redirects;
 __s32 autoconf;
 __s32 dad_transmits;
 __s32 rtr_solicits;
 __s32 rtr_solicit_interval;
 __s32 rtr_solicit_delay;
 __s32 force_mld_version;







 __s32 max_addresses;
 __s32 accept_ra_defrtr;
 __s32 accept_ra_pinfo;







 __s32 proxy_ndp;
 __s32 accept_source_route;






 void *sysctl;
};


enum {
 DEVCONF_FORWARDING = 0,
 DEVCONF_HOPLIMIT,
 DEVCONF_MTU6,
 DEVCONF_ACCEPT_RA,
 DEVCONF_ACCEPT_REDIRECTS,
 DEVCONF_AUTOCONF,
 DEVCONF_DAD_TRANSMITS,
 DEVCONF_RTR_SOLICITS,
 DEVCONF_RTR_SOLICIT_INTERVAL,
 DEVCONF_RTR_SOLICIT_DELAY,
 DEVCONF_USE_TEMPADDR,
 DEVCONF_TEMP_VALID_LFT,
 DEVCONF_TEMP_PREFERED_LFT,
 DEVCONF_REGEN_MAX_RETRY,
 DEVCONF_MAX_DESYNC_FACTOR,
 DEVCONF_MAX_ADDRESSES,
 DEVCONF_FORCE_MLD_VERSION,
 DEVCONF_ACCEPT_RA_DEFRTR,
 DEVCONF_ACCEPT_RA_PINFO,
 DEVCONF_ACCEPT_RA_RTR_PREF,
 DEVCONF_RTR_PROBE_INTERVAL,
 DEVCONF_ACCEPT_RA_RT_INFO_MAX_PLEN,
 DEVCONF_PROXY_NDP,
 DEVCONF_OPTIMISTIC_DAD,
 DEVCONF_ACCEPT_SOURCE_ROUTE,
 DEVCONF_MC_FORWARDING,
 DEVCONF_MAX
};


# 1 "linux-2.6.26/include/linux/icmpv6.h" 1





struct icmp6hdr {

 __u8 icmp6_type;
 __u8 icmp6_code;
 __sum16 icmp6_cksum;


 union {
  __be32 un_data32[1];
  __be16 un_data16[2];
  __u8 un_data8[4];

  struct icmpv6_echo {
   __be16 identifier;
   __be16 sequence;
  } u_echo;

                struct icmpv6_nd_advt {

                        __u32 reserved:5,
                          override:1,
                          solicited:1,
                          router:1,
     reserved2:24;
# 38 "linux-2.6.26/include/linux/icmpv6.h"
                } u_nd_advt;

                struct icmpv6_nd_ra {
   __u8 hop_limit;

   __u8 reserved:4,
     router_pref:2,
     other:1,
     managed:1;
# 56 "linux-2.6.26/include/linux/icmpv6.h"
   __be16 rt_lifetime;
                } u_nd_ra;

 } icmp6_dataun;
# 76 "linux-2.6.26/include/linux/icmpv6.h"
};




static inline  __attribute__((always_inline)) struct icmp6hdr *icmp6_hdr(const struct sk_buff *skb)
{
 return (struct icmp6hdr *)skb_transport_header(skb);
}
# 152 "linux-2.6.26/include/linux/icmpv6.h"
struct icmp6_filter {
 __u32 data[8];
};
# 174 "linux-2.6.26/include/linux/icmpv6.h"
extern void icmpv6_send(struct sk_buff *skb,
          int type, int code,
          __u32 info,
          struct net_device *dev);

extern int icmpv6_init(void);
extern int icmpv6_err_convert(int type, int code,
          int *err);
extern void icmpv6_cleanup(void);
extern void icmpv6_param_prob(struct sk_buff *skb,
         int code, int pos);

struct flowi;
struct in6_addr;
extern void icmpv6_flow_init(struct sock *sk,
        struct flowi *fl,
        u8 type,
        const struct in6_addr *saddr,
        const struct in6_addr *daddr,
        int oif);
# 202 "linux-2.6.26/include/linux/ipv6.h" 2
# 1 "linux-2.6.26/include/linux/tcp.h" 1
# 24 "linux-2.6.26/include/linux/tcp.h"
struct tcphdr {
 __be16 source;
 __be16 dest;
 __be32 seq;
 __be32 ack_seq;

 __u16 res1:4,
  doff:4,
  fin:1,
  syn:1,
  rst:1,
  psh:1,
  ack:1,
  urg:1,
  ece:1,
  cwr:1;
# 54 "linux-2.6.26/include/linux/tcp.h"
 __be16 window;
 __sum16 check;
 __be16 urg_ptr;
};






union tcp_word_hdr {
 struct tcphdr hdr;
 __be32 words[5];
};



enum {
 TCP_FLAG_CWR = (( __be32)((__u32)( (((__u32)((0x00800000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00800000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00800000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00800000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_FLAG_ECE = (( __be32)((__u32)( (((__u32)((0x00400000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00400000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00400000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00400000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_FLAG_URG = (( __be32)((__u32)( (((__u32)((0x00200000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00200000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00200000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00200000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_FLAG_ACK = (( __be32)((__u32)( (((__u32)((0x00100000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00100000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00100000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00100000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_FLAG_PSH = (( __be32)((__u32)( (((__u32)((0x00080000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00080000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00080000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00080000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_FLAG_RST = (( __be32)((__u32)( (((__u32)((0x00040000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00040000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00040000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00040000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_FLAG_SYN = (( __be32)((__u32)( (((__u32)((0x00020000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00020000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00020000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00020000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_FLAG_FIN = (( __be32)((__u32)( (((__u32)((0x00010000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x00010000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x00010000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x00010000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_RESERVED_BITS = (( __be32)((__u32)( (((__u32)((0x0F000000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x0F000000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x0F000000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x0F000000)) & (__u32)0xff000000UL) >> 24) ))),
 TCP_DATA_OFFSET = (( __be32)((__u32)( (((__u32)((0xF0000000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0xF0000000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0xF0000000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0xF0000000)) & (__u32)0xff000000UL) >> 24) )))
};
# 105 "linux-2.6.26/include/linux/tcp.h"
enum tcp_ca_state
{
 TCP_CA_Open = 0,

 TCP_CA_Disorder = 1,

 TCP_CA_CWR = 2,

 TCP_CA_Recovery = 3,

 TCP_CA_Loss = 4

};

struct tcp_info
{
 __u8 tcpi_state;
 __u8 tcpi_ca_state;
 __u8 tcpi_retransmits;
 __u8 tcpi_probes;
 __u8 tcpi_backoff;
 __u8 tcpi_options;
 __u8 tcpi_snd_wscale : 4, tcpi_rcv_wscale : 4;

 __u32 tcpi_rto;
 __u32 tcpi_ato;
 __u32 tcpi_snd_mss;
 __u32 tcpi_rcv_mss;

 __u32 tcpi_unacked;
 __u32 tcpi_sacked;
 __u32 tcpi_lost;
 __u32 tcpi_retrans;
 __u32 tcpi_fackets;


 __u32 tcpi_last_data_sent;
 __u32 tcpi_last_ack_sent;
 __u32 tcpi_last_data_recv;
 __u32 tcpi_last_ack_recv;


 __u32 tcpi_pmtu;
 __u32 tcpi_rcv_ssthresh;
 __u32 tcpi_rtt;
 __u32 tcpi_rttvar;
 __u32 tcpi_snd_ssthresh;
 __u32 tcpi_snd_cwnd;
 __u32 tcpi_advmss;
 __u32 tcpi_reordering;

 __u32 tcpi_rcv_rtt;
 __u32 tcpi_rcv_space;

 __u32 tcpi_total_retrans;
};




struct tcp_md5sig {
 struct __kernel_sockaddr_storage tcpm_addr;
 __u16 __tcpm_pad1;
 __u16 tcpm_keylen;
 __u32 __tcpm_pad2;
 __u8 tcpm_key[80];
};






# 1 "linux-2.6.26/include/net/inet_connection_sock.h" 1
# 21 "linux-2.6.26/include/net/inet_connection_sock.h"
# 1 "linux-2.6.26/include/linux/poll.h" 1



# 1 "linux-2.6.26/include/asm/poll.h" 1
# 1 "linux-2.6.26/include/asm-generic/poll.h" 1
# 31 "linux-2.6.26/include/asm-generic/poll.h"
struct pollfd {
 int fd;
 short events;
 short revents;
};
# 1 "linux-2.6.26/include/asm/poll.h" 2
# 5 "linux-2.6.26/include/linux/poll.h" 2
# 13 "linux-2.6.26/include/linux/poll.h"
# 1 "linux-2.6.26/include/asm/uaccess.h" 1
# 14 "linux-2.6.26/include/linux/poll.h" 2
# 26 "linux-2.6.26/include/linux/poll.h"
struct poll_table_struct;




typedef void (*poll_queue_proc)(struct file *, wait_queue_head_t *, struct poll_table_struct *);

typedef struct poll_table_struct {
 poll_queue_proc qproc;
} poll_table;

static inline  __attribute__((always_inline)) void poll_wait(struct file * filp, wait_queue_head_t * wait_address, poll_table *p)
{
 if (p && wait_address)
  p->qproc(filp, wait_address, p);
}

static inline  __attribute__((always_inline)) void init_poll_funcptr(poll_table *pt, poll_queue_proc qproc)
{
 pt->qproc = qproc;
}

struct poll_table_entry {
 struct file * filp;
 wait_queue_t wait;
 wait_queue_head_t * wait_address;
};




struct poll_wqueues {
 poll_table pt;
 struct poll_table_page * table;
 int error;
 int inline_index;
 struct poll_table_entry inline_entries[((832 - 256) / sizeof(struct poll_table_entry))];
};

extern void poll_initwait(struct poll_wqueues *pwq);
extern void poll_freewait(struct poll_wqueues *pwq);





typedef struct {
 unsigned long *in, *out, *ex;
 unsigned long *res_in, *res_out, *res_ex;
} fd_set_bits;
# 90 "linux-2.6.26/include/linux/poll.h"
static inline 
__attribute__((always_inline)) int get_fd_set(unsigned long nr, void *ufdset, unsigned long *fdset)
{
 nr = ((((nr)+(8*sizeof(long))-1)/(8*sizeof(long)))*sizeof(long));
 if (ufdset)
  return copy_from_user(fdset, ufdset, nr) ? -14 : 0;

 memset(fdset, 0, nr);
 return 0;
}

static inline  __attribute__((always_inline)) unsigned long
set_fd_set(unsigned long nr, void *ufdset, unsigned long *fdset)
{
 if (ufdset)
  return __copy_to_user(ufdset, fdset, ((((nr)+(8*sizeof(long))-1)/(8*sizeof(long)))*sizeof(long)));
 return 0;
}

static inline 
__attribute__((always_inline)) void zero_fd_set(unsigned long nr, unsigned long *fdset)
{
 memset(fdset, 0, ((((nr)+(8*sizeof(long))-1)/(8*sizeof(long)))*sizeof(long)));
}



extern int do_select(int n, fd_set_bits *fds, s64 *timeout);
extern int do_sys_poll(struct pollfd * ufds, unsigned int nfds,
         s64 *timeout);
extern int core_sys_select(int n, fd_set *inp, fd_set *outp,
      fd_set *exp, s64 *timeout);
# 22 "linux-2.6.26/include/net/inet_connection_sock.h" 2
# 31 "linux-2.6.26/include/net/inet_connection_sock.h"
struct inet_bind_bucket;
struct tcp_congestion_ops;





struct inet_connection_sock_af_ops {
 int (*queue_xmit)(struct sk_buff *skb, int ipfragok);
 void (*send_check)(struct sock *sk, int len,
      struct sk_buff *skb);
 int (*rebuild_header)(struct sock *sk);
 int (*conn_request)(struct sock *sk, struct sk_buff *skb);
 struct sock *(*syn_recv_sock)(struct sock *sk, struct sk_buff *skb,
          struct request_sock *req,
          struct dst_entry *dst);
 int (*remember_stamp)(struct sock *sk);
 u16 net_header_len;
 u16 sockaddr_len;
 int (*setsockopt)(struct sock *sk, int level, int optname,
      char *optval, int optlen);
 int (*getsockopt)(struct sock *sk, int level, int optname,
      char *optval, int *optlen);
 int (*compat_setsockopt)(struct sock *sk,
    int level, int optname,
    char *optval, int optlen);
 int (*compat_getsockopt)(struct sock *sk,
    int level, int optname,
    char *optval, int *optlen);
 void (*addr2sockaddr)(struct sock *sk, struct sockaddr *);
 int (*bind_conflict)(const struct sock *sk,
         const struct inet_bind_bucket *tb);
};
# 85 "linux-2.6.26/include/net/inet_connection_sock.h"
struct inet_connection_sock {

 struct inet_sock icsk_inet;
 struct request_sock_queue icsk_accept_queue;
 struct inet_bind_bucket *icsk_bind_hash;
 unsigned long icsk_timeout;
  struct timer_list icsk_retransmit_timer;
  struct timer_list icsk_delack_timer;
 __u32 icsk_rto;
 __u32 icsk_pmtu_cookie;
 const struct tcp_congestion_ops *icsk_ca_ops;
 const struct inet_connection_sock_af_ops *icsk_af_ops;
 unsigned int (*icsk_sync_mss)(struct sock *sk, u32 pmtu);
 __u8 icsk_ca_state;
 __u8 icsk_retransmits;
 __u8 icsk_pending;
 __u8 icsk_backoff;
 __u8 icsk_syn_retries;
 __u8 icsk_probes_out;
 __u16 icsk_ext_hdr_len;
 struct {
  __u8 pending;
  __u8 quick;
  __u8 pingpong;
  __u8 blocked;
  __u32 ato;
  unsigned long timeout;
  __u32 lrcvtime;
  __u16 last_seg_size;
  __u16 rcv_mss;
 } icsk_ack;
 struct {
  int enabled;


  int search_high;
  int search_low;


  int probe_size;
 } icsk_mtup;
 u32 icsk_ca_priv[16];

};






static inline  __attribute__((always_inline)) struct inet_connection_sock *inet_csk(const struct sock *sk)
{
 return (struct inet_connection_sock *)sk;
}

static inline  __attribute__((always_inline)) void *inet_csk_ca(const struct sock *sk)
{
 return (void *)inet_csk(sk)->icsk_ca_priv;
}

extern struct sock *inet_csk_clone(struct sock *sk,
       const struct request_sock *req,
       const gfp_t priority);

enum inet_csk_ack_state_t {
 ICSK_ACK_SCHED = 1,
 ICSK_ACK_TIMER = 2,
 ICSK_ACK_PUSHED = 4,
 ICSK_ACK_PUSHED2 = 8
};

extern void inet_csk_init_xmit_timers(struct sock *sk,
          void (*retransmit_handler)(unsigned long),
          void (*delack_handler)(unsigned long),
          void (*keepalive_handler)(unsigned long));
extern void inet_csk_clear_xmit_timers(struct sock *sk);

static inline  __attribute__((always_inline)) void inet_csk_schedule_ack(struct sock *sk)
{
 inet_csk(sk)->icsk_ack.pending |= ICSK_ACK_SCHED;
}

static inline  __attribute__((always_inline)) int inet_csk_ack_scheduled(const struct sock *sk)
{
 return inet_csk(sk)->icsk_ack.pending & ICSK_ACK_SCHED;
}

static inline  __attribute__((always_inline)) void inet_csk_delack_init(struct sock *sk)
{
 memset(&inet_csk(sk)->icsk_ack, 0, sizeof(inet_csk(sk)->icsk_ack));
}

extern void inet_csk_delete_keepalive_timer(struct sock *sk);
extern void inet_csk_reset_keepalive_timer(struct sock *sk, unsigned long timeout);


typedef  const char   _GLOBAL_229_T; extern  _GLOBAL_229_T  _GLOBAL_0_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_1_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_2_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_3_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_4_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_5_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_6_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_7_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_8_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_9_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_10_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_11_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_12_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_13_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_14_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_15_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_16_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_17_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_18_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_19_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_20_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_21_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_22_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_23_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_24_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_25_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_26_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_27_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_28_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_29_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_30_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_31_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_32_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_33_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_34_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_35_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_36_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_37_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_38_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_39_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_40_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_41_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_42_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_43_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_44_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_45_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_46_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_47_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_48_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_49_inet_csk_timer_bug_msg_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet_csk_timer_bug_msg_I) *_GLOBAL_inet_csk_timer_bug_msg_21_A[NUM_STACKS] = { &_GLOBAL_0_inet_csk_timer_bug_msg_I, &_GLOBAL_1_inet_csk_timer_bug_msg_I, &_GLOBAL_2_inet_csk_timer_bug_msg_I, &_GLOBAL_3_inet_csk_timer_bug_msg_I, &_GLOBAL_4_inet_csk_timer_bug_msg_I, &_GLOBAL_5_inet_csk_timer_bug_msg_I, &_GLOBAL_6_inet_csk_timer_bug_msg_I, &_GLOBAL_7_inet_csk_timer_bug_msg_I, &_GLOBAL_8_inet_csk_timer_bug_msg_I, &_GLOBAL_9_inet_csk_timer_bug_msg_I, &_GLOBAL_10_inet_csk_timer_bug_msg_I, &_GLOBAL_11_inet_csk_timer_bug_msg_I, &_GLOBAL_12_inet_csk_timer_bug_msg_I, &_GLOBAL_13_inet_csk_timer_bug_msg_I, &_GLOBAL_14_inet_csk_timer_bug_msg_I, &_GLOBAL_15_inet_csk_timer_bug_msg_I, &_GLOBAL_16_inet_csk_timer_bug_msg_I, &_GLOBAL_17_inet_csk_timer_bug_msg_I, &_GLOBAL_18_inet_csk_timer_bug_msg_I, &_GLOBAL_19_inet_csk_timer_bug_msg_I, &_GLOBAL_20_inet_csk_timer_bug_msg_I, &_GLOBAL_21_inet_csk_timer_bug_msg_I, &_GLOBAL_22_inet_csk_timer_bug_msg_I, &_GLOBAL_23_inet_csk_timer_bug_msg_I, &_GLOBAL_24_inet_csk_timer_bug_msg_I, &_GLOBAL_25_inet_csk_timer_bug_msg_I, &_GLOBAL_26_inet_csk_timer_bug_msg_I, &_GLOBAL_27_inet_csk_timer_bug_msg_I, &_GLOBAL_28_inet_csk_timer_bug_msg_I, &_GLOBAL_29_inet_csk_timer_bug_msg_I, &_GLOBAL_30_inet_csk_timer_bug_msg_I, &_GLOBAL_31_inet_csk_timer_bug_msg_I, &_GLOBAL_32_inet_csk_timer_bug_msg_I, &_GLOBAL_33_inet_csk_timer_bug_msg_I, &_GLOBAL_34_inet_csk_timer_bug_msg_I, &_GLOBAL_35_inet_csk_timer_bug_msg_I, &_GLOBAL_36_inet_csk_timer_bug_msg_I, &_GLOBAL_37_inet_csk_timer_bug_msg_I, &_GLOBAL_38_inet_csk_timer_bug_msg_I, &_GLOBAL_39_inet_csk_timer_bug_msg_I, &_GLOBAL_40_inet_csk_timer_bug_msg_I, &_GLOBAL_41_inet_csk_timer_bug_msg_I, &_GLOBAL_42_inet_csk_timer_bug_msg_I, &_GLOBAL_43_inet_csk_timer_bug_msg_I, &_GLOBAL_44_inet_csk_timer_bug_msg_I, &_GLOBAL_45_inet_csk_timer_bug_msg_I, &_GLOBAL_46_inet_csk_timer_bug_msg_I, &_GLOBAL_47_inet_csk_timer_bug_msg_I, &_GLOBAL_48_inet_csk_timer_bug_msg_I, &_GLOBAL_49_inet_csk_timer_bug_msg_I, };   


static inline  __attribute__((always_inline)) void inet_csk_clear_xmit_timer(struct sock *sk, const int what)
{
 struct inet_connection_sock *icsk = inet_csk(sk);

 if (what == 1 || what == 3) {
  icsk->icsk_pending = 0;



 } else if (what == 2) {
  icsk->icsk_ack.blocked = icsk->icsk_ack.pending = 0;



 }

 else {
  ({ if (0) printk("<7>" "%s", (*_GLOBAL_inet_csk_timer_bug_msg_21_A[get_stack_id()])); 0; });
 }

}




static inline  __attribute__((always_inline)) void inet_csk_reset_xmit_timer(struct sock *sk, const int what,
          unsigned long when,
          const unsigned long max_when)
{
 struct inet_connection_sock *icsk = inet_csk(sk);

 if (when > max_when) {

  ({ if (0) printk("<7>" "reset_xmit_timer: sk=%p %d when=0x%lx, caller=%p\n", sk, what, when, current_text_addr()); 0; })
                                        ;

  when = max_when;
 }

 if (what == 1 || what == 3) {
  icsk->icsk_pending = what;
  icsk->icsk_timeout = global_jiffies[get_stack_id()] + when;
  sk_reset_timer(sk, &icsk->icsk_retransmit_timer, icsk->icsk_timeout);
 } else if (what == 2) {
  icsk->icsk_ack.pending |= ICSK_ACK_TIMER;
  icsk->icsk_ack.timeout = global_jiffies[get_stack_id()] + when;
  sk_reset_timer(sk, &icsk->icsk_delack_timer, icsk->icsk_ack.timeout);
 }

 else {
  ({ if (0) printk("<7>" "%s", (*_GLOBAL_inet_csk_timer_bug_msg_21_A[get_stack_id()])); 0; });
 }

}

extern struct sock *inet_csk_accept(struct sock *sk, int flags, int *err);

extern struct request_sock *inet_csk_search_req(const struct sock *sk,
      struct request_sock ***prevp,
      const __be16 rport,
      const __be32 raddr,
      const __be32 laddr);
extern int inet_csk_bind_conflict(const struct sock *sk,
      const struct inet_bind_bucket *tb);
extern int inet_csk_get_port(struct sock *sk, unsigned short snum);

extern struct dst_entry* inet_csk_route_req(struct sock *sk,
         const struct request_sock *req);

static inline  __attribute__((always_inline)) void inet_csk_reqsk_queue_add(struct sock *sk,
         struct request_sock *req,
         struct sock *child)
{
 reqsk_queue_add(&inet_csk(sk)->icsk_accept_queue, req, sk, child);
}

extern void inet_csk_reqsk_queue_hash_add(struct sock *sk,
       struct request_sock *req,
       unsigned long timeout);

static inline  __attribute__((always_inline)) void inet_csk_reqsk_queue_removed(struct sock *sk,
      struct request_sock *req)
{
 if (reqsk_queue_removed(&inet_csk(sk)->icsk_accept_queue, req) == 0)
  inet_csk_delete_keepalive_timer(sk);
}

static inline  __attribute__((always_inline)) void inet_csk_reqsk_queue_added(struct sock *sk,
           const unsigned long timeout)
{
 if (reqsk_queue_added(&inet_csk(sk)->icsk_accept_queue) == 0)
  inet_csk_reset_keepalive_timer(sk, timeout);
}

static inline  __attribute__((always_inline)) int inet_csk_reqsk_queue_len(const struct sock *sk)
{
 return reqsk_queue_len(&inet_csk(sk)->icsk_accept_queue);
}

static inline  __attribute__((always_inline)) int inet_csk_reqsk_queue_young(const struct sock *sk)
{
 return reqsk_queue_len_young(&inet_csk(sk)->icsk_accept_queue);
}

static inline  __attribute__((always_inline)) int inet_csk_reqsk_queue_is_full(const struct sock *sk)
{
 return reqsk_queue_is_full(&inet_csk(sk)->icsk_accept_queue);
}

static inline  __attribute__((always_inline)) void inet_csk_reqsk_queue_unlink(struct sock *sk,
            struct request_sock *req,
            struct request_sock **prev)
{
 reqsk_queue_unlink(&inet_csk(sk)->icsk_accept_queue, req, prev);
}

static inline  __attribute__((always_inline)) void inet_csk_reqsk_queue_drop(struct sock *sk,
          struct request_sock *req,
          struct request_sock **prev)
{
 inet_csk_reqsk_queue_unlink(sk, req, prev);
 inet_csk_reqsk_queue_removed(sk, req);
 reqsk_free(req);
}

extern void inet_csk_reqsk_queue_prune(struct sock *parent,
           const unsigned long interval,
           const unsigned long timeout,
           const unsigned long max_rto);

extern void inet_csk_destroy_sock(struct sock *sk);




static inline  __attribute__((always_inline)) unsigned int inet_csk_listen_poll(const struct sock *sk)
{
 return !reqsk_queue_empty(&inet_csk(sk)->icsk_accept_queue) ?
   (0x0001 | 0x0040) : 0;
}

extern int inet_csk_listen_start(struct sock *sk, const int nr_table_entries);
extern void inet_csk_listen_stop(struct sock *sk);

extern void inet_csk_addr2sockaddr(struct sock *sk, struct sockaddr *uaddr);

extern int inet_csk_compat_getsockopt(struct sock *sk, int level, int optname,
          char *optval, int *optlen);
extern int inet_csk_compat_setsockopt(struct sock *sk, int level, int optname,
          char *optval, int optlen);
# 179 "linux-2.6.26/include/linux/tcp.h" 2
# 1 "linux-2.6.26/include/net/inet_timewait_sock.h" 1
# 27 "linux-2.6.26/include/net/inet_timewait_sock.h"
# 1 "linux-2.6.26/include/net/tcp_states.h" 1
# 16 "linux-2.6.26/include/net/tcp_states.h"
enum {
 TCP_ESTABLISHED = 1,
 TCP_SYN_SENT,
 TCP_SYN_RECV,
 TCP_FIN_WAIT1,
 TCP_FIN_WAIT2,
 TCP_TIME_WAIT,
 TCP_CLOSE,
 TCP_CLOSE_WAIT,
 TCP_LAST_ACK,
 TCP_LISTEN,
 TCP_CLOSING,

 TCP_MAX_STATES
};





enum {
 TCPF_ESTABLISHED = (1 << 1),
 TCPF_SYN_SENT = (1 << 2),
 TCPF_SYN_RECV = (1 << 3),
 TCPF_FIN_WAIT1 = (1 << 4),
 TCPF_FIN_WAIT2 = (1 << 5),
 TCPF_TIME_WAIT = (1 << 6),
 TCPF_CLOSE = (1 << 7),
 TCPF_CLOSE_WAIT = (1 << 8),
 TCPF_LAST_ACK = (1 << 9),
 TCPF_LISTEN = (1 << 10),
 TCPF_CLOSING = (1 << 11)
};
# 28 "linux-2.6.26/include/net/inet_timewait_sock.h" 2
# 1 "linux-2.6.26/include/net/timewait_sock.h" 1
# 17 "linux-2.6.26/include/net/timewait_sock.h"
struct timewait_sock_ops {
 struct kmem_cache *twsk_slab;
 unsigned int twsk_obj_size;
 int (*twsk_unique)(struct sock *sk,
           struct sock *sktw, void *twp);
 void (*twsk_destructor)(struct sock *sk);
};

static inline  __attribute__((always_inline)) int twsk_unique(struct sock *sk, struct sock *sktw, void *twp)
{
 if (sk->__sk_common.skc_prot->twsk_prot->twsk_unique != ((void *)0))
  return sk->__sk_common.skc_prot->twsk_prot->twsk_unique(sk, sktw, twp);
 return 0;
}

static inline  __attribute__((always_inline)) void twsk_destructor(struct sock *sk)
{
 do { if (__builtin_expect(!!(sk == ((void *)0)), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
 do { if (__builtin_expect(!!(sk->__sk_common.skc_prot == ((void *)0)), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
 do { if (__builtin_expect(!!(sk->__sk_common.skc_prot->twsk_prot == ((void *)0)), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
 if (sk->__sk_common.skc_prot->twsk_prot->twsk_destructor != ((void *)0))
  sk->__sk_common.skc_prot->twsk_prot->twsk_destructor(sk);
}
# 29 "linux-2.6.26/include/net/inet_timewait_sock.h" 2

# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 31 "linux-2.6.26/include/net/inet_timewait_sock.h" 2

struct inet_hashinfo;
# 66 "linux-2.6.26/include/net/inet_timewait_sock.h"
struct inet_timewait_death_row {

 int twcal_hand;
 unsigned long twcal_jiffie;
 struct timer_list twcal_timer;
 struct hlist_head twcal_row[(1 << 5)];

 spinlock_t death_lock;
 int tw_count;
 int period;
 u32 thread_slots;
 struct work_struct twkill_work;
 struct timer_list tw_timer;
 int slot;
 struct hlist_head cells[8];
 struct inet_hashinfo *hashinfo;
 int sysctl_tw_recycle;
 int sysctl_max_tw_buckets;
};

extern void inet_twdr_hangman(unsigned long data);
extern void inet_twdr_twkill_work(struct work_struct *work);
extern void inet_twdr_twcal_tick(unsigned long data);







struct inet_bind_bucket;






struct inet_timewait_sock {




 struct sock_common __tw_common;
# 119 "linux-2.6.26/include/net/inet_timewait_sock.h"
 int tw_timeout;
 volatile unsigned char tw_substate;

 unsigned char tw_rcv_wscale;


 __be16 tw_sport;
 __be32 tw_daddr __attribute__((aligned(8))) ;
 __be32 tw_rcv_saddr;
 __be16 tw_dport;
 __u16 tw_num;

 __u8 tw_ipv6only:1;

 __u16 tw_ipv6_offset;
 unsigned long tw_ttd;
 struct inet_bind_bucket *tw_tb;
 struct hlist_node tw_death_node;
};

static inline  __attribute__((always_inline)) void inet_twsk_add_node(struct inet_timewait_sock *tw,
          struct hlist_head *list)
{
 hlist_add_head(&tw->__tw_common.skc_node, list);
}

static inline  __attribute__((always_inline)) void inet_twsk_add_bind_node(struct inet_timewait_sock *tw,
        struct hlist_head *list)
{
 hlist_add_head(&tw->__tw_common.skc_bind_node, list);
}

static inline  __attribute__((always_inline)) int inet_twsk_dead_hashed(const struct inet_timewait_sock *tw)
{
 return !hlist_unhashed(&tw->tw_death_node);
}

static inline  __attribute__((always_inline)) void inet_twsk_dead_node_init(struct inet_timewait_sock *tw)
{
 tw->tw_death_node.pprev = ((void *)0);
}

static inline  __attribute__((always_inline)) void __inet_twsk_del_dead_node(struct inet_timewait_sock *tw)
{
 __hlist_del(&tw->tw_death_node);
 inet_twsk_dead_node_init(tw);
}

static inline  __attribute__((always_inline)) int inet_twsk_del_dead_node(struct inet_timewait_sock *tw)
{
 if (inet_twsk_dead_hashed(tw)) {
  __inet_twsk_del_dead_node(tw);
  return 1;
 }
 return 0;
}
# 185 "linux-2.6.26/include/net/inet_timewait_sock.h"
static inline  __attribute__((always_inline)) struct inet_timewait_sock *inet_twsk(const struct sock *sk)
{
 return (struct inet_timewait_sock *)sk;
}

static inline  __attribute__((always_inline)) __be32 inet_rcv_saddr(const struct sock *sk)
{
 return __builtin_expect(!!(sk->__sk_common.skc_state != TCP_TIME_WAIT), 1) ?
  inet_sk(sk)->rcv_saddr : inet_twsk(sk)->tw_rcv_saddr;
}

extern void inet_twsk_put(struct inet_timewait_sock *tw);

extern struct inet_timewait_sock *inet_twsk_alloc(const struct sock *sk,
        const int state);

extern void __inet_twsk_hashdance(struct inet_timewait_sock *tw,
      struct sock *sk,
      struct inet_hashinfo *hashinfo);

extern void inet_twsk_schedule(struct inet_timewait_sock *tw,
          struct inet_timewait_death_row *twdr,
          const int timeo, const int timewait_len);
extern void inet_twsk_deschedule(struct inet_timewait_sock *tw,
     struct inet_timewait_death_row *twdr);

static inline 
__attribute__((always_inline)) struct net *twsk_net(const struct inet_timewait_sock *twsk)
{



 return &global_init_net[get_stack_id()];

}

static inline 
__attribute__((always_inline)) void twsk_net_set(struct inet_timewait_sock *twsk, struct net *net)
{



}
# 180 "linux-2.6.26/include/linux/tcp.h" 2

static inline  __attribute__((always_inline)) struct tcphdr *tcp_hdr(const struct sk_buff *skb)
{
 return (struct tcphdr *)skb_transport_header(skb);
}

static inline  __attribute__((always_inline)) unsigned int tcp_hdrlen(const struct sk_buff *skb)
{
 return tcp_hdr(skb)->doff * 4;
}

static inline  __attribute__((always_inline)) unsigned int tcp_optlen(const struct sk_buff *skb)
{
 return (tcp_hdr(skb)->doff - 5) * 4;
}


struct tcp_sack_block_wire {
 __be32 start_seq;
 __be32 end_seq;
};

struct tcp_sack_block {
 u32 start_seq;
 u32 end_seq;
};

struct tcp_options_received {

 long ts_recent_stamp;
 u32 ts_recent;
 u32 rcv_tsval;
 u32 rcv_tsecr;
 u16 saw_tstamp : 1,
  tstamp_ok : 1,
  dsack : 1,
  wscale_ok : 1,
  sack_ok : 4,
  snd_wscale : 4,
  rcv_wscale : 4;

 u8 eff_sacks;
 u8 num_sacks;
 u16 user_mss;
 u16 mss_clamp;
};

struct tcp_request_sock {
 struct inet_request_sock req;




 u32 rcv_isn;
 u32 snt_isn;
};

static inline  __attribute__((always_inline)) struct tcp_request_sock *tcp_rsk(const struct request_sock *req)
{
 return (struct tcp_request_sock *)req;
}

struct tcp_sock {

 struct inet_connection_sock inet_conn;
 u16 tcp_header_len;
 u16 xmit_size_goal;





 __be32 pred_flags;






  u32 rcv_nxt;
 u32 copied_seq;
 u32 rcv_wup;
  u32 snd_nxt;

  u32 snd_una;
  u32 snd_sml;
 u32 rcv_tstamp;
 u32 lsndtime;


 struct {
  struct sk_buff_head prequeue;
  struct task_struct *task;
  struct iovec *iov;
  int memory;
  int len;







 } ucopy;

 u32 snd_wl1;
 u32 snd_wnd;
 u32 max_window;
 u32 mss_cache;

 u32 window_clamp;
 u32 rcv_ssthresh;

 u32 frto_highmark;
 u8 reordering;
 u8 frto_counter;
 u8 nonagle;
 u8 keepalive_probes;


 u32 srtt;
 u32 mdev;
 u32 mdev_max;
 u32 rttvar;
 u32 rtt_seq;

 u32 packets_out;
 u32 retrans_out;



 struct tcp_options_received rx_opt;




  u32 snd_ssthresh;
  u32 snd_cwnd;
 u32 snd_cwnd_cnt;
 u32 snd_cwnd_clamp;
 u32 snd_cwnd_used;
 u32 snd_cwnd_stamp;

 struct sk_buff_head out_of_order_queue;

  u32 rcv_wnd;
 u32 write_seq;
 u32 pushed_seq;


 struct tcp_sack_block duplicate_sack[1];
 struct tcp_sack_block selective_acks[4];

 struct tcp_sack_block recv_sack_cache[4];

 struct sk_buff *highest_sack;





 struct sk_buff* lost_skb_hint;

 struct sk_buff *scoreboard_skb_hint;
 struct sk_buff *retransmit_skb_hint;
 struct sk_buff *forward_skb_hint;

 int lost_cnt_hint;
 int retransmit_cnt_hint;

 u32 lost_retrans_low;

 u16 advmss;
 u32 prior_ssthresh;
 u32 lost_out;
 u32 sacked_out;
 u32 fackets_out;
 u32 high_seq;

 u32 retrans_stamp;


 u32 undo_marker;
 int undo_retrans;
 u32 urg_seq;
 u16 urg_data;
 u8 urg_mode;
 u8 ecn_flags;
 u32 snd_up;

 u32 total_retrans;
 u32 bytes_acked;

 unsigned int keepalive_time;
 unsigned int keepalive_intvl;
 int linger2;

 unsigned long last_synq_overflow;

 u32 tso_deferred;


 struct {
  u32 rtt;
  u32 seq;
  u32 time;
 } rcv_rtt_est;


 struct {
  int space;
  u32 seq;
  u32 time;
 } rcvq_space;


 struct {
  u32 probe_seq_start;
  u32 probe_seq_end;
 } mtu_probe;
# 408 "linux-2.6.26/include/linux/tcp.h"
};

static inline  __attribute__((always_inline)) struct tcp_sock *tcp_sk(const struct sock *sk)
{
 return (struct tcp_sock *)sk;
}

struct tcp_timewait_sock {
 struct inet_timewait_sock tw_sk;
 u32 tw_rcv_nxt;
 u32 tw_snd_nxt;
 u32 tw_rcv_wnd;
 u32 tw_ts_recent;
 long tw_ts_recent_stamp;




};

static inline  __attribute__((always_inline)) struct tcp_timewait_sock *tcp_twsk(const struct sock *sk)
{
 return (struct tcp_timewait_sock *)sk;
}
# 203 "linux-2.6.26/include/linux/ipv6.h" 2
# 1 "linux-2.6.26/include/linux/udp.h" 1
# 22 "linux-2.6.26/include/linux/udp.h"
struct udphdr {
 __be16 source;
 __be16 dest;
 __be16 len;
 __sum16 check;
};
# 42 "linux-2.6.26/include/linux/udp.h"
static inline  __attribute__((always_inline)) struct udphdr *udp_hdr(const struct sk_buff *skb)
{
 return (struct udphdr *)skb_transport_header(skb);
}



struct udp_sock {

 struct inet_sock inet;
 int pending;
 unsigned int corkflag;
   __u16 encap_type;




 __u16 len;



 __u16 pcslen;
 __u16 pcrlen;




 __u8 pcflag;
 __u8 unused[3];



 int (*encap_rcv)(struct sock *sk, struct sk_buff *skb);
};

static inline  __attribute__((always_inline)) struct udp_sock *udp_sk(const struct sock *sk)
{
 return (struct udp_sock *)sk;
}
# 204 "linux-2.6.26/include/linux/ipv6.h" 2



static inline  __attribute__((always_inline)) struct ipv6hdr *ipv6_hdr(const struct sk_buff *skb)
{
 return (struct ipv6hdr *)skb_network_header(skb);
}

static inline  __attribute__((always_inline)) struct ipv6hdr *ipipv6_hdr(const struct sk_buff *skb)
{
 return (struct ipv6hdr *)skb_transport_header(skb);
}






struct inet6_skb_parm {
 int iif;
 __u16 ra;
 __u16 hop;
 __u16 dst0;
 __u16 srcrt;
 __u16 dst1;
 __u16 lastopt;
 __u32 nhoff;
 __u16 flags;






};



static inline  __attribute__((always_inline)) int inet6_iif(const struct sk_buff *skb)
{
 return ((struct inet6_skb_parm*)((skb)->cb))->iif;
}

struct inet6_request_sock {
 struct in6_addr loc_addr;
 struct in6_addr rmt_addr;
 struct sk_buff *pktopts;
 int iif;
};

struct tcp6_request_sock {
 struct tcp_request_sock tcp6rsk_tcp;
 struct inet6_request_sock tcp6rsk_inet6;
};

struct ipv6_mc_socklist;
struct ipv6_ac_socklist;
struct ipv6_fl_socklist;
# 271 "linux-2.6.26/include/linux/ipv6.h"
struct ipv6_pinfo {
 struct in6_addr saddr;
 struct in6_addr rcv_saddr;
 struct in6_addr daddr;
 struct in6_addr *daddr_cache;




 __be32 flow_label;
 __u32 frag_size;
# 291 "linux-2.6.26/include/linux/ipv6.h"
 __u16 __unused_1:7;
 __s16 hop_limit:9;
# 301 "linux-2.6.26/include/linux/ipv6.h"
 __u16 mc_loop:1,
    __unused_2:6;
 __s16 mcast_hops:9;

 int mcast_oif;


 union {
  struct {
   __u16 srcrt:1,
    osrcrt:1,
           rxinfo:1,
           rxoinfo:1,
    rxhlim:1,
    rxohlim:1,
    hopopts:1,
    ohopopts:1,
    dstopts:1,
    odstopts:1,
                                rxflow:1,
    rxtclass:1;
  } bits;
  __u16 all;
 } rxopt;


 __u8 recverr:1,
                         sndflow:1,
    pmtudisc:2,
    ipv6only:1,
    srcprefs:3;



 __u8 tclass;

 __u32 dst_cookie;

 struct ipv6_mc_socklist *ipv6_mc_list;
 struct ipv6_ac_socklist *ipv6_ac_list;
 struct ipv6_fl_socklist *ipv6_fl_list;

 struct ipv6_txoptions *opt;
 struct sk_buff *pktoptions;
 struct {
  struct ipv6_txoptions *opt;
  u8 hop_limit;
  u8 tclass;
 } cork;
};


struct raw6_sock {

 struct inet_sock inet;
 __u32 checksum;
 __u32 offset;
 struct icmp6_filter filter;

 struct ipv6_pinfo inet6;
};

struct udp6_sock {
 struct udp_sock udp;

 struct ipv6_pinfo inet6;
};

struct tcp6_sock {
 struct tcp_sock tcp;

 struct ipv6_pinfo inet6;
};

extern int inet6_sk_rebuild_header(struct sock *sk);


static inline  __attribute__((always_inline)) struct ipv6_pinfo * inet6_sk(const struct sock *__sk)
{
 return inet_sk(__sk)->pinet6;
}

static inline  __attribute__((always_inline)) struct inet6_request_sock *
   inet6_rsk(const struct request_sock *rsk)
{
 return (struct inet6_request_sock *)(((u8 *)rsk) +
          inet_rsk(rsk)->inet6_rsk_offset);
}

static inline  __attribute__((always_inline)) u32 inet6_rsk_offset(struct request_sock *rsk)
{
 return rsk->rsk_ops->obj_size - sizeof(struct inet6_request_sock);
}

static inline  __attribute__((always_inline)) struct request_sock *inet6_reqsk_alloc(struct request_sock_ops *ops)
{
 struct request_sock *req = reqsk_alloc(ops);

 if (req != ((void *)0)) {
  inet_rsk(req)->inet6_rsk_offset = inet6_rsk_offset(req);
  inet6_rsk(req)->pktopts = ((void *)0);
 }

 return req;
}

static inline  __attribute__((always_inline)) struct raw6_sock *raw6_sk(const struct sock *sk)
{
 return (struct raw6_sock *)sk;
}

static inline  __attribute__((always_inline)) void inet_sk_copy_descendant(struct sock *sk_to,
        const struct sock *sk_from)
{
 int ancestor_size = sizeof(struct inet_sock);

 if (sk_from->__sk_common.skc_family == 10)
  ancestor_size += sizeof(struct ipv6_pinfo);

 __inet_sk_copy_descendant(sk_to, sk_from, ancestor_size);
}




struct inet6_timewait_sock {
 struct in6_addr tw_v6_daddr;
 struct in6_addr tw_v6_rcv_saddr;
};

struct tcp6_timewait_sock {
 struct tcp_timewait_sock tcp6tw_tcp;
 struct inet6_timewait_sock tcp6tw_inet6;
};

static inline  __attribute__((always_inline)) u16 inet6_tw_offset(const struct proto *prot)
{
 return prot->twsk_prot->twsk_obj_size -
   sizeof(struct inet6_timewait_sock);
}

static inline  __attribute__((always_inline)) struct inet6_timewait_sock *inet6_twsk(const struct sock *sk)
{
 return (struct inet6_timewait_sock *)(((u8 *)sk) +
           inet_twsk(sk)->tw_ipv6_offset);
}

static inline  __attribute__((always_inline)) struct in6_addr *__inet6_rcv_saddr(const struct sock *sk)
{
 return __builtin_expect(!!(sk->__sk_common.skc_state != TCP_TIME_WAIT), 1) ?
  &inet6_sk(sk)->rcv_saddr : &inet6_twsk(sk)->tw_v6_rcv_saddr;
}

static inline  __attribute__((always_inline)) struct in6_addr *inet6_rcv_saddr(const struct sock *sk)
{
 return sk->__sk_common.skc_family == 10 ? __inet6_rcv_saddr(sk) : ((void *)0);
}

static inline  __attribute__((always_inline)) int inet_v6_ipv6only(const struct sock *sk)
{
 return __builtin_expect(!!(sk->__sk_common.skc_state != TCP_TIME_WAIT), 1) ?
  ((sk)->__sk_common.skc_family == 10 && (inet6_sk(sk)->ipv6only)) : inet_twsk(sk)->tw_ipv6only;
}
# 299 "linux-2.6.26/include/net/ip.h" 2


static __inline__  __attribute__((always_inline)) void inet_reset_saddr(struct sock *sk)
{
 inet_sk(sk)->rcv_saddr = inet_sk(sk)->saddr = 0;

 if (sk->__sk_common.skc_family == 10) {
  struct ipv6_pinfo *np = inet6_sk(sk);

  memset(&np->saddr, 0, sizeof(np->saddr));
  memset(&np->rcv_saddr, 0, sizeof(np->rcv_saddr));
 }

}



extern int ip_call_ra_chain(struct sk_buff *skb);





enum ip_defrag_users
{
 IP_DEFRAG_LOCAL_DELIVER,
 IP_DEFRAG_CALL_RA_CHAIN,
 IP_DEFRAG_CONNTRACK_IN,
 IP_DEFRAG_CONNTRACK_OUT,
 IP_DEFRAG_VS_IN,
 IP_DEFRAG_VS_OUT,
 IP_DEFRAG_VS_FWD
};

int ip_defrag(struct sk_buff *skb, u32 user);
int ip_frag_mem(struct net *net);
int ip_frag_nqueues(struct net *net);





extern int ip_forward(struct sk_buff *skb);





extern void ip_options_build(struct sk_buff *skb, struct ip_options *opt, __be32 daddr, struct rtable *rt, int is_frag);
extern int ip_options_echo(struct ip_options *dopt, struct sk_buff *skb);
extern void ip_options_fragment(struct sk_buff *skb);
extern int ip_options_compile(struct net *net,
         struct ip_options *opt, struct sk_buff *skb);
extern int ip_options_get(struct net *net, struct ip_options **optp,
     unsigned char *data, int optlen);
extern int ip_options_get_from_user(struct net *net, struct ip_options **optp,
        unsigned char *data, int optlen);
extern void ip_options_undo(struct ip_options * opt);
extern void ip_forward_options(struct sk_buff *skb);
extern int ip_options_rcv_srr(struct sk_buff *skb);





extern void ip_cmsg_recv(struct msghdr *msg, struct sk_buff *skb);
extern int ip_cmsg_send(struct net *net,
        struct msghdr *msg, struct ipcm_cookie *ipc);
extern int ip_setsockopt(struct sock *sk, int level, int optname, char *optval, int optlen);
extern int ip_getsockopt(struct sock *sk, int level, int optname, char *optval, int *optlen);
extern int compat_ip_setsockopt(struct sock *sk, int level,
   int optname, char *optval, int optlen);
extern int compat_ip_getsockopt(struct sock *sk, int level,
   int optname, char *optval, int *optlen);
extern int ip_ra_control(struct sock *sk, unsigned char on, void (*destructor)(struct sock *));

extern int ip_recv_error(struct sock *sk, struct msghdr *msg, int len);
extern void ip_icmp_error(struct sock *sk, struct sk_buff *skb, int err,
         __be16 port, u32 info, u8 *payload);
extern void ip_local_error(struct sock *sk, int err, __be32 daddr, __be16 dport,
          u32 info);




int ipv4_doint_and_flush(ctl_table *ctl, int write,
    struct file* filp, void *buffer,
    size_t *lenp, loff_t *ppos);
int ipv4_doint_and_flush_strategy(ctl_table *table, int *name, int nlen,
      void *oldval, size_t *oldlenp,
      void *newval, size_t newlen);
# 23 "linux-2.6.26/net/sysctl_net.c" 2
# 33 "linux-2.6.26/net/sysctl_net.c"
static struct list_head *
net_ctl_header_lookup(struct ctl_table_root *root, struct nsproxy *namespaces)
{
 return &namespaces->net_ns->sysctl_table_headers;
}

typedef  struct ctl_table_root   _GLOBAL_230_T; static  _GLOBAL_230_T  global_net_sysctl_root[NUM_STACKS] = {  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  { . lookup  = net_ctl_header_lookup  , } ,  };      
   


static int sysctl_net_init(struct net *net)
{
 INIT_LIST_HEAD(&net->sysctl_table_headers);
 return 0;
}

static void sysctl_net_exit(struct net *net)
{
 ({ int __ret_warn_on = !!(!list_empty(&net->sysctl_table_headers)); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_on_slowpath("linux-2.6.26/net/sysctl_net.c", 51); __builtin_expect(!!(__ret_warn_on), 0); });
 return;
}

typedef  struct pernet_operations   _GLOBAL_231_T; static  _GLOBAL_231_T  global_sysctl_pernet_ops[NUM_STACKS] = {  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  { . init  = sysctl_net_init  , . exit  = sysctl_net_exit   , } ,  };      
   
   


static   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) int sysctl_init(void)
{
 int ret;
 ret = register_pernet_subsys(&global_sysctl_pernet_ops[get_stack_id()]);
 if (ret)
  goto out;
 register_sysctl_root(&global_net_sysctl_root[get_stack_id()]);
out:
 return ret;
}
typedef  initcall_t  _GLOBAL_232_T; static  _GLOBAL_232_T  __initcall_sysctl_init4 __attribute__((__used__)) __attribute__((__section__(".initcall" "4" ".init")))  = sysctl_init ;       

struct ctl_table_header *register_net_sysctl_table(struct net *net,
 const struct ctl_path *path, struct ctl_table *table)
{
 struct nsproxy namespaces;
 namespaces = *nsc_get_task()->nsproxy;
 namespaces.net_ns = net;
 return __register_sysctl_paths(&global_net_sysctl_root[get_stack_id()],
     &namespaces, path, table);
}
;

void unregister_net_sysctl_table(struct ctl_table_header *header)
{
 unregister_sysctl_table(header);
}
;

