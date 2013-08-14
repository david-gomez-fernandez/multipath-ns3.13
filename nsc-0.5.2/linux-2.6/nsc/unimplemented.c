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

#undef __FUNCTION__

/*void __lockfunc _read_lock(rwlock_t *lock)
{
    UNIMPLEMENTED();
}

void __lockfunc _read_unlock(rwlock_t *lock)
{
    UNIMPLEMENTED();
}

void __lockfunc _write_lock_bh(rwlock_t *lock)
{
    UNIMPLEMENTED();
}

void __lockfunc _write_unlock_bh(rwlock_t *lock)
{
    UNIMPLEMENTED();
}

void __lockfunc _spin_unlock_bh(spinlock_t *lock)
{
    UNIMPLEMENTED();
}*/

/*void __lockfunc _spin_lock_bh(spinlock_t *lock)
{
    UNIMPLEMENTED();
}

void __lockfunc _spin_unlock(spinlock_t *lock)
{
    UNIMPLEMENTED();
}

void __lockfunc _read_unlock_bh(rwlock_t *lock)
{
    UNIMPLEMENTED();
}

void __lockfunc _spin_lock(spinlock_t *lock)
{
    UNIMPLEMENTED();
}*/

int seq_printf(struct seq_file *m, const char *f, ...)
{
    UNIMPLEMENTED();
    return 0;
}

/*void __lockfunc _write_unlock(rwlock_t *lock)
{
    UNIMPLEMENTED();
}*/

inline void prefetch(const void *x) {;}

/*void __lockfunc _write_lock(rwlock_t *lock)
{
    UNIMPLEMENTED();
}

void __lockfunc _read_lock_bh(rwlock_t *lock)
{
    UNIMPLEMENTED();
}*/

void __sched preempt_schedule(void)
{
    UNIMPLEMENTED();
}

ssize_t seq_read(struct file *file, char __user *buf, size_t size, loff_t *ppos)
{
    UNIMPLEMENTED();
    return 0;
}

loff_t seq_lseek(struct file *file, loff_t offset, int origin)
{
    UNIMPLEMENTED();
    return 0;
}

int seq_open(struct file *file, struct seq_operations *op)
{
    UNIMPLEMENTED();
    return 0;
}

void remove_proc_entry(const char *name, struct proc_dir_entry *parent)
{
    UNIMPLEMENTED();
}

/*void __lockfunc _spin_unlock_irqrestore(spinlock_t *lock, unsigned long flags)
{
    UNIMPLEMENTED();   
}*/

unsigned long __per_cpu_offset[NR_CPUS];

struct proc_dir_entry *proc_net, *proc_net_stat, *proc_bus, *proc_root_fs, *proc_root_driver;

cpumask_t cpu_callout_map;

int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key)
{
    UNIMPLEMENTED();
    return 0;
}

int seq_release_private(struct inode *inode, struct file *file)
{
    UNIMPLEMENTED();
    return 0;
}

int seq_puts(struct seq_file *m, const char *s)
{
    UNIMPLEMENTED();
    return 0;
}

/*void do_gettimeofday (struct timeval *tv)
{
    UNIMPLEMENTED();
}*/

/*void __lockfunc _spin_unlock_irq(spinlock_t *lock)
{
    UNIMPLEMENTED();
}*/

/*void *__alloc_percpu(size_t size, size_t align)
{
    UNIMPLEMENTED();
    return 0;
}*/

/*void __lockfunc _spin_lock_irq(spinlock_t *lock)
{
    UNIMPLEMENTED();
}*/

int single_release(struct inode *inode, struct file *file)
{
    UNIMPLEMENTED();
    return 0;
}

int single_open(struct file *file, int (*show)(struct seq_file *, void *),
		void *data)
{
    UNIMPLEMENTED();
    return 0;
}

/*void
free_percpu(const void *objp)
{
    UNIMPLEMENTED();
}*/

int seq_release(struct inode *inode, struct file *file)
{
    UNIMPLEMENTED();
    return 0;
}

