/*
  Network Simulation Cradle
  Copyright (C) 2003-2005 Sam Jansen

  This program is free software; you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by the Free
  Software Foundation; either version 2 of the License, or (at your option)
  any later version.

  This program is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
  more details.

  You should have received a copy of the GNU General Public License along
  with this program; if not, write to the Free Software Foundation, Inc., 59
  Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
// Can't use __ FUNCTION __ because the linux kernel headers redefine it...
#define UNIMPLEMENTED() nsc_assert(0, __func__);
extern void nsc_assert(int, const char *);

#include <linux/config.h>
#include <linux/sched.h>

#include <linux/mm.h>
#include <linux/swap.h>
#include <linux/interrupt.h>
#include <linux/pagemap.h>
#include <linux/bootmem.h>
#include <linux/completion.h>
#include <linux/slab.h>
#include <linux/module.h>
// fs/fcntl.c
#include <linux/init.h>

#include <linux/file.h>
#include <linux/dnotify.h>
#include <linux/smp_lock.h>
#include <linux/ptrace.h>
// kernel/sysctl.c
#include <linux/config.h>
#include <linux/sysctl.h>
#include <linux/proc_fs.h>
#include <linux/ctype.h>
#include <linux/utsname.h>
#include <linux/capability.h>
#include <linux/smp_lock.h>
#include <linux/init.h>
#include <linux/sysrq.h>
#include <linux/highuid.h>
#include <linux/swap.h>
// kernel/softirq.c
#include <linux/config.h>
#include <linux/mm.h>
#include <linux/kernel_stat.h>
#include <linux/interrupt.h>
#include <linux/smp_lock.h>
#include <linux/init.h>
// kernel/timer.c
#include <linux/config.h>
#include <linux/mm.h>
#include <linux/timex.h>
#include <linux/delay.h>
#include <linux/smp_lock.h>
#include <linux/interrupt.h>
#include <linux/kernel_stat.h>

// new:
#include <net/xfrm.h>
#include <linux/crypto.h>
#include <linux/reboot.h>
#include <linux/seq_file.h>

#undef __FUNCTION__
int suid_dumpable;
int io_delay_type;
int kstack_depth_to_print;
cpumask_t cpu_possible_map;
char poweroff_cmd[POWEROFF_CMD_PATH_LEN];

unsigned char _ctype[256];

void crypto_free_tfm(struct crypto_tfm *tfm)
{
}

unsigned long num_physpages = (128*1024);

struct page *mem_map;

struct pglist_data contig_page_data;
struct dentry_stat_t dentry_stat;
struct inodes_stat_t inodes_stat;
struct files_stat_struct files_stat;

int vm_swappiness = 60;
int vm_dirty_ratio = 40;
int sysctl_vfs_cache_pressure = 100;
int sysctl_overcommit_ratio = 50;   /* default is 50% */

int sysctl_overcommit_memory/* = OVERCOMMIT_GUESS*/;  /* heuristic overcommit */

int printk_ratelimit_jiffies = 5*HZ;
int printk_ratelimit_burst = 10;

int pid_max = PID_MAX_DEFAULT;

int panic_timeout;
int panic_on_oops;

int page_cluster;

int overflowuid = DEFAULT_OVERFLOWUID;
int overflowgid = DEFAULT_OVERFLOWGID;

int nr_threads;
int nr_pdflush_threads = 0;

int min_free_kbytes = 1024;
int max_threads;
int leases_enable = 1;
int laptop_mode;

int fs_overflowuid = DEFAULT_FS_OVERFLOWUID;

int fs_overflowgid = DEFAULT_FS_OVERFLOWUID;

int C_A_D = 1;

int dirty_background_ratio = 10;

int core_uses_pid;

char core_pattern[] = "core";

int __printk_ratelimit(int ratelimit_jiffies, int ratelimit_burst)
{
    return 1;
}

int block_dump;

unsigned long volatile jiffies = 1;

int pid_max_min = 1;
int pid_max_max = PID_MAX_LIMIT;

int bootloader_type;

DEFINE_PER_CPU(irq_cpustat_t, irq_stat);

int sysctl_lowmem_reserve_ratio[MAX_NR_ZONES-1]; // = { 256, 256, 32 };
int console_printk[4];

#include <linux/init.h>
void __init do_initcalls(void)
{
    // XXX: 2.6: fix this function
    initcall_t *call;
    extern initcall_t __initcall_start[], __initcall_end[];

    call = __initcall_start;
    do {
        (*call)();
        call++;
    } while (call < __initcall_end);

    /* Make sure there is no pending stuff from the initcall sequence
*/
    //flush_scheduled_tasks();
}

int dirty_expire_interval;
int dirty_writeback_interval;

int sysctl_drop_caches;
int sysctl_panic_on_oom;

void hrtimer_run_queues(void)
{
}

int percpu_pagelist_fraction;

irq_cpustat_t irq_stat[NR_CPUS];

struct task_struct init_task;

#ifdef CONFIG_X86_32
/* __PAGE_KERNEL is already defined on _64 */
pteval_t __PAGE_KERNEL;

void  __get_user_1(void)
{
  UNIMPLEMENTED();
}
#else
/* on _64, we need this stub to avoid an unresolved symbol.
 * on _32, __phys_addr is a macro. */
unsigned long __phys_addr(unsigned long x)
{
	UNIMPLEMENTED();
	return 0;
}

/* struct x8664_pda is unknown on _32 */
struct x8664_pda _proxy_pda;
#endif
seqlock_t xtime_lock;

void hrtimer_run_pending(void)
{
}

#ifdef CONFIG_X86_32 /* on _64, ktime_add_ns is a macro */
ktime_t ktime_add_ns(const ktime_t kt, u64 nsec)
{
  ktime_t t;
  UNIMPLEMENTED();
  return t;
}
#endif

