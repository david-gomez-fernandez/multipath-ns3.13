# 1 "linux-2.6.18/arch/x86_64/lib/csum-partial.c"
# 1 "/media/sda4/GIT/network-coding-ns-3-13/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "linux-2.6.18/include/linux/config.h" 1





# 1 "linux-2.6.18/include/linux/autoconf.h" 1
# 7 "linux-2.6.18/include/linux/config.h" 2
# 1 "<command-line>" 2
# 1 "linux-2.6.18/nsc/nsc_override.h" 1




#include "num_stacks.h"
static inline struct task_struct * get_nsc_task(void)
{
  typedef  struct task_struct   _GLOBAL_0_T; extern  _GLOBAL_0_T  * global_nsc_task[NUM_STACKS];    
  return global_nsc_task[get_stack_id()];
}
# 1 "<command-line>" 2
# 1 "linux-2.6.18/arch/x86_64/lib/csum-partial.c"







# 1 "linux-2.6.18/include/linux/compiler.h" 1
# 42 "linux-2.6.18/include/linux/compiler.h"
# 1 "linux-2.6.18/include/linux/compiler-gcc4.h" 1



# 1 "linux-2.6.18/include/linux/compiler-gcc.h" 1
# 5 "linux-2.6.18/include/linux/compiler-gcc4.h" 2
# 43 "linux-2.6.18/include/linux/compiler.h" 2
# 9 "linux-2.6.18/arch/x86_64/lib/csum-partial.c" 2
# 1 "linux-2.6.18/include/linux/module.h" 1
# 9 "linux-2.6.18/include/linux/module.h"
# 1 "linux-2.6.18/include/linux/sched.h" 1



# 1 "linux-2.6.18/include/linux/auxvec.h" 1



# 1 "linux-2.6.18/include/asm/auxvec.h" 1
# 5 "linux-2.6.18/include/linux/auxvec.h" 2
# 5 "linux-2.6.18/include/linux/sched.h" 2
# 38 "linux-2.6.18/include/linux/sched.h"
struct sched_param {
 int sched_priority;
};

# 1 "linux-2.6.18/include/asm/param.h" 1
# 43 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/linux/capability.h" 1
# 16 "linux-2.6.18/include/linux/capability.h"
# 1 "linux-2.6.18/include/linux/types.h" 1
# 14 "linux-2.6.18/include/linux/types.h"
# 1 "linux-2.6.18/include/linux/posix_types.h" 1



# 1 "linux-2.6.18/include/linux/stddef.h" 1
# 5 "linux-2.6.18/include/linux/posix_types.h" 2
# 36 "linux-2.6.18/include/linux/posix_types.h"
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "linux-2.6.18/include/asm/posix_types.h" 1
# 10 "linux-2.6.18/include/asm/posix_types.h"
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




static __inline__  __attribute__((always_inline)) void __FD_SET(unsigned long fd, __kernel_fd_set *fdsetp)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 fdsetp->fds_bits[_tmp] |= (1UL<<_rem);
}


static __inline__  __attribute__((always_inline)) void __FD_CLR(unsigned long fd, __kernel_fd_set *fdsetp)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 fdsetp->fds_bits[_tmp] &= ~(1UL<<_rem);
}


static __inline__  __attribute__((always_inline)) int __FD_ISSET(unsigned long fd, __const__ __kernel_fd_set *p)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 return (p->fds_bits[_tmp] & (1UL<<_rem)) != 0;
}






static __inline__  __attribute__((always_inline)) void __FD_ZERO(__kernel_fd_set *p)
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
# 48 "linux-2.6.18/include/linux/posix_types.h" 2
# 15 "linux-2.6.18/include/linux/types.h" 2
# 1 "linux-2.6.18/include/asm/types.h" 1





typedef unsigned short umode_t;






typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;

typedef __signed__ long long __s64;
typedef unsigned long long __u64;
# 36 "linux-2.6.18/include/asm/types.h"
typedef signed char s8;
typedef unsigned char u8;

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

typedef signed long long s64;
typedef unsigned long long u64;

typedef u64 dma64_addr_t;
typedef u64 dma_addr_t;

typedef u64 sector_t;
# 16 "linux-2.6.18/include/linux/types.h" 2



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


typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;
# 56 "linux-2.6.18/include/linux/types.h"
typedef __kernel_loff_t loff_t;
# 65 "linux-2.6.18/include/linux/types.h"
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
# 140 "linux-2.6.18/include/linux/types.h"
typedef unsigned long blkcnt_t;
# 169 "linux-2.6.18/include/linux/types.h"
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;

typedef __u64 __le64;
typedef __u64 __be64;



typedef unsigned gfp_t;




typedef u32 resource_size_t;




struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};
# 17 "linux-2.6.18/include/linux/capability.h" 2
# 32 "linux-2.6.18/include/linux/capability.h"
typedef struct __user_cap_header_struct {
 __u32 version;
 int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct {
        __u32 effective;
        __u32 permitted;
        __u32 inheritable;
} *cap_user_data_t;



# 1 "linux-2.6.18/include/linux/spinlock.h" 1
# 49 "linux-2.6.18/include/linux/spinlock.h"
# 1 "linux-2.6.18/include/linux/preempt.h" 1
# 9 "linux-2.6.18/include/linux/preempt.h"
# 1 "linux-2.6.18/include/linux/thread_info.h" 1
# 13 "linux-2.6.18/include/linux/thread_info.h"
struct restart_block {
 long (*fn)(struct restart_block *);
 unsigned long arg0, arg1, arg2, arg3;
};

extern long do_no_restart_syscall(struct restart_block *parm);

# 1 "linux-2.6.18/include/linux/bitops.h" 1
# 9 "linux-2.6.18/include/linux/bitops.h"
# 1 "linux-2.6.18/include/asm/bitops.h" 1







# 1 "linux-2.6.18/include/asm/alternative.h" 1






# 1 "linux-2.6.18/include/asm/cpufeature.h" 1
# 8 "linux-2.6.18/include/asm/alternative.h" 2

struct alt_instr {
 u8 *instr;
 u8 *replacement;
 u8 cpuid;
 u8 instrlen;
 u8 replacementlen;
 u8 pad[5];
};

extern void apply_alternatives(struct alt_instr *start, struct alt_instr *end);

struct module;
# 29 "linux-2.6.18/include/asm/alternative.h"
static inline  __attribute__((always_inline)) void alternatives_smp_module_add(struct module *mod, char *name,
     void *locks, void *locks_end,
     void *text, void *text_end) {}
static inline  __attribute__((always_inline)) void alternatives_smp_module_del(struct module *mod) {}
static inline  __attribute__((always_inline)) void alternatives_smp_switch(int smp) {}
# 9 "linux-2.6.18/include/asm/bitops.h" 2
# 22 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) void set_bit(int nr, volatile void * addr)
{
 __asm__ __volatile__( ""
  "btsl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"dIr" (nr) : "memory");
}
# 39 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) void __set_bit(int nr, volatile void * addr)
{
 __asm__ volatile(
  "btsl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"dIr" (nr) : "memory");
}
# 57 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) void clear_bit(int nr, volatile void * addr)
{
 __asm__ __volatile__( ""
  "btrl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"dIr" (nr));
}

static __inline__  __attribute__((always_inline)) void __clear_bit(int nr, volatile void * addr)
{
 __asm__ __volatile__(
  "btrl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"dIr" (nr));
}
# 85 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) void __change_bit(int nr, volatile void * addr)
{
 __asm__ __volatile__(
  "btcl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"dIr" (nr));
}
# 102 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) void change_bit(int nr, volatile void * addr)
{
 __asm__ __volatile__( ""
  "btcl %1,%0"
  :"+m" ((*(volatile long *) addr))
  :"dIr" (nr));
}
# 118 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) int test_and_set_bit(int nr, volatile void * addr)
{
 int oldbit;

 __asm__ __volatile__( ""
  "btsl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"dIr" (nr) : "memory");
 return oldbit;
}
# 138 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) int __test_and_set_bit(int nr, volatile void * addr)
{
 int oldbit;

 __asm__(
  "btsl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"dIr" (nr));
 return oldbit;
}
# 157 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) int test_and_clear_bit(int nr, volatile void * addr)
{
 int oldbit;

 __asm__ __volatile__( ""
  "btrl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"dIr" (nr) : "memory");
 return oldbit;
}
# 177 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) int __test_and_clear_bit(int nr, volatile void * addr)
{
 int oldbit;

 __asm__(
  "btrl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"dIr" (nr));
 return oldbit;
}


static __inline__  __attribute__((always_inline)) int __test_and_change_bit(int nr, volatile void * addr)
{
 int oldbit;

 __asm__ __volatile__(
  "btcl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"dIr" (nr) : "memory");
 return oldbit;
}
# 208 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) int test_and_change_bit(int nr, volatile void * addr)
{
 int oldbit;

 __asm__ __volatile__( ""
  "btcl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit),"+m" ((*(volatile long *) addr))
  :"dIr" (nr) : "memory");
 return oldbit;
}
# 228 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) int constant_test_bit(int nr, const volatile void * addr)
{
 return ((1UL << (nr & 31)) & (((const volatile unsigned int *) addr)[nr >> 5])) != 0;
}

static __inline__  __attribute__((always_inline)) int variable_test_bit(int nr, volatile const void * addr)
{
 int oldbit;

 __asm__ __volatile__(
  "btl %2,%1\n\tsbbl %0,%0"
  :"=r" (oldbit)
  :"m" ((*(volatile long *) addr)),"dIr" (nr));
 return oldbit;
}
# 251 "linux-2.6.18/include/asm/bitops.h"
extern long find_first_zero_bit(const unsigned long * addr, unsigned long size);
extern long find_next_zero_bit (const unsigned long * addr, long size, long offset);
extern long find_first_bit(const unsigned long * addr, unsigned long size);
extern long find_next_bit(const unsigned long * addr, long size, long offset);


static inline  __attribute__((always_inline)) unsigned long __scanbit(unsigned long val, unsigned long max)
{
 asm("bsfq %1,%0 ; cmovz %2,%0" : "=&r" (val) : "r" (val), "r" (max));
 return val;
}
# 286 "linux-2.6.18/include/asm/bitops.h"
extern unsigned long
find_next_zero_string(unsigned long *bitmap, long start, long nbits, int len);

static inline  __attribute__((always_inline)) void set_bit_string(unsigned long *bitmap, unsigned long i,
      int len)
{
 unsigned long end = i + len;
 while (i < end) {
  __set_bit(i, bitmap);
  i++;
 }
}

static inline  __attribute__((always_inline)) void __clear_bit_string(unsigned long *bitmap, unsigned long i,
        int len)
{
 unsigned long end = i + len;
 while (i < end) {
  __clear_bit(i, bitmap);
  i++;
 }
}







static __inline__  __attribute__((always_inline)) unsigned long ffz(unsigned long word)
{
 __asm__("bsfq %1,%0"
  :"=r" (word)
  :"r" (~word));
 return word;
}







static __inline__  __attribute__((always_inline)) unsigned long __ffs(unsigned long word)
{
 __asm__("bsfq %1,%0"
  :"=r" (word)
  :"rm" (word));
 return word;
}







static __inline__  __attribute__((always_inline)) unsigned long __fls(unsigned long word)
{
 __asm__("bsrq %1,%0"
  :"=r" (word)
  :"rm" (word));
 return word;
}



# 1 "linux-2.6.18/include/asm-generic/bitops/sched.h" 1
# 13 "linux-2.6.18/include/asm-generic/bitops/sched.h"
static inline  __attribute__((always_inline)) int sched_find_first_bit(const unsigned long *b)
{

 if (__builtin_expect(!!(b[0]), 0))
  return __ffs(b[0]);
 if (__builtin_expect(!!(b[1]), 0))
  return __ffs(b[1]) + 64;
 return __ffs(b[2]) + 128;
# 34 "linux-2.6.18/include/asm-generic/bitops/sched.h"
}
# 354 "linux-2.6.18/include/asm/bitops.h" 2
# 363 "linux-2.6.18/include/asm/bitops.h"
static __inline__  __attribute__((always_inline)) int ffs(int x)
{
 int r;

 __asm__("bsfl %1,%0\n\t"
  "cmovzl %2,%0"
  : "=r" (r) : "rm" (x), "r" (-1));
 return r+1;
}







static __inline__  __attribute__((always_inline)) int fls64(__u64 x)
{
 if (x == 0)
  return 0;
 return __fls(x) + 1;
}







static __inline__  __attribute__((always_inline)) int fls(int x)
{
 int r;

 __asm__("bsrl %1,%0\n\t"
  "cmovzl %2,%0"
  : "=&r" (r) : "rm" (x), "rm" (-1));
 return r+1;
}

# 1 "linux-2.6.18/include/asm-generic/bitops/hweight.h" 1





extern unsigned int hweight32(unsigned int w);
extern unsigned int hweight16(unsigned int w);
extern unsigned int hweight8(unsigned int w);
extern unsigned long hweight64(__u64 w);
# 403 "linux-2.6.18/include/asm/bitops.h" 2





# 1 "linux-2.6.18/include/asm-generic/bitops/ext2-non-atomic.h" 1



# 1 "linux-2.6.18/include/asm-generic/bitops/le.h" 1




# 1 "linux-2.6.18/include/asm/byteorder.h" 1
# 9 "linux-2.6.18/include/asm/byteorder.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u64 ___arch__swab64(__u64 x)
{
 __asm__("bswapq %0" : "=r" (x) : "0" (x));
 return x;
}

static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u32 ___arch__swab32(__u32 x)
{
 __asm__("bswapl %0" : "=r" (x) : "0" (x));
 return x;
}
# 31 "linux-2.6.18/include/asm/byteorder.h"
# 1 "linux-2.6.18/include/linux/byteorder/little_endian.h" 1
# 12 "linux-2.6.18/include/linux/byteorder/little_endian.h"
# 1 "linux-2.6.18/include/linux/byteorder/swab.h" 1
# 133 "linux-2.6.18/include/linux/byteorder/swab.h"
static __inline__   __attribute__((always_inline)) __attribute__((__const__)) __u16 __fswab16(__u16 x)
{
 return ({ __u16 __tmp = (x) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); });
}
static __inline__  __attribute__((always_inline)) __u16 __swab16p(const __u16 *x)
{
 return ({ __u16 __tmp = (*(x)) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); });
}
static __inline__  __attribute__((always_inline)) void __swab16s(__u16 *addr)
{
 do { *(addr) = ({ __u16 __tmp = (*((addr))) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); }); } while (0);
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
 do { *(addr) = ___arch__swab32(*((addr))); } while (0);
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
 do { *(addr) = ___arch__swab64(*((addr))); } while (0);
}
# 13 "linux-2.6.18/include/linux/byteorder/little_endian.h" 2
# 43 "linux-2.6.18/include/linux/byteorder/little_endian.h"
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
# 104 "linux-2.6.18/include/linux/byteorder/little_endian.h"
# 1 "linux-2.6.18/include/linux/byteorder/generic.h" 1
# 154 "linux-2.6.18/include/linux/byteorder/generic.h"
extern __u32 ntohl(__be32);
extern __be32 htonl(__u32);
extern __u16 ntohs(__be16);
extern __be16 htons(__u16);
# 105 "linux-2.6.18/include/linux/byteorder/little_endian.h" 2
# 32 "linux-2.6.18/include/asm/byteorder.h" 2
# 6 "linux-2.6.18/include/asm-generic/bitops/le.h" 2
# 5 "linux-2.6.18/include/asm-generic/bitops/ext2-non-atomic.h" 2
# 409 "linux-2.6.18/include/asm/bitops.h" 2






# 1 "linux-2.6.18/include/asm-generic/bitops/minix.h" 1
# 416 "linux-2.6.18/include/asm/bitops.h" 2
# 10 "linux-2.6.18/include/linux/bitops.h" 2

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

static inline  __attribute__((always_inline)) unsigned fls_long(unsigned long l)
{
 if (sizeof(l) == 4)
  return fls(l);
 return fls64(l);
}
# 21 "linux-2.6.18/include/linux/thread_info.h" 2
# 1 "linux-2.6.18/include/asm/thread_info.h" 1
# 12 "linux-2.6.18/include/asm/thread_info.h"
# 1 "linux-2.6.18/include/asm/page.h" 1
# 46 "linux-2.6.18/include/asm/page.h"
typedef  unsigned long   _GLOBAL_1_T; extern  _GLOBAL_1_T  global_end_pfn[NUM_STACKS];    

void clear_page(void *);
void copy_page(void *, void *);
# 59 "linux-2.6.18/include/asm/page.h"
typedef struct { unsigned long pte; } pte_t;
typedef struct { unsigned long pmd; } pmd_t;
typedef struct { unsigned long pud; } pud_t;
typedef struct { unsigned long pgd; } pgd_t;


typedef struct { unsigned long pgprot; } pgprot_t;
# 105 "linux-2.6.18/include/asm/page.h"
# 1 "linux-2.6.18/include/asm/bug.h" 1



# 1 "linux-2.6.18/include/linux/stringify.h" 1
# 5 "linux-2.6.18/include/asm/bug.h" 2





struct bug_frame {
 unsigned char ud2[2];
 unsigned char push;
 signed int filename;
 unsigned char ret;
 unsigned short line;
} __attribute__((packed)) ;
# 30 "linux-2.6.18/include/asm/bug.h"
static inline  __attribute__((always_inline)) void out_of_line_bug(void) { }


# 1 "linux-2.6.18/include/asm-generic/bug.h" 1
# 34 "linux-2.6.18/include/asm/bug.h" 2
# 106 "linux-2.6.18/include/asm/page.h" 2
# 138 "linux-2.6.18/include/asm/page.h"
# 1 "linux-2.6.18/include/asm-generic/memory_model.h" 1
# 139 "linux-2.6.18/include/asm/page.h" 2
# 1 "linux-2.6.18/include/asm-generic/page.h" 1
# 10 "linux-2.6.18/include/asm-generic/page.h"
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
# 140 "linux-2.6.18/include/asm/page.h" 2
# 13 "linux-2.6.18/include/asm/thread_info.h" 2

# 1 "linux-2.6.18/include/asm/pda.h" 1






# 1 "linux-2.6.18/include/linux/cache.h" 1



# 1 "linux-2.6.18/include/linux/kernel.h" 1
# 10 "linux-2.6.18/include/linux/kernel.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 102 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 11 "linux-2.6.18/include/linux/kernel.h" 2
# 1 "linux-2.6.18/include/linux/linkage.h" 1



# 1 "linux-2.6.18/include/asm/linkage.h" 1
# 5 "linux-2.6.18/include/linux/linkage.h" 2
# 12 "linux-2.6.18/include/linux/kernel.h" 2







typedef  const char   _GLOBAL_2_T; extern  _GLOBAL_2_T  _GLOBAL_0_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_1_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_2_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_3_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_4_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_5_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_6_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_7_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_8_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_9_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_10_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_11_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_12_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_13_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_14_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_15_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_16_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_17_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_18_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_19_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_20_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_21_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_22_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_23_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_24_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_25_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_26_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_27_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_28_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_29_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_30_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_31_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_32_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_33_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_34_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_35_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_36_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_37_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_38_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_39_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_40_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_41_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_42_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_43_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_44_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_45_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_46_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_47_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_48_linux_banner_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_49_linux_banner_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_linux_banner_I) *_GLOBAL_linux_banner_0_A[NUM_STACKS];   
# 47 "linux-2.6.18/include/linux/kernel.h"
typedef  int  _GLOBAL_3_T; extern  _GLOBAL_3_T  _GLOBAL_0_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_1_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_2_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_3_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_4_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_5_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_6_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_7_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_8_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_9_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_10_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_11_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_12_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_13_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_14_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_15_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_16_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_17_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_18_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_19_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_20_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_21_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_22_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_23_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_24_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_25_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_26_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_27_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_28_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_29_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_30_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_31_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_32_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_33_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_34_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_35_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_36_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_37_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_38_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_39_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_40_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_41_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_42_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_43_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_44_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_45_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_46_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_47_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_48_console_printk_I [ ] ; extern  _GLOBAL_3_T  _GLOBAL_49_console_printk_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_console_printk_I) *_GLOBAL_console_printk_1_A[NUM_STACKS] = { &_GLOBAL_0_console_printk_I, &_GLOBAL_1_console_printk_I, &_GLOBAL_2_console_printk_I, &_GLOBAL_3_console_printk_I, &_GLOBAL_4_console_printk_I, &_GLOBAL_5_console_printk_I, &_GLOBAL_6_console_printk_I, &_GLOBAL_7_console_printk_I, &_GLOBAL_8_console_printk_I, &_GLOBAL_9_console_printk_I, &_GLOBAL_10_console_printk_I, &_GLOBAL_11_console_printk_I, &_GLOBAL_12_console_printk_I, &_GLOBAL_13_console_printk_I, &_GLOBAL_14_console_printk_I, &_GLOBAL_15_console_printk_I, &_GLOBAL_16_console_printk_I, &_GLOBAL_17_console_printk_I, &_GLOBAL_18_console_printk_I, &_GLOBAL_19_console_printk_I, &_GLOBAL_20_console_printk_I, &_GLOBAL_21_console_printk_I, &_GLOBAL_22_console_printk_I, &_GLOBAL_23_console_printk_I, &_GLOBAL_24_console_printk_I, &_GLOBAL_25_console_printk_I, &_GLOBAL_26_console_printk_I, &_GLOBAL_27_console_printk_I, &_GLOBAL_28_console_printk_I, &_GLOBAL_29_console_printk_I, &_GLOBAL_30_console_printk_I, &_GLOBAL_31_console_printk_I, &_GLOBAL_32_console_printk_I, &_GLOBAL_33_console_printk_I, &_GLOBAL_34_console_printk_I, &_GLOBAL_35_console_printk_I, &_GLOBAL_36_console_printk_I, &_GLOBAL_37_console_printk_I, &_GLOBAL_38_console_printk_I, &_GLOBAL_39_console_printk_I, &_GLOBAL_40_console_printk_I, &_GLOBAL_41_console_printk_I, &_GLOBAL_42_console_printk_I, &_GLOBAL_43_console_printk_I, &_GLOBAL_44_console_printk_I, &_GLOBAL_45_console_printk_I, &_GLOBAL_46_console_printk_I, &_GLOBAL_47_console_printk_I, &_GLOBAL_48_console_printk_I, &_GLOBAL_49_console_printk_I, };  






struct completion;
struct pt_regs;
struct user;
# 95 "linux-2.6.18/include/linux/kernel.h"
typedef  struct atomic_notifier_head   _GLOBAL_4_T; extern  _GLOBAL_4_T  _GLOBAL_0_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_1_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_2_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_3_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_4_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_5_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_6_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_7_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_8_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_9_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_10_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_11_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_12_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_13_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_14_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_15_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_16_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_17_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_18_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_19_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_20_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_21_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_22_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_23_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_24_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_25_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_26_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_27_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_28_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_29_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_30_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_31_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_32_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_33_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_34_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_35_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_36_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_37_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_38_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_39_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_40_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_41_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_42_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_43_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_44_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_45_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_46_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_47_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_48_panic_notifier_list_I; extern  _GLOBAL_4_T  _GLOBAL_49_panic_notifier_list_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_panic_notifier_list_I) *_GLOBAL_panic_notifier_list_2_A[NUM_STACKS];   
typedef  long   ( *_GLOBAL_6_T  )  ( long  time  ) ; extern  _GLOBAL_6_T global_panic_blink[NUM_STACKS];    
 void panic(const char * fmt, ...)
 __attribute__ ((noreturn, format (printf, 1, 2))) ;
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
extern int session_of_pgrp(int pgrp);

extern void dump_thread(struct pt_regs *regs, struct user *dump);







static inline  __attribute__((always_inline)) int vprintk(const char *s, va_list args)
 __attribute__ ((format (printf, 1, 0))) ;
static inline  __attribute__((always_inline)) int vprintk(const char *s, va_list args) { return 0; }
static inline  __attribute__((always_inline)) int printk(const char *s, ...)
 __attribute__ ((format (printf, 1, 2))) ;
static inline  __attribute__((always_inline)) int printk(const char *s, ...) { return 0; }


unsigned long int_sqrt(unsigned long);

static inline  __attribute__((always_inline)) int  __attribute__((pure)) long_log2(unsigned long x)
{
 int r = 0;
 for (x >>= 1; x > 0; x >>= 1)
  r++;
 return r;
}

static inline  __attribute__((always_inline)) unsigned long
 __attribute__((__const__)) roundup_pow_of_two(unsigned long x)
{
 return 1UL << fls_long(x - 1);
}

extern int printk_ratelimit(void);
extern int __printk_ratelimit(int ratelimit_jiffies, int ratelimit_burst);

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
typedef  int  _GLOBAL_7_T; extern  _GLOBAL_7_T  global_oops_in_progress[NUM_STACKS];   
typedef  int  _GLOBAL_8_T; extern  _GLOBAL_8_T  global_panic_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_panic_on_oops[NUM_STACKS];   
typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  global_tainted[NUM_STACKS];   
extern const char *print_tainted(void);
extern void add_taint(unsigned);


typedef  enum system_states { SYSTEM_BOOTING , SYSTEM_RUNNING  , SYSTEM_HALT  , SYSTEM_POWER_OFF  , SYSTEM_RESTART  , SYSTEM_SUSPEND_DISK  , }   _GLOBAL_11_T; extern  _GLOBAL_11_T  global_system_state[NUM_STACKS];    
 
 
 
 
 
 
 
# 210 "linux-2.6.18/include/linux/kernel.h"
extern void dump_stack(void);
# 322 "linux-2.6.18/include/linux/kernel.h"
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
# 5 "linux-2.6.18/include/linux/cache.h" 2
# 1 "linux-2.6.18/include/asm/cache.h" 1
# 6 "linux-2.6.18/include/linux/cache.h" 2
# 8 "linux-2.6.18/include/asm/pda.h" 2



struct x8664_pda {
 struct task_struct *pcurrent;
 unsigned long data_offset;
 unsigned long kernelstack;
 unsigned long oldrsp;

 unsigned long debugstack;

        int irqcount;
 int cpunumber;
 char *irqstackptr;
 int nodenumber;
 unsigned int __softirq_pending;
 unsigned int __nmi_count;
 int mmu_state;
 struct mm_struct *active_mm;
 unsigned apic_timer_irqs;
} ;

typedef  struct x8664_pda   _GLOBAL_12_T; extern  _GLOBAL_12_T  * _GLOBAL_0__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_1__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_2__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_3__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_4__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_5__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_6__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_7__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_8__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_9__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_10__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_11__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_12__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_13__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_14__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_15__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_16__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_17__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_18__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_19__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_20__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_21__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_22__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_23__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_24__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_25__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_26__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_27__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_28__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_29__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_30__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_31__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_32__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_33__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_34__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_35__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_36__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_37__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_38__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_39__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_40__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_41__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_42__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_43__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_44__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_45__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_46__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_47__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_48__cpu_pda_I [ ]  ; extern  _GLOBAL_12_T  * _GLOBAL_49__cpu_pda_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__cpu_pda_I) *_GLOBAL__cpu_pda_3_A[NUM_STACKS];   
typedef  struct x8664_pda   _GLOBAL_13_T; extern  _GLOBAL_13_T  _GLOBAL_0_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_1_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_2_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_3_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_4_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_5_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_6_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_7_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_8_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_9_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_10_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_11_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_12_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_13_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_14_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_15_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_16_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_17_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_18_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_19_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_20_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_21_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_22_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_23_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_24_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_25_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_26_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_27_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_28_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_29_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_30_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_31_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_32_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_33_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_34_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_35_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_36_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_37_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_38_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_39_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_40_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_41_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_42_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_43_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_44_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_45_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_46_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_47_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_48_boot_cpu_pda_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_49_boot_cpu_pda_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_cpu_pda_I) *_GLOBAL_boot_cpu_pda_4_A[NUM_STACKS];   
# 42 "linux-2.6.18/include/asm/pda.h"
extern void __bad_pda_field(void);
# 15 "linux-2.6.18/include/asm/thread_info.h" 2







struct task_struct;
struct exec_domain;
# 1 "linux-2.6.18/include/asm/mmsegment.h" 1



typedef struct {
 unsigned long seg;
} mm_segment_t;
# 25 "linux-2.6.18/include/asm/thread_info.h" 2

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
# 60 "linux-2.6.18/include/asm/thread_info.h"
static inline  __attribute__((always_inline)) struct thread_info *current_thread_info(void)
{


 extern struct thread_info *nsc_get_current_thread_info(void);
 return nsc_get_current_thread_info();





}


static inline  __attribute__((always_inline)) struct thread_info *stack_thread_info(void)
{
 struct thread_info *ti;
 __asm__("andq %%rsp,%0; ":"=r" (ti) : "0" (~(((1UL << 12) << 1) - 1)));
 return ti;
}
# 22 "linux-2.6.18/include/linux/thread_info.h" 2
# 30 "linux-2.6.18/include/linux/thread_info.h"
static inline  __attribute__((always_inline)) void set_ti_thread_flag(struct thread_info *ti, int flag)
{
 set_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) void clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 clear_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) int test_and_set_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_set_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) int test_and_clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_clear_bit(flag,&ti->flags);
}