int kmem_cache_destroy (kmem_cache_t * cachep)
{
    UNIMPLEMENTED();
    return 0;
}

void fastcall fput(struct file *file)
{
    UNIMPLEMENTED();
}

void crypto_free_tfm(struct crypto_tfm *tfm)
{
    UNIMPLEMENTED();
}

/*int __lockfunc _spin_trylock(spinlock_t *lock)
{
    UNIMPLEMENTED();
    return 0;
}*/

int xfrm_unregister_type(struct xfrm_type *type, unsigned short family)
{
    UNIMPLEMENTED();
    return 0;
}

unsigned long simple_strtoul(const char *cp,char **endp,unsigned int base)
{
    UNIMPLEMENTED();
    return 0;
}

int request_module(const char *fmt, ...)
{
    UNIMPLEMENTED();
    return 0;
}

struct crypto_tfm *crypto_alloc_tfm(const char *name, u32 flags)
{
    UNIMPLEMENTED();
    return 0;
}

void __sched yield(void)
{
    UNIMPLEMENTED();
}

struct xfrm_state *
xfrm_state_lookup(xfrm_address_t *daddr, u32 spi, u8 proto,
		  unsigned short family)
{
    UNIMPLEMENTED();
    return 0;
}

int fastcall wake_up_process(task_t * p)
{
    UNIMPLEMENTED();
    return 0;
}

struct new_utsname system_utsname; /* = { .sysname = UTS_SYSNAME... init/version.c */

unsigned long num_physpages = (128*1024);

struct page *mem_map;

struct rw_semaphore uts_sem;

int seq_putc(struct seq_file *m, char c)
{
    UNIMPLEMENTED();
    return 0;
}

int notifier_chain_unregister(struct notifier_block **nl, struct notifier_block *n)
{
    UNIMPLEMENTED();
    return 0;
}

spinlock_t kernel_flag;

cpumask_t cpu_online_map = CPU_MASK_ALL;

struct pglist_data contig_page_data/* = { .bdata = &contig_bootmem_data }*/;

void fastcall call_rcu(struct rcu_head *head,
				void (*func)(struct rcu_head *rcu))
{
    UNIMPLEMENTED();
}

struct page * fastcall
__alloc_pages(unsigned int gfp_mask, unsigned int order,
		struct zonelist *zonelist)
{
    UNIMPLEMENTED();
    return 0;
}

int xfrm4_rcv(struct sk_buff *skb)
{
    UNIMPLEMENTED();
    return 0;
}

void sysfs_remove_group(struct kobject * k, const struct attribute_group * g)
{
    UNIMPLEMENTED();
}

asmlinkage long sys_close(unsigned int fd)
{
    UNIMPLEMENTED();
    return 0;
}

void fastcall put_unused_fd(unsigned int fd)
{
    UNIMPLEMENTED();
}

struct proc_dir_entry *proc_sys_root;

int find_next_bit(const unsigned long *addr, int size, int offset)
{
    UNIMPLEMENTED();
    return 0;
}

void crypto_hmac(struct crypto_tfm *tfm, u8 *key, unsigned int *keylen,
                 struct scatterlist *sg, unsigned int nsg, u8 *out)
{
    UNIMPLEMENTED();
}

void __xfrm_state_destroy(struct xfrm_state *x)
{
    UNIMPLEMENTED();
}

void fastcall __page_cache_release(struct page *page)
{
    UNIMPLEMENTED();
}

struct xfrm_algo_desc *xfrm_aalg_get_byname(char *name)
{
    UNIMPLEMENTED();
    return 0;
}

int xfrm4_tunnel_deregister(struct xfrm_tunnel *handler)
{
    UNIMPLEMENTED();
    return 0;
}

ssize_t fastcall wait_on_sync_kiocb(struct kiocb *iocb)
{
    UNIMPLEMENTED();
    return 0;
}

