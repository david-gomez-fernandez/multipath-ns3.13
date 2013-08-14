# 1 "linux-2.6.26/kernel/softirq.c"
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
# 1 "linux-2.6.26/kernel/softirq.c"
# 11 "linux-2.6.26/kernel/softirq.c"
# 1 "linux-2.6.26/include/linux/module.h" 1
# 9 "linux-2.6.26/include/linux/module.h"
# 1 "linux-2.6.26/include/linux/list.h" 1



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
# 12 "linux-2.6.26/kernel/softirq.c" 2
# 1 "linux-2.6.26/include/linux/kernel_stat.h" 1



# 1 "linux-2.6.26/include/asm/irq.h" 1



# 1 "linux-2.6.26/include/asm/irq_64.h" 1
# 37 "linux-2.6.26/include/asm/irq_64.h"
static inline  __attribute__((always_inline)) int irq_canonicalize(int irq)
{
 return ((irq == 2) ? 9 : irq);
}
# 5 "linux-2.6.26/include/asm/irq.h" 2
# 5 "linux-2.6.26/include/linux/kernel_stat.h" 2




# 1 "linux-2.6.26/include/asm/cputime.h" 1
# 1 "linux-2.6.26/include/asm-generic/cputime.h" 1






typedef unsigned long cputime_t;
# 24 "linux-2.6.26/include/asm-generic/cputime.h"
typedef u64 cputime64_t;
# 1 "linux-2.6.26/include/asm/cputime.h" 2
# 10 "linux-2.6.26/include/linux/kernel_stat.h" 2







struct cpu_usage_stat {
 cputime64_t user;
 cputime64_t nice;
 cputime64_t system;
 cputime64_t softirq;
 cputime64_t irq;
 cputime64_t idle;
 cputime64_t iowait;
 cputime64_t steal;
 cputime64_t guest;
};

struct kernel_stat {
 struct cpu_usage_stat cpustat;
 unsigned int irqs[(256 + (32 * 1))];
};

typedef  __typeof__ ( struct kernel_stat  )   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_per_cpu__kstat[NUM_STACKS];    





extern unsigned long long nr_context_switches(void);




static inline  __attribute__((always_inline)) int kstat_irqs(int irq)
{
 int cpu, sum = 0;

 for (((cpu)) = 0; ((cpu)) < 1; ((cpu))++, (void)global_cpu_possible_map[get_stack_id()])
  sum += (*((void)(cpu), &global_per_cpu__kstat[get_stack_id()])).irqs[irq];

 return sum;
}

extern void account_user_time(struct task_struct *, cputime_t);
extern void account_user_time_scaled(struct task_struct *, cputime_t);
extern void account_system_time(struct task_struct *, int, cputime_t);
extern void account_system_time_scaled(struct task_struct *, cputime_t);
extern void account_steal_time(struct task_struct *, cputime_t);
# 13 "linux-2.6.26/kernel/softirq.c" 2
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
# 24 "linux-2.6.26/include/linux/irq.h" 2

# 1 "linux-2.6.26/include/asm/irq_regs.h" 1



# 1 "linux-2.6.26/include/asm/irq_regs_64.h" 1
# 1 "linux-2.6.26/include/asm-generic/irq_regs.h" 1
# 21 "linux-2.6.26/include/asm-generic/irq_regs.h"
typedef  __typeof__ ( struct pt_regs  *  )   _GLOBAL_83_T; extern  _GLOBAL_83_T  global_per_cpu____irq_regs[NUM_STACKS];     

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

typedef  int  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_prof_on[NUM_STACKS] __attribute__((__section__(".data.read_mostly")))  ;    






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
typedef  __typeof__ ( vector_irq_t )   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_per_cpu__vector_irq[NUM_STACKS];   
extern void __setup_vector_irq(int cpu);
typedef  spinlock_t  _GLOBAL_86_T; extern  _GLOBAL_86_T  global_vector_lock[NUM_STACKS];   
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

typedef  unsigned long   _GLOBAL_87_T; extern  _GLOBAL_87_T  global_io_apic_irqs[NUM_STACKS];    

typedef  atomic_t  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_irq_err_count[NUM_STACKS];   
typedef  atomic_t  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_irq_mis_count[NUM_STACKS];   
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

typedef  __typeof__ ( irq_cpustat_t )   _GLOBAL_90_T; extern  _GLOBAL_90_T  global_per_cpu__irq_stat[NUM_STACKS];   
typedef  irq_cpustat_t  _GLOBAL_91_T; extern  _GLOBAL_91_T  _GLOBAL_0_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_1_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_2_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_3_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_4_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_5_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_6_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_7_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_8_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_9_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_10_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_11_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_12_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_13_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_14_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_15_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_16_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_17_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_18_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_19_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_20_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_21_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_22_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_23_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_24_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_25_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_26_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_27_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_28_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_29_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_30_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_31_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_32_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_33_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_34_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_35_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_36_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_37_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_38_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_39_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_40_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_41_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_42_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_43_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_44_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_45_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_46_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_47_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_48_irq_stat_I [ ] ; extern  _GLOBAL_91_T  _GLOBAL_49_irq_stat_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_irq_stat_I) *_GLOBAL_irq_stat_8_A[NUM_STACKS];  




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

typedef  const kernel_cap_t   _GLOBAL_92_T; extern  _GLOBAL_92_T  global___cap_empty_set[NUM_STACKS];    
typedef  const kernel_cap_t   _GLOBAL_93_T; extern  _GLOBAL_93_T  global___cap_full_set[NUM_STACKS];    
typedef  const kernel_cap_t   _GLOBAL_94_T; extern  _GLOBAL_94_T  global___cap_init_eff_set[NUM_STACKS];    

kernel_cap_t cap_set_effective(const kernel_cap_t pE_new);

int capable(int cap);
int __capable(struct task_struct *t, int cap);
# 51 "linux-2.6.26/include/linux/sched.h" 2





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
# 57 "linux-2.6.26/include/linux/sched.h" 2




