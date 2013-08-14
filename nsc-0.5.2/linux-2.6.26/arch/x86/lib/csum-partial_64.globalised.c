# 1 "linux-2.6.26/arch/x86/lib/csum-partial_64.c"
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
# 1 "linux-2.6.26/arch/x86/lib/csum-partial_64.c"







# 1 "linux-2.6.26/include/linux/compiler.h" 1
# 40 "linux-2.6.26/include/linux/compiler.h"
# 1 "linux-2.6.26/include/linux/compiler-gcc4.h" 1





# 1 "linux-2.6.26/include/linux/compiler-gcc.h" 1
# 7 "linux-2.6.26/include/linux/compiler-gcc4.h" 2
# 41 "linux-2.6.26/include/linux/compiler.h" 2
# 9 "linux-2.6.26/arch/x86/lib/csum-partial_64.c" 2
# 1 "linux-2.6.26/include/linux/module.h" 1
# 9 "linux-2.6.26/include/linux/module.h"
# 1 "linux-2.6.26/include/linux/list.h" 1



# 1 "linux-2.6.26/include/linux/stddef.h" 1
# 15 "linux-2.6.26/include/linux/stddef.h"
enum {
 false = 0,
 true = 1
};
# 5 "linux-2.6.26/include/linux/list.h" 2
# 1 "linux-2.6.26/include/linux/poison.h" 1
# 6 "linux-2.6.26/include/linux/list.h" 2
# 1 "linux-2.6.26/include/linux/prefetch.h" 1
# 13 "linux-2.6.26/include/linux/prefetch.h"
# 1 "linux-2.6.26/include/linux/types.h" 1
# 11 "linux-2.6.26/include/linux/types.h"
# 1 "linux-2.6.26/include/linux/posix_types.h" 1
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
# 14 "linux-2.6.26/include/linux/prefetch.h" 2
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
typedef  char  _GLOBAL_1_T; extern  _GLOBAL_1_T  * global_saved_command_line[NUM_STACKS];   
typedef  unsigned int   _GLOBAL_2_T; extern  _GLOBAL_2_T  global_reset_devices[NUM_STACKS];    


void setup_arch(char **);
void prepare_namespace(void);

typedef  void   ( *_GLOBAL_4_T  )  ( void  ) ; extern  _GLOBAL_4_T global_late_time_init[NUM_STACKS];   
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
# 140 "linux-2.6.26/include/asm/segment.h"
# 1 "linux-2.6.26/include/asm/cache.h" 1
# 141 "linux-2.6.26/include/asm/segment.h" 2
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
# 16 "linux-2.6.26/include/linux/kernel.h" 2
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
typedef  int  _GLOBAL_5_T; extern  _GLOBAL_5_T  _GLOBAL_0_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_1_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_2_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_3_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_4_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_5_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_6_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_7_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_8_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_9_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_10_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_11_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_12_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_13_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_14_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_15_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_16_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_17_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_18_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_19_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_20_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_21_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_22_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_23_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_24_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_25_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_26_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_27_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_28_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_29_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_30_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_31_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_32_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_33_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_34_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_35_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_36_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_37_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_38_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_39_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_40_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_41_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_42_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_43_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_44_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_45_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_46_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_47_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_48_console_printk_I [ ] ; extern  _GLOBAL_5_T  _GLOBAL_49_console_printk_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_console_printk_I) *_GLOBAL_console_printk_1_A[NUM_STACKS] = { &_GLOBAL_0_console_printk_I, &_GLOBAL_1_console_printk_I, &_GLOBAL_2_console_printk_I, &_GLOBAL_3_console_printk_I, &_GLOBAL_4_console_printk_I, &_GLOBAL_5_console_printk_I, &_GLOBAL_6_console_printk_I, &_GLOBAL_7_console_printk_I, &_GLOBAL_8_console_printk_I, &_GLOBAL_9_console_printk_I, &_GLOBAL_10_console_printk_I, &_GLOBAL_11_console_printk_I, &_GLOBAL_12_console_printk_I, &_GLOBAL_13_console_printk_I, &_GLOBAL_14_console_printk_I, &_GLOBAL_15_console_printk_I, &_GLOBAL_16_console_printk_I, &_GLOBAL_17_console_printk_I, &_GLOBAL_18_console_printk_I, &_GLOBAL_19_console_printk_I, &_GLOBAL_20_console_printk_I, &_GLOBAL_21_console_printk_I, &_GLOBAL_22_console_printk_I, &_GLOBAL_23_console_printk_I, &_GLOBAL_24_console_printk_I, &_GLOBAL_25_console_printk_I, &_GLOBAL_26_console_printk_I, &_GLOBAL_27_console_printk_I, &_GLOBAL_28_console_printk_I, &_GLOBAL_29_console_printk_I, &_GLOBAL_30_console_printk_I, &_GLOBAL_31_console_printk_I, &_GLOBAL_32_console_printk_I, &_GLOBAL_33_console_printk_I, &_GLOBAL_34_console_printk_I, &_GLOBAL_35_console_printk_I, &_GLOBAL_36_console_printk_I, &_GLOBAL_37_console_printk_I, &_GLOBAL_38_console_printk_I, &_GLOBAL_39_console_printk_I, &_GLOBAL_40_console_printk_I, &_GLOBAL_41_console_printk_I, &_GLOBAL_42_console_printk_I, &_GLOBAL_43_console_printk_I, &_GLOBAL_44_console_printk_I, &_GLOBAL_45_console_printk_I, &_GLOBAL_46_console_printk_I, &_GLOBAL_47_console_printk_I, &_GLOBAL_48_console_printk_I, &_GLOBAL_49_console_printk_I, };  