int
skb_to_sgvec(struct sk_buff *skb, struct scatterlist *sg, int offset, int len)
{
    UNIMPLEMENTED();
    return 0;
}

void skb_icv_walk(const struct sk_buff *skb, struct crypto_tfm *tfm,
		  int offset, int len, icv_update_fn_t icv_update)
{
    UNIMPLEMENTED();
}

int skb_cow_data(struct sk_buff *skb, int tailbits, struct sk_buff **trailer)
{
    UNIMPLEMENTED();
    return 0;
}

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

int fastcall schedule_work(struct work_struct *work)
{
    UNIMPLEMENTED();
    return 0;
}

struct rw_semaphore fastcall *rwsem_wake(struct rw_semaphore *sem)
{
    UNIMPLEMENTED();
    return 0;
}
    
void fastcall remove_wait_queue(wait_queue_head_t *q, wait_queue_t * wait)
{
    UNIMPLEMENTED();
}

int register_cpu_notifier(struct notifier_block *nb)
{
    UNIMPLEMENTED();
    return 0;
}

void *pskb_put(struct sk_buff *skb, struct sk_buff *tail, int len)
{
    UNIMPLEMENTED();
    return 0;
}

long pps_valid = PPS_VALID;        /* pps signal watchdog counter */

int kthread_should_stop(void)
{
    UNIMPLEMENTED();
    return 0;
}

u64 jiffies_64;

int ipv6_skip_exthdr(const struct sk_buff *skb, int start, u8 *nexthdrp, int len)
{
    UNIMPLEMENTED();
    return 0;
}

struct inodes_stat_t inodes_stat;

int get_unused_fd(void)
{
    UNIMPLEMENTED();
    return 0;
}

struct files_stat_struct files_stat /*= ... */;

struct file fastcall *fget(unsigned int fd)
{
    UNIMPLEMENTED();
    return 0;
}

void fastcall fd_install(unsigned int fd, struct file * file)
{
    UNIMPLEMENTED();
}

long
div_ll_X_l_rem(long long divs, long div, long *rem)
{
    UNIMPLEMENTED();
    return 0;
}

int default_wake_function(wait_queue_t *curr, unsigned mode, int sync, void *key)
{
    UNIMPLEMENTED();
    return 0;
}

void crypto_hmac_update(struct crypto_tfm *tfm,
                        struct scatterlist *sg, unsigned int nsg)
{
    UNIMPLEMENTED();
}

void crypto_hmac_init(struct crypto_tfm *tfm, u8 *key, unsigned int *keylen)
{
    UNIMPLEMENTED();
}

void crypto_hmac_final(struct crypto_tfm *tfm, u8 *key,
                       unsigned int *keylen, u8 *out)
{
    UNIMPLEMENTED();
}

void clock_was_set(void)
{
    UNIMPLEMENTED();
}

void __kill_fasync(struct fasync_struct *fa, int sig, int band)
{
    UNIMPLEMENTED();
}

void xfrm_state_insert(struct xfrm_state *x)
{
    UNIMPLEMENTED();
}

void xfrm_state_delete_tunnel(struct xfrm_state *x)
{
    UNIMPLEMENTED();
}

void fastcall __sched wait_for_completion(struct completion *x)
{
    UNIMPLEMENTED();
}

int vm_swappiness = 60;

int vm_dirty_ratio = 40;

int tainted;

int sysctl_vfs_cache_pressure = 100;

int sysctl_overcommit_ratio = 50;   /* default is 50% */

int sysctl_overcommit_memory/* = OVERCOMMIT_GUESS*/;  /* heuristic overcommit */

int sysctl_max_map_count = DEFAULT_MAX_MAP_COUNT;

int sysctl_lower_zone_protection = 0;

/*int smp_call_function (void (*func) (void *info), void *info, int nonatomic,
			int wait)
{
    UNIMPLEMENTED();
    return 0;
}*/

int simple_statfs(struct super_block *sb, struct kstatfs *buf)
{
    UNIMPLEMENTED();
    return 0;
}

