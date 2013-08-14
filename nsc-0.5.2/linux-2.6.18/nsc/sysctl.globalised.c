# 1 "linux-2.6.18/nsc/sysctl.c"
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
# 1 "linux-2.6.18/nsc/sysctl.c"
# 21 "linux-2.6.18/nsc/sysctl.c"
# 1 "linux-2.6.18/include/linux/string.h" 1







# 1 "linux-2.6.18/include/linux/compiler.h" 1
# 42 "linux-2.6.18/include/linux/compiler.h"
# 1 "linux-2.6.18/include/linux/compiler-gcc4.h" 1



# 1 "linux-2.6.18/include/linux/compiler-gcc.h" 1
# 5 "linux-2.6.18/include/linux/compiler-gcc4.h" 2
# 43 "linux-2.6.18/include/linux/compiler.h" 2
# 9 "linux-2.6.18/include/linux/string.h" 2
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
# 10 "linux-2.6.18/include/linux/string.h" 2






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
# 22 "linux-2.6.18/nsc/sysctl.c" 2
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
# 16 "linux-2.6.18/include/linux/kernel.h" 2

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
# 18 "linux-2.6.18/include/linux/kernel.h" 2

typedef  const char   _GLOBAL_1_T; extern  _GLOBAL_1_T  _GLOBAL_0_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_1_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_2_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_3_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_4_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_5_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_6_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_7_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_8_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_9_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_10_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_11_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_12_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_13_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_14_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_15_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_16_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_17_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_18_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_19_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_20_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_21_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_22_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_23_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_24_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_25_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_26_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_27_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_28_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_29_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_30_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_31_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_32_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_33_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_34_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_35_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_36_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_37_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_38_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_39_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_40_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_41_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_42_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_43_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_44_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_45_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_46_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_47_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_48_linux_banner_I [ ] ; extern  _GLOBAL_1_T  _GLOBAL_49_linux_banner_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_linux_banner_I) *_GLOBAL_linux_banner_0_A[NUM_STACKS];   
# 47 "linux-2.6.18/include/linux/kernel.h"
typedef  int  _GLOBAL_2_T; extern  _GLOBAL_2_T  _GLOBAL_0_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_1_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_2_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_3_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_4_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_5_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_6_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_7_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_8_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_9_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_10_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_11_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_12_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_13_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_14_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_15_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_16_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_17_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_18_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_19_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_20_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_21_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_22_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_23_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_24_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_25_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_26_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_27_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_28_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_29_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_30_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_31_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_32_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_33_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_34_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_35_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_36_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_37_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_38_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_39_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_40_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_41_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_42_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_43_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_44_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_45_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_46_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_47_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_48_console_printk_I [ ] ; extern  _GLOBAL_2_T  _GLOBAL_49_console_printk_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_console_printk_I) *_GLOBAL_console_printk_1_A[NUM_STACKS] = { &_GLOBAL_0_console_printk_I, &_GLOBAL_1_console_printk_I, &_GLOBAL_2_console_printk_I, &_GLOBAL_3_console_printk_I, &_GLOBAL_4_console_printk_I, &_GLOBAL_5_console_printk_I, &_GLOBAL_6_console_printk_I, &_GLOBAL_7_console_printk_I, &_GLOBAL_8_console_printk_I, &_GLOBAL_9_console_printk_I, &_GLOBAL_10_console_printk_I, &_GLOBAL_11_console_printk_I, &_GLOBAL_12_console_printk_I, &_GLOBAL_13_console_printk_I, &_GLOBAL_14_console_printk_I, &_GLOBAL_15_console_printk_I, &_GLOBAL_16_console_printk_I, &_GLOBAL_17_console_printk_I, &_GLOBAL_18_console_printk_I, &_GLOBAL_19_console_printk_I, &_GLOBAL_20_console_printk_I, &_GLOBAL_21_console_printk_I, &_GLOBAL_22_console_printk_I, &_GLOBAL_23_console_printk_I, &_GLOBAL_24_console_printk_I, &_GLOBAL_25_console_printk_I, &_GLOBAL_26_console_printk_I, &_GLOBAL_27_console_printk_I, &_GLOBAL_28_console_printk_I, &_GLOBAL_29_console_printk_I, &_GLOBAL_30_console_printk_I, &_GLOBAL_31_console_printk_I, &_GLOBAL_32_console_printk_I, &_GLOBAL_33_console_printk_I, &_GLOBAL_34_console_printk_I, &_GLOBAL_35_console_printk_I, &_GLOBAL_36_console_printk_I, &_GLOBAL_37_console_printk_I, &_GLOBAL_38_console_printk_I, &_GLOBAL_39_console_printk_I, &_GLOBAL_40_console_printk_I, &_GLOBAL_41_console_printk_I, &_GLOBAL_42_console_printk_I, &_GLOBAL_43_console_printk_I, &_GLOBAL_44_console_printk_I, &_GLOBAL_45_console_printk_I, &_GLOBAL_46_console_printk_I, &_GLOBAL_47_console_printk_I, &_GLOBAL_48_console_printk_I, &_GLOBAL_49_console_printk_I, };  