# 1 "linux-2.6.26/include/linux/mm_types.h" 1



# 1 "linux-2.6.26/include/linux/auxvec.h" 1
# 5 "linux-2.6.26/include/linux/mm_types.h" 2




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
# 10 "linux-2.6.26/include/linux/mm_types.h" 2


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
# 62 "linux-2.6.26/include/linux/sched.h" 2




# 1 "linux-2.6.26/include/asm/cputime.h" 1
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
typedef  int  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_show_unhandled_signals[NUM_STACKS];   

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

typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_96_T; extern  _GLOBAL_96_T  global_per_cpu__rcu_data[NUM_STACKS];    
typedef  __typeof__ ( struct rcu_data  )   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_per_cpu__rcu_bh_data[NUM_STACKS];    







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

typedef  struct pid   _GLOBAL_98_T; extern  _GLOBAL_98_T  global_init_struct_pid[NUM_STACKS];    

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
typedef  unsigned long   _GLOBAL_99_T; extern  _GLOBAL_99_T  _GLOBAL_0_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_1_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_2_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_3_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_4_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_5_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_6_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_7_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_8_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_9_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_10_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_11_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_12_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_13_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_14_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_15_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_16_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_17_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_18_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_19_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_20_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_21_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_22_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_23_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_24_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_25_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_26_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_27_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_28_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_29_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_30_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_31_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_32_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_33_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_34_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_35_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_36_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_37_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_38_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_39_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_40_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_41_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_42_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_43_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_44_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_45_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_46_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_47_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_48_avenrun_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_49_avenrun_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_avenrun_I) *_GLOBAL_avenrun_9_A[NUM_STACKS];   
# 129 "linux-2.6.26/include/linux/sched.h"
typedef  unsigned long   _GLOBAL_100_T; extern  _GLOBAL_100_T  global_total_forks[NUM_STACKS];    
typedef  int  _GLOBAL_101_T; extern  _GLOBAL_101_T  global_nr_threads[NUM_STACKS];   
typedef  __typeof__ ( unsigned long  )   _GLOBAL_102_T; extern  _GLOBAL_102_T  global_per_cpu__process_counts[NUM_STACKS];    
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


typedef  unsigned long long    _GLOBAL_103_T; extern  _GLOBAL_103_T  global_time_sync_thresh[NUM_STACKS];     
# 238 "linux-2.6.26/include/linux/sched.h"
typedef  rwlock_t  _GLOBAL_104_T; extern  _GLOBAL_104_T  global_tasklist_lock[NUM_STACKS];   
typedef  spinlock_t  _GLOBAL_105_T; extern  _GLOBAL_105_T  global_mmlist_lock[NUM_STACKS];   

struct task_struct;

extern void sched_init(void);
extern void sched_init_smp(void);
extern void schedule_tail(struct task_struct *prev);
extern void init_idle(struct task_struct *idle, int cpu);
extern void init_idle_bootup_task(struct task_struct *idle);

typedef  cpumask_t  _GLOBAL_106_T; extern  _GLOBAL_106_T  global_nohz_cpu_mask[NUM_STACKS];   



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




typedef  int  _GLOBAL_107_T; extern  _GLOBAL_107_T  global_sysctl_max_map_count[NUM_STACKS];   

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


typedef  unsigned  _GLOBAL_108_T; extern  _GLOBAL_108_T  global_aio_max_size[NUM_STACKS];   

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


typedef  unsigned long   _GLOBAL_109_T; extern  _GLOBAL_109_T  global_aio_nr[NUM_STACKS];    
typedef  unsigned long   _GLOBAL_110_T; extern  _GLOBAL_110_T  global_aio_max_nr[NUM_STACKS];    
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

typedef  struct user_struct   _GLOBAL_111_T; extern  _GLOBAL_111_T  global_root_user[NUM_STACKS];    


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

typedef  struct pid   _GLOBAL_112_T; extern  _GLOBAL_112_T  * global_cad_pid[NUM_STACKS];    

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
typedef  unsigned int   _GLOBAL_113_T; extern  _GLOBAL_113_T  global_sysctl_sched_rt_period[NUM_STACKS];    
typedef  int  _GLOBAL_114_T; extern  _GLOBAL_114_T  global_sysctl_sched_rt_runtime[NUM_STACKS];   

int sched_rt_handler(struct ctl_table *table, int write,
  struct file *filp, void *buffer, size_t *lenp,
  loff_t *ppos);

typedef  unsigned int   _GLOBAL_115_T; extern  _GLOBAL_115_T  global_sysctl_sched_compat_yield[NUM_STACKS];    






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




typedef  struct exec_domain   _GLOBAL_116_T; extern  _GLOBAL_116_T  global_default_exec_domain[NUM_STACKS];    

union thread_union {
 struct thread_info thread_info;
 unsigned long stack[(((1UL) << 12) << 1)/sizeof(long)];
};


static inline  __attribute__((always_inline)) int kstack_end(void *addr)
{



 return !(((unsigned long)addr+sizeof(void*)-1) & ((((1UL) << 12) << 1)-sizeof(void*)));
}


typedef  union thread_union   _GLOBAL_117_T; extern  _GLOBAL_117_T  global_init_thread_union[NUM_STACKS];    
typedef  struct task_struct   _GLOBAL_118_T; extern  _GLOBAL_118_T  global_init_task[NUM_STACKS];    

typedef  struct mm_struct   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_init_mm[NUM_STACKS];    

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

typedef  int  _GLOBAL_120_T; extern  _GLOBAL_120_T  global_sched_mc_power_savings[NUM_STACKS]; extern  _GLOBAL_120_T  global_sched_smt_power_savings[NUM_STACKS];    

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
# 13 "linux-2.6.26/include/linux/interrupt.h" 2

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
# 14 "linux-2.6.26/kernel/softirq.c" 2