void si_swapinfo(struct sysinfo *val)
{
    UNIMPLEMENTED();
}

int        shm_ctlmni = SHMMNI;

size_t     shm_ctlmax = SHMMAX;

size_t     shm_ctlall = SHMALL;

int sg_big_buff/* = SG_DEF_RESERVED_SIZE*/;

void set_user_nice(task_t *p, long nice)
{
    UNIMPLEMENTED();
}

int send_sigurg(struct fown_struct *fown)
{
    UNIMPLEMENTED();
    return 0;
}

int
send_group_sig_info(int sig, struct siginfo *info, struct task_struct *p)
{
    UNIMPLEMENTED();
    return 0;
}

int sem_ctls[4] = {SEMMSL, SEMMNS, SEMOPM, SEMMNI};

__u32 secure_tcp_syn_cookie(__u32 saddr, __u32 daddr, __u16 sport,
		__u16 dport, __u32 sseq, __u32 count, __u32 data)
{
    UNIMPLEMENTED();
    return 0;
}

int fastcall schedule_delayed_work(struct work_struct *work, unsigned long delay)
{
    UNIMPLEMENTED();
    return 0;
}

struct rw_semaphore fastcall __sched *
rwsem_down_write_failed(struct rw_semaphore *sem)
{
    UNIMPLEMENTED();
    return 0;
}

struct rw_semaphore fastcall __sched *
rwsem_down_read_failed(struct rw_semaphore *sem)
{
    UNIMPLEMENTED();
    return 0;
}

ctl_table random_table[1] /* = { ... */;

void put_filp(struct file *file)
{
    UNIMPLEMENTED();
}

ctl_table pty_table[1] /* = { ... */;

int proc_unknown_nmi_panic(ctl_table *table, int write, struct file *file,
			void __user *buffer, size_t *length, loff_t *ppos)
{
    printk("proc_unknown_nmi_panic: %p %d %p %p %d %d\n",
            table, write, file, buffer, *length, *ppos);
    return 0;
}

int printk_ratelimit_jiffies = 5*HZ;

int printk_ratelimit_burst = 10;

long pps_stabil = MAXFREQ; /* frequency dispersion (scaled ppm) */

long pps_jitter = MAXTIME; /* time dispersion (jitter) (us) */

long pps_freq;                     /* frequency offset (scaled ppm) */

int pid_max = PID_MAX_DEFAULT;

int panic_timeout;

int panic_on_oops;

int page_cluster;

int overflowuid = DEFAULT_OVERFLOWUID;

int overflowgid = DEFAULT_OVERFLOWGID;

int nr_threads;

int nr_pdflush_threads = 0;

loff_t no_llseek(struct file *file, loff_t offset, int origin)
{
    UNIMPLEMENTED();
    return 0;
}

int msg_ctlmni = MSGMNI;
int msg_ctlmnb = MSGMNB;
int msg_ctlmax = MSGMAX;

char modprobe_path[KMOD_PATH_LEN] = "/sbin/modprobe";

int min_free_kbytes_sysctl_handler(ctl_table *table, int write, 
		struct file *file, void __user *buffer, size_t *length, 
                loff_t *ppos)
{
    printk("min_free_kbytes_sysctl_handler: %p %d %p %p %d %d\n",
            table, write, file, buffer, *length, *ppos);
    return 0;
}

int min_free_kbytes = 1024;

int max_threads;

int lower_zone_protection_sysctl_handler(ctl_table *table, int write,
		 struct file *file, void __user *buffer, size_t *length, loff_t *ppos)
{
    printk("lower_zone_protection_sysctl_handler: %p %d %p %p %d %d\n",
            table, write, file, buffer, *length, *ppos);

    return 0;
}

int leases_enable = 1;

int lease_break_time = 45;

int laptop_mode;

struct task_struct *kthread_create(int (*threadfn)(void *data),
				   void *data,
				   const char namefmt[],
				   ...)
{
    UNIMPLEMENTED();
    return 0;
}