struct completion;
struct pt_regs;
struct user;
# 135 "linux-2.6.26/include/linux/kernel.h"
extern struct atomic_notifier_head panic_notifier_list;
typedef  long   ( *_GLOBAL_7_T  )  ( long  time  ) ; extern  _GLOBAL_7_T global_panic_blink[NUM_STACKS];    
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

typedef  int  _GLOBAL_8_T; extern  _GLOBAL_8_T  global_printk_ratelimit_jiffies[NUM_STACKS];   
typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_printk_ratelimit_burst[NUM_STACKS];   
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
typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  global_oops_in_progress[NUM_STACKS];   
typedef  int  _GLOBAL_11_T; extern  _GLOBAL_11_T  global_panic_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_12_T; extern  _GLOBAL_12_T  global_panic_on_oops[NUM_STACKS];   
typedef  int  _GLOBAL_13_T; extern  _GLOBAL_13_T  global_panic_on_unrecovered_nmi[NUM_STACKS];   
typedef  int  _GLOBAL_14_T; extern  _GLOBAL_14_T  global_tainted[NUM_STACKS];   
extern const char *print_tainted(void);
extern void add_taint(unsigned);
typedef  int  _GLOBAL_15_T; extern  _GLOBAL_15_T  global_root_mountflags[NUM_STACKS];   


typedef  enum system_states { SYSTEM_BOOTING , SYSTEM_RUNNING  , SYSTEM_HALT  , SYSTEM_POWER_OFF  , SYSTEM_RESTART  , SYSTEM_SUSPEND_DISK  , }   _GLOBAL_16_T; extern  _GLOBAL_16_T  global_system_state[NUM_STACKS];    
 
 
 
 
 
 
 
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
# 8 "linux-2.6.26/include/asm/pda.h" 2
# 1 "linux-2.6.26/include/asm/page.h" 1



# 1 "linux-2.6.26/include/linux/const.h" 1
# 5 "linux-2.6.26/include/asm/page.h" 2
# 40 "linux-2.6.26/include/asm/page.h"
# 1 "linux-2.6.26/include/asm/page_64.h" 1
# 58 "linux-2.6.26/include/asm/page_64.h"
void clear_page(void *page);
void copy_page(void *to, void *from);