# 1 "linux-2.6.26/include/linux/mm.h" 1
# 13 "linux-2.6.26/include/linux/mm.h"
# 1 "linux-2.6.26/include/linux/debug_locks.h" 1





struct task_struct;

typedef  int  _GLOBAL_121_T; extern  _GLOBAL_121_T  global_debug_locks[NUM_STACKS];   
typedef  int  _GLOBAL_122_T; extern  _GLOBAL_122_T  global_debug_locks_silent[NUM_STACKS];   




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


struct mempolicy;
struct anon_vma;
struct file_ra_state;
struct user_struct;
struct writeback_control;


typedef  unsigned long   _GLOBAL_123_T; extern  _GLOBAL_123_T  global_max_mapnr[NUM_STACKS];    


typedef  unsigned long   _GLOBAL_124_T; extern  _GLOBAL_124_T  global_num_physpages[NUM_STACKS];    
typedef  void  _GLOBAL_125_T; extern  _GLOBAL_125_T  * global_high_memory[NUM_STACKS];    
typedef  int  _GLOBAL_126_T; extern  _GLOBAL_126_T  global_page_cluster[NUM_STACKS];   


typedef  int  _GLOBAL_127_T; extern  _GLOBAL_127_T  global_sysctl_legacy_va_layout[NUM_STACKS];   




typedef  unsigned long   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_mmap_min_addr[NUM_STACKS];    


# 1 "linux-2.6.26/include/asm/pgtable.h" 1
# 155 "linux-2.6.26/include/asm/pgtable.h"
extern unsigned long empty_zero_page[((1UL) << 12) / sizeof(unsigned long)];


typedef  spinlock_t  _GLOBAL_129_T; extern  _GLOBAL_129_T  global_pgd_lock[NUM_STACKS];   
typedef  struct list_head   _GLOBAL_130_T; extern  _GLOBAL_130_T  global_pgd_list[NUM_STACKS];    





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

typedef  pteval_t  _GLOBAL_131_T; extern  _GLOBAL_131_T  global___supported_pte_mask[NUM_STACKS];   

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
typedef  pud_t  _GLOBAL_132_T; extern  _GLOBAL_132_T  _GLOBAL_0_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_1_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_2_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_3_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_4_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_5_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_6_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_7_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_8_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_9_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_10_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_11_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_12_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_13_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_14_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_15_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_16_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_17_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_18_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_19_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_20_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_21_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_22_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_23_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_24_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_25_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_26_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_27_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_28_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_29_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_30_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_31_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_32_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_33_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_34_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_35_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_36_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_37_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_38_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_39_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_40_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_41_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_42_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_43_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_44_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_45_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_46_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_47_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_48_level3_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_132_T  _GLOBAL_49_level3_kernel_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level3_kernel_pgt_I) *_GLOBAL_level3_kernel_pgt_10_A[NUM_STACKS];  
typedef  pud_t  _GLOBAL_133_T; extern  _GLOBAL_133_T  _GLOBAL_0_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_1_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_2_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_3_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_4_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_5_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_6_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_7_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_8_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_9_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_10_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_11_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_12_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_13_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_14_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_15_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_16_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_17_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_18_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_19_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_20_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_21_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_22_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_23_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_24_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_25_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_26_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_27_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_28_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_29_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_30_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_31_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_32_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_33_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_34_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_35_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_36_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_37_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_38_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_39_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_40_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_41_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_42_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_43_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_44_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_45_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_46_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_47_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_48_level3_ident_pgt_I [ 512 ] ; extern  _GLOBAL_133_T  _GLOBAL_49_level3_ident_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level3_ident_pgt_I) *_GLOBAL_level3_ident_pgt_11_A[NUM_STACKS];  
typedef  pmd_t  _GLOBAL_134_T; extern  _GLOBAL_134_T  _GLOBAL_0_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_1_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_2_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_3_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_4_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_5_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_6_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_7_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_8_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_9_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_10_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_11_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_12_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_13_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_14_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_15_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_16_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_17_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_18_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_19_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_20_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_21_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_22_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_23_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_24_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_25_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_26_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_27_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_28_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_29_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_30_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_31_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_32_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_33_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_34_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_35_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_36_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_37_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_38_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_39_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_40_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_41_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_42_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_43_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_44_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_45_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_46_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_47_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_48_level2_kernel_pgt_I [ 512 ] ; extern  _GLOBAL_134_T  _GLOBAL_49_level2_kernel_pgt_I [ 512 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_level2_kernel_pgt_I) *_GLOBAL_level2_kernel_pgt_12_A[NUM_STACKS];  
typedef  pgd_t  _GLOBAL_135_T; extern  _GLOBAL_135_T  _GLOBAL_0_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_1_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_2_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_3_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_4_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_5_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_6_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_7_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_8_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_9_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_10_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_11_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_12_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_13_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_14_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_15_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_16_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_17_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_18_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_19_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_20_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_21_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_22_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_23_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_24_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_25_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_26_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_27_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_28_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_29_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_30_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_31_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_32_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_33_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_34_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_35_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_36_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_37_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_38_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_39_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_40_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_41_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_42_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_43_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_44_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_45_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_46_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_47_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_48_init_level4_pgt_I [ ] ; extern  _GLOBAL_135_T  _GLOBAL_49_init_level4_pgt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_init_level4_pgt_I) *_GLOBAL_init_level4_pgt_13_A[NUM_STACKS];  



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
typedef  int  _GLOBAL_136_T; extern  _GLOBAL_136_T  global_direct_gbpages[NUM_STACKS];   
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
typedef  struct kmem_cache   _GLOBAL_137_T; extern  _GLOBAL_137_T  * global_vm_area_cachep[NUM_STACKS];    






struct vm_list_struct {
 struct vm_list_struct *next;
 struct vm_area_struct *vma;
};