void kthread_bind(struct task_struct *k, unsigned int cpu)
{
    UNIMPLEMENTED();
}

int km_new_mapping(struct xfrm_state *x, xfrm_address_t *ipaddr, u16 sport)
{
    UNIMPLEMENTED();
    return 0;
}

void kill_anon_super(struct super_block *sb)
{
    UNIMPLEMENTED();
}

int ipv6_ext_hdr(u8 nexthdr)
{
    UNIMPLEMENTED();
    return 0;
}

int in_egroup_p(gid_t grp)
{
    UNIMPLEMENTED();
    return 0;
}

#include <linux/idr.h>
void idr_remove(struct idr *idp, int id)
{
    UNIMPLEMENTED();
}

int idr_pre_get(struct idr *idp, unsigned gfp_mask)
{
    UNIMPLEMENTED();
    return 0;
}

int idr_get_new_above(struct idr *idp, void *ptr, int starting_id, int *id)
{
    UNIMPLEMENTED();
    return 0;
}

void *idr_find(struct idr *idp, int id)
{
    UNIMPLEMENTED();
    return 0;
}

char hotplug_path[KMOD_PATH_LEN] = "/sbin/hotplug";

void getnstimeofday(struct timespec *tv)
{
    UNIMPLEMENTED();
}

struct super_block *
get_sb_pseudo(struct file_system_type *fs_type, char *name,
	struct super_operations *ops, unsigned long magic)
{
    UNIMPLEMENTED();
    return 0;
}

char *get_options(const char *str, int nints, int *ints)
{
    UNIMPLEMENTED();
    return 0;
}

struct file *get_empty_filp(void)
{
    UNIMPLEMENTED();
    return 0;
}

int fs_overflowuid = DEFAULT_FS_OVERFLOWUID;

int fs_overflowgid = DEFAULT_FS_OVERFLOWUID;

int f_setown(struct file *filp, unsigned long arg, int force)
{
    UNIMPLEMENTED();
    return 0;
}

int dirty_writeback_centisecs_handler(ctl_table *table, int write,
		struct file *file, void __user *buffer, size_t *length, loff_t *ppos)
{
    //UNIMPLEMENTED();
    printk("dirty_writeback_centisecs_handler: %p %d %p %p %d %d\n",
            table, write, file, buffer, *length, *ppos);
    return 0;
}

int dirty_writeback_centisecs = 5 * 100;

int dirty_expire_centisecs = 30 * 100;

int dirty_background_ratio = 10;

int dir_notify_enable = 1;

struct dentry_stat_t dentry_stat/* = {*/;

void d_rehash(struct dentry * entry)
{
    UNIMPLEMENTED();
}

void d_instantiate(struct dentry *entry, struct inode * inode)
{
    UNIMPLEMENTED();
}

struct dentry *d_alloc(struct dentry * parent, const struct qstr *name)
{
    UNIMPLEMENTED();
    return 0;
}

int core_uses_pid;

char core_pattern[65] = "core";

int __bitmap_weight(const unsigned long *bitmap, int bits)
{
    UNIMPLEMENTED();
    return 0;
}

int C_A_D = 1;

void __sched __cond_resched(void)
{
    UNIMPLEMENTED();
}

unsigned long
__copy_from_user_ll(void *to, const void __user *from, unsigned long n)
{
    UNIMPLEMENTED();
    return 0;
}

fastcall int __down_failed_interruptible(void)
{
    UNIMPLEMENTED();
    return 0;
}

fastcall void __free_pages(struct page *page, unsigned int order)
{
    UNIMPLEMENTED();
}

int __printk_ratelimit(int ratelimit_jiffies, int ratelimit_burst)
{
    UNIMPLEMENTED();
    return 0;
}

void fastcall add_wait_queue(wait_queue_head_t *q, wait_queue_t * wait)
{
    UNIMPLEMENTED();
}

void fastcall add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t * wait)
{
    UNIMPLEMENTED();
}