typedef  unsigned long   _GLOBAL_17_T; extern  _GLOBAL_17_T  global_end_pfn[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_18_T; extern  _GLOBAL_18_T  global_phys_base[NUM_STACKS];    

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

typedef  unsigned long   _GLOBAL_19_T; extern  _GLOBAL_19_T  global_max_pfn_mapped[NUM_STACKS];    

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
# 9 "linux-2.6.26/include/asm/pda.h" 2


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

typedef  struct x8664_pda   _GLOBAL_20_T; extern  _GLOBAL_20_T  * _GLOBAL_0__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_1__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_2__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_3__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_4__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_5__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_6__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_7__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_8__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_9__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_10__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_11__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_12__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_13__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_14__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_15__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_16__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_17__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_18__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_19__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_20__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_21__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_22__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_23__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_24__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_25__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_26__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_27__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_28__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_29__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_30__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_31__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_32__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_33__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_34__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_35__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_36__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_37__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_38__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_39__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_40__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_41__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_42__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_43__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_44__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_45__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_46__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_47__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_48__cpu_pda_I [ ]  ; extern  _GLOBAL_20_T  * _GLOBAL_49__cpu_pda_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0__cpu_pda_I) *_GLOBAL__cpu_pda_2_A[NUM_STACKS];   
typedef  struct x8664_pda   _GLOBAL_21_T; extern  _GLOBAL_21_T  _GLOBAL_0_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_1_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_2_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_3_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_4_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_5_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_6_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_7_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_8_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_9_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_10_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_11_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_12_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_13_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_14_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_15_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_16_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_17_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_18_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_19_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_20_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_21_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_22_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_23_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_24_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_25_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_26_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_27_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_28_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_29_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_30_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_31_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_32_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_33_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_34_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_35_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_36_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_37_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_38_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_39_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_40_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_41_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_42_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_43_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_44_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_45_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_46_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_47_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_48_boot_cpu_pda_I [ ] ; extern  _GLOBAL_21_T  _GLOBAL_49_boot_cpu_pda_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_cpu_pda_I) *_GLOBAL_boot_cpu_pda_3_A[NUM_STACKS];   
extern void pda_init(int);







extern void __bad_pda_field(void) __attribute__((noreturn)) ;





typedef  struct x8664_pda   _GLOBAL_22_T; extern  _GLOBAL_22_T  global__proxy_pda[NUM_STACKS];    
# 8 "linux-2.6.26/include/asm/current_64.h" 2
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
# 1 "linux-2.6.26/include/asm-generic/errno.h" 1



# 1 "linux-2.6.26/include/asm-generic/errno-base.h" 1
# 5 "linux-2.6.26/include/asm-generic/errno.h" 2
# 1 "linux-2.6.26/include/asm/errno.h" 2
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




# 1 "linux-2.6.26/include/linux/errno.h" 1



# 1 "linux-2.6.26/include/asm/errno.h" 1
# 5 "linux-2.6.26/include/linux/errno.h" 2
# 113 "linux-2.6.26/include/asm/msr.h" 2
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
# 15 "linux-2.6.26/include/linux/prefetch.h" 2
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
# 10 "linux-2.6.26/include/linux/module.h" 2
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
# 60 "linux-2.6.26/include/linux/stat.h"
# 1 "linux-2.6.26/include/linux/time.h" 1







# 1 "linux-2.6.26/include/linux/seqlock.h" 1
# 29 "linux-2.6.26/include/linux/seqlock.h"
# 1 "linux-2.6.26/include/linux/spinlock.h" 1
# 49 "linux-2.6.26/include/linux/spinlock.h"
# 1 "linux-2.6.26/include/linux/preempt.h" 1
# 9 "linux-2.6.26/include/linux/preempt.h"
# 1 "linux-2.6.26/include/linux/thread_info.h" 1
# 12 "linux-2.6.26/include/linux/thread_info.h"
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


# 1 "linux-2.6.26/include/asm/thread_info.h" 1




# 1 "linux-2.6.26/include/asm/thread_info_64.h" 1
# 22 "linux-2.6.26/include/asm/thread_info_64.h"
struct task_struct;
struct exec_domain;


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
# 30 "linux-2.6.26/include/linux/seqlock.h" 2


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
# 9 "linux-2.6.26/include/linux/time.h" 2
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