typedef  struct rb_root   _GLOBAL_138_T; extern  _GLOBAL_138_T  global_nommu_vma_tree[NUM_STACKS];    
typedef  struct rw_semaphore   _GLOBAL_139_T; extern  _GLOBAL_139_T  global_nommu_vma_sem[NUM_STACKS];    

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
typedef  atomic_long_t  _GLOBAL_140_T; extern  _GLOBAL_140_T  vm_stat [ NR_VM_ZONE_STAT_ITEMS ] ;   

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
# 16 "linux-2.6.26/kernel/softirq.c" 2


# 1 "linux-2.6.26/include/linux/cpu.h" 1
# 22 "linux-2.6.26/include/linux/cpu.h"
# 1 "linux-2.6.26/include/linux/sysdev.h" 1
# 26 "linux-2.6.26/include/linux/sysdev.h"
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







typedef  void   ( *_GLOBAL_142_T  )  ( void  ) ; extern  _GLOBAL_142_T global_pm_idle[NUM_STACKS];   
typedef  void   ( *_GLOBAL_144_T  )  ( void  ) ; extern  _GLOBAL_144_T global_pm_power_off[NUM_STACKS];   
typedef  void   ( *_GLOBAL_146_T  )  ( void  ) ; extern  _GLOBAL_146_T global_pm_power_off_prepare[NUM_STACKS];   





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
typedef  unsigned int   _GLOBAL_147_T; extern  _GLOBAL_147_T  global_pm_flags[NUM_STACKS];    
# 27 "linux-2.6.26/include/linux/sysdev.h" 2


struct sys_device;