static inline  __attribute__((always_inline)) int test_ti_thread_flag(struct thread_info *ti, int flag)
{
 return (__builtin_constant_p(flag) ? constant_test_bit((flag),(&ti->flags)) : variable_test_bit((flag),(&ti->flags)));
}
# 10 "linux-2.6.18/include/linux/preempt.h" 2
# 50 "linux-2.6.18/include/linux/spinlock.h" 2






# 1 "linux-2.6.18/include/asm/system.h" 1




# 1 "linux-2.6.18/include/asm/segment.h" 1
# 6 "linux-2.6.18/include/asm/system.h" 2
# 45 "linux-2.6.18/include/asm/system.h"
extern void load_gs_index(unsigned);
# 72 "linux-2.6.18/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long read_cr0(void)
{
 unsigned long cr0;
 asm volatile("movq %%cr0,%0" : "=r" (cr0));
 return cr0;
}

static inline  __attribute__((always_inline)) void write_cr0(unsigned long val)
{
 asm volatile("movq %0,%%cr0" :: "r" (val));
}

static inline  __attribute__((always_inline)) unsigned long read_cr3(void)
{
 unsigned long cr3;
 asm("movq %%cr3,%0" : "=r" (cr3));
 return cr3;
}

static inline  __attribute__((always_inline)) unsigned long read_cr4(void)
{
 unsigned long cr4;
 asm("movq %%cr4,%0" : "=r" (cr4));
 return cr4;
}