typedef  struct timespec   _GLOBAL_45_T; extern  _GLOBAL_45_T  global_xtime[NUM_STACKS];    
typedef  struct timespec   _GLOBAL_46_T; extern  _GLOBAL_46_T  global_wall_to_monotonic[NUM_STACKS];    
typedef  seqlock_t  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_xtime_lock[NUM_STACKS];   

extern unsigned long read_persistent_clock(void);
extern int update_persistent_clock(struct timespec now);
typedef  int  _GLOBAL_48_T; extern  _GLOBAL_48_T  global_no_sync_cmos_clock[NUM_STACKS] __attribute__((__section__(".data.read_mostly")))  ;    
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
# 61 "linux-2.6.26/include/linux/stat.h" 2

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
# 1 "linux-2.6.26/include/asm/auxvec.h" 1
# 11 "linux-2.6.26/include/asm/elf.h" 2

typedef unsigned long elf_greg_t;


typedef elf_greg_t elf_gregset_t[(sizeof(struct user_regs_struct) / sizeof(elf_greg_t))];

typedef struct user_i387_struct elf_fpregset_t;
# 75 "linux-2.6.26/include/asm/elf.h"
# 1 "linux-2.6.26/include/asm/vdso.h" 1




typedef  const char   _GLOBAL_49_T; extern  _GLOBAL_49_T  _GLOBAL_0_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_1_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_2_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_3_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_4_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_5_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_6_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_7_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_8_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_9_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_10_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_11_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_12_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_13_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_14_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_15_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_16_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_17_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_18_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_19_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_20_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_21_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_22_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_23_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_24_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_25_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_26_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_27_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_28_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_29_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_30_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_31_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_32_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_33_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_34_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_35_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_36_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_37_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_38_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_39_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_40_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_41_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_42_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_43_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_44_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_45_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_46_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_47_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_48_VDSO64_PRELINK_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_49_VDSO64_PRELINK_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_VDSO64_PRELINK_I) *_GLOBAL_VDSO64_PRELINK_4_A[NUM_STACKS];   
# 36 "linux-2.6.26/include/asm/vdso.h"
extern void __kernel_sigreturn;
extern void __kernel_rt_sigreturn;
# 76 "linux-2.6.26/include/asm/elf.h" 2

typedef  unsigned int   _GLOBAL_50_T; extern  _GLOBAL_50_T  global_vdso_enabled[NUM_STACKS];    
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
typedef  unsigned int   _GLOBAL_51_T; extern  _GLOBAL_51_T  global_sysctl_vsyscall32[NUM_STACKS];    
typedef  int  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_force_personality32[NUM_STACKS];   
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
# 27 "linux-2.6.26/include/linux/kobject.h" 2
# 1 "linux-2.6.26/include/asm/atomic.h" 1
# 28 "linux-2.6.26/include/linux/kobject.h" 2







typedef  char  _GLOBAL_53_T; extern  _GLOBAL_53_T  _GLOBAL_0_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_1_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_2_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_3_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_4_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_5_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_6_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_7_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_8_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_9_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_10_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_11_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_12_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_13_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_14_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_15_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_16_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_17_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_18_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_19_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_20_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_21_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_22_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_23_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_24_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_25_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_26_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_27_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_28_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_29_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_30_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_31_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_32_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_33_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_34_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_35_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_36_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_37_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_38_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_39_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_40_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_41_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_42_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_43_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_44_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_45_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_46_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_47_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_48_uevent_helper_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_49_uevent_helper_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uevent_helper_I) *_GLOBAL_uevent_helper_5_A[NUM_STACKS];  


typedef  u64  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_uevent_seqnum[NUM_STACKS];   
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

typedef  struct sysfs_ops   _GLOBAL_55_T; extern  _GLOBAL_55_T  global_kobj_sysfs_ops[NUM_STACKS];    
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


