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

// lib/brlock.c
#include <linux/config.h>
#include <linux/sched.h>
// mm/page_alloc.c
//#include <linux/config.h>
#include <linux/mm.h>
#include <linux/swap.h>
#include <linux/interrupt.h>
#include <linux/pagemap.h>
#include <linux/bootmem.h>
#include <linux/slab.h>
#include <linux/module.h>
// fs/fcntl.c
#include <linux/init.h>
//#include <linux/mm.h>
#include <linux/file.h>
#include <linux/dnotify.h>
#include <linux/smp_lock.h>
#include <linux/slab.h>
#include <linux/ptrace.h>
// kernel/sysctl.c
#include <linux/config.h>
#include <linux/slab.h>
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
#include <linux/seq_file.h>
#include <linux/ticable.h>


unsigned long __per_cpu_offset[NR_CPUS];

struct proc_dir_entry *proc_net, *proc_net_stat, *proc_bus, *proc_root_fs, *proc_root_driver;

cpumask_t cpu_callout_map;

struct new_utsname system_utsname; /* = { .sysname = UTS_SYSNAME... init/version.c */

unsigned long num_physpages = (128*1024);

struct page *mem_map;

struct rw_semaphore uts_sem;

spinlock_t kernel_flag;

cpumask_t cpu_online_map = CPU_MASK_ALL;

struct pglist_data contig_page_data/* = { .bdata = &contig_bootmem_data }*/;

struct proc_dir_entry *proc_sys_root;

#ifdef LOCAL_RANDOM
__u32 secure_tcpv6_sequence_number(__u32 *saddr, __u32 *daddr,
				   __u16 sport, __u16 dport)
{
    UNIMPLEMENTED();
    return 0;
}

__u32 secure_ip_id(__u32 daddr)
{
    UNIMPLEMENTED();
    return 0;
}
#endif

struct inodes_stat_t inodes_stat;

struct files_stat_struct files_stat /*= ... */;

int vm_swappiness = 60;

int vm_dirty_ratio = 40;

int tainted;

int sysctl_vfs_cache_pressure = 100;

int sysctl_overcommit_ratio = 50;   /* default is 50% */

int sysctl_overcommit_memory/* = OVERCOMMIT_GUESS*/;  /* heuristic overcommit */

int sysctl_max_map_count = DEFAULT_MAX_MAP_COUNT;

int sysctl_lower_zone_protection = 0;

int        shm_ctlmni = SHMMNI;

size_t     shm_ctlmax = SHMMAX;

size_t     shm_ctlall = SHMALL;

int sg_big_buff/* = SG_DEF_RESERVED_SIZE*/;

int sem_ctls[4] = {SEMMSL, SEMMNS, SEMOPM, SEMMNI};

#ifdef LOCAL_RANDOM
ctl_table random_table[1] /* = { ... */;
#endif
ctl_table pty_table[1] /* = { ... */;

int printk_ratelimit_jiffies = 5*HZ;

int printk_ratelimit_burst = 10;

long pps_stabil = MAXFREQ; /* frequency dispersion (scaled ppm) */

long pps_freq;                     /* frequency offset (scaled ppm) */

int pid_max = PID_MAX_DEFAULT;

int panic_timeout;

int panic_on_oops;

int page_cluster;

int overflowuid = DEFAULT_OVERFLOWUID;

int overflowgid = DEFAULT_OVERFLOWGID;

int nr_threads;

int nr_pdflush_threads = 0;

int msg_ctlmni = MSGMNI;
int msg_ctlmnb = MSGMNB;
int msg_ctlmax = MSGMAX;

char modprobe_path[KMOD_PATH_LEN] = "/sbin/modprobe";

int min_free_kbytes = 1024;

int max_threads;

int leases_enable = 1;

int lease_break_time = 45;

int laptop_mode;


#include <linux/idr.h>

char hotplug_path[KMOD_PATH_LEN] = "/sbin/hotplug";

int fs_overflowuid = DEFAULT_FS_OVERFLOWUID;

int fs_overflowgid = DEFAULT_FS_OVERFLOWUID;

int dirty_writeback_centisecs = 5 * 100;

int dirty_expire_centisecs = 30 * 100;

int dirty_background_ratio = 10;

int dir_notify_enable = 1;

struct dentry_stat_t dentry_stat/* = {*/;

int core_uses_pid;

char core_pattern[] = "core";

int C_A_D = 1;

unsigned long aio_max_nr = 0x10000;      /* system wide maximum number of aio requests */

unsigned long aio_nr = 0;   /* current system wide number of aio requests */

int block_dump;

kernel_cap_t cap_bset = CAP_INIT_EFF_SET;

int console_printk[4]; /* normally initialised here. kernel/printk.c */

// DEFINE_PER_CPU(struct rcu_data, rcu_bh_data) = { 0L };

unsigned char _ctype[256]; /* should be initialised */

unsigned long volatile jiffies = 1;

int ollo; // what on earth is this?

int cad_pid = 1; // what is this?

int pid_max_min = 1; //RESERVED_PIDS + 1;
int pid_max_max = PID_MAX_LIMIT;

unsigned long swap_token_default_timeout;/* = SWAP_TOKEN_TIMEOUT;*/

int sysctl_lowmem_reserve_ratio[MAX_NR_ZONES-1]; // = { 256, 256, 32 };

int bootloader_type;

/* Definition for rcupdate control block. */
struct rcu_ctrlblk rcu_ctrlblk = {
	        .cur = -300,
		.completed = -300,
//        .lock = SPIN_LOCK_UNLOCKED,
//        .cpumask = CPU_MASK_NONE,
};
struct rcu_ctrlblk rcu_bh_ctrlblk = {
       .cur = -300,
       .completed = -300,
//        .lock = SPIN_LOCK_UNLOCKED,
//        .cpumask = CPU_MASK_NONE,
};

int (*inferior_user)(int, uid_t) = NULL;

int network_dumper_one_shot;

int network_dumper_xmit_delay;

unsigned long shm_page_cache_evictions;

int sysctl_oom_kill_adjust_root;

#include <linux/device.h>

struct sock *xfrm_nl=NULL;

unsigned long acpi_video_flags;

int dirty_expire_interval;
int dirty_writeback_interval;

int randomize_va_space=0;

int suid_dumpable;

cpumask_t nohz_cpu_mask;

int percpu_pagelist_fraction;

int sysctl_drop_caches=0;
int sysctl_panic_on_oom=0;

char uevent_helper[100] = "SIM ERROR";

struct ctl_table ether_table[100];

struct inode_operations simple_dir_inode_operations = {
        .lookup         = simple_lookup,
};

const struct file_operations simple_dir_operations = {
/*        .open           = dcache_dir_open,
        .release        = dcache_dir_close,
        .llseek         = dcache_dir_lseek,
        .read           = generic_read_dir,
        .readdir        = dcache_readdir,
        .fsync          = simple_sync_file,*/
};


struct task_struct init_task;

DEFINE_PER_CPU(irq_cpustat_t, irq_stat);

irq_cpustat_t irq_stat[NR_CPUS];

#ifdef __x86_64
seqlock_t xtime_lock;
#endif

nodemask_t node_online_map;