static inline  __attribute__((always_inline)) void write_cr4(unsigned long val)
{
 asm volatile("movq %0,%%cr4" :: "r" (val));
}
# 112 "linux-2.6.18/include/asm/system.h"
static inline  __attribute__((always_inline)) void sched_cacheflush(void)
{
 __asm__ __volatile__ ("wbinvd": : :"memory");;
}
# 127 "linux-2.6.18/include/asm/system.h"
static inline  __attribute__((always_inline)) void set_64bit(volatile unsigned long *ptr, unsigned long val)
{
 *ptr = val;
}
# 139 "linux-2.6.18/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long __xchg(unsigned long x, volatile void * ptr, int size)
{
 switch (size) {
  case 1:
   __asm__ __volatile__("xchgb %b0,%1"
    :"=q" (x)
    :"m" (*((volatile long *)(ptr))), "0" (x)
    :"memory");
   break;
  case 2:
   __asm__ __volatile__("xchgw %w0,%1"
    :"=r" (x)
    :"m" (*((volatile long *)(ptr))), "0" (x)
    :"memory");
   break;
  case 4:
   __asm__ __volatile__("xchgl %k0,%1"
    :"=r" (x)
    :"m" (*((volatile long *)(ptr))), "0" (x)
    :"memory");
   break;
  case 8:
   __asm__ __volatile__("xchgq %0,%1"
    :"=r" (x)
    :"m" (*((volatile long *)(ptr))), "0" (x)
    :"memory");
   break;
 }
 return x;
}
# 178 "linux-2.6.18/include/asm/system.h"
static inline  __attribute__((always_inline)) unsigned long __cmpxchg(volatile void *ptr, unsigned long old,
          unsigned long new, int size)
{
 unsigned long prev;
 switch (size) {
 case 1:
  __asm__ __volatile__("" "cmpxchgb %b1,%2"
         : "=a"(prev)
         : "q"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 2:
  __asm__ __volatile__("" "cmpxchgw %w1,%2"
         : "=a"(prev)
         : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 4:
  __asm__ __volatile__("" "cmpxchgl %k1,%2"
         : "=a"(prev)
         : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 case 8:
  __asm__ __volatile__("" "cmpxchgq %1,%2"
         : "=a"(prev)
         : "r"(new), "m"(*((volatile long *)(ptr))), "0"(old)
         : "memory");
  return prev;
 }
 return old;
}
# 246 "linux-2.6.18/include/asm/system.h"
# 1 "linux-2.6.18/include/linux/irqflags.h" 1
# 247 "linux-2.6.18/include/asm/system.h" 2

void cpu_idle_wait(void);

extern unsigned long arch_align_stack(unsigned long sp);
extern void free_init_pages(char *what, unsigned long begin, unsigned long end);
# 57 "linux-2.6.18/include/linux/spinlock.h" 2
# 78 "linux-2.6.18/include/linux/spinlock.h"
# 1 "linux-2.6.18/include/linux/spinlock_types.h" 1
# 12 "linux-2.6.18/include/linux/spinlock_types.h"
# 1 "linux-2.6.18/include/linux/lockdep.h" 1
# 12 "linux-2.6.18/include/linux/lockdep.h"
# 1 "linux-2.6.18/include/linux/list.h" 1






# 1 "linux-2.6.18/include/linux/poison.h" 1
# 8 "linux-2.6.18/include/linux/list.h" 2
# 1 "linux-2.6.18/include/linux/prefetch.h" 1
# 14 "linux-2.6.18/include/linux/prefetch.h"
# 1 "linux-2.6.18/include/asm/processor.h" 1
# 13 "linux-2.6.18/include/asm/processor.h"
# 1 "linux-2.6.18/include/asm/sigcontext.h" 1
# 10 "linux-2.6.18/include/asm/sigcontext.h"
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
 unsigned long rdi;
 unsigned long rsi;
 unsigned long rbp;
 unsigned long rbx;
 unsigned long rdx;
 unsigned long rax;
 unsigned long rcx;
 unsigned long rsp;
 unsigned long rip;
 unsigned long eflags;
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
# 14 "linux-2.6.18/include/asm/processor.h" 2

# 1 "linux-2.6.18/include/linux/threads.h" 1
# 16 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/asm/msr.h" 1
# 82 "linux-2.6.18/include/asm/msr.h"
static inline  __attribute__((always_inline)) void cpuid(int op, unsigned int *eax, unsigned int *ebx,
    unsigned int *ecx, unsigned int *edx)
{
 __asm__("cpuid"
  : "=a" (*eax),
    "=b" (*ebx),
    "=c" (*ecx),
    "=d" (*edx)
  : "0" (op));
}


static inline  __attribute__((always_inline)) void cpuid_count(int op, int count, int *eax, int *ebx, int *ecx,
         int *edx)
{
 __asm__("cpuid"
  : "=a" (*eax),
    "=b" (*ebx),
    "=c" (*ecx),
    "=d" (*edx)
  : "0" (op), "c" (count));
}




static inline  __attribute__((always_inline)) unsigned int cpuid_eax(unsigned int op)
{
 unsigned int eax;

 __asm__("cpuid"
  : "=a" (eax)
  : "0" (op)
  : "bx", "cx", "dx");
 return eax;
}
static inline  __attribute__((always_inline)) unsigned int cpuid_ebx(unsigned int op)
{
 unsigned int eax, ebx;

 __asm__("cpuid"
  : "=a" (eax), "=b" (ebx)
  : "0" (op)
  : "cx", "dx" );
 return ebx;
}
static inline  __attribute__((always_inline)) unsigned int cpuid_ecx(unsigned int op)
{
 unsigned int eax, ecx;

 __asm__("cpuid"
  : "=a" (eax), "=c" (ecx)
  : "0" (op)
  : "bx", "dx" );
 return ecx;
}
static inline  __attribute__((always_inline)) unsigned int cpuid_edx(unsigned int op)
{
 unsigned int eax, edx;

 __asm__("cpuid"
  : "=a" (eax), "=d" (edx)
  : "0" (op)
  : "bx", "cx");
 return edx;
}
# 17 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/asm/current.h" 1




struct task_struct;
# 18 "linux-2.6.18/include/asm/processor.h" 2


# 1 "linux-2.6.18/include/asm/percpu.h" 1
# 21 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/linux/personality.h" 1







struct exec_domain;
struct pt_regs;

extern int register_exec_domain(struct exec_domain *);
extern int unregister_exec_domain(struct exec_domain *);
extern int __set_personality(unsigned long);






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
# 47 "linux-2.6.18/include/linux/personality.h"
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
# 81 "linux-2.6.18/include/linux/personality.h"
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
# 22 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/linux/cpumask.h" 1
# 86 "linux-2.6.18/include/linux/cpumask.h"
# 1 "linux-2.6.18/include/linux/bitmap.h" 1







# 1 "linux-2.6.18/include/linux/string.h" 1
# 16 "linux-2.6.18/include/linux/string.h"
extern char *strndup_user(const char *, long);




# 1 "linux-2.6.18/include/asm/string.h" 1
# 9 "linux-2.6.18/include/asm/string.h"
static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *
__inline_memcpy(void * to, const void * from, size_t n)
{
unsigned long d0, d1, d2;
__asm__ __volatile__(
 "rep ; movsl\n\t"
 "testb $2,%b4\n\t"
 "je 1f\n\t"
 "movsw\n"
 "1:\ttestb $1,%b4\n\t"
 "je 2f\n\t"
 "movsb\n"
 "2:"
 : "=&c" (d0), "=&D" (d1), "=&S" (d2)
 :"0" (n/4), "q" (n),"1" ((long) to),"2" ((long) from)
 : "memory");
return (to);
}





extern void *__memcpy(void *to, const void *from, size_t len);
# 44 "linux-2.6.18/include/asm/string.h"
void *memset(void *s, int c, size_t n);


void * memmove(void * dest,const void *src,size_t count);

int memcmp(const void * cs,const void * ct,size_t count);
size_t strlen(const char * s);
char *strcpy(char * dest,const char *src);
char *strcat(char * dest, const char * src);
int strcmp(const char * cs,const char * ct);
# 22 "linux-2.6.18/include/linux/string.h" 2


extern char * strcpy(char *,const char *);


extern char * strncpy(char *,const char *, __kernel_size_t);


size_t strlcpy(char *, const char *, size_t);


extern char * strcat(char *, const char *);


extern char * strncat(char *, const char *, __kernel_size_t);


extern size_t strlcat(char *, const char *, __kernel_size_t);


extern int strcmp(const char *,const char *);


extern int strncmp(const char *,const char *,__kernel_size_t);


extern int strnicmp(const char *, const char *, __kernel_size_t);


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
# 92 "linux-2.6.18/include/linux/string.h"
extern void * memscan(void *,int,__kernel_size_t);


extern int memcmp(const void *,const void *,__kernel_size_t);


extern void * memchr(const void *,int,__kernel_size_t);


extern char *kstrdup(const char *s, gfp_t gfp);
# 9 "linux-2.6.18/include/linux/bitmap.h" 2
# 83 "linux-2.6.18/include/linux/bitmap.h"
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
extern int bitmap_parse(const char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern int bitmap_scnlistprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int bitmap_parselist(const char *buf, unsigned long *maskp,
   int nmaskbits);
extern void bitmap_remap(unsigned long *dst, const unsigned long *src,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_bitremap(int oldbit,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_find_free_region(unsigned long *bitmap, int bits, int order);
extern void bitmap_release_region(unsigned long *bitmap, int pos, int order);
extern int bitmap_allocate_region(unsigned long *bitmap, int pos, int order);







static inline  __attribute__((always_inline)) void bitmap_zero(unsigned long *dst, int nbits)
{
 if (nbits <= 64)
  *dst = 0UL;
 else {
  int len = (((nbits)+64 -1)/64) * sizeof(unsigned long);
  memset(dst, 0, len);
 }
}

static inline  __attribute__((always_inline)) void bitmap_fill(unsigned long *dst, int nbits)
{
 size_t nlongs = (((nbits)+64 -1)/64);
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
  int len = (((nbits)+64 -1)/64) * sizeof(unsigned long);
  ({ size_t __len = (len); void *__ret; if (__builtin_constant_p(len) && __len >= 64) __ret = __memcpy((dst),(src),__len); else __ret = __builtin_memcpy((dst),(src),__len); __ret; });
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
# 87 "linux-2.6.18/include/linux/cpumask.h" 2

typedef struct { unsigned long bits[(((1)+64 -1)/64)]; } cpumask_t;
typedef  cpumask_t  _GLOBAL_14_T; extern  _GLOBAL_14_T  global__unused_cpumask_arg_[NUM_STACKS];   


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
# 270 "linux-2.6.18/include/linux/cpumask.h"
static inline  __attribute__((always_inline)) int __cpumask_scnprintf(char *buf, int len,
     const cpumask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __cpumask_parse(const char *buf, int len,
     cpumask_t *dstp, int nbits)
{
 return bitmap_parse(buf, len, dstp->bits, nbits);
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
# 380 "linux-2.6.18/include/linux/cpumask.h"
typedef  cpumask_t  _GLOBAL_15_T; extern  _GLOBAL_15_T  global_cpu_possible_map[NUM_STACKS];   
typedef  cpumask_t  _GLOBAL_16_T; extern  _GLOBAL_16_T  global_cpu_online_map[NUM_STACKS];   
typedef  cpumask_t  _GLOBAL_17_T; extern  _GLOBAL_17_T  global_cpu_present_map[NUM_STACKS];   
# 23 "linux-2.6.18/include/asm/processor.h" 2
# 50 "linux-2.6.18/include/asm/processor.h"
struct cpuinfo_x86 {
 __u8 x86;
 __u8 x86_vendor;
 __u8 x86_model;
 __u8 x86_mask;
 int cpuid_level;
 __u32 x86_capability[7];
 char x86_vendor_id[16];
 char x86_model_id[64];
 int x86_cache_size;
 int x86_clflush_size;
 int x86_cache_alignment;
 int x86_tlbsize;
        __u8 x86_virt_bits, x86_phys_bits;
 __u8 x86_max_cores;
        __u32 x86_power;
 __u32 extended_cpuid_level;
 unsigned long loops_per_jiffy;



 __u8 apicid;





} __attribute__((__aligned__((1 << (7))))) ;
# 98 "linux-2.6.18/include/asm/processor.h"
typedef  char  _GLOBAL_18_T; extern  _GLOBAL_18_T  global_ignore_irq13[NUM_STACKS];   

extern void identify_cpu(struct cpuinfo_x86 *);
extern void print_cpu_info(struct cpuinfo_x86 *);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
typedef  unsigned short   _GLOBAL_19_T; extern  _GLOBAL_19_T  global_num_cache_leaves[NUM_STACKS];    
# 147 "linux-2.6.18/include/asm/processor.h"
typedef  unsigned long   _GLOBAL_20_T; extern  _GLOBAL_20_T  global_mmu_cr4_features[NUM_STACKS];    

static inline  __attribute__((always_inline)) void set_in_cr4 (unsigned long mask)
{
 global_mmu_cr4_features[get_stack_id()] |= mask;
 __asm__("movq %%cr4,%%rax\n\t"
  "orq %0,%%rax\n\t"
  "movq %%rax,%%cr4\n"
  : : "irg" (mask)
  :"ax");
}

static inline  __attribute__((always_inline)) void clear_in_cr4 (unsigned long mask)
{
 global_mmu_cr4_features[get_stack_id()] &= ~mask;
 __asm__("movq %%cr4,%%rax\n\t"
  "andq %0,%%rax\n\t"
  "movq %%rax,%%cr4\n"
  : : "irg" (~mask)
  :"ax");
}
# 194 "linux-2.6.18/include/asm/processor.h"
struct i387_fxsave_struct {
 u16 cwd;
 u16 swd;
 u16 twd;
 u16 fop;
 u64 rip;
 u64 rdp;
 u32 mxcsr;
 u32 mxcsr_mask;
 u32 st_space[32];
 u32 xmm_space[64];
 u32 padding[24];
} __attribute__ ((aligned (16))) ;

union i387_union {
 struct i387_fxsave_struct fxsave;
};

struct tss_struct {
 u32 reserved1;
 u64 rsp0;
 u64 rsp1;
 u64 rsp2;
 u64 reserved2;
 u64 ist[7];
 u32 reserved3;
 u32 reserved4;
 u16 reserved5;
 u16 io_bitmap_base;
# 232 "linux-2.6.18/include/asm/processor.h"
 unsigned long io_bitmap[((65536/8)/sizeof(long)) + 1];
}  __attribute__((packed)) __attribute__((__aligned__((1 << (7))))) ;


typedef  struct cpuinfo_x86   _GLOBAL_21_T; extern  _GLOBAL_21_T  global_boot_cpu_data[NUM_STACKS];    
typedef  __typeof__ ( struct tss_struct  )   _GLOBAL_22_T; extern  _GLOBAL_22_T  global_per_cpu__init_tss[NUM_STACKS];    

struct orig_ist {
 unsigned long ist[7];
};
typedef  __typeof__ ( struct orig_ist  )   _GLOBAL_23_T; extern  _GLOBAL_23_T  global_per_cpu__orig_ist[NUM_STACKS];    
# 252 "linux-2.6.18/include/asm/processor.h"
struct thread_struct {
 unsigned long rsp0;
 unsigned long rsp;
 unsigned long userrsp;
 unsigned long fs;
 unsigned long gs;
 unsigned short es, ds, fsindex, gsindex;

 unsigned long debugreg0;
 unsigned long debugreg1;
 unsigned long debugreg2;
 unsigned long debugreg3;
 unsigned long debugreg6;
 unsigned long debugreg7;

 unsigned long cr2, trap_no, error_code;

 union i387_union i387 __attribute__((aligned(16))) ;


 int ioperm;
 unsigned long *io_bitmap_ptr;
 unsigned io_bitmap_max;

 u64 tls_array[3];
} __attribute__((aligned(16))) ;
# 310 "linux-2.6.18/include/asm/processor.h"
struct task_struct;
struct mm_struct;


extern void release_thread(struct task_struct *);


extern void prepare_to_copy(struct task_struct *tsk);




extern long kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);







extern unsigned long get_wchan(struct task_struct *p);





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
# 394 "linux-2.6.18/include/asm/processor.h"
static inline  __attribute__((always_inline)) void rep_nop(void)
{
 __asm__ __volatile__("rep;nop": : :"memory");
}


static inline  __attribute__((always_inline)) void sync_core(void)
{
 int tmp;
 asm volatile("cpuid" : "=a" (tmp) : "0" (1) : "ebx","ecx","edx","memory");
}




static inline  __attribute__((always_inline)) void prefetch(void *x)
{
 asm volatile("prefetcht0 %0" :: "m" (*(unsigned long *)x));
}


static inline  __attribute__((always_inline)) void prefetchw(void *x)
{
 asm volatile ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".section .altinstructions,\"a\"\n" "  .align 8\n" "  .quad 661b\n" "  .quad 663f\n" "  .byte %c0\n" "  .byte 662b-661b\n" "  .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "prefetchw (%1)" "\n664:\n" ".previous" :: "i" ((1*32+31)), "r" (x))


             ;
}
# 456 "linux-2.6.18/include/asm/processor.h"
static inline  __attribute__((always_inline)) void serialize_cpu(void)
{
 __asm__ __volatile__ ("cpuid" : : : "ax", "bx", "cx", "dx");
}

static inline  __attribute__((always_inline)) void __monitor(const void *eax, unsigned long ecx,
  unsigned long edx)
{

 asm volatile(
  ".byte 0x0f,0x01,0xc8;"
  : :"a" (eax), "c" (ecx), "d"(edx));
}

static inline  __attribute__((always_inline)) void __mwait(unsigned long eax, unsigned long ecx)
{

 asm volatile(
  ".byte 0x0f,0x01,0xc9;"
  : :"a" (eax), "c" (ecx));
}
# 487 "linux-2.6.18/include/asm/processor.h"
typedef  unsigned long   _GLOBAL_24_T; extern  _GLOBAL_24_T  global_boot_option_idle_override[NUM_STACKS];    

typedef  int  _GLOBAL_25_T; extern  _GLOBAL_25_T  global_bootloader_type[NUM_STACKS];   
# 15 "linux-2.6.18/include/linux/prefetch.h" 2
# 58 "linux-2.6.18/include/linux/prefetch.h"
static inline  __attribute__((always_inline)) void prefetch_range(void *addr, size_t len)
{

 char *cp;
 char *end = addr + len;

 for (cp = addr; cp < end; cp += (4*(1 << (7))))
  prefetch(cp);

}
# 9 "linux-2.6.18/include/linux/list.h" 2
# 21 "linux-2.6.18/include/linux/list.h"
struct list_head {
 struct list_head *next, *prev;
};






static inline  __attribute__((always_inline)) void INIT_LIST_HEAD(struct list_head *list)
{
 list->next = list;
 list->prev = list;
}







static inline  __attribute__((always_inline)) void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next)
{
 next->prev = new;
 new->next = next;
 new->prev = prev;
 prev->next = new;
}
# 60 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 73 "linux-2.6.18/include/linux/list.h"
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
# 110 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_rcu(struct list_head *new, struct list_head *head)
{
 __list_add_rcu(new, head, head->next);
}
# 131 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_add_tail_rcu(struct list_head *new,
     struct list_head *head)
{
 __list_add_rcu(new, head->prev, head);
}
# 144 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}







static inline  __attribute__((always_inline)) void list_del(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->next = ((void *) 0x00100100);
 entry->prev = ((void *) 0x00200200);
}
# 187 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_del_rcu(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->prev = ((void *) 0x00200200);
}







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
# 223 "linux-2.6.18/include/linux/list.h"
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
# 300 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) int list_empty_careful(const struct list_head *head)
{
 struct list_head *next = head->next;
 return (next == head) && (next == head->prev);
}

static inline  __attribute__((always_inline)) void __list_splice(struct list_head *list,
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






static inline  __attribute__((always_inline)) void list_splice(struct list_head *list, struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head);
}
# 338 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head);
  INIT_LIST_HEAD(list);
 }
}
# 592 "linux-2.6.18/include/linux/list.h"
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
# 654 "linux-2.6.18/include/linux/list.h"
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
# 675 "linux-2.6.18/include/linux/list.h"
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
# 719 "linux-2.6.18/include/linux/list.h"
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
# 770 "linux-2.6.18/include/linux/list.h"
static inline  __attribute__((always_inline)) void hlist_add_before_rcu(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 __asm__ __volatile__("": : :"memory");
 next->pprev = &n->next;
 *(n->pprev) = n;
}
# 798 "linux-2.6.18/include/linux/list.h"
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
# 13 "linux-2.6.18/include/linux/lockdep.h" 2
# 1 "linux-2.6.18/include/linux/debug_locks.h" 1



struct task_struct;

typedef  int  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_debug_locks[NUM_STACKS];   
typedef  int  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_debug_locks_silent[NUM_STACKS];   




extern int debug_locks_off(void);
# 52 "linux-2.6.18/include/linux/debug_locks.h"
static inline  __attribute__((always_inline)) void debug_show_all_locks(void)
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
# 14 "linux-2.6.18/include/linux/lockdep.h" 2
# 1 "linux-2.6.18/include/linux/stacktrace.h" 1
# 15 "linux-2.6.18/include/linux/lockdep.h" 2
# 243 "linux-2.6.18/include/linux/lockdep.h"
static inline  __attribute__((always_inline)) void lockdep_off(void)
{
}

static inline  __attribute__((always_inline)) void lockdep_on(void)
{
}

static inline  __attribute__((always_inline)) int lockdep_internal(void)
{
 return 0;
}
# 270 "linux-2.6.18/include/linux/lockdep.h"
struct lock_class_key { };
# 13 "linux-2.6.18/include/linux/spinlock_types.h" 2




# 1 "linux-2.6.18/include/linux/spinlock_types_up.h" 1
# 29 "linux-2.6.18/include/linux/spinlock_types_up.h"
typedef struct { } raw_spinlock_t;





typedef struct {




} raw_rwlock_t;
# 18 "linux-2.6.18/include/linux/spinlock_types.h" 2


typedef struct {
 raw_spinlock_t raw_lock;
# 32 "linux-2.6.18/include/linux/spinlock_types.h"
} spinlock_t;



typedef struct {
 raw_rwlock_t raw_lock;
# 48 "linux-2.6.18/include/linux/spinlock_types.h"
} rwlock_t;
# 79 "linux-2.6.18/include/linux/spinlock.h" 2

extern int  __attribute__((section(".spinlock.text"))) generic__raw_read_trylock(raw_rwlock_t *lock);







# 1 "linux-2.6.18/include/linux/spinlock_up.h" 1
# 89 "linux-2.6.18/include/linux/spinlock.h" 2
# 134 "linux-2.6.18/include/linux/spinlock.h"
# 1 "linux-2.6.18/include/linux/spinlock_api_up.h" 1
# 135 "linux-2.6.18/include/linux/spinlock.h" 2
# 259 "linux-2.6.18/include/linux/spinlock.h"
# 1 "linux-2.6.18/include/asm/atomic.h" 1
# 24 "linux-2.6.18/include/asm/atomic.h"
typedef struct { volatile int counter; } atomic_t;
# 52 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) void atomic_add(int i, atomic_t *v)
{
 __asm__ __volatile__(
  "" "addl %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 67 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) void atomic_sub(int i, atomic_t *v)
{
 __asm__ __volatile__(
  "" "subl %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 84 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_sub_and_test(int i, atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "subl %2,%0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"ir" (i), "m" (v->counter) : "memory");
 return c;
}







static __inline__  __attribute__((always_inline)) void atomic_inc(atomic_t *v)
{
 __asm__ __volatile__(
  "" "incl %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}







static __inline__  __attribute__((always_inline)) void atomic_dec(atomic_t *v)
{
 __asm__ __volatile__(
  "" "decl %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}
# 131 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_dec_and_test(atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "decl %0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"m" (v->counter) : "memory");
 return c != 0;
}
# 150 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_inc_and_test(atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "incl %0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"m" (v->counter) : "memory");
 return c != 0;
}
# 170 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_add_negative(int i, atomic_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "addl %2,%0; sets %1"
  :"=m" (v->counter), "=qm" (c)
  :"ir" (i), "m" (v->counter) : "memory");
 return c;
}
# 188 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic_add_return(int i, atomic_t *v)
{
 int __i = i;
 __asm__ __volatile__(
  "" "xaddl %0, %1;"
  :"=r"(i)
  :"m"(v->counter), "0"(i));
 return i + __i;
}

static __inline__  __attribute__((always_inline)) int atomic_sub_return(int i, atomic_t *v)
{
 return atomic_add_return(-i,v);
}






typedef struct { volatile long counter; } atomic64_t;
# 237 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) void atomic64_add(long i, atomic64_t *v)
{
 __asm__ __volatile__(
  "" "addq %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 252 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) void atomic64_sub(long i, atomic64_t *v)
{
 __asm__ __volatile__(
  "" "subq %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 269 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic64_sub_and_test(long i, atomic64_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "subq %2,%0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"ir" (i), "m" (v->counter) : "memory");
 return c;
}







static __inline__  __attribute__((always_inline)) void atomic64_inc(atomic64_t *v)
{
 __asm__ __volatile__(
  "" "incq %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}







static __inline__  __attribute__((always_inline)) void atomic64_dec(atomic64_t *v)
{
 __asm__ __volatile__(
  "" "decq %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}
# 316 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic64_dec_and_test(atomic64_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "decq %0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"m" (v->counter) : "memory");
 return c != 0;
}
# 335 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic64_inc_and_test(atomic64_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "incq %0; sete %1"
  :"=m" (v->counter), "=qm" (c)
  :"m" (v->counter) : "memory");
 return c != 0;
}
# 355 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) int atomic64_add_negative(long i, atomic64_t *v)
{
 unsigned char c;

 __asm__ __volatile__(
  "" "addq %2,%0; sets %1"
  :"=m" (v->counter), "=qm" (c)
  :"ir" (i), "m" (v->counter) : "memory");
 return c;
}
# 373 "linux-2.6.18/include/asm/atomic.h"
static __inline__  __attribute__((always_inline)) long atomic64_add_return(long i, atomic64_t *v)
{
 long __i = i;
 __asm__ __volatile__(
  "" "xaddq %0, %1;"
  :"=r"(i)
  :"m"(v->counter), "0"(i));
 return i + __i;
}

static __inline__  __attribute__((always_inline)) long atomic64_sub_return(long i, atomic64_t *v)
{
 return atomic64_add_return(-i,v);
}
# 434 "linux-2.6.18/include/asm/atomic.h"
# 1 "linux-2.6.18/include/asm-generic/atomic.h" 1
# 23 "linux-2.6.18/include/asm-generic/atomic.h"
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
# 435 "linux-2.6.18/include/asm/atomic.h" 2
# 260 "linux-2.6.18/include/linux/spinlock.h" 2





extern int _atomic_dec_and_lock(atomic_t *atomic, spinlock_t *lock);
# 46 "linux-2.6.18/include/linux/capability.h" 2
# 58 "linux-2.6.18/include/linux/capability.h"
typedef __u32 kernel_cap_t;
# 295 "linux-2.6.18/include/linux/capability.h"
typedef  kernel_cap_t  _GLOBAL_28_T; extern  _GLOBAL_28_T  global_cap_bset[NUM_STACKS];   
# 323 "linux-2.6.18/include/linux/capability.h"
static inline  __attribute__((always_inline)) kernel_cap_t cap_combine(kernel_cap_t a, kernel_cap_t b)
{
     kernel_cap_t dest;
     (dest) = (a) | (b);
     return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_intersect(kernel_cap_t a, kernel_cap_t b)
{
     kernel_cap_t dest;
     (dest) = (a) & (b);
     return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_drop(kernel_cap_t a, kernel_cap_t drop)
{
     kernel_cap_t dest;
     (dest) = (a) & ~(drop);
     return dest;
}

static inline  __attribute__((always_inline)) kernel_cap_t cap_invert(kernel_cap_t c)
{
     kernel_cap_t dest;
     (dest) = ~(c);
     return dest;
}
# 360 "linux-2.6.18/include/linux/capability.h"
int capable(int cap);
int __capable(struct task_struct *t, int cap);
# 45 "linux-2.6.18/include/linux/sched.h" 2



# 1 "linux-2.6.18/include/linux/timex.h" 1
# 57 "linux-2.6.18/include/linux/timex.h"
# 1 "linux-2.6.18/include/linux/time.h" 1






# 1 "linux-2.6.18/include/linux/seqlock.h" 1
# 32 "linux-2.6.18/include/linux/seqlock.h"
typedef struct {
 unsigned sequence;
 spinlock_t lock;
} seqlock_t;
# 57 "linux-2.6.18/include/linux/seqlock.h"
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
 unsigned ret = sl->sequence;
 __asm__ __volatile__("": : :"memory");
 return ret;
}
# 98 "linux-2.6.18/include/linux/seqlock.h"
static inline   __attribute__((always_inline)) __attribute__((always_inline)) int read_seqretry(const seqlock_t *sl, unsigned iv)
{
 __asm__ __volatile__("": : :"memory");
 return (iv & 1) | (sl->sequence ^ iv);
}
# 112 "linux-2.6.18/include/linux/seqlock.h"
typedef struct seqcount {
 unsigned sequence;
} seqcount_t;





static inline  __attribute__((always_inline)) unsigned read_seqcount_begin(const seqcount_t *s)
{
 unsigned ret = s->sequence;
 __asm__ __volatile__("": : :"memory");
 return ret;
}






static inline  __attribute__((always_inline)) int read_seqcount_retry(const seqcount_t *s, unsigned iv)
{
 __asm__ __volatile__("": : :"memory");
 return (iv & 1) | (s->sequence ^ iv);
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
# 8 "linux-2.6.18/include/linux/time.h" 2




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
# 39 "linux-2.6.18/include/linux/time.h"
static inline  __attribute__((always_inline)) int timespec_equal(struct timespec *a, struct timespec *b)
{
 return (a->tv_sec == b->tv_sec) && (a->tv_nsec == b->tv_nsec);
}






static inline  __attribute__((always_inline)) int timespec_compare(struct timespec *lhs, struct timespec *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_nsec - rhs->tv_nsec;
}

static inline  __attribute__((always_inline)) int timeval_compare(struct timeval *lhs, struct timeval *rhs)
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







typedef  struct timespec   _GLOBAL_29_T; extern  _GLOBAL_29_T  global_xtime[NUM_STACKS];    
typedef  struct timespec   _GLOBAL_30_T; extern  _GLOBAL_30_T  global_wall_to_monotonic[NUM_STACKS];    
typedef  seqlock_t  _GLOBAL_31_T; extern  _GLOBAL_31_T  global_xtime_lock[NUM_STACKS];   

void timekeeping_init(void);

static inline  __attribute__((always_inline)) unsigned long get_seconds(void)
{
 return global_xtime[get_stack_id()].tv_sec;
}

struct timespec current_kernel_time(void);




extern void do_gettimeofday(struct timeval *tv);
extern int do_settimeofday(struct timespec *tv);
extern int do_sys_settimeofday(struct timespec *tv, struct timezone *tz);

extern long do_utimes(int dfd, char *filename, struct timeval *times);
struct itimerval;
extern int do_setitimer(int which, struct itimerval *value,
   struct itimerval *ovalue);
extern unsigned int alarm_setitimer(unsigned int seconds);
extern int do_getitimer(int which, struct itimerval *value);
extern void getnstimeofday(struct timespec *tv);

extern struct timespec timespec_trunc(struct timespec t, unsigned gran);
extern int timekeeping_is_continuous(void);
# 129 "linux-2.6.18/include/linux/time.h"
static inline  __attribute__((always_inline)) s64 timespec_to_ns(const struct timespec *ts)
{
 return ((s64) ts->tv_sec * 1000000000L) + ts->tv_nsec;
}
# 141 "linux-2.6.18/include/linux/time.h"
static inline  __attribute__((always_inline)) s64 timeval_to_ns(const struct timeval *tv)
{
 return ((s64) tv->tv_sec * 1000000000L) +
  tv->tv_usec * 1000L;
}







extern struct timespec ns_to_timespec(const s64 nsec);







extern struct timeval ns_to_timeval(const s64 nsec);






static inline  __attribute__((always_inline)) void timespec_add_ns(struct timespec *a, u64 ns)
{
 ns += a->tv_nsec;
 while(__builtin_expect(!!(ns >= 1000000000L), 0)) {
  ns -= 1000000000L;
  a->tv_sec++;
 }
 a->tv_nsec = ns;
}
# 195 "linux-2.6.18/include/linux/time.h"
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 58 "linux-2.6.18/include/linux/timex.h" 2
# 106 "linux-2.6.18/include/linux/timex.h"
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

 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
};
# 193 "linux-2.6.18/include/linux/timex.h"
# 1 "linux-2.6.18/include/asm/timex.h" 1
# 9 "linux-2.6.18/include/asm/timex.h"
# 1 "linux-2.6.18/include/asm/8253pit.h" 1
# 10 "linux-2.6.18/include/asm/timex.h" 2

# 1 "linux-2.6.18/include/asm/vsyscall.h" 1



enum vsyscall_num {
 __NR_vgettimeofday,
 __NR_vtime,
};
# 29 "linux-2.6.18/include/asm/vsyscall.h"
struct vxtime_data {
 long hpet_address;
 int last;
 unsigned long last_tsc;
 long quot;
 long tsc_quot;
 int mode;
};





typedef  struct vxtime_data   _GLOBAL_32_T; extern  _GLOBAL_32_T  global___vxtime[NUM_STACKS];    
typedef  struct timespec   _GLOBAL_33_T; extern  _GLOBAL_33_T  global___xtime[NUM_STACKS];    
typedef  unsigned long    _GLOBAL_34_T; extern volatile  _GLOBAL_34_T  global___jiffies[NUM_STACKS];     
typedef  unsigned long   _GLOBAL_35_T; extern  _GLOBAL_35_T  global___wall_jiffies[NUM_STACKS];    
typedef  struct timezone   _GLOBAL_36_T; extern  _GLOBAL_36_T  global___sys_tz[NUM_STACKS];    
typedef  seqlock_t  _GLOBAL_37_T; extern  _GLOBAL_37_T  global___xtime_lock[NUM_STACKS];   


typedef  struct vxtime_data   _GLOBAL_38_T; extern  _GLOBAL_38_T  global_vxtime[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_39_T; extern  _GLOBAL_39_T  global_wall_jiffies[NUM_STACKS];    
typedef  struct timezone   _GLOBAL_40_T; extern  _GLOBAL_40_T  global_sys_tz[NUM_STACKS];    
typedef  int  _GLOBAL_41_T; extern  _GLOBAL_41_T  global_sysctl_vsyscall[NUM_STACKS];   
typedef  seqlock_t  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_xtime_lock[NUM_STACKS];   

typedef  int  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_sysctl_vsyscall[NUM_STACKS];   
# 12 "linux-2.6.18/include/asm/timex.h" 2
# 1 "linux-2.6.18/include/asm/hpet.h" 1
# 56 "linux-2.6.18/include/asm/hpet.h"
extern int is_hpet_enabled(void);
extern int hpet_rtc_timer_init(void);
extern int apic_is_clustered_box(void);

typedef  int  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_hpet_use_timer[NUM_STACKS];   
# 13 "linux-2.6.18/include/asm/timex.h" 2






typedef unsigned long long cycles_t;

static inline  __attribute__((always_inline)) cycles_t get_cycles (void)
{
 unsigned long long ret;

 do { unsigned int __a,__d; asm volatile("rdtsc" : "=a" (__a), "=d" (__d)); (ret) = ((unsigned long)__a) | (((unsigned long)__d)<<32); } while(0);
 return ret;
}


static inline   __attribute__((always_inline)) __attribute__((always_inline)) cycles_t get_cycles_sync(void)
{
 unsigned long long ret;
 unsigned eax;


 asm volatile ("661:\n\t" "cpuid" "\n662:\n" ".section .altinstructions,\"a\"\n" "  .align 8\n" "  .quad 661b\n" "  .quad 663f\n" "  .byte %c[feat]\n" "  .byte 662b-661b\n" "  .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" ".byte 0x66,0x90\n" "\n664:\n" ".previous" : "=a" (eax) : [feat] "i" ((3*32+6)), "0" (1) : "ebx","ecx","edx","memory")
                                                      ;
 do { unsigned int __a,__d; asm volatile("rdtsc" : "=a" (__a), "=d" (__d)); (ret) = ((unsigned long)__a) | (((unsigned long)__d)<<32); } while(0);
 return ret;
}

typedef  unsigned int   _GLOBAL_45_T; extern  _GLOBAL_45_T  global_cpu_khz[NUM_STACKS];    

extern int read_current_timer(unsigned long *timer_value);


typedef  struct vxtime_data   _GLOBAL_46_T; extern  _GLOBAL_46_T  global_vxtime[NUM_STACKS];    
# 194 "linux-2.6.18/include/linux/timex.h" 2






typedef  unsigned long   _GLOBAL_47_T; extern  _GLOBAL_47_T  global_tick_usec[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_48_T; extern  _GLOBAL_48_T  global_tick_nsec[NUM_STACKS];    
typedef  int  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_tickadj[NUM_STACKS];   




typedef  int  _GLOBAL_50_T; extern  _GLOBAL_50_T  global_time_state[NUM_STACKS];   
typedef  int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_time_status[NUM_STACKS];   
typedef  long  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_time_offset[NUM_STACKS];   
typedef  long  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_time_constant[NUM_STACKS];   
typedef  long  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_time_tolerance[NUM_STACKS];   
typedef  long  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_time_precision[NUM_STACKS];   
typedef  long  _GLOBAL_56_T; extern  _GLOBAL_56_T  global_time_maxerror[NUM_STACKS];   
typedef  long  _GLOBAL_57_T; extern  _GLOBAL_57_T  global_time_esterror[NUM_STACKS];   

typedef  long  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_time_freq[NUM_STACKS];   
typedef  long  _GLOBAL_59_T; extern  _GLOBAL_59_T  global_time_reftime[NUM_STACKS];   

typedef  long  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_time_adjust[NUM_STACKS];   
typedef  long  _GLOBAL_61_T; extern  _GLOBAL_61_T  global_time_next_adjust[NUM_STACKS];   






static inline  __attribute__((always_inline)) void ntp_clear(void)
{
 global_time_adjust[get_stack_id()] = 0;
 global_time_status[get_stack_id()] |= 0x0040;
 global_time_maxerror[get_stack_id()] = (512000L << 5);
 global_time_esterror[get_stack_id()] = (512000L << 5);
}





static inline  __attribute__((always_inline)) int ntp_synced(void)
{
 return !(global_time_status[get_stack_id()] & 0x0040);
}
# 300 "linux-2.6.18/include/linux/timex.h"
static inline  __attribute__((always_inline)) void
time_interpolator_reset(void)
{
}






extern u64 current_tick_length(void);

extern int do_adjtimex(struct timex *);
# 49 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/jiffies.h" 1



# 1 "linux-2.6.18/include/linux/calc64.h" 1




# 1 "linux-2.6.18/include/asm/div64.h" 1
# 1 "linux-2.6.18/include/asm-generic/div64.h" 1
# 1 "linux-2.6.18/include/asm/div64.h" 2
# 6 "linux-2.6.18/include/linux/calc64.h" 2
# 20 "linux-2.6.18/include/linux/calc64.h"
static inline  __attribute__((always_inline)) unsigned long do_div_llr(const long long dividend,
           const long divisor, long *remainder)
{
 u64 result = dividend;

 *(remainder) = ({ uint32_t __base = (divisor); uint32_t __rem; __rem = ((uint64_t)(result)) % __base; (result) = ((uint64_t)(result)) / __base; __rem; });
 return (unsigned long) result;
}







static inline  __attribute__((always_inline)) long div_long_long_rem_signed(const long long dividend,
         const long divisor, long *remainder)
{
 long res;

 if (__builtin_expect(!!(dividend < 0), 0)) {
  res = -do_div_llr((-dividend), divisor, remainder);
  *remainder = -(*remainder);
 } else
  res = do_div_llr((dividend), divisor, remainder);

 return res;
}
# 5 "linux-2.6.18/include/linux/jiffies.h" 2
# 81 "linux-2.6.18/include/linux/jiffies.h"
typedef  u64   _GLOBAL_62_T; extern  __attribute__((section(".data")))   _GLOBAL_62_T  global_jiffies_64[NUM_STACKS];    
typedef  unsigned long    _GLOBAL_63_T; extern volatile  __attribute__((section(".data")))   _GLOBAL_63_T  global_jiffies[NUM_STACKS];      




static inline  __attribute__((always_inline)) u64 get_jiffies_64(void)
{
 return (u64)global_jiffies[get_stack_id()];
}
# 252 "linux-2.6.18/include/linux/jiffies.h"
static inline  __attribute__((always_inline)) unsigned int jiffies_to_msecs(const unsigned long j)
{

 return (1000L / 1000) * j;





}

static inline  __attribute__((always_inline)) unsigned int jiffies_to_usecs(const unsigned long j)
{

 return (1000000L / 1000) * j;





}

static inline  __attribute__((always_inline)) unsigned long msecs_to_jiffies(const unsigned int m)
{
 if (m > jiffies_to_msecs(((~0UL >> 1)-1)))
  return ((~0UL >> 1)-1);

 return (m + (1000L / 1000) - 1) / (1000L / 1000);





}

static inline  __attribute__((always_inline)) unsigned long usecs_to_jiffies(const unsigned int u)
{
 if (u > jiffies_to_usecs(((~0UL >> 1)-1)))
  return ((~0UL >> 1)-1);

 return (u + (1000000L / 1000) - 1) / (1000000L / 1000);





}
# 311 "linux-2.6.18/include/linux/jiffies.h"
static __inline__  __attribute__((always_inline)) unsigned long
timespec_to_jiffies(const struct timespec *value)
{
 unsigned long sec = value->tv_sec;
 long nsec = value->tv_nsec + (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))))) - 1;

 if (sec >= (( ((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) / (1000000000L)) << (1)) + (((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) % (1000000000L)) << (1)) + (1000000000L) / 2) / (1000000000L)) - 1)){
  sec = (( ((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) / (1000000000L)) << (1)) + (((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) % (1000000000L)) << (1)) + (1000000000L) / 2) / (1000000000L)) - 1);
  nsec = 0;
 }
 return (((u64)sec * ((unsigned long)((((u64)1000000000L << (32 - 10)) + (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))))) -1) / (u64)(( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))))) +
  (((u64)nsec * ((unsigned long)((((u64)1 << ((32 - 10) + 29)) + (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))))) -1) / (u64)(( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))))) >>
   (((32 - 10) + 29) - (32 - 10)))) >> (32 - 10);

}