struct sysdev_class {
 const char *name;
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
# 60 "linux-2.6.26/include/linux/sysdev.h"
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
# 118 "linux-2.6.26/include/linux/sysdev.h"
extern int sysdev_create_file(struct sys_device *, struct sysdev_attribute *);
extern void sysdev_remove_file(struct sys_device *, struct sysdev_attribute *);
# 23 "linux-2.6.26/include/linux/cpu.h" 2
# 1 "linux-2.6.26/include/linux/node.h" 1
# 25 "linux-2.6.26/include/linux/node.h"
struct node {
 struct sys_device sysdev;
};

extern struct node node_devices[];

extern int register_node(struct node *, int, struct node *);
extern void unregister_node(struct node *node);






static inline  __attribute__((always_inline)) int register_one_node(int nid)
{
 return 0;
}
static inline  __attribute__((always_inline)) int unregister_one_node(int nid)
{
 return 0;
}
static inline  __attribute__((always_inline)) int register_cpu_under_node(unsigned int cpu, unsigned int nid)
{
 return 0;
}
static inline  __attribute__((always_inline)) int unregister_cpu_under_node(unsigned int cpu, unsigned int nid)
{
 return 0;
}
# 24 "linux-2.6.26/include/linux/cpu.h" 2




struct cpu {
 int node_id;
 int hotpluggable;
 struct sys_device sysdev;
};

extern int register_cpu(struct cpu *cpu, int num);
extern struct sys_device *get_cpu_sysdev(unsigned cpu);

extern int cpu_add_sysdev_attr(struct sysdev_attribute *attr);
extern void cpu_remove_sysdev_attr(struct sysdev_attribute *attr);

extern int cpu_add_sysdev_attr_group(struct attribute_group *attrs);
extern void cpu_remove_sysdev_attr_group(struct attribute_group *attrs);

extern int sched_create_sysfs_power_savings_entries(struct sysdev_class *cls);




struct notifier_block;
# 77 "linux-2.6.26/include/linux/cpu.h"
static inline  __attribute__((always_inline)) int register_cpu_notifier(struct notifier_block *nb)
{
 return 0;
}

static inline  __attribute__((always_inline)) void unregister_cpu_notifier(struct notifier_block *nb)
{
}

static inline  __attribute__((always_inline)) void cpu_hotplug_init(void)
{
}


typedef  struct sysdev_class   _GLOBAL_148_T; extern  _GLOBAL_148_T  global_cpu_sysdev_class[NUM_STACKS];    
extern void cpu_maps_update_begin(void);
extern void cpu_maps_update_done(void);
# 121 "linux-2.6.26/include/linux/cpu.h"
static inline  __attribute__((always_inline)) void cpuhotplug_mutex_lock(struct mutex *cpu_hp_mutex)
{ }
static inline  __attribute__((always_inline)) void cpuhotplug_mutex_unlock(struct mutex *cpu_hp_mutex)
{ }
# 142 "linux-2.6.26/include/linux/cpu.h"
static inline  __attribute__((always_inline)) int disable_nonboot_cpus(void) { return 0; }
static inline  __attribute__((always_inline)) void enable_nonboot_cpus(void) {}
# 19 "linux-2.6.26/kernel/softirq.c" 2
# 1 "linux-2.6.26/include/linux/freezer.h" 1
# 161 "linux-2.6.26/include/linux/freezer.h"
static inline  __attribute__((always_inline)) int frozen(struct task_struct *p) { return 0; }
static inline  __attribute__((always_inline)) int freezing(struct task_struct *p) { return 0; }
static inline  __attribute__((always_inline)) void set_freeze_flag(struct task_struct *p) {}
static inline  __attribute__((always_inline)) void clear_freeze_flag(struct task_struct *p) {}
static inline  __attribute__((always_inline)) int thaw_process(struct task_struct *p) { return 1; }

static inline  __attribute__((always_inline)) void refrigerator(void) {}
static inline  __attribute__((always_inline)) int freeze_processes(void) { do { asm volatile("ud2"); for (;;) ; } while (0); return 0; }
static inline  __attribute__((always_inline)) void thaw_processes(void) {}

static inline  __attribute__((always_inline)) int try_to_freeze(void) { return 0; }

static inline  __attribute__((always_inline)) void freezer_do_not_count(void) {}
static inline  __attribute__((always_inline)) void freezer_count(void) {}
static inline  __attribute__((always_inline)) int freezer_should_skip(struct task_struct *p) { return 0; }
static inline  __attribute__((always_inline)) void set_freezable(void) {}
# 20 "linux-2.6.26/kernel/softirq.c" 2
# 1 "linux-2.6.26/include/linux/kthread.h" 1



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
# 5 "linux-2.6.26/include/linux/kthread.h" 2


struct task_struct *kthread_create(int (*threadfn)(void *data),
       void *data,
       const char namefmt[], ...);
# 29 "linux-2.6.26/include/linux/kthread.h"
void kthread_bind(struct task_struct *k, unsigned int cpu);
int kthread_stop(struct task_struct *k);
int kthread_should_stop(void);

int kthreadd(void *unused);
typedef  struct task_struct   _GLOBAL_149_T; extern  _GLOBAL_149_T  * global_kthreadd_task[NUM_STACKS];    
# 21 "linux-2.6.26/kernel/softirq.c" 2


# 1 "linux-2.6.26/include/linux/tick.h" 1
# 9 "linux-2.6.26/include/linux/tick.h"
# 1 "linux-2.6.26/include/linux/clockchips.h" 1
# 10 "linux-2.6.26/include/linux/tick.h" 2
# 101 "linux-2.6.26/include/linux/tick.h"
static inline  __attribute__((always_inline)) void tick_init(void) { }
static inline  __attribute__((always_inline)) void tick_cancel_sched_timer(int cpu) { }
static inline  __attribute__((always_inline)) void tick_clock_notify(void) { }
static inline  __attribute__((always_inline)) int tick_check_oneshot_change(int allow_nohz) { return 0; }
# 115 "linux-2.6.26/include/linux/tick.h"
static inline  __attribute__((always_inline)) void tick_nohz_stop_sched_tick(void) { }
static inline  __attribute__((always_inline)) void tick_nohz_restart_sched_tick(void) { }
static inline  __attribute__((always_inline)) void tick_nohz_update_jiffies(void) { }
static inline  __attribute__((always_inline)) ktime_t tick_nohz_get_sleep_length(void)
{
 ktime_t len = { .tv64 = 1000000000L/1000 };

 return len;
}
static inline  __attribute__((always_inline)) void tick_nohz_stop_idle(int cpu) { }
static inline  __attribute__((always_inline)) u64 get_cpu_idle_time_us(int cpu, u64 *unused) { return 0; }
# 24 "linux-2.6.26/kernel/softirq.c" 2

# 1 "linux-2.6.26/include/asm/irq.h" 1
# 26 "linux-2.6.26/kernel/softirq.c" 2
# 49 "linux-2.6.26/kernel/softirq.c"
typedef  struct softirq_action   _GLOBAL_150_T; static  _GLOBAL_150_T  _GLOBAL_0_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_1_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_2_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_3_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_4_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_5_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_6_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_7_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_8_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_9_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_10_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_11_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_12_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_13_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_14_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_15_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_16_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_17_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_18_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_19_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_20_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_21_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_22_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_23_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_24_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_25_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_26_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_27_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_28_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_29_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_30_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_31_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_32_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_33_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_34_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_35_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_36_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_37_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_38_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_39_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_40_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_41_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_42_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_43_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_44_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_45_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_46_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_47_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_48_softirq_vec_I [ 32 ] ; static  _GLOBAL_150_T  _GLOBAL_49_softirq_vec_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_softirq_vec_I) *_GLOBAL_softirq_vec_14_A[NUM_STACKS] = { &_GLOBAL_0_softirq_vec_I, &_GLOBAL_1_softirq_vec_I, &_GLOBAL_2_softirq_vec_I, &_GLOBAL_3_softirq_vec_I, &_GLOBAL_4_softirq_vec_I, &_GLOBAL_5_softirq_vec_I, &_GLOBAL_6_softirq_vec_I, &_GLOBAL_7_softirq_vec_I, &_GLOBAL_8_softirq_vec_I, &_GLOBAL_9_softirq_vec_I, &_GLOBAL_10_softirq_vec_I, &_GLOBAL_11_softirq_vec_I, &_GLOBAL_12_softirq_vec_I, &_GLOBAL_13_softirq_vec_I, &_GLOBAL_14_softirq_vec_I, &_GLOBAL_15_softirq_vec_I, &_GLOBAL_16_softirq_vec_I, &_GLOBAL_17_softirq_vec_I, &_GLOBAL_18_softirq_vec_I, &_GLOBAL_19_softirq_vec_I, &_GLOBAL_20_softirq_vec_I, &_GLOBAL_21_softirq_vec_I, &_GLOBAL_22_softirq_vec_I, &_GLOBAL_23_softirq_vec_I, &_GLOBAL_24_softirq_vec_I, &_GLOBAL_25_softirq_vec_I, &_GLOBAL_26_softirq_vec_I, &_GLOBAL_27_softirq_vec_I, &_GLOBAL_28_softirq_vec_I, &_GLOBAL_29_softirq_vec_I, &_GLOBAL_30_softirq_vec_I, &_GLOBAL_31_softirq_vec_I, &_GLOBAL_32_softirq_vec_I, &_GLOBAL_33_softirq_vec_I, &_GLOBAL_34_softirq_vec_I, &_GLOBAL_35_softirq_vec_I, &_GLOBAL_36_softirq_vec_I, &_GLOBAL_37_softirq_vec_I, &_GLOBAL_38_softirq_vec_I, &_GLOBAL_39_softirq_vec_I, &_GLOBAL_40_softirq_vec_I, &_GLOBAL_41_softirq_vec_I, &_GLOBAL_42_softirq_vec_I, &_GLOBAL_43_softirq_vec_I, &_GLOBAL_44_softirq_vec_I, &_GLOBAL_45_softirq_vec_I, &_GLOBAL_46_softirq_vec_I, &_GLOBAL_47_softirq_vec_I, &_GLOBAL_48_softirq_vec_I, &_GLOBAL_49_softirq_vec_I, };    

typedef  __typeof__ ( struct task_struct  *  )   _GLOBAL_151_T; static  _GLOBAL_151_T  global_per_cpu__ksoftirqd[NUM_STACKS];     







