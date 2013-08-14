# 1 "linux-2.6.18/net/ipv6/reassembly.c"
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
# 1 "linux-2.6.18/net/ipv6/reassembly.c"
# 31 "linux-2.6.18/net/ipv6/reassembly.c"
# 1 "linux-2.6.18/include/linux/errno.h" 1



# 1 "linux-2.6.18/include/asm/errno.h" 1



# 1 "linux-2.6.18/include/asm-generic/errno.h" 1



# 1 "linux-2.6.18/include/asm-generic/errno-base.h" 1
# 5 "linux-2.6.18/include/asm-generic/errno.h" 2
# 5 "linux-2.6.18/include/asm/errno.h" 2
# 5 "linux-2.6.18/include/linux/errno.h" 2
# 32 "linux-2.6.18/net/ipv6/reassembly.c" 2
# 1 "linux-2.6.18/include/linux/types.h" 1
# 14 "linux-2.6.18/include/linux/types.h"
# 1 "linux-2.6.18/include/linux/posix_types.h" 1



# 1 "linux-2.6.18/include/linux/stddef.h" 1



# 1 "linux-2.6.18/include/linux/compiler.h" 1
# 42 "linux-2.6.18/include/linux/compiler.h"
# 1 "linux-2.6.18/include/linux/compiler-gcc4.h" 1



# 1 "linux-2.6.18/include/linux/compiler-gcc.h" 1
# 5 "linux-2.6.18/include/linux/compiler-gcc4.h" 2
# 43 "linux-2.6.18/include/linux/compiler.h" 2
# 5 "linux-2.6.18/include/linux/stddef.h" 2
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
# 33 "linux-2.6.18/net/ipv6/reassembly.c" 2
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
# 34 "linux-2.6.18/net/ipv6/reassembly.c" 2
# 1 "linux-2.6.18/include/linux/socket.h" 1
# 11 "linux-2.6.18/include/linux/socket.h"
struct __kernel_sockaddr_storage {
 unsigned short ss_family;

 char __data[128 - sizeof(unsigned short)];


} __attribute__ ((aligned((__alignof__ (struct sockaddr *))))) ;



# 1 "linux-2.6.18/include/asm/socket.h" 1



# 1 "linux-2.6.18/include/asm/sockios.h" 1
# 5 "linux-2.6.18/include/asm/socket.h" 2
# 22 "linux-2.6.18/include/linux/socket.h" 2
# 1 "linux-2.6.18/include/linux/sockios.h" 1
# 23 "linux-2.6.18/include/linux/socket.h" 2
# 1 "linux-2.6.18/include/linux/uio.h" 1
# 20 "linux-2.6.18/include/linux/uio.h"
struct iovec
{
 void *iov_base;
 __kernel_size_t iov_len;
};



struct kvec {
 void *iov_base;
 size_t iov_len;
};
# 54 "linux-2.6.18/include/linux/uio.h"
static inline  __attribute__((always_inline)) size_t iov_length(const struct iovec *iov, unsigned long nr_segs)
{
 unsigned long seg;
 size_t ret = 0;

 for (seg = 0; seg < nr_segs; seg++)
  ret += iov[seg].iov_len;
 return ret;
}

unsigned long iov_shorten(struct iovec *iov, unsigned long nr_segs, size_t to);
# 24 "linux-2.6.18/include/linux/socket.h" 2



typedef  int  _GLOBAL_1_T; extern  _GLOBAL_1_T  global_sysctl_somaxconn[NUM_STACKS];   

struct seq_file;
extern void socket_seq_show(struct seq_file *seq);


typedef unsigned short sa_family_t;





struct sockaddr {
 sa_family_t sa_family;
 char sa_data[14];
};

struct linger {
 int l_onoff;
 int l_linger;
};
# 57 "linux-2.6.18/include/linux/socket.h"
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
# 130 "linux-2.6.18/include/linux/socket.h"
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
# 289 "linux-2.6.18/include/linux/socket.h"
extern int memcpy_fromiovec(unsigned char *kdata, struct iovec *iov, int len);
extern int memcpy_fromiovecend(unsigned char *kdata, struct iovec *iov,
    int offset, int len);
extern int csum_partial_copy_fromiovecend(unsigned char *kdata,
       struct iovec *iov,
       int offset,
       unsigned int len, int *csump);

extern int verify_iovec(struct msghdr *m, struct iovec *iov, char *address, int mode);
extern int memcpy_toiovec(struct iovec *v, unsigned char *kdata, int len);
extern int move_addr_to_user(void *kaddr, int klen, void *uaddr, int *ulen);
extern int move_addr_to_kernel(void *uaddr, int ulen, void *kaddr);
extern int put_cmsg(struct msghdr*, int level, int type, int len, void *data);
# 35 "linux-2.6.18/net/ipv6/reassembly.c" 2

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
# 6 "linux-2.6.18/include/linux/jiffies.h" 2

# 1 "linux-2.6.18/include/linux/time.h" 1






# 1 "linux-2.6.18/include/linux/seqlock.h" 1
# 29 "linux-2.6.18/include/linux/seqlock.h"
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


# 1 "linux-2.6.18/include/asm/thread_info.h" 1
# 12 "linux-2.6.18/include/asm/thread_info.h"
# 1 "linux-2.6.18/include/asm/page.h" 1
# 46 "linux-2.6.18/include/asm/page.h"
typedef  unsigned long   _GLOBAL_12_T; extern  _GLOBAL_12_T  global_end_pfn[NUM_STACKS];    

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
# 13 "linux-2.6.18/include/asm/thread_info.h" 2

# 1 "linux-2.6.18/include/asm/pda.h" 1






# 1 "linux-2.6.18/include/linux/cache.h" 1




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

typedef  struct x8664_pda   _GLOBAL_13_T; extern  _GLOBAL_13_T  * _GLOBAL_0__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_1__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_2__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_3__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_4__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_5__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_6__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_7__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_8__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_9__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_10__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_11__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_12__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_13__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_14__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_15__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_16__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_17__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_18__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_19__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_20__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_21__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_22__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_23__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_24__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_25__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_26__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_27__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_28__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_29__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_30__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_31__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_32__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_33__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_34__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_35__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_36__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_37__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_38__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_39__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_40__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_41__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_42__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_43__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_44__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_45__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_46__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_47__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_48__cpu_pda_I [ ]  ; extern  _GLOBAL_13_T  * _GLOBAL_49__cpu_pda_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__cpu_pda_I) *_GLOBAL__cpu_pda_3_A[NUM_STACKS];   
typedef  struct x8664_pda   _GLOBAL_14_T; extern  _GLOBAL_14_T  _GLOBAL_0_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_1_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_2_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_3_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_4_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_5_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_6_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_7_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_8_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_9_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_10_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_11_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_12_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_13_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_14_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_15_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_16_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_17_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_18_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_19_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_20_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_21_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_22_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_23_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_24_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_25_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_26_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_27_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_28_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_29_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_30_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_31_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_32_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_33_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_34_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_35_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_36_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_37_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_38_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_39_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_40_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_41_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_42_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_43_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_44_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_45_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_46_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_47_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_48_boot_cpu_pda_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_49_boot_cpu_pda_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_cpu_pda_I) *_GLOBAL_boot_cpu_pda_4_A[NUM_STACKS];   
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
typedef  cpumask_t  _GLOBAL_15_T; extern  _GLOBAL_15_T  global__unused_cpumask_arg_[NUM_STACKS];   


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
typedef  cpumask_t  _GLOBAL_16_T; extern  _GLOBAL_16_T  global_cpu_possible_map[NUM_STACKS];   
typedef  cpumask_t  _GLOBAL_17_T; extern  _GLOBAL_17_T  global_cpu_online_map[NUM_STACKS];   
typedef  cpumask_t  _GLOBAL_18_T; extern  _GLOBAL_18_T  global_cpu_present_map[NUM_STACKS];   
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
typedef  char  _GLOBAL_19_T; extern  _GLOBAL_19_T  global_ignore_irq13[NUM_STACKS];   

extern void identify_cpu(struct cpuinfo_x86 *);
extern void print_cpu_info(struct cpuinfo_x86 *);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
typedef  unsigned short   _GLOBAL_20_T; extern  _GLOBAL_20_T  global_num_cache_leaves[NUM_STACKS];    
# 147 "linux-2.6.18/include/asm/processor.h"
typedef  unsigned long   _GLOBAL_21_T; extern  _GLOBAL_21_T  global_mmu_cr4_features[NUM_STACKS];    

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


typedef  struct cpuinfo_x86   _GLOBAL_22_T; extern  _GLOBAL_22_T  global_boot_cpu_data[NUM_STACKS];    
typedef  __typeof__ ( struct tss_struct  )   _GLOBAL_23_T; extern  _GLOBAL_23_T  global_per_cpu__init_tss[NUM_STACKS];    

struct orig_ist {
 unsigned long ist[7];
};
typedef  __typeof__ ( struct orig_ist  )   _GLOBAL_24_T; extern  _GLOBAL_24_T  global_per_cpu__orig_ist[NUM_STACKS];    
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
typedef  unsigned long   _GLOBAL_25_T; extern  _GLOBAL_25_T  global_boot_option_idle_override[NUM_STACKS];    

typedef  int  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_bootloader_type[NUM_STACKS];   
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

typedef  int  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_debug_locks[NUM_STACKS];   
typedef  int  _GLOBAL_28_T; extern  _GLOBAL_28_T  global_debug_locks_silent[NUM_STACKS];   




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
# 30 "linux-2.6.18/include/linux/seqlock.h" 2


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
# 8 "linux-2.6.18/include/linux/jiffies.h" 2
# 1 "linux-2.6.18/include/linux/timex.h" 1
# 59 "linux-2.6.18/include/linux/timex.h"
# 1 "linux-2.6.18/include/asm/param.h" 1
# 60 "linux-2.6.18/include/linux/timex.h" 2
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
# 9 "linux-2.6.18/include/linux/jiffies.h" 2
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
# 37 "linux-2.6.18/net/ipv6/reassembly.c" 2
# 1 "linux-2.6.18/include/linux/net.h" 1
# 21 "linux-2.6.18/include/linux/net.h"
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
# 22 "linux-2.6.18/include/linux/net.h" 2


struct poll_table_struct;
struct inode;
# 47 "linux-2.6.18/include/linux/net.h"
typedef enum {
 SS_FREE = 0,
 SS_UNCONNECTED,
 SS_CONNECTING,
 SS_CONNECTED,
 SS_DISCONNECTING
} socket_state;
# 82 "linux-2.6.18/include/linux/net.h"
enum sock_type {
 SOCK_STREAM = 1,
 SOCK_DGRAM = 2,
 SOCK_RAW = 3,
 SOCK_RDM = 4,
 SOCK_SEQPACKET = 5,
 SOCK_DCCP = 6,
 SOCK_PACKET = 10,
};
# 107 "linux-2.6.18/include/linux/net.h"
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
};

struct net_proto_family {
 int family;
 int (*create)(struct socket *sock, int protocol);


 short authentication;
 short encryption;
 short encrypt_net;
 struct module *owner;
};

struct iovec;
struct kvec;

extern int sock_wake_async(struct socket *sk, int how, int band);
extern int sock_register(struct net_proto_family *fam);
extern int sock_unregister(int family);
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
extern unsigned long net_random(void);
extern void net_srandom(unsigned long);
extern void net_random_init(void);

extern int kernel_sendmsg(struct socket *sock, struct msghdr *msg,
        struct kvec *vec, size_t num, size_t len);
extern int kernel_recvmsg(struct socket *sock, struct msghdr *msg,
        struct kvec *vec, size_t num,
        size_t len, int flags);
# 301 "linux-2.6.18/include/linux/net.h"
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
# 302 "linux-2.6.18/include/linux/net.h" 2
typedef  ctl_table  _GLOBAL_64_T; extern  _GLOBAL_64_T  _GLOBAL_0_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_1_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_2_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_3_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_4_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_5_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_6_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_7_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_8_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_9_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_10_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_11_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_12_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_13_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_14_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_15_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_16_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_17_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_18_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_19_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_20_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_21_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_22_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_23_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_24_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_25_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_26_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_27_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_28_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_29_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_30_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_31_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_32_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_33_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_34_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_35_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_36_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_37_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_38_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_39_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_40_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_41_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_42_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_43_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_44_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_45_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_46_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_47_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_48_net_table_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_49_net_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_net_table_I) *_GLOBAL_net_table_5_A[NUM_STACKS];  
typedef  int  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_net_msg_cost[NUM_STACKS];   
typedef  int  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_net_msg_burst[NUM_STACKS];   
# 38 "linux-2.6.18/net/ipv6/reassembly.c" 2

# 1 "linux-2.6.18/include/linux/netdevice.h" 1
# 28 "linux-2.6.18/include/linux/netdevice.h"
# 1 "linux-2.6.18/include/linux/if.h" 1
# 27 "linux-2.6.18/include/linux/if.h"
# 1 "linux-2.6.18/include/linux/hdlc/ioctl.h" 1



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
# 28 "linux-2.6.18/include/linux/if.h" 2
# 91 "linux-2.6.18/include/linux/if.h"
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
# 117 "linux-2.6.18/include/linux/if.h"
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
# 153 "linux-2.6.18/include/linux/if.h"
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
# 203 "linux-2.6.18/include/linux/if.h"
struct ifconf
{
 int ifc_len;
 union
 {
  char *ifcu_buf;
  struct ifreq *ifcu_req;
 } ifc_ifcu;
};
# 29 "linux-2.6.18/include/linux/netdevice.h" 2
# 1 "linux-2.6.18/include/linux/if_ether.h" 1
# 104 "linux-2.6.18/include/linux/if_ether.h"
struct ethhdr {
 unsigned char h_dest[6];
 unsigned char h_source[6];
 __be16 h_proto;
} __attribute__((packed)) ;


# 1 "linux-2.6.18/include/linux/skbuff.h" 1
# 25 "linux-2.6.18/include/linux/skbuff.h"
# 1 "linux-2.6.18/include/linux/mm.h" 1



# 1 "linux-2.6.18/include/linux/sched.h" 1



# 1 "linux-2.6.18/include/linux/auxvec.h" 1



# 1 "linux-2.6.18/include/asm/auxvec.h" 1
# 5 "linux-2.6.18/include/linux/auxvec.h" 2
# 5 "linux-2.6.18/include/linux/sched.h" 2
# 38 "linux-2.6.18/include/linux/sched.h"
struct sched_param {
 int sched_priority;
};



# 1 "linux-2.6.18/include/linux/capability.h" 1
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
# 58 "linux-2.6.18/include/linux/capability.h"
typedef __u32 kernel_cap_t;
# 295 "linux-2.6.18/include/linux/capability.h"
typedef  kernel_cap_t  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_cap_bset[NUM_STACKS];   
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



# 1 "linux-2.6.18/include/linux/nodemask.h" 1
# 86 "linux-2.6.18/include/linux/nodemask.h"
# 1 "linux-2.6.18/include/linux/numa.h" 1
# 87 "linux-2.6.18/include/linux/nodemask.h" 2

typedef struct { unsigned long bits[((((1 << 0))+64 -1)/64)]; } nodemask_t;
typedef  nodemask_t  _GLOBAL_68_T; extern  _GLOBAL_68_T  global__unused_nodemask_arg_[NUM_STACKS];   


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
typedef  nodemask_t  _GLOBAL_69_T; extern  _GLOBAL_69_T  global_node_online_map[NUM_STACKS];   
typedef  nodemask_t  _GLOBAL_70_T; extern  _GLOBAL_70_T  global_node_possible_map[NUM_STACKS];   
# 55 "linux-2.6.18/include/linux/sched.h" 2


# 1 "linux-2.6.18/include/asm/semaphore.h" 1
# 41 "linux-2.6.18/include/asm/semaphore.h"
# 1 "linux-2.6.18/include/asm/rwlock.h" 1
# 42 "linux-2.6.18/include/asm/semaphore.h" 2

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





typedef  unsigned  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_securebits[NUM_STACKS];   
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
typedef  initcall_t  _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_1___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_2___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_3___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_4___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_5___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_6___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_7___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_8___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_9___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_10___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_11___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_12___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_13___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_14___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_15___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_16___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_17___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_18___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_19___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_20___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_21___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_22___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_23___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_24___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_25___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_26___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_27___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_28___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_29___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_30___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_31___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_32___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_33___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_34___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_35___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_36___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_37___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_38___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_39___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_40___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_41___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_42___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_43___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_44___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_45___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_46___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_47___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_48___security_initcall_start_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_49___security_initcall_start_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___security_initcall_start_I) *_GLOBAL___security_initcall_start_6_A[NUM_STACKS];extern  _GLOBAL_72_T  _GLOBAL_0___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_1___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_2___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_3___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_4___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_5___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_6___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_7___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_8___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_9___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_10___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_11___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_12___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_13___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_14___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_15___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_16___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_17___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_18___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_19___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_20___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_21___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_22___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_23___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_24___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_25___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_26___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_27___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_28___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_29___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_30___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_31___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_32___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_33___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_34___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_35___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_36___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_37___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_38___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_39___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_40___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_41___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_42___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_43___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_44___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_45___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_46___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_47___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_48___security_initcall_end_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_49___security_initcall_end_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___security_initcall_end_I) *_GLOBAL___security_initcall_end_7_A[NUM_STACKS];   


typedef  char  _GLOBAL_73_T; extern  _GLOBAL_73_T  _GLOBAL_0_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_1_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_2_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_3_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_4_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_5_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_6_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_7_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_8_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_9_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_10_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_11_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_12_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_13_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_14_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_15_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_16_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_17_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_18_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_19_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_20_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_21_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_22_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_23_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_24_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_25_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_26_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_27_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_28_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_29_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_30_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_31_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_32_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_33_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_34_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_35_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_36_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_37_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_38_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_39_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_40_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_41_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_42_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_43_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_44_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_45_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_46_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_47_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_48_saved_command_line_I [ ] ; extern  _GLOBAL_73_T  _GLOBAL_49_saved_command_line_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_saved_command_line_I) *_GLOBAL_saved_command_line_8_A[NUM_STACKS];  


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
typedef  int  _GLOBAL_74_T; extern  _GLOBAL_74_T  _GLOBAL_0_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_1_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_2_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_3_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_4_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_5_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_6_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_7_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_8_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_9_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_10_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_11_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_12_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_13_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_14_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_15_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_16_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_17_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_18_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_19_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_20_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_21_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_22_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_23_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_24_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_25_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_26_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_27_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_28_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_29_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_30_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_31_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_32_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_33_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_34_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_35_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_36_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_37_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_38_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_39_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_40_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_41_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_42_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_43_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_44_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_45_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_46_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_47_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_48_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; extern  _GLOBAL_74_T  _GLOBAL_49_sysctl_lowmem_reserve_ratio_I [ 4 - 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysctl_lowmem_reserve_ratio_I) *_GLOBAL_sysctl_lowmem_reserve_ratio_9_A[NUM_STACKS];   
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







typedef  struct pglist_data   _GLOBAL_75_T; extern  _GLOBAL_75_T  global_contig_page_data[NUM_STACKS];    
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
typedef  struct cache_sizes   _GLOBAL_76_T; extern  _GLOBAL_76_T  _GLOBAL_0_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_1_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_2_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_3_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_4_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_5_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_6_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_7_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_8_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_9_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_10_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_11_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_12_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_13_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_14_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_15_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_16_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_17_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_18_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_19_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_20_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_21_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_22_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_23_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_24_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_25_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_26_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_27_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_28_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_29_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_30_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_31_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_32_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_33_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_34_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_35_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_36_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_37_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_38_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_39_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_40_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_41_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_42_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_43_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_44_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_45_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_46_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_47_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_48_malloc_sizes_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_49_malloc_sizes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_malloc_sizes_I) *_GLOBAL_malloc_sizes_10_A[NUM_STACKS] = { &_GLOBAL_0_malloc_sizes_I, &_GLOBAL_1_malloc_sizes_I, &_GLOBAL_2_malloc_sizes_I, &_GLOBAL_3_malloc_sizes_I, &_GLOBAL_4_malloc_sizes_I, &_GLOBAL_5_malloc_sizes_I, &_GLOBAL_6_malloc_sizes_I, &_GLOBAL_7_malloc_sizes_I, &_GLOBAL_8_malloc_sizes_I, &_GLOBAL_9_malloc_sizes_I, &_GLOBAL_10_malloc_sizes_I, &_GLOBAL_11_malloc_sizes_I, &_GLOBAL_12_malloc_sizes_I, &_GLOBAL_13_malloc_sizes_I, &_GLOBAL_14_malloc_sizes_I, &_GLOBAL_15_malloc_sizes_I, &_GLOBAL_16_malloc_sizes_I, &_GLOBAL_17_malloc_sizes_I, &_GLOBAL_18_malloc_sizes_I, &_GLOBAL_19_malloc_sizes_I, &_GLOBAL_20_malloc_sizes_I, &_GLOBAL_21_malloc_sizes_I, &_GLOBAL_22_malloc_sizes_I, &_GLOBAL_23_malloc_sizes_I, &_GLOBAL_24_malloc_sizes_I, &_GLOBAL_25_malloc_sizes_I, &_GLOBAL_26_malloc_sizes_I, &_GLOBAL_27_malloc_sizes_I, &_GLOBAL_28_malloc_sizes_I, &_GLOBAL_29_malloc_sizes_I, &_GLOBAL_30_malloc_sizes_I, &_GLOBAL_31_malloc_sizes_I, &_GLOBAL_32_malloc_sizes_I, &_GLOBAL_33_malloc_sizes_I, &_GLOBAL_34_malloc_sizes_I, &_GLOBAL_35_malloc_sizes_I, &_GLOBAL_36_malloc_sizes_I, &_GLOBAL_37_malloc_sizes_I, &_GLOBAL_38_malloc_sizes_I, &_GLOBAL_39_malloc_sizes_I, &_GLOBAL_40_malloc_sizes_I, &_GLOBAL_41_malloc_sizes_I, &_GLOBAL_42_malloc_sizes_I, &_GLOBAL_43_malloc_sizes_I, &_GLOBAL_44_malloc_sizes_I, &_GLOBAL_45_malloc_sizes_I, &_GLOBAL_46_malloc_sizes_I, &_GLOBAL_47_malloc_sizes_I, &_GLOBAL_48_malloc_sizes_I, &_GLOBAL_49_malloc_sizes_I, };   

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
   (*_GLOBAL_malloc_sizes_10_A[get_stack_id()])[i].cs_dmacachep :
   (*_GLOBAL_malloc_sizes_10_A[get_stack_id()])[i].cs_cachep, flags);
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
   (*_GLOBAL_malloc_sizes_10_A[get_stack_id()])[i].cs_dmacachep :
   (*_GLOBAL_malloc_sizes_10_A[get_stack_id()])[i].cs_cachep, flags);
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
typedef  kmem_cache_t  _GLOBAL_77_T; extern  _GLOBAL_77_T  * global_vm_area_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_78_T; extern  _GLOBAL_78_T  * global_names_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_79_T; extern  _GLOBAL_79_T  * global_files_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_80_T; extern  _GLOBAL_80_T  * global_filp_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_81_T; extern  _GLOBAL_81_T  * global_fs_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_82_T; extern  _GLOBAL_82_T  * global_sighand_cachep[NUM_STACKS];   
typedef  kmem_cache_t  _GLOBAL_83_T; extern  _GLOBAL_83_T  * global_bio_cachep[NUM_STACKS];   

typedef  atomic_t  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_slab_reclaim_pages[NUM_STACKS];   
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

typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_per_cpu__rcu_data[NUM_STACKS];    
typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_86_T; extern  _GLOBAL_86_T  global_per_cpu__rcu_bh_data[NUM_STACKS];    







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

typedef  struct tvec_t_base_s   _GLOBAL_87_T; extern  _GLOBAL_87_T  _GLOBAL_0_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_1_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_2_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_3_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_4_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_5_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_6_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_7_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_8_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_9_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_10_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_11_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_12_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_13_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_14_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_15_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_16_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_17_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_18_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_19_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_20_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_21_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_22_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_23_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_24_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_25_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_26_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_27_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_28_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_29_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_30_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_31_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_32_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_33_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_34_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_35_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_36_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_37_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_38_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_39_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_40_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_41_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_42_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_43_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_44_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_45_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_46_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_47_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_48_boot_tvec_bases_I; extern  _GLOBAL_87_T  _GLOBAL_49_boot_tvec_bases_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_tvec_bases_I) *_GLOBAL_boot_tvec_bases_11_A[NUM_STACKS];   
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
typedef  unsigned long   _GLOBAL_88_T; extern  _GLOBAL_88_T  _GLOBAL_0_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_1_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_2_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_3_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_4_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_5_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_6_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_7_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_8_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_9_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_10_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_11_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_12_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_13_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_14_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_15_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_16_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_17_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_18_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_19_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_20_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_21_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_22_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_23_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_24_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_25_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_26_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_27_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_28_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_29_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_30_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_31_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_32_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_33_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_34_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_35_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_36_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_37_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_38_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_39_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_40_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_41_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_42_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_43_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_44_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_45_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_46_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_47_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_48_avenrun_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_49_avenrun_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_avenrun_I) *_GLOBAL_avenrun_12_A[NUM_STACKS];   
# 119 "linux-2.6.18/include/linux/sched.h"
typedef  unsigned long   _GLOBAL_89_T; extern  _GLOBAL_89_T  global_total_forks[NUM_STACKS];    
typedef  int  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_nr_threads[NUM_STACKS];   
typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_last_pid[NUM_STACKS];   
typedef  __typeof__ ( unsigned long  )   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_per_cpu__process_counts[NUM_STACKS];    
extern int nr_processes(void);
extern unsigned long nr_running(void);
extern unsigned long nr_uninterruptible(void);
extern unsigned long nr_active(void);
extern unsigned long nr_iowait(void);
extern unsigned long weighted_cpuload(const int cpu);
# 184 "linux-2.6.18/include/linux/sched.h"
typedef  rwlock_t  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_tasklist_lock[NUM_STACKS];   
typedef  spinlock_t  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_mmlist_lock[NUM_STACKS];   

struct task_struct;

extern void sched_init(void);
extern void sched_init_smp(void);
extern void init_idle(struct task_struct *idle, int cpu);

typedef  cpumask_t  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_nohz_cpu_mask[NUM_STACKS];   

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




typedef  int  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_sysctl_max_map_count[NUM_STACKS];   

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


typedef  unsigned  _GLOBAL_97_T; extern  _GLOBAL_97_T  global_aio_max_size[NUM_STACKS];   

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


typedef  unsigned long   _GLOBAL_98_T; extern  _GLOBAL_98_T  global_aio_nr[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_99_T; extern  _GLOBAL_99_T  global_aio_max_nr[NUM_STACKS];    
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

typedef  struct user_struct   _GLOBAL_100_T; extern  _GLOBAL_100_T  global_root_user[NUM_STACKS];    


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




typedef  struct exec_domain   _GLOBAL_101_T; extern  _GLOBAL_101_T  global_default_exec_domain[NUM_STACKS];    

union thread_union {
 struct thread_info thread_info;
 unsigned long stack[((1UL << 12) << 1)/sizeof(long)];
};


static inline  __attribute__((always_inline)) int kstack_end(void *addr)
{



 return !(((unsigned long)addr+sizeof(void*)-1) & (((1UL << 12) << 1)-sizeof(void*)));
}


typedef  union thread_union   _GLOBAL_102_T; extern  _GLOBAL_102_T  global_init_thread_union[NUM_STACKS];    
typedef  struct task_struct   _GLOBAL_103_T; extern  _GLOBAL_103_T  global_init_task[NUM_STACKS];    

typedef  struct mm_struct   _GLOBAL_104_T; extern  _GLOBAL_104_T  global_init_mm[NUM_STACKS];    


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
typedef  struct task_struct   _GLOBAL_105_T; extern  _GLOBAL_105_T  * global_child_reaper[NUM_STACKS];    

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
typedef  char  _GLOBAL_106_T; extern  _GLOBAL_106_T  _GLOBAL_0_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_1_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_2_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_3_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_4_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_5_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_6_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_7_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_8_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_9_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_10_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_11_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_12_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_13_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_14_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_15_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_16_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_17_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_18_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_19_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_20_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_21_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_22_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_23_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_24_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_25_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_26_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_27_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_28_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_29_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_30_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_31_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_32_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_33_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_34_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_35_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_36_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_37_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_38_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_39_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_40_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_41_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_42_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_43_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_44_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_45_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_46_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_47_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_48_uevent_helper_I [ ] ; extern  _GLOBAL_106_T  _GLOBAL_49_uevent_helper_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uevent_helper_I) *_GLOBAL_uevent_helper_13_A[NUM_STACKS];  


typedef  u64  _GLOBAL_107_T; extern  _GLOBAL_107_T  global_uevent_seqnum[NUM_STACKS];   


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
typedef  struct subsystem   _GLOBAL_108_T; extern  _GLOBAL_108_T  global_kernel_subsys[NUM_STACKS];    

typedef  struct subsystem   _GLOBAL_109_T; extern  _GLOBAL_109_T  global_hypervisor_subsys[NUM_STACKS];    
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







typedef  void   ( *_GLOBAL_111_T  )  ( void  ) ; extern  _GLOBAL_111_T global_pm_idle[NUM_STACKS];   
typedef  void   ( *_GLOBAL_113_T  )  ( void  ) ; extern  _GLOBAL_113_T global_pm_power_off[NUM_STACKS];   

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
typedef  struct pm_ops   _GLOBAL_114_T; extern  _GLOBAL_114_T  * global_pm_ops[NUM_STACKS];    
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


typedef  suspend_disk_method_t  _GLOBAL_115_T; extern  _GLOBAL_115_T  global_pm_disk_mode[NUM_STACKS];   

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
typedef  int  _GLOBAL_116_T; extern  _GLOBAL_116_T  global_sched_mc_power_savings[NUM_STACKS]; extern  _GLOBAL_116_T  global_sched_smt_power_savings[NUM_STACKS];    
typedef  struct sysdev_attribute   _GLOBAL_117_T; extern  _GLOBAL_117_T  global_attr_sched_mc_power_savings[NUM_STACKS]; extern  _GLOBAL_117_T  global_attr_sched_smt_power_savings[NUM_STACKS];     
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
# 5 "linux-2.6.18/include/linux/mm.h" 2
# 14 "linux-2.6.18/include/linux/mm.h"
# 1 "linux-2.6.18/include/linux/prio_tree.h" 1
# 14 "linux-2.6.18/include/linux/prio_tree.h"
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
# 84 "linux-2.6.18/include/linux/prio_tree.h"
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
# 15 "linux-2.6.18/include/linux/mm.h" 2
# 1 "linux-2.6.18/include/linux/fs.h" 1
# 9 "linux-2.6.18/include/linux/fs.h"
# 1 "linux-2.6.18/include/linux/limits.h" 1
# 10 "linux-2.6.18/include/linux/fs.h" 2
# 1 "linux-2.6.18/include/linux/ioctl.h" 1



# 1 "linux-2.6.18/include/asm/ioctl.h" 1
# 1 "linux-2.6.18/include/asm-generic/ioctl.h" 1
# 51 "linux-2.6.18/include/asm-generic/ioctl.h"
typedef  unsigned int   _GLOBAL_118_T; extern  _GLOBAL_118_T  global___invalid_size_argument_for_IOC[NUM_STACKS];    
# 1 "linux-2.6.18/include/asm/ioctl.h" 2
# 5 "linux-2.6.18/include/linux/ioctl.h" 2
# 11 "linux-2.6.18/include/linux/fs.h" 2
# 35 "linux-2.6.18/include/linux/fs.h"
struct files_stat_struct {
 int nr_files;
 int nr_free_files;
 int max_files;
};
typedef  struct files_stat_struct   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_files_stat[NUM_STACKS];    
extern int get_max_files(void);

struct inodes_stat_t {
 int nr_inodes;
 int nr_unused;
 int dummy[5];
};
typedef  struct inodes_stat_t   _GLOBAL_120_T; extern  _GLOBAL_120_T  global_inodes_stat[NUM_STACKS];    

typedef  int  _GLOBAL_121_T; extern  _GLOBAL_121_T  global_leases_enable[NUM_STACKS]; extern  _GLOBAL_121_T  global_lease_break_time[NUM_STACKS];    
# 228 "linux-2.6.18/include/linux/fs.h"
# 1 "linux-2.6.18/include/linux/kdev_t.h" 1
# 21 "linux-2.6.18/include/linux/kdev_t.h"
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
# 229 "linux-2.6.18/include/linux/fs.h" 2
# 1 "linux-2.6.18/include/linux/dcache.h" 1
# 12 "linux-2.6.18/include/linux/dcache.h"
struct nameidata;
struct vfsmount;
# 33 "linux-2.6.18/include/linux/dcache.h"
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
typedef  struct dentry_stat_t   _GLOBAL_122_T; extern  _GLOBAL_122_T  global_dentry_stat[NUM_STACKS];    






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

 struct dcookie_struct *d_cookie;

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
};
# 179 "linux-2.6.18/include/linux/dcache.h"
typedef  spinlock_t  _GLOBAL_123_T; extern  _GLOBAL_123_T  global_dcache_lock[NUM_STACKS];   
# 197 "linux-2.6.18/include/linux/dcache.h"
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
extern void d_delete(struct dentry *);


extern struct dentry * d_alloc(struct dentry *, const struct qstr *);
extern struct dentry * d_alloc_anon(struct inode *);
extern struct dentry * d_splice_alias(struct inode *, struct dentry *);
extern void shrink_dcache_sb(struct super_block *);
extern void shrink_dcache_parent(struct dentry *);
extern int d_invalidate(struct dentry *);


extern struct dentry * d_alloc_root(struct inode *);


extern void d_genocide(struct dentry *);

extern struct dentry *d_find_alias(struct inode *);
extern void d_prune_aliases(struct inode *);


extern int have_submounts(struct dentry *);




extern void d_rehash(struct dentry *);
# 260 "linux-2.6.18/include/linux/dcache.h"
static inline  __attribute__((always_inline)) void d_add(struct dentry *entry, struct inode *inode)
{
 d_instantiate(entry, inode);
 d_rehash(entry);
}
# 274 "linux-2.6.18/include/linux/dcache.h"
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

extern char * d_path(struct dentry *, struct vfsmount *, char *, int);
# 311 "linux-2.6.18/include/linux/dcache.h"
static inline  __attribute__((always_inline)) struct dentry *dget(struct dentry *dentry)
{
 if (dentry) {
  do { if (!((&dentry->d_count)->counter)) ; } while(0);
  atomic_inc(&dentry->d_count);
 }
 return dentry;
}

extern struct dentry * dget_locked(struct dentry *);
# 329 "linux-2.6.18/include/linux/dcache.h"
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
extern struct vfsmount *__lookup_mnt(struct vfsmount *, struct dentry *, int);
extern struct dentry *lookup_create(struct nameidata *nd, int is_dir);

typedef  int  _GLOBAL_124_T; extern  _GLOBAL_124_T  global_sysctl_vfs_cache_pressure[NUM_STACKS];   
# 230 "linux-2.6.18/include/linux/fs.h" 2
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
# 231 "linux-2.6.18/include/linux/fs.h" 2



# 1 "linux-2.6.18/include/linux/radix-tree.h" 1
# 29 "linux-2.6.18/include/linux/radix-tree.h"
struct radix_tree_root {
 unsigned int height;
 gfp_t gfp_mask;
 struct radix_tree_node *rnode;
};
# 51 "linux-2.6.18/include/linux/radix-tree.h"
int radix_tree_insert(struct radix_tree_root *, unsigned long, void *);
void *radix_tree_lookup(struct radix_tree_root *, unsigned long);
void **radix_tree_lookup_slot(struct radix_tree_root *, unsigned long);
void *radix_tree_delete(struct radix_tree_root *, unsigned long);
unsigned int
radix_tree_gang_lookup(struct radix_tree_root *root, void **results,
   unsigned long first_index, unsigned int max_items);
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
# 235 "linux-2.6.18/include/linux/fs.h" 2
# 244 "linux-2.6.18/include/linux/fs.h"
struct hd_geometry;
struct iovec;
struct nameidata;
struct kiocb;
struct pipe_inode_info;
struct poll_table_struct;
struct kstatfs;
struct vm_area_struct;
struct vfsmount;

extern void  __attribute__ ((__section__ (".init.text"))) inode_init(unsigned long);
extern void  __attribute__ ((__section__ (".init.text"))) inode_init_early(void);
extern void  __attribute__ ((__section__ (".init.text"))) mnt_init(unsigned long);
extern void  __attribute__ ((__section__ (".init.text"))) files_init(unsigned long);

struct buffer_head;
typedef int (get_block_t)(struct inode *inode, sector_t iblock,
   struct buffer_head *bh_result, int create);
typedef void (dio_iodone_t)(struct kiocb *iocb, loff_t offset,
   ssize_t bytes, void *private);
# 293 "linux-2.6.18/include/linux/fs.h"
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




# 1 "linux-2.6.18/include/linux/quota.h" 1
# 44 "linux-2.6.18/include/linux/quota.h"
typedef __kernel_uid32_t qid_t;
typedef __u64 qsize_t;

typedef  spinlock_t  _GLOBAL_125_T; extern  _GLOBAL_125_T  global_dq_data_lock[NUM_STACKS];   
# 105 "linux-2.6.18/include/linux/quota.h"
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
# 126 "linux-2.6.18/include/linux/quota.h"
struct if_dqinfo {
 __u64 dqi_bgrace;
 __u64 dqi_igrace;
 __u32 dqi_flags;
 __u32 dqi_valid;
};





# 1 "linux-2.6.18/include/linux/dqblk_xfs.h" 1
# 50 "linux-2.6.18/include/linux/dqblk_xfs.h"
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
# 137 "linux-2.6.18/include/linux/dqblk_xfs.h"
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
# 138 "linux-2.6.18/include/linux/quota.h" 2
# 1 "linux-2.6.18/include/linux/dqblk_v1.h" 1
# 21 "linux-2.6.18/include/linux/dqblk_v1.h"
struct v1_mem_dqinfo {
};
# 139 "linux-2.6.18/include/linux/quota.h" 2
# 1 "linux-2.6.18/include/linux/dqblk_v2.h" 1
# 20 "linux-2.6.18/include/linux/dqblk_v2.h"
struct v2_mem_dqinfo {
 unsigned int dqi_blocks;
 unsigned int dqi_free_blk;
 unsigned int dqi_free_entry;
};
# 140 "linux-2.6.18/include/linux/quota.h" 2
# 151 "linux-2.6.18/include/linux/quota.h"
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
 struct list_head dqi_dirty_list;
 unsigned long dqi_flags;
 unsigned int dqi_bgrace;
 unsigned int dqi_igrace;
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

typedef  struct dqstats   _GLOBAL_126_T; extern  _GLOBAL_126_T  global_dqstats[NUM_STACKS];    
# 213 "linux-2.6.18/include/linux/quota.h"
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
 int (*quota_on)(struct super_block *, int, int, char *);
 int (*quota_off)(struct super_block *, int);
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




struct quota_info {
 unsigned int flags;
 struct mutex dqio_mutex;
 struct mutex dqonoff_mutex;
 struct rw_semaphore dqptr_sem;
 struct inode *files[2];
 struct mem_dqinfo info[2];
 struct quota_format_ops *ops[2];
};


int mark_dquot_dirty(struct dquot *dquot);
# 307 "linux-2.6.18/include/linux/quota.h"
int register_quota_format(struct quota_format_type *fmt);
void unregister_quota_format(struct quota_format_type *fmt);

struct quota_module_name {
 int qm_fmt_id;
 char *qm_mod_name;
};
# 315 "linux-2.6.18/include/linux/fs.h" 2
# 342 "linux-2.6.18/include/linux/fs.h"
enum positive_aop_returns {
 AOP_WRITEPAGE_ACTIVATE = 0x80000,
 AOP_TRUNCATED_PAGE = 0x80001,
};




struct page;
struct address_space;
struct writeback_control;

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

 sector_t (*bmap)(struct address_space *, sector_t);
 void (*invalidatepage) (struct page *, unsigned long);
 int (*releasepage) (struct page *, gfp_t);
 ssize_t (*direct_IO)(int, struct kiocb *, const struct iovec *iov,
   loff_t offset, unsigned long nr_segs);
 struct page* (*get_xip_page)(struct address_space *, sector_t,
   int);

 int (*migratepage) (struct address_space *,
   struct page *, struct page *);
};

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
 struct mutex bd_mount_mutex;
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
# 449 "linux-2.6.18/include/linux/fs.h"
enum bdev_bd_mutex_lock_class
{
 BD_MUTEX_NORMAL,
 BD_MUTEX_WHOLE,
 BD_MUTEX_PARTITION
};
# 464 "linux-2.6.18/include/linux/fs.h"
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
# 497 "linux-2.6.18/include/linux/fs.h"
struct inode {
 struct hlist_node i_hash;
 struct list_head i_list;
 struct list_head i_sb_list;
 struct list_head i_dentry;
 unsigned long i_ino;
 atomic_t i_count;
 umode_t i_mode;
 unsigned int i_nlink;
 uid_t i_uid;
 gid_t i_gid;
 dev_t i_rdev;
 loff_t i_size;
 struct timespec i_atime;
 struct timespec i_mtime;
 struct timespec i_ctime;
 unsigned int i_blkbits;
 unsigned long i_blksize;
 unsigned long i_version;
 blkcnt_t i_blocks;
 unsigned short i_bytes;
 spinlock_t i_lock;
 struct mutex i_mutex;
 struct rw_semaphore i_alloc_sem;
 struct inode_operations *i_op;
 const struct file_operations *i_fop;
 struct super_block *i_sb;
 struct file_lock *i_flock;
 struct address_space *i_mapping;
 struct address_space i_data;




 struct list_head i_devices;
 struct pipe_inode_info *i_pipe;
 struct block_device *i_bdev;
 struct cdev *i_cdev;
 int i_cindex;

 __u32 i_generation;
# 549 "linux-2.6.18/include/linux/fs.h"
 unsigned long i_state;
 unsigned long dirtied_when;

 unsigned int i_flags;

 atomic_t i_writecount;
 void *i_security;
 union {
  void *generic_ip;
 } u;



};
# 575 "linux-2.6.18/include/linux/fs.h"
enum inode_i_mutex_lock_class
{
 I_MUTEX_NORMAL,
 I_MUTEX_PARENT,
 I_MUTEX_CHILD,
 I_MUTEX_XATTR,
 I_MUTEX_QUOTA
};
# 594 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) loff_t i_size_read(struct inode *inode)
{
# 613 "linux-2.6.18/include/linux/fs.h"
 return inode->i_size;

}


static inline  __attribute__((always_inline)) void i_size_write(struct inode *inode, loff_t i_size)
{
# 629 "linux-2.6.18/include/linux/fs.h"
 inode->i_size = i_size;

}

static inline  __attribute__((always_inline)) unsigned iminor(struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) & ((1U << 20) - 1)));
}

static inline  __attribute__((always_inline)) unsigned imajor(struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) >> 20));
}

extern struct block_device *I_BDEV(struct inode *inode);

struct fown_struct {
 rwlock_t lock;
 int pid;
 uid_t uid, euid;
 void *security;
 int signum;
};




struct file_ra_state {
 unsigned long start;
 unsigned long size;
 unsigned long flags;
 unsigned long cache_hit;
 unsigned long prev_page;
 unsigned long ahead_start;
 unsigned long ahead_size;
 unsigned long ra_pages;
 unsigned long mmap_hit;
 unsigned long mmap_miss;
};



struct file {




 union {
  struct list_head fu_list;
  struct rcu_head fu_rcuhead;
 } f_u;
 struct dentry *f_dentry;
 struct vfsmount *f_vfsmnt;
 const struct file_operations *f_op;
 atomic_t f_count;
 unsigned int f_flags;
 mode_t f_mode;
 loff_t f_pos;
 struct fown_struct f_owner;
 unsigned int f_uid, f_gid;
 struct file_ra_state f_ra;

 unsigned long f_version;
 void *f_security;


 void *private_data;



 struct list_head f_ep_links;
 spinlock_t f_ep_lock;

 struct address_space *f_mapping;
};
typedef  spinlock_t  _GLOBAL_127_T; extern  _GLOBAL_127_T  global_files_lock[NUM_STACKS];   
# 736 "linux-2.6.18/include/linux/fs.h"
typedef struct files_struct *fl_owner_t;

struct file_lock_operations {
 void (*fl_insert)(struct file_lock *);
 void (*fl_remove)(struct file_lock *);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
};

struct lock_manager_operations {
 int (*fl_compare_owner)(struct file_lock *, struct file_lock *);
 void (*fl_notify)(struct file_lock *);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
 void (*fl_break)(struct file_lock *);
 int (*fl_mylease)(struct file_lock *, struct file_lock *);
 int (*fl_change)(struct file_lock **, int);
};


# 1 "linux-2.6.18/include/linux/nfs_fs_i.h" 1





# 1 "linux-2.6.18/include/linux/nfs.h" 1
# 39 "linux-2.6.18/include/linux/nfs.h"
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


# 1 "linux-2.6.18/include/linux/sunrpc/msg_prot.h" 1
# 15 "linux-2.6.18/include/linux/sunrpc/msg_prot.h"
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
 RPC_SYSTEM_ERR = 5
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
# 98 "linux-2.6.18/include/linux/sunrpc/msg_prot.h"
typedef u32 rpc_fraghdr;
# 131 "linux-2.6.18/include/linux/nfs.h" 2






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
 ({ size_t __len = (source->size); void *__ret; if (__builtin_constant_p(source->size) && __len >= 64) __ret = __memcpy((target->data),(source->data),__len); else __ret = __builtin_memcpy((target->data),(source->data),__len); __ret; });
}
# 165 "linux-2.6.18/include/linux/nfs.h"
enum nfs3_stable_how {
 NFS_UNSTABLE = 0,
 NFS_DATA_SYNC = 1,
 NFS_FILE_SYNC = 2
};
# 7 "linux-2.6.18/include/linux/nfs_fs_i.h" 2

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
# 757 "linux-2.6.18/include/linux/fs.h" 2

struct file_lock {
 struct file_lock *fl_next;
 struct list_head fl_link;
 struct list_head fl_block;
 fl_owner_t fl_owner;
 unsigned int fl_pid;
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
 } fl_u;
};
# 789 "linux-2.6.18/include/linux/fs.h"
# 1 "linux-2.6.18/include/linux/fcntl.h" 1



# 1 "linux-2.6.18/include/asm/fcntl.h" 1
# 1 "linux-2.6.18/include/asm-generic/fcntl.h" 1
# 114 "linux-2.6.18/include/asm-generic/fcntl.h"
struct flock {
 short l_type;
 short l_whence;
 off_t l_start;
 off_t l_len;
 pid_t l_pid;

};
# 137 "linux-2.6.18/include/asm-generic/fcntl.h"
struct flock64 {
 short l_type;
 short l_whence;
 loff_t l_start;
 loff_t l_len;
 pid_t l_pid;

};
# 1 "linux-2.6.18/include/asm/fcntl.h" 2
# 5 "linux-2.6.18/include/linux/fcntl.h" 2
# 790 "linux-2.6.18/include/linux/fs.h" 2

extern int fcntl_getlk(struct file *, struct flock *);
extern int fcntl_setlk(unsigned int, struct file *, unsigned int,
   struct flock *);







extern void send_sigio(struct fown_struct *fown, int fd, int band);
extern int fcntl_setlease(unsigned int fd, struct file *filp, long arg);
extern int fcntl_getlease(struct file *filp);


extern int do_sync_file_range(struct file *file, loff_t offset, loff_t endbyte,
   unsigned int flags);


extern void locks_init_lock(struct file_lock *);
extern void locks_copy_lock(struct file_lock *, struct file_lock *);
extern void locks_remove_posix(struct file *, fl_owner_t);
extern void locks_remove_flock(struct file *);
extern int posix_test_lock(struct file *, struct file_lock *, struct file_lock *);
extern int posix_lock_file_conf(struct file *, struct file_lock *, struct file_lock *);
extern int posix_lock_file(struct file *, struct file_lock *);
extern int posix_lock_file_wait(struct file *, struct file_lock *);
extern int posix_unblock_lock(struct file *, struct file_lock *);
extern int flock_lock_file_wait(struct file *filp, struct file_lock *fl);
extern int __break_lease(struct inode *inode, unsigned int flags);
extern void lease_get_mtime(struct inode *, struct timespec *time);
extern int setlease(struct file *, long, struct file_lock **);
extern int lease_modify(struct file_lock **, int);
extern int lock_may_read(struct inode *, loff_t start, unsigned long count);
extern int lock_may_write(struct inode *, loff_t start, unsigned long count);

struct fasync_struct {
 int magic;
 int fa_fd;
 struct fasync_struct *fa_next;
 struct file *fa_file;
};




extern int fasync_helper(int, struct file *, int, struct fasync_struct **);

extern void kill_fasync(struct fasync_struct **, int, int);

extern void __kill_fasync(struct fasync_struct *, int, int);

extern int f_setown(struct file *filp, unsigned long arg, int force);
extern void f_delown(struct file *filp);
extern int send_sigurg(struct fown_struct *fown);
# 855 "linux-2.6.18/include/linux/fs.h"
typedef  struct list_head   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_super_blocks[NUM_STACKS];    
typedef  spinlock_t  _GLOBAL_129_T; extern  _GLOBAL_129_T  global_sb_lock[NUM_STACKS];   



struct super_block {
 struct list_head s_list;
 dev_t s_dev;
 unsigned long s_blocksize;
 unsigned char s_blocksize_bits;
 unsigned char s_dirt;
 unsigned long long s_maxbytes;
 struct file_system_type *s_type;
 struct super_operations *s_op;
 struct dquot_operations *dq_op;
  struct quotactl_ops *s_qcop;
 struct export_operations *s_export_op;
 unsigned long s_flags;
 unsigned long s_magic;
 struct dentry *s_root;
 struct rw_semaphore s_umount;
 struct mutex s_lock;
 int s_count;
 int s_syncing;
 int s_need_sync_fs;
 atomic_t s_active;
 void *s_security;
 struct xattr_handler **s_xattr;

 struct list_head s_inodes;
 struct list_head s_dirty;
 struct list_head s_io;
 struct hlist_head s_anon;
 struct list_head s_files;

 struct block_device *s_bdev;
 struct list_head s_instances;
 struct quota_info s_dquot;

 int s_frozen;
 wait_queue_head_t s_wait_unfrozen;

 char s_id[32];

 void *s_fs_info;





 struct mutex s_vfs_rename_mutex;



 u32 s_time_gran;
};

extern struct timespec current_fs_time(struct super_block *sb);




enum {
 SB_UNFROZEN = 0,
 SB_FREEZE_WRITE = 1,
 SB_FREEZE_TRANS = 2,
};




static inline  __attribute__((always_inline)) void get_fs_excl(void)
{
 atomic_inc(&get_nsc_task()->fs_excl);
}

static inline  __attribute__((always_inline)) void put_fs_excl(void)
{
 atomic_dec(&get_nsc_task()->fs_excl);
}

static inline  __attribute__((always_inline)) int has_fs_excl(void)
{
 return ((&get_nsc_task()->fs_excl)->counter);
}





static inline  __attribute__((always_inline)) void lock_super(struct super_block * sb)
{
 get_fs_excl();
 mutex_lock(&sb->s_lock);
}

static inline  __attribute__((always_inline)) void unlock_super(struct super_block * sb)
{
 put_fs_excl();
 mutex_unlock(&sb->s_lock);
}




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
# 999 "linux-2.6.18/include/linux/fs.h"
int generic_osync_inode(struct inode *, struct address_space *, int);







typedef int (*filldir_t)(void *, const char *, int, loff_t, ino_t, unsigned);

struct block_device_operations {
 int (*open) (struct inode *, struct file *);
 int (*release) (struct inode *, struct file *);
 int (*ioctl) (struct inode *, struct file *, unsigned, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned, unsigned long);
 int (*direct_access) (struct block_device *, sector_t, unsigned long *);
 int (*media_changed) (struct gendisk *);
 int (*revalidate_disk) (struct gendisk *);
 int (*getgeo)(struct block_device *, struct hd_geometry *);
 struct module *owner;
};
# 1031 "linux-2.6.18/include/linux/fs.h"
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
# 1054 "linux-2.6.18/include/linux/fs.h"
struct file_operations {
 struct module *owner;
 loff_t (*llseek) (struct file *, loff_t, int);
 ssize_t (*read) (struct file *, char *, size_t, loff_t *);
 ssize_t (*aio_read) (struct kiocb *, char *, size_t, loff_t);
 ssize_t (*write) (struct file *, const char *, size_t, loff_t *);
 ssize_t (*aio_write) (struct kiocb *, const char *, size_t, loff_t);
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
 ssize_t (*readv) (struct file *, const struct iovec *, unsigned long, loff_t *);
 ssize_t (*writev) (struct file *, const struct iovec *, unsigned long, loff_t *);
 ssize_t (*sendfile) (struct file *, loff_t *, size_t, read_actor_t, void *);
 ssize_t (*sendpage) (struct file *, struct page *, int, size_t, loff_t *, int);
 unsigned long (*get_unmapped_area)(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
 int (*check_flags)(int);
 int (*dir_notify)(struct file *filp, unsigned long arg);
 int (*flock) (struct file *, int, struct file_lock *);
 ssize_t (*splice_write)(struct pipe_inode_info *, struct file *, loff_t *, size_t, unsigned int);
 ssize_t (*splice_read)(struct file *, loff_t *, struct pipe_inode_info *, size_t, unsigned int);
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
};

struct seq_file;

extern ssize_t vfs_read(struct file *, char *, size_t, loff_t *);
extern ssize_t vfs_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t vfs_readv(struct file *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t vfs_writev(struct file *, const struct iovec *,
  unsigned long, loff_t *);





struct super_operations {
    struct inode *(*alloc_inode)(struct super_block *sb);
 void (*destroy_inode)(struct inode *);

 void (*read_inode) (struct inode *);

    void (*dirty_inode) (struct inode *);
 int (*write_inode) (struct inode *, int);
 void (*put_inode) (struct inode *);
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
 void (*umount_begin) (struct vfsmount *, int);

 int (*show_options)(struct seq_file *, struct vfsmount *);
 int (*show_stats)(struct seq_file *, struct vfsmount *);

 ssize_t (*quota_read)(struct super_block *, int, char *, size_t, loff_t);
 ssize_t (*quota_write)(struct super_block *, int, const char *, size_t, loff_t);
};
# 1165 "linux-2.6.18/include/linux/fs.h"
extern void __mark_inode_dirty(struct inode *, int);
static inline  __attribute__((always_inline)) void mark_inode_dirty(struct inode *inode)
{
 __mark_inode_dirty(inode, (1 | 2 | 4));
}

static inline  __attribute__((always_inline)) void mark_inode_dirty_sync(struct inode *inode)
{
 __mark_inode_dirty(inode, 1);
}

static inline  __attribute__((always_inline)) void inode_inc_link_count(struct inode *inode)
{
 inode->i_nlink++;
 mark_inode_dirty(inode);
}

static inline  __attribute__((always_inline)) void inode_dec_link_count(struct inode *inode)
{
 inode->i_nlink--;
 mark_inode_dirty(inode);
}

extern void touch_atime(struct vfsmount *mnt, struct dentry *dentry);
static inline  __attribute__((always_inline)) void file_accessed(struct file *file)
{
 if (!(file->f_flags & 01000000))
  touch_atime(file->f_vfsmnt, file->f_dentry);
}

int sync_inode(struct inode *inode, struct writeback_control *wbc);
# 1283 "linux-2.6.18/include/linux/fs.h"
struct export_operations {
 struct dentry *(*decode_fh)(struct super_block *sb, __u32 *fh, int fh_len, int fh_type,
    int (*acceptable)(void *context, struct dentry *de),
    void *context);
 int (*encode_fh)(struct dentry *de, __u32 *fh, int *max_len,
    int connectable);


 int (*get_name)(struct dentry *parent, char *name,
   struct dentry *child);
 struct dentry * (*get_parent)(struct dentry *child);
 struct dentry * (*get_dentry)(struct super_block *sb, void *inump);


 struct dentry * (*find_exported_dentry)(
  struct super_block *sb, void *obj, void *parent,
  int (*acceptable)(void *context, struct dentry *de),
  void *context);


};

extern struct dentry *
find_exported_dentry(struct super_block *sb, void *obj, void *parent,
       int (*acceptable)(void *context, struct dentry *de),
       void *context);

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
 struct super_operations *ops, unsigned long,
 struct vfsmount *mnt);
extern int simple_set_mnt(struct vfsmount *mnt, struct super_block *sb);
int __put_super(struct super_block *sb);
int __put_super_and_need_restart(struct super_block *sb);
void unnamed_dev_init(void);







extern int register_filesystem(struct file_system_type *);
extern int unregister_filesystem(struct file_system_type *);
extern struct vfsmount *kern_mount(struct file_system_type *);
extern int may_umount_tree(struct vfsmount *);
extern int may_umount(struct vfsmount *);
extern void umount_tree(struct vfsmount *, int, struct list_head *);
extern void release_mounts(struct list_head *);
extern long do_mount(char *, char *, char *, unsigned long, void *);
extern struct vfsmount *copy_tree(struct vfsmount *, struct dentry *, int);
extern void mnt_set_mountpoint(struct vfsmount *, struct dentry *,
      struct vfsmount *);

extern int vfs_statfs(struct dentry *, struct kstatfs *);


typedef  struct subsystem   _GLOBAL_130_T; extern  _GLOBAL_130_T  global_fs_subsys[NUM_STACKS];    




extern int locks_mandatory_locked(struct inode *);
extern int locks_mandatory_area(int, struct inode *, struct file *, loff_t, size_t);
# 1389 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) int locks_verify_locked(struct inode *inode)
{
 if ((((inode)->i_sb->s_flags & (64)) && ((inode)->i_mode & (0002000 | 00010)) == 0002000))
  return locks_mandatory_locked(inode);
 return 0;
}

extern int rw_verify_area(int, struct file *, loff_t *, size_t);

static inline  __attribute__((always_inline)) int locks_verify_truncate(struct inode *inode,
        struct file *filp,
        loff_t size)
{
 if (inode->i_flock && (((inode)->i_sb->s_flags & (64)) && ((inode)->i_mode & (0002000 | 00010)) == 0002000))
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
extern long do_sys_open(int fdf, const char *filename, int flags,
   int mode);
extern struct file *filp_open(const char *, int, int);
extern struct file * dentry_open(struct dentry *, struct vfsmount *, int);
extern int filp_close(struct file *, fl_owner_t id);
extern char * getname(const char *);


extern void  __attribute__ ((__section__ (".init.text"))) vfs_caches_init_early(void);
extern void  __attribute__ ((__section__ (".init.text"))) vfs_caches_init(unsigned long);
# 1442 "linux-2.6.18/include/linux/fs.h"
extern int register_blkdev(unsigned int, const char *);
extern int unregister_blkdev(unsigned int, const char *);
extern struct block_device *bdget(dev_t);
extern void bd_set_size(struct block_device *, loff_t size);
extern void bd_forget(struct inode *inode);
extern void bdput(struct block_device *);
extern struct block_device *open_by_devnum(dev_t, unsigned);
extern struct block_device *open_partition_by_devnum(dev_t, unsigned);
typedef  const struct file_operations    _GLOBAL_131_T; extern  _GLOBAL_131_T  global_def_blk_fops[NUM_STACKS];     
typedef  const struct address_space_operations    _GLOBAL_132_T; extern  _GLOBAL_132_T  global_def_blk_aops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_133_T; extern  _GLOBAL_133_T  global_def_chr_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_134_T; extern  _GLOBAL_134_T  global_bad_sock_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_135_T; extern  _GLOBAL_135_T  global_def_fifo_fops[NUM_STACKS];     
extern int ioctl_by_bdev(struct block_device *, unsigned, unsigned long);
extern int blkdev_ioctl(struct inode *, struct file *, unsigned, unsigned long);
extern long compat_blkdev_ioctl(struct file *, unsigned, unsigned long);
extern int blkdev_get(struct block_device *, mode_t, unsigned);
extern int blkdev_put(struct block_device *);
extern int blkdev_put_partition(struct block_device *);
extern int bd_claim(struct block_device *, void *);
extern void bd_release(struct block_device *);
# 1473 "linux-2.6.18/include/linux/fs.h"
extern int alloc_chrdev_region(dev_t *, unsigned, unsigned, const char *);
extern int register_chrdev_region(dev_t, unsigned, const char *);
extern int register_chrdev(unsigned int, const char *,
      const struct file_operations *);
extern int unregister_chrdev(unsigned int, const char *);
extern void unregister_chrdev_region(dev_t, unsigned);
extern int chrdev_open(struct inode *, struct file *);
extern void chrdev_show(struct seq_file *,off_t);




extern const char *__bdevname(dev_t, char *buffer);
extern const char *bdevname(struct block_device *bdev, char *buffer);
extern struct block_device *lookup_bdev(const char *);
extern struct block_device *open_bdev_excl(const char *, int, void *);
extern void close_bdev_excl(struct block_device *);
extern void blkdev_show(struct seq_file *,off_t);

extern void init_special_inode(struct inode *, umode_t, dev_t);


extern void make_bad_inode(struct inode *);
extern int is_bad_inode(struct inode *);

typedef  const struct file_operations    _GLOBAL_136_T; extern  _GLOBAL_136_T  global_read_fifo_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_137_T; extern  _GLOBAL_137_T  global_write_fifo_fops[NUM_STACKS];     
typedef  const struct file_operations    _GLOBAL_138_T; extern  _GLOBAL_138_T  global_rdwr_fifo_fops[NUM_STACKS];     

extern int fs_may_remount_ro(struct super_block *);
# 1514 "linux-2.6.18/include/linux/fs.h"
extern int check_disk_change(struct block_device *);
extern int invalidate_inodes(struct super_block *);
extern int __invalidate_device(struct block_device *);
extern int invalidate_partition(struct gendisk *, int);
unsigned long invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end);
unsigned long invalidate_inode_pages(struct address_space *mapping);
static inline  __attribute__((always_inline)) void invalidate_remote_inode(struct inode *inode)
{
 if ((((inode->i_mode) & 00170000) == 0100000) || (((inode->i_mode) & 00170000) == 0040000) ||
     (((inode->i_mode) & 00170000) == 0120000))
  invalidate_inode_pages(inode->i_mapping);
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
extern void emergency_sync(void);
extern void emergency_remount(void);
extern int do_remount_sb(struct super_block *sb, int flags,
    void *data, int force);
extern sector_t bmap(struct inode *, sector_t);
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
  atomic_inc(&file->f_dentry->d_inode->i_writecount);
}
extern int do_pipe(int *);

extern int open_namei(int dfd, const char *, int, int, struct nameidata *);
extern int may_open(struct nameidata *, int, int);

extern int kernel_read(struct file *, unsigned long, char *, unsigned long);
extern struct file * open_exec(const char *);


extern int is_subdir(struct dentry *, struct dentry *);
extern ino_t find_inode_number(struct dentry *, struct qstr *);

# 1 "linux-2.6.18/include/linux/err.h" 1
# 20 "linux-2.6.18/include/linux/err.h"
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
# 1579 "linux-2.6.18/include/linux/fs.h" 2


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

static inline  __attribute__((always_inline)) struct inode *iget(struct super_block *sb, unsigned long ino)
{
 struct inode *inode = iget_locked(sb, ino);

 if (inode && (inode->i_state & 64)) {
  sb->s_op->read_inode(inode);
  unlock_new_inode(inode);
 }

 return inode;
}

extern void __iget(struct inode * inode);
extern void clear_inode(struct inode *);
extern void destroy_inode(struct inode *);
extern struct inode *new_inode(struct super_block *);
extern int remove_suid(struct dentry *);
extern void remove_dquot_ref(struct super_block *, int, struct list_head *);

extern void __insert_inode_hash(struct inode *, unsigned long hashval);
extern void remove_inode_hash(struct inode *);
static inline  __attribute__((always_inline)) void insert_inode_hash(struct inode *inode) {
 __insert_inode_hash(inode, inode->i_ino);
}

extern struct file * get_empty_filp(void);
extern void file_move(struct file *f, struct list_head *list);
extern void file_kill(struct file *f);
struct bio;
extern void submit_bio(int, struct bio *);
extern int bdev_read_only(struct block_device *);
extern int set_blocksize(struct block_device *, int);
extern int sb_set_blocksize(struct super_block *, int);
extern int sb_min_blocksize(struct super_block *, int);

extern int generic_file_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_readonly_mmap(struct file *, struct vm_area_struct *);
extern int file_read_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
extern int file_send_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
extern ssize_t generic_file_read(struct file *, char *, size_t, loff_t *);
int generic_write_checks(struct file *file, loff_t *pos, size_t *count, int isblk);
extern ssize_t generic_file_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t generic_file_aio_read(struct kiocb *, char *, size_t, loff_t);
extern ssize_t __generic_file_aio_read(struct kiocb *, const struct iovec *, unsigned long, loff_t *);
extern ssize_t generic_file_aio_write(struct kiocb *, const char *, size_t, loff_t);
extern ssize_t generic_file_aio_write_nolock(struct kiocb *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t generic_file_direct_write(struct kiocb *, const struct iovec *,
  unsigned long *, loff_t, loff_t *, size_t, size_t);
extern ssize_t generic_file_buffered_write(struct kiocb *, const struct iovec *,
  unsigned long, loff_t, loff_t *, size_t, ssize_t);
extern ssize_t do_sync_read(struct file *filp, char *buf, size_t len, loff_t *ppos);
extern ssize_t do_sync_write(struct file *filp, const char *buf, size_t len, loff_t *ppos);
ssize_t generic_file_write_nolock(struct file *file, const struct iovec *iov,
    unsigned long nr_segs, loff_t *ppos);
extern ssize_t generic_file_sendfile(struct file *, loff_t *, size_t, read_actor_t, void *);
extern void do_generic_mapping_read(struct address_space *mapping,
        struct file_ra_state *, struct file *,
        loff_t *, read_descriptor_t *, read_actor_t);


extern ssize_t generic_file_splice_read(struct file *, loff_t *,
  struct pipe_inode_info *, size_t, unsigned int);
extern ssize_t generic_file_splice_write(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_splice_sendpage(struct pipe_inode_info *pipe,
  struct file *out, loff_t *, size_t len, unsigned int flags);
extern long do_splice_direct(struct file *in, loff_t *ppos, struct file *out,
  size_t len, unsigned int flags);

extern void
file_ra_state_init(struct file_ra_state *ra, struct address_space *mapping);
extern ssize_t generic_file_readv(struct file *filp, const struct iovec *iov,
 unsigned long nr_segs, loff_t *ppos);
ssize_t generic_file_writev(struct file *filp, const struct iovec *iov,
   unsigned long nr_segs, loff_t *ppos);
extern loff_t no_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek(struct file *file, loff_t offset, int origin);
extern loff_t remote_llseek(struct file *file, loff_t offset, int origin);
extern int generic_file_open(struct inode * inode, struct file * filp);
extern int nonseekable_open(struct inode * inode, struct file * filp);
# 1697 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) int xip_truncate_page(struct address_space *mapping, loff_t from)
{
 return 0;
}


static inline  __attribute__((always_inline)) void do_generic_file_read(struct file * filp, loff_t *ppos,
     read_descriptor_t * desc,
     read_actor_t actor)
{
 do_generic_mapping_read(filp->f_mapping,
    &filp->f_ra,
    filp,
    ppos,
    desc,
    actor);
}

ssize_t __blockdev_direct_IO(int rw, struct kiocb *iocb, struct inode *inode,
 struct block_device *bdev, const struct iovec *iov, loff_t offset,
 unsigned long nr_segs, get_block_t get_block, dio_iodone_t end_io,
 int lock_type);

enum {
 DIO_LOCKING = 1,
 DIO_NO_LOCKING,
 DIO_OWN_LOCKING,
};

static inline  __attribute__((always_inline)) ssize_t blockdev_direct_IO(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_LOCKING);
}

static inline  __attribute__((always_inline)) ssize_t blockdev_direct_IO_no_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_NO_LOCKING);
}

static inline  __attribute__((always_inline)) ssize_t blockdev_direct_IO_own_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_OWN_LOCKING);
}

typedef  const struct file_operations    _GLOBAL_139_T; extern  _GLOBAL_139_T  global_generic_ro_fops[NUM_STACKS];     



extern int vfs_readlink(struct dentry *, char *, int, const char *);
extern int vfs_follow_link(struct nameidata *, const char *);
extern int page_readlink(struct dentry *, char *, int);
extern void *page_follow_link_light(struct dentry *, struct nameidata *);
extern void page_put_link(struct dentry *, struct nameidata *, void *);
extern int __page_symlink(struct inode *inode, const char *symname, int len,
  gfp_t gfp_mask);
extern int page_symlink(struct inode *inode, const char *symname, int len);
typedef  struct inode_operations   _GLOBAL_140_T; extern  _GLOBAL_140_T  global_page_symlink_inode_operations[NUM_STACKS];    
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

extern int vfs_ioctl(struct file *, unsigned int, unsigned int, unsigned long);

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
extern int simple_commit_write(struct file *file, struct page *page,
    unsigned offset, unsigned to);

extern struct dentry *simple_lookup(struct inode *, struct dentry *, struct nameidata *);
extern ssize_t generic_read_dir(struct file *, char *, size_t, loff_t *);
typedef  const struct file_operations    _GLOBAL_141_T; extern  _GLOBAL_141_T  global_simple_dir_operations[NUM_STACKS];     
typedef  struct inode_operations   _GLOBAL_142_T; extern  _GLOBAL_142_T  global_simple_dir_inode_operations[NUM_STACKS];    
struct tree_descr { char *name; const struct file_operations *ops; int mode; };
struct dentry *d_alloc_name(struct dentry *, const char *);
extern int simple_fill_super(struct super_block *, int, struct tree_descr *);
extern int simple_pin_fs(struct file_system_type *, struct vfsmount **mount, int *count);
extern void simple_release_fs(struct vfsmount **mount, int *count);

extern ssize_t simple_read_from_buffer(void *, size_t, loff_t *, const void *, size_t);
# 1826 "linux-2.6.18/include/linux/fs.h"
extern int inode_change_ok(struct inode *, struct iattr *);
extern int  __attribute__((warn_unused_result)) inode_setattr(struct inode *, struct iattr *);

extern void file_update_time(struct file *file);

static inline  __attribute__((always_inline)) ino_t parent_ino(struct dentry *dentry)
{
 ino_t res;

 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 res = dentry->d_parent->d_inode->i_ino;
 do { do { } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 return res;
}


extern int unshare_files(void);







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

 do { if (n > ((1UL << 12) - sizeof(struct simple_transaction_argresp))) ; } while(0);





 __asm__ __volatile__("": : :"memory");
 ar->size = n;
}
# 1907 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) void 
__attribute__((format(printf, 1, 2))) __simple_attr_check_format(const char *fmt, ...)
{

}

int simple_attr_open(struct inode *inode, struct file *file,
       u64 (*get)(void *), void (*set)(void *, u64),
       const char *fmt);
int simple_attr_close(struct inode *inode, struct file *file);
ssize_t simple_attr_read(struct file *file, char *buf,
    size_t len, loff_t *ppos);
ssize_t simple_attr_write(struct file *file, const char *buf,
     size_t len, loff_t *ppos);
# 1934 "linux-2.6.18/include/linux/fs.h"
static inline  __attribute__((always_inline)) char *alloc_secdata(void)
{
 return (char *)1;
}

static inline  __attribute__((always_inline)) void free_secdata(void *secdata)
{ }
# 16 "linux-2.6.18/include/linux/mm.h" 2



struct mempolicy;
struct anon_vma;


typedef  unsigned long   _GLOBAL_143_T; extern  _GLOBAL_143_T  global_max_mapnr[NUM_STACKS];    


typedef  unsigned long   _GLOBAL_144_T; extern  _GLOBAL_144_T  global_num_physpages[NUM_STACKS];    
typedef  void  _GLOBAL_145_T; extern  _GLOBAL_145_T  * global_high_memory[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_146_T; extern  _GLOBAL_146_T  global_vmalloc_earlyreserve[NUM_STACKS];    
typedef  int  _GLOBAL_147_T; extern  _GLOBAL_147_T  global_page_cluster[NUM_STACKS];   


typedef  int  _GLOBAL_148_T; extern  _GLOBAL_148_T  global_sysctl_legacy_va_layout[NUM_STACKS];   





# 1 "linux-2.6.18/include/asm/pgtable.h" 1
# 9 "linux-2.6.18/include/asm/pgtable.h"
# 1 "linux-2.6.18/include/asm/fixmap.h" 1
# 15 "linux-2.6.18/include/asm/fixmap.h"
# 1 "linux-2.6.18/include/asm/apicdef.h" 1
# 140 "linux-2.6.18/include/asm/apicdef.h"
struct local_apic {

        struct { unsigned int __reserved[4]; } __reserved_01;

        struct { unsigned int __reserved[4]; } __reserved_02;

        struct {
  unsigned int __reserved_1 : 24,
   phys_apic_id : 4,
   __reserved_2 : 4;
  unsigned int __reserved[3];
 } id;

        const
 struct {
  unsigned int version : 8,
   __reserved_1 : 8,
   max_lvt : 8,
   __reserved_2 : 8;
  unsigned int __reserved[3];
 } version;

        struct { unsigned int __reserved[4]; } __reserved_03;

        struct { unsigned int __reserved[4]; } __reserved_04;

        struct { unsigned int __reserved[4]; } __reserved_05;

        struct { unsigned int __reserved[4]; } __reserved_06;

        struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } tpr;

        const
 struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } apr;

        const
 struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } ppr;

        struct {
  unsigned int eoi;
  unsigned int __reserved[3];
 } eoi;

        struct { unsigned int __reserved[4]; } __reserved_07;

        struct {
  unsigned int __reserved_1 : 24,
   logical_dest : 8;
  unsigned int __reserved_2[3];
 } ldr;

        struct {
  unsigned int __reserved_1 : 28,
   model : 4;
  unsigned int __reserved_2[3];
 } dfr;

        struct {
  unsigned int spurious_vector : 8,
   apic_enabled : 1,
   focus_cpu : 1,
   __reserved_2 : 22;
  unsigned int __reserved_3[3];
 } svr;

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } isr [8];

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } tmr [8];

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } irr [8];

        union {
  struct {
   unsigned int send_cs_error : 1,
    receive_cs_error : 1,
    send_accept_error : 1,
    receive_accept_error : 1,
    __reserved_1 : 1,
    send_illegal_vector : 1,
    receive_illegal_vector : 1,
    illegal_register_address : 1,
    __reserved_2 : 24;
   unsigned int __reserved_3[3];
  } error_bits;
  struct {
   unsigned int errors;
   unsigned int __reserved_3[3];
  } all_errors;
 } esr;

        struct { unsigned int __reserved[4]; } __reserved_08;

        struct { unsigned int __reserved[4]; } __reserved_09;

        struct { unsigned int __reserved[4]; } __reserved_10;

        struct { unsigned int __reserved[4]; } __reserved_11;

        struct { unsigned int __reserved[4]; } __reserved_12;

        struct { unsigned int __reserved[4]; } __reserved_13;

        struct { unsigned int __reserved[4]; } __reserved_14;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   destination_mode : 1,
   delivery_status : 1,
   __reserved_1 : 1,
   level : 1,
   trigger : 1,
   __reserved_2 : 2,
   shorthand : 2,
   __reserved_3 : 12;
  unsigned int __reserved_4[3];
 } icr1;

        struct {
  union {
   unsigned int __reserved_1 : 24,
    phys_dest : 4,
    __reserved_2 : 4;
   unsigned int __reserved_3 : 24,
    logical_dest : 8;
  } dest;
  unsigned int __reserved_4[3];
 } icr2;

        struct {
  unsigned int vector : 8,
   __reserved_1 : 4,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   timer_mode : 1,
   __reserved_3 : 14;
  unsigned int __reserved_4[3];
 } lvt_timer;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_thermal;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_pc;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   polarity : 1,
   remote_irr : 1,
   trigger : 1,
   mask : 1,
   __reserved_2 : 15;
  unsigned int __reserved_3[3];
 } lvt_lint0;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   polarity : 1,
   remote_irr : 1,
   trigger : 1,
   mask : 1,
   __reserved_2 : 15;
  unsigned int __reserved_3[3];
 } lvt_lint1;

        struct {
  unsigned int vector : 8,
   __reserved_1 : 4,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_error;

        struct {
  unsigned int initial_count;
  unsigned int __reserved_2[3];
 } timer_icr;

        const
 struct {
  unsigned int curr_count;
  unsigned int __reserved_2[3];
 } timer_ccr;

        struct { unsigned int __reserved[4]; } __reserved_16;

        struct { unsigned int __reserved[4]; } __reserved_17;

        struct { unsigned int __reserved[4]; } __reserved_18;

        struct { unsigned int __reserved[4]; } __reserved_19;

        struct {
  unsigned int divisor : 4,
   __reserved_1 : 28;
  unsigned int __reserved_2[3];
 } timer_dcr;

        struct { unsigned int __reserved[4]; } __reserved_20;

} __attribute__ ((packed)) ;
# 16 "linux-2.6.18/include/asm/fixmap.h" 2


# 1 "linux-2.6.18/include/asm/vsyscall32.h" 1
# 19 "linux-2.6.18/include/asm/fixmap.h" 2
# 35 "linux-2.6.18/include/asm/fixmap.h"
enum fixed_addresses {
 VSYSCALL_LAST_PAGE,
 VSYSCALL_FIRST_PAGE = VSYSCALL_LAST_PAGE + (((-2UL << 20)-(-10UL << 20)) >> 12) - 1,
 VSYSCALL_HPET,
 FIX_HPET_BASE,

 FIX_APIC_BASE,


 FIX_IO_APIC_BASE_0,
 FIX_IO_APIC_BASE_END = FIX_IO_APIC_BASE_0 + 128 -1,

 __end_of_fixed_addresses
};

extern void __set_fixmap (enum fixed_addresses idx,
     unsigned long phys, pgprot_t flags);
# 71 "linux-2.6.18/include/asm/fixmap.h"
extern void __this_fixmap_does_not_exist(void);






static inline   __attribute__((always_inline)) __attribute__((always_inline)) unsigned long fix_to_virt(const unsigned int idx)
{
# 89 "linux-2.6.18/include/asm/fixmap.h"
 if (idx >= __end_of_fixed_addresses)
  __this_fixmap_does_not_exist();

        return (((-2UL << 20)-(1UL << 12)) - ((idx) << 12));
}
# 10 "linux-2.6.18/include/asm/pgtable.h" 2




typedef  pud_t  _GLOBAL_149_T; extern  _GLOBAL_149_T  _GLOBAL_0_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_1_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_2_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_3_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_4_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_5_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_6_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_7_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_8_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_9_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_10_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_11_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_12_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_13_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_14_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_15_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_16_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_17_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_18_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_19_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_20_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_21_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_22_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_23_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_24_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_25_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_26_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_27_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_28_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_29_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_30_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_31_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_32_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_33_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_34_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_35_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_36_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_37_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_38_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_39_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_40_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_41_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_42_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_43_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_44_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_45_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_46_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_47_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_48_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_149_T  _GLOBAL_49_level3_kernel_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level3_kernel_pgt_I) *_GLOBAL_level3_kernel_pgt_14_A[NUM_STACKS];  
typedef  pud_t  _GLOBAL_150_T; extern  _GLOBAL_150_T  _GLOBAL_0_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_1_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_2_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_3_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_4_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_5_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_6_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_7_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_8_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_9_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_10_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_11_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_12_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_13_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_14_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_15_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_16_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_17_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_18_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_19_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_20_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_21_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_22_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_23_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_24_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_25_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_26_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_27_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_28_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_29_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_30_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_31_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_32_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_33_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_34_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_35_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_36_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_37_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_38_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_39_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_40_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_41_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_42_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_43_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_44_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_45_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_46_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_47_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_48_level3_physmem_pgt_I [ 512 ] ; extern  _GLOBAL_150_T  _GLOBAL_49_level3_physmem_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level3_physmem_pgt_I) *_GLOBAL_level3_physmem_pgt_15_A[NUM_STACKS];  
typedef  pud_t  _GLOBAL_151_T; extern  _GLOBAL_151_T  _GLOBAL_0_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_1_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_2_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_3_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_4_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_5_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_6_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_7_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_8_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_9_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_10_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_11_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_12_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_13_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_14_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_15_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_16_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_17_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_18_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_19_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_20_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_21_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_22_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_23_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_24_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_25_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_26_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_27_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_28_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_29_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_30_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_31_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_32_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_33_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_34_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_35_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_36_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_37_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_38_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_39_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_40_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_41_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_42_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_43_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_44_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_45_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_46_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_47_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_48_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_151_T  _GLOBAL_49_level3_ident_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level3_ident_pgt_I) *_GLOBAL_level3_ident_pgt_16_A[NUM_STACKS];  
typedef  pmd_t  _GLOBAL_152_T; extern  _GLOBAL_152_T  _GLOBAL_0_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_1_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_2_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_3_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_4_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_5_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_6_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_7_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_8_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_9_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_10_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_11_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_12_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_13_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_14_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_15_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_16_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_17_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_18_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_19_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_20_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_21_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_22_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_23_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_24_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_25_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_26_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_27_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_28_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_29_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_30_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_31_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_32_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_33_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_34_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_35_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_36_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_37_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_38_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_39_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_40_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_41_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_42_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_43_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_44_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_45_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_46_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_47_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_48_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_152_T  _GLOBAL_49_level2_kernel_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level2_kernel_pgt_I) *_GLOBAL_level2_kernel_pgt_17_A[NUM_STACKS];  
typedef  pgd_t  _GLOBAL_153_T; extern  _GLOBAL_153_T  _GLOBAL_0_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_1_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_2_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_3_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_4_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_5_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_6_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_7_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_8_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_9_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_10_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_11_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_12_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_13_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_14_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_15_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_16_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_17_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_18_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_19_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_20_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_21_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_22_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_23_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_24_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_25_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_26_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_27_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_28_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_29_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_30_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_31_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_32_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_33_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_34_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_35_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_36_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_37_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_38_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_39_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_40_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_41_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_42_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_43_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_44_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_45_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_46_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_47_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_48_init_level4_pgt_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_49_init_level4_pgt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_init_level4_pgt_I) *_GLOBAL_init_level4_pgt_18_A[NUM_STACKS];  
typedef  pgd_t  _GLOBAL_154_T; extern  _GLOBAL_154_T  _GLOBAL_0_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_1_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_2_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_3_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_4_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_5_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_6_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_7_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_8_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_9_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_10_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_11_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_12_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_13_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_14_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_15_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_16_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_17_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_18_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_19_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_20_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_21_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_22_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_23_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_24_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_25_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_26_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_27_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_28_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_29_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_30_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_31_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_32_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_33_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_34_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_35_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_36_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_37_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_38_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_39_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_40_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_41_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_42_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_43_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_44_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_45_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_46_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_47_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_48_boot_level4_pgt_I [ ] ; extern  _GLOBAL_154_T  _GLOBAL_49_boot_level4_pgt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_level4_pgt_I) *_GLOBAL_boot_level4_pgt_19_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_155_T; extern  _GLOBAL_155_T  global___supported_pte_mask[NUM_STACKS];    



extern int nonx_setup(char *str);
extern void paging_init(void);
extern void clear_kernel_mapping(unsigned long addr, unsigned long size);

typedef  unsigned long   _GLOBAL_156_T; extern  _GLOBAL_156_T  global_pgkern_mask[NUM_STACKS];    





typedef  unsigned long   _GLOBAL_157_T; extern  _GLOBAL_157_T  _GLOBAL_0_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_1_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_2_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_3_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_4_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_5_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_6_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_7_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_8_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_9_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_10_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_11_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_12_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_13_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_14_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_15_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_16_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_17_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_18_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_19_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_20_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_21_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_22_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_23_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_24_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_25_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_26_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_27_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_28_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_29_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_30_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_31_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_32_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_33_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_34_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_35_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_36_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_37_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_38_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_39_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_40_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_41_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_42_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_43_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_44_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_45_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_46_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_47_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_48_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; extern  _GLOBAL_157_T  _GLOBAL_49_empty_zero_page_I [ ( 1UL << 12  )  / sizeof ( unsigned long  )   ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_empty_zero_page_I) *_GLOBAL_empty_zero_page_20_A[NUM_STACKS];      
# 73 "linux-2.6.18/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) void set_pte(pte_t *dst, pte_t val)
{
 ((*dst).pte) = ((val).pte);
}


static inline  __attribute__((always_inline)) void set_pmd(pmd_t *dst, pmd_t val)
{
        ((*dst).pmd) = ((val).pmd);
}

static inline  __attribute__((always_inline)) void set_pud(pud_t *dst, pud_t val)
{
 ((*dst).pud) = ((val).pud);
}

static inline  __attribute__((always_inline)) void pud_clear (pud_t *pud)
{
 set_pud(pud, ((pud_t) { (0) } ));
}

static inline  __attribute__((always_inline)) void set_pgd(pgd_t *dst, pgd_t val)
{
 ((*dst).pgd) = ((val).pgd);
}

static inline  __attribute__((always_inline)) void pgd_clear (pgd_t * pgd)
{
 set_pgd(pgd, ((pgd_t) { (0) } ));
}






struct mm_struct;

static inline  __attribute__((always_inline)) pte_t ptep_get_and_clear_full(struct mm_struct *mm, unsigned long addr, pte_t *ptep, int full)
{
 pte_t pte;
 if (full) {
  pte = *ptep;
  *ptep = ((pte_t) { (0) } );
 } else {
  pte = ((pte_t) { (((__typeof__(*(&(ptep)->pte)))__xchg((unsigned long)(0),(&(ptep)->pte),sizeof(*(&(ptep)->pte))))) } );
 }
 return pte;
}
# 230 "linux-2.6.18/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) unsigned long pgd_bad(pgd_t pgd)
{
       unsigned long val = ((pgd).pgd);
       val &= ~(~((1UL << 12)-1) & ((1UL << 46) - 1));
       val &= ~(0x004 | 0x040);
       return val & ~(0x001 | 0x002 | 0x020);
}

static inline  __attribute__((always_inline)) unsigned long pud_bad(pud_t pud)
{
       unsigned long val = ((pud).pud);
       val &= ~(~((1UL << 12)-1) & ((1UL << 46) - 1));
       val &= ~(0x004 | 0x040);
       return val & ~(0x001 | 0x002 | 0x020);
}
# 255 "linux-2.6.18/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) pte_t pfn_pte(unsigned long page_nr, pgprot_t pgprot)
{
 pte_t pte;
 ((pte).pte) = (page_nr << 12);
 ((pte).pte) |= ((pgprot).pgprot);
 ((pte).pte) &= global___supported_pte_mask[get_stack_id()];
 return pte;
}






static inline  __attribute__((always_inline)) int pte_user(pte_t pte) { return ((pte).pte) & 0x004; }
static inline  __attribute__((always_inline)) int pte_read(pte_t pte) { return ((pte).pte) & 0x004; }
static inline  __attribute__((always_inline)) int pte_exec(pte_t pte) { return ((pte).pte) & 0x004; }
static inline  __attribute__((always_inline)) int pte_dirty(pte_t pte) { return ((pte).pte) & 0x040; }
static inline  __attribute__((always_inline)) int pte_young(pte_t pte) { return ((pte).pte) & 0x020; }
static inline  __attribute__((always_inline)) int pte_write(pte_t pte) { return ((pte).pte) & 0x002; }
static inline  __attribute__((always_inline)) int pte_file(pte_t pte) { return ((pte).pte) & 0x040; }
static inline  __attribute__((always_inline)) int pte_huge(pte_t pte) { return ((pte).pte) & 0x080; }

static inline  __attribute__((always_inline)) pte_t pte_rdprotect(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~0x004) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_exprotect(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~0x004) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkclean(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~0x040) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkold(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~0x020) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_wrprotect(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) & ~0x002) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkread(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x004) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkexec(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x004) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkdirty(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x040) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkyoung(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x020) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkwrite(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x002) } )); return pte; }
static inline  __attribute__((always_inline)) pte_t pte_mkhuge(pte_t pte) { set_pte(&pte, ((pte_t) { (((pte).pte) | 0x080) } )); return pte; }

struct vm_area_struct;

static inline  __attribute__((always_inline)) int ptep_test_and_clear_dirty(struct vm_area_struct *vma, unsigned long addr, pte_t *ptep)
{
 if (!pte_dirty(*ptep))
  return 0;
 return test_and_clear_bit(6, &ptep->pte);
}

static inline  __attribute__((always_inline)) int ptep_test_and_clear_young(struct vm_area_struct *vma, unsigned long addr, pte_t *ptep)
{
 if (!pte_young(*ptep))
  return 0;
 return test_and_clear_bit(5, &ptep->pte);
}

static inline  __attribute__((always_inline)) void ptep_set_wrprotect(struct mm_struct *mm, unsigned long addr, pte_t *ptep)
{
 clear_bit(1, &ptep->pte);
}






static inline  __attribute__((always_inline)) int pmd_large(pmd_t pte) {
 return (((pte).pmd) & (0x080|0x001)) == (0x080|0x001);
}
# 367 "linux-2.6.18/include/asm/pgtable.h"
static inline  __attribute__((always_inline)) pte_t mk_pte_phys(unsigned long physpage, pgprot_t pgprot)
{
 pte_t pte;
 ((pte).pte) = physpage | ((pgprot).pgprot);
 return pte;
}


static inline  __attribute__((always_inline)) pte_t pte_modify(pte_t pte, pgprot_t newprot)
{
 ((pte).pte) &= ((~((1UL << 12)-1) & ((1UL << 46) - 1)) | 0x020 | 0x040);
 ((pte).pte) |= ((newprot).pgprot);
 ((pte).pte) &= global___supported_pte_mask[get_stack_id()];
       return pte;
}
# 417 "linux-2.6.18/include/asm/pgtable.h"
typedef  spinlock_t  _GLOBAL_158_T; extern  _GLOBAL_158_T  global_pgd_lock[NUM_STACKS];   
typedef  struct page   _GLOBAL_159_T; extern  _GLOBAL_159_T  * global_pgd_list[NUM_STACKS];    
void vmalloc_sync_all(void);



extern int kern_addr_valid(unsigned long addr);
# 451 "linux-2.6.18/include/asm/pgtable.h"
# 1 "linux-2.6.18/include/asm-generic/pgtable.h" 1
# 197 "linux-2.6.18/include/asm-generic/pgtable.h"
void pgd_clear_bad(pgd_t *);
void pud_clear_bad(pud_t *);
void pmd_clear_bad(pmd_t *);

static inline  __attribute__((always_inline)) int pgd_none_or_clear_bad(pgd_t *pgd)
{
 if ((!((*pgd).pgd)))
  return 1;
 if (__builtin_expect(!!(pgd_bad(*pgd)), 0)) {
  pgd_clear_bad(pgd);
  return 1;
 }
 return 0;
}

static inline  __attribute__((always_inline)) int pud_none_or_clear_bad(pud_t *pud)
{
 if ((!((*pud).pud)))
  return 1;
 if (__builtin_expect(!!(pud_bad(*pud)), 0)) {
  pud_clear_bad(pud);
  return 1;
 }
 return 0;
}

static inline  __attribute__((always_inline)) int pmd_none_or_clear_bad(pmd_t *pmd)
{
 if ((!((*pmd).pmd)))
  return 1;
 if (__builtin_expect(!!(((((*pmd).pmd) & (~(~((1UL << 12)-1) & ((1UL << 46) - 1)) & ~0x004)) != (0x001 | 0x002 | 0x020 | 0x040) )), 0)) {
  pmd_clear_bad(pmd);
  return 1;
 }
 return 0;
}
# 452 "linux-2.6.18/include/asm/pgtable.h" 2
# 39 "linux-2.6.18/include/linux/mm.h" 2
# 58 "linux-2.6.18/include/linux/mm.h"
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







};






struct vm_list_struct {
 struct vm_list_struct *next;
 struct vm_area_struct *vma;
};
# 188 "linux-2.6.18/include/linux/mm.h"
typedef  pgprot_t  _GLOBAL_160_T; extern  _GLOBAL_160_T  _GLOBAL_0_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_1_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_2_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_3_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_4_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_5_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_6_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_7_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_8_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_9_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_10_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_11_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_12_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_13_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_14_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_15_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_16_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_17_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_18_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_19_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_20_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_21_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_22_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_23_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_24_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_25_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_26_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_27_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_28_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_29_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_30_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_31_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_32_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_33_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_34_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_35_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_36_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_37_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_38_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_39_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_40_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_41_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_42_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_43_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_44_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_45_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_46_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_47_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_48_protection_map_I [ 16 ] ; extern  _GLOBAL_160_T  _GLOBAL_49_protection_map_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_protection_map_I) *_GLOBAL_protection_map_21_A[NUM_STACKS];  







struct vm_operations_struct {
 void (*open)(struct vm_area_struct * area);
 void (*close)(struct vm_area_struct * area);
 struct page * (*nopage)(struct vm_area_struct * area, unsigned long address, int *type);
 int (*populate)(struct vm_area_struct * area, unsigned long address, unsigned long len, pgprot_t prot, unsigned long pgoff, int nonblock);



 int (*page_mkwrite)(struct vm_area_struct *vma, struct page *page);







};

struct mmu_gather;
struct inode;







struct page {
 unsigned long flags;

 atomic_t _count;
 atomic_t _mapcount;



 union {
     struct {
  unsigned long private;






  struct address_space *mapping;






     };

     spinlock_t ptl;

 };
 unsigned long index;
 struct list_head lru;
# 270 "linux-2.6.18/include/linux/mm.h"
};
# 279 "linux-2.6.18/include/linux/mm.h"
# 1 "linux-2.6.18/include/linux/page-flags.h" 1
# 250 "linux-2.6.18/include/linux/page-flags.h"
struct page;

int test_clear_page_dirty(struct page *page);
int test_clear_page_writeback(struct page *page);
int test_set_page_writeback(struct page *page);

static inline  __attribute__((always_inline)) void clear_page_dirty(struct page *page)
{
 test_clear_page_dirty(page);
}

static inline  __attribute__((always_inline)) void set_page_writeback(struct page *page)
{
 test_set_page_writeback(page);
}
# 280 "linux-2.6.18/include/linux/mm.h" 2
# 298 "linux-2.6.18/include/linux/mm.h"
static inline  __attribute__((always_inline)) int put_page_testzero(struct page *page)
{
 do { if (((&page->_count)->counter) == 0) ; } while(0);
 return atomic_dec_and_test(&page->_count);
}





static inline  __attribute__((always_inline)) int get_page_unless_zero(struct page *page)
{
 return ({ int c, old; c = (((&page->_count))->counter); for (;;) { if (__builtin_expect(!!(c == (0)), 0)) break; old = ((int)((__typeof__(*(&((((&page->_count)))->counter))))__cmpxchg((&((((&page->_count)))->counter)),(unsigned long)(c), (unsigned long)(c + (1)),sizeof(*(&((((&page->_count)))->counter)))))); if (__builtin_expect(!!(old == c), 1)) break; c = old; } c != (0); });
}

extern void __page_cache_release(struct page *);

static inline  __attribute__((always_inline)) int page_count(struct page *page)
{
 if (__builtin_expect(!!((__builtin_constant_p(14) ? constant_test_bit((14),(&(page)->flags)) : variable_test_bit((14),(&(page)->flags)))), 0))
  page = (struct page *)((page)->private);
 return ((&page->_count)->counter);
}

static inline  __attribute__((always_inline)) void get_page(struct page *page)
{
 if (__builtin_expect(!!((__builtin_constant_p(14) ? constant_test_bit((14),(&(page)->flags)) : variable_test_bit((14),(&(page)->flags)))), 0))
  page = (struct page *)((page)->private);
 atomic_inc(&page->_count);
}





static inline  __attribute__((always_inline)) void init_page_count(struct page *page)
{
 (((&page->_count)->counter) = (1));
}

void put_page(struct page *page);
void put_pages_list(struct list_head *pages);

void split_page(struct page *page, unsigned int order);
# 466 "linux-2.6.18/include/linux/mm.h"
static inline  __attribute__((always_inline)) unsigned long page_zonenum(struct page *page)
{
 return (page->flags >> (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0))) & ((1UL << 2) - 1);
}

struct zone;
extern struct zone *zone_table[];

static inline  __attribute__((always_inline)) int page_zone_id(struct page *page)
{
 return (page->flags >> (((((sizeof(unsigned long)*8) - 0) - 0) - 2) * (2 != 0))) & ((1UL << (0 + 2)) - 1);
}
static inline  __attribute__((always_inline)) struct zone *page_zone(struct page *page)
{
 return zone_table[page_zone_id(page)];
}

static inline  __attribute__((always_inline)) unsigned long page_to_nid(struct page *page)
{
 if ((0 > 0 || 0 == 0))
  return (page->flags >> ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0))) & ((1UL << 0) - 1);
 else
  return page_zone(page)->zone_pgdat->node_id;
}
static inline  __attribute__((always_inline)) unsigned long page_to_section(struct page *page)
{
 return (page->flags >> (((sizeof(unsigned long)*8) - 0) * (0 != 0))) & ((1UL << 0) - 1);
}

static inline  __attribute__((always_inline)) void set_page_zone(struct page *page, unsigned long zone)
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

static inline  __attribute__((always_inline)) void set_page_links(struct page *page, unsigned long zone,
 unsigned long node, unsigned long pfn)
{
 set_page_zone(page, zone);
 set_page_node(page, node);
 set_page_section(page, ((pfn) >> 0));
}




# 1 "linux-2.6.18/include/linux/vmstat.h" 1
# 85 "linux-2.6.18/include/linux/vmstat.h"
typedef  atomic_long_t  _GLOBAL_161_T; extern  _GLOBAL_161_T  vm_stat [ NR_VM_ZONE_STAT_ITEMS ] ;   

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
# 156 "linux-2.6.18/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void zap_zone_vm_stats(struct zone *zone)
{
 memset(zone->vm_stat, 0, sizeof(zone->vm_stat));
}

extern void inc_zone_state(struct zone *, enum zone_stat_item);
# 183 "linux-2.6.18/include/linux/vmstat.h"
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

static inline  __attribute__((always_inline)) void __dec_zone_page_state(struct page *page,
   enum zone_stat_item item)
{
 atomic_long_dec(&page_zone(page)->vm_stat[item]);
 atomic_long_dec(&vm_stat[item]);
}
# 216 "linux-2.6.18/include/linux/vmstat.h"
static inline  __attribute__((always_inline)) void refresh_cpu_vm_stats(int cpu) { }
static inline  __attribute__((always_inline)) void refresh_vm_stats(void) { }
# 523 "linux-2.6.18/include/linux/mm.h" 2



typedef  struct page   _GLOBAL_162_T; extern  _GLOBAL_162_T  * global_mem_map[NUM_STACKS];    


static inline   __attribute__((always_inline)) __attribute__((always_inline)) void *lowmem_page_address(struct page *page)
{
 return ((void *)((unsigned long)(((unsigned long)((page) - global_mem_map[get_stack_id()]) + (0UL)) << 12)+((unsigned long)0xffff810000000000UL)));
}
# 570 "linux-2.6.18/include/linux/mm.h"
typedef  struct address_space   _GLOBAL_163_T; extern  _GLOBAL_163_T  global_swapper_space[NUM_STACKS];    
static inline  __attribute__((always_inline)) struct address_space *page_mapping(struct page *page)
{
 struct address_space *mapping = page->mapping;

 if (__builtin_expect(!!((__builtin_constant_p(15) ? constant_test_bit((15),(&(page)->flags)) : variable_test_bit((15),(&(page)->flags)))), 0))
  mapping = &global_swapper_space[get_stack_id()];
 else if (__builtin_expect(!!((unsigned long)mapping & 1), 0))
  mapping = ((void *)0);
 return mapping;
}

static inline  __attribute__((always_inline)) int PageAnon(struct page *page)
{
 return ((unsigned long)page->mapping & 1) != 0;
}





static inline  __attribute__((always_inline)) unsigned long page_index(struct page *page)
{
 if (__builtin_expect(!!((__builtin_constant_p(15) ? constant_test_bit((15),(&(page)->flags)) : variable_test_bit((15),(&(page)->flags)))), 0))
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
# 645 "linux-2.6.18/include/linux/mm.h"
extern void show_free_areas(void);


struct page *shmem_nopage(struct vm_area_struct *vma,
   unsigned long address, int *type);
int shmem_set_policy(struct vm_area_struct *vma, struct mempolicy *new);
struct mempolicy *shmem_get_policy(struct vm_area_struct *vma,
     unsigned long addr);
int shmem_lock(struct file *file, int lock, struct user_struct *user);
# 675 "linux-2.6.18/include/linux/mm.h"
struct file *shmem_file_setup(char *name, loff_t size, unsigned long flags);
extern int shmem_mmap(struct file *file, struct vm_area_struct *vma);

int shmem_zero_setup(struct vm_area_struct *);
# 688 "linux-2.6.18/include/linux/mm.h"
static inline  __attribute__((always_inline)) int can_do_mlock(void)
{
 if (capable(14))
  return 1;
 if (get_nsc_task()->signal->rlim[8].rlim_cur != 0)
  return 1;
 return 0;
}
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

struct page *vm_normal_page(struct vm_area_struct *, unsigned long, pte_t);
unsigned long zap_page_range(struct vm_area_struct *vma, unsigned long address,
  unsigned long size, struct zap_details *);
unsigned long unmap_vmas(struct mmu_gather **tlb,
  struct vm_area_struct *start_vma, unsigned long start_addr,
  unsigned long end_addr, unsigned long *nr_accounted,
  struct zap_details *);
void free_pgd_range(struct mmu_gather **tlb, unsigned long addr,
  unsigned long end, unsigned long floor, unsigned long ceiling);
void free_pgtables(struct mmu_gather **tlb, struct vm_area_struct *start_vma,
  unsigned long floor, unsigned long ceiling);
int copy_page_range(struct mm_struct *dst, struct mm_struct *src,
   struct vm_area_struct *vma);
int zeromap_page_range(struct vm_area_struct *vma, unsigned long from,
   unsigned long size, pgprot_t prot);
void unmap_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen, int even_cows);

static inline  __attribute__((always_inline)) void unmap_shared_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen)
{
 unmap_mapping_range(mapping, holebegin, holelen, 0);
}

extern int vmtruncate(struct inode * inode, loff_t offset);
extern int vmtruncate_range(struct inode * inode, loff_t offset, loff_t end);
extern int install_page(struct mm_struct *mm, struct vm_area_struct *vma, unsigned long addr, struct page *page, pgprot_t prot);
extern int install_file_pte(struct mm_struct *mm, struct vm_area_struct *vma, unsigned long addr, unsigned long pgoff, pgprot_t prot);


extern int __handle_mm_fault(struct mm_struct *mm,struct vm_area_struct *vma,
   unsigned long address, int write_access);

static inline  __attribute__((always_inline)) int handle_mm_fault(struct mm_struct *mm,
   struct vm_area_struct *vma, unsigned long address,
   int write_access)
{
 return __handle_mm_fault(mm, vma, address, write_access) &
    (~0x10);
}
# 762 "linux-2.6.18/include/linux/mm.h"
extern int make_pages_present(unsigned long addr, unsigned long end);
extern int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf, int len, int write);
void install_arg_page(struct vm_area_struct *, struct page *, unsigned long);

int get_user_pages(struct task_struct *tsk, struct mm_struct *mm, unsigned long start,
  int len, int write, int force, struct page **pages, struct vm_area_struct **vmas);
void print_bad_pte(struct vm_area_struct *, pte_t, unsigned long);

int __set_page_dirty_buffers(struct page *page);
int __set_page_dirty_nobuffers(struct page *page);
int redirty_page_for_writepage(struct writeback_control *wbc,
    struct page *page);
int set_page_dirty(struct page *page);
int set_page_dirty_lock(struct page *page);
int clear_page_dirty_for_io(struct page *page);

extern unsigned long do_mremap(unsigned long addr,
          unsigned long old_len, unsigned long new_len,
          unsigned long flags, unsigned long new_addr);
# 793 "linux-2.6.18/include/linux/mm.h"
typedef int (*shrinker_t)(int nr_to_scan, gfp_t gfp_mask);







struct shrinker;
extern struct shrinker *set_shrinker(int, shrinker_t);
extern void remove_shrinker(struct shrinker *shrinker);

extern pte_t *get_locked_pte(struct mm_struct *mm, unsigned long addr, spinlock_t **ptl);

int __pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address);
int __pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address);
int __pte_alloc(struct mm_struct *mm, pmd_t *pmd, unsigned long address);
int __pte_alloc_kernel(pmd_t *pmd, unsigned long address);






static inline  __attribute__((always_inline)) pud_t *pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address)
{
 return (__builtin_expect(!!((!((*pgd).pgd))), 0) && __pud_alloc(mm, pgd, address))?
  ((void *)0): ((pud_t *) ((unsigned long) ((void *)((unsigned long)((unsigned long)((*(pgd)).pgd) & (~((1UL << 12)-1) & ((1UL << 46) - 1)))+((unsigned long)0xffff810000000000UL)))) + (((address) >> 30) & (512 -1)));
}

static inline  __attribute__((always_inline)) pmd_t *pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address)
{
 return (__builtin_expect(!!((!((*pud).pud))), 0) && __pmd_alloc(mm, pud, address))?
  ((void *)0): ((pmd_t *) ((unsigned long) ((void *)((unsigned long)(((*(pud)).pud) & (~((1UL << 12)-1) & ((1UL << 46) - 1)))+((unsigned long)0xffff810000000000UL)))) + (((address) >> 21) & (512 -1)));
}
# 878 "linux-2.6.18/include/linux/mm.h"
extern void free_area_init(unsigned long * zones_size);
extern void free_area_init_node(int nid, pg_data_t *pgdat,
 unsigned long * zones_size, unsigned long zone_start_pfn,
 unsigned long *zholes_size);
extern void memmap_init_zone(unsigned long, int, unsigned long, unsigned long);
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


extern int __vm_enough_memory(long pages, int cap_sys_admin);
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
extern int may_expand_vm(struct mm_struct *mm, unsigned long npages);

extern unsigned long get_unmapped_area(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);

extern unsigned long do_mmap_pgoff(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long pgoff);

static inline  __attribute__((always_inline)) unsigned long do_mmap(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long offset)
{
 unsigned long ret = -22;
 if ((offset + (((len)+(1UL << 12)-1)&(~((1UL << 12)-1)))) < offset)
  goto out;
 if (!(offset & ~(~((1UL << 12)-1))))
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


extern struct page *filemap_nopage(struct vm_area_struct *, unsigned long, int *);
extern int filemap_populate(struct vm_area_struct *, unsigned long,
  unsigned long, pgprot_t, unsigned long, int);


int write_one_page(struct page *page, int wait);







int do_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);
int force_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);
unsigned long page_cache_readahead(struct address_space *mapping,
     struct file_ra_state *ra,
     struct file *filp,
     unsigned long offset,
     unsigned long size);
void handle_ra_miss(struct address_space *mapping,
      struct file_ra_state *ra, unsigned long offset);
unsigned long max_sane_readahead(unsigned long nr);


extern int expand_stack(struct vm_area_struct *vma, unsigned long address);





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

struct vm_area_struct *find_extend_vma(struct mm_struct *, unsigned long addr);
struct page *vmalloc_to_page(void *addr);
unsigned long vmalloc_to_pfn(void *addr);
int remap_pfn_range(struct vm_area_struct *, unsigned long addr,
   unsigned long pfn, unsigned long size, pgprot_t);
int vm_insert_page(struct vm_area_struct *, unsigned long addr, struct page *);

struct page *follow_page(struct vm_area_struct *, unsigned long address,
   unsigned int foll_flags);






void vm_stat_account(struct mm_struct *, unsigned long, struct file *, long);
# 1040 "linux-2.6.18/include/linux/mm.h"
static inline  __attribute__((always_inline)) void
kernel_map_pages(struct page *page, int numpages, int enable)
{
 if (!0 && !enable)
  debug_check_no_locks_freed(lowmem_page_address(page),
        numpages * (1UL << 12));
}


extern struct vm_area_struct *get_gate_vma(struct task_struct *tsk);

int in_gate_area_no_task(unsigned long addr);
int in_gate_area(struct task_struct *task, unsigned long addr);
# 1061 "linux-2.6.18/include/linux/mm.h"
int drop_caches_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
unsigned long shrink_slab(unsigned long scanned, gfp_t gfp_mask,
   unsigned long lru_pages);
void drop_pagecache(void);
void drop_slab(void);




typedef  int  _GLOBAL_164_T; extern  _GLOBAL_164_T  global_randomize_va_space[NUM_STACKS];   


const char *arch_vma_name(struct vm_area_struct *vma);
# 26 "linux-2.6.18/include/linux/skbuff.h" 2
# 1 "linux-2.6.18/include/linux/highmem.h" 1






# 1 "linux-2.6.18/include/asm/cacheflush.h" 1
# 26 "linux-2.6.18/include/asm/cacheflush.h"
void global_flush_tlb(void);
int change_page_attr(struct page *page, int numpages, pgprot_t prot);
int change_page_attr_addr(unsigned long addr, int numpages, pgprot_t prot);
# 8 "linux-2.6.18/include/linux/highmem.h" 2


static inline  __attribute__((always_inline)) void flush_anon_page(struct page *page, unsigned long vmaddr)
{
}



static inline  __attribute__((always_inline)) void flush_kernel_dcache_page(struct page *page)
{
}
# 30 "linux-2.6.18/include/linux/highmem.h"
static inline  __attribute__((always_inline)) unsigned int nr_free_highpages(void) { return 0; }

static inline  __attribute__((always_inline)) void *kmap(struct page *page)
{
 do { do { } while (0); } while (0);
 return lowmem_page_address(page);
}
# 48 "linux-2.6.18/include/linux/highmem.h"
static inline  __attribute__((always_inline)) void clear_user_highpage(struct page *page, unsigned long vaddr)
{
 void *addr = lowmem_page_address(page);
 clear_page(addr);
 do { } while (0);

 __asm__ __volatile__("": : :"memory");
}
# 70 "linux-2.6.18/include/linux/highmem.h"
static inline  __attribute__((always_inline)) void clear_highpage(struct page *page)
{
 void *kaddr = lowmem_page_address(page);
 clear_page(kaddr);
 do { } while (0);
}




static inline  __attribute__((always_inline)) void memclear_highpage_flush(struct page *page, unsigned int offset, unsigned int size)
{
 void *kaddr;

 do { if (offset + size > (1UL << 12)) ; } while(0);

 kaddr = lowmem_page_address(page);
 memset((char *)kaddr + offset, 0, size);
 do { } while (0);
 do { } while (0);
}

static inline  __attribute__((always_inline)) void copy_user_highpage(struct page *to, struct page *from, unsigned long vaddr)
{
 char *vfrom, *vto;

 vfrom = lowmem_page_address(from);
 vto = lowmem_page_address(to);
 copy_page(vto, vfrom);
 do { } while (0);
 do { } while (0);

 __asm__ __volatile__("": : :"memory");
}

static inline  __attribute__((always_inline)) void copy_highpage(struct page *to, struct page *from)
{
 char *vfrom, *vto;

 vfrom = lowmem_page_address(from);
 vto = lowmem_page_address(to);
 copy_page(vto, vfrom);
 do { } while (0);
 do { } while (0);
}
# 27 "linux-2.6.18/include/linux/skbuff.h" 2
# 1 "linux-2.6.18/include/linux/poll.h" 1



# 1 "linux-2.6.18/include/asm/poll.h" 1
# 21 "linux-2.6.18/include/asm/poll.h"
struct pollfd {
 int fd;
 short events;
 short revents;
};
# 5 "linux-2.6.18/include/linux/poll.h" 2







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
# 13 "linux-2.6.18/include/linux/poll.h" 2
# 23 "linux-2.6.18/include/linux/poll.h"
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
# 87 "linux-2.6.18/include/linux/poll.h"
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
__attribute__((warn_unused_result)) set_fd_set(unsigned long nr, void *ufdset, unsigned long *fdset)
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
# 28 "linux-2.6.18/include/linux/skbuff.h" 2

# 1 "linux-2.6.18/include/linux/textsearch.h" 1
# 9 "linux-2.6.18/include/linux/textsearch.h"
# 1 "linux-2.6.18/include/linux/module.h" 1
# 15 "linux-2.6.18/include/linux/module.h"
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
typedef  Elf64_Dyn  _GLOBAL_165_T; extern  _GLOBAL_165_T  _GLOBAL_0__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_1__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_2__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_3__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_4__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_5__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_6__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_7__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_8__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_9__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_10__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_11__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_12__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_13__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_14__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_15__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_16__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_17__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_18__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_19__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_20__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_21__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_22__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_23__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_24__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_25__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_26__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_27__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_28__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_29__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_30__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_31__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_32__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_33__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_34__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_35__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_36__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_37__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_38__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_39__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_40__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_41__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_42__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_43__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_44__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_45__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_46__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_47__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_48__DYNAMIC_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_49__DYNAMIC_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__DYNAMIC_I) *_GLOBAL__DYNAMIC_22_A[NUM_STACKS];   
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

typedef  struct subsystem   _GLOBAL_166_T; extern  _GLOBAL_166_T  global_module_subsys[NUM_STACKS];    
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
# 10 "linux-2.6.18/include/linux/textsearch.h" 2



struct ts_config;
# 25 "linux-2.6.18/include/linux/textsearch.h"
struct ts_state
{
 unsigned int offset;
 char cb[40];
};
# 41 "linux-2.6.18/include/linux/textsearch.h"
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
# 76 "linux-2.6.18/include/linux/textsearch.h"
 unsigned int (*get_next_block)(unsigned int consumed,
        const u8 **dst,
        struct ts_config *conf,
        struct ts_state *state);
# 89 "linux-2.6.18/include/linux/textsearch.h"
 void (*finish)(struct ts_config *conf,
       struct ts_state *state);
};
# 105 "linux-2.6.18/include/linux/textsearch.h"
static inline  __attribute__((always_inline)) unsigned int textsearch_next(struct ts_config *conf,
        struct ts_state *state)
{
 unsigned int ret = conf->ops->find(conf, state);

 if (conf->finish)
  conf->finish(conf, state);

 return ret;
}
# 124 "linux-2.6.18/include/linux/textsearch.h"
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
# 30 "linux-2.6.18/include/linux/skbuff.h" 2
# 1 "linux-2.6.18/include/net/checksum.h" 1
# 26 "linux-2.6.18/include/net/checksum.h"
# 1 "linux-2.6.18/include/asm/checksum.h" 1
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
# 27 "linux-2.6.18/include/net/checksum.h" 2
# 60 "linux-2.6.18/include/net/checksum.h"
static inline  __attribute__((always_inline)) unsigned int csum_add(unsigned int csum, unsigned int addend)
{
 csum += addend;
 return csum + (csum < addend);
}

static inline  __attribute__((always_inline)) unsigned int csum_sub(unsigned int csum, unsigned int addend)
{
 return csum_add(csum, ~addend);
}

static inline  __attribute__((always_inline)) unsigned int
csum_block_add(unsigned int csum, unsigned int csum2, int offset)
{
 if (offset&1)
  csum2 = ((csum2&0xFF00FF)<<8)+((csum2>>8)&0xFF00FF);
 return csum_add(csum, csum2);
}

static inline  __attribute__((always_inline)) unsigned int
csum_block_sub(unsigned int csum, unsigned int csum2, int offset)
{
 if (offset&1)
  csum2 = ((csum2&0xFF00FF)<<8)+((csum2>>8)&0xFF00FF);
 return csum_sub(csum, csum2);
}
# 31 "linux-2.6.18/include/linux/skbuff.h" 2
# 1 "linux-2.6.18/include/linux/dmaengine.h" 1
# 32 "linux-2.6.18/include/linux/skbuff.h" 2
# 86 "linux-2.6.18/include/linux/skbuff.h"
struct net_device;
# 109 "linux-2.6.18/include/linux/skbuff.h"
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
 __u16 page_offset;
 __u16 size;
};




struct skb_shared_info {
 atomic_t dataref;
 unsigned short nr_frags;
 unsigned short gso_size;

 unsigned short gso_segs;
 unsigned short gso_type;
 unsigned int ip6_frag_id;
 struct sk_buff *frag_list;
 skb_frag_t frags[(65536/(1UL << 12) + 2)];
};
# 160 "linux-2.6.18/include/linux/skbuff.h"
struct skb_timeval {
 u32 off_sec;
 u32 off_usec;
};


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
# 231 "linux-2.6.18/include/linux/skbuff.h"
struct sk_buff {

 struct sk_buff *next;
 struct sk_buff *prev;

 struct sock *sk;
 struct skb_timeval tstamp;
 struct net_device *dev;
 struct net_device *input_dev;

 union {
  struct tcphdr *th;
  struct udphdr *uh;
  struct icmphdr *icmph;
  struct igmphdr *igmph;
  struct iphdr *ipiph;
  struct ipv6hdr *ipv6h;
  unsigned char *raw;
 } h;

 union {
  struct iphdr *iph;
  struct ipv6hdr *ipv6h;
  struct arphdr *arph;
  unsigned char *raw;
 } nh;

 union {
    unsigned char *raw;
 } mac;

 struct dst_entry *dst;
 struct sec_path *sp;







 char cb[48];

 unsigned int len,
    data_len,
    mac_len,
    csum;
 __u32 priority;
 __u8 local_df:1,
    cloned:1,
    ip_summed:2,
    nohdr:1,
    nfctinfo:3;
 __u8 pkt_type:3,
    fclone:2,
    ipvs_property:1;
 __be16 protocol;

 void (*destructor)(struct sk_buff *skb);
# 300 "linux-2.6.18/include/linux/skbuff.h"
 __u16 tc_index;
# 314 "linux-2.6.18/include/linux/skbuff.h"
 unsigned int truesize;
 atomic_t users;
 unsigned char *head,
    *data,
    *tail,
    *end;
};
# 330 "linux-2.6.18/include/linux/skbuff.h"
extern void kfree_skb(struct sk_buff *skb);
extern void __kfree_skb(struct sk_buff *skb);
extern struct sk_buff *__alloc_skb(unsigned int size,
       gfp_t priority, int fclone);
static inline  __attribute__((always_inline)) struct sk_buff *alloc_skb(unsigned int size,
     gfp_t priority)
{
 return __alloc_skb(size, priority, 0);
}

static inline  __attribute__((always_inline)) struct sk_buff *alloc_skb_fclone(unsigned int size,
            gfp_t priority)
{
 return __alloc_skb(size, priority, 1);
}

extern struct sk_buff *alloc_skb_from_cache(kmem_cache_t *cp,
         unsigned int size,
         gfp_t priority);
extern void kfree_skbmem(struct sk_buff *skb);
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
extern int skb_pad(struct sk_buff *skb, int pad);

extern void skb_over_panic(struct sk_buff *skb, int len,
         void *here);
extern void skb_under_panic(struct sk_buff *skb, int len,
          void *here);
extern void skb_truesize_bug(struct sk_buff *skb);

static inline  __attribute__((always_inline)) void skb_truesize_check(struct sk_buff *skb)
{
 if (__builtin_expect(!!((int)skb->truesize < sizeof(struct sk_buff) + skb->len), 0))
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
# 414 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_queue_empty(const struct sk_buff_head *list)
{
 return list->next == (struct sk_buff *)list;
}
# 426 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) struct sk_buff *skb_get(struct sk_buff *skb)
{
 atomic_inc(&skb->users);
 return skb;
}
# 445 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_cloned(const struct sk_buff *skb)
{
 return skb->cloned &&
        (((&((struct skb_shared_info *)((skb)->end))->dataref)->counter) & ((1 << 16) - 1)) != 1;
}
# 458 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_header_cloned(const struct sk_buff *skb)
{
 int dataref;

 if (!skb->cloned)
  return 0;

 dataref = ((&((struct skb_shared_info *)((skb)->end))->dataref)->counter);
 dataref = (dataref & ((1 << 16) - 1)) - (dataref >> 16);
 return dataref != 1;
}
# 478 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_header_release(struct sk_buff *skb)
{
 do { if (skb->nohdr) ; } while(0);
 skb->nohdr = 1;
 atomic_add(1 << 16, &((struct skb_shared_info *)((skb)->end))->dataref);
}
# 492 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_shared(const struct sk_buff *skb)
{
 return ((&skb->users)->counter) != 1;
}
# 510 "linux-2.6.18/include/linux/skbuff.h"
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
# 542 "linux-2.6.18/include/linux/skbuff.h"
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
# 567 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) struct sk_buff *skb_peek(struct sk_buff_head *list_)
{
 struct sk_buff *list = ((struct sk_buff *)list_)->next;
 if (list == (struct sk_buff *)list_)
  list = ((void *)0);
 return list;
}
# 588 "linux-2.6.18/include/linux/skbuff.h"
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
# 615 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_queue_head_init(struct sk_buff_head *list)
{
 do { *(&list->lock) = (spinlock_t) { .raw_lock = { }, }; } while (0);
 list->prev = list->next = (struct sk_buff *)list;
 list->qlen = 0;
}
# 640 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void __skb_queue_after(struct sk_buff_head *list,
         struct sk_buff *prev,
         struct sk_buff *newsk)
{
 struct sk_buff *next;
 list->qlen++;

 next = prev->next;
 newsk->next = next;
 newsk->prev = prev;
 next->prev = prev->next = newsk;
}
# 663 "linux-2.6.18/include/linux/skbuff.h"
extern void skb_queue_head(struct sk_buff_head *list, struct sk_buff *newsk);
static inline  __attribute__((always_inline)) void __skb_queue_head(struct sk_buff_head *list,
        struct sk_buff *newsk)
{
 __skb_queue_after(list, (struct sk_buff *)list, newsk);
}
# 680 "linux-2.6.18/include/linux/skbuff.h"
extern void skb_queue_tail(struct sk_buff_head *list, struct sk_buff *newsk);
static inline  __attribute__((always_inline)) void __skb_queue_tail(struct sk_buff_head *list,
       struct sk_buff *newsk)
{
 struct sk_buff *prev, *next;

 list->qlen++;
 next = (struct sk_buff *)list;
 prev = next->prev;
 newsk->next = next;
 newsk->prev = prev;
 next->prev = prev->next = newsk;
}
# 703 "linux-2.6.18/include/linux/skbuff.h"
extern struct sk_buff *skb_dequeue(struct sk_buff_head *list);
static inline  __attribute__((always_inline)) struct sk_buff *__skb_dequeue(struct sk_buff_head *list)
{
 struct sk_buff *next, *prev, *result;

 prev = (struct sk_buff *) list;
 next = prev->next;
 result = ((void *)0);
 if (next != prev) {
  result = next;
  next = next->next;
  list->qlen--;
  next->prev = prev;
  prev->next = next;
  result->next = result->prev = ((void *)0);
 }
 return result;
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




extern void skb_append(struct sk_buff *old, struct sk_buff *newsk, struct sk_buff_head *list);
static inline  __attribute__((always_inline)) void __skb_append(struct sk_buff *old, struct sk_buff *newsk, struct sk_buff_head *list)
{
 __skb_insert(newsk, old, old->next, list);
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
# 774 "linux-2.6.18/include/linux/skbuff.h"
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

 for (i = (int)((struct skb_shared_info *)((skb)->end))->nr_frags - 1; i >= 0; i--)
  len += ((struct skb_shared_info *)((skb)->end))->frags[i].size;
 return len + skb_headlen(skb);
}

static inline  __attribute__((always_inline)) void skb_fill_page_desc(struct sk_buff *skb, int i,
          struct page *page, int off, int size)
{
 skb_frag_t *frag = &((struct skb_shared_info *)((skb)->end))->frags[i];

 frag->page = page;
 frag->page_offset = off;
 frag->size = size;
 ((struct skb_shared_info *)((skb)->end))->nr_frags = i + 1;
}
# 821 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) unsigned char *__skb_put(struct sk_buff *skb, unsigned int len)
{
 unsigned char *tmp = skb->tail;
 do { if (skb_is_nonlinear(skb)) ; } while(0);
 skb->tail += len;
 skb->len += len;
 return tmp;
}
# 839 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) unsigned char *skb_put(struct sk_buff *skb, unsigned int len)
{
 unsigned char *tmp = skb->tail;
 do { if (skb_is_nonlinear(skb)) ; } while(0);
 skb->tail += len;
 skb->len += len;
 if (__builtin_expect(!!(skb->tail>skb->end), 0))
  skb_over_panic(skb, len, ({ void *pc; asm volatile("leaq 1f(%%rip),%0\n1:":"=r"(pc)); pc; }));
 return tmp;
}

static inline  __attribute__((always_inline)) unsigned char *__skb_push(struct sk_buff *skb, unsigned int len)
{
 skb->data -= len;
 skb->len += len;
 return skb->data;
}
# 866 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) unsigned char *skb_push(struct sk_buff *skb, unsigned int len)
{
 skb->data -= len;
 skb->len += len;
 if (__builtin_expect(!!(skb->data<skb->head), 0))
  skb_under_panic(skb, len, ({ void *pc; asm volatile("leaq 1f(%%rip),%0\n1:":"=r"(pc)); pc; }));
 return skb->data;
}

static inline  __attribute__((always_inline)) unsigned char *__skb_pull(struct sk_buff *skb, unsigned int len)
{
 skb->len -= len;
 do { if (skb->len < skb->data_len) ; } while(0);
 return skb->data += len;
}
# 892 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) unsigned char *skb_pull(struct sk_buff *skb, unsigned int len)
{
 return __builtin_expect(!!(len > skb->len), 0) ? ((void *)0) : __skb_pull(skb, len);
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







static inline  __attribute__((always_inline)) int skb_headroom(const struct sk_buff *skb)
{
 return skb->data - skb->head;
}







static inline  __attribute__((always_inline)) int skb_tailroom(const struct sk_buff *skb)
{
 return skb_is_nonlinear(skb) ? 0 : skb->end - skb->tail;
}
# 952 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_reserve(struct sk_buff *skb, int len)
{
 skb->data += len;
 skb->tail += len;
}
# 1001 "linux-2.6.18/include/linux/skbuff.h"
extern int ___pskb_trim(struct sk_buff *skb, unsigned int len);

static inline  __attribute__((always_inline)) void __skb_trim(struct sk_buff *skb, unsigned int len)
{
 if (__builtin_expect(!!(skb->data_len), 0)) {
  do { if (1) ; } while(0);
  return;
 }
 skb->len = len;
 skb->tail = skb->data + len;
}
# 1022 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_trim(struct sk_buff *skb, unsigned int len)
{
 if (skb->len > len)
  __skb_trim(skb, len);
}


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
# 1051 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void pskb_trim_unique(struct sk_buff *skb, unsigned int len)
{
 int err = pskb_trim(skb, len);
 do { if (err) ; } while(0);
}
# 1065 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_orphan(struct sk_buff *skb)
{
 if (skb->destructor)
  skb->destructor(skb);
 skb->destructor = ((void *)0);
 skb->sk = ((void *)0);
}
# 1081 "linux-2.6.18/include/linux/skbuff.h"
extern void skb_queue_purge(struct sk_buff_head *list);
static inline  __attribute__((always_inline)) void __skb_queue_purge(struct sk_buff_head *list)
{
 struct sk_buff *skb;
 while ((skb = __skb_dequeue(list)) != ((void *)0))
  kfree_skb(skb);
}
# 1101 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) struct sk_buff *__dev_alloc_skb(unsigned int length,
           gfp_t gfp_mask)
{
 struct sk_buff *skb = alloc_skb(length + 16, gfp_mask);
 if (__builtin_expect(!!(skb), 1))
  skb_reserve(skb, 16);
 return skb;
}
# 1122 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) struct sk_buff *dev_alloc_skb(unsigned int length)
{
 return __dev_alloc_skb(length, ((( gfp_t)0x20u)));
}

extern struct sk_buff *__netdev_alloc_skb(struct net_device *dev,
  unsigned int length, gfp_t gfp_mask);
# 1143 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) struct sk_buff *netdev_alloc_skb(struct net_device *dev,
  unsigned int length)
{
 return __netdev_alloc_skb(dev, length, ((( gfp_t)0x20u)));
}
# 1161 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_cow(struct sk_buff *skb, unsigned int headroom)
{
 int delta = (headroom > 16 ? headroom : 16) -
   skb_headroom(skb);

 if (delta < 0)
  delta = 0;

 if (delta || skb_cloned(skb))
  return pskb_expand_head(skb, (delta + (16 -1)) &
    ~(16 -1), 0, ((( gfp_t)0x20u)));
 return 0;
}
# 1186 "linux-2.6.18/include/linux/skbuff.h"
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
  unsigned int csum = csum_partial_copy_from_user(from,
           skb_put(skb, copy),
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
  struct skb_frag_struct *frag = &((struct skb_shared_info *)((skb)->end))->frags[i - 1];

  return page == frag->page &&
         off == frag->page_offset + frag->size;
 }
 return 0;
}

static inline  __attribute__((always_inline)) int __skb_linearize(struct sk_buff *skb)
{
 return __pskb_pull_tail(skb, skb->data_len) ? 0 : -12;
}
# 1239 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_linearize(struct sk_buff *skb)
{
 return skb_is_nonlinear(skb) ? __skb_linearize(skb) : 0;
}
# 1251 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int skb_linearize_cow(struct sk_buff *skb)
{
 return skb_is_nonlinear(skb) || skb_cloned(skb) ?
        __skb_linearize(skb) : 0;
}
# 1268 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_postpull_rcsum(struct sk_buff *skb,
          const void *start, unsigned int len)
{
 if (skb->ip_summed == 1)
  skb->csum = csum_sub(skb->csum, csum_partial(start, len, 0));
}

unsigned char *skb_pull_rcsum(struct sk_buff *skb, unsigned int len);
# 1286 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) int pskb_trim_rcsum(struct sk_buff *skb, unsigned int len)
{
 if (__builtin_expect(!!(len >= skb->len), 1))
  return 0;
 if (skb->ip_summed == 1)
  skb->ip_summed = 0;
 return __pskb_trim(skb, len);
}

static inline  __attribute__((always_inline)) void *kmap_skb_frag(const skb_frag_t *frag)
{





 return lowmem_page_address(frag->page);
}

static inline  __attribute__((always_inline)) void kunmap_skb_frag(void *vaddr)
{
 do { } while (0);



}
# 1324 "linux-2.6.18/include/linux/skbuff.h"
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
extern void skb_kill_datagram(struct sock *sk, struct sk_buff *skb,
      unsigned int flags);
extern unsigned int skb_checksum(const struct sk_buff *skb, int offset,
        int len, unsigned int csum);
extern int skb_copy_bits(const struct sk_buff *skb, int offset,
         void *to, int len);
extern int skb_store_bits(const struct sk_buff *skb, int offset,
          void *from, int len);
extern unsigned int skb_copy_and_csum_bits(const struct sk_buff *skb,
           int offset, u8 *to, int len,
           unsigned int csum);
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

extern void skb_init(void);
extern void skb_add_mtu(int mtu);
# 1378 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_get_timestamp(const struct sk_buff *skb, struct timeval *stamp)
{
 stamp->tv_sec = skb->tstamp.off_sec;
 stamp->tv_usec = skb->tstamp.off_usec;
}
# 1393 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_set_timestamp(struct sk_buff *skb, const struct timeval *stamp)
{
 skb->tstamp.off_sec = stamp->tv_sec;
 skb->tstamp.off_usec = stamp->tv_usec;
}

extern void __net_timestamp(struct sk_buff *skb);

extern unsigned int __skb_checksum_complete(struct sk_buff *skb);
# 1419 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) unsigned int skb_checksum_complete(struct sk_buff *skb)
{
 return skb->ip_summed != 2 &&
  __skb_checksum_complete(skb);
}
# 1475 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void nf_reset(struct sk_buff *skb) {}
# 1489 "linux-2.6.18/include/linux/skbuff.h"
static inline  __attribute__((always_inline)) void skb_copy_secmark(struct sk_buff *to, const struct sk_buff *from)
{ }

static inline  __attribute__((always_inline)) void skb_init_secmark(struct sk_buff *skb)
{ }


static inline  __attribute__((always_inline)) int skb_is_gso(const struct sk_buff *skb)
{
 return ((struct skb_shared_info *)((skb)->end))->gso_size;
}
# 112 "linux-2.6.18/include/linux/if_ether.h" 2

static inline  __attribute__((always_inline)) struct ethhdr *eth_hdr(const struct sk_buff *skb)
{
 return (struct ethhdr *)skb->mac.raw;
}


typedef  struct ctl_table   _GLOBAL_167_T; extern  _GLOBAL_167_T  _GLOBAL_0_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_1_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_2_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_3_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_4_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_5_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_6_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_7_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_8_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_9_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_10_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_11_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_12_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_13_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_14_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_15_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_16_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_17_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_18_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_19_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_20_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_21_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_22_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_23_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_24_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_25_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_26_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_27_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_28_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_29_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_30_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_31_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_32_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_33_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_34_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_35_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_36_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_37_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_38_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_39_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_40_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_41_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_42_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_43_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_44_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_45_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_46_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_47_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_48_ether_table_I [ ] ; extern  _GLOBAL_167_T  _GLOBAL_49_ether_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_table_I) *_GLOBAL_ether_table_23_A[NUM_STACKS];   
# 30 "linux-2.6.18/include/linux/netdevice.h" 2
# 1 "linux-2.6.18/include/linux/if_packet.h" 1



struct sockaddr_pkt
{
 unsigned short spkt_family;
 unsigned char spkt_device[14];
 unsigned short spkt_protocol;
};

struct sockaddr_ll
{
 unsigned short sll_family;
 unsigned short sll_protocol;
 int sll_ifindex;
 unsigned short sll_hatype;
 unsigned char sll_pkttype;
 unsigned char sll_halen;
 unsigned char sll_addr[8];
};
# 43 "linux-2.6.18/include/linux/if_packet.h"
struct tpacket_stats
{
 unsigned int tp_packets;
 unsigned int tp_drops;
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
# 82 "linux-2.6.18/include/linux/if_packet.h"
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
# 31 "linux-2.6.18/include/linux/netdevice.h" 2






# 1 "linux-2.6.18/include/linux/device.h" 1
# 14 "linux-2.6.18/include/linux/device.h"
# 1 "linux-2.6.18/include/linux/ioport.h" 1
# 17 "linux-2.6.18/include/linux/ioport.h"
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
# 94 "linux-2.6.18/include/linux/ioport.h"
typedef  struct resource   _GLOBAL_168_T; extern  _GLOBAL_168_T  global_ioport_resource[NUM_STACKS];    
typedef  struct resource   _GLOBAL_169_T; extern  _GLOBAL_169_T  global_iomem_resource[NUM_STACKS];    

extern int request_resource(struct resource *root, struct resource *new);
extern struct resource * ____request_resource(struct resource *root, struct resource *new);
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


extern int find_next_system_ram(struct resource *res);






extern struct resource * __request_region(struct resource *,
     resource_size_t start,
     resource_size_t n, const char *name);






extern int __check_region(struct resource *, resource_size_t, resource_size_t);
extern void __release_region(struct resource *, resource_size_t,
    resource_size_t);

static inline  __attribute__((always_inline)) int  __attribute__((deprecated)) check_region(resource_size_t s,
      resource_size_t n)
{
 return __check_region(&global_ioport_resource[get_stack_id()], s, n);
}
# 15 "linux-2.6.18/include/linux/device.h" 2

# 1 "linux-2.6.18/include/linux/klist.h" 1
# 20 "linux-2.6.18/include/linux/klist.h"
struct klist_node;
struct klist {
 spinlock_t k_lock;
 struct list_head k_list;
 void (*get)(struct klist_node *);
 void (*put)(struct klist_node *);
};


extern void klist_init(struct klist * k, void (*get)(struct klist_node *),
         void (*put)(struct klist_node *));

struct klist_node {
 struct klist * n_klist;
 struct list_head n_node;
 struct kref n_ref;
 struct completion n_removed;
};

extern void klist_add_tail(struct klist_node * n, struct klist * k);
extern void klist_add_head(struct klist_node * n, struct klist * k);

extern void klist_del(struct klist_node * n);
extern void klist_remove(struct klist_node * n);

extern int klist_node_attached(struct klist_node * n);


struct klist_iter {
 struct klist * i_klist;
 struct list_head * i_head;
 struct klist_node * i_cur;
};


extern void klist_iter_init(struct klist * k, struct klist_iter * i);
extern void klist_iter_init_node(struct klist * k, struct klist_iter * i,
     struct klist_node * n);
extern void klist_iter_exit(struct klist_iter * i);
extern struct klist_node * klist_next(struct klist_iter * i);
# 17 "linux-2.6.18/include/linux/device.h" 2
# 30 "linux-2.6.18/include/linux/device.h"
struct device;
struct device_driver;
struct class;
struct class_device;

struct bus_type {
 const char * name;

 struct subsystem subsys;
 struct kset drivers;
 struct kset devices;
 struct klist klist_devices;
 struct klist klist_drivers;

 struct bus_attribute * bus_attrs;
 struct device_attribute * dev_attrs;
 struct driver_attribute * drv_attrs;

 int (*match)(struct device * dev, struct device_driver * drv);
 int (*uevent)(struct device *dev, char **envp,
      int num_envp, char *buffer, int buffer_size);
 int (*probe)(struct device * dev);
 int (*remove)(struct device * dev);
 void (*shutdown)(struct device * dev);
 int (*suspend)(struct device * dev, pm_message_t state);
 int (*resume)(struct device * dev);
};

extern int bus_register(struct bus_type * bus);
extern void bus_unregister(struct bus_type * bus);

extern void bus_rescan_devices(struct bus_type * bus);



int bus_for_each_dev(struct bus_type * bus, struct device * start, void * data,
       int (*fn)(struct device *, void *));
struct device * bus_find_device(struct bus_type *bus, struct device *start,
    void *data, int (*match)(struct device *, void *));

int bus_for_each_drv(struct bus_type * bus, struct device_driver * start,
       void * data, int (*fn)(struct device_driver *, void *));




struct bus_attribute {
 struct attribute attr;
 ssize_t (*show)(struct bus_type *, char * buf);
 ssize_t (*store)(struct bus_type *, const char * buf, size_t count);
};




extern int bus_create_file(struct bus_type *, struct bus_attribute *);
extern void bus_remove_file(struct bus_type *, struct bus_attribute *);

struct device_driver {
 const char * name;
 struct bus_type * bus;

 struct completion unloaded;
 struct kobject kobj;
 struct klist klist_devices;
 struct klist_node knode_bus;

 struct module * owner;

 int (*probe) (struct device * dev);
 int (*remove) (struct device * dev);
 void (*shutdown) (struct device * dev);
 int (*suspend) (struct device * dev, pm_message_t state);
 int (*resume) (struct device * dev);
};


extern int driver_register(struct device_driver * drv);
extern void driver_unregister(struct device_driver * drv);

extern struct device_driver * get_driver(struct device_driver * drv);
extern void put_driver(struct device_driver * drv);
extern struct device_driver *driver_find(const char *name, struct bus_type *bus);




struct driver_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device_driver *, char * buf);
 ssize_t (*store)(struct device_driver *, const char * buf, size_t count);
};




extern int driver_create_file(struct device_driver *, struct driver_attribute *);
extern void driver_remove_file(struct device_driver *, struct driver_attribute *);

extern int driver_for_each_device(struct device_driver * drv, struct device * start,
      void * data, int (*fn)(struct device *, void *));
struct device * driver_find_device(struct device_driver *drv,
       struct device *start, void *data,
       int (*match)(struct device *, void *));





struct class {
 const char * name;
 struct module * owner;

 struct subsystem subsys;
 struct list_head children;
 struct list_head devices;
 struct list_head interfaces;
 struct semaphore sem;

 struct class_attribute * class_attrs;
 struct class_device_attribute * class_dev_attrs;

 int (*uevent)(struct class_device *dev, char **envp,
      int num_envp, char *buffer, int buffer_size);

 void (*release)(struct class_device *dev);
 void (*class_release)(struct class *class);
};

extern int class_register(struct class *);
extern void class_unregister(struct class *);


struct class_attribute {
 struct attribute attr;
 ssize_t (*show)(struct class *, char * buf);
 ssize_t (*store)(struct class *, const char * buf, size_t count);
};




extern int class_create_file(struct class *, const struct class_attribute *);
extern void class_remove_file(struct class *, const struct class_attribute *);

struct class_device_attribute {
 struct attribute attr;
 ssize_t (*show)(struct class_device *, char * buf);
 ssize_t (*store)(struct class_device *, const char * buf, size_t count);
};





extern int class_device_create_file(struct class_device *,
        const struct class_device_attribute *);
# 213 "linux-2.6.18/include/linux/device.h"
struct class_device {
 struct list_head node;

 struct kobject kobj;
 struct class * class;
 dev_t devt;
 struct class_device_attribute *devt_attr;
 struct class_device_attribute uevent_attr;
 struct device * dev;
 void * class_data;
 struct class_device *parent;
 struct attribute_group ** groups;

 void (*release)(struct class_device *dev);
 int (*uevent)(struct class_device *dev, char **envp,
      int num_envp, char *buffer, int buffer_size);
 char class_id[20];
};

static inline  __attribute__((always_inline)) void *
class_get_devdata (struct class_device *dev)
{
 return dev->class_data;
}

static inline  __attribute__((always_inline)) void
class_set_devdata (struct class_device *dev, void *data)
{
 dev->class_data = data;
}


extern int class_device_register(struct class_device *);
extern void class_device_unregister(struct class_device *);
extern void class_device_initialize(struct class_device *);
extern int class_device_add(struct class_device *);
extern void class_device_del(struct class_device *);

extern int class_device_rename(struct class_device *, char *);

extern struct class_device * class_device_get(struct class_device *);
extern void class_device_put(struct class_device *);

extern void class_device_remove_file(struct class_device *,
         const struct class_device_attribute *);
extern int class_device_create_bin_file(struct class_device *,
     struct bin_attribute *);
extern void class_device_remove_bin_file(struct class_device *,
      struct bin_attribute *);

struct class_interface {
 struct list_head node;
 struct class *class;

 int (*add) (struct class_device *, struct class_interface *);
 void (*remove) (struct class_device *, struct class_interface *);
};

extern int class_interface_register(struct class_interface *);
extern void class_interface_unregister(struct class_interface *);

extern struct class *class_create(struct module *owner, char *name);
extern void class_destroy(struct class *cls);
extern struct class_device *class_device_create(struct class *cls,
      struct class_device *parent,
      dev_t devt,
      struct device *device,
      char *fmt, ...)
     __attribute__((format(printf,5,6))) ;
extern void class_device_destroy(struct class *cls, dev_t devt);



struct device_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device *dev, struct device_attribute *attr,
   char *buf);
 ssize_t (*store)(struct device *dev, struct device_attribute *attr,
    const char *buf, size_t count);
};




extern int device_create_file(struct device *device, struct device_attribute * entry);
extern void device_remove_file(struct device * dev, struct device_attribute * attr);
struct device {
 struct klist klist_children;
 struct klist_node knode_parent;
 struct klist_node knode_driver;
 struct klist_node knode_bus;
 struct device * parent;

 struct kobject kobj;
 char bus_id[20];
 struct device_attribute uevent_attr;
 struct device_attribute *devt_attr;

 struct semaphore sem;



 struct bus_type * bus;
 struct device_driver *driver;

 void *driver_data;
 void *platform_data;

 void *firmware_data;

 struct dev_pm_info power;

 u64 *dma_mask;
 u64 coherent_dma_mask;





 struct list_head dma_pools;

 struct dma_coherent_mem *dma_mem;



 struct list_head node;
 struct class *class;
 dev_t devt;

 void (*release)(struct device * dev);
};

static inline  __attribute__((always_inline)) void *
dev_get_drvdata (struct device *dev)
{
 return dev->driver_data;
}

static inline  __attribute__((always_inline)) void
dev_set_drvdata (struct device *dev, void *data)
{
 dev->driver_data = data;
}

static inline  __attribute__((always_inline)) int device_is_registered(struct device *dev)
{
 return klist_node_attached(&dev->knode_bus);
}




extern int device_register(struct device * dev);
extern void device_unregister(struct device * dev);
extern void device_initialize(struct device * dev);
extern int device_add(struct device * dev);
extern void device_del(struct device * dev);
extern int device_for_each_child(struct device *, void *,
       int (*fn)(struct device *, void *));





extern void device_bind_driver(struct device * dev);
extern void device_release_driver(struct device * dev);
extern int device_attach(struct device * dev);
extern void driver_attach(struct device_driver * drv);
extern void device_reprobe(struct device *dev);




extern struct device *device_create(struct class *cls, struct device *parent,
        dev_t devt, char *fmt, ...)
        __attribute__((format(printf,4,5))) ;
extern void device_destroy(struct class *cls, dev_t devt);







typedef  int   ( *_GLOBAL_171_T  )  ( struct device   * dev   ) ; extern  _GLOBAL_171_T global_platform_notify[NUM_STACKS];      

typedef  int   ( *_GLOBAL_173_T  )  ( struct device   * dev   ) ; extern  _GLOBAL_173_T global_platform_notify_remove[NUM_STACKS];      






extern struct device * get_device(struct device * dev);
extern void put_device(struct device * dev);



extern void device_shutdown(void);



extern int firmware_register(struct subsystem *);
extern void firmware_unregister(struct subsystem *);


extern const char *dev_driver_string(struct device *dev);
# 38 "linux-2.6.18/include/linux/netdevice.h" 2



struct divert_blk;
struct vlan_group;
struct ethtool_ops;
struct netpoll_info;
# 108 "linux-2.6.18/include/linux/netdevice.h"
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

typedef  __typeof__ ( struct netif_rx_stats  )   _GLOBAL_174_T; extern  _GLOBAL_174_T  global_per_cpu__netdev_rx_stat[NUM_STACKS];    






struct dev_mc_list
{
 struct dev_mc_list *next;
 __u8 dmi_addr[32];
 unsigned char dmi_addrlen;
 int dmi_users;
 int dmi_gusers;
};

struct hh_cache
{
 struct hh_cache *hh_next;
 atomic_t hh_refcnt;
 unsigned short hh_type;



 int hh_len;
 int (*hh_output)(struct sk_buff *skb);
 rwlock_t hh_lock;







 unsigned long hh_data[(((32)+(16 -1))&~(16 - 1)) / sizeof(long)];
};
# 225 "linux-2.6.18/include/linux/netdevice.h"
enum netdev_state_t
{
 __LINK_STATE_XOFF=0,
 __LINK_STATE_START,
 __LINK_STATE_PRESENT,
 __LINK_STATE_SCHED,
 __LINK_STATE_NOCARRIER,
 __LINK_STATE_RX_SCHED,
 __LINK_STATE_LINKWATCH_PENDING,
 __LINK_STATE_DORMANT,
 __LINK_STATE_QDISC_RUNNING,
};






struct netdev_boot_setup {
 char name[16];
 struct ifmap map;
};


extern int  __attribute__ ((__section__ (".init.text"))) netdev_boot_setup(char *str);
# 261 "linux-2.6.18/include/linux/netdevice.h"
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

 struct net_device *next;


 int (*init)(struct net_device *dev);




 unsigned long features;
# 329 "linux-2.6.18/include/linux/netdevice.h"
 struct net_device *next_sched;


 int ifindex;
 int iflink;


 struct net_device_stats* (*get_stats)(struct net_device *dev);
 struct iw_statistics* (*get_wireless_stats)(struct net_device *dev);



 const struct iw_handler_def * wireless_handlers;

 struct iw_public_data * wireless_data;

 struct ethtool_ops *ethtool_ops;
# 354 "linux-2.6.18/include/linux/netdevice.h"
 unsigned int flags;
 unsigned short gflags;
        unsigned short priv_flags;
 unsigned short padded;

 unsigned char operstate;
 unsigned char link_mode;

 unsigned mtu;
 unsigned short type;
 unsigned short hard_header_len;

 struct net_device *master;




 unsigned char perm_addr[32];
 unsigned char addr_len;
 unsigned short dev_id;

 struct dev_mc_list *mc_list;
 int mc_count;
 int promiscuity;
 int allmulti;




 void *atalk_ptr;
 void *ip_ptr;
 void *dn_ptr;
 void *ip6_ptr;
 void *ec_ptr;
 void *ax25_ptr;




 struct list_head poll_list ;


 int (*poll) (struct net_device *dev, int *quota);
 int quota;
 int weight;
 unsigned long last_rx;

 unsigned char dev_addr[32];


 unsigned char broadcast[32];





 spinlock_t queue_lock ;
 struct Qdisc *qdisc;
 struct Qdisc *qdisc_sleeping;
 struct list_head qdisc_list;
 unsigned long tx_queue_len;


 struct sk_buff *gso_skb;


 spinlock_t ingress_lock;
 struct Qdisc *qdisc_ingress;





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

 int (*hard_header) (struct sk_buff *skb,
      struct net_device *dev,
      unsigned short type,
      void *daddr,
      void *saddr,
      unsigned len);
 int (*rebuild_header)(struct sk_buff *skb);

 void (*set_multicast_list)(struct net_device *dev);

 int (*set_mac_address)(struct net_device *dev,
         void *addr);

 int (*do_ioctl)(struct net_device *dev,
         struct ifreq *ifr, int cmd);

 int (*set_config)(struct net_device *dev,
           struct ifmap *map);

 int (*hard_header_cache)(struct neighbour *neigh,
           struct hh_cache *hh);
 void (*header_cache_update)(struct hh_cache *hh,
             struct net_device *dev,
             unsigned char * haddr);

 int (*change_mtu)(struct net_device *dev, int new_mtu);


 void (*tx_timeout) (struct net_device *dev);

 void (*vlan_rx_register)(struct net_device *dev,
          struct vlan_group *grp);
 void (*vlan_rx_add_vid)(struct net_device *dev,
         unsigned short vid);
 void (*vlan_rx_kill_vid)(struct net_device *dev,
          unsigned short vid);

 int (*hard_header_parse)(struct sk_buff *skb,
           unsigned char *haddr);
 int (*neigh_setup)(struct net_device *dev, struct neigh_parms *);
# 517 "linux-2.6.18/include/linux/netdevice.h"
 struct net_bridge_port *br_port;







 struct class_device class_dev;

 struct attribute_group *sysfs_groups[3];
};




static inline  __attribute__((always_inline)) void *netdev_priv(struct net_device *dev)
{
 return (char *)dev + ((sizeof(struct net_device)
     + (32 - 1))
    & ~(32 - 1));
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

# 1 "linux-2.6.18/include/linux/interrupt.h" 1
# 10 "linux-2.6.18/include/linux/interrupt.h"
# 1 "linux-2.6.18/include/linux/irqreturn.h" 1
# 19 "linux-2.6.18/include/linux/irqreturn.h"
typedef int irqreturn_t;
# 11 "linux-2.6.18/include/linux/interrupt.h" 2
# 1 "linux-2.6.18/include/linux/hardirq.h" 1




# 1 "linux-2.6.18/include/linux/smp_lock.h" 1
# 6 "linux-2.6.18/include/linux/hardirq.h" 2

# 1 "linux-2.6.18/include/asm/hardirq.h" 1
# 24 "linux-2.6.18/include/asm/hardirq.h"
# 1 "linux-2.6.18/include/linux/irq.h" 1
# 22 "linux-2.6.18/include/linux/irq.h"
# 1 "linux-2.6.18/include/asm/irq.h" 1
# 42 "linux-2.6.18/include/asm/irq.h"
static __inline__  __attribute__((always_inline)) int irq_canonicalize(int irq)
{
 return ((irq == 2) ? 9 : irq);
}
# 23 "linux-2.6.18/include/linux/irq.h" 2
# 63 "linux-2.6.18/include/linux/irq.h"
struct proc_dir_entry;
# 87 "linux-2.6.18/include/linux/irq.h"
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
# 114 "linux-2.6.18/include/linux/irq.h"
 const char *typename;
};
# 141 "linux-2.6.18/include/linux/irq.h"
struct irq_desc {
 void (*handle_irq)(unsigned int irq,
           struct irq_desc *desc,
           struct pt_regs *regs);
 struct irq_chip *chip;
 void *handler_data;
 void *chip_data;
 struct irqaction *action;
 unsigned int status;

 unsigned int depth;
 unsigned int wake_depth;
 unsigned int irq_count;
 unsigned int irqs_unhandled;
 spinlock_t lock;





 cpumask_t pending_mask;
 unsigned int move_irq;


 struct proc_dir_entry *dir;

} __attribute__((__aligned__((1 << (7))))) ;

typedef  struct irq_desc   _GLOBAL_175_T; extern  _GLOBAL_175_T  _GLOBAL_0_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_1_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_2_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_3_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_4_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_5_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_6_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_7_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_8_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_9_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_10_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_11_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_12_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_13_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_14_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_15_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_16_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_17_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_18_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_19_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_20_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_21_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_22_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_23_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_24_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_25_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_26_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_27_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_28_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_29_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_30_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_31_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_32_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_33_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_34_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_35_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_36_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_37_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_38_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_39_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_40_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_41_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_42_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_43_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_44_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_45_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_46_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_47_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_48_irq_desc_I [ 224 ] ; extern  _GLOBAL_175_T  _GLOBAL_49_irq_desc_I [ 224 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_irq_desc_I) *_GLOBAL_irq_desc_24_A[NUM_STACKS];   





typedef struct irq_chip hw_irq_controller;

typedef struct irq_desc irq_desc_t;




# 1 "linux-2.6.18/include/asm/hw_irq.h" 1
# 20 "linux-2.6.18/include/asm/hw_irq.h"
# 1 "linux-2.6.18/include/linux/profile.h" 1
# 14 "linux-2.6.18/include/linux/profile.h"
struct proc_dir_entry;
struct pt_regs;
struct notifier_block;


void  __attribute__ ((__section__ (".init.text"))) profile_init(void);
void profile_tick(int, struct pt_regs *);
void profile_hit(int, void *);

void create_prof_cpu_mask(struct proc_dir_entry *);




enum profile_type {
 PROFILE_TASK_EXIT,
 PROFILE_MUNMAP
};



struct task_struct;
struct mm_struct;


void profile_task_exit(struct task_struct * task);




int profile_handoff_task(struct task_struct * task);


void profile_munmap(unsigned long addr);

int task_handoff_register(struct notifier_block * n);
int task_handoff_unregister(struct notifier_block * n);

int profile_event_register(enum profile_type, struct notifier_block * n);
int profile_event_unregister(enum profile_type, struct notifier_block * n);

int register_timer_hook(int (*hook)(struct pt_regs *));
void unregister_timer_hook(int (*hook)(struct pt_regs *));


typedef  int   ( *_GLOBAL_177_T  )  ( struct pt_regs   *  ) ; extern  _GLOBAL_177_T global_timer_hook[NUM_STACKS];     

struct pt_regs;
# 21 "linux-2.6.18/include/asm/hw_irq.h" 2


struct irq_chip;
# 78 "linux-2.6.18/include/asm/hw_irq.h"
typedef  u8  _GLOBAL_178_T; extern  _GLOBAL_178_T  _GLOBAL_0_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_1_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_2_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_3_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_4_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_5_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_6_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_7_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_8_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_9_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_10_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_11_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_12_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_13_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_14_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_15_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_16_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_17_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_18_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_19_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_20_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_21_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_22_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_23_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_24_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_25_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_26_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_27_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_28_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_29_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_30_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_31_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_32_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_33_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_34_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_35_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_36_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_37_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_38_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_39_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_40_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_41_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_42_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_43_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_44_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_45_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_46_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_47_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_48_irq_vector_I [ ( 32 * 1  )  ] ; extern  _GLOBAL_178_T  _GLOBAL_49_irq_vector_I [ ( 32 * 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_irq_vector_I) *_GLOBAL_irq_vector_25_A[NUM_STACKS];    
# 89 "linux-2.6.18/include/asm/hw_irq.h"
extern void disable_8259A_irq(unsigned int irq);
extern void enable_8259A_irq(unsigned int irq);
extern int i8259A_irq_pending(unsigned int irq);
extern void make_8259A_irq(unsigned int irq);
extern void init_8259A(int aeoi);
extern void send_IPI_self(int vector);
extern void init_VISWS_APIC_irqs(void);
extern void setup_IO_APIC(void);
extern void disable_IO_APIC(void);
extern void print_IO_APIC(void);
extern int IO_APIC_get_PCI_irq_vector(int bus, int slot, int fn);
extern void send_IPI(int dest, int vector);
extern void setup_ioapic_dest(void);

typedef  unsigned long   _GLOBAL_179_T; extern  _GLOBAL_179_T  global_io_apic_irqs[NUM_STACKS];    

typedef  atomic_t  _GLOBAL_180_T; extern  _GLOBAL_180_T  global_irq_err_count[NUM_STACKS];   
typedef  atomic_t  _GLOBAL_181_T; extern  _GLOBAL_181_T  global_irq_mis_count[NUM_STACKS];   
# 183 "linux-2.6.18/include/linux/irq.h" 2

extern int setup_irq(unsigned int irq, struct irqaction *new);
# 25 "linux-2.6.18/include/asm/hardirq.h" 2

typedef struct {
        unsigned int __softirq_pending;
        unsigned long idle_timestamp;
        unsigned int __nmi_count;
        unsigned int apic_timer_irqs;
}  __attribute__((__aligned__((1 << (7))))) irq_cpustat_t;

typedef  __typeof__ ( irq_cpustat_t )   _GLOBAL_182_T; extern  _GLOBAL_182_T  global_per_cpu__irq_stat[NUM_STACKS];   
typedef  irq_cpustat_t  _GLOBAL_183_T; extern  _GLOBAL_183_T  _GLOBAL_0_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_1_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_2_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_3_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_4_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_5_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_6_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_7_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_8_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_9_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_10_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_11_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_12_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_13_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_14_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_15_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_16_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_17_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_18_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_19_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_20_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_21_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_22_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_23_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_24_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_25_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_26_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_27_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_28_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_29_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_30_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_31_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_32_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_33_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_34_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_35_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_36_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_37_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_38_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_39_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_40_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_41_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_42_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_43_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_44_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_45_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_46_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_47_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_48_irq_stat_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_49_irq_stat_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_irq_stat_I) *_GLOBAL_irq_stat_26_A[NUM_STACKS];  




# 1 "linux-2.6.18/include/linux/irq_cpustat.h" 1
# 40 "linux-2.6.18/include/asm/hardirq.h" 2
# 8 "linux-2.6.18/include/linux/hardirq.h" 2
# 90 "linux-2.6.18/include/linux/hardirq.h"
struct task_struct;


static inline  __attribute__((always_inline)) void account_system_vtime(struct task_struct *tsk)
{
}
# 124 "linux-2.6.18/include/linux/hardirq.h"
extern void irq_exit(void);
# 12 "linux-2.6.18/include/linux/interrupt.h" 2
# 67 "linux-2.6.18/include/linux/interrupt.h"
struct irqaction {
 irqreturn_t (*handler)(int, void *, struct pt_regs *);
 unsigned long flags;
 cpumask_t mask;
 const char *name;
 void *dev_id;
 struct irqaction *next;
 int irq;
 struct proc_dir_entry *dir;
};

extern irqreturn_t no_action(int cpl, void *dev_id, struct pt_regs *regs);
extern int request_irq(unsigned int,
         irqreturn_t (*handler)(int, void *, struct pt_regs *),
         unsigned long, const char *, void *);
extern void free_irq(unsigned int, void *);
# 178 "linux-2.6.18/include/linux/interrupt.h"
static inline  __attribute__((always_inline)) void  __attribute__((deprecated)) cli(void)
{
 ;
}
static inline  __attribute__((always_inline)) void  __attribute__((deprecated)) sti(void)
{
 ;
}
static inline  __attribute__((always_inline)) void  __attribute__((deprecated)) save_flags(unsigned long *x)
{
 (void)(*x);
}

static inline  __attribute__((always_inline)) void  __attribute__((deprecated)) restore_flags(unsigned long x)
{
 (void)(x);
}

static inline  __attribute__((always_inline)) void  __attribute__((deprecated)) save_and_cli(unsigned long *x)
{
 (void)(*x);
}



extern void local_bh_disable(void);
extern void __local_bh_enable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);







enum
{
 HI_SOFTIRQ=0,
 TIMER_SOFTIRQ,
 NET_TX_SOFTIRQ,
 NET_RX_SOFTIRQ,
 BLOCK_SOFTIRQ,
 TASKLET_SOFTIRQ
};





struct softirq_action
{
 void (*action)(struct softirq_action *);
 void *data;
};

 void do_softirq(void);
extern void open_softirq(int nr, void (*action)(struct softirq_action*), void *data);
extern void softirq_init(void);

extern void raise_softirq_irqoff(unsigned int nr);
extern void raise_softirq(unsigned int nr);
# 263 "linux-2.6.18/include/linux/interrupt.h"
struct tasklet_struct
{
 struct tasklet_struct *next;
 unsigned long state;
 atomic_t count;
 void (*func)(unsigned long);
 unsigned long data;
};
# 279 "linux-2.6.18/include/linux/interrupt.h"
enum
{
 TASKLET_STATE_SCHED,
 TASKLET_STATE_RUN
};
# 307 "linux-2.6.18/include/linux/interrupt.h"
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
# 396 "linux-2.6.18/include/linux/interrupt.h"
extern unsigned long probe_irq_on(void);
extern int probe_irq_off(unsigned long);
extern unsigned int probe_irq_mask(unsigned long);
# 561 "linux-2.6.18/include/linux/netdevice.h" 2


typedef  struct net_device   _GLOBAL_184_T; extern  _GLOBAL_184_T  global_loopback_dev[NUM_STACKS];    
typedef  struct net_device   _GLOBAL_185_T; extern  _GLOBAL_185_T  * global_dev_base[NUM_STACKS];    
typedef  rwlock_t  _GLOBAL_186_T; extern  _GLOBAL_186_T  global_dev_base_lock[NUM_STACKS];   

extern int netdev_boot_setup_check(struct net_device *dev);
extern unsigned long netdev_boot_base(const char *prefix, int unit);
extern struct net_device *dev_getbyhwaddr(unsigned short type, char *hwaddr);
extern struct net_device *dev_getfirstbyhwtype(unsigned short type);
extern void dev_add_pack(struct packet_type *pt);
extern void dev_remove_pack(struct packet_type *pt);
extern void __dev_remove_pack(struct packet_type *pt);

extern struct net_device *dev_get_by_flags(unsigned short flags,
        unsigned short mask);
extern struct net_device *dev_get_by_name(const char *name);
extern struct net_device *__dev_get_by_name(const char *name);
extern int dev_alloc_name(struct net_device *dev, const char *name);
extern int dev_open(struct net_device *dev);
extern int dev_close(struct net_device *dev);
extern int dev_queue_xmit(struct sk_buff *skb);
extern int register_netdevice(struct net_device *dev);
extern int unregister_netdevice(struct net_device *dev);
extern void free_netdev(struct net_device *dev);
extern void synchronize_net(void);
extern int register_netdevice_notifier(struct notifier_block *nb);
extern int unregister_netdevice_notifier(struct notifier_block *nb);
extern int call_netdevice_notifiers(unsigned long val, void *v);
extern struct net_device *dev_get_by_index(int ifindex);
extern struct net_device *__dev_get_by_index(int ifindex);
extern int dev_restart(struct net_device *dev);




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

 struct net_device backlog_dev;



};

typedef  __typeof__ ( struct softnet_data  )   _GLOBAL_187_T; extern  _GLOBAL_187_T  global_per_cpu__softnet_data[NUM_STACKS];    



extern void __netif_schedule(struct net_device *dev);

static inline  __attribute__((always_inline)) void netif_schedule(struct net_device *dev)
{
 if (!(__builtin_constant_p(__LINK_STATE_XOFF) ? constant_test_bit((__LINK_STATE_XOFF),(&dev->state)) : variable_test_bit((__LINK_STATE_XOFF),(&dev->state))))
  __netif_schedule(dev);
}

static inline  __attribute__((always_inline)) void netif_start_queue(struct net_device *dev)
{
 clear_bit(__LINK_STATE_XOFF, &dev->state);
}

static inline  __attribute__((always_inline)) void netif_wake_queue(struct net_device *dev)
{




 if (test_and_clear_bit(__LINK_STATE_XOFF, &dev->state))
  __netif_schedule(dev);
}

static inline  __attribute__((always_inline)) void netif_stop_queue(struct net_device *dev)
{




 set_bit(__LINK_STATE_XOFF, &dev->state);
}

static inline  __attribute__((always_inline)) int netif_queue_stopped(const struct net_device *dev)
{
 return (__builtin_constant_p(__LINK_STATE_XOFF) ? constant_test_bit((__LINK_STATE_XOFF),(&dev->state)) : variable_test_bit((__LINK_STATE_XOFF),(&dev->state)));
}

static inline  __attribute__((always_inline)) int netif_running(const struct net_device *dev)
{
 return (__builtin_constant_p(__LINK_STATE_START) ? constant_test_bit((__LINK_STATE_START),(&dev->state)) : variable_test_bit((__LINK_STATE_START),(&dev->state)));
}





static inline  __attribute__((always_inline)) void dev_kfree_skb_irq(struct sk_buff *skb)
{
 if (atomic_dec_and_test(&skb->users)) {
  struct softnet_data *sd;
  unsigned long flags;

  (void)(flags);
  sd = &global_per_cpu__softnet_data[get_stack_id()];
  skb->next = sd->completion_queue;
  sd->completion_queue = skb;
  raise_softirq_irqoff(NET_TX_SOFTIRQ);
  (void)(flags);
 }
}




extern void dev_kfree_skb_any(struct sk_buff *skb);


extern int netif_rx(struct sk_buff *skb);
extern int netif_rx_ni(struct sk_buff *skb);

extern int netif_receive_skb(struct sk_buff *skb);
extern int dev_valid_name(const char *name);
extern int dev_ioctl(unsigned int cmd, void *);
extern int dev_ethtool(struct ifreq *);
extern unsigned dev_get_flags(const struct net_device *);
extern int dev_change_flags(struct net_device *, unsigned);
extern int dev_change_name(struct net_device *, char *);
extern int dev_set_mtu(struct net_device *, int);
extern int dev_set_mac_address(struct net_device *,
         struct sockaddr *);
extern int dev_hard_start_xmit(struct sk_buff *skb,
         struct net_device *dev);

extern void dev_init(void);

typedef  int  _GLOBAL_188_T; extern  _GLOBAL_188_T  global_netdev_budget[NUM_STACKS];   


extern void netdev_run_todo(void);

static inline  __attribute__((always_inline)) void dev_put(struct net_device *dev)
{
 atomic_dec(&dev->refcnt);
}

static inline  __attribute__((always_inline)) void dev_hold(struct net_device *dev)
{
 atomic_inc(&dev->refcnt);
}
# 735 "linux-2.6.18/include/linux/netdevice.h"
extern void linkwatch_fire_event(struct net_device *dev);

static inline  __attribute__((always_inline)) int netif_carrier_ok(const struct net_device *dev)
{
 return !(__builtin_constant_p(__LINK_STATE_NOCARRIER) ? constant_test_bit((__LINK_STATE_NOCARRIER),(&dev->state)) : variable_test_bit((__LINK_STATE_NOCARRIER),(&dev->state)));
}

extern void __netdev_watchdog_up(struct net_device *dev);

extern void netif_carrier_on(struct net_device *dev);

extern void netif_carrier_off(struct net_device *dev);

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
 return (__builtin_constant_p(__LINK_STATE_DORMANT) ? constant_test_bit((__LINK_STATE_DORMANT),(&dev->state)) : variable_test_bit((__LINK_STATE_DORMANT),(&dev->state)));
}


static inline  __attribute__((always_inline)) int netif_oper_up(const struct net_device *dev) {
 return (dev->operstate == IF_OPER_UP ||
  dev->operstate == IF_OPER_UNKNOWN );
}


static inline  __attribute__((always_inline)) int netif_device_present(struct net_device *dev)
{
 return (__builtin_constant_p(__LINK_STATE_PRESENT) ? constant_test_bit((__LINK_STATE_PRESENT),(&dev->state)) : variable_test_bit((__LINK_STATE_PRESENT),(&dev->state)));
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
# 820 "linux-2.6.18/include/linux/netdevice.h"
static inline  __attribute__((always_inline)) u32 netif_msg_init(int debug_value, int default_msg_enable_bits)
{

 if (debug_value < 0 || debug_value >= (sizeof(u32) * 8))
  return default_msg_enable_bits;
 if (debug_value == 0)
  return 0;

 return (1 << debug_value) - 1;
}


static inline  __attribute__((always_inline)) int __netif_rx_schedule_prep(struct net_device *dev)
{
 return !test_and_set_bit(__LINK_STATE_RX_SCHED, &dev->state);
}


static inline  __attribute__((always_inline)) int netif_rx_schedule_prep(struct net_device *dev)
{
 return netif_running(dev) && __netif_rx_schedule_prep(dev);
}





extern void __netif_rx_schedule(struct net_device *dev);



static inline  __attribute__((always_inline)) void netif_rx_schedule(struct net_device *dev)
{
 if (netif_rx_schedule_prep(dev))
  __netif_rx_schedule(dev);
}




static inline  __attribute__((always_inline)) int netif_rx_reschedule(struct net_device *dev, int undo)
{
 if (netif_rx_schedule_prep(dev)) {
  unsigned long flags;

  dev->quota += undo;

  (void)(flags);
  list_add_tail(&dev->poll_list, &global_per_cpu__softnet_data[get_stack_id()].poll_list);
  do { (((*((void)(0), &global_per_cpu__irq_stat[get_stack_id()])).__softirq_pending) |= (1UL << (NET_RX_SOFTIRQ))); } while (0);
  (void)(flags);
  return 1;
 }
 return 0;
}






static inline  __attribute__((always_inline)) void netif_rx_complete(struct net_device *dev)
{
 unsigned long flags;

 (void)(flags);
 do { if (!(__builtin_constant_p(__LINK_STATE_RX_SCHED) ? constant_test_bit((__LINK_STATE_RX_SCHED),(&dev->state)) : variable_test_bit((__LINK_STATE_RX_SCHED),(&dev->state)))) ; } while(0);
 list_del(&dev->poll_list);
 __asm__ __volatile__("": : :"memory");
 clear_bit(__LINK_STATE_RX_SCHED, &dev->state);
 (void)(flags);
}

static inline  __attribute__((always_inline)) void netif_poll_disable(struct net_device *dev)
{
 while (test_and_set_bit(__LINK_STATE_RX_SCHED, &dev->state))

  schedule_timeout_interruptible(1);
}

static inline  __attribute__((always_inline)) void netif_poll_enable(struct net_device *dev)
{
 clear_bit(__LINK_STATE_RX_SCHED, &dev->state);
}




static inline  __attribute__((always_inline)) void __netif_rx_complete(struct net_device *dev)
{
 do { if (!(__builtin_constant_p(__LINK_STATE_RX_SCHED) ? constant_test_bit((__LINK_STATE_RX_SCHED),(&dev->state)) : variable_test_bit((__LINK_STATE_RX_SCHED),(&dev->state)))) ; } while(0);
 list_del(&dev->poll_list);
 __asm__ __volatile__("": : :"memory");
 clear_bit(__LINK_STATE_RX_SCHED, &dev->state);
}

static inline  __attribute__((always_inline)) void netif_tx_lock(struct net_device *dev)
{
 do { do { } while (0); (void)0; (void)(&dev->_xmit_lock); } while (0);
 dev->xmit_lock_owner = 0;
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

static inline  __attribute__((always_inline)) void netif_tx_disable(struct net_device *dev)
{
 netif_tx_lock_bh(dev);
 netif_stop_queue(dev);
 netif_tx_unlock_bh(dev);
}



extern void ether_setup(struct net_device *dev);


extern struct net_device *alloc_netdev(int sizeof_priv, const char *name,
           void (*setup)(struct net_device *));
extern int register_netdev(struct net_device *dev);
extern void unregister_netdev(struct net_device *dev);

extern void dev_mc_upload(struct net_device *dev);
extern int dev_mc_delete(struct net_device *dev, void *addr, int alen, int all);
extern int dev_mc_add(struct net_device *dev, void *addr, int alen, int newonly);
extern void dev_mc_discard(struct net_device *dev);
extern void dev_set_promiscuity(struct net_device *dev, int inc);
extern void dev_set_allmulti(struct net_device *dev, int inc);
extern void netdev_state_change(struct net_device *dev);
extern void netdev_features_change(struct net_device *dev);

extern void dev_load(const char *name);
extern void dev_mcast_init(void);
typedef  int  _GLOBAL_189_T; extern  _GLOBAL_189_T  global_netdev_max_backlog[NUM_STACKS];   
typedef  int  _GLOBAL_190_T; extern  _GLOBAL_190_T  global_weight_p[NUM_STACKS];   
extern int netdev_set_master(struct net_device *dev, struct net_device *master);
extern int skb_checksum_help(struct sk_buff *skb, int inward);
extern struct sk_buff *skb_gso_segment(struct sk_buff *skb, int features);



static inline  __attribute__((always_inline)) void netdev_rx_csum_fault(struct net_device *dev)
{
}


extern void net_enable_timestamp(void);
extern void net_disable_timestamp(void);


extern void *dev_seq_start(struct seq_file *seq, loff_t *pos);
extern void *dev_seq_next(struct seq_file *seq, void *v, loff_t *pos);
extern void dev_seq_stop(struct seq_file *seq, void *v);


extern void linkwatch_run_queue(void);

static inline  __attribute__((always_inline)) int net_gso_ok(int features, int gso_type)
{
 int feature = gso_type << 16;
 return (features & feature) == feature;
}

static inline  __attribute__((always_inline)) int skb_gso_ok(struct sk_buff *skb, int features)
{
 return net_gso_ok(features, ((struct skb_shared_info *)((skb)->end))->gso_type);
}

static inline  __attribute__((always_inline)) int netif_needs_gso(struct net_device *dev, struct sk_buff *skb)
{
 return skb_is_gso(skb) &&
        (!skb_gso_ok(skb, dev->features) ||
  __builtin_expect(!!(skb->ip_summed != 1), 0));
}




static inline  __attribute__((always_inline)) int skb_bond_should_drop(struct sk_buff *skb)
{
 struct net_device *dev = skb->dev;
 struct net_device *master = dev->master;

 if (master &&
     (dev->priv_flags & 0x4)) {
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
# 40 "linux-2.6.18/net/ipv6/reassembly.c" 2
# 1 "linux-2.6.18/include/linux/in6.h" 1
# 30 "linux-2.6.18/include/linux/in6.h"
struct in6_addr
{
 union
 {
  __u8 u6_addr8[16];
  __u16 u6_addr16[8];
  __u32 u6_addr32[4];
 } in6_u;



};
# 51 "linux-2.6.18/include/linux/in6.h"
typedef  const struct in6_addr    _GLOBAL_191_T; extern  _GLOBAL_191_T  global_in6addr_loopback[NUM_STACKS];     


struct sockaddr_in6 {
 unsigned short int sin6_family;
 __u16 sin6_port;
 __u32 sin6_flowinfo;
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
 __u32 flr_label;
 __u8 flr_action;
 __u8 flr_share;
 __u16 flr_flags;
 __u16 flr_expires;
 __u16 flr_linger;
 __u32 __flr_pad;

};
# 41 "linux-2.6.18/net/ipv6/reassembly.c" 2
# 1 "linux-2.6.18/include/linux/ipv6.h" 1
# 18 "linux-2.6.18/include/linux/ipv6.h"
struct in6_pktinfo {
 struct in6_addr ipi6_addr;
 int ipi6_ifindex;
};


struct in6_ifreq {
 struct in6_addr ifr6_addr;
 __u32 ifr6_prefixlen;
 int ifr6_ifindex;
};







struct ipv6_rt_hdr {
 __u8 nexthdr;
 __u8 hdrlen;
 __u8 type;
 __u8 segments_left;





};


struct ipv6_opt_hdr {
 __u8 nexthdr;
 __u8 hdrlen;



};
# 68 "linux-2.6.18/include/linux/ipv6.h"
struct rt0_hdr {
 struct ipv6_rt_hdr rt_hdr;
 __u32 reserved;
 struct in6_addr addr[0];


};

struct ipv6_auth_hdr {
 __u8 nexthdr;
 __u8 hdrlen;
 __u16 reserved;
 __u32 spi;
 __u32 seq_no;
 __u8 auth_data[0];
};

struct ipv6_esp_hdr {
 __u32 spi;
 __u32 seq_no;
 __u8 enc_data[0];
};

struct ipv6_comp_hdr {
 __u8 nexthdr;
 __u8 flags;
 __u16 cpi;
};
# 104 "linux-2.6.18/include/linux/ipv6.h"
struct ipv6hdr {

 __u8 priority:4,
    version:4;






 __u8 flow_lbl[3];

 __u16 payload_len;
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
 DEVCONF_MAX
};


# 1 "linux-2.6.18/include/linux/icmpv6.h" 1





struct icmp6hdr {

 __u8 icmp6_type;
 __u8 icmp6_code;
 __u16 icmp6_cksum;


 union {
  __u32 un_data32[1];
  __u16 un_data16[2];
  __u8 un_data8[4];

  struct icmpv6_echo {
   __u16 identifier;
   __u16 sequence;
  } u_echo;

                struct icmpv6_nd_advt {

                        __u32 reserved:5,
                          override:1,
                          solicited:1,
                          router:1,
     reserved2:24;
# 38 "linux-2.6.18/include/linux/icmpv6.h"
                } u_nd_advt;

                struct icmpv6_nd_ra {
   __u8 hop_limit;

   __u8 reserved:4,
     router_pref:2,
     other:1,
     managed:1;
# 56 "linux-2.6.18/include/linux/icmpv6.h"
   __u16 rt_lifetime;
                } u_nd_ra;

 } icmp6_dataun;
# 76 "linux-2.6.18/include/linux/icmpv6.h"
};
# 143 "linux-2.6.18/include/linux/icmpv6.h"
struct icmp6_filter {
 __u32 data[8];
};
# 165 "linux-2.6.18/include/linux/icmpv6.h"
extern void icmpv6_send(struct sk_buff *skb,
          int type, int code,
          __u32 info,
          struct net_device *dev);

extern int icmpv6_init(struct net_proto_family *ops);
extern int icmpv6_err_convert(int type, int code,
          int *err);
extern void icmpv6_cleanup(void);
extern void icmpv6_param_prob(struct sk_buff *skb,
         int code, int pos);
# 188 "linux-2.6.18/include/linux/ipv6.h" 2
# 1 "linux-2.6.18/include/linux/tcp.h" 1
# 23 "linux-2.6.18/include/linux/tcp.h"
struct tcphdr {
 __u16 source;
 __u16 dest;
 __u32 seq;
 __u32 ack_seq;

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
# 53 "linux-2.6.18/include/linux/tcp.h"
 __u16 window;
 __u16 check;
 __u16 urg_ptr;
};






union tcp_word_hdr {
 struct tcphdr hdr;
 __u32 words[5];
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
# 103 "linux-2.6.18/include/linux/tcp.h"
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





# 1 "linux-2.6.18/include/net/sock.h" 1
# 50 "linux-2.6.18/include/net/sock.h"
# 1 "linux-2.6.18/include/linux/security.h" 1
# 26 "linux-2.6.18/include/linux/security.h"
# 1 "linux-2.6.18/include/linux/binfmts.h" 1





struct pt_regs;
# 23 "linux-2.6.18/include/linux/binfmts.h"
struct linux_binprm{
 char buf[128];
 struct page *page[32];
 struct mm_struct *mm;
 unsigned long p;
 int sh_bang;
 struct file * file;
 int e_uid, e_gid;
 kernel_cap_t cap_inheritable, cap_permitted, cap_effective;
 void *security;
 int argc, envc;
 char * filename;
 char * interp;


 unsigned interp_flags;
 unsigned interp_data;
 unsigned long loader, exec;
};
# 55 "linux-2.6.18/include/linux/binfmts.h"
struct linux_binfmt {
 struct linux_binfmt * next;
 struct module *module;
 int (*load_binary)(struct linux_binprm *, struct pt_regs * regs);
 int (*load_shlib)(struct file *);
 int (*core_dump)(long signr, struct pt_regs * regs, struct file * file);
 unsigned long min_coredump;
};

extern int register_binfmt(struct linux_binfmt *);
extern int unregister_binfmt(struct linux_binfmt *);

extern int prepare_binprm(struct linux_binprm *);
extern void remove_arg_zero(struct linux_binprm *);
extern int search_binary_handler(struct linux_binprm *,struct pt_regs *);
extern int flush_old_exec(struct linux_binprm * bprm);

typedef  int  _GLOBAL_192_T; extern  _GLOBAL_192_T  global_suid_dumpable[NUM_STACKS];   
# 82 "linux-2.6.18/include/linux/binfmts.h"
extern int setup_arg_pages(struct linux_binprm * bprm,
      unsigned long stack_top,
      int executable_stack);
extern int copy_strings_kernel(int argc,char ** argv,struct linux_binprm *bprm);
extern void compute_creds(struct linux_binprm *binprm);
extern int do_coredump(long signr, int exit_code, struct pt_regs * regs);
extern int set_binfmt(struct linux_binfmt *new);
# 27 "linux-2.6.18/include/linux/security.h" 2



# 1 "linux-2.6.18/include/linux/shm.h" 1
# 19 "linux-2.6.18/include/linux/shm.h"
# 1 "linux-2.6.18/include/asm/shmparam.h" 1
# 20 "linux-2.6.18/include/linux/shm.h" 2


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


# 1 "linux-2.6.18/include/asm/shmbuf.h" 1
# 13 "linux-2.6.18/include/asm/shmbuf.h"
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
# 38 "linux-2.6.18/include/linux/shm.h" 2
# 58 "linux-2.6.18/include/linux/shm.h"
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
 int id;
 unsigned long shm_nattch;
 unsigned long shm_segsz;
 time_t shm_atim;
 time_t shm_dtim;
 time_t shm_ctim;
 pid_t shm_cprid;
 pid_t shm_lprid;
 struct user_struct *mlock_user;
};
# 98 "linux-2.6.18/include/linux/shm.h"
long do_shmat(int shmid, char *shmaddr, int shmflg, unsigned long *addr);
# 31 "linux-2.6.18/include/linux/security.h" 2
# 1 "linux-2.6.18/include/linux/msg.h" 1
# 15 "linux-2.6.18/include/linux/msg.h"
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


# 1 "linux-2.6.18/include/asm/msgbuf.h" 1
# 13 "linux-2.6.18/include/asm/msgbuf.h"
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
# 33 "linux-2.6.18/include/linux/msg.h" 2


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
# 68 "linux-2.6.18/include/linux/msg.h"
struct msg_msg {
 struct list_head m_list;
 long m_type;
 int m_ts;
 struct msg_msgseg* next;
 void *security;

};


struct msg_queue {
 struct kern_ipc_perm q_perm;
 int q_id;
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
# 32 "linux-2.6.18/include/linux/security.h" 2

# 1 "linux-2.6.18/include/linux/key.h" 1
# 27 "linux-2.6.18/include/linux/key.h"
typedef int32_t key_serial_t;


typedef uint32_t key_perm_t;

struct key;
# 381 "linux-2.6.18/include/linux/key.h"
typedef  struct key   _GLOBAL_193_T; extern  _GLOBAL_193_T  _GLOBAL_0_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_1_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_2_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_3_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_4_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_5_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_6_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_7_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_8_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_9_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_10_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_11_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_12_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_13_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_14_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_15_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_16_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_17_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_18_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_19_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_20_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_21_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_22_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_23_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_24_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_25_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_26_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_27_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_28_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_29_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_30_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_31_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_32_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_33_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_34_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_35_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_36_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_37_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_38_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_39_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_40_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_41_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_42_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_43_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_44_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_45_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_46_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_47_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_48_root_user_keyring_I; extern  _GLOBAL_193_T  _GLOBAL_49_root_user_keyring_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_root_user_keyring_I) *_GLOBAL_root_user_keyring_27_A[NUM_STACKS];   
typedef  struct key   _GLOBAL_194_T; extern  _GLOBAL_194_T  _GLOBAL_0_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_1_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_2_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_3_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_4_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_5_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_6_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_7_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_8_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_9_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_10_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_11_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_12_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_13_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_14_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_15_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_16_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_17_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_18_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_19_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_20_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_21_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_22_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_23_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_24_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_25_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_26_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_27_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_28_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_29_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_30_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_31_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_32_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_33_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_34_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_35_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_36_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_37_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_38_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_39_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_40_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_41_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_42_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_43_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_44_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_45_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_46_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_47_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_48_root_session_keyring_I; extern  _GLOBAL_194_T  _GLOBAL_49_root_session_keyring_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_root_session_keyring_I) *_GLOBAL_root_session_keyring_28_A[NUM_STACKS];   
# 34 "linux-2.6.18/include/linux/security.h" 2

struct ctl_table;





extern int cap_capable (struct task_struct *tsk, int cap);
extern int cap_settime (struct timespec *ts, struct timezone *tz);
extern int cap_ptrace (struct task_struct *parent, struct task_struct *child);
extern int cap_capget (struct task_struct *target, kernel_cap_t *effective, kernel_cap_t *inheritable, kernel_cap_t *permitted);
extern int cap_capset_check (struct task_struct *target, kernel_cap_t *effective, kernel_cap_t *inheritable, kernel_cap_t *permitted);
extern void cap_capset_set (struct task_struct *target, kernel_cap_t *effective, kernel_cap_t *inheritable, kernel_cap_t *permitted);
extern int cap_bprm_set_security (struct linux_binprm *bprm);
extern void cap_bprm_apply_creds (struct linux_binprm *bprm, int unsafe);
extern int cap_bprm_secureexec(struct linux_binprm *bprm);
extern int cap_inode_setxattr(struct dentry *dentry, char *name, void *value, size_t size, int flags);
extern int cap_inode_removexattr(struct dentry *dentry, char *name);
extern int cap_task_post_setuid (uid_t old_ruid, uid_t old_euid, uid_t old_suid, int flags);
extern void cap_task_reparent_to_init (struct task_struct *p);
extern int cap_syslog (int type);
extern int cap_vm_enough_memory (long pages);

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
# 88 "linux-2.6.18/include/linux/security.h"
struct nfsctl_arg;
struct sched_param;
struct swap_info_struct;
# 2104 "linux-2.6.18/include/linux/security.h"
static inline  __attribute__((always_inline)) int security_init(void)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_ptrace (struct task_struct *parent, struct task_struct * child)
{
 return cap_ptrace (parent, child);
}

static inline  __attribute__((always_inline)) int security_capget (struct task_struct *target,
       kernel_cap_t *effective,
       kernel_cap_t *inheritable,
       kernel_cap_t *permitted)
{
 return cap_capget (target, effective, inheritable, permitted);
}

static inline  __attribute__((always_inline)) int security_capset_check (struct task_struct *target,
      kernel_cap_t *effective,
      kernel_cap_t *inheritable,
      kernel_cap_t *permitted)
{
 return cap_capset_check (target, effective, inheritable, permitted);
}

static inline  __attribute__((always_inline)) void security_capset_set (struct task_struct *target,
     kernel_cap_t *effective,
     kernel_cap_t *inheritable,
     kernel_cap_t *permitted)
{
 cap_capset_set (target, effective, inheritable, permitted);
}

static inline  __attribute__((always_inline)) int security_capable(struct task_struct *tsk, int cap)
{
 return cap_capable(tsk, cap);
}

static inline  __attribute__((always_inline)) int security_acct (struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sysctl(struct ctl_table *table, int op)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_quotactl (int cmds, int type, int id,
         struct super_block * sb)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_quota_on (struct dentry * dentry)
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
 return cap_vm_enough_memory(pages);
}

static inline  __attribute__((always_inline)) int security_bprm_alloc (struct linux_binprm *bprm)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_bprm_free (struct linux_binprm *bprm)
{ }

static inline  __attribute__((always_inline)) void security_bprm_apply_creds (struct linux_binprm *bprm, int unsafe)
{
 cap_bprm_apply_creds (bprm, unsafe);
}

static inline  __attribute__((always_inline)) void security_bprm_post_apply_creds (struct linux_binprm *bprm)
{
 return;
}

static inline  __attribute__((always_inline)) int security_bprm_set (struct linux_binprm *bprm)
{
 return cap_bprm_set_security (bprm);
}

static inline  __attribute__((always_inline)) int security_bprm_check (struct linux_binprm *bprm)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_bprm_secureexec (struct linux_binprm *bprm)
{
 return cap_bprm_secureexec(bprm);
}

static inline  __attribute__((always_inline)) int security_sb_alloc (struct super_block *sb)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sb_free (struct super_block *sb)
{ }

static inline  __attribute__((always_inline)) int security_sb_copy_data (struct file_system_type *type,
      void *orig, void *copy)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_kern_mount (struct super_block *sb, void *data)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_statfs (struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_mount (char *dev_name, struct nameidata *nd,
        char *type, unsigned long flags,
        void *data)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_check_sb (struct vfsmount *mnt,
     struct nameidata *nd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sb_umount (struct vfsmount *mnt, int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sb_umount_close (struct vfsmount *mnt)
{ }

static inline  __attribute__((always_inline)) void security_sb_umount_busy (struct vfsmount *mnt)
{ }

static inline  __attribute__((always_inline)) void security_sb_post_remount (struct vfsmount *mnt,
          unsigned long flags, void *data)
{ }

static inline  __attribute__((always_inline)) void security_sb_post_mountroot (void)
{ }

static inline  __attribute__((always_inline)) void security_sb_post_addmount (struct vfsmount *mnt,
           struct nameidata *mountpoint_nd)
{ }

static inline  __attribute__((always_inline)) int security_sb_pivotroot (struct nameidata *old_nd,
      struct nameidata *new_nd)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sb_post_pivotroot (struct nameidata *old_nd,
            struct nameidata *new_nd)
{ }

static inline  __attribute__((always_inline)) int security_inode_alloc (struct inode *inode)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_inode_free (struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_inode_init_security (struct inode *inode,
      struct inode *dir,
      char **name,
      void **value,
      size_t *len)
{
 return -95;
}

static inline  __attribute__((always_inline)) int security_inode_create (struct inode *dir,
      struct dentry *dentry,
      int mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_link (struct dentry *old_dentry,
           struct inode *dir,
           struct dentry *new_dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_unlink (struct inode *dir,
      struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_symlink (struct inode *dir,
       struct dentry *dentry,
       const char *old_name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_mkdir (struct inode *dir,
     struct dentry *dentry,
     int mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_rmdir (struct inode *dir,
     struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_mknod (struct inode *dir,
     struct dentry *dentry,
     int mode, dev_t dev)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_rename (struct inode *old_dir,
      struct dentry *old_dentry,
      struct inode *new_dir,
      struct dentry *new_dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_readlink (struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_follow_link (struct dentry *dentry,
           struct nameidata *nd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_permission (struct inode *inode, int mask,
          struct nameidata *nd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_setattr (struct dentry *dentry,
       struct iattr *attr)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_getattr (struct vfsmount *mnt,
       struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_inode_delete (struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_inode_setxattr (struct dentry *dentry, char *name,
        void *value, size_t size, int flags)
{
 return cap_inode_setxattr(dentry, name, value, size, flags);
}

static inline  __attribute__((always_inline)) void security_inode_post_setxattr (struct dentry *dentry, char *name,
       void *value, size_t size, int flags)
{ }

static inline  __attribute__((always_inline)) int security_inode_getxattr (struct dentry *dentry, char *name)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_listxattr (struct dentry *dentry)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_inode_removexattr (struct dentry *dentry, char *name)
{
 return cap_inode_removexattr(dentry, name);
}

static inline  __attribute__((always_inline)) const char *security_inode_xattr_getsuffix (void)
{
 return ((void *)0) ;
}

static inline  __attribute__((always_inline)) int security_inode_getsecurity(const struct inode *inode, const char *name, void *buffer, size_t size, int err)
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

static inline  __attribute__((always_inline)) int security_file_permission (struct file *file, int mask)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_alloc (struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_file_free (struct file *file)
{ }

static inline  __attribute__((always_inline)) int security_file_ioctl (struct file *file, unsigned int cmd,
           unsigned long arg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_mmap (struct file *file, unsigned long reqprot,
          unsigned long prot,
          unsigned long flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_mprotect (struct vm_area_struct *vma,
       unsigned long reqprot,
       unsigned long prot)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_lock (struct file *file, unsigned int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_fcntl (struct file *file, unsigned int cmd,
           unsigned long arg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_set_fowner (struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_send_sigiotask (struct task_struct *tsk,
      struct fown_struct *fown,
      int sig)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_file_receive (struct file *file)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_create (unsigned long clone_flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_alloc (struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_task_free (struct task_struct *p)
{ }

static inline  __attribute__((always_inline)) int security_task_setuid (uid_t id0, uid_t id1, uid_t id2,
     int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_post_setuid (uid_t old_ruid, uid_t old_euid,
          uid_t old_suid, int flags)
{
 return cap_task_post_setuid (old_ruid, old_euid, old_suid, flags);
}

static inline  __attribute__((always_inline)) int security_task_setgid (gid_t id0, gid_t id1, gid_t id2,
     int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setpgid (struct task_struct *p, pid_t pgid)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_getpgid (struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_getsid (struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_task_getsecid (struct task_struct *p, u32 *secid)
{ }

static inline  __attribute__((always_inline)) int security_task_setgroups (struct group_info *group_info)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setnice (struct task_struct *p, int nice)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setioprio (struct task_struct *p, int ioprio)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_getioprio (struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setrlimit (unsigned int resource,
        struct rlimit *new_rlim)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_setscheduler (struct task_struct *p,
           int policy,
           struct sched_param *lp)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_getscheduler (struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_movememory (struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_kill (struct task_struct *p,
          struct siginfo *info, int sig,
          u32 secid)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_wait (struct task_struct *p)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_task_prctl (int option, unsigned long arg2,
           unsigned long arg3,
           unsigned long arg4,
           unsigned long arg5)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_task_reparent_to_init (struct task_struct *p)
{
 cap_task_reparent_to_init (p);
}

static inline  __attribute__((always_inline)) void security_task_to_inode(struct task_struct *p, struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_ipc_permission (struct kern_ipc_perm *ipcp,
        short flag)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_msg_msg_alloc (struct msg_msg * msg)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_msg_msg_free (struct msg_msg * msg)
{ }

static inline  __attribute__((always_inline)) int security_msg_queue_alloc (struct msg_queue *msq)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_msg_queue_free (struct msg_queue *msq)
{ }

static inline  __attribute__((always_inline)) int security_msg_queue_associate (struct msg_queue * msq,
      int msqflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_msg_queue_msgctl (struct msg_queue * msq, int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_msg_queue_msgsnd (struct msg_queue * msq,
          struct msg_msg * msg, int msqflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_msg_queue_msgrcv (struct msg_queue * msq,
          struct msg_msg * msg,
          struct task_struct * target,
          long type, int mode)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_shm_alloc (struct shmid_kernel *shp)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_shm_free (struct shmid_kernel *shp)
{ }

static inline  __attribute__((always_inline)) int security_shm_associate (struct shmid_kernel * shp,
       int shmflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_shm_shmctl (struct shmid_kernel * shp, int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_shm_shmat (struct shmid_kernel * shp,
          char *shmaddr, int shmflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sem_alloc (struct sem_array *sma)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_sem_free (struct sem_array *sma)
{ }

static inline  __attribute__((always_inline)) int security_sem_associate (struct sem_array * sma, int semflg)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sem_semctl (struct sem_array * sma, int cmd)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_sem_semop (struct sem_array * sma,
          struct sembuf * sops, unsigned nsops,
          int alter)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_d_instantiate (struct dentry *dentry, struct inode *inode)
{ }

static inline  __attribute__((always_inline)) int security_getprocattr(struct task_struct *p, char *name, void *value, size_t size)
{
 return -22;
}

static inline  __attribute__((always_inline)) int security_setprocattr(struct task_struct *p, char *name, void *value, size_t size)
{
 return -22;
}

static inline  __attribute__((always_inline)) int security_netlink_send (struct sock *sk, struct sk_buff *skb)
{
 return cap_netlink_send (sk, skb);
}

static inline  __attribute__((always_inline)) int security_netlink_recv (struct sk_buff *skb, int cap)
{
 return cap_netlink_recv (skb, cap);
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
      struct file_operations *fops)
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

static inline  __attribute__((always_inline)) void security_release_secctx(char *secdata, u32 seclen)
{
}
# 2893 "linux-2.6.18/include/linux/security.h"
static inline  __attribute__((always_inline)) int security_unix_stream_connect(struct socket * sock,
            struct socket * other,
            struct sock * newsk)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_unix_may_send(struct socket * sock,
      struct socket * other)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_create (int family, int type,
       int protocol, int kern)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_socket_post_create(struct socket * sock,
            int family,
            int type,
            int protocol, int kern)
{
}

static inline  __attribute__((always_inline)) int security_socket_bind(struct socket * sock,
           struct sockaddr * address,
           int addrlen)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_connect(struct socket * sock,
       struct sockaddr * address,
       int addrlen)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_listen(struct socket * sock, int backlog)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_accept(struct socket * sock,
      struct socket * newsock)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_socket_post_accept(struct socket * sock,
            struct socket * newsock)
{
}

static inline  __attribute__((always_inline)) int security_socket_sendmsg(struct socket * sock,
       struct msghdr * msg, int size)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_recvmsg(struct socket * sock,
       struct msghdr * msg, int size,
       int flags)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getsockname(struct socket * sock)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getpeername(struct socket * sock)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_getsockopt(struct socket * sock,
          int level, int optname)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_setsockopt(struct socket * sock,
          int level, int optname)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_socket_shutdown(struct socket * sock, int how)
{
 return 0;
}
static inline  __attribute__((always_inline)) int security_sock_rcv_skb (struct sock * sk,
      struct sk_buff * skb)
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

static inline  __attribute__((always_inline)) unsigned int security_sk_sid(struct sock *sk, struct flowi *fl, u8 dir)
{
 return 0;
}
# 3061 "linux-2.6.18/include/linux/security.h"
static inline  __attribute__((always_inline)) int security_xfrm_policy_alloc(struct xfrm_policy *xp, struct xfrm_user_sec_ctx *sec_ctx)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_policy_clone(struct xfrm_policy *old, struct xfrm_policy *new)
{
 return 0;
}

static inline  __attribute__((always_inline)) void security_xfrm_policy_free(struct xfrm_policy *xp)
{
}

static inline  __attribute__((always_inline)) int security_xfrm_policy_delete(struct xfrm_policy *xp)
{
 return 0;
}

static inline  __attribute__((always_inline)) int security_xfrm_state_alloc(struct xfrm_state *x, struct xfrm_user_sec_ctx *sec_ctx)
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

static inline  __attribute__((always_inline)) int security_xfrm_policy_lookup(struct xfrm_policy *xp, u32 sk_sid, u8 dir)
{
 return 0;
}
# 51 "linux-2.6.18/include/net/sock.h" 2

# 1 "linux-2.6.18/include/linux/filter.h" 1
# 26 "linux-2.6.18/include/linux/filter.h"
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


struct sk_filter
{
 atomic_t refcnt;
        unsigned int len;
        struct sock_filter insns[0];
};

static inline  __attribute__((always_inline)) unsigned int sk_filter_len(struct sk_filter *fp)
{
 return fp->len*sizeof(struct sock_filter) + sizeof(*fp);
}
# 143 "linux-2.6.18/include/linux/filter.h"
struct sk_buff;
struct sock;

extern unsigned int sk_run_filter(struct sk_buff *skb, struct sock_filter *filter, int flen);
extern int sk_attach_filter(struct sock_fprog *fprog, struct sock *sk);
extern int sk_chk_filter(struct sock_filter *filter, int flen);
# 53 "linux-2.6.18/include/net/sock.h" 2


# 1 "linux-2.6.18/include/net/dst.h" 1
# 12 "linux-2.6.18/include/net/dst.h"
# 1 "linux-2.6.18/include/linux/rtnetlink.h" 1



# 1 "linux-2.6.18/include/linux/netlink.h" 1
# 27 "linux-2.6.18/include/linux/netlink.h"
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
# 92 "linux-2.6.18/include/linux/netlink.h"
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
# 123 "linux-2.6.18/include/linux/netlink.h"
struct nlattr
{
 __u16 nla_len;
 __u16 nla_type;
};
# 138 "linux-2.6.18/include/linux/netlink.h"
struct netlink_skb_parms
{
 struct ucred creds;
 __u32 pid;
 __u32 dst_pid;
 __u32 dst_group;
 kernel_cap_t eff_cap;
 __u32 loginuid;
 __u32 sid;
};





extern struct sock *netlink_kernel_create(int unit, unsigned int groups, void (*input)(struct sock *sk, int len), struct module *module);
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
  long timeo, struct sock *ssk);
void netlink_detachskb(struct sock *sk, struct sk_buff *skb);
int netlink_sendskb(struct sock *sk, struct sk_buff *skb, int protocol);
# 177 "linux-2.6.18/include/linux/netlink.h"
struct netlink_callback
{
 struct sk_buff *skb;
 struct nlmsghdr *nlh;
 int (*dump)(struct sk_buff * skb, struct netlink_callback *cb);
 int (*done)(struct netlink_callback *cb);
 int family;
 long args[5];
};

struct netlink_notify
{
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
# 229 "linux-2.6.18/include/linux/netlink.h"
extern int netlink_dump_start(struct sock *ssk, struct sk_buff *skb,
         struct nlmsghdr *nlh,
         int (*dump)(struct sk_buff *skb, struct netlink_callback*),
         int (*done)(struct netlink_callback*));




extern void netlink_set_nonroot(int protocol, unsigned flag);
# 5 "linux-2.6.18/include/linux/rtnetlink.h" 2







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

 RTM_GETPREFIX = 54,


 RTM_GETMULTICAST = 58,


 RTM_GETANYCAST = 62,


 RTM_NEWNEIGHTBL = 64,

 RTM_GETNEIGHTBL = 66,

 RTM_SETNEIGHTBL,


 __RTM_MAX,

};
# 113 "linux-2.6.18/include/linux/rtnetlink.h"
struct rtattr
{
 unsigned short rta_len;
 unsigned short rta_type;
};
# 140 "linux-2.6.18/include/linux/rtnetlink.h"
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
# 215 "linux-2.6.18/include/linux/rtnetlink.h"
enum rt_scope_t
{
 RT_SCOPE_UNIVERSE=0,

 RT_SCOPE_SITE=200,
 RT_SCOPE_LINK=253,
 RT_SCOPE_HOST=254,
 RT_SCOPE_NOWHERE=255
};
# 234 "linux-2.6.18/include/linux/rtnetlink.h"
enum rt_class_t
{
 RT_TABLE_UNSPEC=0,

 RT_TABLE_DEFAULT=253,
 RT_TABLE_MAIN=254,
 RT_TABLE_LOCAL=255,
 __RT_TABLE_MAX
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
 __RTA_MAX
};
# 283 "linux-2.6.18/include/linux/rtnetlink.h"
struct rtnexthop
{
 unsigned short rtnh_len;
 unsigned char rtnh_flags;
 unsigned char rtnh_hops;
 int rtnh_ifindex;
};
# 310 "linux-2.6.18/include/linux/rtnetlink.h"
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

 __RTAX_MAX
};
# 364 "linux-2.6.18/include/linux/rtnetlink.h"
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






struct ifaddrmsg
{
 unsigned char ifa_family;
 unsigned char ifa_prefixlen;
 unsigned char ifa_flags;
 unsigned char ifa_scope;
 int ifa_index;
};

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
 __IFA_MAX
};
# 424 "linux-2.6.18/include/linux/rtnetlink.h"
struct ifa_cacheinfo
{
 __u32 ifa_prefered;
 __u32 ifa_valid;
 __u32 cstamp;
 __u32 tstamp;
};
# 448 "linux-2.6.18/include/linux/rtnetlink.h"
struct ndmsg
{
 unsigned char ndm_family;
 unsigned char ndm_pad1;
 unsigned short ndm_pad2;
 int ndm_ifindex;
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
# 498 "linux-2.6.18/include/linux/rtnetlink.h"
struct nda_cacheinfo
{
 __u32 ndm_confirmed;
 __u32 ndm_used;
 __u32 ndm_updated;
 __u32 ndm_refcnt;
};
# 532 "linux-2.6.18/include/linux/rtnetlink.h"
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
# 610 "linux-2.6.18/include/linux/rtnetlink.h"
struct rtgenmsg
{
 unsigned char rtgen_family;
};
# 624 "linux-2.6.18/include/linux/rtnetlink.h"
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
 __IFLA_MAX
};
# 778 "linux-2.6.18/include/linux/rtnetlink.h"
enum
{
 IFLA_INET6_UNSPEC,
 IFLA_INET6_FLAGS,
 IFLA_INET6_CONF,
 IFLA_INET6_STATS,
 IFLA_INET6_MCAST,
 IFLA_INET6_CACHEINFO,
 __IFLA_INET6_MAX
};



struct ifla_cacheinfo
{
 __u32 max_reasm_len;
 __u32 tstamp;
 __u32 reachable_time;
 __u32 retrans_time;
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
# 856 "linux-2.6.18/include/linux/rtnetlink.h"
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

 RTNLGRP_NOP3,
 RTNLGRP_NOP4,
 RTNLGRP_IPV6_PREFIX,

 __RTNLGRP_MAX
};



struct tcamsg
{
 unsigned char tca_family;
 unsigned char tca__pad1;
 unsigned short tca__pad2;
};
# 914 "linux-2.6.18/include/linux/rtnetlink.h"
extern size_t rtattr_strlcpy(char *dest, const struct rtattr *rta, size_t size);
static __inline__  __attribute__((always_inline)) int rtattr_strcmp(const struct rtattr *rta, const char *str)
{
 int len = strlen(str) + 1;
 return len > rta->rta_len || memcmp(((void*)(((char*)(rta)) + (( ((sizeof(struct rtattr))+4 -1) & ~(4 -1) ) + (0)))), str, len);
}

extern int rtattr_parse(struct rtattr *tb[], int maxattr, struct rtattr *rta, int len);




typedef  struct sock   _GLOBAL_195_T; extern  _GLOBAL_195_T  * global_rtnl[NUM_STACKS];    

struct rtnetlink_link
{
 int (*doit)(struct sk_buff *, struct nlmsghdr*, void *attr);
 int (*dumpit)(struct sk_buff *, struct netlink_callback *cb);
};

typedef  struct rtnetlink_link   _GLOBAL_196_T; extern  _GLOBAL_196_T  * _GLOBAL_0_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_1_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_2_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_3_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_4_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_5_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_6_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_7_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_8_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_9_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_10_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_11_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_12_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_13_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_14_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_15_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_16_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_17_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_18_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_19_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_20_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_21_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_22_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_23_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_24_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_25_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_26_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_27_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_28_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_29_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_30_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_31_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_32_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_33_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_34_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_35_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_36_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_37_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_38_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_39_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_40_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_41_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_42_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_43_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_44_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_45_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_46_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_47_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_48_rtnetlink_links_I [ 32 ]  ; extern  _GLOBAL_196_T  * _GLOBAL_49_rtnetlink_links_I [ 32 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rtnetlink_links_I) *_GLOBAL_rtnetlink_links_29_A[NUM_STACKS];    
extern int rtnetlink_send(struct sk_buff *skb, u32 pid, u32 group, int echo);
extern int rtnetlink_put_metrics(struct sk_buff *skb, u32 *metrics);

extern void __rta_fill(struct sk_buff *skb, int attrtype, int attrlen, const void *data);
# 1024 "linux-2.6.18/include/linux/rtnetlink.h"
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

extern void rtnetlink_init(void);
extern void __rtnl_unlock(void);
# 13 "linux-2.6.18/include/net/dst.h" 2


# 1 "linux-2.6.18/include/net/neighbour.h" 1
# 55 "linux-2.6.18/include/net/neighbour.h"
# 1 "linux-2.6.18/include/linux/seq_file.h" 1
# 9 "linux-2.6.18/include/linux/seq_file.h"
struct seq_operations;
struct file;
struct vfsmount;
struct dentry;
struct inode;

struct seq_file {
 char *buf;
 size_t size;
 size_t from;
 size_t count;
 loff_t index;
 loff_t version;
 struct mutex lock;
 struct seq_operations *op;
 void *private;
};

struct seq_operations {
 void * (*start) (struct seq_file *m, loff_t *pos);
 void (*stop) (struct seq_file *m, void *v);
 void * (*next) (struct seq_file *m, void *v, loff_t *pos);
 int (*show) (struct seq_file *m, void *v);
};

int seq_open(struct file *, struct seq_operations *);
ssize_t seq_read(struct file *, char *, size_t, loff_t *);
loff_t seq_lseek(struct file *, loff_t, int);
int seq_release(struct inode *, struct file *);
int seq_escape(struct seq_file *, const char *, const char *);
int seq_putc(struct seq_file *m, char c);
int seq_puts(struct seq_file *m, const char *s);

int seq_printf(struct seq_file *, const char *, ...)
 __attribute__ ((format (printf,2,3))) ;

int seq_path(struct seq_file *, struct vfsmount *, struct dentry *, char *);

int single_open(struct file *, int (*)(struct seq_file *, void *), void *);
int single_release(struct inode *, struct file *);
int seq_release_private(struct inode *, struct file *);
# 56 "linux-2.6.18/include/net/neighbour.h" 2
# 64 "linux-2.6.18/include/net/neighbour.h"
struct neighbour;

struct neigh_parms
{
 struct net_device *dev;
 struct neigh_parms *next;
 int (*neigh_setup)(struct neighbour *);
 void (*neigh_destructor)(struct neighbour *);
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
# 121 "linux-2.6.18/include/net/neighbour.h"
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
 unsigned char ha[(32 +sizeof(unsigned long)-1)&~(sizeof(unsigned long)-1)];
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
 kmem_cache_t *kmem_cachep;
 struct neigh_statistics *stats;
 struct neighbour **hash_buckets;
 unsigned int hash_mask;
 __u32 hash_rnd;
 unsigned int hash_chain_gc;
 struct pneigh_entry **phash_buckets;

 struct proc_dir_entry *pde;

};
# 213 "linux-2.6.18/include/net/neighbour.h"
extern void neigh_table_init(struct neigh_table *tbl);
extern void neigh_table_init_no_netlink(struct neigh_table *tbl);
extern int neigh_table_clear(struct neigh_table *tbl);
extern struct neighbour * neigh_lookup(struct neigh_table *tbl,
          const void *pkey,
          struct net_device *dev);
extern struct neighbour * neigh_lookup_nodev(struct neigh_table *tbl,
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
extern void neigh_parms_destroy(struct neigh_parms *parms);
extern unsigned long neigh_rand_reach_time(unsigned long base);

extern void pneigh_enqueue(struct neigh_table *tbl, struct neigh_parms *p,
            struct sk_buff *skb);
extern struct pneigh_entry *pneigh_lookup(struct neigh_table *tbl, const void *key, struct net_device *dev, int creat);
extern int pneigh_delete(struct neigh_table *tbl, const void *key, struct net_device *dev);

struct netlink_callback;
struct nlmsghdr;
extern int neigh_dump_info(struct sk_buff *skb, struct netlink_callback *cb);
extern int neigh_add(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg);
extern int neigh_delete(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg);
extern void neigh_app_ns(struct neighbour *n);

extern int neightbl_dump_info(struct sk_buff *skb, struct netlink_callback *cb);
extern int neightbl_set(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg);

extern void neigh_for_each(struct neigh_table *tbl, void (*cb)(struct neighbour *, void *), void *cookie);
extern void __neigh_for_each_release(struct neigh_table *tbl, int (*cb)(struct neighbour *));
extern void pneigh_for_each(struct neigh_table *tbl, void (*cb)(struct pneigh_entry *));

struct neigh_seq_state {
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

static inline  __attribute__((always_inline)) void neigh_parms_put(struct neigh_parms *parms)
{
 if (atomic_dec_and_test(&parms->refcnt))
  neigh_parms_destroy(parms);
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

static inline  __attribute__((always_inline)) int neigh_is_connected(struct neighbour *neigh)
{
 return neigh->nud_state&(0x80|0x40|0x02);
}

static inline  __attribute__((always_inline)) int neigh_is_valid(struct neighbour *neigh)
{
 return neigh->nud_state&(0x80|0x40|0x02|0x10|0x04|0x08);
}

static inline  __attribute__((always_inline)) int neigh_event_send(struct neighbour *neigh, struct sk_buff *skb)
{
 neigh->used = global_jiffies[get_stack_id()];
 if (!(neigh->nud_state&((0x80|0x40|0x02)|0x08|0x10)))
  return __neigh_event_send(neigh, skb);
 return 0;
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
# 16 "linux-2.6.18/include/net/dst.h" 2
# 36 "linux-2.6.18/include/net/dst.h"
struct sk_buff;

struct dst_entry
{
 struct dst_entry *next;
 atomic_t __refcnt;
 int __use;
 struct dst_entry *child;
 struct net_device *dev;
 short error;
 short obsolete;
 int flags;





 unsigned long lastuse;
 unsigned long expires;

 unsigned short header_len;
 unsigned short trailer_len;

 u32 metrics[(__RTAX_MAX - 1)];
 struct dst_entry *path;

 unsigned long rate_last;
 unsigned long rate_tokens;

 struct neighbour *neighbour;
 struct hh_cache *hh;
 struct xfrm_state *xfrm;

 int (*input)(struct sk_buff*);
 int (*output)(struct sk_buff*);





 struct dst_ops *ops;
 struct rcu_head rcu_head;

 char info[0];
};


struct dst_ops
{
 unsigned short family;
 unsigned short protocol;
 unsigned gc_thresh;

 int (*gc)(void);
 struct dst_entry * (*check)(struct dst_entry *, __u32 cookie);
 void (*destroy)(struct dst_entry *);
 void (*ifdown)(struct dst_entry *,
       struct net_device *dev, int how);
 struct dst_entry * (*negative_advice)(struct dst_entry *);
 void (*link_failure)(struct sk_buff *);
 void (*update_pmtu)(struct dst_entry *dst, u32 mtu);
 int entry_size;

 atomic_t entries;
 kmem_cache_t *kmem_cachep;
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

static inline 
__attribute__((always_inline)) struct dst_entry * dst_clone(struct dst_entry * dst)
{
 if (dst)
  atomic_inc(&dst->__refcnt);
 return dst;
}

static inline 
__attribute__((always_inline)) void dst_release(struct dst_entry * dst)
{
 if (dst) {
  do { if (((&dst->__refcnt)->counter) < 1) ; } while(0);
  __asm__ __volatile__("": : :"memory");
  atomic_dec(&dst->__refcnt);
 }
}





static inline  __attribute__((always_inline)) struct dst_entry *dst_pop(struct dst_entry *dst)
{
 struct dst_entry *child = dst_clone(dst->child);

 dst_release(dst);
 return child;
}

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

struct flowi;

static inline  __attribute__((always_inline)) int xfrm_lookup(struct dst_entry **dst_p, struct flowi *fl,
         struct sock *sk, int flags)
{
 return 0;
}
# 56 "linux-2.6.18/include/net/sock.h" 2
# 77 "linux-2.6.18/include/net/sock.h"
struct sock_iocb;
typedef struct {
 spinlock_t slock;
 struct sock_iocb *owner;
 wait_queue_head_t wq;
# 91 "linux-2.6.18/include/net/sock.h"
} socket_lock_t;

struct sock;
struct proto;
# 111 "linux-2.6.18/include/net/sock.h"
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
# 182 "linux-2.6.18/include/net/sock.h"
struct sock {




 struct sock_common __sk_common;
# 197 "linux-2.6.18/include/net/sock.h"
 unsigned char sk_shutdown : 2,
    sk_no_check : 2,
    sk_userlocks : 4;
 unsigned char sk_protocol;
 unsigned short sk_type;
 int sk_rcvbuf;
 socket_lock_t sk_lock;
 wait_queue_head_t *sk_sleep;
 struct dst_entry *sk_dst_cache;
 struct xfrm_policy *sk_policy[2];
 rwlock_t sk_dst_lock;
 atomic_t sk_rmem_alloc;
 atomic_t sk_wmem_alloc;
 atomic_t sk_omem_alloc;
 struct sk_buff_head sk_receive_queue;
 struct sk_buff_head sk_write_queue;
 struct sk_buff_head sk_async_wait_queue;
 int sk_wmem_queued;
 int sk_forward_alloc;
 gfp_t sk_allocation;
 int sk_sndbuf;
 int sk_route_caps;
 int sk_gso_type;
 int sk_rcvlowat;
 unsigned long sk_flags;
 unsigned long sk_lingertime;





 struct {
  struct sk_buff *head;
  struct sk_buff *tail;
 } sk_backlog;
 struct sk_buff_head sk_error_queue;
 struct proto *sk_prot_creator;
 rwlock_t sk_callback_lock;
 int sk_err,
    sk_err_soft;
 unsigned short sk_ack_backlog;
 unsigned short sk_max_ack_backlog;
 __u32 sk_priority;
 struct ucred sk_peercred;
 long sk_rcvtimeo;
 long sk_sndtimeo;
 struct sk_filter *sk_filter;
 void *sk_protinfo;
 struct timer_list sk_timer;
 struct timeval sk_stamp;
 struct socket *sk_socket;
 void *sk_user_data;
 struct page *sk_sndmsg_page;
 struct sk_buff *sk_send_head;
 __u32 sk_sndmsg_off;
 int sk_write_pending;
 void *sk_security;
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

  do { if (((&sk->__sk_common.skc_refcnt)->counter) == 1) ; } while(0);
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
# 379 "linux-2.6.18/include/net/sock.h"
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
 return (__builtin_constant_p(flag) ? constant_test_bit((flag),(&sk->sk_flags)) : variable_test_bit((flag),(&sk->sk_flags)));
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
 return sk->sk_wmem_queued / 2;
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

extern void sk_stream_rfree(struct sk_buff *skb);

static inline  __attribute__((always_inline)) void sk_stream_set_owner_r(struct sk_buff *skb, struct sock *sk)
{
 skb->sk = sk;
 skb->destructor = sk_stream_rfree;
 atomic_add(skb->truesize, &sk->sk_rmem_alloc);
 sk->sk_forward_alloc -= skb->truesize;
}

static inline  __attribute__((always_inline)) void sk_stream_free_skb(struct sock *sk, struct sk_buff *skb)
{
 skb_truesize_check(skb);
 sock_set_flag(sk, SOCK_QUEUE_SHRUNK);
 sk->sk_wmem_queued -= skb->truesize;
 sk->sk_forward_alloc += skb->truesize;
 __kfree_skb(skb);
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
# 494 "linux-2.6.18/include/net/sock.h"
extern int sk_stream_wait_connect(struct sock *sk, long *timeo_p);
extern int sk_stream_wait_memory(struct sock *sk, long *timeo_p);
extern void sk_stream_wait_close(struct sock *sk, long timeo_p);
extern int sk_stream_error(struct sock *sk, int flags, int err);
extern void sk_stream_kill_queues(struct sock *sk);

extern int sk_wait_data(struct sock *sk, long *timeo);

struct request_sock_ops;
struct timewait_sock_ops;





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

 kmem_cache_t *slab;
 unsigned int obj_size;

 atomic_t *orphan_count;

 struct request_sock_ops *rsk_prot;
 struct timewait_sock_ops *twsk_prot;

 struct module *owner;

 char name[32];

 struct list_head node;



 struct {
  int inuse;
  u8 __pad[(1 << (7)) - sizeof(int)];
 } stats[1];
};

extern int proto_register(struct proto *prot, int alloc_slab);
extern void proto_unregister(struct proto *prot);
# 624 "linux-2.6.18/include/net/sock.h"
static __inline__  __attribute__((always_inline)) void sock_prot_inc_use(struct proto *prot)
{
 prot->stats[0].inuse++;
}

static __inline__  __attribute__((always_inline)) void sock_prot_dec_use(struct proto *prot)
{
 prot->stats[0].inuse--;
}




static inline  __attribute__((always_inline)) void __sk_prot_rehash(struct sock *sk)
{
 sk->__sk_common.skc_prot->unhash(sk);
 sk->__sk_common.skc_prot->hash(sk);
}
# 659 "linux-2.6.18/include/net/sock.h"
struct sock_iocb {
 struct list_head list;

 int flags;
 int size;
 struct socket *sock;
 struct sock *sk;
 struct scm_cookie *scm;
 struct msghdr *msg, async_msg;
 struct iovec async_iov;
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

extern void __sk_stream_mem_reclaim(struct sock *sk);
extern int sk_stream_mem_schedule(struct sock *sk, int size, int kind);



static inline  __attribute__((always_inline)) int sk_stream_pages(int amt)
{
 return (amt + ((int)(1UL << 12)) - 1) / ((int)(1UL << 12));
}

static inline  __attribute__((always_inline)) void sk_stream_mem_reclaim(struct sock *sk)
{
 if (sk->sk_forward_alloc >= ((int)(1UL << 12)))
  __sk_stream_mem_reclaim(sk);
}

static inline  __attribute__((always_inline)) void sk_stream_writequeue_purge(struct sock *sk)
{
 struct sk_buff *skb;

 while ((skb = __skb_dequeue(&sk->sk_write_queue)) != ((void *)0))
  sk_stream_free_skb(sk, skb);
 sk_stream_mem_reclaim(sk);
}

static inline  __attribute__((always_inline)) int sk_stream_rmem_schedule(struct sock *sk, struct sk_buff *skb)
{
 return (int)skb->truesize <= sk->sk_forward_alloc ||
  sk_stream_mem_schedule(sk, skb->truesize, 1);
}

static inline  __attribute__((always_inline)) int sk_stream_wmem_schedule(struct sock *sk, int size)
{
 return size <= sk->sk_forward_alloc ||
        sk_stream_mem_schedule(sk, size, 0);
}
# 749 "linux-2.6.18/include/net/sock.h"
extern void lock_sock(struct sock *sk);
extern void release_sock(struct sock *sk);
# 759 "linux-2.6.18/include/net/sock.h"
extern struct sock *sk_alloc(int family,
       gfp_t priority,
       struct proto *prot, int zero_it);
extern void sk_free(struct sock *sk);
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
# 865 "linux-2.6.18/include/net/sock.h"
static inline  __attribute__((always_inline)) int sk_filter(struct sock *sk, struct sk_buff *skb, int needlock)
{
 int err;

 err = security_sock_rcv_skb(sk, skb);
 if (err)
  return err;

 if (sk->sk_filter) {
  struct sk_filter *filter;

  if (needlock)
   do { do { } while (0); (void)0; (void)(&((sk)->sk_lock.slock)); } while (0);

  filter = sk->sk_filter;
  if (filter) {
   unsigned int pkt_len = sk_run_filter(skb, filter->insns,
            filter->len);
   err = pkt_len ? pskb_trim(skb, pkt_len) : -1;
  }

  if (needlock)
   do { do { } while (0); (void)0; (void)(&((sk)->sk_lock.slock)); } while (0);
 }
 return err;
}
# 900 "linux-2.6.18/include/net/sock.h"
static inline  __attribute__((always_inline)) void sk_filter_release(struct sock *sk, struct sk_filter *fp)
{
 unsigned int size = sk_filter_len(fp);

 atomic_sub(size, &sk->sk_omem_alloc);

 if (atomic_dec_and_test(&fp->refcnt))
  kfree(fp);
}

static inline  __attribute__((always_inline)) void sk_filter_charge(struct sock *sk, struct sk_filter *fp)
{
 atomic_inc(&fp->refcnt);
 atomic_add(sk_filter_len(fp), &sk->sk_omem_alloc);
}
# 942 "linux-2.6.18/include/net/sock.h"
static inline  __attribute__((always_inline)) void sock_put(struct sock *sk)
{
 if (atomic_dec_and_test(&sk->__sk_common.skc_refcnt))
  sk_free(sk);
}

extern int sk_receive_skb(struct sock *sk, struct sk_buff *skb);
# 957 "linux-2.6.18/include/net/sock.h"
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

static inline  __attribute__((always_inline)) void sk_setup_caps(struct sock *sk, struct dst_entry *dst)
{
 __sk_dst_set(sk, dst);
 sk->sk_route_caps = dst->dev->features;
 if (sk->sk_route_caps & 2048)
  sk->sk_route_caps |= 0xffff0000;
 if (sk_can_gso(sk)) {
  if (dst->header_len)
   sk->sk_route_caps &= ~0xffff0000;
  else
   sk->sk_route_caps |= 1 | 8;
 }
}

static inline  __attribute__((always_inline)) void sk_charge_skb(struct sock *sk, struct sk_buff *skb)
{
 sk->sk_wmem_queued += skb->truesize;
 sk->sk_forward_alloc -= skb->truesize;
}

static inline  __attribute__((always_inline)) int skb_copy_to_page(struct sock *sk, char *from,
       struct sk_buff *skb, struct page *page,
       int off, int copy)
{
 if (skb->ip_summed == 0) {
  int err = 0;
  unsigned int csum = csum_partial_copy_from_user(from,
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
 sk->sk_forward_alloc -= copy;
 return 0;
}
# 1094 "linux-2.6.18/include/net/sock.h"
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
 err = ((__typeof__(*(&sk->sk_err)))__xchg((unsigned long)(0),(&sk->sk_err),sizeof(*(&sk->sk_err))));
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
  sk->sk_sndbuf = ({ typeof(sk->sk_sndbuf) _x = (sk->sk_sndbuf); typeof(sk->sk_wmem_queued / 2) _y = (sk->sk_wmem_queued / 2); (void) (&_x == &_y); _x < _y ? _x : _y; });
  sk->sk_sndbuf = ({ typeof(sk->sk_sndbuf) _x = (sk->sk_sndbuf); typeof(2048) _y = (2048); (void) (&_x == &_y); _x > _y ? _x : _y; });
 }
}

static inline  __attribute__((always_inline)) struct sk_buff *sk_stream_alloc_pskb(struct sock *sk,
         int size, int mem,
         gfp_t gfp)
{
 struct sk_buff *skb;
 int hdr_len;

 hdr_len = (((sk->__sk_common.skc_prot->max_header) + ((1 << (7)) - 1)) & ~((1 << (7)) - 1));
 skb = alloc_skb_fclone(size + hdr_len, gfp);
 if (skb) {
  skb->truesize += mem;
  if (sk_stream_wmem_schedule(sk, skb->truesize)) {
   skb_reserve(skb, hdr_len);
   return skb;
  }
  __kfree_skb(skb);
 } else {
  sk->__sk_common.skc_prot->enter_memory_pressure();
  sk_stream_moderate_sndbuf(sk);
 }
 return ((void *)0);
}

static inline  __attribute__((always_inline)) struct sk_buff *sk_stream_alloc_skb(struct sock *sk,
        int size,
        gfp_t gfp)
{
 return sk_stream_alloc_pskb(sk, size, 0, gfp);
}

static inline  __attribute__((always_inline)) struct page *sk_stream_alloc_page(struct sock *sk)
{
 struct page *page = ((void *)0);

 page = alloc_pages_node(((0)), sk->sk_allocation, 0);
 if (!page) {
  sk->__sk_common.skc_prot->enter_memory_pressure();
  sk_stream_moderate_sndbuf(sk);
 }
 return page;
}
# 1230 "linux-2.6.18/include/net/sock.h"
static inline  __attribute__((always_inline)) int sock_writeable(const struct sock *sk)
{
 return ((&sk->sk_wmem_alloc)->counter) < (sk->sk_sndbuf / 2);
}

static inline  __attribute__((always_inline)) gfp_t gfp_any(void)
{
 return (((current_thread_info()->preempt_count) & (((1UL << (8))-1) << (0 + 8)))) ? ((( gfp_t)0x20u)) : ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u));
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
 return (waitall ? len : ({ int __x = (sk->sk_rcvlowat); int __y = (len); __x < __y ? __x: __y; })) ? : 1;
}




static inline  __attribute__((always_inline)) int sock_intr_errno(long timeo)
{
 return timeo == ((long)(~0UL>>1)) ? -512 : -4;
}

static __inline__  __attribute__((always_inline)) void
sock_recv_timestamp(struct msghdr *msg, struct sock *sk, struct sk_buff *skb)
{
 struct timeval stamp;

 skb_get_timestamp(skb, &stamp);
 if (sock_flag(sk, SOCK_RCVTSTAMP)) {


  if (stamp.tv_sec == 0)
   do_gettimeofday(&stamp);
  skb_set_timestamp(skb, &stamp);
  put_cmsg(msg, 1, 29, sizeof(struct timeval),
    &stamp);
 } else
  sk->sk_stamp = stamp;
}
# 1300 "linux-2.6.18/include/net/sock.h"
static inline  __attribute__((always_inline)) void sk_eat_skb(struct sock *sk, struct sk_buff *skb, int copied_early)
{
 __skb_unlink(skb, &sk->sk_receive_queue);
 __kfree_skb(skb);
}


extern void sock_enable_timestamp(struct sock *sk);
extern int sock_get_timestamp(struct sock *, struct timeval *);
# 1346 "linux-2.6.18/include/net/sock.h"
static inline  __attribute__((always_inline)) void sock_valbool_flag(struct sock *sk, int bit, int valbool)
{
 if (valbool)
  sock_set_flag(sk, bit);
 else
  sock_reset_flag(sk, bit);
}

typedef  __u32  _GLOBAL_197_T; extern  _GLOBAL_197_T  global_sysctl_wmem_max[NUM_STACKS];   
typedef  __u32  _GLOBAL_198_T; extern  _GLOBAL_198_T  global_sysctl_rmem_max[NUM_STACKS];   


int siocdevprivate_ioctl(unsigned int fd, unsigned int cmd, unsigned long arg);







extern void sk_init(void);


typedef  struct ctl_table   _GLOBAL_199_T; extern  _GLOBAL_199_T  _GLOBAL_0_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_1_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_2_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_3_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_4_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_5_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_6_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_7_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_8_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_9_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_10_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_11_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_12_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_13_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_14_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_15_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_16_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_17_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_18_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_19_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_20_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_21_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_22_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_23_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_24_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_25_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_26_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_27_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_28_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_29_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_30_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_31_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_32_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_33_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_34_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_35_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_36_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_37_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_38_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_39_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_40_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_41_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_42_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_43_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_44_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_45_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_46_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_47_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_48_core_table_I [ ] ; extern  _GLOBAL_199_T  _GLOBAL_49_core_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_core_table_I) *_GLOBAL_core_table_30_A[NUM_STACKS];   


typedef  int  _GLOBAL_200_T; extern  _GLOBAL_200_T  global_sysctl_optmem_max[NUM_STACKS];   

typedef  __u32  _GLOBAL_201_T; extern  _GLOBAL_201_T  global_sysctl_wmem_default[NUM_STACKS];   
typedef  __u32  _GLOBAL_202_T; extern  _GLOBAL_202_T  global_sysctl_rmem_default[NUM_STACKS];   
# 165 "linux-2.6.18/include/linux/tcp.h" 2
# 1 "linux-2.6.18/include/net/inet_connection_sock.h" 1
# 22 "linux-2.6.18/include/net/inet_connection_sock.h"
# 1 "linux-2.6.18/include/net/inet_sock.h" 1
# 23 "linux-2.6.18/include/net/inet_sock.h"
# 1 "linux-2.6.18/include/net/flow.h" 1
# 13 "linux-2.6.18/include/net/flow.h"
struct flowi {
 int oif;
 int iif;

 union {
  struct {
   __u32 daddr;
   __u32 saddr;
   __u32 fwmark;
   __u8 tos;
   __u8 scope;
  } ip4_u;

  struct {
   struct in6_addr daddr;
   struct in6_addr saddr;
   __u32 flowlabel;
  } ip6_u;

  struct {
   __le16 daddr;
   __le16 saddr;
   __u32 fwmark;
   __u8 scope;
  } dn_u;
 } nl_u;
# 52 "linux-2.6.18/include/net/flow.h"
 __u8 proto;
 __u8 flags;

 union {
  struct {
   __u16 sport;
   __u16 dport;
  } ports;

  struct {
   __u8 type;
   __u8 code;
  } icmpt;

  struct {
   __le16 sport;
   __le16 dport;
   __u8 objnum;
   __u8 objnamel;
   __u8 objname[16];
  } dnports;

  __u32 spi;
 } uli_u;





} __attribute__((__aligned__(64/8))) ;





struct sock;
typedef void (*flow_resolve_t)(struct flowi *key, u32 sk_sid, u16 family, u8 dir,
          void **objp, atomic_t **obj_refp);

extern void *flow_cache_lookup(struct flowi *key, u32 sk_sid, u16 family, u8 dir,
           flow_resolve_t resolver);
extern void flow_cache_flush(void);
typedef  atomic_t  _GLOBAL_203_T; extern  _GLOBAL_203_T  global_flow_cache_genid[NUM_STACKS];   
# 24 "linux-2.6.18/include/net/inet_sock.h" 2

# 1 "linux-2.6.18/include/net/request_sock.h" 1
# 24 "linux-2.6.18/include/net/request_sock.h"
struct request_sock;
struct sk_buff;
struct dst_entry;
struct proto;

struct request_sock_ops {
 int family;
 kmem_cache_t *slab;
 int obj_size;
 int (*rtx_syn_ack)(struct sock *sk,
           struct request_sock *req,
           struct dst_entry *dst);
 void (*send_ack)(struct sk_buff *skb,
        struct request_sock *req);
 void (*send_reset)(struct sk_buff *skb);
 void (*destructor)(struct request_sock *req);
};



struct request_sock {
 struct request_sock *dl_next;
 u16 mss;
 u8 retrans;
 u8 __pad;

 u32 window_clamp;
 u32 rcv_wnd;
 u32 ts_recent;
 unsigned long expires;
 struct request_sock_ops *rsk_ops;
 struct sock *sk;
};

static inline  __attribute__((always_inline)) struct request_sock *reqsk_alloc(struct request_sock_ops *ops)
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

typedef  int  _GLOBAL_204_T; extern  _GLOBAL_204_T  global_sysctl_max_syn_backlog[NUM_STACKS];   





struct listen_sock {
 u8 max_qlen_log;

 int qlen;
 int qlen_young;
 int clock_hand;
 u32 hash_rnd;
 u32 nr_table_entries;
 struct request_sock *syn_table[0];
};
# 112 "linux-2.6.18/include/net/request_sock.h"
struct request_sock_queue {
 struct request_sock *rskq_accept_head;
 struct request_sock *rskq_accept_tail;
 rwlock_t syn_wait_lock;
 u8 rskq_defer_accept;

 struct listen_sock *listen_opt;
};

extern int reqsk_queue_alloc(struct request_sock_queue *queue,
        const int nr_table_entries);

static inline  __attribute__((always_inline)) struct listen_sock *reqsk_queue_yank_listen_sk(struct request_sock_queue *queue)
{
 struct listen_sock *lopt;

 do { local_bh_disable(); do { do { } while (0); (void)0; (void)(&queue->syn_wait_lock); } while (0); } while (0);
 lopt = queue->listen_opt;
 queue->listen_opt = ((void *)0);
 do { do { } while (0); local_bh_enable(); (void)0; (void)(&queue->syn_wait_lock); } while (0);

 return lopt;
}

static inline  __attribute__((always_inline)) void __reqsk_queue_destroy(struct request_sock_queue *queue)
{
 kfree(reqsk_queue_yank_listen_sk(queue));
}

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

 do { if (__builtin_expect(!!(!(req != ((void *)0))), 0)) { printk("<3>" "KERNEL: assertion (%s) failed at %s (%d)\n", "req != NULL", "linux-2.6.18/include/net/request_sock.h" , 187); } } while(0);

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

 do { if (__builtin_expect(!!(!(child != ((void *)0))), 0)) { printk("<3>" "KERNEL: assertion (%s) failed at %s (%d)\n", "child != NULL", "linux-2.6.18/include/net/request_sock.h" , 202); } } while(0);

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
# 26 "linux-2.6.18/include/net/inet_sock.h" 2
# 39 "linux-2.6.18/include/net/inet_sock.h"
struct ip_options {
 __u32 faddr;
 unsigned char optlen;
 unsigned char srr;
 unsigned char rr;
 unsigned char ts;
 unsigned char is_setbyuser:1,
   is_data:1,
   is_strictroute:1,
   srr_is_hit:1,
   is_changed:1,
   rr_needaddr:1,
   ts_needtime:1,
   ts_needaddr:1;
 unsigned char router_alert;
 unsigned char __pad1;
 unsigned char __pad2;
 unsigned char __data[0];
};



struct inet_request_sock {
 struct request_sock req;

 u16 inet6_rsk_offset;


 u32 loc_addr;
 u32 rmt_addr;
 u16 rmt_port;
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
# 108 "linux-2.6.18/include/net/inet_sock.h"
struct inet_sock {

 struct sock sk;

 struct ipv6_pinfo *pinet6;


 __u32 daddr;
 __u32 rcv_saddr;
 __u16 dport;
 __u16 num;
 __u32 saddr;
 __s16 uc_ttl;
 __u16 cmsg_flags;
 struct ip_options *opt;
 __u16 sport;
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
 __u32 mc_addr;
 struct ip_mc_socklist *mc_list;
 struct {
  unsigned int flags;
  unsigned int fragsize;
  struct ip_options *opt;
  struct rtable *rt;
  int length;
  u32 addr;
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
 ({ size_t __len = (sk_from->__sk_common.skc_prot->obj_size - ancestor_size); void *__ret; if (__builtin_constant_p(sk_from->__sk_common.skc_prot->obj_size - ancestor_size) && __len >= 64) __ret = __memcpy((inet_sk(sk_to) + 1),(inet_sk(sk_from) + 1),__len); else __ret = __builtin_memcpy((inet_sk(sk_to) + 1),(inet_sk(sk_from) + 1),__len); __ret; })
                                                   ;
}
# 170 "linux-2.6.18/include/net/inet_sock.h"
extern int inet_sk_rebuild_header(struct sock *sk);

static inline  __attribute__((always_inline)) unsigned int inet_ehashfn(const __u32 laddr, const __u16 lport,
     const __u32 faddr, const __u16 fport)
{
 unsigned int h = (laddr ^ lport) ^ (faddr ^ fport);
 h ^= h >> 16;
 h ^= h >> 8;
 return h;
}

static inline  __attribute__((always_inline)) int inet_sk_ehashfn(const struct sock *sk)
{
 const struct inet_sock *inet = inet_sk(sk);
 const __u32 laddr = inet->rcv_saddr;
 const __u16 lport = inet->num;
 const __u32 faddr = inet->daddr;
 const __u16 fport = inet->dport;

 return inet_ehashfn(laddr, lport, faddr, fport);
}
# 23 "linux-2.6.18/include/net/inet_connection_sock.h" 2







struct inet_bind_bucket;
struct inet_hashinfo;
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
 __u16 net_header_len;
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
 int sockaddr_len;
};
# 83 "linux-2.6.18/include/net/inet_connection_sock.h"
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
 ICSK_ACK_PUSHED = 4
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


typedef  const char   _GLOBAL_205_T; extern  _GLOBAL_205_T  _GLOBAL_0_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_1_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_2_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_3_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_4_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_5_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_6_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_7_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_8_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_9_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_10_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_11_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_12_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_13_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_14_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_15_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_16_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_17_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_18_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_19_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_20_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_21_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_22_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_23_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_24_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_25_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_26_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_27_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_28_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_29_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_30_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_31_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_32_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_33_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_34_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_35_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_36_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_37_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_38_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_39_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_40_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_41_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_42_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_43_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_44_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_45_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_46_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_47_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_48_inet_csk_timer_bug_msg_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_49_inet_csk_timer_bug_msg_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet_csk_timer_bug_msg_I) *_GLOBAL_inet_csk_timer_bug_msg_31_A[NUM_STACKS];   


static inline  __attribute__((always_inline)) void inet_csk_clear_xmit_timer(struct sock *sk, const int what)
{
 struct inet_connection_sock *icsk = inet_csk(sk);

 if (what == 1 || what == 3) {
  icsk->icsk_pending = 0;



 } else if (what == 2) {
  icsk->icsk_ack.blocked = icsk->icsk_ack.pending = 0;



 }

 else {
  do { } while (0);
 }

}




static inline  __attribute__((always_inline)) void inet_csk_reset_xmit_timer(struct sock *sk, const int what,
          unsigned long when,
          const unsigned long max_when)
{
 struct inet_connection_sock *icsk = inet_csk(sk);

 if (when > max_when) {

  do { } while (0)
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
  do { } while (0);
 }

}

extern struct sock *inet_csk_accept(struct sock *sk, int flags, int *err);

extern struct request_sock *inet_csk_search_req(const struct sock *sk,
      struct request_sock ***prevp,
      const __u16 rport,
      const __u32 raddr,
      const __u32 laddr);
extern int inet_csk_bind_conflict(const struct sock *sk,
      const struct inet_bind_bucket *tb);
extern int inet_csk_get_port(struct inet_hashinfo *hashinfo,
        struct sock *sk, unsigned short snum,
        int (*bind_conflict)(const struct sock *sk,
        const struct inet_bind_bucket *tb));

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

extern int inet_csk_ctl_sock_create(struct socket **sock,
        unsigned short family,
        unsigned short type,
        unsigned char protocol);

extern int inet_csk_compat_getsockopt(struct sock *sk, int level, int optname,
          char *optval, int *optlen);
extern int inet_csk_compat_setsockopt(struct sock *sk, int level, int optname,
          char *optval, int optlen);
# 166 "linux-2.6.18/include/linux/tcp.h" 2
# 1 "linux-2.6.18/include/net/inet_timewait_sock.h" 1
# 27 "linux-2.6.18/include/net/inet_timewait_sock.h"
# 1 "linux-2.6.18/include/net/tcp_states.h" 1
# 16 "linux-2.6.18/include/net/tcp_states.h"
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
# 28 "linux-2.6.18/include/net/inet_timewait_sock.h" 2
# 1 "linux-2.6.18/include/net/timewait_sock.h" 1
# 17 "linux-2.6.18/include/net/timewait_sock.h"
struct timewait_sock_ops {
 kmem_cache_t *twsk_slab;
 unsigned int twsk_obj_size;
 int (*twsk_unique)(struct sock *sk,
           struct sock *sktw, void *twp);
};

static inline  __attribute__((always_inline)) int twsk_unique(struct sock *sk, struct sock *sktw, void *twp)
{
 if (sk->__sk_common.skc_prot->twsk_prot->twsk_unique != ((void *)0))
  return sk->__sk_common.skc_prot->twsk_prot->twsk_unique(sk, sktw, twp);
 return 0;
}
# 29 "linux-2.6.18/include/net/inet_timewait_sock.h" 2



struct inet_hashinfo;
# 66 "linux-2.6.18/include/net/inet_timewait_sock.h"
struct inet_timewait_death_row {

 int twcal_hand;
 int twcal_jiffie;
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
extern void inet_twdr_twkill_work(void *data);
extern void inet_twdr_twcal_tick(unsigned long data);







struct inet_bind_bucket;






struct inet_timewait_sock {




 struct sock_common __tw_common;
# 118 "linux-2.6.18/include/net/inet_timewait_sock.h"
 volatile unsigned char tw_substate;

 unsigned char tw_rcv_wscale;


 __u16 tw_sport;
 __u32 tw_daddr __attribute__((aligned(8))) ;
 __u32 tw_rcv_saddr;
 __u16 tw_dport;
 __u16 tw_num;

 __u8 tw_ipv6only:1;

 __u16 tw_ipv6_offset;
 int tw_timeout;
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
# 184 "linux-2.6.18/include/net/inet_timewait_sock.h"
static inline  __attribute__((always_inline)) struct inet_timewait_sock *inet_twsk(const struct sock *sk)
{
 return (struct inet_timewait_sock *)sk;
}

static inline  __attribute__((always_inline)) u32 inet_rcv_saddr(const struct sock *sk)
{
 return __builtin_expect(!!(sk->__sk_common.skc_state != TCP_TIME_WAIT), 1) ?
  inet_sk(sk)->rcv_saddr : inet_twsk(sk)->tw_rcv_saddr;
}

static inline  __attribute__((always_inline)) void inet_twsk_put(struct inet_timewait_sock *tw)
{
 if (atomic_dec_and_test(&tw->__tw_common.skc_refcnt)) {
  struct module *owner = tw->__tw_common.skc_prot->owner;




  kmem_cache_free(tw->__tw_common.skc_prot->twsk_prot->twsk_slab, tw);
  module_put(owner);
 }
}

extern struct inet_timewait_sock *inet_twsk_alloc(const struct sock *sk,
        const int state);

extern void __inet_twsk_kill(struct inet_timewait_sock *tw,
        struct inet_hashinfo *hashinfo);

extern void __inet_twsk_hashdance(struct inet_timewait_sock *tw,
      struct sock *sk,
      struct inet_hashinfo *hashinfo);

extern void inet_twsk_schedule(struct inet_timewait_sock *tw,
          struct inet_timewait_death_row *twdr,
          const int timeo, const int timewait_len);
extern void inet_twsk_deschedule(struct inet_timewait_sock *tw,
     struct inet_timewait_death_row *twdr);
# 167 "linux-2.6.18/include/linux/tcp.h" 2


struct tcp_sack_block {
 __u32 start_seq;
 __u32 end_seq;
};

struct tcp_options_received {

 long ts_recent_stamp;
 __u32 ts_recent;
 __u32 rcv_tsval;
 __u32 rcv_tsecr;
 __u16 saw_tstamp : 1,
  tstamp_ok : 1,
  dsack : 1,
  wscale_ok : 1,
  sack_ok : 4,
  snd_wscale : 4,
  rcv_wscale : 4;

 __u8 eff_sacks;
 __u8 num_sacks;
 __u16 user_mss;
 __u16 mss_clamp;
};

struct tcp_request_sock {
 struct inet_request_sock req;
 __u32 rcv_isn;
 __u32 snt_isn;
};

static inline  __attribute__((always_inline)) struct tcp_request_sock *tcp_rsk(const struct request_sock *req)
{
 return (struct tcp_request_sock *)req;
}

struct tcp_sock {

 struct inet_connection_sock inet_conn;
 int tcp_header_len;





 __u32 pred_flags;






  __u32 rcv_nxt;
  __u32 snd_nxt;

  __u32 snd_una;
  __u32 snd_sml;
 __u32 rcv_tstamp;
 __u32 lsndtime;


 struct {
  struct sk_buff_head prequeue;
  struct task_struct *task;
  struct iovec *iov;
  int memory;
  int len;







 } ucopy;

 __u32 snd_wl1;
 __u32 snd_wnd;
 __u32 max_window;
 __u32 mss_cache;
 __u16 xmit_size_goal;


 __u32 window_clamp;
 __u32 rcv_ssthresh;

 __u32 frto_highmark;
 __u8 reordering;
 __u8 frto_counter;
 __u8 nonagle;
 __u8 keepalive_probes;


 __u32 srtt;
 __u32 mdev;
 __u32 mdev_max;
 __u32 rttvar;
 __u32 rtt_seq;

 __u32 packets_out;
 __u32 left_out;
 __u32 retrans_out;



 struct tcp_options_received rx_opt;




  __u32 snd_ssthresh;
  __u32 snd_cwnd;
  __u16 snd_cwnd_cnt;
 __u16 snd_cwnd_clamp;
 __u32 snd_cwnd_used;
 __u32 snd_cwnd_stamp;

 struct sk_buff_head out_of_order_queue;

  __u32 rcv_wnd;
 __u32 rcv_wup;
 __u32 write_seq;
 __u32 pushed_seq;
 __u32 copied_seq;


 struct tcp_sack_block duplicate_sack[1];
 struct tcp_sack_block selective_acks[4];

 struct tcp_sack_block recv_sack_cache[4];


 struct sk_buff* lost_skb_hint;

 struct sk_buff *scoreboard_skb_hint;
 struct sk_buff *retransmit_skb_hint;
 struct sk_buff *forward_skb_hint;
 struct sk_buff *fastpath_skb_hint;

 int fastpath_cnt_hint;
 int lost_cnt_hint;
 int retransmit_cnt_hint;
 int forward_cnt_hint;

 __u16 advmss;
 __u16 prior_ssthresh;
 __u32 lost_out;
 __u32 sacked_out;
 __u32 fackets_out;
 __u32 high_seq;

 __u32 retrans_stamp;


 __u32 undo_marker;
 int undo_retrans;
 __u32 urg_seq;
 __u16 urg_data;
 __u8 urg_mode;
 __u8 ecn_flags;
 __u32 snd_up;

 __u32 total_retrans;
 __u32 bytes_acked;

 unsigned int keepalive_time;
 unsigned int keepalive_intvl;
 int linger2;

 unsigned long last_synq_overflow;


 struct {
  __u32 rtt;
  __u32 seq;
  __u32 time;
 } rcv_rtt_est;


 struct {
  int space;
  __u32 seq;
  __u32 time;
 } rcvq_space;


 struct {
  __u32 probe_seq_start;
  __u32 probe_seq_end;
 } mtu_probe;
};

static inline  __attribute__((always_inline)) struct tcp_sock *tcp_sk(const struct sock *sk)
{
 return (struct tcp_sock *)sk;
}

struct tcp_timewait_sock {
 struct inet_timewait_sock tw_sk;
 __u32 tw_rcv_nxt;
 __u32 tw_snd_nxt;
 __u32 tw_rcv_wnd;
 __u32 tw_ts_recent;
 long tw_ts_recent_stamp;
};

static inline  __attribute__((always_inline)) struct tcp_timewait_sock *tcp_twsk(const struct sock *sk)
{
 return (struct tcp_timewait_sock *)sk;
}
# 189 "linux-2.6.18/include/linux/ipv6.h" 2
# 1 "linux-2.6.18/include/linux/udp.h" 1
# 22 "linux-2.6.18/include/linux/udp.h"
struct udphdr {
 __u16 source;
 __u16 dest;
 __u16 len;
 __u16 check;
};
# 42 "linux-2.6.18/include/linux/udp.h"
struct udp_sock {

 struct inet_sock inet;
 int pending;
 unsigned int corkflag;
   __u16 encap_type;




 __u16 len;
};

static inline  __attribute__((always_inline)) struct udp_sock *udp_sk(const struct sock *sk)
{
 return (struct udp_sock *)sk;
}
# 190 "linux-2.6.18/include/linux/ipv6.h" 2

# 1 "linux-2.6.18/include/net/if_inet6.h" 1
# 18 "linux-2.6.18/include/net/if_inet6.h"
# 1 "linux-2.6.18/include/net/snmp.h" 1
# 25 "linux-2.6.18/include/net/snmp.h"
# 1 "linux-2.6.18/include/linux/snmp.h" 1
# 18 "linux-2.6.18/include/linux/snmp.h"
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
 ICMP6_MIB_INDESTUNREACHS,
 ICMP6_MIB_INPKTTOOBIGS,
 ICMP6_MIB_INTIMEEXCDS,
 ICMP6_MIB_INPARMPROBLEMS,
 ICMP6_MIB_INECHOS,
 ICMP6_MIB_INECHOREPLIES,
 ICMP6_MIB_INGROUPMEMBQUERIES,
 ICMP6_MIB_INGROUPMEMBRESPONSES,
 ICMP6_MIB_INGROUPMEMBREDUCTIONS,
 ICMP6_MIB_INROUTERSOLICITS,
 ICMP6_MIB_INROUTERADVERTISEMENTS,
 ICMP6_MIB_INNEIGHBORSOLICITS,
 ICMP6_MIB_INNEIGHBORADVERTISEMENTS,
 ICMP6_MIB_INREDIRECTS,
 ICMP6_MIB_OUTMSGS,
 ICMP6_MIB_OUTDESTUNREACHS,
 ICMP6_MIB_OUTPKTTOOBIGS,
 ICMP6_MIB_OUTTIMEEXCDS,
 ICMP6_MIB_OUTPARMPROBLEMS,
 ICMP6_MIB_OUTECHOREPLIES,
 ICMP6_MIB_OUTROUTERSOLICITS,
 ICMP6_MIB_OUTNEIGHBORSOLICITS,
 ICMP6_MIB_OUTNEIGHBORADVERTISEMENTS,
 ICMP6_MIB_OUTREDIRECTS,
 ICMP6_MIB_OUTGROUPMEMBRESPONSES,
 ICMP6_MIB_OUTGROUPMEMBREDUCTIONS,
 __ICMP6_MIB_MAX
};






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
 __UDP_MIB_MAX
};





enum
{
 SCTP_MIB_NUM = 0,
 SCTP_MIB_CURRESTAB,
 SCTP_MIB_ACTIVEESTABS,
 SCTP_MIB_PASSIVEESTABS,
 SCTP_MIB_ABORTEDS,
 SCTP_MIB_SHUTDOWNS,
 SCTP_MIB_OUTOFBLUES,
 SCTP_MIB_CHECKSUMERRORS,
 SCTP_MIB_OUTCTRLCHUNKS,
 SCTP_MIB_OUTORDERCHUNKS,
 SCTP_MIB_OUTUNORDERCHUNKS,
 SCTP_MIB_INCTRLCHUNKS,
 SCTP_MIB_INORDERCHUNKS,
 SCTP_MIB_INUNORDERCHUNKS,
 SCTP_MIB_FRAGUSRMSGS,
 SCTP_MIB_REASMUSRMSGS,
 SCTP_MIB_OUTSCTPPACKS,
 SCTP_MIB_INSCTPPACKS,
 SCTP_MIB_RTOALGORITHM,
 SCTP_MIB_RTOMIN,
 SCTP_MIB_RTOMAX,
 SCTP_MIB_RTOINITIAL,
 SCTP_MIB_VALCOOKIELIFE,
 SCTP_MIB_MAXINITRETR,
 __SCTP_MIB_MAX
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
 __LINUX_MIB_MAX
};
# 26 "linux-2.6.18/include/net/snmp.h" 2
# 35 "linux-2.6.18/include/net/snmp.h"
struct snmp_mib {
 char *name;
 int entry;
};
# 73 "linux-2.6.18/include/net/snmp.h"
struct ipstats_mib {
 unsigned long mibs[__IPSTATS_MIB_MAX];
} __attribute__((__aligned__((1 << (7))))) ;





struct icmp_mib {
 unsigned long mibs[(__ICMP_MIB_MAX + 1)];
} __attribute__((__aligned__((1 << (7))))) ;



struct icmpv6_mib {
 unsigned long mibs[__ICMP6_MIB_MAX];
} __attribute__((__aligned__((1 << (7))))) ;



struct tcp_mib {
 unsigned long mibs[__TCP_MIB_MAX];
} __attribute__((__aligned__((1 << (7))))) ;



struct udp_mib {
 unsigned long mibs[__UDP_MIB_MAX];
} __attribute__((__aligned__((1 << (7))))) ;



struct sctp_mib {
 unsigned long mibs[__SCTP_MIB_MAX];
} __attribute__((__aligned__((1 << (7))))) ;



struct linux_mib {
 unsigned long mibs[__LINUX_MIB_MAX];
};
# 19 "linux-2.6.18/include/net/if_inet6.h" 2
# 1 "linux-2.6.18/include/linux/ipv6.h" 1
# 20 "linux-2.6.18/include/net/if_inet6.h" 2
# 35 "linux-2.6.18/include/net/if_inet6.h"
struct inet6_ifaddr
{
 struct in6_addr addr;
 __u32 prefix_len;

 __u32 valid_lft;
 __u32 prefered_lft;
 unsigned long cstamp;
 unsigned long tstamp;
 atomic_t refcnt;
 spinlock_t lock;

 __u8 probes;
 __u8 flags;

 __u16 scope;

 struct timer_list timer;

 struct inet6_dev *idev;
 struct rt6_info *rt;

 struct inet6_ifaddr *lst_next;
 struct inet6_ifaddr *if_next;







 int dead;
};

struct ip6_sf_socklist
{
 unsigned int sl_max;
 unsigned int sl_count;
 struct in6_addr sl_addr[0];
};






struct ipv6_mc_socklist
{
 struct in6_addr addr;
 int ifindex;
 struct ipv6_mc_socklist *next;
 rwlock_t sflock;
 unsigned int sfmode;
 struct ip6_sf_socklist *sflist;
};

struct ip6_sf_list
{
 struct ip6_sf_list *sf_next;
 struct in6_addr sf_addr;
 unsigned long sf_count[2];
 unsigned char sf_gsresp;
 unsigned char sf_oldin;
 unsigned char sf_crcount;
};







struct ifmcaddr6
{
 struct in6_addr mca_addr;
 struct inet6_dev *idev;
 struct ifmcaddr6 *next;
 struct ip6_sf_list *mca_sources;
 struct ip6_sf_list *mca_tomb;
 unsigned int mca_sfmode;
 unsigned long mca_sfcount[2];
 struct timer_list mca_timer;
 unsigned mca_flags;
 int mca_users;
 atomic_t mca_refcnt;
 spinlock_t mca_lock;
 unsigned char mca_crcount;
 unsigned long mca_cstamp;
 unsigned long mca_tstamp;
};



struct ipv6_ac_socklist
{
 struct in6_addr acl_addr;
 int acl_ifindex;
 struct ipv6_ac_socklist *acl_next;
};

struct ifacaddr6
{
 struct in6_addr aca_addr;
 struct inet6_dev *aca_idev;
 struct rt6_info *aca_rt;
 struct ifacaddr6 *aca_next;
 int aca_users;
 atomic_t aca_refcnt;
 spinlock_t aca_lock;
 unsigned long aca_cstamp;
 unsigned long aca_tstamp;
};






struct ipv6_devstat {
 struct proc_dir_entry *proc_dir_entry;
 __typeof__(struct icmpv6_mib) *icmpv6[2];
};

struct inet6_dev
{
 struct net_device *dev;

 struct inet6_ifaddr *addr_list;

 struct ifmcaddr6 *mc_list;
 struct ifmcaddr6 *mc_tomb;
 rwlock_t mc_lock;
 unsigned long mc_v1_seen;
 unsigned long mc_maxdelay;
 unsigned char mc_qrv;
 unsigned char mc_gq_running;
 unsigned char mc_ifc_count;
 struct timer_list mc_gq_timer;
 struct timer_list mc_ifc_timer;

 struct ifacaddr6 *ac_list;
 rwlock_t lock;
 atomic_t refcnt;
 __u32 if_flags;
 int dead;







 struct neigh_parms *nd_parms;
 struct inet6_dev *next;
 struct ipv6_devconf cnf;
 struct ipv6_devstat stats;
 unsigned long tstamp;
};

typedef  struct ipv6_devconf   _GLOBAL_206_T; extern  _GLOBAL_206_T  global_ipv6_devconf[NUM_STACKS];    

static inline  __attribute__((always_inline)) void ipv6_eth_mc_map(struct in6_addr *addr, char *buf)
{






 buf[0]= 0x33;
 buf[1]= 0x33;

 ({ size_t __len = (sizeof(__u32)); void *__ret; if (__builtin_constant_p(sizeof(__u32)) && __len >= 64) __ret = __memcpy((buf + 2),(&addr->in6_u.u6_addr32[3]),__len); else __ret = __builtin_memcpy((buf + 2),(&addr->in6_u.u6_addr32[3]),__len); __ret; });
}

static inline  __attribute__((always_inline)) void ipv6_tr_mc_map(struct in6_addr *addr, char *buf)
{


 if (((addr->in6_u.u6_addr8[0] == 0xFF) &&
     ((addr->in6_u.u6_addr8[1] == 0x01) || (addr->in6_u.u6_addr8[1] == 0x02)) &&
      (addr->in6_u.u6_addr16[1] == 0) &&
      (addr->in6_u.u6_addr32[1] == 0) &&
      (addr->in6_u.u6_addr32[2] == 0) &&
      (addr->in6_u.u6_addr16[6] == 0) &&
      (addr->in6_u.u6_addr8[15] == 1)) ||
     ((addr->in6_u.u6_addr8[0] == 0xFF) &&
      (addr->in6_u.u6_addr8[1] == 0x02) &&
      (addr->in6_u.u6_addr16[1] == 0) &&
      (addr->in6_u.u6_addr32[1] == 0) &&
      (addr->in6_u.u6_addr16[4] == 0) &&
      (addr->in6_u.u6_addr8[10] == 0) &&
      (addr->in6_u.u6_addr8[11] == 1) &&
      (addr->in6_u.u6_addr8[12] == 0xff)))
 {
  buf[0]=0xC0;
  buf[1]=0x00;
  buf[2]=0x01;
  buf[3]=0x00;
  buf[4]=0x00;
  buf[5]=0x00;

 } else if ((addr->in6_u.u6_addr8[0] ==0xff) &&
  ((addr->in6_u.u6_addr8[1] & 0xF0) == 0) &&
  (addr->in6_u.u6_addr16[1] == 0) &&
  (addr->in6_u.u6_addr32[1] == 0) &&
  (addr->in6_u.u6_addr32[2] == 0) &&
  (addr->in6_u.u6_addr16[6] == 0) &&
  (addr->in6_u.u6_addr8[15] == 2))
 {
  buf[0]=0xC0;
  buf[1]=0x00;
  buf[2]=0x02;
  buf[3]=0x00;
  buf[4]=0x00;
  buf[5]=0x00;
 } else {
  unsigned char i ;

  i = addr->in6_u.u6_addr8[15] & 7 ;
  buf[0]=0xC0;
  buf[1]=0x00;
  buf[2]=0x00;
  buf[3]=0x01 << i ;
  buf[4]=0x00;
  buf[5]=0x00;
 }
}

static inline  __attribute__((always_inline)) void ipv6_arcnet_mc_map(const struct in6_addr *addr, char *buf)
{
 buf[0] = 0x00;
}

static inline  __attribute__((always_inline)) void ipv6_ib_mc_map(struct in6_addr *addr, char *buf)
{
 buf[0] = 0;
 buf[1] = 0xff;
 buf[2] = 0xff;
 buf[3] = 0xff;
 buf[4] = 0xff;
 buf[5] = 0x12;
 buf[6] = 0x60;
 buf[7] = 0x1b;
 buf[8] = 0;
 buf[9] = 0;
 ({ size_t __len = (10); void *__ret; if (__builtin_constant_p(10) && __len >= 64) __ret = __memcpy((buf + 10),(addr->in6_u.u6_addr8 + 6),__len); else __ret = __builtin_memcpy((buf + 10),(addr->in6_u.u6_addr8 + 6),__len); __ret; });
}
# 192 "linux-2.6.18/include/linux/ipv6.h" 2







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
# 240 "linux-2.6.18/include/linux/ipv6.h"
struct ipv6_pinfo {
 struct in6_addr saddr;
 struct in6_addr rcv_saddr;
 struct in6_addr daddr;
 struct in6_addr *daddr_cache;

 __u32 flow_label;
 __u32 frag_size;
 __s16 hop_limit;
 __s16 mcast_hops;
 int mcast_oif;


 union {
  struct {
   __u16 srcrt:2,
    osrcrt:2,
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


 __u8 mc_loop:1,
                         recverr:1,
                         sndflow:1,
    pmtudisc:2,
    ipv6only:1;
 __u8 tclass;

 __u32 dst_cookie;

 struct ipv6_mc_socklist *ipv6_mc_list;
 struct ipv6_ac_socklist *ipv6_ac_list;
 struct ipv6_fl_socklist *ipv6_fl_list;

 struct ipv6_txoptions *opt;
 struct sk_buff *pktoptions;
 struct {
  struct ipv6_txoptions *opt;
  struct rt6_info *rt;
  int hop_limit;
  int tclass;
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

 if (req != ((void *)0))
  inet_rsk(req)->inet6_rsk_offset = inet6_rsk_offset(req);

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
# 42 "linux-2.6.18/net/ipv6/reassembly.c" 2

# 1 "linux-2.6.18/include/linux/random.h" 1
# 35 "linux-2.6.18/include/linux/random.h"
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

extern __u32 secure_ip_id(__u32 daddr);
extern u32 secure_ipv4_port_ephemeral(__u32 saddr, __u32 daddr, __u16 dport);
extern u32 secure_ipv6_port_ephemeral(const __u32 *saddr, const __u32 *daddr,
          __u16 dport);
extern __u32 secure_tcp_sequence_number(__u32 saddr, __u32 daddr,
     __u16 sport, __u16 dport);
extern __u32 secure_tcpv6_sequence_number(__u32 *saddr, __u32 *daddr,
       __u16 sport, __u16 dport);
extern u64 secure_dccp_sequence_number(__u32 saddr, __u32 daddr,
           __u16 sport, __u16 dport);


typedef  struct file_operations   _GLOBAL_207_T; extern  _GLOBAL_207_T  global_random_fops[NUM_STACKS]; extern  _GLOBAL_207_T  global_urandom_fops[NUM_STACKS];     


unsigned int get_random_int(void);
unsigned long randomize_range(unsigned long start, unsigned long end, unsigned long len);
# 44 "linux-2.6.18/net/ipv6/reassembly.c" 2
# 1 "linux-2.6.18/include/linux/jhash.h" 1
# 44 "linux-2.6.18/include/linux/jhash.h"
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




static inline  __attribute__((always_inline)) u32 jhash2(u32 *k, u32 length, u32 initval)
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
# 122 "linux-2.6.18/include/linux/jhash.h"
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
# 45 "linux-2.6.18/net/ipv6/reassembly.c" 2




# 1 "linux-2.6.18/include/net/ipv6.h" 1
# 20 "linux-2.6.18/include/net/ipv6.h"
# 1 "linux-2.6.18/include/net/ndisc.h" 1
# 18 "linux-2.6.18/include/net/ndisc.h"
enum {
 __ND_OPT_PREFIX_INFO_END = 0,
 ND_OPT_SOURCE_LL_ADDR = 1,
 ND_OPT_TARGET_LL_ADDR = 2,
 ND_OPT_PREFIX_INFO = 3,
 ND_OPT_REDIRECT_HDR = 4,
 ND_OPT_MTU = 5,
 __ND_OPT_ARRAY_MAX,
 ND_OPT_ROUTE_INFO = 24,
 __ND_OPT_MAX
};
# 47 "linux-2.6.18/include/net/ndisc.h"
struct ctl_table;
struct file;
struct inet6_dev;
struct net_device;
struct net_proto_family;
struct sk_buff;

typedef  struct neigh_table   _GLOBAL_208_T; extern  _GLOBAL_208_T  global_nd_tbl[NUM_STACKS];    

struct nd_msg {
        struct icmp6hdr icmph;
        struct in6_addr target;
 __u8 opt[0];
};

struct rs_msg {
 struct icmp6hdr icmph;
 __u8 opt[0];
};

struct ra_msg {
        struct icmp6hdr icmph;
 __u32 reachable_time;
 __u32 retrans_timer;
};

struct nd_opt_hdr {
 __u8 nd_opt_type;
 __u8 nd_opt_len;
} __attribute__((__packed__)) ;


extern int ndisc_init(struct net_proto_family *ops);

extern void ndisc_cleanup(void);

extern int ndisc_rcv(struct sk_buff *skb);

extern void ndisc_send_ns(struct net_device *dev,
           struct neighbour *neigh,
           struct in6_addr *solicit,
           struct in6_addr *daddr,
           struct in6_addr *saddr);

extern void ndisc_send_rs(struct net_device *dev,
           struct in6_addr *saddr,
           struct in6_addr *daddr);

extern void ndisc_forwarding_on(void);
extern void ndisc_forwarding_off(void);

extern void ndisc_send_redirect(struct sk_buff *skb,
          struct neighbour *neigh,
          struct in6_addr *target);

extern int ndisc_mc_map(struct in6_addr *addr, char *buf, struct net_device *dev, int dir);


struct rt6_info * dflt_rt_lookup(void);




extern int igmp6_init(struct net_proto_family *ops);

extern void igmp6_cleanup(void);

extern int igmp6_event_query(struct sk_buff *skb);

extern int igmp6_event_report(struct sk_buff *skb);

extern void igmp6_cleanup(void);


extern int ndisc_ifinfo_sysctl_change(struct ctl_table *ctl,
          int write,
          struct file * filp,
          void *buffer,
          size_t *lenp,
          loff_t *ppos);


extern void inet6_ifinfo_notify(int event,
          struct inet6_dev *idev);

static inline  __attribute__((always_inline)) struct neighbour * ndisc_get_neigh(struct net_device *dev, struct in6_addr *addr)
{

 if (dev)
  return __neigh_lookup(&global_nd_tbl[get_stack_id()], addr, dev, 1);

 return ((void *)0);
}
# 21 "linux-2.6.18/include/net/ipv6.h" 2
# 96 "linux-2.6.18/include/net/ipv6.h"
struct frag_hdr {
 unsigned char nexthdr;
 unsigned char reserved;
 unsigned short frag_off;
 __u32 identification;
};
# 110 "linux-2.6.18/include/net/ipv6.h"
typedef  int  _GLOBAL_209_T; extern  _GLOBAL_209_T  global_sysctl_ipv6_bindv6only[NUM_STACKS];   
typedef  int  _GLOBAL_210_T; extern  _GLOBAL_210_T  global_sysctl_mld_max_msf[NUM_STACKS];   


typedef  __typeof__ ( struct ipstats_mib  )   _GLOBAL_211_T; extern  _GLOBAL_211_T  * _GLOBAL_0_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_1_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_2_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_3_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_4_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_5_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_6_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_7_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_8_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_9_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_10_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_11_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_12_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_13_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_14_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_15_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_16_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_17_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_18_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_19_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_20_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_21_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_22_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_23_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_24_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_25_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_26_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_27_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_28_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_29_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_30_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_31_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_32_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_33_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_34_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_35_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_36_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_37_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_38_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_39_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_40_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_41_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_42_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_43_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_44_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_45_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_46_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_47_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_48_ipv6_statistics_I [ 2 ]  ; extern  _GLOBAL_211_T  * _GLOBAL_49_ipv6_statistics_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipv6_statistics_I) *_GLOBAL_ipv6_statistics_32_A[NUM_STACKS] = { &_GLOBAL_0_ipv6_statistics_I, &_GLOBAL_1_ipv6_statistics_I, &_GLOBAL_2_ipv6_statistics_I, &_GLOBAL_3_ipv6_statistics_I, &_GLOBAL_4_ipv6_statistics_I, &_GLOBAL_5_ipv6_statistics_I, &_GLOBAL_6_ipv6_statistics_I, &_GLOBAL_7_ipv6_statistics_I, &_GLOBAL_8_ipv6_statistics_I, &_GLOBAL_9_ipv6_statistics_I, &_GLOBAL_10_ipv6_statistics_I, &_GLOBAL_11_ipv6_statistics_I, &_GLOBAL_12_ipv6_statistics_I, &_GLOBAL_13_ipv6_statistics_I, &_GLOBAL_14_ipv6_statistics_I, &_GLOBAL_15_ipv6_statistics_I, &_GLOBAL_16_ipv6_statistics_I, &_GLOBAL_17_ipv6_statistics_I, &_GLOBAL_18_ipv6_statistics_I, &_GLOBAL_19_ipv6_statistics_I, &_GLOBAL_20_ipv6_statistics_I, &_GLOBAL_21_ipv6_statistics_I, &_GLOBAL_22_ipv6_statistics_I, &_GLOBAL_23_ipv6_statistics_I, &_GLOBAL_24_ipv6_statistics_I, &_GLOBAL_25_ipv6_statistics_I, &_GLOBAL_26_ipv6_statistics_I, &_GLOBAL_27_ipv6_statistics_I, &_GLOBAL_28_ipv6_statistics_I, &_GLOBAL_29_ipv6_statistics_I, &_GLOBAL_30_ipv6_statistics_I, &_GLOBAL_31_ipv6_statistics_I, &_GLOBAL_32_ipv6_statistics_I, &_GLOBAL_33_ipv6_statistics_I, &_GLOBAL_34_ipv6_statistics_I, &_GLOBAL_35_ipv6_statistics_I, &_GLOBAL_36_ipv6_statistics_I, &_GLOBAL_37_ipv6_statistics_I, &_GLOBAL_38_ipv6_statistics_I, &_GLOBAL_39_ipv6_statistics_I, &_GLOBAL_40_ipv6_statistics_I, &_GLOBAL_41_ipv6_statistics_I, &_GLOBAL_42_ipv6_statistics_I, &_GLOBAL_43_ipv6_statistics_I, &_GLOBAL_44_ipv6_statistics_I, &_GLOBAL_45_ipv6_statistics_I, &_GLOBAL_46_ipv6_statistics_I, &_GLOBAL_47_ipv6_statistics_I, &_GLOBAL_48_ipv6_statistics_I, &_GLOBAL_49_ipv6_statistics_I, };   



typedef  __typeof__ ( struct icmpv6_mib  )   _GLOBAL_212_T; extern  _GLOBAL_212_T  * _GLOBAL_0_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_1_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_2_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_3_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_4_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_5_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_6_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_7_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_8_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_9_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_10_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_11_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_12_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_13_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_14_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_15_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_16_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_17_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_18_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_19_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_20_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_21_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_22_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_23_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_24_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_25_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_26_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_27_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_28_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_29_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_30_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_31_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_32_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_33_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_34_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_35_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_36_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_37_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_38_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_39_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_40_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_41_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_42_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_43_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_44_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_45_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_46_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_47_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_48_icmpv6_statistics_I [ 2 ]  ; extern  _GLOBAL_212_T  * _GLOBAL_49_icmpv6_statistics_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmpv6_statistics_I) *_GLOBAL_icmpv6_statistics_33_A[NUM_STACKS];   
# 144 "linux-2.6.18/include/net/ipv6.h"
typedef  __typeof__ ( struct udp_mib  )   _GLOBAL_213_T; extern  _GLOBAL_213_T  * _GLOBAL_0_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_1_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_2_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_3_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_4_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_5_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_6_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_7_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_8_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_9_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_10_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_11_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_12_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_13_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_14_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_15_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_16_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_17_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_18_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_19_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_20_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_21_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_22_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_23_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_24_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_25_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_26_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_27_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_28_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_29_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_30_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_31_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_32_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_33_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_34_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_35_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_36_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_37_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_38_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_39_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_40_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_41_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_42_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_43_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_44_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_45_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_46_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_47_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_48_udp_stats_in6_I [ 2 ]  ; extern  _GLOBAL_213_T  * _GLOBAL_49_udp_stats_in6_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_udp_stats_in6_I) *_GLOBAL_udp_stats_in6_34_A[NUM_STACKS];   




int snmp6_register_dev(struct inet6_dev *idev);
int snmp6_unregister_dev(struct inet6_dev *idev);
int snmp6_alloc_dev(struct inet6_dev *idev);
int snmp6_free_dev(struct inet6_dev *idev);
int snmp6_mib_init(void *ptr[2], size_t mibsize, size_t mibalign);
void snmp6_mib_free(void *ptr[2]);

struct ip6_ra_chain
{
 struct ip6_ra_chain *next;
 struct sock *sk;
 int sel;
 void (*destructor)(struct sock *);
};

typedef  struct ip6_ra_chain   _GLOBAL_214_T; extern  _GLOBAL_214_T  * global_ip6_ra_chain[NUM_STACKS];    
typedef  rwlock_t  _GLOBAL_215_T; extern  _GLOBAL_215_T  global_ip6_ra_lock[NUM_STACKS];   






struct ipv6_txoptions
{

 int tot_len;



 __u16 opt_flen;
 __u16 opt_nflen;

 struct ipv6_opt_hdr *hopopt;
 struct ipv6_opt_hdr *dst0opt;
 struct ipv6_rt_hdr *srcrt;
 struct ipv6_opt_hdr *dst1opt;


};

struct ip6_flowlabel
{
 struct ip6_flowlabel *next;
 u32 label;
 struct in6_addr dst;
 struct ipv6_txoptions *opt;
 atomic_t users;
 unsigned long linger;
 u8 share;
 u32 owner;
 unsigned long lastuse;
 unsigned long expires;
};




struct ipv6_fl_socklist
{
 struct ipv6_fl_socklist *next;
 struct ip6_flowlabel *fl;
};

extern struct ip6_flowlabel *fl6_sock_lookup(struct sock *sk, u32 label);
extern struct ipv6_txoptions *fl6_merge_options(struct ipv6_txoptions * opt_space,
         struct ip6_flowlabel * fl,
         struct ipv6_txoptions * fopt);
extern void fl6_free_socklist(struct sock *sk);
extern int ipv6_flowlabel_opt(struct sock *sk, char *optval, int optlen);
extern void ip6_flowlabel_init(void);
extern void ip6_flowlabel_cleanup(void);

static inline  __attribute__((always_inline)) void fl6_sock_release(struct ip6_flowlabel *fl)
{
 if (fl)
  atomic_dec(&fl->users);
}

extern int ip6_ra_control(struct sock *sk, int sel,
            void (*destructor)(struct sock *));


extern int ipv6_parse_hopopts(struct sk_buff *skb);

extern struct ipv6_txoptions * ipv6_dup_options(struct sock *sk, struct ipv6_txoptions *opt);
extern struct ipv6_txoptions * ipv6_renew_options(struct sock *sk, struct ipv6_txoptions *opt,
         int newtype,
         struct ipv6_opt_hdr *newopt,
         int newoptlen);
struct ipv6_txoptions *ipv6_fixup_options(struct ipv6_txoptions *opt_space,
       struct ipv6_txoptions *opt);

extern int ipv6_opt_accepted(struct sock *sk, struct sk_buff *skb);

typedef  int  _GLOBAL_216_T; extern  _GLOBAL_216_T  global_ip6_frag_nqueues[NUM_STACKS];   
typedef  atomic_t  _GLOBAL_217_T; extern  _GLOBAL_217_T  global_ip6_frag_mem[NUM_STACKS];   







typedef int (*inet_getfrag_t) (const void *data,
        struct in6_addr *addr,
        char *,
        unsigned int, unsigned int);

extern int __ipv6_addr_type(const struct in6_addr *addr);
static inline  __attribute__((always_inline)) int ipv6_addr_type(const struct in6_addr *addr)
{
 return __ipv6_addr_type(addr) & 0xffff;
}

static inline  __attribute__((always_inline)) int ipv6_addr_scope(const struct in6_addr *addr)
{
 return __ipv6_addr_type(addr) & 0x00f0U;
}

static inline  __attribute__((always_inline)) int __ipv6_addr_src_scope(int type)
{
 return (type == 0x0000U ? -1 : (type >> 16));
}

static inline  __attribute__((always_inline)) int ipv6_addr_src_scope(const struct in6_addr *addr)
{
 return __ipv6_addr_src_scope(__ipv6_addr_type(addr));
}

static inline  __attribute__((always_inline)) int ipv6_addr_cmp(const struct in6_addr *a1, const struct in6_addr *a2)
{
 return memcmp((const void *) a1, (const void *) a2, sizeof(struct in6_addr));
}

static inline  __attribute__((always_inline)) int
ipv6_masked_addr_cmp(const struct in6_addr *a1, const struct in6_addr *m,
       const struct in6_addr *a2)
{
 unsigned int i;

 for (i = 0; i < 4; i++)
  if ((a1->in6_u.u6_addr32[i] ^ a2->in6_u.u6_addr32[i]) & m->in6_u.u6_addr32[i])
   return 1;
 return 0;
}

static inline  __attribute__((always_inline)) void ipv6_addr_copy(struct in6_addr *a1, const struct in6_addr *a2)
{
 ({ size_t __len = (sizeof(struct in6_addr)); void *__ret; if (__builtin_constant_p(sizeof(struct in6_addr)) && __len >= 64) __ret = __memcpy(((void *) a1),((const void *) a2),__len); else __ret = __builtin_memcpy(((void *) a1),((const void *) a2),__len); __ret; });
}

static inline  __attribute__((always_inline)) void ipv6_addr_prefix(struct in6_addr *pfx,
        const struct in6_addr *addr,
        int plen)
{

 int o = plen >> 3,
     b = plen & 0x7;

 ({ size_t __len = (o); void *__ret; if (__builtin_constant_p(o) && __len >= 64) __ret = __memcpy((pfx->in6_u.u6_addr8),(addr),__len); else __ret = __builtin_memcpy((pfx->in6_u.u6_addr8),(addr),__len); __ret; });
 if (b != 0) {
  pfx->in6_u.u6_addr8[o] = addr->in6_u.u6_addr8[o] & (0xff00 >> b);
  o++;
 }
 if (o < 16)
  memset(pfx->in6_u.u6_addr8 + o, 0, 16 - o);
}


static inline  __attribute__((always_inline)) void ipv6_addr_set(struct in6_addr *addr,
         __u32 w1, __u32 w2,
         __u32 w3, __u32 w4)
{
 addr->in6_u.u6_addr32[0] = w1;
 addr->in6_u.u6_addr32[1] = w2;
 addr->in6_u.u6_addr32[2] = w3;
 addr->in6_u.u6_addr32[3] = w4;
}


static inline  __attribute__((always_inline)) int ipv6_addr_equal(const struct in6_addr *a1,
      const struct in6_addr *a2)
{
 return (a1->in6_u.u6_addr32[0] == a2->in6_u.u6_addr32[0] &&
  a1->in6_u.u6_addr32[1] == a2->in6_u.u6_addr32[1] &&
  a1->in6_u.u6_addr32[2] == a2->in6_u.u6_addr32[2] &&
  a1->in6_u.u6_addr32[3] == a2->in6_u.u6_addr32[3]);
}

static inline  __attribute__((always_inline)) int __ipv6_prefix_equal(const u32 *a1, const u32 *a2,
          unsigned int prefixlen)
{
 unsigned pdw, pbi;


 pdw = prefixlen >> 5;
 if (pdw && memcmp(a1, a2, pdw << 2))
  return 0;


 pbi = prefixlen & 0x1f;
 if (pbi && ((a1[pdw] ^ a2[pdw]) & htonl((0xffffffff) << (32 - pbi))))
  return 0;

 return 1;
}

static inline  __attribute__((always_inline)) int ipv6_prefix_equal(const struct in6_addr *a1,
        const struct in6_addr *a2,
        unsigned int prefixlen)
{
 return __ipv6_prefix_equal(a1->in6_u.u6_addr32, a2->in6_u.u6_addr32,
       prefixlen);
}

static inline  __attribute__((always_inline)) int ipv6_addr_any(const struct in6_addr *a)
{
 return ((a->in6_u.u6_addr32[0] | a->in6_u.u6_addr32[1] |
   a->in6_u.u6_addr32[2] | a->in6_u.u6_addr32[3] ) == 0);
}





static inline  __attribute__((always_inline)) int __ipv6_addr_diff(const void *token1, const void *token2, int addrlen)
{
 const __u32 *a1 = token1, *a2 = token2;
 int i;

 addrlen >>= 2;

 for (i = 0; i < addrlen; i++) {
  __u32 xb = a1[i] ^ a2[i];
  if (xb) {
   int j = 31;

   xb = ntohl(xb);
   while ((xb & (1 << j)) == 0)
    j--;

   return (i * 32 + 31 - j);
  }
 }
# 411 "linux-2.6.18/include/net/ipv6.h"
 return (addrlen << 5);
}

static inline  __attribute__((always_inline)) int ipv6_addr_diff(const struct in6_addr *a1, const struct in6_addr *a2)
{
 return __ipv6_addr_diff(a1, a2, sizeof(struct in6_addr));
}
# 427 "linux-2.6.18/include/net/ipv6.h"
extern int ipv6_rcv(struct sk_buff *skb,
      struct net_device *dev,
      struct packet_type *pt,
      struct net_device *orig_dev);

extern int ip6_rcv_finish(struct sk_buff *skb);




extern int ip6_xmit(struct sock *sk,
      struct sk_buff *skb,
      struct flowi *fl,
      struct ipv6_txoptions *opt,
      int ipfragok);

extern int ip6_nd_hdr(struct sock *sk,
        struct sk_buff *skb,
        struct net_device *dev,
        struct in6_addr *saddr,
        struct in6_addr *daddr,
        int proto, int len);

extern int ip6_find_1stfragopt(struct sk_buff *skb, u8 **nexthdr);

extern int ip6_append_data(struct sock *sk,
      int getfrag(void *from, char *to, int offset, int len, int odd, struct sk_buff *skb),
          void *from,
      int length,
      int transhdrlen,
            int hlimit,
            int tclass,
      struct ipv6_txoptions *opt,
      struct flowi *fl,
      struct rt6_info *rt,
      unsigned int flags);

extern int ip6_push_pending_frames(struct sock *sk);

extern void ip6_flush_pending_frames(struct sock *sk);

extern int ip6_dst_lookup(struct sock *sk,
            struct dst_entry **dst,
            struct flowi *fl);
extern int ip6_sk_dst_lookup(struct sock *sk,
        struct dst_entry **dst,
        struct flowi *fl);





extern int ip6_output(struct sk_buff *skb);
extern int ip6_forward(struct sk_buff *skb);
extern int ip6_input(struct sk_buff *skb);
extern int ip6_mc_input(struct sk_buff *skb);





extern u8 * ipv6_build_nfrag_opts(struct sk_buff *skb,
            u8 *prev_hdr,
            struct ipv6_txoptions *opt,
            struct in6_addr *daddr,
            u32 jumbolen);
extern u8 * ipv6_build_frag_opts(struct sk_buff *skb,
           u8 *prev_hdr,
           struct ipv6_txoptions *opt);
extern void ipv6_push_nfrag_opts(struct sk_buff *skb,
           struct ipv6_txoptions *opt,
           u8 *proto,
           struct in6_addr **daddr_p);
extern void ipv6_push_frag_opts(struct sk_buff *skb,
          struct ipv6_txoptions *opt,
          u8 *proto);

extern int ipv6_skip_exthdr(const struct sk_buff *, int start,
              u8 *nexthdrp);

extern int ipv6_ext_hdr(u8 nexthdr);

extern struct ipv6_txoptions * ipv6_invert_rthdr(struct sock *sk,
        struct ipv6_rt_hdr *hdr);






extern int ipv6_setsockopt(struct sock *sk, int level,
      int optname,
      char *optval,
      int optlen);
extern int ipv6_getsockopt(struct sock *sk, int level,
      int optname,
      char *optval,
      int *optlen);
extern int compat_ipv6_setsockopt(struct sock *sk,
      int level,
      int optname,
      char *optval,
      int optlen);
extern int compat_ipv6_getsockopt(struct sock *sk,
      int level,
      int optname,
      char *optval,
      int *optlen);

extern void ipv6_packet_init(void);

extern void ipv6_packet_cleanup(void);

extern int ip6_datagram_connect(struct sock *sk,
           struct sockaddr *addr, int addr_len);

extern int ipv6_recv_error(struct sock *sk, struct msghdr *msg, int len);
extern void ipv6_icmp_error(struct sock *sk, struct sk_buff *skb, int err, u16 port,
      u32 info, u8 *payload);
extern void ipv6_local_error(struct sock *sk, int err, struct flowi *fl, u32 info);

extern int inet6_release(struct socket *sock);
extern int inet6_bind(struct socket *sock, struct sockaddr *uaddr,
        int addr_len);
extern int inet6_getname(struct socket *sock, struct sockaddr *uaddr,
    int *uaddr_len, int peer);
extern int inet6_ioctl(struct socket *sock, unsigned int cmd,
         unsigned long arg);

extern int inet6_hash_connect(struct inet_timewait_death_row *death_row,
         struct sock *sk);




typedef  int  _GLOBAL_218_T; extern  _GLOBAL_218_T  global_sysctl_ip6frag_high_thresh[NUM_STACKS];   
typedef  int  _GLOBAL_219_T; extern  _GLOBAL_219_T  global_sysctl_ip6frag_low_thresh[NUM_STACKS];   
typedef  int  _GLOBAL_220_T; extern  _GLOBAL_220_T  global_sysctl_ip6frag_time[NUM_STACKS];   
typedef  int  _GLOBAL_221_T; extern  _GLOBAL_221_T  global_sysctl_ip6frag_secret_interval[NUM_STACKS];   

typedef  const struct proto_ops    _GLOBAL_222_T; extern  _GLOBAL_222_T  global_inet6_stream_ops[NUM_STACKS];     
typedef  const struct proto_ops    _GLOBAL_223_T; extern  _GLOBAL_223_T  global_inet6_dgram_ops[NUM_STACKS];     

struct group_source_req;
struct group_filter;

extern int ip6_mc_source(int add, int omode, struct sock *sk,
    struct group_source_req *pgsr);
extern int ip6_mc_msfilter(struct sock *sk, struct group_filter *gsf);
extern int ip6_mc_msfget(struct sock *sk, struct group_filter *gsf,
    struct group_filter *optval,
    int *optlen);


extern int ac6_proc_init(void);
extern void ac6_proc_exit(void);
extern int raw6_proc_init(void);
extern void raw6_proc_exit(void);
extern int tcp6_proc_init(void);
extern void tcp6_proc_exit(void);
extern int udp6_proc_init(void);
extern void udp6_proc_exit(void);
extern int ipv6_misc_proc_init(void);
extern void ipv6_misc_proc_exit(void);

typedef  struct rt6_statistics   _GLOBAL_224_T; extern  _GLOBAL_224_T  _GLOBAL_0_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_1_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_2_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_3_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_4_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_5_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_6_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_7_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_8_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_9_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_10_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_11_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_12_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_13_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_14_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_15_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_16_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_17_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_18_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_19_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_20_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_21_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_22_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_23_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_24_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_25_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_26_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_27_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_28_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_29_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_30_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_31_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_32_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_33_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_34_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_35_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_36_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_37_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_38_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_39_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_40_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_41_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_42_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_43_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_44_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_45_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_46_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_47_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_48_rt6_stats_I; extern  _GLOBAL_224_T  _GLOBAL_49_rt6_stats_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt6_stats_I) *_GLOBAL_rt6_stats_35_A[NUM_STACKS];   



typedef  ctl_table  _GLOBAL_225_T; extern  _GLOBAL_225_T  _GLOBAL_0_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_1_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_2_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_3_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_4_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_5_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_6_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_7_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_8_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_9_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_10_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_11_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_12_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_13_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_14_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_15_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_16_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_17_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_18_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_19_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_20_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_21_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_22_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_23_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_24_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_25_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_26_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_27_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_28_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_29_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_30_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_31_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_32_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_33_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_34_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_35_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_36_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_37_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_38_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_39_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_40_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_41_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_42_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_43_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_44_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_45_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_46_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_47_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_48_ipv6_route_table_I [ ] ; extern  _GLOBAL_225_T  _GLOBAL_49_ipv6_route_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipv6_route_table_I) *_GLOBAL_ipv6_route_table_36_A[NUM_STACKS];  
typedef  ctl_table  _GLOBAL_226_T; extern  _GLOBAL_226_T  _GLOBAL_0_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_1_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_2_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_3_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_4_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_5_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_6_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_7_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_8_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_9_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_10_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_11_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_12_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_13_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_14_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_15_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_16_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_17_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_18_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_19_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_20_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_21_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_22_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_23_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_24_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_25_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_26_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_27_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_28_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_29_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_30_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_31_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_32_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_33_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_34_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_35_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_36_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_37_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_38_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_39_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_40_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_41_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_42_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_43_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_44_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_45_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_46_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_47_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_48_ipv6_icmp_table_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_49_ipv6_icmp_table_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipv6_icmp_table_I) *_GLOBAL_ipv6_icmp_table_37_A[NUM_STACKS];  

extern void ipv6_sysctl_register(void);
extern void ipv6_sysctl_unregister(void);
# 50 "linux-2.6.18/net/ipv6/reassembly.c" 2
# 1 "linux-2.6.18/include/net/protocol.h" 1
# 36 "linux-2.6.18/include/net/protocol.h"
struct net_protocol {
 int (*handler)(struct sk_buff *skb);
 void (*err_handler)(struct sk_buff *skb, u32 info);
 int (*gso_send_check)(struct sk_buff *skb);
 struct sk_buff *(*gso_segment)(struct sk_buff *skb,
            int features);
 int no_policy;
};


struct inet6_protocol
{
 int (*handler)(struct sk_buff **skb);

 void (*err_handler)(struct sk_buff *skb,
          struct inet6_skb_parm *opt,
          int type, int code, int offset,
          __u32 info);

 int (*gso_send_check)(struct sk_buff *skb);
 struct sk_buff *(*gso_segment)(struct sk_buff *skb,
           int features);

 unsigned int flags;
};
# 69 "linux-2.6.18/include/net/protocol.h"
struct inet_protosw {
 struct list_head list;


 unsigned short type;
 int protocol;

 struct proto *prot;
 const struct proto_ops *ops;

 int capability;



 char no_check;
 unsigned char flags;
};




typedef  struct net_protocol   _GLOBAL_227_T; extern  _GLOBAL_227_T  * global_inet_protocol_base[NUM_STACKS];    
typedef  struct net_protocol   _GLOBAL_228_T; extern  _GLOBAL_228_T  * _GLOBAL_0_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_1_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_2_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_3_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_4_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_5_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_6_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_7_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_8_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_9_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_10_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_11_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_12_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_13_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_14_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_15_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_16_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_17_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_18_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_19_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_20_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_21_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_22_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_23_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_24_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_25_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_26_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_27_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_28_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_29_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_30_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_31_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_32_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_33_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_34_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_35_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_36_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_37_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_38_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_39_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_40_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_41_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_42_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_43_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_44_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_45_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_46_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_47_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_48_inet_protos_I [ 256 ]  ; extern  _GLOBAL_228_T  * _GLOBAL_49_inet_protos_I [ 256 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet_protos_I) *_GLOBAL_inet_protos_38_A[NUM_STACKS];   


typedef  struct inet6_protocol   _GLOBAL_229_T; extern  _GLOBAL_229_T  * _GLOBAL_0_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_1_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_2_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_3_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_4_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_5_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_6_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_7_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_8_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_9_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_10_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_11_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_12_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_13_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_14_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_15_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_16_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_17_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_18_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_19_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_20_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_21_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_22_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_23_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_24_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_25_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_26_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_27_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_28_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_29_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_30_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_31_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_32_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_33_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_34_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_35_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_36_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_37_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_38_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_39_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_40_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_41_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_42_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_43_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_44_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_45_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_46_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_47_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_48_inet6_protos_I [ 256 ]  ; extern  _GLOBAL_229_T  * _GLOBAL_49_inet6_protos_I [ 256 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6_protos_I) *_GLOBAL_inet6_protos_39_A[NUM_STACKS];   


extern int inet_add_protocol(struct net_protocol *prot, unsigned char num);
extern int inet_del_protocol(struct net_protocol *prot, unsigned char num);
extern void inet_register_protosw(struct inet_protosw *p);
extern void inet_unregister_protosw(struct inet_protosw *p);


extern int inet6_add_protocol(struct inet6_protocol *prot, unsigned char num);
extern int inet6_del_protocol(struct inet6_protocol *prot, unsigned char num);
extern void inet6_register_protosw(struct inet_protosw *p);
extern void inet6_unregister_protosw(struct inet_protosw *p);
# 51 "linux-2.6.18/net/ipv6/reassembly.c" 2
# 1 "linux-2.6.18/include/net/transp_v6.h" 1
# 12 "linux-2.6.18/include/net/transp_v6.h"
typedef  struct proto   _GLOBAL_230_T; extern  _GLOBAL_230_T  global_rawv6_prot[NUM_STACKS];    
typedef  struct proto   _GLOBAL_231_T; extern  _GLOBAL_231_T  global_udpv6_prot[NUM_STACKS];    
typedef  struct proto   _GLOBAL_232_T; extern  _GLOBAL_232_T  global_tcpv6_prot[NUM_STACKS];    

struct flowi;


extern void ipv6_rthdr_init(void);
extern void ipv6_frag_init(void);
extern void ipv6_nodata_init(void);
extern void ipv6_destopt_init(void);


extern void rawv6_init(void);
extern void udpv6_init(void);
extern void tcpv6_init(void);

extern int udpv6_connect(struct sock *sk,
            struct sockaddr *uaddr,
            int addr_len);

extern int datagram_recv_ctl(struct sock *sk,
        struct msghdr *msg,
        struct sk_buff *skb);

extern int datagram_send_ctl(struct msghdr *msg,
        struct flowi *fl,
        struct ipv6_txoptions *opt,
        int *hlimit, int *tclass);






typedef  struct inet_connection_sock_af_ops   _GLOBAL_233_T; extern  _GLOBAL_233_T  global_ipv4_specific[NUM_STACKS];    

extern int inet6_destroy_sock(struct sock *sk);
# 52 "linux-2.6.18/net/ipv6/reassembly.c" 2
# 1 "linux-2.6.18/include/net/rawv6.h" 1






typedef  struct hlist_head   _GLOBAL_234_T; extern  _GLOBAL_234_T  _GLOBAL_0_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_1_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_2_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_3_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_4_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_5_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_6_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_7_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_8_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_9_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_10_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_11_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_12_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_13_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_14_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_15_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_16_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_17_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_18_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_19_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_20_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_21_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_22_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_23_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_24_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_25_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_26_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_27_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_28_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_29_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_30_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_31_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_32_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_33_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_34_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_35_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_36_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_37_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_38_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_39_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_40_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_41_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_42_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_43_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_44_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_45_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_46_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_47_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_48_raw_v6_htable_I [ 256 ] ; extern  _GLOBAL_234_T  _GLOBAL_49_raw_v6_htable_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_raw_v6_htable_I) *_GLOBAL_raw_v6_htable_40_A[NUM_STACKS];   
typedef  rwlock_t  _GLOBAL_235_T; extern  _GLOBAL_235_T  global_raw_v6_lock[NUM_STACKS];   

extern int ipv6_raw_deliver(struct sk_buff *skb, int nexthdr);

extern struct sock *__raw_v6_lookup(struct sock *sk, unsigned short num,
        struct in6_addr *loc_addr, struct in6_addr *rmt_addr,
        int dif);

extern int rawv6_rcv(struct sock *sk,
       struct sk_buff *skb);


extern void rawv6_err(struct sock *sk,
       struct sk_buff *skb,
       struct inet6_skb_parm *opt,
       int type, int code,
       int offset, u32 info);
# 53 "linux-2.6.18/net/ipv6/reassembly.c" 2

# 1 "linux-2.6.18/include/net/addrconf.h" 1
# 22 "linux-2.6.18/include/net/addrconf.h"
struct prefix_info {
 __u8 type;
 __u8 length;
 __u8 prefix_len;






 __u8 reserved : 6,
    autoconf : 1,
    onlink : 1;



 __u32 valid;
 __u32 prefered;
 __u32 reserved2;

 struct in6_addr prefix;
};
# 54 "linux-2.6.18/include/net/addrconf.h"
extern int addrconf_init(void);
extern void addrconf_cleanup(void);

extern int addrconf_add_ifaddr(void *arg);
extern int addrconf_del_ifaddr(void *arg);
extern int addrconf_set_dstaddr(void *arg);

extern int ipv6_chk_addr(struct in6_addr *addr,
           struct net_device *dev,
           int strict);
extern struct inet6_ifaddr * ipv6_get_ifaddr(struct in6_addr *addr,
      struct net_device *dev,
      int strict);
extern int ipv6_get_saddr(struct dst_entry *dst,
            struct in6_addr *daddr,
            struct in6_addr *saddr);
extern int ipv6_dev_get_saddr(struct net_device *dev,
            struct in6_addr *daddr,
            struct in6_addr *saddr);
extern int ipv6_get_lladdr(struct net_device *dev, struct in6_addr *);
extern int ipv6_rcv_saddr_equal(const struct sock *sk,
            const struct sock *sk2);
extern void addrconf_join_solict(struct net_device *dev,
     struct in6_addr *addr);
extern void addrconf_leave_solict(struct inet6_dev *idev,
     struct in6_addr *addr);




extern int ipv6_sock_mc_join(struct sock *sk, int ifindex,
    struct in6_addr *addr);
extern int ipv6_sock_mc_drop(struct sock *sk, int ifindex,
    struct in6_addr *addr);
extern void ipv6_sock_mc_close(struct sock *sk);
extern int inet6_mc_check(struct sock *sk, struct in6_addr *mc_addr,
  struct in6_addr *src_addr);

extern int ipv6_dev_mc_inc(struct net_device *dev, struct in6_addr *addr);
extern int __ipv6_dev_mc_dec(struct inet6_dev *idev, struct in6_addr *addr);
extern int ipv6_dev_mc_dec(struct net_device *dev, struct in6_addr *addr);
extern void ipv6_mc_up(struct inet6_dev *idev);
extern void ipv6_mc_down(struct inet6_dev *idev);
extern void ipv6_mc_init_dev(struct inet6_dev *idev);
extern void ipv6_mc_destroy_dev(struct inet6_dev *idev);
extern void addrconf_dad_failure(struct inet6_ifaddr *ifp);

extern int ipv6_chk_mcast_addr(struct net_device *dev, struct in6_addr *group,
  struct in6_addr *src_addr);
extern int ipv6_is_mld(struct sk_buff *skb, int nexthdr);

extern void addrconf_prefix_rcv(struct net_device *dev, u8 *opt, int len);

extern int ipv6_get_hoplimit(struct net_device *dev);




extern int ipv6_sock_ac_join(struct sock *sk,int ifindex,struct in6_addr *addr);
extern int ipv6_sock_ac_drop(struct sock *sk,int ifindex,struct in6_addr *addr);
extern void ipv6_sock_ac_close(struct sock *sk);
extern int inet6_ac_check(struct sock *sk, struct in6_addr *addr, int ifindex);

extern int ipv6_dev_ac_inc(struct net_device *dev, struct in6_addr *addr);
extern int __ipv6_dev_ac_dec(struct inet6_dev *idev, struct in6_addr *addr);
extern int ipv6_chk_acast_addr(struct net_device *dev, struct in6_addr *addr);



extern int register_inet6addr_notifier(struct notifier_block *nb);
extern int unregister_inet6addr_notifier(struct notifier_block *nb);

static inline  __attribute__((always_inline)) struct inet6_dev *
__in6_dev_get(struct net_device *dev)
{
 return (struct inet6_dev *)dev->ip6_ptr;
}

typedef  rwlock_t  _GLOBAL_236_T; extern  _GLOBAL_236_T  global_addrconf_lock[NUM_STACKS];   

static inline  __attribute__((always_inline)) struct inet6_dev *
in6_dev_get(struct net_device *dev)
{
 struct inet6_dev *idev = ((void *)0);
 do { do { } while (0); (void)0; (void)(&global_addrconf_lock[get_stack_id()]); } while (0);
 idev = dev->ip6_ptr;
 if (idev)
  atomic_inc(&idev->refcnt);
 do { do { } while (0); (void)0; (void)(&global_addrconf_lock[get_stack_id()]); } while (0);
 return idev;
}

extern void in6_dev_finish_destroy(struct inet6_dev *idev);

static inline  __attribute__((always_inline)) void
in6_dev_put(struct inet6_dev *idev)
{
 if (atomic_dec_and_test(&idev->refcnt))
  in6_dev_finish_destroy(idev);
}





extern void inet6_ifa_finish_destroy(struct inet6_ifaddr *ifp);

static inline  __attribute__((always_inline)) void in6_ifa_put(struct inet6_ifaddr *ifp)
{
 if (atomic_dec_and_test(&ifp->refcnt))
  inet6_ifa_finish_destroy(ifp);
}





extern void addrconf_forwarding_on(void);




static __inline__  __attribute__((always_inline)) u8 ipv6_addr_hash(const struct in6_addr *addr)
{
 __u32 word;






 word = addr->in6_u.u6_addr32[2] ^ addr->in6_u.u6_addr32[3];
 word ^= (word >> 16);
 word ^= (word >> 8);

 return ((word ^ (word >> 4)) & 0x0f);
}





static inline  __attribute__((always_inline)) void addrconf_addr_solict_mult(const struct in6_addr *addr,
          struct in6_addr *solicited)
{
 ipv6_addr_set(solicited,
        (( __be32)((__u32)( (((__u32)((0xFF020000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0xFF020000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0xFF020000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0xFF020000)) & (__u32)0xff000000UL) >> 24) ))), 0,
        (( __be32)((__u32)( (((__u32)((0x1)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x1)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x1)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x1)) & (__u32)0xff000000UL) >> 24) ))),
        (( __be32)((__u32)( (((__u32)((0xFF000000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0xFF000000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0xFF000000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0xFF000000)) & (__u32)0xff000000UL) >> 24) ))) | addr->in6_u.u6_addr32[3]);
}


static inline  __attribute__((always_inline)) void ipv6_addr_all_nodes(struct in6_addr *addr)
{
 ipv6_addr_set(addr,
        (( __be32)((__u32)( (((__u32)((0xFF020000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0xFF020000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0xFF020000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0xFF020000)) & (__u32)0xff000000UL) >> 24) ))), 0, 0,
        (( __be32)((__u32)( (((__u32)((0x1)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x1)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x1)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x1)) & (__u32)0xff000000UL) >> 24) ))));
}

static inline  __attribute__((always_inline)) void ipv6_addr_all_routers(struct in6_addr *addr)
{
 ipv6_addr_set(addr,
        (( __be32)((__u32)( (((__u32)((0xFF020000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0xFF020000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0xFF020000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0xFF020000)) & (__u32)0xff000000UL) >> 24) ))), 0, 0,
        (( __be32)((__u32)( (((__u32)((0x2)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0x2)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0x2)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0x2)) & (__u32)0xff000000UL) >> 24) ))));
}

static inline  __attribute__((always_inline)) int ipv6_addr_is_multicast(const struct in6_addr *addr)
{
 return (addr->in6_u.u6_addr32[0] & (( __be32)((__u32)( (((__u32)((0xFF000000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0xFF000000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0xFF000000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0xFF000000)) & (__u32)0xff000000UL) >> 24) )))) == (( __be32)((__u32)( (((__u32)((0xFF000000)) & (__u32)0x000000ffUL) << 24) | (((__u32)((0xFF000000)) & (__u32)0x0000ff00UL) << 8) | (((__u32)((0xFF000000)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)((0xFF000000)) & (__u32)0xff000000UL) >> 24) )));
}

static inline  __attribute__((always_inline)) int ipv6_addr_is_ll_all_nodes(const struct in6_addr *addr)
{
 return (addr->in6_u.u6_addr32[0] == htonl(0xff020000) &&
  addr->in6_u.u6_addr32[1] == 0 &&
  addr->in6_u.u6_addr32[2] == 0 &&
  addr->in6_u.u6_addr32[3] == htonl(0x00000001));
}

static inline  __attribute__((always_inline)) int ipv6_addr_is_ll_all_routers(const struct in6_addr *addr)
{
 return (addr->in6_u.u6_addr32[0] == htonl(0xff020000) &&
  addr->in6_u.u6_addr32[1] == 0 &&
  addr->in6_u.u6_addr32[2] == 0 &&
  addr->in6_u.u6_addr32[3] == htonl(0x00000002));
}


extern int if6_proc_init(void);
extern void if6_proc_exit(void);
# 55 "linux-2.6.18/net/ipv6/reassembly.c" 2

typedef  int _GLOBAL_237_T;  _GLOBAL_237_T  global_sysctl_ip6frag_high_thresh[NUM_STACKS] = {  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  256 * 1024 ,  };    
typedef  int _GLOBAL_238_T;  _GLOBAL_238_T  global_sysctl_ip6frag_low_thresh[NUM_STACKS] = {  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  192 * 1024 ,  };    

typedef  int _GLOBAL_239_T;  _GLOBAL_239_T  global_sysctl_ip6frag_time[NUM_STACKS] = {  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  ( 60 * 1000  ) ,  };    

struct ip6frag_skb_cb
{
 struct inet6_skb_parm h;
 int offset;
};
# 74 "linux-2.6.18/net/ipv6/reassembly.c"
struct frag_queue
{
 struct hlist_node list;
 struct list_head lru_list;

 __u32 id;
 struct in6_addr saddr;
 struct in6_addr daddr;

 spinlock_t lock;
 atomic_t refcnt;
 struct timer_list timer;
 struct sk_buff *fragments;
 int len;
 int meat;
 int iif;
 struct timeval stamp;
 unsigned int csum;
 __u8 last_in;



 __u16 nhoffset;
};





typedef  struct hlist_head   _GLOBAL_240_T; static  _GLOBAL_240_T  _GLOBAL_0_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_1_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_2_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_3_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_4_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_5_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_6_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_7_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_8_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_9_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_10_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_11_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_12_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_13_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_14_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_15_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_16_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_17_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_18_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_19_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_20_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_21_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_22_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_23_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_24_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_25_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_26_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_27_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_28_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_29_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_30_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_31_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_32_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_33_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_34_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_35_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_36_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_37_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_38_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_39_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_40_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_41_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_42_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_43_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_44_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_45_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_46_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_47_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_48_ip6_frag_hash_I [ 64 ] ; static  _GLOBAL_240_T  _GLOBAL_49_ip6_frag_hash_I [ 64 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip6_frag_hash_I) *_GLOBAL_ip6_frag_hash_41_A[NUM_STACKS] = { &_GLOBAL_0_ip6_frag_hash_I, &_GLOBAL_1_ip6_frag_hash_I, &_GLOBAL_2_ip6_frag_hash_I, &_GLOBAL_3_ip6_frag_hash_I, &_GLOBAL_4_ip6_frag_hash_I, &_GLOBAL_5_ip6_frag_hash_I, &_GLOBAL_6_ip6_frag_hash_I, &_GLOBAL_7_ip6_frag_hash_I, &_GLOBAL_8_ip6_frag_hash_I, &_GLOBAL_9_ip6_frag_hash_I, &_GLOBAL_10_ip6_frag_hash_I, &_GLOBAL_11_ip6_frag_hash_I, &_GLOBAL_12_ip6_frag_hash_I, &_GLOBAL_13_ip6_frag_hash_I, &_GLOBAL_14_ip6_frag_hash_I, &_GLOBAL_15_ip6_frag_hash_I, &_GLOBAL_16_ip6_frag_hash_I, &_GLOBAL_17_ip6_frag_hash_I, &_GLOBAL_18_ip6_frag_hash_I, &_GLOBAL_19_ip6_frag_hash_I, &_GLOBAL_20_ip6_frag_hash_I, &_GLOBAL_21_ip6_frag_hash_I, &_GLOBAL_22_ip6_frag_hash_I, &_GLOBAL_23_ip6_frag_hash_I, &_GLOBAL_24_ip6_frag_hash_I, &_GLOBAL_25_ip6_frag_hash_I, &_GLOBAL_26_ip6_frag_hash_I, &_GLOBAL_27_ip6_frag_hash_I, &_GLOBAL_28_ip6_frag_hash_I, &_GLOBAL_29_ip6_frag_hash_I, &_GLOBAL_30_ip6_frag_hash_I, &_GLOBAL_31_ip6_frag_hash_I, &_GLOBAL_32_ip6_frag_hash_I, &_GLOBAL_33_ip6_frag_hash_I, &_GLOBAL_34_ip6_frag_hash_I, &_GLOBAL_35_ip6_frag_hash_I, &_GLOBAL_36_ip6_frag_hash_I, &_GLOBAL_37_ip6_frag_hash_I, &_GLOBAL_38_ip6_frag_hash_I, &_GLOBAL_39_ip6_frag_hash_I, &_GLOBAL_40_ip6_frag_hash_I, &_GLOBAL_41_ip6_frag_hash_I, &_GLOBAL_42_ip6_frag_hash_I, &_GLOBAL_43_ip6_frag_hash_I, &_GLOBAL_44_ip6_frag_hash_I, &_GLOBAL_45_ip6_frag_hash_I, &_GLOBAL_46_ip6_frag_hash_I, &_GLOBAL_47_ip6_frag_hash_I, &_GLOBAL_48_ip6_frag_hash_I, &_GLOBAL_49_ip6_frag_hash_I, };   
typedef  rwlock_t  _GLOBAL_241_T; static  _GLOBAL_241_T  global_ip6_frag_lock[NUM_STACKS] = {  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  ( rwlock_t ) { . raw_lock  = { }   , } ,  };           
typedef  u32  _GLOBAL_242_T; static  _GLOBAL_242_T  global_ip6_frag_hash_rnd[NUM_STACKS];   
typedef  struct list_head   _GLOBAL_243_T; static  _GLOBAL_243_T  global_ip6_frag_lru_list[NUM_STACKS] = {  { & ( global_ip6_frag_lru_list[0] )   , & ( global_ip6_frag_lru_list[0] )    } ,  { & ( global_ip6_frag_lru_list[1] )   , & ( global_ip6_frag_lru_list[1] )    } ,  { & ( global_ip6_frag_lru_list[2] )   , & ( global_ip6_frag_lru_list[2] )    } ,  { & ( global_ip6_frag_lru_list[3] )   , & ( global_ip6_frag_lru_list[3] )    } ,  { & ( global_ip6_frag_lru_list[4] )   , & ( global_ip6_frag_lru_list[4] )    } ,  { & ( global_ip6_frag_lru_list[5] )   , & ( global_ip6_frag_lru_list[5] )    } ,  { & ( global_ip6_frag_lru_list[6] )   , & ( global_ip6_frag_lru_list[6] )    } ,  { & ( global_ip6_frag_lru_list[7] )   , & ( global_ip6_frag_lru_list[7] )    } ,  { & ( global_ip6_frag_lru_list[8] )   , & ( global_ip6_frag_lru_list[8] )    } ,  { & ( global_ip6_frag_lru_list[9] )   , & ( global_ip6_frag_lru_list[9] )    } ,  { & ( global_ip6_frag_lru_list[10] )   , & ( global_ip6_frag_lru_list[10] )    } ,  { & ( global_ip6_frag_lru_list[11] )   , & ( global_ip6_frag_lru_list[11] )    } ,  { & ( global_ip6_frag_lru_list[12] )   , & ( global_ip6_frag_lru_list[12] )    } ,  { & ( global_ip6_frag_lru_list[13] )   , & ( global_ip6_frag_lru_list[13] )    } ,  { & ( global_ip6_frag_lru_list[14] )   , & ( global_ip6_frag_lru_list[14] )    } ,  { & ( global_ip6_frag_lru_list[15] )   , & ( global_ip6_frag_lru_list[15] )    } ,  { & ( global_ip6_frag_lru_list[16] )   , & ( global_ip6_frag_lru_list[16] )    } ,  { & ( global_ip6_frag_lru_list[17] )   , & ( global_ip6_frag_lru_list[17] )    } ,  { & ( global_ip6_frag_lru_list[18] )   , & ( global_ip6_frag_lru_list[18] )    } ,  { & ( global_ip6_frag_lru_list[19] )   , & ( global_ip6_frag_lru_list[19] )    } ,  { & ( global_ip6_frag_lru_list[20] )   , & ( global_ip6_frag_lru_list[20] )    } ,  { & ( global_ip6_frag_lru_list[21] )   , & ( global_ip6_frag_lru_list[21] )    } ,  { & ( global_ip6_frag_lru_list[22] )   , & ( global_ip6_frag_lru_list[22] )    } ,  { & ( global_ip6_frag_lru_list[23] )   , & ( global_ip6_frag_lru_list[23] )    } ,  { & ( global_ip6_frag_lru_list[24] )   , & ( global_ip6_frag_lru_list[24] )    } ,  { & ( global_ip6_frag_lru_list[25] )   , & ( global_ip6_frag_lru_list[25] )    } ,  { & ( global_ip6_frag_lru_list[26] )   , & ( global_ip6_frag_lru_list[26] )    } ,  { & ( global_ip6_frag_lru_list[27] )   , & ( global_ip6_frag_lru_list[27] )    } ,  { & ( global_ip6_frag_lru_list[28] )   , & ( global_ip6_frag_lru_list[28] )    } ,  { & ( global_ip6_frag_lru_list[29] )   , & ( global_ip6_frag_lru_list[29] )    } ,  { & ( global_ip6_frag_lru_list[30] )   , & ( global_ip6_frag_lru_list[30] )    } ,  { & ( global_ip6_frag_lru_list[31] )   , & ( global_ip6_frag_lru_list[31] )    } ,  { & ( global_ip6_frag_lru_list[32] )   , & ( global_ip6_frag_lru_list[32] )    } ,  { & ( global_ip6_frag_lru_list[33] )   , & ( global_ip6_frag_lru_list[33] )    } ,  { & ( global_ip6_frag_lru_list[34] )   , & ( global_ip6_frag_lru_list[34] )    } ,  { & ( global_ip6_frag_lru_list[35] )   , & ( global_ip6_frag_lru_list[35] )    } ,  { & ( global_ip6_frag_lru_list[36] )   , & ( global_ip6_frag_lru_list[36] )    } ,  { & ( global_ip6_frag_lru_list[37] )   , & ( global_ip6_frag_lru_list[37] )    } ,  { & ( global_ip6_frag_lru_list[38] )   , & ( global_ip6_frag_lru_list[38] )    } ,  { & ( global_ip6_frag_lru_list[39] )   , & ( global_ip6_frag_lru_list[39] )    } ,  { & ( global_ip6_frag_lru_list[40] )   , & ( global_ip6_frag_lru_list[40] )    } ,  { & ( global_ip6_frag_lru_list[41] )   , & ( global_ip6_frag_lru_list[41] )    } ,  { & ( global_ip6_frag_lru_list[42] )   , & ( global_ip6_frag_lru_list[42] )    } ,  { & ( global_ip6_frag_lru_list[43] )   , & ( global_ip6_frag_lru_list[43] )    } ,  { & ( global_ip6_frag_lru_list[44] )   , & ( global_ip6_frag_lru_list[44] )    } ,  { & ( global_ip6_frag_lru_list[45] )   , & ( global_ip6_frag_lru_list[45] )    } ,  { & ( global_ip6_frag_lru_list[46] )   , & ( global_ip6_frag_lru_list[46] )    } ,  { & ( global_ip6_frag_lru_list[47] )   , & ( global_ip6_frag_lru_list[47] )    } ,  { & ( global_ip6_frag_lru_list[48] )   , & ( global_ip6_frag_lru_list[48] )    } ,  { & ( global_ip6_frag_lru_list[49] )   , & ( global_ip6_frag_lru_list[49] )    } ,  };         
typedef  int _GLOBAL_244_T;  _GLOBAL_244_T  global_ip6_frag_nqueues[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    

static __inline__  __attribute__((always_inline)) void __fq_unlink(struct frag_queue *fq)
{
 hlist_del(&fq->list);
 list_del(&fq->lru_list);
 global_ip6_frag_nqueues[get_stack_id()]--;
}

static __inline__  __attribute__((always_inline)) void fq_unlink(struct frag_queue *fq)
{
 do { do { } while (0); (void)0; (void)(&global_ip6_frag_lock[get_stack_id()]); } while (0);
 __fq_unlink(fq);
 do { do { } while (0); (void)0; (void)(&global_ip6_frag_lock[get_stack_id()]); } while (0);
}





static unsigned int ip6qhashfn(u32 id, struct in6_addr *saddr,
          struct in6_addr *daddr)
{
 u32 a, b, c;

 a = saddr->in6_u.u6_addr32[0];
 b = saddr->in6_u.u6_addr32[1];
 c = saddr->in6_u.u6_addr32[2];

 a += 0x9e3779b9;
 b += 0x9e3779b9;
 c += global_ip6_frag_hash_rnd[get_stack_id()];
 { a -= b; a -= c; a ^= (c>>13); b -= c; b -= a; b ^= (a<<8); c -= a; c -= b; c ^= (b>>13); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<16); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>3); b -= c; b -= a; b ^= (a<<10); c -= a; c -= b; c ^= (b>>15); };

 a += saddr->in6_u.u6_addr32[3];
 b += daddr->in6_u.u6_addr32[0];
 c += daddr->in6_u.u6_addr32[1];
 { a -= b; a -= c; a ^= (c>>13); b -= c; b -= a; b ^= (a<<8); c -= a; c -= b; c ^= (b>>13); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<16); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>3); b -= c; b -= a; b ^= (a<<10); c -= a; c -= b; c ^= (b>>15); };

 a += daddr->in6_u.u6_addr32[2];
 b += daddr->in6_u.u6_addr32[3];
 c += id;
 { a -= b; a -= c; a ^= (c>>13); b -= c; b -= a; b ^= (a<<8); c -= a; c -= b; c ^= (b>>13); a -= b; a -= c; a ^= (c>>12); b -= c; b -= a; b ^= (a<<16); c -= a; c -= b; c ^= (b>>5); a -= b; a -= c; a ^= (c>>3); b -= c; b -= a; b ^= (a<<10); c -= a; c -= b; c ^= (b>>15); };

 return c & (64 - 1);
}

typedef  struct timer_list   _GLOBAL_245_T; static  _GLOBAL_245_T  global_ip6_frag_secret_timer[NUM_STACKS];    
typedef  int _GLOBAL_246_T;  _GLOBAL_246_T  global_sysctl_ip6frag_secret_interval[NUM_STACKS] = {  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  10 * 60  * 1000 ,  };        

static void ip6_frag_secret_rebuild(unsigned long dummy)
{
 unsigned long now = global_jiffies[get_stack_id()];
 int i;

 do { do { } while (0); (void)0; (void)(&global_ip6_frag_lock[get_stack_id()]); } while (0);
 get_random_bytes(&global_ip6_frag_hash_rnd[get_stack_id()], sizeof(u32));
 for (i = 0; i < 64; i++) {
  struct frag_queue *q;
  struct hlist_node *p, *n;

  for (p = (&(*_GLOBAL_ip6_frag_hash_41_A[get_stack_id()])[i])->first; p && ({ n = p->next; 1; }) && ({ q = ({ const typeof( ((typeof(*q) *)0)->list ) *__mptr = (p); (typeof(*q) *)( (char *)__mptr - __builtin_offsetof(typeof(*q),list) );}); 1;}); p = n) {
   unsigned int hval = ip6qhashfn(q->id,
             &q->saddr,
             &q->daddr);

   if (hval != i) {
    hlist_del(&q->list);


    hlist_add_head(&q->list,
            &(*_GLOBAL_ip6_frag_hash_41_A[get_stack_id()])[hval]);

   }
  }
 }
 do { do { } while (0); (void)0; (void)(&global_ip6_frag_lock[get_stack_id()]); } while (0);

 mod_timer(&global_ip6_frag_secret_timer[get_stack_id()], now + global_sysctl_ip6frag_secret_interval[get_stack_id()]);
}

typedef  atomic_t _GLOBAL_247_T;  _GLOBAL_247_T  global_ip6_frag_mem[NUM_STACKS] = {  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  { ( 0 )  } ,  };      


static inline  __attribute__((always_inline)) void frag_kfree_skb(struct sk_buff *skb, int *work)
{
 if (work)
  *work -= skb->truesize;
 atomic_sub(skb->truesize, &global_ip6_frag_mem[get_stack_id()]);
 kfree_skb(skb);
}

static inline  __attribute__((always_inline)) void frag_free_queue(struct frag_queue *fq, int *work)
{
 if (work)
  *work -= sizeof(struct frag_queue);
 atomic_sub(sizeof(struct frag_queue), &global_ip6_frag_mem[get_stack_id()]);
 kfree(fq);
}

static inline  __attribute__((always_inline)) struct frag_queue *frag_alloc_queue(void)
{
 struct frag_queue *fq = kzalloc(sizeof(struct frag_queue), ((( gfp_t)0x20u)));

 if(!fq)
  return ((void *)0);
 atomic_add(sizeof(struct frag_queue), &global_ip6_frag_mem[get_stack_id()]);
 return fq;
}




static void ip6_frag_destroy(struct frag_queue *fq, int *work)
{
 struct sk_buff *fp;

 do { if (__builtin_expect(!!(!(fq->last_in&4)), 0)) { printk("<3>" "KERNEL: assertion (%s) failed at %s (%d)\n", "fq->last_in&COMPLETE", "linux-2.6.18/net/ipv6/reassembly.c" , 224); } } while(0);
 do { if (__builtin_expect(!!(!(del_timer(&fq->timer) == 0)), 0)) { printk("<3>" "KERNEL: assertion (%s) failed at %s (%d)\n", "del_timer(&fq->timer) == 0", "linux-2.6.18/net/ipv6/reassembly.c" , 225); } } while(0);


 fp = fq->fragments;
 while (fp) {
  struct sk_buff *xp = fp->next;

  frag_kfree_skb(fp, work);
  fp = xp;
 }

 frag_free_queue(fq, work);
}

static __inline__  __attribute__((always_inline)) void fq_put(struct frag_queue *fq, int *work)
{
 if (atomic_dec_and_test(&fq->refcnt))
  ip6_frag_destroy(fq, work);
}




static __inline__  __attribute__((always_inline)) void fq_kill(struct frag_queue *fq)
{
 if (del_timer(&fq->timer))
  atomic_dec(&fq->refcnt);

 if (!(fq->last_in & 4)) {
  fq_unlink(fq);
  atomic_dec(&fq->refcnt);
  fq->last_in |= 4;
 }
}

static void ip6_evictor(void)
{
 struct frag_queue *fq;
 struct list_head *tmp;
 int work;

 work = ((&global_ip6_frag_mem[get_stack_id()])->counter) - global_sysctl_ip6frag_low_thresh[get_stack_id()];
 if (work <= 0)
  return;

 while(work > 0) {
  do { do { } while (0); (void)0; (void)(&global_ip6_frag_lock[get_stack_id()]); } while (0);
  if (list_empty(&global_ip6_frag_lru_list[get_stack_id()])) {
   do { do { } while (0); (void)0; (void)(&global_ip6_frag_lock[get_stack_id()]); } while (0);
   return;
  }
  tmp = global_ip6_frag_lru_list[get_stack_id()].next;
  fq = ({ const typeof( ((struct frag_queue *)0)->lru_list ) *__mptr = (tmp); (struct frag_queue *)( (char *)__mptr - __builtin_offsetof(struct frag_queue,lru_list) );});
  atomic_inc(&fq->refcnt);
  do { do { } while (0); (void)0; (void)(&global_ip6_frag_lock[get_stack_id()]); } while (0);

  do { do { } while (0); (void)0; (void)(&fq->lock); } while (0);
  if (!(fq->last_in&4))
   fq_kill(fq);
  do { do { } while (0); (void)0; (void)(&fq->lock); } while (0);

  fq_put(fq, &work);
  (({ (void)(0); ((*_GLOBAL_ipv6_statistics_32_A[get_stack_id()])[0]); })->mibs[IPSTATS_MIB_REASMFAILS]++);
 }
}

static void ip6_frag_expire(unsigned long data)
{
 struct frag_queue *fq = (struct frag_queue *) data;
 struct net_device *dev;

 do { do { } while (0); (void)0; (void)(&fq->lock); } while (0);

 if (fq->last_in & 4)
  goto out;

 fq_kill(fq);

 (({ (void)(0); ((*_GLOBAL_ipv6_statistics_32_A[get_stack_id()])[0]); })->mibs[IPSTATS_MIB_REASMTIMEOUT]++);
 (({ (void)(0); ((*_GLOBAL_ipv6_statistics_32_A[get_stack_id()])[0]); })->mibs[IPSTATS_MIB_REASMFAILS]++);


 if (!(fq->last_in&2) || !fq->fragments)
  goto out;

 dev = dev_get_by_index(fq->iif);
 if (!dev)
  goto out;






 fq->fragments->dev = dev;
 icmpv6_send(fq->fragments, 3, 1, 0, dev);
 dev_put(dev);
out:
 do { do { } while (0); (void)0; (void)(&fq->lock); } while (0);
 fq_put(fq, ((void *)0));
}




static struct frag_queue *ip6_frag_intern(struct frag_queue *fq_in)
{
 struct frag_queue *fq;
 unsigned int hash;




 do { do { } while (0); (void)0; (void)(&global_ip6_frag_lock[get_stack_id()]); } while (0);
 hash = ip6qhashfn(fq_in->id, &fq_in->saddr, &fq_in->daddr);
# 353 "linux-2.6.18/net/ipv6/reassembly.c"
 fq = fq_in;

 if (!mod_timer(&fq->timer, global_jiffies[get_stack_id()] + global_sysctl_ip6frag_time[get_stack_id()]))
  atomic_inc(&fq->refcnt);

 atomic_inc(&fq->refcnt);
 hlist_add_head(&fq->list, &(*_GLOBAL_ip6_frag_hash_41_A[get_stack_id()])[hash]);
 INIT_LIST_HEAD(&fq->lru_list);
 list_add_tail(&fq->lru_list, &global_ip6_frag_lru_list[get_stack_id()]);
 global_ip6_frag_nqueues[get_stack_id()]++;
 do { do { } while (0); (void)0; (void)(&global_ip6_frag_lock[get_stack_id()]); } while (0);
 return fq;
}


static struct frag_queue *
ip6_frag_create(u32 id, struct in6_addr *src, struct in6_addr *dst)
{
 struct frag_queue *fq;

 if ((fq = frag_alloc_queue()) == ((void *)0))
  goto oom;

 fq->id = id;
 ipv6_addr_copy(&fq->saddr, src);
 ipv6_addr_copy(&fq->daddr, dst);

 init_timer(&fq->timer);
 fq->timer.function = ip6_frag_expire;
 fq->timer.data = (long) fq;
 do { *(&fq->lock) = (spinlock_t) { .raw_lock = { }, }; } while (0);
 (((&fq->refcnt)->counter) = (1));

 return ip6_frag_intern(fq);

oom:
 (({ (void)(0); ((*_GLOBAL_ipv6_statistics_32_A[get_stack_id()])[0]); })->mibs[IPSTATS_MIB_REASMFAILS]++);
 return ((void *)0);
}

static __inline__  __attribute__((always_inline)) struct frag_queue *
fq_find(u32 id, struct in6_addr *src, struct in6_addr *dst)
{
 struct frag_queue *fq;
 struct hlist_node *n;
 unsigned int hash;

 do { do { } while (0); (void)0; (void)(&global_ip6_frag_lock[get_stack_id()]); } while (0);
 hash = ip6qhashfn(id, src, dst);
 for (n = (&(*_GLOBAL_ip6_frag_hash_41_A[get_stack_id()])[hash])->first; n && ({ prefetch(n->next); 1;}) && ({ fq = ({ const typeof( ((typeof(*fq) *)0)->list ) *__mptr = (n); (typeof(*fq) *)( (char *)__mptr - __builtin_offsetof(typeof(*fq),list) );}); 1;}); n = n->next) {
  if (fq->id == id &&
      ipv6_addr_equal(src, &fq->saddr) &&
      ipv6_addr_equal(dst, &fq->daddr)) {
   atomic_inc(&fq->refcnt);
   do { do { } while (0); (void)0; (void)(&global_ip6_frag_lock[get_stack_id()]); } while (0);
   return fq;
  }
 }
 do { do { } while (0); (void)0; (void)(&global_ip6_frag_lock[get_stack_id()]); } while (0);

 return ip6_frag_create(id, src, dst);
}


static void ip6_frag_queue(struct frag_queue *fq, struct sk_buff *skb,
      struct frag_hdr *fhdr, int nhoff)
{
 struct sk_buff *prev, *next;
 int offset, end;

 if (fq->last_in & 4)
  goto err;

 offset = ntohs(fhdr->frag_off) & ~0x7;
 end = offset + (ntohs(skb->nh.ipv6h->payload_len) -
   ((u8 *) (fhdr + 1) - (u8 *) (skb->nh.ipv6h + 1)));

 if ((unsigned int)end > 65535) {
  (({ (void)(0); ((*_GLOBAL_ipv6_statistics_32_A[get_stack_id()])[0]); })->mibs[IPSTATS_MIB_INHDRERRORS]++);
   icmpv6_param_prob(skb,0, (u8*)&fhdr->frag_off - skb->nh.raw);
   return;
 }

  if (skb->ip_summed == 1)
   skb->csum = csum_sub(skb->csum,
          csum_partial(skb->nh.raw, (u8*)(fhdr+1)-skb->nh.raw, 0));


 if (!(fhdr->frag_off & htons(0x0001))) {



  if (end < fq->len ||
      ((fq->last_in & 1) && end != fq->len))
   goto err;
  fq->last_in |= 1;
  fq->len = end;
 } else {



  if (end & 0x7) {



   (({ (void)(0); ((*_GLOBAL_ipv6_statistics_32_A[get_stack_id()])[0]); })->mibs[IPSTATS_MIB_INHDRERRORS]++);
   icmpv6_param_prob(skb, 0,
       __builtin_offsetof(struct ipv6hdr,payload_len));
   return;
  }
  if (end > fq->len) {

   if (fq->last_in & 1)
    goto err;
   fq->len = end;
  }
 }

 if (end == offset)
  goto err;


 if (!pskb_pull(skb, (u8 *) (fhdr + 1) - skb->data))
  goto err;

 if (pskb_trim_rcsum(skb, end - offset))
  goto err;





 prev = ((void *)0);
 for(next = fq->fragments; next != ((void *)0); next = next->next) {
  if (((struct ip6frag_skb_cb*)((next)->cb))->offset >= offset)
   break;
  prev = next;
 }





 if (prev) {
  int i = (((struct ip6frag_skb_cb*)((prev)->cb))->offset + prev->len) - offset;

  if (i > 0) {
   offset += i;
   if (end <= offset)
    goto err;
   if (!pskb_pull(skb, i))
    goto err;
   if (skb->ip_summed != 2)
    skb->ip_summed = 0;
  }
 }




 while (next && ((struct ip6frag_skb_cb*)((next)->cb))->offset < end) {
  int i = end - ((struct ip6frag_skb_cb*)((next)->cb))->offset;

  if (i < next->len) {



   if (!pskb_pull(next, i))
    goto err;
   ((struct ip6frag_skb_cb*)((next)->cb))->offset += i;
   fq->meat -= i;
   if (next->ip_summed != 2)
    next->ip_summed = 0;
   break;
  } else {
   struct sk_buff *free_it = next;




   next = next->next;

   if (prev)
    prev->next = next;
   else
    fq->fragments = next;

   fq->meat -= free_it->len;
   frag_kfree_skb(free_it, ((void *)0));
  }
 }

 ((struct ip6frag_skb_cb*)((skb)->cb))->offset = offset;


 skb->next = next;
 if (prev)
  prev->next = skb;
 else
  fq->fragments = skb;

 if (skb->dev)
  fq->iif = skb->dev->ifindex;
 skb->dev = ((void *)0);
 skb_get_timestamp(skb, &fq->stamp);
 fq->meat += skb->len;
 atomic_add(skb->truesize, &global_ip6_frag_mem[get_stack_id()]);




 if (offset == 0) {
  fq->nhoffset = nhoff;
  fq->last_in |= 2;
 }
 do { do { } while (0); (void)0; (void)(&global_ip6_frag_lock[get_stack_id()]); } while (0);
 list_move_tail(&fq->lru_list, &global_ip6_frag_lru_list[get_stack_id()]);
 do { do { } while (0); (void)0; (void)(&global_ip6_frag_lock[get_stack_id()]); } while (0);
 return;

err:
 (({ (void)(0); ((*_GLOBAL_ipv6_statistics_32_A[get_stack_id()])[!(((current_thread_info()->preempt_count) & (((1UL << (8))-1) << (0 + 8))))]); })->mibs[IPSTATS_MIB_REASMFAILS]++);
 kfree_skb(skb);
}
# 587 "linux-2.6.18/net/ipv6/reassembly.c"
static int ip6_frag_reasm(struct frag_queue *fq, struct sk_buff **skb_in,
     struct net_device *dev)
{
 struct sk_buff *fp, *head = fq->fragments;
 int payload_len;
 unsigned int nhoff;

 fq_kill(fq);

 do { if (__builtin_expect(!!(!(head != ((void *)0))), 0)) { printk("<3>" "KERNEL: assertion (%s) failed at %s (%d)\n", "head != NULL", "linux-2.6.18/net/ipv6/reassembly.c" , 596); } } while(0);
 do { if (__builtin_expect(!!(!(((struct ip6frag_skb_cb*)((head)->cb))->offset == 0)), 0)) { printk("<3>" "KERNEL: assertion (%s) failed at %s (%d)\n", "FRAG6_CB(head)->offset == 0", "linux-2.6.18/net/ipv6/reassembly.c" , 597); } } while(0);


 payload_len = (head->data - head->nh.raw) - sizeof(struct ipv6hdr) + fq->len - sizeof(struct frag_hdr);
 if (payload_len > 65535)
  goto out_oversize;


 if (skb_cloned(head) && pskb_expand_head(head, 0, 0, ((( gfp_t)0x20u))))
  goto out_oom;




 if (((struct skb_shared_info *)((head)->end))->frag_list) {
  struct sk_buff *clone;
  int i, plen = 0;

  if ((clone = alloc_skb(0, ((( gfp_t)0x20u)))) == ((void *)0))
   goto out_oom;
  clone->next = head->next;
  head->next = clone;
  ((struct skb_shared_info *)((clone)->end))->frag_list = ((struct skb_shared_info *)((head)->end))->frag_list;
  ((struct skb_shared_info *)((head)->end))->frag_list = ((void *)0);
  for (i=0; i<((struct skb_shared_info *)((head)->end))->nr_frags; i++)
   plen += ((struct skb_shared_info *)((head)->end))->frags[i].size;
  clone->len = clone->data_len = head->data_len - plen;
  head->data_len -= clone->len;
  head->len -= clone->len;
  clone->csum = 0;
  clone->ip_summed = head->ip_summed;
  atomic_add(clone->truesize, &global_ip6_frag_mem[get_stack_id()]);
 }



 nhoff = fq->nhoffset;
 head->nh.raw[nhoff] = head->h.raw[0];
 memmove(head->head + sizeof(struct frag_hdr), head->head,
  (head->data - head->head) - sizeof(struct frag_hdr));
 head->mac.raw += sizeof(struct frag_hdr);
 head->nh.raw += sizeof(struct frag_hdr);

 ((struct skb_shared_info *)((head)->end))->frag_list = head->next;
 head->h.raw = head->data;
 skb_push(head, head->data - head->nh.raw);
 atomic_sub(head->truesize, &global_ip6_frag_mem[get_stack_id()]);

 for (fp=head->next; fp; fp = fp->next) {
  head->data_len += fp->len;
  head->len += fp->len;
  if (head->ip_summed != fp->ip_summed)
   head->ip_summed = 0;
  else if (head->ip_summed == 1)
   head->csum = csum_add(head->csum, fp->csum);
  head->truesize += fp->truesize;
  atomic_sub(fp->truesize, &global_ip6_frag_mem[get_stack_id()]);
 }

 head->next = ((void *)0);
 head->dev = dev;
 skb_set_timestamp(head, &fq->stamp);
 head->nh.ipv6h->payload_len = htons(payload_len);
 ((struct inet6_skb_parm*)((head)->cb))->nhoff = nhoff;

 *skb_in = head;


 if (head->ip_summed == 1)
  head->csum = csum_partial(head->nh.raw, head->h.raw-head->nh.raw, head->csum);

 (({ (void)(0); ((*_GLOBAL_ipv6_statistics_32_A[get_stack_id()])[0]); })->mibs[IPSTATS_MIB_REASMOKS]++);
 fq->fragments = ((void *)0);
 return 1;

out_oversize:
 if (net_ratelimit())
  printk("<7>" "ip6_frag_reasm: payload len = %d\n", payload_len);
 goto out_fail;
out_oom:
 if (net_ratelimit())
  printk("<7>" "ip6_frag_reasm: no memory for reassembly\n");
out_fail:
 (({ (void)(0); ((*_GLOBAL_ipv6_statistics_32_A[get_stack_id()])[0]); })->mibs[IPSTATS_MIB_REASMFAILS]++);
 return -1;
}

static int ipv6_frag_rcv(struct sk_buff **skbp)
{
 struct sk_buff *skb = *skbp;
 struct net_device *dev = skb->dev;
 struct frag_hdr *fhdr;
 struct frag_queue *fq;
 struct ipv6hdr *hdr;

 hdr = skb->nh.ipv6h;

 (({ (void)(0); ((*_GLOBAL_ipv6_statistics_32_A[get_stack_id()])[0]); })->mibs[IPSTATS_MIB_REASMREQDS]++);


 if (hdr->payload_len==0) {
  (({ (void)(0); ((*_GLOBAL_ipv6_statistics_32_A[get_stack_id()])[!(((current_thread_info()->preempt_count) & (((1UL << (8))-1) << (0 + 8))))]); })->mibs[IPSTATS_MIB_INHDRERRORS]++);
  icmpv6_param_prob(skb, 0, skb->h.raw-skb->nh.raw);
  return -1;
 }
 if (!pskb_may_pull(skb, (skb->h.raw-skb->data)+sizeof(struct frag_hdr))) {
  (({ (void)(0); ((*_GLOBAL_ipv6_statistics_32_A[get_stack_id()])[!(((current_thread_info()->preempt_count) & (((1UL << (8))-1) << (0 + 8))))]); })->mibs[IPSTATS_MIB_INHDRERRORS]++);
  icmpv6_param_prob(skb, 0, skb->h.raw-skb->nh.raw);
  return -1;
 }

 hdr = skb->nh.ipv6h;
 fhdr = (struct frag_hdr *)skb->h.raw;

 if (!(fhdr->frag_off & htons(0xFFF9))) {

  skb->h.raw += sizeof(struct frag_hdr);
  (({ (void)(0); ((*_GLOBAL_ipv6_statistics_32_A[get_stack_id()])[0]); })->mibs[IPSTATS_MIB_REASMOKS]++);

  ((struct inet6_skb_parm*)((skb)->cb))->nhoff = (u8*)fhdr - skb->nh.raw;
  return 1;
 }

 if (((&global_ip6_frag_mem[get_stack_id()])->counter) > global_sysctl_ip6frag_high_thresh[get_stack_id()])
  ip6_evictor();

 if ((fq = fq_find(fhdr->identification, &hdr->saddr, &hdr->daddr)) != ((void *)0)) {
  int ret = -1;

  do { do { } while (0); (void)0; (void)(&fq->lock); } while (0);

  ip6_frag_queue(fq, skb, fhdr, ((struct inet6_skb_parm*)((skb)->cb))->nhoff);

  if (fq->last_in == (2|1) &&
      fq->meat == fq->len)
   ret = ip6_frag_reasm(fq, skbp, dev);

  do { do { } while (0); (void)0; (void)(&fq->lock); } while (0);
  fq_put(fq, ((void *)0));
  return ret;
 }

 (({ (void)(0); ((*_GLOBAL_ipv6_statistics_32_A[get_stack_id()])[0]); })->mibs[IPSTATS_MIB_REASMFAILS]++);
 kfree_skb(skb);
 return -1;
}

typedef  struct inet6_protocol   _GLOBAL_248_T; static  _GLOBAL_248_T  global_frag_protocol[NUM_STACKS] = {  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  { . handler  = ipv6_frag_rcv  , . flags  = 0x1   , } ,  };     

   
   


void  __attribute__ ((__section__ (".init.text"))) ipv6_frag_init(void)
{
 if (inet6_add_protocol(&global_frag_protocol[get_stack_id()], 44) < 0)
  printk("<3>" "ipv6_frag_init: Could not register protocol\n");

 global_ip6_frag_hash_rnd[get_stack_id()] = (u32) ((global_num_physpages[get_stack_id()] ^ (global_num_physpages[get_stack_id()]>>7)) ^
       (global_jiffies[get_stack_id()] ^ (global_jiffies[get_stack_id()] >> 6)));

 init_timer(&global_ip6_frag_secret_timer[get_stack_id()]);
 global_ip6_frag_secret_timer[get_stack_id()].function = ip6_frag_secret_rebuild;
 global_ip6_frag_secret_timer[get_stack_id()].expires = global_jiffies[get_stack_id()] + global_sysctl_ip6frag_secret_interval[get_stack_id()];
 add_timer(&global_ip6_frag_secret_timer[get_stack_id()]);
}