static __inline__  __attribute__((always_inline)) void
jiffies_to_timespec(const unsigned long jiffies, struct timespec *value)
{




 u64 nsec = (u64)jiffies * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))));
 value->tv_sec = do_div_llr((nsec), 1000000000L, &value->tv_nsec);
}
# 350 "linux-2.6.18/include/linux/jiffies.h"
static __inline__  __attribute__((always_inline)) unsigned long
timeval_to_jiffies(const struct timeval *value)
{
 unsigned long sec = value->tv_sec;
 long usec = value->tv_usec;

 if (sec >= (( ((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) / (1000000000L)) << (1)) + (((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) % (1000000000L)) << (1)) + (1000000000L) / 2) / (1000000000L)) - 1)){
  sec = (( ((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) / (1000000000L)) << (1)) + (((((((~0UL >> 1)-1) >> (32 - 10)) * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))) % (1000000000L)) << (1)) + (1000000000L) / 2) / (1000000000L)) - 1);
  usec = 0;
 }
 return (((u64)sec * ((unsigned long)((((u64)1000000000L << (32 - 10)) + (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))))) -1) / (u64)(( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))))))) +
  (((u64)usec * ((unsigned long)((((u64)1000L << ((32 - 10) + 19)) + (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))))) -1) / (u64)(( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))))))) + (u64)(((u64)1 << ((32 - 10) + 19)) - 1)) >>
   (((32 - 10) + 19) - (32 - 10)))) >> (32 - 10);
}

static __inline__  __attribute__((always_inline)) void
jiffies_to_timeval(const unsigned long jiffies, struct timeval *value)
{




 u64 nsec = (u64)jiffies * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))));
 long tv_usec;

 value->tv_sec = do_div_llr((nsec), 1000000000L, &tv_usec);
 tv_usec /= 1000L;
 value->tv_usec = tv_usec;
}




static inline  __attribute__((always_inline)) clock_t jiffies_to_clock_t(long x)
{



 u64 tmp = (u64)x * (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))));
 ({ uint32_t __base = ((1000000000L / 100)); uint32_t __rem; __rem = ((uint64_t)(tmp)) % __base; (tmp) = ((uint64_t)(tmp)) / __base; __rem; });
 return (long)tmp;

}

static inline  __attribute__((always_inline)) unsigned long clock_t_to_jiffies(unsigned long x)
{

 if (x >= ~0UL / (1000 / 100))
  return ~0UL;
 return x * (1000 / 100);
# 412 "linux-2.6.18/include/linux/jiffies.h"
}

static inline  __attribute__((always_inline)) u64 jiffies_64_to_clock_t(u64 x)
{
# 424 "linux-2.6.18/include/linux/jiffies.h"
 x *= (( (((1000000UL * 1000) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((((1000000UL * 1000) % ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))) << (8)) + ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000))))) / 2) / ((( (((1193182UL) / (((1193182UL + 1000/2) / 1000))) << (8)) + ((((1193182UL) % (((1193182UL + 1000/2) / 1000))) << (8)) + (((1193182UL + 1000/2) / 1000)) / 2) / (((1193182UL + 1000/2) / 1000)))))));
 ({ uint32_t __base = ((1000000000L / 100)); uint32_t __rem; __rem = ((uint64_t)(x)) % __base; (x) = ((uint64_t)(x)) / __base; __rem; });

 return x;
}

static inline  __attribute__((always_inline)) u64 nsec_to_clock_t(u64 x)
{

 ({ uint32_t __base = ((1000000000L / 100)); uint32_t __rem; __rem = ((uint64_t)(x)) % __base; (x) = ((uint64_t)(x)) / __base; __rem; });
# 447 "linux-2.6.18/include/linux/jiffies.h"
 return x;
}
# 50 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/rbtree.h" 1
# 100 "linux-2.6.18/include/linux/rbtree.h"
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
# 123 "linux-2.6.18/include/linux/rbtree.h"
static inline  __attribute__((always_inline)) void rb_set_parent(struct rb_node *rb, struct rb_node *p)
{
 rb->rb_parent_color = (rb->rb_parent_color & 3) | (unsigned long)p;
}
static inline  __attribute__((always_inline)) void rb_set_color(struct rb_node *rb, int color)
{
 rb->rb_parent_color = (rb->rb_parent_color & ~1) | color;
}
# 139 "linux-2.6.18/include/linux/rbtree.h"
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
# 51 "linux-2.6.18/include/linux/sched.h" 2


# 1 "linux-2.6.18/include/linux/errno.h" 1



# 1 "linux-2.6.18/include/asm/errno.h" 1



# 1 "linux-2.6.18/include/asm-generic/errno.h" 1



# 1 "linux-2.6.18/include/asm-generic/errno-base.h" 1
# 5 "linux-2.6.18/include/asm-generic/errno.h" 2
# 5 "linux-2.6.18/include/asm/errno.h" 2
# 5 "linux-2.6.18/include/linux/errno.h" 2
# 54 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/nodemask.h" 1
# 86 "linux-2.6.18/include/linux/nodemask.h"
# 1 "linux-2.6.18/include/linux/numa.h" 1
# 87 "linux-2.6.18/include/linux/nodemask.h" 2

typedef struct { unsigned long bits[((((1 << 0))+64 -1)/64)]; } nodemask_t;
typedef  nodemask_t  _GLOBAL_64_T; extern  _GLOBAL_64_T  global__unused_nodemask_arg_[NUM_STACKS];   


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
 return ({ int __x = ((1 << 0)); int __y = (((__builtin_constant_p((1 << 0)) && ((1 << 0)) <= 64 ? (__scanbit(*(unsigned long *)srcp->bits,((1 << 0)))) : find_first_bit(srcp->bits,(1 << 0))))); __x < __y ? __x: __y; });
}


static inline  __attribute__((always_inline)) int __next_node(int n, const nodemask_t *srcp)
{
 return ({ int __x = ((1 << 0)); int __y = (((__builtin_constant_p((1 << 0)) && ((1 << 0)) <= 64 ? ((n+1) + (__scanbit((*(unsigned long *)srcp->bits) >> (n+1),((1 << 0))-(n+1)))) : find_next_bit(srcp->bits,(1 << 0),n+1)))); __x < __y ? __x: __y; });
}
# 251 "linux-2.6.18/include/linux/nodemask.h"
static inline  __attribute__((always_inline)) int __first_unset_node(const nodemask_t *maskp)
{
 return ({ int __x = ((1 << 0)); int __y = (((__builtin_constant_p((1 << 0)) && ((1 << 0)) <= 64 ? (__scanbit(~*(unsigned long *)maskp->bits,((1 << 0)))) : find_first_zero_bit(maskp->bits,(1 << 0))))); __x < __y ? __x: __y; })
                                                  ;
}
# 285 "linux-2.6.18/include/linux/nodemask.h"
static inline  __attribute__((always_inline)) int __nodemask_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline  __attribute__((always_inline)) int __nodemask_parse(const char *buf, int len,
     nodemask_t *dstp, int nbits)
{
 return bitmap_parse(buf, len, dstp->bits, nbits);
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
# 345 "linux-2.6.18/include/linux/nodemask.h"
typedef  nodemask_t  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_node_online_map[NUM_STACKS];   
typedef  nodemask_t  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_node_possible_map[NUM_STACKS];   
# 55 "linux-2.6.18/include/linux/sched.h" 2


# 1 "linux-2.6.18/include/asm/semaphore.h" 1
# 41 "linux-2.6.18/include/asm/semaphore.h"
# 1 "linux-2.6.18/include/asm/rwlock.h" 1
# 42 "linux-2.6.18/include/asm/semaphore.h" 2
# 1 "linux-2.6.18/include/linux/wait.h" 1
# 28 "linux-2.6.18/include/linux/wait.h"
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
# 80 "linux-2.6.18/include/linux/wait.h"
extern void init_waitqueue_head(wait_queue_head_t *q);

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
# 111 "linux-2.6.18/include/linux/wait.h"
extern void add_wait_queue(wait_queue_head_t *q, wait_queue_t * wait);
extern void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t * wait);
extern void remove_wait_queue(wait_queue_head_t *q, wait_queue_t * wait);

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
# 342 "linux-2.6.18/include/linux/wait.h"
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
extern long sleep_on_timeout(wait_queue_head_t *q, signed long timeout)
                               ;
extern void interruptible_sleep_on(wait_queue_head_t *q);
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q, signed long timeout)
                               ;




void prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state)
                                   ;
void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state)
                                   ;
void finish_wait(wait_queue_head_t *q, wait_queue_t *wait);
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
# 420 "linux-2.6.18/include/linux/wait.h"
static inline  __attribute__((always_inline)) int wait_on_bit(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!(__builtin_constant_p(bit) ? constant_test_bit((bit),(word)) : variable_test_bit((bit),(word))))
  return 0;
 return out_of_line_wait_on_bit(word, bit, action, mode);
}
# 444 "linux-2.6.18/include/linux/wait.h"
static inline  __attribute__((always_inline)) int wait_on_bit_lock(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!test_and_set_bit(bit, word))
  return 0;
 return out_of_line_wait_on_bit_lock(word, bit, action, mode);
}
# 43 "linux-2.6.18/include/asm/semaphore.h" 2
# 1 "linux-2.6.18/include/linux/rwsem.h" 1
# 19 "linux-2.6.18/include/linux/rwsem.h"
struct rw_semaphore;


# 1 "linux-2.6.18/include/linux/rwsem-spinlock.h" 1
# 22 "linux-2.6.18/include/linux/rwsem-spinlock.h"
struct rwsem_waiter;
# 31 "linux-2.6.18/include/linux/rwsem-spinlock.h"
struct rw_semaphore {
 __s32 activity;
 spinlock_t wait_lock;
 struct list_head wait_list;



};
# 52 "linux-2.6.18/include/linux/rwsem-spinlock.h"
extern void __init_rwsem(struct rw_semaphore *sem, const char *name,
    struct lock_class_key *key);
# 62 "linux-2.6.18/include/linux/rwsem-spinlock.h"
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
# 23 "linux-2.6.18/include/linux/rwsem.h" 2







extern void down_read(struct rw_semaphore *sem);




extern int down_read_trylock(struct rw_semaphore *sem);




extern void down_write(struct rw_semaphore *sem);




extern int down_write_trylock(struct rw_semaphore *sem);




extern void up_read(struct rw_semaphore *sem);




extern void up_write(struct rw_semaphore *sem);




extern void downgrade_write(struct rw_semaphore *sem);
# 44 "linux-2.6.18/include/asm/semaphore.h" 2


struct semaphore {
 atomic_t count;
 int sleepers;
 wait_queue_head_t wait;
};
# 65 "linux-2.6.18/include/asm/semaphore.h"
static inline  __attribute__((always_inline)) void sema_init (struct semaphore *sem, int val)
{






 (((&sem->count)->counter) = (val));
 sem->sleepers = 0;
 init_waitqueue_head(&sem->wait);
}

static inline  __attribute__((always_inline)) void init_MUTEX (struct semaphore *sem)
{
 sema_init(sem, 1);
}

static inline  __attribute__((always_inline)) void init_MUTEX_LOCKED (struct semaphore *sem)
{
 sema_init(sem, 0);
}

 void __down_failed(void );
 int __down_failed_interruptible(void );
 int __down_failed_trylock(void );
 void __up_wakeup(void );

 void __down(struct semaphore * sem);
 int __down_interruptible(struct semaphore * sem);
 int __down_trylock(struct semaphore * sem);
 void __up(struct semaphore * sem);






static inline  __attribute__((always_inline)) void down(struct semaphore * sem)
{
 do { do { } while (0); } while (0);

 __asm__ __volatile__(
  "# atomic down operation\n\t"
  "" "decl %0\n\t"
  "js 2f\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock.""clnt" "\n\t" ".text.lock.""clnt" ":\n\t" ".endif\n"
  "2:\tcall __down_failed\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  :"=m" (sem->count)
  :"D" (sem)
  :"memory");
}





static inline  __attribute__((always_inline)) int down_interruptible(struct semaphore * sem)
{
 int result;

 do { do { } while (0); } while (0);

 __asm__ __volatile__(
  "# atomic interruptible down operation\n\t"
  "" "decl %1\n\t"
  "js 2f\n\t"
  "xorl %0,%0\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock.""clnt" "\n\t" ".text.lock.""clnt" ":\n\t" ".endif\n"
  "2:\tcall __down_failed_interruptible\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  :"=a" (result), "=m" (sem->count)
  :"D" (sem)
  :"memory");
 return result;
}





static inline  __attribute__((always_inline)) int down_trylock(struct semaphore * sem)
{
 int result;

 __asm__ __volatile__(
  "# atomic interruptible down operation\n\t"
  "" "decl %1\n\t"
  "js 2f\n\t"
  "xorl %0,%0\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock.""clnt" "\n\t" ".text.lock.""clnt" ":\n\t" ".endif\n"
  "2:\tcall __down_failed_trylock\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  :"=a" (result), "=m" (sem->count)
  :"D" (sem)
  :"memory","cc");
 return result;
}







static inline  __attribute__((always_inline)) void up(struct semaphore * sem)
{
 __asm__ __volatile__(
  "# atomic up operation\n\t"
  "" "incl %0\n\t"
  "jle 2f\n"
  "1:\n"
  ".subsection 1\n\t" "" ".ifndef " ".text.lock.""clnt" "\n\t" ".text.lock.""clnt" ":\n\t" ".endif\n"
  "2:\tcall __up_wakeup\n\t"
  "jmp 1b\n"
  ".previous\n\t"
  :"=m" (sem->count)
  :"D" (sem)
  :"memory");
}
# 58 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/asm/ptrace.h" 1
# 39 "linux-2.6.18/include/asm/ptrace.h"
struct pt_regs {
 unsigned long r15;
 unsigned long r14;
 unsigned long r13;
 unsigned long r12;
 unsigned long rbp;
 unsigned long rbx;

  unsigned long r11;
 unsigned long r10;
 unsigned long r9;
 unsigned long r8;
 unsigned long rax;
 unsigned long rcx;
 unsigned long rdx;
 unsigned long rsi;
 unsigned long rdi;
 unsigned long orig_rax;


 unsigned long rip;
 unsigned long cs;
 unsigned long eflags;
 unsigned long rsp;
 unsigned long ss;

};
# 87 "linux-2.6.18/include/asm/ptrace.h"
extern unsigned long profile_pc(struct pt_regs *regs);
void signal_fault(struct pt_regs *regs, void *frame, char *where);

struct task_struct;

extern unsigned long
convert_rip_to_linear(struct task_struct *child, struct pt_regs *regs);

enum {
        EF_CF = 0x00000001,
        EF_PF = 0x00000004,
        EF_AF = 0x00000010,
        EF_ZF = 0x00000040,
        EF_SF = 0x00000080,
        EF_TF = 0x00000100,
        EF_IE = 0x00000200,
        EF_DF = 0x00000400,
        EF_OF = 0x00000800,
        EF_IOPL = 0x00003000,
        EF_IOPL_RING0 = 0x00000000,
        EF_IOPL_RING1 = 0x00001000,
        EF_IOPL_RING2 = 0x00002000,
        EF_NT = 0x00004000,
        EF_RF = 0x00010000,
        EF_VM = 0x00020000,
        EF_AC = 0x00040000,
        EF_VIF = 0x00080000,
        EF_VIP = 0x00100000,
        EF_ID = 0x00200000,
};
# 60 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/asm/mmu.h" 1
# 13 "linux-2.6.18/include/asm/mmu.h"
typedef struct {
 void *ldt;
 rwlock_t ldtlock;
 int size;
 struct semaphore sem;
} mm_context_t;
# 61 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/asm/cputime.h" 1



# 1 "linux-2.6.18/include/asm-generic/cputime.h" 1






typedef unsigned long cputime_t;
# 23 "linux-2.6.18/include/asm-generic/cputime.h"
typedef u64 cputime64_t;
# 5 "linux-2.6.18/include/asm/cputime.h" 2
# 62 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/linux/smp.h" 1
# 10 "linux-2.6.18/include/linux/smp.h"
extern void cpu_idle(void);
# 84 "linux-2.6.18/include/linux/smp.h"
static inline  __attribute__((always_inline)) int up_smp_call_function(void)
{
 return 0;
}
# 96 "linux-2.6.18/include/linux/smp.h"
static inline  __attribute__((always_inline)) void smp_send_reschedule(int cpu) { }
# 128 "linux-2.6.18/include/linux/smp.h"
void smp_setup_processor_id(void);
# 64 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/sem.h" 1



# 1 "linux-2.6.18/include/linux/ipc.h" 1
# 9 "linux-2.6.18/include/linux/ipc.h"
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


# 1 "linux-2.6.18/include/asm/ipcbuf.h" 1
# 14 "linux-2.6.18/include/asm/ipcbuf.h"
struct ipc64_perm
{
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
# 22 "linux-2.6.18/include/linux/ipc.h" 2
# 57 "linux-2.6.18/include/linux/ipc.h"
struct kern_ipc_perm
{
 spinlock_t lock;
 int deleted;
 key_t key;
 uid_t uid;
 gid_t gid;
 uid_t cuid;
 gid_t cgid;
 mode_t mode;
 unsigned long seq;
 void *security;
};
# 5 "linux-2.6.18/include/linux/sem.h" 2
# 23 "linux-2.6.18/include/linux/sem.h"
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


# 1 "linux-2.6.18/include/asm/sembuf.h" 1
# 14 "linux-2.6.18/include/asm/sembuf.h"
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
# 36 "linux-2.6.18/include/linux/sem.h" 2


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
# 82 "linux-2.6.18/include/linux/sem.h"
struct task_struct;


struct sem {
 int semval;
 int sempid;
};


struct sem_array {
 struct kern_ipc_perm sem_perm;
 int sem_id;
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



extern int copy_semundo(unsigned long clone_flags, struct task_struct *tsk);
extern void exit_sem(struct task_struct *tsk);
# 65 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/signal.h" 1



# 1 "linux-2.6.18/include/asm/signal.h" 1
# 9 "linux-2.6.18/include/asm/signal.h"
struct siginfo;
# 20 "linux-2.6.18/include/asm/signal.h"
typedef unsigned long old_sigset_t;

typedef struct {
 unsigned long sig[(64 / 64)];
} sigset_t;


struct pt_regs;
 int do_signal(struct pt_regs *regs, sigset_t *oldset);
# 117 "linux-2.6.18/include/asm/signal.h"
# 1 "linux-2.6.18/include/asm-generic/signal.h" 1
# 17 "linux-2.6.18/include/asm-generic/signal.h"
typedef void __signalfn_t(int);
typedef __signalfn_t *__sighandler_t;

typedef void __restorefn_t(void);
typedef __restorefn_t *__sigrestore_t;
# 118 "linux-2.6.18/include/asm/signal.h" 2



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
# 5 "linux-2.6.18/include/linux/signal.h" 2
# 1 "linux-2.6.18/include/asm/siginfo.h" 1





# 1 "linux-2.6.18/include/asm-generic/siginfo.h" 1






typedef union sigval {
 int sival_int;
 void *sival_ptr;
} sigval_t;
# 40 "linux-2.6.18/include/asm-generic/siginfo.h"
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
# 251 "linux-2.6.18/include/asm-generic/siginfo.h"
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
  ({ size_t __len = (sizeof(*to)); void *__ret; if (__builtin_constant_p(sizeof(*to)) && __len >= 64) __ret = __memcpy((to),(from),__len); else __ret = __builtin_memcpy((to),(from),__len); __ret; });
 else