static inline  __attribute__((always_inline)) void wakeup_softirqd(void)
{

 struct task_struct *tsk = global_per_cpu__ksoftirqd[get_stack_id()];

 if (tsk && tsk->state != 0)
  wake_up_process(tsk);
}
# 89 "linux-2.6.26/kernel/softirq.c"
static inline  __attribute__((always_inline)) void __local_bh_disable(unsigned long ip)
{
 do { (current_thread_info()->preempt_count) += ((1UL << (0 + 8))); } while (0);
 __asm__ __volatile__("": : :"memory");
}


void local_bh_disable(void)
{
 __local_bh_disable((unsigned long)__builtin_return_address(0));
}

;

void __local_bh_enable(void)
{
 ({ typedef  int  _GLOBAL_152_T; static  _GLOBAL_152_T  global___warned[NUM_STACKS];    int __ret_warn_once = !!((((current_thread_info()->preempt_count) & (((1UL << (12))-1) << ((0 + 8) + 8))))); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!global___warned[get_stack_id()]); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_on_slowpath("linux-2.6.26/kernel/softirq.c", 105); __builtin_expect(!!(__ret_warn_on), 0); })) global___warned[get_stack_id()] = 1; __builtin_expect(!!(__ret_warn_once), 0); });





 ({ typedef  int  _GLOBAL_153_T; static  _GLOBAL_153_T  global___warned[NUM_STACKS];    int __ret_warn_once = !!(((current_thread_info()->preempt_count) & (((1UL << (8))-1) << (0 + 8))) == (1UL << (0 + 8))); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!global___warned[get_stack_id()]); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_on_slowpath("linux-2.6.26/kernel/softirq.c", 111); __builtin_expect(!!(__ret_warn_on), 0); })) global___warned[get_stack_id()] = 1; __builtin_expect(!!(__ret_warn_once), 0); });

 do { (current_thread_info()->preempt_count) -= ((1UL << (0 + 8))); } while (0);
}
;






void _local_bh_enable(void)
{
 ({ typedef  int  _GLOBAL_154_T; static  _GLOBAL_154_T  global___warned[NUM_STACKS];    int __ret_warn_once = !!((((current_thread_info()->preempt_count) & (((1UL << (12))-1) << ((0 + 8) + 8))))); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!global___warned[get_stack_id()]); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_on_slowpath("linux-2.6.26/kernel/softirq.c", 124); __builtin_expect(!!(__ret_warn_on), 0); })) global___warned[get_stack_id()] = 1; __builtin_expect(!!(__ret_warn_once), 0); });
 ({ typedef  int  _GLOBAL_155_T; static  _GLOBAL_155_T  global___warned[NUM_STACKS];    int __ret_warn_once = !!(!(1)); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!global___warned[get_stack_id()]); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_on_slowpath("linux-2.6.26/kernel/softirq.c", 125); __builtin_expect(!!(__ret_warn_on), 0); })) global___warned[get_stack_id()] = 1; __builtin_expect(!!(__ret_warn_once), 0); });

 if (((current_thread_info()->preempt_count) & (((1UL << (8))-1) << (0 + 8))) == (1UL << (0 + 8)))
  do { } while (0);
 do { (current_thread_info()->preempt_count) -= ((1UL << (0 + 8))); } while (0);
}

;

void local_bh_enable(void)
{





 ({ typedef  int  _GLOBAL_156_T; static  _GLOBAL_156_T  global___warned[NUM_STACKS];    int __ret_warn_once = !!((1)); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!global___warned[get_stack_id()]); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_on_slowpath("linux-2.6.26/kernel/softirq.c", 141); __builtin_expect(!!(__ret_warn_on), 0); })) global___warned[get_stack_id()] = 1; __builtin_expect(!!(__ret_warn_once), 0); });







 if (((current_thread_info()->preempt_count) & (((1UL << (8))-1) << (0 + 8))) == (1UL << (0 + 8)))
  do { } while (0);




  do { (current_thread_info()->preempt_count) -= ((1UL << (0 + 8)) - 1); } while (0);

 if (__builtin_expect(!!(!(((current_thread_info()->preempt_count) & ((((1UL << (12))-1) << ((0 + 8) + 8)) | (((1UL << (8))-1) << (0 + 8))))) && ((*((void)(0), &global_per_cpu__irq_stat[get_stack_id()])).__softirq_pending)), 0))
  do_softirq();

 do { (current_thread_info()->preempt_count) -= (1); } while (0);



 do { } while (0);
}
;

void local_bh_enable_ip(unsigned long ip)
{
# 180 "linux-2.6.26/kernel/softirq.c"
 if (((current_thread_info()->preempt_count) & (((1UL << (8))-1) << (0 + 8))) == (1UL << (0 + 8)))
  do { } while (0);




  do { (current_thread_info()->preempt_count) -= ((1UL << (0 + 8)) - 1); } while (0);

 if (__builtin_expect(!!(!(((current_thread_info()->preempt_count) & ((((1UL << (12))-1) << ((0 + 8) + 8)) | (((1UL << (8))-1) << (0 + 8))))) && ((*((void)(0), &global_per_cpu__irq_stat[get_stack_id()])).__softirq_pending)), 0))
  do_softirq();

 do { (current_thread_info()->preempt_count) -= (1); } while (0);



 do { } while (0);
}
;
# 210 "linux-2.6.26/kernel/softirq.c"
 void __do_softirq(void)
{
 struct softirq_action *h;
 __u32 pending;
 int max_restart = 10;
 int cpu;

 pending = ((*((void)(0), &global_per_cpu__irq_stat[get_stack_id()])).__softirq_pending);
 account_system_vtime(nsc_get_task());

 __local_bh_disable((unsigned long)__builtin_return_address(0));
 do { } while (0);

 cpu = 0;
restart:

 (((*((void)(0), &global_per_cpu__irq_stat[get_stack_id()])).__softirq_pending) = (0));

 ;

 h = (*_GLOBAL_softirq_vec_14_A[get_stack_id()]);

 do {
  if (pending & 1) {
   h->action(h);
   rcu_bh_qsctr_inc(cpu);
  }
  h++;
  pending >>= 1;
 } while (pending);

 ;

 pending = ((*((void)(0), &global_per_cpu__irq_stat[get_stack_id()])).__softirq_pending);
 if (pending && --max_restart)
  goto restart;

 if (pending)
  wakeup_softirqd();

 do { } while (0);

 account_system_vtime(nsc_get_task());
 _local_bh_enable();
}



 void do_softirq(void)
{
 __u32 pending;
 unsigned long flags;

 if ((((current_thread_info()->preempt_count) & ((((1UL << (12))-1) << ((0 + 8) + 8)) | (((1UL << (8))-1) << (0 + 8))))))
  return;

 (void)(flags);

 pending = ((*((void)(0), &global_per_cpu__irq_stat[get_stack_id()])).__softirq_pending);

 if (pending)
  __do_softirq();

 (void)(flags);
}