unsigned aio_max_nr = 0x10000;      /* system wide maximum number of aio requests */

atomic_t aio_nr = ATOMIC_INIT(0);   /* current system wide number of aio requests */

int block_dump;

kernel_cap_t cap_bset = CAP_INIT_EFF_SET;

__u32 check_tcp_syn_cookie(__u32 cookie, __u32 saddr, __u32 daddr, __u16 sport,
		__u16 dport, __u32 sseq, __u32 count, __u32 maxdiff)
{
    UNIMPLEMENTED();
    return 0;
}

void class_device_del(struct class_device *class_dev)
{
    UNIMPLEMENTED();
}

void class_device_unregister(struct class_device *class_dev)
{
    UNIMPLEMENTED();
}

int class_device_rename(struct class_device *class_dev, char *new_name)
{
    UNIMPLEMENTED();
    return 0;
}

void class_device_put(struct class_device *class_dev)
{
    UNIMPLEMENTED();
}

void fastcall complete(struct completion *x)
{
    UNIMPLEMENTED();
}

int cap_netlink_send (struct sock *sk, struct sk_buff *skb)
{
    UNIMPLEMENTED();
    return 0;
}

int cap_netlink_recv (struct sk_buff *skb)
{
    UNIMPLEMENTED();
    return 0;
}


int console_printk[4]; /* normally initialised here. kernel/printk.c */

DEFINE_PER_CPU(struct rcu_data, rcu_bh_data) = { 0L };

unsigned char _ctype[256]; /* should be initialised */

unsigned long volatile jiffies = 1;

int ollo; // what on earth is this?

int cad_pid = 1; // what is this?

int pid_max_min = 1; //RESERVED_PIDS + 1;
int pid_max_max = PID_MAX_LIMIT;

unsigned long swap_token_default_timeout;/* = SWAP_TOKEN_TIMEOUT;*/

struct cache_sizes malloc_sizes[] = {
#define CACHE(x) { .cs_size = (x) },
#include <linux/kmalloc_sizes.h>
        { 0, }
#undef CACHE
};

/* Must match cache_sizes above. Out of line to keep cache footprint low. */
struct cache_names {
        char *name;
        char *name_dma;
};

static struct cache_names __initdata cache_names[] = {
#define CACHE(x) { .name = "size-" #x, .name_dma = "size-" #x "(DMA)" },
#include <linux/kmalloc_sizes.h>
        { NULL, }
#undef CACHE
};

void __init kmem_cache_init(void)
{
    struct cache_sizes *sizes;
    struct cache_names *names;

    sizes = malloc_sizes;
    names = cache_names;

    while (sizes->cs_size) {
        /* For performance, all the general caches are L1 aligned.
         * This should be particularly beneficial on SMP boxes, as it
         * eliminates "false sharing".
         * Note for systems short on memory removing the alignment will
         * allow tighter packing of the smaller caches. */
        sizes->cs_cachep = kmem_cache_create(names->name,
                sizes->cs_size, 0,
                (0 | SLAB_PANIC), NULL, NULL);

        /* Inc off-slab bufctl limit until the ceiling is hit. */
        //if (!(OFF_SLAB(sizes->cs_cachep))) {
        //    offslab_limit = sizes->cs_size-sizeof(struct slab);
        //    offslab_limit /= sizeof(kmem_bufctl_t);
        //}

        sizes->cs_dmacachep = kmem_cache_create(names->name_dma,
                sizes->cs_size, 0,
                (0 | SLAB_CACHE_DMA | SLAB_PANIC),
                NULL, NULL);

        sizes++;
        names++;
    }

}


#include <linux/init.h>
void __init do_initcalls(void)
{
    // XXX: 2.6: fix this function
    initcall_t *call;
    extern initcall_t __initcall_start, __initcall_end;

    call = &__initcall_start;
    do {
        (*call)();
        call++;
    } while (call < &__initcall_end);

    /* Make sure there is no pending stuff from the initcall sequence
*/
    //flush_scheduled_tasks();
}