typedef  struct kobject   _GLOBAL_56_T; extern  _GLOBAL_56_T  * global_kernel_kobj[NUM_STACKS];    

typedef  struct kobject   _GLOBAL_57_T; extern  _GLOBAL_57_T  * global_hypervisor_kobj[NUM_STACKS];    

typedef  struct kobject   _GLOBAL_58_T; extern  _GLOBAL_58_T  * global_power_kobj[NUM_STACKS];    

typedef  struct kobject   _GLOBAL_59_T; extern  _GLOBAL_59_T  * global_firmware_kobj[NUM_STACKS];    
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
# 17 "linux-2.6.26/include/linux/module.h" 2
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



# 1 "linux-2.6.26/include/linux/percpu.h" 1




# 1 "linux-2.6.26/include/linux/slab.h" 1
# 12 "linux-2.6.26/include/linux/slab.h"
# 1 "linux-2.6.26/include/linux/gfp.h" 1



# 1 "linux-2.6.26/include/linux/mmzone.h" 1
# 13 "linux-2.6.26/include/linux/mmzone.h"
# 1 "linux-2.6.26/include/linux/numa.h" 1
# 14 "linux-2.6.26/include/linux/mmzone.h" 2


# 1 "linux-2.6.26/include/linux/nodemask.h" 1
# 92 "linux-2.6.26/include/linux/nodemask.h"
typedef struct { unsigned long bits[((((1 << 0)) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } nodemask_t;
typedef  nodemask_t  _GLOBAL_60_T; extern  _GLOBAL_60_T  global__unused_nodemask_arg_[NUM_STACKS];   


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






typedef  nodemask_t  _GLOBAL_61_T; extern  _GLOBAL_61_T  node_states [ NR_NODE_STATES ] ;   
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
typedef  int  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_page_group_by_mobility_disabled[NUM_STACKS];   

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
typedef  struct blocking_notifier_head   _GLOBAL_63_T; extern  _GLOBAL_63_T  global_reboot_notifier_list[NUM_STACKS];    
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

typedef  int  _GLOBAL_64_T; extern  _GLOBAL_64_T  global_movable_zone[NUM_STACKS];   

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
typedef  int  _GLOBAL_65_T; extern  _GLOBAL_65_T  _GLOBAL_0_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_1_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_2_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_3_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_4_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_5_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_6_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_7_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_8_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_9_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_10_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_11_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_12_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_13_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_14_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_15_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_16_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_17_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_18_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_19_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_20_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_21_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_22_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_23_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_24_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_25_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_26_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_27_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_28_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_29_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_30_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_31_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_32_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_33_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_34_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_35_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_36_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_37_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_38_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_39_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_40_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_41_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_42_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_43_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_44_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_45_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_46_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_47_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_48_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; extern  _GLOBAL_65_T  _GLOBAL_49_sysctl_lowmem_reserve_ratio_I [ 3 - 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysctl_lowmem_reserve_ratio_I) *_GLOBAL_sysctl_lowmem_reserve_ratio_6_A[NUM_STACKS];   
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







typedef  struct pglist_data   _GLOBAL_66_T; extern  _GLOBAL_66_T  global_contig_page_data[NUM_STACKS];    
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
# 13 "linux-2.6.26/include/linux/slab.h" 2
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
# 25 "linux-2.6.26/include/linux/ktime.h"
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

typedef  unsigned int   _GLOBAL_67_T; extern  _GLOBAL_67_T  global_cpu_khz[NUM_STACKS];    
typedef  unsigned int   _GLOBAL_68_T; extern  _GLOBAL_68_T  global_tsc_khz[NUM_STACKS];    

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






typedef  unsigned long   _GLOBAL_69_T; extern  _GLOBAL_69_T  global_tick_usec[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_70_T; extern  _GLOBAL_70_T  global_tick_nsec[NUM_STACKS];    
typedef  int  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_tickadj[NUM_STACKS];   




typedef  int  _GLOBAL_72_T; extern  _GLOBAL_72_T  global_time_status[NUM_STACKS];   
typedef  long  _GLOBAL_73_T; extern  _GLOBAL_73_T  global_time_maxerror[NUM_STACKS];   
typedef  long  _GLOBAL_74_T; extern  _GLOBAL_74_T  global_time_esterror[NUM_STACKS];   

typedef  long  _GLOBAL_75_T; extern  _GLOBAL_75_T  global_time_adjust[NUM_STACKS];   

extern void ntp_init(void);
extern void ntp_clear(void);





static inline  __attribute__((always_inline)) int ntp_synced(void)
{
 return !(global_time_status[get_stack_id()] & 0x0040);
}
# 244 "linux-2.6.26/include/linux/timex.h"
typedef  u64  _GLOBAL_76_T; extern  _GLOBAL_76_T  global_tick_length[NUM_STACKS];   

extern void second_overflow(void);
extern void update_ntp_one_tick(void);
extern int do_adjtimex(struct timex *);




int read_current_timer(unsigned long *timer_val);
# 9 "linux-2.6.26/include/linux/jiffies.h" 2
# 81 "linux-2.6.26/include/linux/jiffies.h"
typedef  u64   _GLOBAL_77_T; extern  __attribute__((section(".data")))   _GLOBAL_77_T  global_jiffies_64[NUM_STACKS];    
typedef  unsigned long    _GLOBAL_78_T; extern volatile  __attribute__((section(".data")))   _GLOBAL_78_T  global_jiffies[NUM_STACKS];      




static inline  __attribute__((always_inline)) u64 get_jiffies_64(void)
{
 return (u64)global_jiffies[get_stack_id()];
}
# 173 "linux-2.6.26/include/linux/jiffies.h"
typedef  unsigned long   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_preset_lpj[NUM_STACKS];    
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
 typedef  const ktime_t   _GLOBAL_80_T; static  _GLOBAL_80_T  global_ktime_zero[NUM_STACKS] = {  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  { . tv64  = 0  } ,  };          
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

typedef  struct tvec_base   _GLOBAL_81_T; extern  _GLOBAL_81_T  _GLOBAL_0_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_1_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_2_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_3_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_4_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_5_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_6_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_7_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_8_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_9_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_10_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_11_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_12_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_13_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_14_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_15_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_16_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_17_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_18_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_19_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_20_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_21_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_22_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_23_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_24_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_25_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_26_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_27_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_28_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_29_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_30_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_31_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_32_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_33_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_34_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_35_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_36_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_37_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_38_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_39_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_40_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_41_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_42_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_43_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_44_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_45_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_46_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_47_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_48_boot_tvec_bases_I; extern  _GLOBAL_81_T  _GLOBAL_49_boot_tvec_bases_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_boot_tvec_bases_I) *_GLOBAL_boot_tvec_bases_7_A[NUM_STACKS];   
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
# 5 "linux-2.6.26/include/asm/local.h" 2


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
# 10 "linux-2.6.26/arch/x86/lib/csum-partial_64.c" 2
# 1 "linux-2.6.26/include/asm/checksum.h" 1



# 1 "linux-2.6.26/include/asm/checksum_64.h" 1
# 11 "linux-2.6.26/include/asm/checksum_64.h"
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
# 11 "linux-2.6.26/arch/x86/lib/csum-partial_64.c" 2

static inline  __attribute__((always_inline)) unsigned short from32to16(unsigned a)
{
 unsigned short b = a >> 16;
 asm("addw %w2,%w0\n\t"
     "adcw $0,%w0\n"
     : "=r" (b)
     : "0" (b), "r" (a));
 return b;
}
# 34 "linux-2.6.26/arch/x86/lib/csum-partial_64.c"
static unsigned do_csum(const unsigned char *buff, unsigned len)
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
# 133 "linux-2.6.26/arch/x86/lib/csum-partial_64.c"
__wsum csum_partial(const void *buff, int len, __wsum sum)
{
 return ( __wsum)add32_with_carry(do_csum(buff, len),
      ( u32)sum);
}





__sum16 ip_compute_csum(const void *buff, int len)
{
 return csum_fold(csum_partial(buff,len,0));
}
;