void irq_enter(void)
{





 do { do { } while (0); account_system_vtime(nsc_get_task()); do { (current_thread_info()->preempt_count) += ((1UL << ((0 + 8) + 8))); } while (0); do { } while (0); } while (0);




}
# 304 "linux-2.6.26/kernel/softirq.c"
void irq_exit(void)
{
 account_system_vtime(nsc_get_task());
 do { } while (0);
 do { (current_thread_info()->preempt_count) -= ((1UL << ((0 + 8) + 8))); } while (0);
 if (!(((current_thread_info()->preempt_count) & ((((1UL << (12))-1) << ((0 + 8) + 8)) | (((1UL << (8))-1) << (0 + 8))))) && ((*((void)(0), &global_per_cpu__irq_stat[get_stack_id()])).__softirq_pending))
  do_softirq();







 do { } while (0);
}




inline  __attribute__((always_inline)) void raise_softirq_irqoff(unsigned int nr)
{
 do { (((*((void)(0), &global_per_cpu__irq_stat[get_stack_id()])).__softirq_pending) |= (1UL << (nr))); } while (0);
# 337 "linux-2.6.26/kernel/softirq.c"
 if (!(((current_thread_info()->preempt_count) & ((((1UL << (12))-1) << ((0 + 8) + 8)) | (((1UL << (8))-1) << (0 + 8))))))
  wakeup_softirqd();
}

void raise_softirq(unsigned int nr)
{
 unsigned long flags;

 (void)(flags);
 raise_softirq_irqoff(nr);
 (void)(flags);
}

void open_softirq(int nr, void (*action)(struct softirq_action*), void *data)
{
 (*_GLOBAL_softirq_vec_14_A[get_stack_id()])[nr].data = data;
 (*_GLOBAL_softirq_vec_14_A[get_stack_id()])[nr].action = action;
}


struct tasklet_head
{
 struct tasklet_struct *head;
 struct tasklet_struct **tail;
};



typedef  __typeof__ ( struct tasklet_head  )   _GLOBAL_157_T; static  _GLOBAL_157_T  global_per_cpu__tasklet_vec[NUM_STACKS] = {  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  };         
typedef  __typeof__ ( struct tasklet_head  )   _GLOBAL_158_T; static  _GLOBAL_158_T  global_per_cpu__tasklet_hi_vec[NUM_STACKS] = {  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  { ( ( void *  ) 0  )  } ,  };         

void __tasklet_schedule(struct tasklet_struct *t)
{
 unsigned long flags;

 (void)(flags);
 t->next = ((void *)0);
 *global_per_cpu__tasklet_vec[get_stack_id()].tail = t;
 global_per_cpu__tasklet_vec[get_stack_id()].tail = &(t->next);
 raise_softirq_irqoff(TASKLET_SOFTIRQ);
 (void)(flags);
}

;

void __tasklet_hi_schedule(struct tasklet_struct *t)
{
 unsigned long flags;

 (void)(flags);
 t->next = ((void *)0);
 *global_per_cpu__tasklet_hi_vec[get_stack_id()].tail = t;
 global_per_cpu__tasklet_hi_vec[get_stack_id()].tail = &(t->next);
 raise_softirq_irqoff(HI_SOFTIRQ);
 (void)(flags);
}

;

static void tasklet_action(struct softirq_action *a)
{
 struct tasklet_struct *list;

 ;
 list = global_per_cpu__tasklet_vec[get_stack_id()].head;
 global_per_cpu__tasklet_vec[get_stack_id()].head = ((void *)0);
 global_per_cpu__tasklet_vec[get_stack_id()].tail = &global_per_cpu__tasklet_vec[get_stack_id()].head;
 ;

 while (list) {
  struct tasklet_struct *t = list;

  list = list->next;

  if (1) {
   if (!((&t->count)->counter)) {
    if (!test_and_clear_bit(TASKLET_STATE_SCHED, &t->state))
     do { asm volatile("ud2"); for (;;) ; } while (0);
    t->func(t->data);
    do { } while (0);
    continue;
   }
   do { } while (0);
  }

  ;
  t->next = ((void *)0);
  *global_per_cpu__tasklet_vec[get_stack_id()].tail = t;
  global_per_cpu__tasklet_vec[get_stack_id()].tail = &(t->next);
  do { (((*((void)(0), &global_per_cpu__irq_stat[get_stack_id()])).__softirq_pending) |= (1UL << (TASKLET_SOFTIRQ))); } while (0);
  ;
 }
}