struct completion;
struct pt_regs;
struct user;
# 95 "linux-2.6.18/include/linux/kernel.h"
typedef  struct atomic_notifier_head   _GLOBAL_3_T; extern  _GLOBAL_3_T  _GLOBAL_0_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_1_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_2_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_3_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_4_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_5_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_6_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_7_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_8_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_9_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_10_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_11_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_12_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_13_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_14_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_15_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_16_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_17_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_18_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_19_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_20_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_21_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_22_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_23_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_24_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_25_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_26_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_27_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_28_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_29_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_30_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_31_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_32_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_33_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_34_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_35_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_36_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_37_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_38_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_39_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_40_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_41_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_42_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_43_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_44_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_45_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_46_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_47_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_48_panic_notifier_list_I; extern  _GLOBAL_3_T  _GLOBAL_49_panic_notifier_list_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_panic_notifier_list_I) *_GLOBAL_panic_notifier_list_2_A[NUM_STACKS];   
typedef  long   ( *_GLOBAL_5_T  )  ( long  time  ) ; extern  _GLOBAL_5_T global_panic_blink[NUM_STACKS];    
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
typedef  int  _GLOBAL_6_T; extern  _GLOBAL_6_T  global_oops_in_progress[NUM_STACKS];   
typedef  int  _GLOBAL_7_T; extern  _GLOBAL_7_T  global_panic_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_8_T; extern  _GLOBAL_8_T  global_panic_on_oops[NUM_STACKS];   
typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_tainted[NUM_STACKS];   
extern const char *print_tainted(void);
extern void add_taint(unsigned);


typedef  enum system_states { SYSTEM_BOOTING , SYSTEM_RUNNING  , SYSTEM_HALT  , SYSTEM_POWER_OFF  , SYSTEM_RESTART  , SYSTEM_SUSPEND_DISK  , }   _GLOBAL_10_T; extern  _GLOBAL_10_T  global_system_state[NUM_STACKS];    
 
 
 
 
 
 
 
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
# 23 "linux-2.6.18/nsc/sysctl.c" 2

# 1 "linux-2.6.18/include/linux/sysctl.h" 1
# 25 "linux-2.6.18/include/linux/sysctl.h"
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
# 53 "linux-2.6.18/include/linux/sysctl.h"
enum
{
 CTL_KERN=1,
 CTL_VM=2,
 CTL_NET=3,

 CTL_FS=5,
 CTL_DEBUG=6,
 CTL_DEV=7,
 CTL_BUS=8,
 CTL_ABI=9,
 CTL_CPU=10
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