  ({ size_t __len = ((4 * sizeof(int)) + sizeof(from->_sifields._sigchld)); void *__ret; if (__builtin_constant_p((4 * sizeof(int)) + sizeof(from->_sifields._sigchld)) && __len >= 64) __ret = __memcpy((to),(from),__len); else __ret = __builtin_memcpy((to),(from),__len); __ret; });
}



extern int copy_siginfo_to_user(struct siginfo *to, struct siginfo *from);
# 7 "linux-2.6.18/include/asm/siginfo.h" 2
# 6 "linux-2.6.18/include/linux/signal.h" 2
# 15 "linux-2.6.18/include/linux/signal.h"
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
# 39 "linux-2.6.18/include/linux/signal.h"
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
# 120 "linux-2.6.18/include/linux/signal.h"
static inline  __attribute__((always_inline)) void sigorsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) | (b3)); r->sig[2] = ((a2) | (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) | (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) | (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline  __attribute__((always_inline)) void sigandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & (b3)); r->sig[2] = ((a2) & (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline  __attribute__((always_inline)) void signandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & ~(b3)); r->sig[2] = ((a2) & ~(b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & ~(b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & ~(b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }
# 150 "linux-2.6.18/include/linux/signal.h"
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

extern int group_send_sig_info(int sig, struct siginfo *info, struct task_struct *p);
extern int __group_send_sig_info(int, struct siginfo *, struct task_struct *);
extern long do_sigpending(void *, unsigned long);
extern int sigprocmask(int, sigset_t *, sigset_t *);

struct pt_regs;
extern int get_signal_to_deliver(siginfo_t *info, struct k_sigaction *return_ka, struct pt_regs *regs, void *cookie);
# 66 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/securebits.h" 1





typedef  unsigned  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_securebits[NUM_STACKS];   
# 67 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/fs_struct.h" 1



struct dentry;
struct vfsmount;

struct fs_struct {
 atomic_t count;
 rwlock_t lock;
 int umask;
 struct dentry * root, * pwd, * altroot;
 struct vfsmount * rootmnt, * pwdmnt, * altrootmnt;
};







extern void exit_fs(struct task_struct *);
extern void set_fs_altroot(void);
extern void set_fs_root(struct fs_struct *, struct vfsmount *, struct dentry *);
extern void set_fs_pwd(struct fs_struct *, struct vfsmount *, struct dentry *);
extern struct fs_struct *copy_fs_struct(struct fs_struct *);
extern void put_fs_struct(struct fs_struct *);
# 68 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/linux/completion.h" 1
# 13 "linux-2.6.18/include/linux/completion.h"
struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};
# 39 "linux-2.6.18/include/linux/completion.h"
static inline  __attribute__((always_inline)) void init_completion(struct completion *x)
{
 x->done = 0;
 init_waitqueue_head(&x->wait);
}

extern void wait_for_completion(struct completion *);
extern int wait_for_completion_interruptible(struct completion *x);
extern unsigned long wait_for_completion_timeout(struct completion *x, unsigned long timeout)
                                ;
extern unsigned long wait_for_completion_interruptible_timeout( struct completion *x, unsigned long timeout)
                                                ;

extern void complete(struct completion *);
extern void complete_all(struct completion *);
# 70 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/pid.h" 1



# 1 "linux-2.6.18/include/linux/rcupdate.h" 1
# 41 "linux-2.6.18/include/linux/rcupdate.h"
# 1 "linux-2.6.18/include/linux/percpu.h" 1



# 1 "linux-2.6.18/include/linux/slab.h" 1
# 12 "linux-2.6.18/include/linux/slab.h"
typedef struct kmem_cache kmem_cache_t;

# 1 "linux-2.6.18/include/linux/gfp.h" 1



# 1 "linux-2.6.18/include/linux/mmzone.h" 1
# 13 "linux-2.6.18/include/linux/mmzone.h"
# 1 "linux-2.6.18/include/linux/init.h" 1
# 63 "linux-2.6.18/include/linux/init.h"
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

extern initcall_t __con_initcall_start[], __con_initcall_end[];
typedef  initcall_t  _GLOBAL_68_T; extern  _GLOBAL_68_T  _GLOBAL_0___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_1___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_2___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_3___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_4___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_5___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_6___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_7___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_8___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_9___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_10___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_11___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_12___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_13___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_14___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_15___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_16___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_17___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_18___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_19___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_20___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_21___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_22___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_23___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_24___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_25___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_26___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_27___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_28___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_29___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_30___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_31___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_32___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_33___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_34___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_35___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_36___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_37___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_38___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_39___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_40___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_41___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_42___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_43___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_44___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_45___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_46___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_47___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_48___security_initcall_start_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_49___security_initcall_start_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___security_initcall_start_I) *_GLOBAL___security_initcall_start_5_A[NUM_STACKS];extern  _GLOBAL_68_T  _GLOBAL_0___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_1___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_2___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_3___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_4___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_5___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_6___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_7___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_8___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_9___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_10___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_11___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_12___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_13___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_14___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_15___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_16___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_17___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_18___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_19___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_20___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_21___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_22___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_23___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_24___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_25___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_26___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_27___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_28___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_29___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_30___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_31___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_32___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_33___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_34___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_35___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_36___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_37___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_38___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_39___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_40___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_41___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_42___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_43___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_44___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_45___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_46___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_47___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_48___security_initcall_end_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_49___security_initcall_end_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___security_initcall_end_I) *_GLOBAL___security_initcall_end_6_A[NUM_STACKS];   


typedef  char  _GLOBAL_69_T; extern  _GLOBAL_69_T  _GLOBAL_0_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_1_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_2_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_3_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_4_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_5_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_6_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_7_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_8_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_9_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_10_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_11_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_12_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_13_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_14_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_15_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_16_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_17_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_18_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_19_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_20_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_21_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_22_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_23_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_24_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_25_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_26_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_27_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_28_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_29_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_30_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_31_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_32_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_33_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_34_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_35_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_36_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_37_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_38_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_39_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_40_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_41_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_42_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_43_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_44_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_45_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_46_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_47_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_48_saved_command_line_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_49_saved_command_line_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_saved_command_line_I) *_GLOBAL_saved_command_line_7_A[NUM_STACKS];  


extern void setup_arch(char **);
# 113 "linux-2.6.18/include/linux/init.h"
struct obs_kernel_param {
 const char *str;
 int (*setup_func)(char *);
 int early;
};
# 148 "linux-2.6.18/include/linux/init.h"
void  __attribute__ ((__section__ (".init.text"))) parse_early_param(void);
# 14 "linux-2.6.18/include/linux/mmzone.h" 2
# 27 "linux-2.6.18/include/linux/mmzone.h"
struct free_area {
 struct list_head free_list;
 unsigned long nr_free;
};

struct pglist_data;
# 49 "linux-2.6.18/include/linux/mmzone.h"
enum zone_stat_item {
 NR_ANON_PAGES,
 NR_FILE_MAPPED,

 NR_FILE_PAGES,
 NR_SLAB,
 NR_PAGETABLE,
 NR_FILE_DIRTY,
 NR_WRITEBACK,
 NR_UNSTABLE_NFS,
 NR_BOUNCE,
# 68 "linux-2.6.18/include/linux/mmzone.h"
 NR_VM_ZONE_STAT_ITEMS };

struct per_cpu_pages {
 int count;
 int high;
 int batch;
 struct list_head list;
};

struct per_cpu_pageset {
 struct per_cpu_pages pcp[2];




} ;
# 139 "linux-2.6.18/include/linux/mmzone.h"
struct zone {

 unsigned long free_pages;
 unsigned long pages_min, pages_low, pages_high;
# 151 "linux-2.6.18/include/linux/mmzone.h"
 unsigned long lowmem_reserve[4];
# 160 "linux-2.6.18/include/linux/mmzone.h"
 struct per_cpu_pageset pageset[1];




 spinlock_t lock;




 struct free_area free_area[11];





 spinlock_t lru_lock;
 struct list_head active_list;
 struct list_head inactive_list;
 unsigned long nr_scan_active;
 unsigned long nr_scan_inactive;
 unsigned long nr_active;
 unsigned long nr_inactive;
 unsigned long pages_scanned;
 int all_unreclaimable;


 atomic_t reclaim_in_progress;


 atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];
# 208 "linux-2.6.18/include/linux/mmzone.h"
 int temp_priority;
 int prev_priority;



# 239 "linux-2.6.18/include/linux/mmzone.h"
 wait_queue_head_t * wait_table;
 unsigned long wait_table_hash_nr_entries;
 unsigned long wait_table_bits;




 struct pglist_data *zone_pgdat;

 unsigned long zone_start_pfn;
# 260 "linux-2.6.18/include/linux/mmzone.h"
 unsigned long spanned_pages;
 unsigned long present_pages;




 char *name;
} ;
# 288 "linux-2.6.18/include/linux/mmzone.h"
struct zonelist {
 struct zone *zones[(1 << 0) * 4 + 1];
};
# 304 "linux-2.6.18/include/linux/mmzone.h"
struct bootmem_data;
typedef struct pglist_data {
 struct zone node_zones[4];
 struct zonelist node_zonelists[((0x07 + 1) / 2 + 1)];
 int nr_zones;



 struct bootmem_data *bdata;
# 323 "linux-2.6.18/include/linux/mmzone.h"
 unsigned long node_start_pfn;
 unsigned long node_present_pages;
 unsigned long node_spanned_pages;

 int node_id;
 wait_queue_head_t kswapd_wait;
 struct task_struct *kswapd;
 int kswapd_max_order;
} pg_data_t;
# 342 "linux-2.6.18/include/linux/mmzone.h"
# 1 "linux-2.6.18/include/linux/memory_hotplug.h" 1



# 1 "linux-2.6.18/include/linux/mmzone.h" 1
# 5 "linux-2.6.18/include/linux/memory_hotplug.h" 2


# 1 "linux-2.6.18/include/linux/notifier.h" 1
# 13 "linux-2.6.18/include/linux/notifier.h"
# 1 "linux-2.6.18/include/linux/mutex.h" 1
# 47 "linux-2.6.18/include/linux/mutex.h"
struct mutex {

 atomic_t count;
 spinlock_t wait_lock;
 struct list_head wait_list;
# 60 "linux-2.6.18/include/linux/mutex.h"
};





struct mutex_waiter {
 struct list_head list;
 struct task_struct *task;




};
# 105 "linux-2.6.18/include/linux/mutex.h"
extern void __mutex_init(struct mutex *lock, const char *name,
    struct lock_class_key *key);







static inline  __attribute__((always_inline)) int mutex_is_locked(struct mutex *lock)
{
 return ((&lock->count)->counter) != 1;
}





extern void mutex_lock(struct mutex *lock);
extern int mutex_lock_interruptible(struct mutex *lock);
# 136 "linux-2.6.18/include/linux/mutex.h"
extern int mutex_trylock(struct mutex *lock);
extern void mutex_unlock(struct mutex *lock);
# 14 "linux-2.6.18/include/linux/notifier.h" 2
# 35 "linux-2.6.18/include/linux/notifier.h"
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
# 88 "linux-2.6.18/include/linux/notifier.h"
extern int atomic_notifier_chain_register(struct atomic_notifier_head *,
  struct notifier_block *);
extern int blocking_notifier_chain_register(struct blocking_notifier_head *,
  struct notifier_block *);
extern int raw_notifier_chain_register(struct raw_notifier_head *,
  struct notifier_block *);

extern int atomic_notifier_chain_unregister(struct atomic_notifier_head *,
  struct notifier_block *);
extern int blocking_notifier_chain_unregister(struct blocking_notifier_head *,
  struct notifier_block *);
extern int raw_notifier_chain_unregister(struct raw_notifier_head *,
  struct notifier_block *);

extern int atomic_notifier_call_chain(struct atomic_notifier_head *,
  unsigned long val, void *v);
extern int blocking_notifier_call_chain(struct blocking_notifier_head *,
  unsigned long val, void *v);
extern int raw_notifier_call_chain(struct raw_notifier_head *,
  unsigned long val, void *v);
# 8 "linux-2.6.18/include/linux/memory_hotplug.h" 2

struct page;
struct zone;
struct pglist_data;
# 140 "linux-2.6.18/include/linux/memory_hotplug.h"
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


static inline  __attribute__((always_inline)) int __remove_pages(struct zone *zone, unsigned long start_pfn,
 unsigned long nr_pages)
{
 printk("<4>" "%s() called, not yet supported\n", (__func__));
 dump_stack();
 return -38;
}

extern int add_memory(int nid, u64 start, u64 size);
extern int arch_add_memory(int nid, u64 start, u64 size);
extern int remove_memory(u64 start, u64 size);
# 343 "linux-2.6.18/include/linux/mmzone.h" 2

void __get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free, struct pglist_data *pgdat);
void get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free);
void build_all_zonelists(void);
void wakeup_kswapd(struct zone *zone, int order);
int zone_watermark_ok(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);

extern int init_currently_empty_zone(struct zone *zone, unsigned long start_pfn,
         unsigned long size);




static inline  __attribute__((always_inline)) void memory_present(int nid, unsigned long start, unsigned long end) {}
# 371 "linux-2.6.18/include/linux/mmzone.h"
static inline  __attribute__((always_inline)) int populated_zone(struct zone *zone)
{
 return (!!zone->present_pages);
}

static inline  __attribute__((always_inline)) int is_highmem_idx(int idx)
{
 return (idx == 3);
}

static inline  __attribute__((always_inline)) int is_normal_idx(int idx)
{
 return (idx == 2);
}







static inline  __attribute__((always_inline)) int is_highmem(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + 3;
}

static inline  __attribute__((always_inline)) int is_normal(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + 2;
}

static inline  __attribute__((always_inline)) int is_dma32(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + 1;
}

static inline  __attribute__((always_inline)) int is_dma(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + 0;
}


struct ctl_table;
struct file;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
typedef  int  _GLOBAL_70_T; extern  _GLOBAL_70_T  _GLOBAL_0_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_1_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_2_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_3_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_4_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_5_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_6_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_7_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_8_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_9_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_10_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_11_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_12_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_13_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_14_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_15_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_16_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_17_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_18_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_19_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_20_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_21_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_22_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_23_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_24_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_25_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_26_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_27_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_28_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_29_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_30_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_31_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_32_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_33_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_34_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_35_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_36_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_37_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_38_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_39_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_40_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_41_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_42_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_43_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_44_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_45_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_46_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_47_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_48_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_70_T  _GLOBAL_49_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysctl_lowmem_reserve_ratio_I) *_GLOBAL_sysctl_lowmem_reserve_ratio_8_A[NUM_STACKS];   
int lowmem_reserve_ratio_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int percpu_pagelist_fraction_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int sysctl_min_unmapped_ratio_sysctl_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);

# 1 "linux-2.6.18/include/linux/topology.h" 1
# 34 "linux-2.6.18/include/linux/topology.h"
# 1 "linux-2.6.18/include/asm/topology.h" 1
# 66 "linux-2.6.18/include/asm/topology.h"
# 1 "linux-2.6.18/include/asm-generic/topology.h" 1
# 67 "linux-2.6.18/include/asm/topology.h" 2

extern cpumask_t cpu_coregroup_map(int cpu);
# 35 "linux-2.6.18/include/linux/topology.h" 2
# 426 "linux-2.6.18/include/linux/mmzone.h" 2







typedef  struct pglist_data   _GLOBAL_71_T; extern  _GLOBAL_71_T  global_contig_page_data[NUM_STACKS];    
# 444 "linux-2.6.18/include/linux/mmzone.h"
extern struct pglist_data *first_online_pgdat(void);
extern struct pglist_data *next_online_pgdat(struct pglist_data *pgdat);
extern struct zone *next_zone(struct zone *zone);
# 636 "linux-2.6.18/include/linux/mmzone.h"
void memory_present(int nid, unsigned long start, unsigned long end);
unsigned long  __attribute__ ((__section__ (".init.text"))) node_memmap_size_bytes(int, unsigned long, unsigned long);
# 5 "linux-2.6.18/include/linux/gfp.h" 2



struct vm_area_struct;
# 79 "linux-2.6.18/include/linux/gfp.h"
static inline  __attribute__((always_inline)) int gfp_zone(gfp_t gfp)
{
 int zone = 0x07 & ( int) gfp;
 do { if (zone >= ((0x07 + 1) / 2 + 1)) ; } while(0);
 return zone;
}
# 102 "linux-2.6.18/include/linux/gfp.h"
static inline  __attribute__((always_inline)) void arch_free_page(struct page *page, int order) { }


extern struct page *
__alloc_pages(gfp_t, unsigned int, struct zonelist *);

static inline  __attribute__((always_inline)) struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{
 if (__builtin_expect(!!(order >= 11), 0))
  return ((void *)0);


 if (nid < 0)
  nid = ((0));

 return __alloc_pages(gfp_mask, order,
  (&global_contig_page_data[get_stack_id()])->node_zonelists + gfp_zone(gfp_mask));
}
# 142 "linux-2.6.18/include/linux/gfp.h"
extern unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order);
extern unsigned long get_zeroed_page(gfp_t gfp_mask);







extern void __free_pages(struct page *page, unsigned int order);
extern void free_pages(unsigned long addr, unsigned int order);
extern void free_hot_page(struct page *page);
extern void free_cold_page(struct page *page);




void page_alloc_init(void);



static inline  __attribute__((always_inline)) void drain_node_pages(int node) { };
# 15 "linux-2.6.18/include/linux/slab.h" 2
# 58 "linux-2.6.18/include/linux/slab.h"
extern void  __attribute__ ((__section__ (".init.text"))) kmem_cache_init(void);

extern kmem_cache_t *kmem_cache_create(const char *, size_t, size_t, unsigned long,
           void (*)(void *, kmem_cache_t *, unsigned long),
           void (*)(void *, kmem_cache_t *, unsigned long));
extern int kmem_cache_destroy(kmem_cache_t *);
extern int kmem_cache_shrink(kmem_cache_t *);
extern void *kmem_cache_alloc(kmem_cache_t *, gfp_t);
extern void *kmem_cache_zalloc(struct kmem_cache *, gfp_t);
extern void kmem_cache_free(kmem_cache_t *, void *);
extern unsigned int kmem_cache_size(kmem_cache_t *);
extern const char *kmem_cache_name(kmem_cache_t *);
extern kmem_cache_t *kmem_find_general_cachep(size_t size, gfp_t gfpflags);


struct cache_sizes {
 size_t cs_size;
 kmem_cache_t *cs_cachep;
 kmem_cache_t *cs_dmacachep;
};
typedef  struct cache_sizes   _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_1_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_2_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_3_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_4_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_5_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_6_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_7_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_8_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_9_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_10_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_11_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_12_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_13_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_14_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_15_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_16_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_17_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_18_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_19_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_20_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_21_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_22_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_23_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_24_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_25_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_26_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_27_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_28_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_29_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_30_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_31_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_32_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_33_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_34_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_35_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_36_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_37_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_38_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_39_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_40_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_41_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_42_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_43_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_44_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_45_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_46_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_47_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_48_malloc_sizes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_49_malloc_sizes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_malloc_sizes_I) *_GLOBAL_malloc_sizes_9_A[NUM_STACKS] = { &_GLOBAL_0_malloc_sizes_I, &_GLOBAL_1_malloc_sizes_I, &_GLOBAL_2_malloc_sizes_I, &_GLOBAL_3_malloc_sizes_I, &_GLOBAL_4_malloc_sizes_I, &_GLOBAL_5_malloc_sizes_I, &_GLOBAL_6_malloc_sizes_I, &_GLOBAL_7_malloc_sizes_I, &_GLOBAL_8_malloc_sizes_I, &_GLOBAL_9_malloc_sizes_I, &_GLOBAL_10_malloc_sizes_I, &_GLOBAL_11_malloc_sizes_I, &_GLOBAL_12_malloc_sizes_I, &_GLOBAL_13_malloc_sizes_I, &_GLOBAL_14_malloc_sizes_I, &_GLOBAL_15_malloc_sizes_I, &_GLOBAL_16_malloc_sizes_I, &_GLOBAL_17_malloc_sizes_I, &_GLOBAL_18_malloc_sizes_I, &_GLOBAL_19_malloc_sizes_I, &_GLOBAL_20_malloc_sizes_I, &_GLOBAL_21_malloc_sizes_I, &_GLOBAL_22_malloc_sizes_I, &_GLOBAL_23_malloc_sizes_I, &_GLOBAL_24_malloc_sizes_I, &_GLOBAL_25_malloc_sizes_I, &_GLOBAL_26_malloc_sizes_I, &_GLOBAL_27_malloc_sizes_I, &_GLOBAL_28_malloc_sizes_I, &_GLOBAL_29_malloc_sizes_I, &_GLOBAL_30_malloc_sizes_I, &_GLOBAL_31_malloc_sizes_I, &_GLOBAL_32_malloc_sizes_I, &_GLOBAL_33_malloc_sizes_I, &_GLOBAL_34_malloc_sizes_I, &_GLOBAL_35_malloc_sizes_I, &_GLOBAL_36_malloc_sizes_I, &_GLOBAL_37_malloc_sizes_I, &_GLOBAL_38_malloc_sizes_I, &_GLOBAL_39_malloc_sizes_I, &_GLOBAL_40_malloc_sizes_I, &_GLOBAL_41_malloc_sizes_I, &_GLOBAL_42_malloc_sizes_I, &_GLOBAL_43_malloc_sizes_I, &_GLOBAL_44_malloc_sizes_I, &_GLOBAL_45_malloc_sizes_I, &_GLOBAL_46_malloc_sizes_I, &_GLOBAL_47_malloc_sizes_I, &_GLOBAL_48_malloc_sizes_I, &_GLOBAL_49_malloc_sizes_I, };   

extern void *__kmalloc(size_t, gfp_t);
# 134 "linux-2.6.18/include/linux/slab.h"
static inline  __attribute__((always_inline)) void *kmalloc(size_t size, gfp_t flags)
{
 if (__builtin_constant_p(size)) {
  int i = 0;





# 1 "linux-2.6.18/include/linux/kmalloc_sizes.h" 1

 if (size <= 32) goto found; else i++;

 if (size <= 64) goto found; else i++;



 if (size <= 128) goto found; else i++;



 if (size <= 256) goto found; else i++;
 if (size <= 512) goto found; else i++;
 if (size <= 1024) goto found; else i++;
 if (size <= 2048) goto found; else i++;
 if (size <= 4096) goto found; else i++;
 if (size <= 8192) goto found; else i++;
 if (size <= 16384) goto found; else i++;
 if (size <= 32768) goto found; else i++;
 if (size <= 65536) goto found; else i++;
 if (size <= 131072) goto found; else i++;
# 144 "linux-2.6.18/include/linux/slab.h" 2

  {
   extern void __you_cannot_kmalloc_that_much(void);
   __you_cannot_kmalloc_that_much();
  }
found:
  return kmem_cache_alloc((flags & (( gfp_t)0x01u)) ?
   (*_GLOBAL_malloc_sizes_9_A[get_stack_id()])[i].cs_dmacachep :
   (*_GLOBAL_malloc_sizes_9_A[get_stack_id()])[i].cs_cachep, flags);
 }
 return __kmalloc(size, flags);
}

extern void *__kzalloc(size_t, gfp_t);






static inline  __attribute__((always_inline)) void *kzalloc(size_t size, gfp_t flags)
{
 if (__builtin_constant_p(size)) {
  int i = 0;





# 1 "linux-2.6.18/include/linux/kmalloc_sizes.h" 1

 if (size <= 32) goto found; else i++;

 if (size <= 64) goto found; else i++;



 if (size <= 128) goto found; else i++;



 if (size <= 256) goto found; else i++;
 if (size <= 512) goto found; else i++;
 if (size <= 1024) goto found; else i++;
 if (size <= 2048) goto found; else i++;
 if (size <= 4096) goto found; else i++;
 if (size <= 8192) goto found; else i++;
 if (size <= 16384) goto found; else i++;
 if (size <= 32768) goto found; else i++;
 if (size <= 65536) goto found; else i++;
 if (size <= 131072) goto found; else i++;
# 174 "linux-2.6.18/include/linux/slab.h" 2

  {
   extern void __you_cannot_kzalloc_that_much(void);
   __you_cannot_kzalloc_that_much();
  }
found:
  return kmem_cache_zalloc((flags & (( gfp_t)0x01u)) ?
   (*_GLOBAL_malloc_sizes_9_A[get_stack_id()])[i].cs_dmacachep :
   (*_GLOBAL_malloc_sizes_9_A[get_stack_id()])[i].cs_cachep, flags);
 }
 return __kzalloc(size, flags);
}







static inline  __attribute__((always_inline)) void *kcalloc(size_t n, size_t size, gfp_t flags)
{
 if (n != 0 && size > (~0UL) / n)
  return ((void *)0);
 return kzalloc(n * size, flags);
}

extern void kfree(const void *);
extern unsigned int ksize(const void *);
extern int slab_is_available(void);





static inline  __attribute__((always_inline)) void *kmem_cache_alloc_node(kmem_cache_t *cachep, gfp_t flags, int node)
{
 return kmem_cache_alloc(cachep, flags);
}
static inline  __attribute__((always_inline)) void *kmalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc(size, flags);
}


extern int kmem_cache_reap(int);
extern int kmem_ptr_validate(kmem_cache_t *cachep, void *ptr);
# 258 "linux-2.6.18/include/linux/slab.h"
typedef  kmem_cache_t  _GLOBAL_73_T; extern  _GLOBAL_73_T  * global_vm_area_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_74_T; extern  _GLOBAL_74_T  * global_names_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_75_T; extern  _GLOBAL_75_T  * global_files_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_76_T; extern  _GLOBAL_76_T  * global_filp_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_77_T; extern  _GLOBAL_77_T  * global_fs_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_78_T; extern  _GLOBAL_78_T  * global_sighand_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_79_T; extern  _GLOBAL_79_T  * global_bio_cachep[NUM_STACKS];   