static void tasklet_hi_action(struct softirq_action *a)
{
 struct tasklet_struct *list;

 ;
 list = global_per_cpu__tasklet_hi_vec[get_stack_id()].head;
 global_per_cpu__tasklet_hi_vec[get_stack_id()].head = ((void *)0);
 global_per_cpu__tasklet_hi_vec[get_stack_id()].tail = &global_per_cpu__tasklet_hi_vec[get_stack_id()].head;
 ;

 while (list) {
  struct tasklet_struct *t = list;

  list = list->next;

  if (1) {
   if (!((&t->count)->counter)) {
    if (!test_and_clear_bit(TASKLET_STATE_SCHED, &t->state))
     do { asm volatile("ud2"); for (;;) ; } while (0);
    t->func(t->data);
    do { } while (0);
    continue;
   }
   do { } while (0);
  }

  ;
  t->next = ((void *)0);
  *global_per_cpu__tasklet_hi_vec[get_stack_id()].tail = t;
  global_per_cpu__tasklet_hi_vec[get_stack_id()].tail = &(t->next);
  do { (((*((void)(0), &global_per_cpu__irq_stat[get_stack_id()])).__softirq_pending) |= (1UL << (HI_SOFTIRQ))); } while (0);
  ;
 }
}


void tasklet_init(struct tasklet_struct *t,
    void (*func)(unsigned long), unsigned long data)
{
 t->next = ((void *)0);
 t->state = 0;
 (((&t->count)->counter) = (0));
 t->func = func;
 t->data = data;
}

;

void tasklet_kill(struct tasklet_struct *t)
{
 if ((((current_thread_info()->preempt_count) & ((((1UL << (12))-1) << ((0 + 8) + 8)) | (((1UL << (8))-1) << (0 + 8))))))
  printk("Attempt to kill tasklet from interrupt\n");

 while (test_and_set_bit(TASKLET_STATE_SCHED, &t->state)) {
  do
   yield();
  while ((__builtin_constant_p((TASKLET_STATE_SCHED)) ? constant_test_bit((TASKLET_STATE_SCHED), (&t->state)) : variable_test_bit((TASKLET_STATE_SCHED), (&t->state))));
 }
 do { } while (0);
 clear_bit(TASKLET_STATE_SCHED, &t->state);
}

;

void   __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) softirq_init(void)
{
 int cpu;

 for (((cpu)) = 0; ((cpu)) < 1; ((cpu))++, (void)global_cpu_possible_map[get_stack_id()]) {
  (*((void)(cpu), &global_per_cpu__tasklet_vec[get_stack_id()])).tail =
   &(*((void)(cpu), &global_per_cpu__tasklet_vec[get_stack_id()])).head;
  (*((void)(cpu), &global_per_cpu__tasklet_hi_vec[get_stack_id()])).tail =
   &(*((void)(cpu), &global_per_cpu__tasklet_hi_vec[get_stack_id()])).head;
 }

 open_softirq(TASKLET_SOFTIRQ, tasklet_action, ((void *)0));
 open_softirq(HI_SOFTIRQ, tasklet_hi_action, ((void *)0));
}

static int ksoftirqd(void * __bind_cpu)
{
 do { nsc_get_task()->state = (1); __asm__ __volatile__("": : :"memory"); } while (0);

 while (!kthread_should_stop()) {
  do { } while (0);
  if (!((*((void)(0), &global_per_cpu__irq_stat[get_stack_id()])).__softirq_pending)) {
   do { } while (0);
   schedule();
   do { } while (0);
  }

  do { nsc_get_task()->state = (0); } while (0);

  while (((*((void)(0), &global_per_cpu__irq_stat[get_stack_id()])).__softirq_pending)) {



   if (__builtin_expect(!!(!(((long)__bind_cpu) == 0)), 0))
    goto wait_to_die;
   do_softirq();
   do { } while (0);
   cond_resched();
   do { } while (0);
  }
  do { } while (0);
  do { nsc_get_task()->state = (1); __asm__ __volatile__("": : :"memory"); } while (0);
 }
 do { nsc_get_task()->state = (0); } while (0);
 return 0;

wait_to_die:
 do { } while (0);

 do { nsc_get_task()->state = (1); __asm__ __volatile__("": : :"memory"); } while (0);
 while (!kthread_should_stop()) {
  schedule();
  do { nsc_get_task()->state = (1); __asm__ __volatile__("": : :"memory"); } while (0);
 }
 do { nsc_get_task()->state = (0); } while (0);
 return 0;
}
# 612 "linux-2.6.26/kernel/softirq.c"
static int   __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) cpu_callback(struct notifier_block *nfb,
      unsigned long action,
      void *hcpu)
{
 int hotcpu = (unsigned long)hcpu;
 struct task_struct *p;

 switch (action) {
 case 0x0003:
 case (0x0003 | 0x0010):
  p = kthread_create(ksoftirqd, hcpu, "ksoftirqd/%d", hotcpu);
  if (IS_ERR(p)) {
   printk("ksoftirqd for %i failed\n", hotcpu);
   return (0x8000|0x0002);
  }
  kthread_bind(p, hotcpu);
    (*((void)(hotcpu), &global_per_cpu__ksoftirqd[get_stack_id()])) = p;
   break;
 case 0x0002:
 case (0x0002 | 0x0010):
  wake_up_process((*((void)(hotcpu), &global_per_cpu__ksoftirqd[get_stack_id()])));
  break;
# 654 "linux-2.6.26/kernel/softirq.c"
  }
 return 0x0001;
}

typedef  struct notifier_block    _GLOBAL_159_T; static  __attribute__ ((__section__(".cpuinit.data")))   _GLOBAL_159_T  global_cpu_nfb[NUM_STACKS] = {  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  { . notifier_call  = cpu_callback  } ,  };       
   


  int spawn_ksoftirqd(void)
{
 void *cpu = (void *)(long)0;
 int err = cpu_callback(&global_cpu_nfb[get_stack_id()], 0x0003, cpu);

 do { if (__builtin_expect(!!(err == (0x8000|0x0002)), 0)) do { asm volatile("ud2"); for (;;) ; } while (0); } while(0);
 cpu_callback(&global_cpu_nfb[get_stack_id()], 0x0002, cpu);
 register_cpu_notifier(&global_cpu_nfb[get_stack_id()]);
 return 0;
}