 KERN_CAP_BSET=14,
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
 NET_DCCP_DEFAULT_SEQ_WINDOW = 1,
 NET_DCCP_DEFAULT_RX_CCID = 2,
 NET_DCCP_DEFAULT_TX_CCID = 3,
 NET_DCCP_DEFAULT_ACK_RATIO = 4,
 NET_DCCP_DEFAULT_SEND_ACKVEC = 5,
 NET_DCCP_DEFAULT_SEND_NDP = 6,
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
 NET_X25_ACK_HOLD_BACK_TIMEOUT=5
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


# 1 "linux-2.6.18/include/linux/list.h" 1






# 1 "linux-2.6.18/include/linux/poison.h" 1
# 8 "linux-2.6.18/include/linux/list.h" 2
# 1 "linux-2.6.18/include/linux/prefetch.h" 1
# 14 "linux-2.6.18/include/linux/prefetch.h"
# 1 "linux-2.6.18/include/asm/processor.h" 1
# 10 "linux-2.6.18/include/asm/processor.h"
# 1 "linux-2.6.18/include/asm/segment.h" 1



# 1 "linux-2.6.18/include/asm/cache.h" 1
# 5 "linux-2.6.18/include/asm/segment.h" 2
# 11 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/asm/page.h" 1
# 46 "linux-2.6.18/include/asm/page.h"
typedef  unsigned long   _GLOBAL_11_T; extern  _GLOBAL_11_T  global_end_pfn[NUM_STACKS];    

void clear_page(void *);
void copy_page(void *, void *);
# 59 "linux-2.6.18/include/asm/page.h"
typedef struct { unsigned long pte; } pte_t;
typedef struct { unsigned long pmd; } pmd_t;
typedef struct { unsigned long pud; } pud_t;
typedef struct { unsigned long pgd; } pgd_t;


typedef struct { unsigned long pgprot; } pgprot_t;
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
# 12 "linux-2.6.18/include/asm/processor.h" 2

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

# 1 "linux-2.6.18/include/asm/pda.h" 1






# 1 "linux-2.6.18/include/linux/cache.h" 1
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
# 8 "linux-2.6.18/include/asm/current.h" 2
# 18 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/asm/system.h" 1
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
# 19 "linux-2.6.18/include/asm/processor.h" 2
# 1 "linux-2.6.18/include/asm/mmsegment.h" 1



typedef struct {
 unsigned long seg;
} mm_segment_t;
# 20 "linux-2.6.18/include/asm/processor.h" 2
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
# 906 "linux-2.6.18/include/linux/sysctl.h" 2

extern void sysctl_init(void);

typedef struct ctl_table ctl_table;

typedef int ctl_handler (ctl_table *table, int *name, int nlen,
    void *oldval, size_t *oldlenp,
    void *newval, size_t newlen,
    void **context);

typedef int proc_handler (ctl_table *ctl, int write, struct file * filp,
     void *buffer, size_t *lenp, loff_t *ppos);

extern int proc_dostring(ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec(ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec_bset(ctl_table *, int, struct file *,
         void *, size_t *, loff_t *);
extern int proc_dointvec_minmax(ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec_jiffies(ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int proc_dointvec_userhz_jiffies(ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int proc_dointvec_ms_jiffies(ctl_table *, int, struct file *,
        void *, size_t *, loff_t *);
extern int proc_doulongvec_minmax(ctl_table *, int, struct file *,
      void *, size_t *, loff_t *);
extern int proc_doulongvec_ms_jiffies_minmax(ctl_table *table, int,
          struct file *, void *, size_t *, loff_t *);

extern int do_sysctl (int *name, int nlen,
        void *oldval, size_t *oldlenp,
        void *newval, size_t newlen);

extern int do_sysctl_strategy (ctl_table *table,
          int *name, int nlen,
          void *oldval, size_t *oldlenp,
          void *newval, size_t newlen, void ** context);

extern ctl_handler sysctl_string;
extern ctl_handler sysctl_intvec;
extern ctl_handler sysctl_jiffies;
extern ctl_handler sysctl_ms_jiffies;
# 991 "linux-2.6.18/include/linux/sysctl.h"
struct ctl_table
{
 int ctl_name;
 const char *procname;
 void *data;
 int maxlen;
 mode_t mode;
 ctl_table *child;
 proc_handler *proc_handler;
 ctl_handler *strategy;
 struct proc_dir_entry *de;
 void *extra1;
 void *extra2;
};



struct ctl_table_header
{
 ctl_table *ctl_table;
 struct list_head ctl_entry;
 int used;
 struct completion *unregistering;
};

struct ctl_table_header * register_sysctl_table(ctl_table * table,
      int insert_at_head);
void unregister_sysctl_table(struct ctl_table_header * table);
# 25 "linux-2.6.18/nsc/sysctl.c" 2

# 1 "linux-2.6.18/nsc/../nsc/nsc.h" 1
# 26 "linux-2.6.18/nsc/../nsc/nsc.h"
void nsc_assert(int x, const char *str);
void nsc_init(void);
void *nsc_newif(unsigned int, unsigned int, int mtu);
void *nsc_socreate_tcp(void);
void *nsc_socreate_sctp(void);
void nsc_soconnect(void *, unsigned int, unsigned short);
void nsc_if_send_packet(void *ifp, void *data, unsigned int size);
void nsc_if_receive_packet(void *dev, const void *data, unsigned int datalen);
int nsc_sosend(void *so, void *data, unsigned int datalen);
void *nsc_malloc(int size);
void nsc_debugf(const char *, ...);
void nsc_sodisconnect(void *so);
void nsc_solisten(void *so, unsigned short port);
struct nsc_sockaddr;
int nsc_getsockpeername(void *so, struct nsc_sockaddr *s, int getpeername);
int nsc_accept(void *so, void **a);
int nsc_accept_sctp(void *so, void **a);
int nsc_soreceive(void *so, void *buf, int *buflen);
int nsc_is_connected(void *so);
void nsc_timer_tick(void);
void nsc_timer_interrupt(void);
void nsc_add_default_gw(unsigned int);
int nsc_do_sysctl(const char *sysctl_name, void *oldval, size_t *oldlenp,
        void *newval, size_t newlen);
int nsc_setsockopt(void *so, char *optname, void *val, size_t valsize);
int nsc_get_tcp_var(void *, const char *, char *, int);
void nsc_tc(const char *);
void nsc_if_xmit_finished(void *dev);
int nsc_get_hz(void);





int nsc_convert_syserr_to_nscerr(int syserr);
# 27 "linux-2.6.18/nsc/sysctl.c" 2


long strtol(const char *cp, char **endp, unsigned int base);





static size_t convert_strtoint(const char *value, void *res, size_t len)
{
  char *end;
  unsigned int i = strtol(value, &end, 10);

  if (*end != '\0')
    return 0;

  if (len > sizeof(i))
    len = sizeof(i);
  ({ size_t __len = (len); void *__ret; if (__builtin_constant_p(len) && __len >= 64) __ret = __memcpy((res),(&i),__len); else __ret = __builtin_memcpy((res),(&i),__len); __ret; });
  return sizeof(i);
}

static size_t convert_inttostr(const void *integer, size_t sizeof_int, char *out, size_t out_len)
{
  if (sizeof_int == sizeof(int)) {
    const int *ptr = integer;
    return snprintf(out, out_len, "%d", *ptr);
  }
  return 0;
}




static size_t convert_strtoint_2(const char *value, void *res, size_t len)
{
  const char *start = value;
  char *end;
  int converted[2];
  int i;

  if (len < sizeof(converted))
    return 0;

  for (i = 0; i < 2; i++) {
    converted[i] = strtol(start, &end, 10);
    start = end;
  }

  if (*end != '\0')
    return 0;

  ({ size_t __len = (sizeof(converted)); void *__ret; if (__builtin_constant_p(sizeof(converted)) && __len >= 64) __ret = __memcpy((res),(converted),__len); else __ret = __builtin_memcpy((res),(converted),__len); __ret; });
  return sizeof(converted);
}

static size_t convert_inttostr_2(const void *input, size_t input_size, char *out, size_t out_len)
{
  if (input_size == sizeof(int) * 2) {
    const int *ptr = input;
    return snprintf(out, out_len, "%d %d", ptr[0], ptr[1]);
  }
  return 0;
}




static size_t convert_strtoint_3(const char *value, void *res, size_t len)
{
  const char *start = value;
  char *end;
  int converted[3];
  int i;

  if (len < sizeof(converted))
    return 0;

  for (i = 0; i < 3; i++) {
    converted[i] = strtol(start, &end, 10);
    start = end;
  }

  if (*end != '\0')
    return 0;

  ({ size_t __len = (sizeof(converted)); void *__ret; if (__builtin_constant_p(sizeof(converted)) && __len >= 64) __ret = __memcpy((res),(converted),__len); else __ret = __builtin_memcpy((res),(converted),__len); __ret; });
  return sizeof(converted);
}

static size_t convert_inttostr_3(const void *input, size_t input_size, char *out, size_t out_len)
{
  if (input_size == sizeof(int) * 3) {
    const int *ptr = input;
    return snprintf(out, out_len, "%d %d %d", ptr[0], ptr[1], ptr[2]);
  }
  return 0;
}






static size_t convert_str_in(const char *value, void *res, size_t len)
{
  return strlcpy(res, value, len);
}


static size_t convert_str_out(const void *str, size_t str_len, char *out, size_t out_len)
{
  return strlcpy(out, str, out_len);
}

typedef  struct { const char  * name  ;  int  int_name [ 3 ]  ;   size_t  ( * convert_w  )  ( const char  * value   , void  * mem    , size_t  mem_size   )  ;   size_t  ( * convert_r  )  ( const void  * mem   , size_t  mem_size   , char  * outbuf    , size_t  outbuf_len   )  ;   }   _GLOBAL_26_T; static  _GLOBAL_26_T  _GLOBAL_0_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_1_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_2_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_3_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_4_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_5_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_6_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_7_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_8_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_9_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_10_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_11_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_12_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_13_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_14_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_15_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_16_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_17_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_18_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_19_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_20_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_21_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_22_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_23_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_24_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_25_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_26_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_27_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_28_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_29_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_30_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_31_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_32_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_33_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_34_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_35_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_36_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_37_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_38_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_39_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_40_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_41_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_42_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_43_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_44_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_45_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_46_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_47_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_48_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static  _GLOBAL_26_T  _GLOBAL_49_nsc_linux_sysctl_map_I [ ]  = { { "net.core.wmem_max" , { CTL_NET , NET_CORE  , NET_CORE_WMEM_MAX  }   , convert_strtoint  , convert_inttostr  }  , { "net.core.rmem_max" , { CTL_NET , NET_CORE  , NET_CORE_RMEM_MAX  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_timestamps" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_TIMESTAMPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_window_scaling" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WINDOW_SCALING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_sack" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retrans_collapse" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRANS_COLLAPSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_default_ttl" , { CTL_NET , NET_IPV4  , NET_IPV4_DEFAULT_TTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_no_pmtu_disc" , { CTL_NET , NET_IPV4  , NET_IPV4_NO_PMTU_DISC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syn_retries" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_SYN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_synack_retries" , { CTL_NET , NET_IPV4  , NET_TCP_SYNACK_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_orphans" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_ORPHANS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_tw_buckets" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_TW_BUCKETS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_high_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_HIGH_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_low_thresh" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_LOW_THRESH  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_time" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_time" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_TIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_keepalive_intvl" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_KEEPALIVE_INTVL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries1" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES1  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_retries2" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_RETRIES2  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fin_timeout" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_FIN_TIMEOUT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_syncookies" , { CTL_NET , NET_IPV4  , NET_TCP_SYNCOOKIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_recycle" , { CTL_NET , NET_IPV4  , NET_TCP_TW_RECYCLE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_abort_on_overflow" , { CTL_NET , NET_IPV4  , NET_TCP_ABORT_ON_OVERFLOW  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_stdurg" , { CTL_NET , NET_IPV4  , NET_TCP_STDURG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_rfc1337" , { CTL_NET , NET_IPV4  , NET_TCP_RFC1337  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_max_syn_backlog" , { CTL_NET , NET_IPV4  , NET_TCP_MAX_SYN_BACKLOG  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ip_local_port_range" , { CTL_NET , NET_IPV4  , NET_IPV4_LOCAL_PORT_RANGE  }   , convert_strtoint_2  , convert_inttostr_2  }   , { "net.ipv4.icmp_echo_ignore_all" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_ALL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_echo_ignore_broadcasts" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ignore_bogus_error_responses" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_errors_use_inbound_ifaddr" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_memberships" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MEMBERSHIPS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.igmp_max_msf" , { CTL_NET , NET_IPV4  , NET_IPV4_IGMP_MAX_MSF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_threshold" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_THRESHOLD  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_minttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MINTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_maxttl" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_MAXTTL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_mintime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MINTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.inet_peer_gc_maxtime" , { CTL_NET , NET_IPV4  , NET_IPV4_INET_PEER_GC_MAXTIME  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_orphan_retries" , { CTL_NET , NET_IPV4  , NET_TCP_ORPHAN_RETRIES  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_fack" , { CTL_NET , NET_IPV4  , NET_TCP_FACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_reordering" , { CTL_NET , NET_IPV4  , NET_TCP_REORDERING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_ecn" , { CTL_NET , NET_IPV4  , NET_TCP_ECN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_dsack" , { CTL_NET , NET_IPV4  , NET_TCP_DSACK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mem" , { CTL_NET , NET_IPV4  , NET_TCP_MEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_wmem" , { CTL_NET , NET_IPV4  , NET_TCP_WMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_rmem" , { CTL_NET , NET_IPV4  , NET_TCP_RMEM  }   , convert_strtoint_3  , convert_inttostr_3  }   , { "net.ipv4.tcp_app_win" , { CTL_NET , NET_IPV4  , NET_TCP_APP_WIN  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_adv_win_scale" , { CTL_NET , NET_IPV4  , NET_TCP_ADV_WIN_SCALE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratelimit" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATELIMIT  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.icmp_ratemask" , { CTL_NET , NET_IPV4  , NET_IPV4_ICMP_RATEMASK  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tw_reuse" , { CTL_NET , NET_IPV4  , NET_TCP_TW_REUSE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_frto" , { CTL_NET , NET_IPV4  , NET_TCP_FRTO  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_low_latency" , { CTL_NET , NET_IPV4  , NET_TCP_LOW_LATENCY  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_secret_interval" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_SECRET_INTERVAL  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.ipfrag_max_dist" , { CTL_NET , NET_IPV4  , NET_IPV4_IPFRAG_MAX_DIST  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_no_metrics_save" , { CTL_NET , NET_IPV4  , NET_TCP_NO_METRICS_SAVE  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_moderate_rcvbuf" , { CTL_NET , NET_IPV4  , NET_TCP_MODERATE_RCVBUF  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_tso_win_divisor" , { CTL_NET , NET_IPV4  , NET_TCP_TSO_WIN_DIVISOR  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_congestion_control" , { CTL_NET , NET_IPV4  , NET_TCP_CONG_CONTROL  }   , convert_str_in  , convert_str_out  }   , { "net.ipv4.tcp_abc" , { CTL_NET , NET_IPV4  , NET_TCP_ABC  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_mtu_probing" , { CTL_NET , NET_IPV4  , NET_TCP_MTU_PROBING  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_base_mss" , { CTL_NET , NET_IPV4  , NET_TCP_BASE_MSS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_workaround_signed_windows" , { CTL_NET , NET_IPV4  , NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS  }   , convert_strtoint  , convert_inttostr  }   , { "net.ipv4.tcp_slow_start_after_idle" , { CTL_NET , NET_IPV4  , NET_TCP_SLOW_START_AFTER_IDLE  }   , convert_strtoint  , convert_inttostr  }   , }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_nsc_linux_sysctl_map_I) *_GLOBAL_nsc_linux_sysctl_map_5_A[NUM_STACKS] = { &_GLOBAL_0_nsc_linux_sysctl_map_I, &_GLOBAL_1_nsc_linux_sysctl_map_I, &_GLOBAL_2_nsc_linux_sysctl_map_I, &_GLOBAL_3_nsc_linux_sysctl_map_I, &_GLOBAL_4_nsc_linux_sysctl_map_I, &_GLOBAL_5_nsc_linux_sysctl_map_I, &_GLOBAL_6_nsc_linux_sysctl_map_I, &_GLOBAL_7_nsc_linux_sysctl_map_I, &_GLOBAL_8_nsc_linux_sysctl_map_I, &_GLOBAL_9_nsc_linux_sysctl_map_I, &_GLOBAL_10_nsc_linux_sysctl_map_I, &_GLOBAL_11_nsc_linux_sysctl_map_I, &_GLOBAL_12_nsc_linux_sysctl_map_I, &_GLOBAL_13_nsc_linux_sysctl_map_I, &_GLOBAL_14_nsc_linux_sysctl_map_I, &_GLOBAL_15_nsc_linux_sysctl_map_I, &_GLOBAL_16_nsc_linux_sysctl_map_I, &_GLOBAL_17_nsc_linux_sysctl_map_I, &_GLOBAL_18_nsc_linux_sysctl_map_I, &_GLOBAL_19_nsc_linux_sysctl_map_I, &_GLOBAL_20_nsc_linux_sysctl_map_I, &_GLOBAL_21_nsc_linux_sysctl_map_I, &_GLOBAL_22_nsc_linux_sysctl_map_I, &_GLOBAL_23_nsc_linux_sysctl_map_I, &_GLOBAL_24_nsc_linux_sysctl_map_I, &_GLOBAL_25_nsc_linux_sysctl_map_I, &_GLOBAL_26_nsc_linux_sysctl_map_I, &_GLOBAL_27_nsc_linux_sysctl_map_I, &_GLOBAL_28_nsc_linux_sysctl_map_I, &_GLOBAL_29_nsc_linux_sysctl_map_I, &_GLOBAL_30_nsc_linux_sysctl_map_I, &_GLOBAL_31_nsc_linux_sysctl_map_I, &_GLOBAL_32_nsc_linux_sysctl_map_I, &_GLOBAL_33_nsc_linux_sysctl_map_I, &_GLOBAL_34_nsc_linux_sysctl_map_I, &_GLOBAL_35_nsc_linux_sysctl_map_I, &_GLOBAL_36_nsc_linux_sysctl_map_I, &_GLOBAL_37_nsc_linux_sysctl_map_I, &_GLOBAL_38_nsc_linux_sysctl_map_I, &_GLOBAL_39_nsc_linux_sysctl_map_I, &_GLOBAL_40_nsc_linux_sysctl_map_I, &_GLOBAL_41_nsc_linux_sysctl_map_I, &_GLOBAL_42_nsc_linux_sysctl_map_I, &_GLOBAL_43_nsc_linux_sysctl_map_I, &_GLOBAL_44_nsc_linux_sysctl_map_I, &_GLOBAL_45_nsc_linux_sysctl_map_I, &_GLOBAL_46_nsc_linux_sysctl_map_I, &_GLOBAL_47_nsc_linux_sysctl_map_I, &_GLOBAL_48_nsc_linux_sysctl_map_I, &_GLOBAL_49_nsc_linux_sysctl_map_I, };  

    


   







         





           
   





        
      
        
      
        
      
        
      
        
      
        
      

        
      
        
      

        
      
        
      
        
      
        
      
        
      
        
      

        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      
        
      



int nsc_sysctl_util_get(const char *name, char *value, size_t len)
{
  size_t i;

  for (i=0; i < (sizeof((*_GLOBAL_nsc_linux_sysctl_map_5_A[get_stack_id()])) / sizeof(((*_GLOBAL_nsc_linux_sysctl_map_5_A[get_stack_id()]))[0])); i++) {
    size_t buflen;
    int ret;
    char buf[512];
    if (strcmp((*_GLOBAL_nsc_linux_sysctl_map_5_A[get_stack_id()])[i].name, name) != 0)
      continue;
    buflen = sizeof(buf);
    ret = do_sysctl((*_GLOBAL_nsc_linux_sysctl_map_5_A[get_stack_id()])[i].int_name, 3, buf, &buflen, ((void *)0), 0);
    if (ret == 0) {
      ret = (*_GLOBAL_nsc_linux_sysctl_map_5_A[get_stack_id()])[i].convert_r(buf, buflen, value, len);
      if (ret > 0) {
        return ret;
      }
    }

    return -1;
  }
  return -1;
}

int nsc_sysctl_util_set(const char *name, const char *value)
{
  size_t i;

  for (i=0; i < (sizeof((*_GLOBAL_nsc_linux_sysctl_map_5_A[get_stack_id()])) / sizeof(((*_GLOBAL_nsc_linux_sysctl_map_5_A[get_stack_id()]))[0])); i++) {
    size_t ret;
    char buf[512];
    if (strcmp((*_GLOBAL_nsc_linux_sysctl_map_5_A[get_stack_id()])[i].name, name) != 0)
      continue;
    ret = (*_GLOBAL_nsc_linux_sysctl_map_5_A[get_stack_id()])[i].convert_w(value, buf, sizeof(buf));
    if (ret == 0)
      break;
    if (ret <= sizeof(buf)) {
      return do_sysctl((*_GLOBAL_nsc_linux_sysctl_map_5_A[get_stack_id()])[i].int_name, 3, ((void *)0), ((void *)0), buf, ret);
    }

    return -1;
  }
  return -1;
}

int nsc_sysctl_util_getnum(size_t idx, char *name, size_t len)
{
  if (idx >= (sizeof((*_GLOBAL_nsc_linux_sysctl_map_5_A[get_stack_id()])) / sizeof(((*_GLOBAL_nsc_linux_sysctl_map_5_A[get_stack_id()]))[0])))
    return -1;

  return strlcpy(name, (*_GLOBAL_nsc_linux_sysctl_map_5_A[get_stack_id()])[idx].name, len);
}