typedef  atomic_t  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_slab_reclaim_pages[NUM_STACKS];   
# 5 "linux-2.6.18/include/linux/percpu.h" 2
# 42 "linux-2.6.18/include/linux/percpu.h"
static inline  __attribute__((always_inline)) void *__alloc_percpu(size_t size)
{
 void *ret = kmalloc(size, ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
 if (ret)
  memset(ret, 0, size);
 return ret;
}
static inline  __attribute__((always_inline)) void free_percpu(const void *ptr)
{
 kfree(ptr);
}
# 42 "linux-2.6.18/include/linux/rcupdate.h" 2
# 50 "linux-2.6.18/include/linux/rcupdate.h"
struct rcu_head {
 struct rcu_head *next;
 void (*func)(struct rcu_head *head);
};
# 64 "linux-2.6.18/include/linux/rcupdate.h"
struct rcu_ctrlblk {
 long cur;
 long completed;
 int next_pending;

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

typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_per_cpu__rcu_data[NUM_STACKS];    
typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_per_cpu__rcu_bh_data[NUM_STACKS];    







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
# 273 "linux-2.6.18/include/linux/rcupdate.h"
extern void rcu_init(void);
extern void rcu_check_callbacks(int cpu, int user);
extern void rcu_restart_cpu(int cpu);
extern long rcu_batches_completed(void);
extern long rcu_batches_completed_bh(void);


extern void call_rcu(struct rcu_head *head, void (*func)(struct rcu_head *head))
                                         ;
extern void call_rcu_bh(struct rcu_head *head, void (*func)(struct rcu_head *head))
                                         ;
extern void synchronize_rcu(void);
void synchronize_idle(void);
extern void rcu_barrier(void);
# 5 "linux-2.6.18/include/linux/pid.h" 2

enum pid_type
{
 PIDTYPE_PID,
 PIDTYPE_PGID,
 PIDTYPE_SID,
 PIDTYPE_MAX
};
# 42 "linux-2.6.18/include/linux/pid.h"
struct pid
{
 atomic_t count;

 int nr;
 struct hlist_node pid_chain;

 struct hlist_head tasks[PIDTYPE_MAX];
 struct rcu_head rcu;
};

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
extern struct task_struct *get_pid_task(struct pid *pid, enum pid_type)
                     ;





extern int attach_pid(struct task_struct *task, enum pid_type type, int nr)
                                ;

extern void detach_pid(struct task_struct *task, enum pid_type);





extern struct pid *find_pid(int nr);




extern struct pid *find_get_pid(int nr);

extern struct pid *alloc_pid(void);
extern void free_pid(struct pid *pid);
# 71 "linux-2.6.18/include/linux/sched.h" 2


# 1 "linux-2.6.18/include/linux/seccomp.h" 1
# 28 "linux-2.6.18/include/linux/seccomp.h"
typedef struct { } seccomp_t;



static inline  __attribute__((always_inline)) int has_secure_computing(struct thread_info *ti)
{
 return 0;
}
# 74 "linux-2.6.18/include/linux/sched.h" 2

# 1 "linux-2.6.18/include/linux/futex.h" 1



# 1 "linux-2.6.18/include/linux/sched.h" 1
# 5 "linux-2.6.18/include/linux/futex.h" 2
# 33 "linux-2.6.18/include/linux/futex.h"
struct robust_list {
 struct robust_list *next;
};
# 45 "linux-2.6.18/include/linux/futex.h"
struct robust_list_head {



 struct robust_list list;







 long futex_offset;
# 69 "linux-2.6.18/include/linux/futex.h"
 struct robust_list *list_op_pending;
};
# 96 "linux-2.6.18/include/linux/futex.h"
long do_futex(u32 *uaddr, int op, u32 val, unsigned long timeout,
       u32 *uaddr2, u32 val2, u32 val3);

extern int
handle_futex_death(u32 *uaddr, struct task_struct *curr, int pi);


extern void exit_robust_list(struct task_struct *curr);
extern void exit_pi_state_list(struct task_struct *curr);
# 76 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/rtmutex.h" 1
# 16 "linux-2.6.18/include/linux/rtmutex.h"
# 1 "linux-2.6.18/include/linux/plist.h" 1
# 80 "linux-2.6.18/include/linux/plist.h"
struct plist_head {
 struct list_head prio_list;
 struct list_head node_list;



};

struct plist_node {
 int prio;
 struct plist_head plist;
};
# 128 "linux-2.6.18/include/linux/plist.h"
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
# 200 "linux-2.6.18/include/linux/plist.h"
static inline  __attribute__((always_inline)) int plist_head_empty(const struct plist_head *head)
{
 return list_empty(&head->node_list);
}






static inline  __attribute__((always_inline)) int plist_node_empty(const struct plist_node *node)
{
 return plist_head_empty(&node->plist);
}
# 242 "linux-2.6.18/include/linux/plist.h"
static inline  __attribute__((always_inline)) struct plist_node* plist_first(const struct plist_head *head)
{
 return ({ const typeof( ((struct plist_node *)0)->plist.node_list ) *__mptr = (head->node_list.next); (struct plist_node *)( (char *)__mptr - __builtin_offsetof(struct plist_node,plist.node_list) );})
                                        ;
}
# 17 "linux-2.6.18/include/linux/rtmutex.h" 2
# 26 "linux-2.6.18/include/linux/rtmutex.h"
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
# 80 "linux-2.6.18/include/linux/rtmutex.h"
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
# 77 "linux-2.6.18/include/linux/sched.h" 2


# 1 "linux-2.6.18/include/linux/param.h" 1
# 80 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/resource.h" 1





struct task_struct;
# 23 "linux-2.6.18/include/linux/resource.h"
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
# 70 "linux-2.6.18/include/linux/resource.h"
# 1 "linux-2.6.18/include/asm/resource.h" 1



# 1 "linux-2.6.18/include/asm-generic/resource.h" 1
# 5 "linux-2.6.18/include/asm/resource.h" 2
# 71 "linux-2.6.18/include/linux/resource.h" 2

int getrusage(struct task_struct *p, int who, struct rusage *ru);
# 81 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/timer.h" 1







struct tvec_t_base_s;

struct timer_list {
 struct list_head entry;
 unsigned long expires;

 void (*function)(unsigned long);
 unsigned long data;

 struct tvec_t_base_s *base;
};

typedef  struct tvec_t_base_s   _GLOBAL_83_T; extern  _GLOBAL_83_T  _GLOBAL_0_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_1_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_2_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_3_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_4_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_5_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_6_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_7_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_8_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_9_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_10_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_11_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_12_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_13_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_14_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_15_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_16_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_17_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_18_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_19_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_20_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_21_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_22_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_23_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_24_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_25_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_26_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_27_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_28_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_29_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_30_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_31_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_32_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_33_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_34_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_35_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_36_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_37_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_38_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_39_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_40_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_41_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_42_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_43_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_44_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_45_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_46_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_47_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_48_boot_tvec_bases_I; extern  _GLOBAL_83_T  _GLOBAL_49_boot_tvec_bases_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_tvec_bases_I) *_GLOBAL_boot_tvec_bases_10_A[NUM_STACKS];   
# 33 "linux-2.6.18/include/linux/timer.h"
void init_timer(struct timer_list * timer);

static inline  __attribute__((always_inline)) void setup_timer(struct timer_list * timer,
    void (*function)(unsigned long),
    unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer(timer);
}
# 54 "linux-2.6.18/include/linux/timer.h"
static inline  __attribute__((always_inline)) int timer_pending(const struct timer_list * timer)
{
 return timer->entry.next != ((void *)0);
}

extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int __mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer(struct timer_list *timer, unsigned long expires);

extern unsigned long next_timer_interrupt(void);
# 80 "linux-2.6.18/include/linux/timer.h"
static inline  __attribute__((always_inline)) void add_timer(struct timer_list *timer)
{
 do { if (timer_pending(timer)) ; } while(0);
 __mod_timer(timer, timer->expires);
}
# 96 "linux-2.6.18/include/linux/timer.h"
extern void init_timers(void);
extern void run_local_timers(void);
struct hrtimer;
extern int it_real_fn(struct hrtimer *);
# 82 "linux-2.6.18/include/linux/sched.h" 2
# 1 "linux-2.6.18/include/linux/hrtimer.h" 1
# 19 "linux-2.6.18/include/linux/hrtimer.h"
# 1 "linux-2.6.18/include/linux/ktime.h" 1
# 46 "linux-2.6.18/include/linux/ktime.h"
typedef union {
 s64 tv64;
# 57 "linux-2.6.18/include/linux/ktime.h"
} ktime_t;
# 75 "linux-2.6.18/include/linux/ktime.h"
static inline  __attribute__((always_inline)) ktime_t ktime_set(const long secs, const unsigned long nsecs)
{

 if (__builtin_expect(!!(secs >= (((s64)~((u64)1 << 63)) / 1000000000L)), 0))
  return (ktime_t){ .tv64 = ((s64)~((u64)1 << 63)) };

 return (ktime_t) { .tv64 = (s64)secs * 1000000000L + (s64)nsecs };
}
# 100 "linux-2.6.18/include/linux/ktime.h"
static inline  __attribute__((always_inline)) ktime_t timespec_to_ktime(struct timespec ts)
{
 return ktime_set(ts.tv_sec, ts.tv_nsec);
}


static inline  __attribute__((always_inline)) ktime_t timeval_to_ktime(struct timeval tv)
{
 return ktime_set(tv.tv_sec, tv.tv_usec * 1000L);
}
# 268 "linux-2.6.18/include/linux/ktime.h"
extern void ktime_get_ts(struct timespec *ts);
# 20 "linux-2.6.18/include/linux/hrtimer.h" 2







enum hrtimer_mode {
 HRTIMER_ABS,
 HRTIMER_REL,
};

enum hrtimer_restart {
 HRTIMER_NORESTART,
 HRTIMER_RESTART,
};



struct hrtimer_base;
# 52 "linux-2.6.18/include/linux/hrtimer.h"
struct hrtimer {
 struct rb_node node;
 ktime_t expires;
 int (*function)(struct hrtimer *);
 struct hrtimer_base *base;
};
# 66 "linux-2.6.18/include/linux/hrtimer.h"
struct hrtimer_sleeper {
 struct hrtimer timer;
 struct task_struct *task;
};
# 85 "linux-2.6.18/include/linux/hrtimer.h"
struct hrtimer_base {
 clockid_t index;
 spinlock_t lock;
 struct rb_root active;
 struct rb_node *first;
 ktime_t resolution;
 ktime_t (*get_time)(void);
 ktime_t (*get_softirq_time)(void);
 struct hrtimer *curr_timer;
 ktime_t softirq_time;
 struct lock_class_key lock_key;
};
# 108 "linux-2.6.18/include/linux/hrtimer.h"
extern void hrtimer_init(struct hrtimer *timer, clockid_t which_clock,
    enum hrtimer_mode mode);


extern int hrtimer_start(struct hrtimer *timer, ktime_t tim,
    const enum hrtimer_mode mode);
extern int hrtimer_cancel(struct hrtimer *timer);
extern int hrtimer_try_to_cancel(struct hrtimer *timer);




extern ktime_t hrtimer_get_remaining(const struct hrtimer *timer);
extern int hrtimer_get_res(const clockid_t which_clock, struct timespec *tp);





static inline  __attribute__((always_inline)) int hrtimer_active(const struct hrtimer *timer)
{
 return ((struct rb_node *)((&timer->node)->rb_parent_color & ~3)) != &timer->node;
}


extern unsigned long
hrtimer_forward(struct hrtimer *timer, ktime_t now, ktime_t interval);


extern long hrtimer_nanosleep(struct timespec *rqtp,
         struct timespec *rmtp,
         const enum hrtimer_mode mode,
         const clockid_t clockid);

extern void hrtimer_init_sleeper(struct hrtimer_sleeper *sl,
     struct task_struct *tsk);


extern void hrtimer_run_queues(void);


extern void  __attribute__ ((__section__ (".init.text"))) hrtimers_init(void);
# 83 "linux-2.6.18/include/linux/sched.h" 2



struct exec_domain;
struct futex_pi_state;
# 105 "linux-2.6.18/include/linux/sched.h"
typedef  unsigned long   _GLOBAL_84_T; extern  _GLOBAL_84_T  _GLOBAL_0_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_1_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_2_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_3_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_4_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_5_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_6_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_7_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_8_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_9_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_10_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_11_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_12_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_13_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_14_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_15_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_16_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_17_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_18_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_19_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_20_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_21_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_22_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_23_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_24_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_25_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_26_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_27_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_28_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_29_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_30_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_31_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_32_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_33_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_34_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_35_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_36_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_37_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_38_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_39_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_40_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_41_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_42_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_43_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_44_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_45_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_46_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_47_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_48_avenrun_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_49_avenrun_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_avenrun_I) *_GLOBAL_avenrun_11_A[NUM_STACKS];   
# 119 "linux-2.6.18/include/linux/sched.h"
typedef  unsigned long   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_total_forks[NUM_STACKS];    
typedef  int  _GLOBAL_86_T; extern  _GLOBAL_86_T  global_nr_threads[NUM_STACKS];   
typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_last_pid[NUM_STACKS];   
typedef  __typeof__ ( unsigned long  )   _GLOBAL_88_T; extern  _GLOBAL_88_T  global_per_cpu__process_counts[NUM_STACKS];    
extern int nr_processes(void);
extern unsigned long nr_running(void);
extern unsigned long nr_uninterruptible(void);
extern unsigned long nr_active(void);
extern unsigned long nr_iowait(void);
extern unsigned long weighted_cpuload(const int cpu);
# 184 "linux-2.6.18/include/linux/sched.h"
typedef  rwlock_t  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_tasklist_lock[NUM_STACKS];   
typedef  spinlock_t  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_mmlist_lock[NUM_STACKS];   

struct task_struct;

extern void sched_init(void);
extern void sched_init_smp(void);
extern void init_idle(struct task_struct *idle, int cpu);

typedef  cpumask_t  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_nohz_cpu_mask[NUM_STACKS];   

extern void show_state(void);
extern void show_regs(struct pt_regs *);






extern void show_stack(struct task_struct *task, unsigned long *sp);

void io_schedule(void);
long io_schedule_timeout(long timeout);

extern void cpu_init (void);
extern void trap_init(void);
extern void update_process_times(int user);
extern void scheduler_tick(void);


extern void softlockup_tick(void);
extern void spawn_softlockup_task(void);
extern void touch_softlockup_watchdog(void);
# 233 "linux-2.6.18/include/linux/sched.h"
extern int in_sched_functions(unsigned long addr);


extern signed long schedule_timeout(signed long timeout);
extern signed long schedule_timeout_interruptible(signed long timeout);
extern signed long schedule_timeout_uninterruptible(signed long timeout);
 void schedule(void);

struct namespace;




typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_sysctl_max_map_count[NUM_STACKS];   

# 1 "linux-2.6.18/include/linux/aio.h" 1




# 1 "linux-2.6.18/include/linux/workqueue.h" 1
# 12 "linux-2.6.18/include/linux/workqueue.h"
struct workqueue_struct;

struct work_struct {
 unsigned long pending;
 struct list_head entry;
 void (*func)(void *);
 void *data;
 void *wq_data;
 struct timer_list timer;
};

struct execute_work {
 struct work_struct work;
};
# 57 "linux-2.6.18/include/linux/workqueue.h"
extern struct workqueue_struct *__create_workqueue(const char *name,
          int singlethread);



extern void destroy_workqueue(struct workqueue_struct *wq);

extern int queue_work(struct workqueue_struct *wq, struct work_struct *work);
extern int queue_delayed_work(struct workqueue_struct *wq, struct work_struct *work, unsigned long delay);
extern int queue_delayed_work_on(int cpu, struct workqueue_struct *wq,
 struct work_struct *work, unsigned long delay);
extern void flush_workqueue(struct workqueue_struct *wq);

extern int schedule_work(struct work_struct *work);
extern int schedule_delayed_work(struct work_struct *work, unsigned long delay);

extern int schedule_delayed_work_on(int cpu, struct work_struct *work, unsigned long delay);
extern int schedule_on_each_cpu(void (*func)(void *info), void *info);
extern void flush_scheduled_work(void);
extern int current_is_keventd(void);
extern int keventd_up(void);

extern void init_workqueues(void);
void cancel_rearming_delayed_work(struct work_struct *work);
void cancel_rearming_delayed_workqueue(struct workqueue_struct *,
           struct work_struct *);
int execute_in_process_context(void (*fn)(void *), void *,
          struct execute_work *);






static inline  __attribute__((always_inline)) int cancel_delayed_work(struct work_struct *work)
{
 int ret;

 ret = del_timer(&work->timer);
 if (ret)
  clear_bit(0, &work->pending);
 return ret;
}
# 6 "linux-2.6.18/include/linux/aio.h" 2
# 1 "linux-2.6.18/include/linux/aio_abi.h" 1
# 32 "linux-2.6.18/include/linux/aio_abi.h"
typedef unsigned long aio_context_t;

enum {
 IOCB_CMD_PREAD = 0,
 IOCB_CMD_PWRITE = 1,
 IOCB_CMD_FSYNC = 2,
 IOCB_CMD_FDSYNC = 3,




 IOCB_CMD_NOOP = 6,
};


struct io_event {
 __u64 data;
 __u64 obj;
 __s64 res;
 __s64 res2;
};
# 68 "linux-2.6.18/include/linux/aio_abi.h"
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
 __u64 aio_reserved3;
};
# 7 "linux-2.6.18/include/linux/aio.h" 2






struct kioctx;
# 85 "linux-2.6.18/include/linux/aio.h"
struct kiocb {
 struct list_head ki_run_list;
 long ki_flags;
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
 long ki_retried;
 long ki_kicked;
 long ki_queued;

 struct list_head ki_list;

};
# 140 "linux-2.6.18/include/linux/aio.h"
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

 struct work_struct wq;
};


typedef  unsigned  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_aio_max_size[NUM_STACKS];   

extern ssize_t wait_on_sync_kiocb(struct kiocb *iocb);
extern int aio_put_req(struct kiocb *iocb);
extern void kick_iocb(struct kiocb *iocb);
extern int aio_complete(struct kiocb *iocb, long res, long res2);
extern void __put_ioctx(struct kioctx *ctx);
struct mm_struct;
extern void exit_aio(struct mm_struct *mm);
extern struct kioctx *lookup_ioctx(unsigned long ctx_id);
extern int io_submit_one(struct kioctx *ctx, struct iocb *user_iocb, struct iocb *iocb)
                                                     ;


struct kioctx *lookup_ioctx(unsigned long ctx_id);
int io_submit_one(struct kioctx *ctx, struct iocb *user_iocb, struct iocb *iocb)
                         ;
# 241 "linux-2.6.18/include/linux/aio.h"
static inline  __attribute__((always_inline)) struct kiocb *list_kiocb(struct list_head *h)
{
 return ({ const typeof( ((struct kiocb *)0)->ki_list ) *__mptr = (h); (struct kiocb *)( (char *)__mptr - __builtin_offsetof(struct kiocb,ki_list) );});
}


typedef  unsigned long   _GLOBAL_94_T; extern  _GLOBAL_94_T  global_aio_nr[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_95_T; extern  _GLOBAL_95_T  global_aio_max_nr[NUM_STACKS];    
# 249 "linux-2.6.18/include/linux/sched.h" 2

extern unsigned long
arch_get_unmapped_area(struct file *, unsigned long, unsigned long,
         unsigned long, unsigned long);
extern unsigned long
arch_get_unmapped_area_topdown(struct file *filp, unsigned long addr,
     unsigned long len, unsigned long pgoff,
     unsigned long flags);
extern void arch_unmap_area(struct mm_struct *, unsigned long);
extern void arch_unmap_area_topdown(struct mm_struct *, unsigned long);
# 270 "linux-2.6.18/include/linux/sched.h"
typedef atomic_long_t mm_counter_t;
# 298 "linux-2.6.18/include/linux/sched.h"
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

 unsigned long saved_auxv[44];

 unsigned dumpable:2;
 cpumask_t cpu_vm_mask;


 mm_context_t context;


 unsigned long swap_token_time;
 char recent_pagein;


 int core_waiters;
 struct completion *core_startup_done, core_done;


 rwlock_t ioctx_list_lock;
 struct kioctx *ioctx_list;
};

struct sighand_struct {
 atomic_t count;
 struct k_sigaction action[64];
 spinlock_t siglock;
};

struct pacct_struct {
 int ac_flag;
 long ac_exitcode;
 unsigned long ac_mem;
 cputime_t ac_utime, ac_stime;
 unsigned long ac_minflt, ac_majflt;
};
# 379 "linux-2.6.18/include/linux/sched.h"
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
 struct task_struct *tsk;
 ktime_t it_real_incr;


 cputime_t it_prof_expires, it_virt_expires;
 cputime_t it_prof_incr, it_virt_incr;


 pid_t pgrp;
 pid_t tty_old_pgrp;
 pid_t session;

 int leader;

 struct tty_struct *tty;







 cputime_t utime, stime, cutime, cstime;
 unsigned long nvcsw, nivcsw, cnvcsw, cnivcsw;
 unsigned long min_flt, maj_flt, cmin_flt, cmaj_flt;







 unsigned long long sched_time;
# 453 "linux-2.6.18/include/linux/sched.h"
 struct rlimit rlim[15];

 struct list_head cpu_timers[3];
# 470 "linux-2.6.18/include/linux/sched.h"
};
# 513 "linux-2.6.18/include/linux/sched.h"
struct user_struct {
 atomic_t __count;
 atomic_t processes;
 atomic_t files;
 atomic_t sigpending;





 unsigned long mq_bytes;
 unsigned long locked_shm;







 struct list_head uidhash_list;
 uid_t uid;
};

extern struct user_struct *find_user(uid_t);

typedef  struct user_struct   _GLOBAL_96_T; extern  _GLOBAL_96_T  global_root_user[NUM_STACKS];    


struct backing_dev_info;
struct reclaim_state;
# 591 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) int sched_info_on(void)
{






 return 0;

}

enum idle_type
{
 SCHED_IDLE,
 NOT_IDLE,
 NEWLY_IDLE,
 MAX_IDLE_TYPES
};
# 711 "linux-2.6.18/include/linux/sched.h"
struct io_context;
void exit_io_context(void);
struct cpuset;



struct group_info {
 int ngroups;
 atomic_t usage;
 gid_t small_block[32];
 int nblocks;
 gid_t *blocks[0];
};
# 740 "linux-2.6.18/include/linux/sched.h"
extern struct group_info *groups_alloc(int gidsetsize);
extern void groups_free(struct group_info *group_info);
extern int set_current_groups(struct group_info *group_info);
extern int groups_search(struct group_info *group_info, gid_t grp);







static inline  __attribute__((always_inline)) void prefetch_stack(struct task_struct *t) { }


struct audit_context;
struct mempolicy;
struct pipe_inode_info;

enum sleep_type {
 SLEEP_NORMAL,
 SLEEP_NONINTERACTIVE,
 SLEEP_INTERACTIVE,
 SLEEP_INTERRUPTED,
};

struct prio_array;

struct task_struct {
 volatile long state;
 struct thread_info *thread_info;
 atomic_t usage;
 unsigned long flags;
 unsigned long ptrace;

 int lock_depth;






 int load_weight;
 int prio, static_prio, normal_prio;
 struct list_head run_list;
 struct prio_array *array;

 unsigned short ioprio;
 unsigned int btrace_seq;

 unsigned long sleep_avg;
 unsigned long long timestamp, last_ran;
 unsigned long long sched_time;
 enum sleep_type sleep_type;

 unsigned long policy;
 cpumask_t cpus_allowed;
 unsigned int time_slice, first_time_slice;





 struct list_head tasks;




 struct list_head ptrace_children;
 struct list_head ptrace_list;

 struct mm_struct *mm, *active_mm;


 struct linux_binfmt *binfmt;
 long exit_state;
 int exit_code, exit_signal;
 int pdeath_signal;

 unsigned long personality;
 unsigned did_exec:1;
 pid_t pid;
 pid_t tgid;





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

 unsigned long rt_priority;
 cputime_t utime, stime;
 unsigned long nvcsw, nivcsw;
 struct timespec start_time;

 unsigned long min_flt, maj_flt;

   cputime_t it_prof_expires, it_virt_expires;
 unsigned long long it_sched_expires;
 struct list_head cpu_timers[3];


 uid_t uid,euid,suid,fsuid;
 gid_t gid,egid,sgid,fsgid;
 struct group_info *group_info;
 kernel_cap_t cap_effective, cap_inheritable, cap_permitted;
 unsigned keep_capabilities:1;
 struct user_struct *user;





 int oomkilladj;
 char comm[16];




 int link_count, total_link_count;

 struct sysv_sem sysvsem;

 struct thread_struct thread;

 struct fs_struct *fs;

 struct files_struct *files;

 struct namespace *namespace;

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

 void *security;
 struct audit_context *audit_context;
 seccomp_t seccomp;


    u32 parent_exec_id;
    u32 self_exec_id;

 spinlock_t alloc_lock;


 spinlock_t pi_lock;
# 947 "linux-2.6.18/include/linux/sched.h"
 void *journal_info;


 struct reclaim_state *reclaim_state;

 struct backing_dev_info *backing_dev_info;

 struct io_context *io_context;

 unsigned long ptrace_message;
 siginfo_t *last_siginfo;






 wait_queue_t *io_wait;

 u64 rchar, wchar, syscr, syscw;
# 977 "linux-2.6.18/include/linux/sched.h"
 struct cpuset *cpuset;
 nodemask_t mems_allowed;
 int cpuset_mems_generation;
 int cpuset_mem_spread_rotor;

 struct robust_list_head *robust_list;



 struct list_head pi_state_list;
 struct futex_pi_state *pi_state_cache;

 atomic_t fs_excl;
 struct rcu_head rcu;




 struct pipe_inode_info *splice_pipe;



};

static inline  __attribute__((always_inline)) pid_t process_group(struct task_struct *tsk)
{
 return tsk->signal->pgrp;
}
# 1014 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) int pid_alive(struct task_struct *p)
{
 return p->pids[PIDTYPE_PID].pid != ((void *)0);
}

extern void free_task(struct task_struct *tsk);


extern void __put_task_struct(struct task_struct *t);

static inline  __attribute__((always_inline)) void put_task_struct(struct task_struct *t)
{
 if (atomic_dec_and_test(&t->usage))
  __put_task_struct(t);
}
# 1088 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) int set_cpus_allowed(struct task_struct *p, cpumask_t new_mask)
{
 if (!(__builtin_constant_p((0)) ? constant_test_bit(((0)),((new_mask).bits)) : variable_test_bit(((0)),((new_mask).bits))))
  return -22;
 return 0;
}


extern unsigned long long sched_clock(void);
extern unsigned long long
current_sched_time(const struct task_struct *current_task);
# 1110 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) void idle_task_exit(void) {}


extern void sched_idle_next(void);






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




typedef  struct exec_domain   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_default_exec_domain[NUM_STACKS];    

union thread_union {
 struct thread_info thread_info;
 unsigned long stack[((1UL << 12) << 1)/sizeof(long)];
};


static inline  __attribute__((always_inline)) int kstack_end(void *addr)
{



 return !(((unsigned long)addr+sizeof(void*)-1) & (((1UL << 12) << 1)-sizeof(void*)));
}


typedef  union thread_union   _GLOBAL_98_T; extern  _GLOBAL_98_T  global_init_thread_union[NUM_STACKS];    
typedef  struct task_struct   _GLOBAL_99_T; extern  _GLOBAL_99_T  global_init_task[NUM_STACKS];    

typedef  struct mm_struct   _GLOBAL_100_T; extern  _GLOBAL_100_T  global_init_mm[NUM_STACKS];    


extern struct task_struct *find_task_by_pid_type(int type, int pid);
extern void set_special_pids(pid_t session, pid_t pgrp);
extern void __set_special_pids(pid_t session, pid_t pgrp);


extern struct user_struct * alloc_uid(uid_t);
static inline  __attribute__((always_inline)) struct user_struct *get_uid(struct user_struct *u)
{
 atomic_inc(&u->__count);
 return u;
}
extern void free_uid(struct user_struct *);
extern void switch_uid(struct user_struct *);



extern void do_timer(struct pt_regs *);

extern int wake_up_state(struct task_struct * tsk, unsigned int state);
extern int wake_up_process(struct task_struct * tsk);
extern void wake_up_new_task(struct task_struct * tsk, unsigned long clone_flags)
                                 ;



 static inline  __attribute__((always_inline)) void kick_process(struct task_struct *tsk) { }

extern void sched_fork(struct task_struct * p, int clone_flags);
extern void sched_exit(struct task_struct * p);

extern int in_group_p(gid_t);
extern int in_egroup_p(gid_t);

extern void proc_caches_init(void);
extern void flush_signals(struct task_struct *);
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
extern int send_group_sig_info(int, struct siginfo *, struct task_struct *);
extern int force_sigsegv(int, struct task_struct *);
extern int force_sig_info(int, struct siginfo *, struct task_struct *);
extern int __kill_pg_info(int sig, struct siginfo *info, pid_t pgrp);
extern int kill_pg_info(int, struct siginfo *, pid_t);
extern int kill_proc_info(int, struct siginfo *, pid_t);
extern int kill_proc_info_as_uid(int, struct siginfo *, pid_t, uid_t, uid_t, u32);
extern void do_notify_parent(struct task_struct *, int);
extern void force_sig(int, struct task_struct *);
extern void force_sig_specific(int, struct task_struct *);
extern int send_sig(int, struct task_struct *, int);
extern void zap_other_threads(struct task_struct *p);
extern int kill_pg(pid_t, int, int);
extern int kill_proc(pid_t, int, int);
extern struct sigqueue *sigqueue_alloc(void);
extern void sigqueue_free(struct sigqueue *);
extern int send_sigqueue(int, struct sigqueue *, struct task_struct *);
extern int send_group_sigqueue(int, struct sigqueue *, struct task_struct *);
extern int do_sigaction(int, struct k_sigaction *, struct k_sigaction *);
extern int do_sigaltstack(const stack_t *, stack_t *, unsigned long);






static inline  __attribute__((always_inline)) int is_si_special(const struct siginfo *info)
{
 return info <= ((struct siginfo *) 2);
}



static inline  __attribute__((always_inline)) int on_sig_stack(unsigned long sp)
{
 return (sp - get_nsc_task()->sas_ss_sp < get_nsc_task()->sas_ss_size);
}

static inline  __attribute__((always_inline)) int sas_ss_flags(unsigned long sp)
{
 return (get_nsc_task()->sas_ss_size == 0 ? 2
  : on_sig_stack(sp) ? 1 : 0);
}




extern struct mm_struct * mm_alloc(void);


extern void __mmdrop(struct mm_struct *);
static inline  __attribute__((always_inline)) void mmdrop(struct mm_struct * mm)
{
 if (atomic_dec_and_test(&mm->mm_count))
  __mmdrop(mm);
}


extern void mmput(struct mm_struct *);

extern struct mm_struct *get_task_mm(struct task_struct *task);

extern void mm_release(struct task_struct *, struct mm_struct *);

extern int copy_thread(int, unsigned long, unsigned long, unsigned long, struct task_struct *, struct pt_regs *);
extern void flush_thread(void);
extern void exit_thread(void);

extern void exit_files(struct task_struct *);
extern void __cleanup_signal(struct signal_struct *);
extern void __cleanup_sighand(struct sighand_struct *);
extern void exit_itimers(struct signal_struct *);

extern void do_group_exit(int);

extern void daemonize(const char *, ...);
extern int allow_signal(int);
extern int disallow_signal(int);
typedef  struct task_struct   _GLOBAL_101_T; extern  _GLOBAL_101_T  * global_child_reaper[NUM_STACKS];    

extern int do_execve(char *, char * *, char * *, struct pt_regs *);
extern long do_fork(unsigned long, unsigned long, struct pt_regs *, unsigned long, int *, int *);
struct task_struct *fork_idle(int);

extern void set_task_comm(struct task_struct *tsk, char *from);
extern void get_task_comm(char *to, struct task_struct *tsk);
# 1335 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) struct task_struct *next_thread(const struct task_struct *p)
{
 return ({ const typeof( ((struct task_struct *)0)->thread_group ) *__mptr = (({ typeof(p->thread_group.next) _________p1 = p->thread_group.next; do {} while(0); (_________p1); })); (struct task_struct *)( (char *)__mptr - __builtin_offsetof(struct task_struct,thread_group) );})
                                      ;
}

static inline  __attribute__((always_inline)) int thread_group_empty(struct task_struct *p)
{
 return list_empty(&p->thread_group);
}
# 1358 "linux-2.6.18/include/linux/sched.h"
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
 *(p)->thread_info = *(org)->thread_info;
 (p)->thread_info->task = p;
}

static inline  __attribute__((always_inline)) unsigned long *end_of_stack(struct task_struct *p)
{
 return (unsigned long *)(p->thread_info + 1);
}






static inline  __attribute__((always_inline)) void set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 set_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) void clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 clear_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) int test_and_set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_set_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) int test_and_clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_clear_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) int test_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_ti_thread_flag((tsk)->thread_info, flag);
}

static inline  __attribute__((always_inline)) void set_tsk_need_resched(struct task_struct *tsk)
{
 set_tsk_thread_flag(tsk,3);
}

static inline  __attribute__((always_inline)) void clear_tsk_need_resched(struct task_struct *tsk)
{
 clear_tsk_thread_flag(tsk,3);
}

static inline  __attribute__((always_inline)) int signal_pending(struct task_struct *p)
{
 return __builtin_expect(!!(test_tsk_thread_flag(p,2)), 0);
}

static inline  __attribute__((always_inline)) int need_resched(void)
{
 return __builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 3)), 0);
}
# 1450 "linux-2.6.18/include/linux/sched.h"
extern int cond_resched(void);
extern int cond_resched_lock(spinlock_t * lock);
extern int cond_resched_softirq(void);
# 1468 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) int lock_need_resched(spinlock_t *lock)
{
 if (0 || need_resched())
  return 1;
 return 0;
}





extern void recalc_sigpending_tsk(struct task_struct *t);
extern void recalc_sigpending(void);

extern void signal_wake_up(struct task_struct *t, int resume_stopped);
# 1501 "linux-2.6.18/include/linux/sched.h"
static inline  __attribute__((always_inline)) unsigned int task_cpu(const struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) void set_task_cpu(struct task_struct *p, unsigned int cpu)
{
}




extern void arch_pick_mmap_layout(struct mm_struct *mm);
# 1523 "linux-2.6.18/include/linux/sched.h"
extern long sched_setaffinity(pid_t pid, cpumask_t new_mask);
extern long sched_getaffinity(pid_t pid, cpumask_t *mask);

# 1 "linux-2.6.18/include/linux/sysdev.h" 1
# 24 "linux-2.6.18/include/linux/sysdev.h"
# 1 "linux-2.6.18/include/linux/kobject.h" 1
# 22 "linux-2.6.18/include/linux/kobject.h"
# 1 "linux-2.6.18/include/linux/sysfs.h" 1
# 15 "linux-2.6.18/include/linux/sysfs.h"
struct kobject;
struct module;

struct attribute {
 const char * name;
 struct module * owner;
 mode_t mode;
};

struct attribute_group {
 const char * name;
 struct attribute ** attrs;
};
# 51 "linux-2.6.18/include/linux/sysfs.h"
struct vm_area_struct;

struct bin_attribute {
 struct attribute attr;
 size_t size;
 void *private;
 ssize_t (*read)(struct kobject *, char *, loff_t, size_t);
 ssize_t (*write)(struct kobject *, char *, loff_t, size_t);
 int (*mmap)(struct kobject *, struct bin_attribute *attr,
      struct vm_area_struct *vma);
};

struct sysfs_ops {
 ssize_t (*show)(struct kobject *, struct attribute *,char *);
 ssize_t (*store)(struct kobject *,struct attribute *,const char *, size_t);
};

struct sysfs_dirent {
 atomic_t s_count;
 struct list_head s_sibling;
 struct list_head s_children;
 void * s_element;
 int s_type;
 umode_t s_mode;
 struct dentry * s_dentry;
 struct iattr * s_iattr;
 atomic_t s_event;
};
# 125 "linux-2.6.18/include/linux/sysfs.h"
static inline  __attribute__((always_inline)) int sysfs_create_dir(struct kobject * k)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_dir(struct kobject * k)
{
 ;
}

static inline  __attribute__((always_inline)) int sysfs_rename_dir(struct kobject * k, const char *new_name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_create_file(struct kobject * k, const struct attribute * a)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_update_file(struct kobject * k, const struct attribute * a)
{
 return 0;
}
static inline  __attribute__((always_inline)) int sysfs_chmod_file(struct kobject *kobj, struct attribute *attr, mode_t mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_file(struct kobject * k, const struct attribute * a)
{
 ;
}

static inline  __attribute__((always_inline)) int sysfs_create_link(struct kobject * k, struct kobject * t, const char * n)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_link(struct kobject * k, const char * name)
{
 ;
}


static inline  __attribute__((always_inline)) int sysfs_create_bin_file(struct kobject * k, struct bin_attribute * a)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_remove_bin_file(struct kobject * k, struct bin_attribute * a)
{
 return 0;
}

static inline  __attribute__((always_inline)) int sysfs_create_group(struct kobject * k, const struct attribute_group *g)
{
 return 0;
}

static inline  __attribute__((always_inline)) void sysfs_remove_group(struct kobject * k, const struct attribute_group * g)
{
 ;
}

static inline  __attribute__((always_inline)) void sysfs_notify(struct kobject * k, char *dir, char *attr)
{
}
# 23 "linux-2.6.18/include/linux/kobject.h" 2


# 1 "linux-2.6.18/include/linux/kref.h" 1
# 23 "linux-2.6.18/include/linux/kref.h"
struct kref {
 atomic_t refcount;
};

void kref_init(struct kref *kref);
void kref_get(struct kref *kref);
int kref_put(struct kref *kref, void (*release) (struct kref *kref));
# 26 "linux-2.6.18/include/linux/kobject.h" 2
# 34 "linux-2.6.18/include/linux/kobject.h"
typedef  char  _GLOBAL_102_T; extern  _GLOBAL_102_T  _GLOBAL_0_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_1_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_2_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_3_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_4_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_5_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_6_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_7_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_8_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_9_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_10_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_11_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_12_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_13_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_14_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_15_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_16_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_17_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_18_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_19_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_20_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_21_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_22_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_23_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_24_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_25_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_26_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_27_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_28_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_29_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_30_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_31_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_32_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_33_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_34_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_35_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_36_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_37_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_38_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_39_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_40_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_41_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_42_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_43_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_44_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_45_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_46_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_47_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_48_uevent_helper_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_49_uevent_helper_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uevent_helper_I) *_GLOBAL_uevent_helper_12_A[NUM_STACKS];  


typedef  u64  _GLOBAL_103_T; extern  _GLOBAL_103_T  global_uevent_seqnum[NUM_STACKS];   


typedef int kobject_action_t;
enum kobject_action {
 KOBJ_ADD = ( kobject_action_t) 0x01,
 KOBJ_REMOVE = ( kobject_action_t) 0x02,
 KOBJ_CHANGE = ( kobject_action_t) 0x03,
 KOBJ_MOUNT = ( kobject_action_t) 0x04,
 KOBJ_UMOUNT = ( kobject_action_t) 0x05,
 KOBJ_OFFLINE = ( kobject_action_t) 0x06,
 KOBJ_ONLINE = ( kobject_action_t) 0x07,
};

struct kobject {
 const char * k_name;
 char name[20];
 struct kref kref;
 struct list_head entry;
 struct kobject * parent;
 struct kset * kset;
 struct kobj_type * ktype;
 struct dentry * dentry;
 wait_queue_head_t poll;
};

extern int kobject_set_name(struct kobject *, const char *, ...)
 __attribute__((format(printf,2,3))) ;

static inline  __attribute__((always_inline)) const char * kobject_name(const struct kobject * kobj)
{
 return kobj->k_name;
}

extern void kobject_init(struct kobject *);
extern void kobject_cleanup(struct kobject *);

extern int kobject_add(struct kobject *);
extern void kobject_del(struct kobject *);

extern int kobject_rename(struct kobject *, const char *new_name);

extern int kobject_register(struct kobject *);
extern void kobject_unregister(struct kobject *);

extern struct kobject * kobject_get(struct kobject *);
extern void kobject_put(struct kobject *);

extern struct kobject *kobject_add_dir(struct kobject *, const char *);

extern char * kobject_get_path(struct kobject *, gfp_t);

struct kobj_type {
 void (*release)(struct kobject *);
 struct sysfs_ops * sysfs_ops;
 struct attribute ** default_attrs;
};
# 113 "linux-2.6.18/include/linux/kobject.h"
struct kset_uevent_ops {
 int (*filter)(struct kset *kset, struct kobject *kobj);
 const char *(*name)(struct kset *kset, struct kobject *kobj);
 int (*uevent)(struct kset *kset, struct kobject *kobj, char **envp,
   int num_envp, char *buffer, int buffer_size);
};

struct kset {
 struct subsystem * subsys;
 struct kobj_type * ktype;
 struct list_head list;
 spinlock_t list_lock;
 struct kobject kobj;
 struct kset_uevent_ops * uevent_ops;
};


extern void kset_init(struct kset * k);
extern int kset_add(struct kset * k);
extern int kset_register(struct kset * k);
extern void kset_unregister(struct kset * k);

static inline  __attribute__((always_inline)) struct kset * to_kset(struct kobject * kobj)
{
 return kobj ? ({ const typeof( ((struct kset *)0)->kobj ) *__mptr = (kobj); (struct kset *)( (char *)__mptr - __builtin_offsetof(struct kset,kobj) );}) : ((void *)0);
}

static inline  __attribute__((always_inline)) struct kset * kset_get(struct kset * k)
{
 return k ? to_kset(kobject_get(&k->kobj)) : ((void *)0);
}

static inline  __attribute__((always_inline)) void kset_put(struct kset * k)
{
 kobject_put(&k->kobj);
}

static inline  __attribute__((always_inline)) struct kobj_type * get_ktype(struct kobject * k)
{
 if (k->kset && k->kset->ktype)
  return k->kset->ktype;
 else
  return k->ktype;
}

extern struct kobject * kset_find_obj(struct kset *, const char *);
# 169 "linux-2.6.18/include/linux/kobject.h"
struct subsystem {
 struct kset kset;
 struct rw_semaphore rwsem;
};
# 192 "linux-2.6.18/include/linux/kobject.h"
typedef  struct subsystem   _GLOBAL_104_T; extern  _GLOBAL_104_T  global_kernel_subsys[NUM_STACKS];    

typedef  struct subsystem   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_hypervisor_subsys[NUM_STACKS];    
# 241 "linux-2.6.18/include/linux/kobject.h"
extern void subsystem_init(struct subsystem *);
extern int subsystem_register(struct subsystem *);
extern void subsystem_unregister(struct subsystem *);

static inline  __attribute__((always_inline)) struct subsystem * subsys_get(struct subsystem * s)
{
 return s ? ({ const typeof( ((struct subsystem *)0)->kset ) *__mptr = (kset_get(&s->kset)); (struct subsystem *)( (char *)__mptr - __builtin_offsetof(struct subsystem,kset) );}) : ((void *)0);
}

static inline  __attribute__((always_inline)) void subsys_put(struct subsystem * s)
{
 kset_put(&s->kset);
}

struct subsys_attribute {
 struct attribute attr;
 ssize_t (*show)(struct subsystem *, char *);
 ssize_t (*store)(struct subsystem *, const char *, size_t);
};

extern int subsys_create_file(struct subsystem * , struct subsys_attribute *);


void kobject_uevent(struct kobject *kobj, enum kobject_action action);

int add_uevent_var(char **envp, int num_envp, int *cur_index,
   char *buffer, int buffer_size, int *cur_len,
   const char *format, ...)
 __attribute__((format (printf, 7, 8))) ;
# 25 "linux-2.6.18/include/linux/sysdev.h" 2
# 1 "linux-2.6.18/include/linux/pm.h" 1
# 34 "linux-2.6.18/include/linux/pm.h"
typedef int pm_request_t;
# 43 "linux-2.6.18/include/linux/pm.h"
typedef int pm_dev_t;
# 56 "linux-2.6.18/include/linux/pm.h"
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
# 75 "linux-2.6.18/include/linux/pm.h"
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







typedef  void   ( *_GLOBAL_107_T  )  ( void  ) ; extern  _GLOBAL_107_T global_pm_idle[NUM_STACKS];   
typedef  void   ( *_GLOBAL_109_T  )  ( void  ) ; extern  _GLOBAL_109_T global_pm_power_off[NUM_STACKS];   

typedef int suspend_state_t;







typedef int suspend_disk_method_t;







struct pm_ops {
 suspend_disk_method_t pm_disk_mode;
 int (*valid)(suspend_state_t state);
 int (*prepare)(suspend_state_t state);
 int (*enter)(suspend_state_t state);
 int (*finish)(suspend_state_t state);
};

extern void pm_set_ops(struct pm_ops *);
typedef  struct pm_ops   _GLOBAL_110_T; extern  _GLOBAL_110_T  * global_pm_ops[NUM_STACKS];    
extern int pm_suspend(suspend_state_t state);






struct device;

typedef struct pm_message {
 int event;
} pm_message_t;
# 171 "linux-2.6.18/include/linux/pm.h"
struct dev_pm_info {
 pm_message_t power_state;
 unsigned can_wakeup:1;

 unsigned should_wakeup:1;
 pm_message_t prev_state;
 void * saved_state;
 struct device * pm_parent;
 struct list_head entry;

};

extern void device_pm_set_parent(struct device * dev, struct device * parent);

extern int device_power_down(pm_message_t state);
extern void device_power_up(void);
extern void device_resume(void);


typedef  suspend_disk_method_t  _GLOBAL_111_T; extern  _GLOBAL_111_T  global_pm_disk_mode[NUM_STACKS];   

extern int device_suspend(pm_message_t state);






extern int dpm_runtime_suspend(struct device *, pm_message_t);
extern void dpm_runtime_resume(struct device *);
extern void __suspend_report_result(const char *function, void *fn, int ret);
# 26 "linux-2.6.18/include/linux/sysdev.h" 2


struct sys_device;

struct sysdev_class {
 struct list_head drivers;


 int (*shutdown)(struct sys_device *);
 int (*suspend)(struct sys_device *, pm_message_t state);
 int (*resume)(struct sys_device *);
 struct kset kset;
};

struct sysdev_class_attribute {
 struct attribute attr;
 ssize_t (*show)(struct sysdev_class *, char *);
 ssize_t (*store)(struct sysdev_class *, const char *, size_t);
};
# 54 "linux-2.6.18/include/linux/sysdev.h"
extern int sysdev_class_register(struct sysdev_class *);
extern void sysdev_class_unregister(struct sysdev_class *);

extern int sysdev_class_create_file(struct sysdev_class *,
 struct sysdev_class_attribute *);
extern void sysdev_class_remove_file(struct sysdev_class *,
 struct sysdev_class_attribute *);




struct sysdev_driver {
 struct list_head entry;
 int (*add)(struct sys_device *);
 int (*remove)(struct sys_device *);
 int (*shutdown)(struct sys_device *);
 int (*suspend)(struct sys_device *, pm_message_t state);
 int (*resume)(struct sys_device *);
};


extern int sysdev_driver_register(struct sysdev_class *, struct sysdev_driver *);
extern void sysdev_driver_unregister(struct sysdev_class *, struct sysdev_driver *);







struct sys_device {
 u32 id;
 struct sysdev_class * cls;
 struct kobject kobj;
};

extern int sysdev_register(struct sys_device *);
extern void sysdev_unregister(struct sys_device *);


struct sysdev_attribute {
 struct attribute attr;
 ssize_t (*show)(struct sys_device *, char *);
 ssize_t (*store)(struct sys_device *, const char *, size_t);
};
# 108 "linux-2.6.18/include/linux/sysdev.h"
extern int sysdev_create_file(struct sys_device *, struct sysdev_attribute *);
extern void sysdev_remove_file(struct sys_device *, struct sysdev_attribute *);
# 1527 "linux-2.6.18/include/linux/sched.h" 2
typedef  int  _GLOBAL_112_T; extern  _GLOBAL_112_T  global_sched_mc_power_savings[NUM_STACKS]; extern  _GLOBAL_112_T  global_sched_smt_power_savings[NUM_STACKS];    
typedef  struct sysdev_attribute   _GLOBAL_113_T; extern  _GLOBAL_113_T  global_attr_sched_mc_power_savings[NUM_STACKS]; extern  _GLOBAL_113_T  global_attr_sched_smt_power_savings[NUM_STACKS];     
extern int sched_create_sysfs_power_savings_entries(struct sysdev_class *cls);

extern void normalize_rt_tasks(void);





static inline  __attribute__((always_inline)) int frozen(struct task_struct *p)
{
 return p->flags & 0x00010000;
}




static inline  __attribute__((always_inline)) int freezing(struct task_struct *p)
{
 return p->flags & 0x00004000;
}





static inline  __attribute__((always_inline)) void freeze(struct task_struct *p)
{
 p->flags |= 0x00004000;
}




static inline  __attribute__((always_inline)) void do_not_freeze(struct task_struct *p)
{
 p->flags &= ~0x00004000;
}




static inline  __attribute__((always_inline)) int thaw_process(struct task_struct *p)
{
 if (frozen(p)) {
  p->flags &= ~0x00010000;
  wake_up_process(p);
  return 1;
 }
 return 0;
}




static inline  __attribute__((always_inline)) void frozen_process(struct task_struct *p)
{
 p->flags = (p->flags & ~0x00004000) | 0x00010000;
}

extern void refrigerator(void);
extern int freeze_processes(void);
extern void thaw_processes(void);

static inline  __attribute__((always_inline)) int try_to_freeze(void)
{
 if (freezing(get_nsc_task())) {
  refrigerator();
  return 1;
 } else
  return 0;
}
# 10 "linux-2.6.18/include/linux/module.h" 2


# 1 "linux-2.6.18/include/linux/stat.h" 1





# 1 "linux-2.6.18/include/asm/stat.h" 1





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
# 7 "linux-2.6.18/include/linux/stat.h" 2
# 59 "linux-2.6.18/include/linux/stat.h"
struct kstat {
 unsigned long ino;
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
# 13 "linux-2.6.18/include/linux/module.h" 2


# 1 "linux-2.6.18/include/linux/kmod.h" 1
# 33 "linux-2.6.18/include/linux/kmod.h"
static inline  __attribute__((always_inline)) int request_module(const char * name, ...) { return -38; }




struct key;
extern int call_usermodehelper_keys(char *path, char *argv[], char *envp[],
        struct key *session_keyring, int wait);

static inline  __attribute__((always_inline)) int
call_usermodehelper(char *path, char **argv, char **envp, int wait)
{
 return call_usermodehelper_keys(path, argv, envp, ((void *)0), wait);
}

extern void usermodehelper_init(void);
# 16 "linux-2.6.18/include/linux/module.h" 2
# 1 "linux-2.6.18/include/linux/elf.h" 1





# 1 "linux-2.6.18/include/linux/elf-em.h" 1
# 7 "linux-2.6.18/include/linux/elf.h" 2
# 1 "linux-2.6.18/include/asm/elf.h" 1
# 9 "linux-2.6.18/include/asm/elf.h"
# 1 "linux-2.6.18/include/asm/user.h" 1
# 50 "linux-2.6.18/include/asm/user.h"
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
 unsigned long r15,r14,r13,r12,rbp,rbx,r11,r10;
 unsigned long r9,r8,rax,rcx,rdx,rsi,rdi,orig_rax;
 unsigned long rip,cs,eflags;
 unsigned long rsp,ss;
   unsigned long fs_base, gs_base;
 unsigned long ds,es,fs,gs;
};




struct user{


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
  struct user_pt_regs * u_ar0;

  struct user_i387_struct* u_fpstate;
  unsigned long magic;
  char u_comm[32];
  unsigned long u_debugreg[8];
  unsigned long error_code;
  unsigned long fault_address;
};
# 10 "linux-2.6.18/include/asm/elf.h" 2
# 32 "linux-2.6.18/include/asm/elf.h"
typedef unsigned long elf_greg_t;


typedef elf_greg_t elf_gregset_t[(sizeof (struct user_regs_struct) / sizeof(elf_greg_t))];

typedef struct user_i387_struct elf_fpregset_t;
# 48 "linux-2.6.18/include/asm/elf.h"
# 1 "linux-2.6.18/include/asm/compat.h" 1
# 12 "linux-2.6.18/include/asm/compat.h"
typedef u32 compat_size_t;
typedef s32 compat_ssize_t;
typedef s32 compat_time_t;
typedef s32 compat_clock_t;
typedef s32 compat_pid_t;
typedef u16 __compat_uid_t;
typedef u16 __compat_gid_t;
typedef u32 __compat_uid32_t;
typedef u32 __compat_gid32_t;
typedef u16 compat_mode_t;
typedef u32 compat_ino_t;
typedef u16 compat_dev_t;
typedef s32 compat_off_t;
typedef s64 compat_loff_t;
typedef u16 compat_nlink_t;
typedef u16 compat_ipc_pid_t;
typedef s32 compat_daddr_t;
typedef u32 compat_caddr_t;
typedef __kernel_fsid_t compat_fsid_t;
typedef s32 compat_timer_t;
typedef s32 compat_key_t;

typedef s32 compat_int_t;
typedef s32 compat_long_t;
typedef u32 compat_uint_t;
typedef u32 compat_ulong_t;

struct compat_timespec {
 compat_time_t tv_sec;
 s32 tv_nsec;
};

struct compat_timeval {
 compat_time_t tv_sec;
 s32 tv_usec;
};

struct compat_stat {
 compat_dev_t st_dev;
 u16 __pad1;
 compat_ino_t st_ino;
 compat_mode_t st_mode;
 compat_nlink_t st_nlink;
 __compat_uid_t st_uid;
 __compat_gid_t st_gid;
 compat_dev_t st_rdev;
 u16 __pad2;
 u32 st_size;
 u32 st_blksize;
 u32 st_blocks;
 u32 st_atime;
 u32 st_atime_nsec;
 u32 st_mtime;
 u32 st_mtime_nsec;
 u32 st_ctime;
 u32 st_ctime_nsec;
 u32 __unused4;
 u32 __unused5;
};

struct compat_flock {
 short l_type;
 short l_whence;
 compat_off_t l_start;
 compat_off_t l_len;
 compat_pid_t l_pid;
};
# 88 "linux-2.6.18/include/asm/compat.h"
struct compat_flock64 {
 short l_type;
 short l_whence;
 compat_loff_t l_start;
 compat_loff_t l_len;
 compat_pid_t l_pid;
} __attribute__((packed)) ;

struct compat_statfs {
 int f_type;
 int f_bsize;
 int f_blocks;
 int f_bfree;
 int f_bavail;
 int f_files;
 int f_ffree;
 compat_fsid_t f_fsid;
 int f_namelen;
 int f_frsize;
 int f_spare[5];
};




typedef u32 compat_old_sigset_t;




typedef u32 compat_sigset_word;




struct compat_ipc64_perm {
 compat_key_t key;
 __compat_uid32_t uid;
 __compat_gid32_t gid;
 __compat_uid32_t cuid;
 __compat_gid32_t cgid;
 unsigned short mode;
 unsigned short __pad1;
 unsigned short seq;
 unsigned short __pad2;
 compat_ulong_t unused1;
 compat_ulong_t unused2;
};

struct compat_semid64_ds {
 struct compat_ipc64_perm sem_perm;
 compat_time_t sem_otime;
 compat_ulong_t __unused1;
 compat_time_t sem_ctime;
 compat_ulong_t __unused2;
 compat_ulong_t sem_nsems;
 compat_ulong_t __unused3;
 compat_ulong_t __unused4;
};

struct compat_msqid64_ds {
 struct compat_ipc64_perm msg_perm;
 compat_time_t msg_stime;
 compat_ulong_t __unused1;
 compat_time_t msg_rtime;
 compat_ulong_t __unused2;
 compat_time_t msg_ctime;
 compat_ulong_t __unused3;
 compat_ulong_t msg_cbytes;
 compat_ulong_t msg_qnum;
 compat_ulong_t msg_qbytes;
 compat_pid_t msg_lspid;
 compat_pid_t msg_lrpid;
 compat_ulong_t __unused4;
 compat_ulong_t __unused5;
};

struct compat_shmid64_ds {
 struct compat_ipc64_perm shm_perm;
 compat_size_t shm_segsz;
 compat_time_t shm_atime;
 compat_ulong_t __unused1;
 compat_time_t shm_dtime;
 compat_ulong_t __unused2;
 compat_time_t shm_ctime;
 compat_ulong_t __unused3;
 compat_pid_t shm_cpid;
 compat_pid_t shm_lpid;
 compat_ulong_t shm_nattch;
 compat_ulong_t __unused4;
 compat_ulong_t __unused5;
};







typedef u32 compat_uptr_t;

static inline  __attribute__((always_inline)) void *compat_ptr(compat_uptr_t uptr)
{
 return (void *)(unsigned long)uptr;
}

static inline  __attribute__((always_inline)) compat_uptr_t ptr_to_compat(void *uptr)
{
 return (u32)(unsigned long)uptr;
}

static __inline__  __attribute__((always_inline)) void *compat_alloc_user_space(long len)
{
 struct pt_regs *regs = ((struct pt_regs *)(get_nsc_task())->thread.rsp0 - 1);
 return (void *)regs->rsp - len;
}

static inline  __attribute__((always_inline)) int is_compat_task(void)
{
 return current_thread_info()->status & 0x0002;
}
# 49 "linux-2.6.18/include/asm/elf.h" 2
# 147 "linux-2.6.18/include/asm/elf.h"
extern void set_personality_64bit(void);







struct task_struct;

extern int dump_task_regs (struct task_struct *, elf_gregset_t *);
extern int dump_task_fpu (struct task_struct *, elf_fpregset_t *);
# 8 "linux-2.6.18/include/linux/elf.h" 2
# 17 "linux-2.6.18/include/linux/elf.h"
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
# 107 "linux-2.6.18/include/linux/elf.h"
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
# 130 "linux-2.6.18/include/linux/elf.h"
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
# 269 "linux-2.6.18/include/linux/elf.h"
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
# 342 "linux-2.6.18/include/linux/elf.h"
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
# 364 "linux-2.6.18/include/linux/elf.h"
typedef  Elf64_Dyn  _GLOBAL_114_T; extern  _GLOBAL_114_T  _GLOBAL_0__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_1__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_2__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_3__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_4__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_5__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_6__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_7__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_8__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_9__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_10__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_11__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_12__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_13__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_14__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_15__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_16__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_17__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_18__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_19__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_20__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_21__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_22__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_23__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_24__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_25__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_26__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_27__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_28__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_29__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_30__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_31__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_32__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_33__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_34__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_35__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_36__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_37__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_38__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_39__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_40__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_41__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_42__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_43__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_44__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_45__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_46__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_47__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_48__DYNAMIC_I [ ] ; extern  _GLOBAL_114_T  _GLOBAL_49__DYNAMIC_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__DYNAMIC_I) *_GLOBAL__DYNAMIC_13_A[NUM_STACKS];   
# 17 "linux-2.6.18/include/linux/module.h" 2


# 1 "linux-2.6.18/include/linux/moduleparam.h" 1
# 29 "linux-2.6.18/include/linux/moduleparam.h"
struct kernel_param;


typedef int (*param_set_fn)(const char *val, struct kernel_param *kp);

typedef int (*param_get_fn)(char *buffer, struct kernel_param *kp);

struct kernel_param {
 const char *name;
 unsigned int perm;
 param_set_fn set;
 param_get_fn get;
 void *arg;
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
# 95 "linux-2.6.18/include/linux/moduleparam.h"
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
# 159 "linux-2.6.18/include/linux/moduleparam.h"
extern int param_array_set(const char *val, struct kernel_param *kp);
extern int param_array_get(char *buffer, struct kernel_param *kp);

extern int param_set_copystring(const char *val, struct kernel_param *kp);
extern int param_get_string(char *buffer, struct kernel_param *kp);



struct module;

extern int module_param_sysfs_setup(struct module *mod,
        struct kernel_param *kparam,
        unsigned int num_params);

extern void module_param_sysfs_remove(struct module *mod);
# 20 "linux-2.6.18/include/linux/module.h" 2
# 1 "linux-2.6.18/include/asm/local.h" 1





typedef struct
{
 volatile long counter;
} local_t;






static inline  __attribute__((always_inline)) void local_inc(local_t *v)
{
 __asm__ __volatile__(
  "incq %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}

static inline  __attribute__((always_inline)) void local_dec(local_t *v)
{
 __asm__ __volatile__(
  "decq %0"
  :"=m" (v->counter)
  :"m" (v->counter));
}

static inline  __attribute__((always_inline)) void local_add(long i, local_t *v)
{
 __asm__ __volatile__(
  "addq %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}

static inline  __attribute__((always_inline)) void local_sub(long i, local_t *v)
{
 __asm__ __volatile__(
  "subq %1,%0"
  :"=m" (v->counter)
  :"ir" (i), "m" (v->counter));
}
# 21 "linux-2.6.18/include/linux/module.h" 2

# 1 "linux-2.6.18/include/asm/module.h" 1



struct mod_arch_specific {};
# 23 "linux-2.6.18/include/linux/module.h" 2
# 34 "linux-2.6.18/include/linux/module.h"
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

typedef  struct subsystem   _GLOBAL_115_T; extern  _GLOBAL_115_T  global_module_subsys[NUM_STACKS];    
# 160 "linux-2.6.18/include/linux/module.h"
const struct exception_table_entry *search_exception_tables(unsigned long add);

struct notifier_block;
# 480 "linux-2.6.18/include/linux/module.h"
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
      char **modname)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) struct module *module_get_kallsym(unsigned int symnum,
      unsigned long *value,
      char *type, char *name,
      size_t namelen)
{
 return ((void *)0);
}

static inline  __attribute__((always_inline)) unsigned long module_kallsyms_lookup_name(const char *name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int is_exported(const char *name, const struct module *mod)
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

struct device_driver;
struct module;

static inline  __attribute__((always_inline)) void module_add_driver(struct module *module, struct device_driver *driver)
{
}

static inline  __attribute__((always_inline)) void module_remove_driver(struct device_driver *driver)
{
}
# 10 "linux-2.6.18/arch/x86_64/lib/csum-partial.c" 2
# 1 "linux-2.6.18/include/asm/checksum.h" 1
# 11 "linux-2.6.18/include/asm/checksum.h"
# 1 "linux-2.6.18/include/asm/uaccess.h" 1
# 68 "linux-2.6.18/include/asm/uaccess.h"
struct exception_table_entry
{
 unsigned long insn, fixup;
};
# 116 "linux-2.6.18/include/asm/uaccess.h"
extern void __put_user_1(void);
extern void __put_user_2(void);
extern void __put_user_4(void);
extern void __put_user_8(void);
extern void __put_user_bad(void);
# 179 "linux-2.6.18/include/asm/uaccess.h"
struct __large_struct { unsigned long buf[100]; };
# 212 "linux-2.6.18/include/asm/uaccess.h"
extern int __get_user_1(void);
extern int __get_user_2(void);
extern int __get_user_4(void);
extern int __get_user_8(void);
extern int __get_user_bad(void);
# 252 "linux-2.6.18/include/asm/uaccess.h"
extern unsigned long copy_user_generic(void *to, const void *from, unsigned len);

extern unsigned long copy_to_user(void *to, const void *from, unsigned len);
extern unsigned long copy_from_user(void *to, const void *from, unsigned len);
extern unsigned long copy_in_user(void *to, const void *from, unsigned len);

static inline   __attribute__((always_inline)) __attribute__((always_inline)) int __copy_from_user(void *dst, const void *src, unsigned size)
{
       int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(dst,( void *)src,size);
 switch (size) {
 case 1:__asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=q" (*(u8*)dst) : "m"((*(struct __large_struct *)((u8 *)src))), "i"(1), "0"(ret));
  return ret;
 case 2:__asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u16*)dst) : "m"((*(struct __large_struct *)((u16 *)src))), "i"(2), "0"(ret));
  return ret;
 case 4:__asm__ __volatile__( "1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u32*)dst) : "m"((*(struct __large_struct *)((u32 *)src))), "i"(4), "0"(ret));
  return ret;
 case 8:__asm__ __volatile__( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u64*)dst) : "m"((*(struct __large_struct *)((u64 *)src))), "i"(8), "0"(ret));
  return ret;
 case 10:
         __asm__ __volatile__( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u64*)dst) : "m"((*(struct __large_struct *)((u64 *)src))), "i"(16), "0"(ret));
  if (__builtin_expect(!!(ret), 0)) return ret;
  __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u16*)(8+(char*)dst)) : "m"((*(struct __large_struct *)((u16 *)(8+(char *)src)))), "i"(2), "0"(ret));
  return ret;
 case 16:
  __asm__ __volatile__( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u64*)dst) : "m"((*(struct __large_struct *)((u64 *)src))), "i"(16), "0"(ret));
  if (__builtin_expect(!!(ret), 0)) return ret;
  __asm__ __volatile__( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (*(u64*)(8+(char*)dst)) : "m"((*(struct __large_struct *)((u64 *)(8+(char *)src)))), "i"(8), "0"(ret));
  return ret;
 default:
  return copy_user_generic(dst,( void *)src,size);
 }
}

static inline   __attribute__((always_inline)) __attribute__((always_inline)) int __copy_to_user(void *dst, const void *src, unsigned size)
{
       int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst,src,size);
 switch (size) {
 case 1:__asm__ __volatile__( "1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "iq" (*(u8*)src), "m"((*(struct __large_struct *)((u8 *)dst))), "i"(1), "0"(ret));
  return ret;
 case 2:__asm__ __volatile__( "1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u16*)src), "m"((*(struct __large_struct *)((u16 *)dst))), "i"(2), "0"(ret));
  return ret;
 case 4:__asm__ __volatile__( "1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u32*)src), "m"((*(struct __large_struct *)((u32 *)dst))), "i"(4), "0"(ret));
  return ret;
 case 8:__asm__ __volatile__( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u64*)src), "m"((*(struct __large_struct *)((u64 *)dst))), "i"(8), "0"(ret));
  return ret;
 case 10:
  __asm__ __volatile__( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u64*)src), "m"((*(struct __large_struct *)((u64 *)dst))), "i"(10), "0"(ret));
  if (__builtin_expect(!!(ret), 0)) return ret;
  asm("":::"memory");
  __asm__ __volatile__( "1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (4[(u16*)src]), "m"((*(struct __large_struct *)(4+(u16 *)dst))), "i"(2), "0"(ret));
  return ret;
 case 16:
  __asm__ __volatile__( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (*(u64*)src), "m"((*(struct __large_struct *)((u64 *)dst))), "i"(16), "0"(ret));
  if (__builtin_expect(!!(ret), 0)) return ret;
  asm("":::"memory");
  __asm__ __volatile__( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (1[(u64*)src]), "m"((*(struct __large_struct *)(1+(u64 *)dst))), "i"(8), "0"(ret));
  return ret;
 default:
  return copy_user_generic(( void *)dst,src,size);
 }
}


static inline   __attribute__((always_inline)) __attribute__((always_inline)) int __copy_in_user(void *dst, const void *src, unsigned size)
{
       int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst,( void *)src,size);
 switch (size) {
 case 1: {
  u8 tmp;
  __asm__ __volatile__( "1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=q" (tmp) : "m"((*(struct __large_struct *)((u8 *)src))), "i"(1), "0"(ret));
  if (__builtin_expect(!!(!ret), 1))
   __asm__ __volatile__( "1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "iq" (tmp), "m"((*(struct __large_struct *)((u8 *)dst))), "i"(1), "0"(ret));
  return ret;
 }
 case 2: {
  u16 tmp;
  __asm__ __volatile__( "1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (tmp) : "m"((*(struct __large_struct *)((u16 *)src))), "i"(2), "0"(ret));
  if (__builtin_expect(!!(!ret), 1))
   __asm__ __volatile__( "1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (tmp), "m"((*(struct __large_struct *)((u16 *)dst))), "i"(2), "0"(ret));
  return ret;
 }

 case 4: {
  u32 tmp;
  __asm__ __volatile__( "1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (tmp) : "m"((*(struct __large_struct *)((u32 *)src))), "i"(4), "0"(ret));
  if (__builtin_expect(!!(!ret), 1))
   __asm__ __volatile__( "1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (tmp), "m"((*(struct __large_struct *)((u32 *)dst))), "i"(4), "0"(ret));
  return ret;
 }
 case 8: {
  u64 tmp;
  __asm__ __volatile__( "1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret), "=r" (tmp) : "m"((*(struct __large_struct *)((u64 *)src))), "i"(8), "0"(ret));
  if (__builtin_expect(!!(!ret), 1))
   __asm__ __volatile__( "1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" ".section __ex_table,\"a\"\n" "	.align 8\n" "	.quad 1b,3b\n" ".previous" : "=r"(ret) : "ir" (tmp), "m"((*(struct __large_struct *)((u64 *)dst))), "i"(8), "0"(ret));
  return ret;
 }
 default:
  return copy_user_generic(( void *)dst,( void *)src,size);
 }
}

long strncpy_from_user(char *dst, const char *src, long count);
long __strncpy_from_user(char *dst, const char *src, long count);
long strnlen_user(const char *str, long n);
long __strnlen_user(const char *str, long n);
long strlen_user(const char *str);
unsigned long clear_user(void *mem, unsigned long len);
unsigned long __clear_user(void *mem, unsigned long len);
# 12 "linux-2.6.18/include/asm/checksum.h" 2
# 22 "linux-2.6.18/include/asm/checksum.h"
static inline  __attribute__((always_inline)) unsigned int csum_fold(unsigned int sum)
{
 __asm__(
  "  addl %1,%0\n"
  "  adcl $0xffff,%0"
  : "=r" (sum)
  : "r" (sum << 16), "0" (sum & 0xffff0000)
 );
 return (~sum) >> 16;
}
# 46 "linux-2.6.18/include/asm/checksum.h"
static inline  __attribute__((always_inline)) unsigned short ip_fast_csum(unsigned char *iph, unsigned int ihl)
{
 unsigned int sum;

 asm( "  movl (%1), %0\n"
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
 return(sum);
}
# 87 "linux-2.6.18/include/asm/checksum.h"
static inline  __attribute__((always_inline)) unsigned long
csum_tcpudp_nofold(unsigned saddr, unsigned daddr, unsigned short len,
     unsigned short proto, unsigned int sum)
{
 asm("  addl %1, %0\n"
     "  adcl %2, %0\n"
     "  adcl %3, %0\n"
     "  adcl $0, %0\n"
  : "=r" (sum)
     : "g" (daddr), "g" (saddr), "g" ((ntohs(len)<<16)+proto*256), "0" (sum));
    return sum;
}
# 112 "linux-2.6.18/include/asm/checksum.h"
static inline  __attribute__((always_inline)) unsigned short int
csum_tcpudp_magic(unsigned long saddr, unsigned long daddr,
    unsigned short len, unsigned short proto, unsigned int sum)
{
 return csum_fold(csum_tcpudp_nofold(saddr,daddr,len,proto,sum));
}
# 129 "linux-2.6.18/include/asm/checksum.h"
extern unsigned int csum_partial(const unsigned char *buff, unsigned len, unsigned int sum);






extern unsigned long csum_partial_copy_generic(const unsigned char *src, const unsigned char *dst,
            unsigned len,
            unsigned sum,
            int *src_err_ptr, int *dst_err_ptr);


extern unsigned int csum_partial_copy_from_user(const unsigned char *src, unsigned char *dst,
           int len, unsigned int isum, int *errp);
extern unsigned int csum_partial_copy_to_user(const unsigned char *src, unsigned char *dst,
          int len, unsigned int isum, int *errp);
extern unsigned int csum_partial_copy_nocheck(const unsigned char *src, unsigned char *dst, int len,
           unsigned int sum);
# 161 "linux-2.6.18/include/asm/checksum.h"
extern unsigned short ip_compute_csum(unsigned char * buff, int len);
# 176 "linux-2.6.18/include/asm/checksum.h"
struct in6_addr;


extern unsigned short
csum_ipv6_magic(struct in6_addr *saddr, struct in6_addr *daddr,
  __u32 len, unsigned short proto, unsigned int sum);

static inline  __attribute__((always_inline)) unsigned add32_with_carry(unsigned a, unsigned b)
{
 asm("addl %2,%0\n\t"
     "adcl $0,%0"
     : "=r" (a)
     : "0" (a), "r" (b));
 return a;
}
# 11 "linux-2.6.18/arch/x86_64/lib/csum-partial.c" 2



static inline  __attribute__((always_inline)) unsigned short from32to16(unsigned a)
{
        unsigned short b = a >> 16;
        asm("addw %w2,%w0\n\t"
            "adcw $0,%w0\n"
            : "=r" (b)
            : "0" (b), "r" (a));
        return b;
}
# 36 "linux-2.6.18/arch/x86_64/lib/csum-partial.c"
static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned do_csum(const unsigned char *buff, unsigned len)
{
        unsigned odd, count;
        unsigned long result = 0;

        if (__builtin_expect(!!(len == 0), 0))
                return result;
        odd = 1 & (unsigned long) buff;
        if (__builtin_expect(!!(odd), 0)) {
                result = *buff << 8;
                len--;
                buff++;
        }
        count = len >> 1;
        if (count) {
                if (2 & (unsigned long) buff) {
                        result += *(unsigned short *)buff;
                        count--;
                        len -= 2;
                        buff += 2;
                }
                count >>= 1;
                if (count) {
                        unsigned long zero;
                        unsigned count64;
                        if (4 & (unsigned long) buff) {
                                result += *(unsigned int *) buff;
                                count--;
                                len -= 4;
                                buff += 4;
                        }
                        count >>= 1;


                        zero = 0;
                        count64 = count >> 3;
                        while (count64) {
                                asm("addq 0*8(%[src]),%[res]\n\t"
                                    "adcq 1*8(%[src]),%[res]\n\t"
                                    "adcq 2*8(%[src]),%[res]\n\t"
                                    "adcq 3*8(%[src]),%[res]\n\t"
                                    "adcq 4*8(%[src]),%[res]\n\t"
                                    "adcq 5*8(%[src]),%[res]\n\t"
                                    "adcq 6*8(%[src]),%[res]\n\t"
                                    "adcq 7*8(%[src]),%[res]\n\t"
                                    "adcq %[zero],%[res]"
                                    : [res] "=r" (result)
                                    : [src] "r" (buff), [zero] "r" (zero),
                                    "[res]" (result));
                                buff += 64;
                                count64--;
                        }


                        count %= 8;
                        while (count) {
                                asm("addq %1,%0\n\t"
                                    "adcq %2,%0\n"
                                            : "=r" (result)
                                    : "m" (*(unsigned long *)buff),
                                    "r" (zero), "0" (result));
                                --count;
                                        buff += 8;
                        }
                        result = add32_with_carry(result>>32,
                                                  result&0xffffffff);

                        if (len & 4) {
                                result += *(unsigned int *) buff;
                                buff += 4;
                        }
                }
                if (len & 2) {
                        result += *(unsigned short *) buff;
                        buff += 2;
                }
        }
        if (len & 1)
                result += *buff;
        result = add32_with_carry(result>>32, result & 0xffffffff);
        if (__builtin_expect(!!(odd), 0)) {
                result = from32to16(result);
                result = ((result >> 8) & 0xff) | ((result & 0xff) << 8);
        }
        return result;
}
# 135 "linux-2.6.18/arch/x86_64/lib/csum-partial.c"
unsigned csum_partial(const unsigned char *buff, unsigned len, unsigned sum)
{
        return add32_with_carry(do_csum(buff, len), sum);
}

;





unsigned short ip_compute_csum(unsigned char * buff, int len)
{
        return csum_fold(csum_partial(buff,len,0));
}
;

