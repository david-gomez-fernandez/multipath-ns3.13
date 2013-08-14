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

extern void nsc_debugf(const char *, ...);
extern void nsc_assert(int, const char *);
extern void *nsc_malloc(int);
extern void *nsc_realloc(void *, int);
extern void nsc_free(void *);
extern void *nsc_memcpy(void *to, const void *from, unsigned len);
extern void nsc_wakeup(void);

// lib/brlock.c
#include <linux/config.h>
#include <linux/sched.h>
// mm/page_alloc.c
#include <linux/mm.h>
#include <linux/interrupt.h>
#include <linux/pagemap.h>
#include <linux/bootmem.h>
#include <linux/slab.h>
#include <linux/module.h>
// fs/fcntl.c
#include <linux/init.h>
#include <linux/mount.h>
#include <linux/slab.h>
#include <linux/file.h>
#include <linux/dnotify.h>
#include <linux/smp_lock.h>
#include <linux/slab.h>
#include <linux/ptrace.h>
// kernel/sysctl.c
#include <linux/config.h>
#include <linux/slab.h>
#include <linux/sysctl.h>

#include <linux/ctype.h>
#include <linux/capability.h>
#include <linux/smp_lock.h>
#include <linux/init.h>
#include <linux/sysrq.h>
#include <linux/highuid.h>
#include <linux/swap.h>
// kernel/softirq.c
#include <linux/config.h>
#include <linux/kernel_stat.h>
#include <linux/interrupt.h>
#include <linux/smp_lock.h>
#include <linux/init.h>
// kernel/timer.c
#include <linux/config.h>
#include <linux/utsname.h>
#include <linux/timex.h>
#include <linux/delay.h>
#include <linux/interrupt.h>
#include <linux/kernel_stat.h>
// kernel/sys.c
#include <linux/notifier.h>
#include <linux/clocksource.h>

#include <linux/device.h>
#include <net/xfrm.h>
#include <linux/idr.h>

#define DEBUG_PRINT() /* empty */
#define DEBUG_PRINT0() /* printf("DEBUG_PRINT0 '%s' called\n", __func__) */
#define UNIMPLEMENTED_NOASSERT() /*printf("Unimplemented '%s' (%d) called\n", __func__, get_stack_id()) */
/* empty */
/*nsc_debugf("Unimplemented '%s'" \
        " called.\n", __func__);*/

unsigned int vdso_enabled = 1;
struct timespec wall_to_monotonic;
int sysctl_sched_rt_runtime = 950000;
unsigned int sysctl_sched_rt_period = 1000000;

unsigned int sysctl_sched_compat_yield;
int sysctl_oom_dump_tasks;
int sysctl_nr_open_min = BITS_PER_LONG;
int sysctl_nr_open_max = 1024*1024;
int sysctl_nr_open = 1024*1024;
int sysctl_oom_kill_allocating_task;

int panic_on_unrecovered_nmi = 1;
int print_fatal_signals = 1;
int show_unhandled_signals = 1;

struct cpuinfo_x86 boot_cpu_data;

void kfree(const void *objp)
{
    DEBUG_PRINT();
    nsc_free((void *)objp);
}

void *krealloc(const void *mem, size_t s, gfp_t flags)
{
	return nsc_realloc((void*) mem, s);
}

void * __kmalloc(size_t size, gfp_t flags)
{
	DEBUG_PRINT();
	void *mem = nsc_malloc(size);

	if (mem && (flags & __GFP_ZERO))
		memset(mem, 0, size);
	return mem;
}

void *__kmalloc_track_caller(size_t size, gfp_t flags, void *caller)
{
   return kmalloc(size, flags);
}


char *kstrdup(const char *s, gfp_t gfp)
{
	char *buf;

	if (!s)
		return NULL;
	buf = nsc_malloc(strlen(s) + 1);
	if (buf)
		memcpy(buf, s, strlen(s));
	return buf;
}

void *kmemdup(const void *src, size_t len, gfp_t gfp)
{
	void *mem = nsc_malloc(len);
	if (mem)
		memcpy(mem, src, len);
	return mem;
}

struct kmem_cache *
kmem_cache_create (const char *name, size_t size, size_t offset,
	unsigned long flags, void (*ctor)(struct kmem_cache *, void *p))
{
    struct kmem_cache *cache;

    DEBUG_PRINT();

    cache = nsc_malloc(sizeof(*cache));
    nsc_assert(cache != NULL, "cache");

    cache->objsize = size;
    cache->ctor = ctor;
    cache->flags = flags;
    cache->name = name; // XXX: is this correct?
//    strcpy(cache->name, name);
    return cache;
}

const char *kmem_cache_name(struct kmem_cache *cachep)
{
  return cachep->name;
}

// fs/super.c
int register_filesystem(struct file_system_type * fs)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

extern char *strchr(const char *, int);
char *strnchr(const char *s, size_t count, int c)
{
    const char *n = strchr(s, c);
    DEBUG_PRINT();
    if(n - s < count) 
        return (char *)n;
    return 0;
}

unsigned long get_zeroed_page(unsigned int gfp_mask)
{
    void *buf = nsc_malloc(PAGE_SIZE);
    DEBUG_PRINT();
    memset(buf, 0, PAGE_SIZE);
    return (unsigned long)buf;
}

void free_pages(unsigned long addr, unsigned int order)
{
	DEBUG_PRINT();
	nsc_free((void *)addr);
}

size_t strlcpy(char *dest, const char *src, size_t size)
{
	size_t ret, len = strlen(src);
	ret = len;

	nsc_assert((size > 0), __func__);
	if (len >= size)
		len = size - 1;

	memcpy(dest, src, len);
	dest[len] = 0;
	return ret;
}

/* These static functions are copied for net/socket.c .... damn static funcs!
 * If they weren't static we could just extern and call them. Oh well, copying
 * them here works for now. */

static void init_once(struct kmem_cache * cachep, void *irrelevant)
{
}


static struct kmem_cache * sock_inode_cachep;

int nsc_sock_init_inodecache(void)
{
	sock_inode_cachep = kmem_cache_create("sock_inode_cache",
				sizeof(struct socket_alloc),
				0, 0, init_once);
	if (sock_inode_cachep == NULL)
		return -ENOMEM;
	return 0;
}


static struct inode *sock_alloc_inode(struct super_block *sb)
{
	struct socket_alloc *ei;
	/* sctp accesses ->.f_flags to see if socket is non blocking */
	static const struct file fake_fops = { .f_flags = O_NONBLOCK };

	ei = (struct socket_alloc *)kmem_cache_alloc(sock_inode_cachep, 0);
	if (!ei)
		return NULL;
	init_waitqueue_head(&ei->socket.wait);

	ei->socket.fasync_list = NULL;
	ei->socket.state = SS_UNCONNECTED;
	ei->socket.flags = 0;
	ei->socket.ops = NULL;
	ei->socket.sk = NULL;
	/*
	 * void* cast to avoid warning due to the 'const' modifier. The const is
	 * there to ensure that its only read.
	 */
	ei->socket.file = (void *) &fake_fops;

	return &ei->vfs_inode;
}


struct inode * new_inode(struct super_block *sb)
{
	/*
	 * Normally the procedure of new_inode goes through quite a few levels of
	 * indirection and complexity. The only bit that is important to us is
	 * getting enough memory allocated really; sock_alloc_inode does this for
	 * us correctly. Note that we cannot just malloc the size of an inode, the
	 * system is more complex than this.
	 */
	DEBUG_PRINT();
	return sock_alloc_inode(NULL);
}

void *kmem_cache_alloc (struct kmem_cache *cachep, gfp_t flags)
{
	void *mem = kmalloc(cachep->objsize, flags);
	if (!mem)
		return NULL;
	if (cachep->ctor) /* some callers use a ctor to initialize data they allocate */
		(cachep->ctor)(cachep, mem);
	return mem;
}

void  __wake_up(wait_queue_head_t *q, unsigned int mode,
				int nr_exclusive, void *key)
{
	DEBUG_PRINT();
	nsc_wakeup();
}

void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr_exclusive)
{
	nsc_wakeup();
}

static int notifier_chain_register(struct notifier_block **list, struct notifier_block *n)
{
	// XXX: I think we might need this
	while(*list) {
	        if(n->priority > (*list)->priority)
			break;
	        list= &((*list)->next);
	}
	n->next = *list;
	*list=n;

	return 0;
}

int atomic_notifier_chain_register (struct atomic_notifier_head *nh,
				    struct notifier_block *n)
{
	return notifier_chain_register(&nh->head, n);
}

int blocking_notifier_chain_register (struct blocking_notifier_head *nh,
				      struct notifier_block *n)
{
	return notifier_chain_register(&nh->head, n);
}

int raw_notifier_chain_register(struct raw_notifier_head *nh,
		                struct notifier_block *n)
{
        return notifier_chain_register(&nh->head, n);
}

static int notifier_chain_unregister(struct notifier_block **nl,
		                     struct notifier_block *n)
{
        while ((*nl) != NULL) {
		if ((*nl) == n) {
	              rcu_assign_pointer(*nl, n->next);
	              return 0;
	        }
	        nl = &((*nl)->next);
        }
        return -ENOENT;
}

int atomic_notifier_chain_unregister (struct atomic_notifier_head *nh,
				      struct notifier_block *n)
{
	return notifier_chain_unregister(&nh->head, n);
}

int blocking_notifier_chain_unregister(struct blocking_notifier_head *nh,
				       struct notifier_block *n)
{
	return notifier_chain_unregister(&nh->head, n);
}

int raw_notifier_chain_unregister(struct raw_notifier_head *nh,
		                struct notifier_block *n)
{
        return notifier_chain_unregister(&nh->head, n);
}

static int notifier_call_chain(struct notifier_block **nl,
					unsigned long val, void *v,
					int nr_to_call,	int *nr_calls)
{
	int ret = NOTIFY_DONE;
	struct notifier_block *nb, *next_nb;

	nb = rcu_dereference(*nl);

	while (nb && nr_to_call) {
		next_nb = rcu_dereference(nb->next);
		ret = nb->notifier_call(nb, val, v);

		if (nr_calls)
			(*nr_calls)++;

		if ((ret & NOTIFY_STOP_MASK) == NOTIFY_STOP_MASK)
			break;
		nb = next_nb;
		nr_to_call--;
	}
	return ret;
}

int atomic_notifier_call_chain (struct atomic_notifier_head *nh,
				unsigned long val, void *v)
{
	return notifier_call_chain(&nh->head, val, v, -1, NULL);
}

int blocking_notifier_call_chain (struct blocking_notifier_head *nh,
				  unsigned long val, void *v)
{
	return notifier_call_chain(&nh->head, val, v, -1, NULL);
}

int raw_notifier_call_chain(struct raw_notifier_head *nh,
		                unsigned long val, void *v)
{
        return notifier_call_chain(&nh->head, val, v, -1, NULL);
}

int class_register(struct class * cls)
{
    UNIMPLEMENTED_NOASSERT();
    nsc_debugf("class_register: '%s'\n", cls->name);
    return 0;
}

unsigned long __get_free_pages(unsigned int gfp_mask, unsigned int order)
{
	DEBUG_PRINT();
	nsc_debugf("__get_free_pages: order=%u\n", order);

	// XXX: this cuts down on wasted memory. Everything still works, just
	// doesn't use quite as much memory.
	//    if(order > 3) return 0; 
	if(order > 6) return 0; 

	return (unsigned long)nsc_malloc( PAGE_SIZE * (1UL << order) );
}

void si_meminfo(struct sysinfo *val)
{
    UNIMPLEMENTED_NOASSERT();
    memset(val, 0, sizeof(*val));
}

int xfrm_register_type(const struct xfrm_type *type, unsigned short family)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

void dump_stack(void)
{
}

void kmem_cache_free (struct kmem_cache *cachep, void *objp)
{
	DEBUG_PRINT();
	nsc_free(objp);
}

void inode_init_once(struct inode *inode)
{
	UNIMPLEMENTED_NOASSERT();
}


static void sock_destroy_inode(struct inode *inode)
{
	kmem_cache_free(sock_inode_cachep,
			container_of(inode, struct socket_alloc, vfs_inode));
}

void iput(struct inode *inode)
{
    UNIMPLEMENTED_NOASSERT();

    // The following wasn't here for some time, creating a memory leak whenever
    // we allocated a new inode (which happened on every attempt to accept()).
    // This fixes the memory leak. 2006-04-20 stj2
    sock_destroy_inode(inode);
}

void  prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state)
{
}

void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state)
{
}

asmlinkage void __sched schedule(void)
{
}

void  finish_wait(wait_queue_head_t *q, wait_queue_t *wait)
{
}

int send_sig(int sig, struct task_struct *p, int priv)
{
    return 0;
}

void scheduler_tick(void)
{
}

#ifdef CONFIG_X86_32
unsigned long copy_from_user(void *to, const void __user *from, unsigned long n)
#else
unsigned long copy_from_user(void *to, const void __user *from, unsigned int n)
#endif
{
    memcpy(to, from, n);
    DEBUG_PRINT();
    return 0;
}

#ifdef CONFIG_X86_32
unsigned long copy_to_user(void __user *to, const void *from, unsigned long n)
#else
unsigned long copy_to_user(void __user *to, const void *from, unsigned int n)
#endif
{
	DEBUG_PRINT();
	memcpy(to, from, n);
	return 0;
}

unsigned long __copy_to_user_ll(void *to, const void __user *from, unsigned long n)
{
	return copy_to_user(to, from, n);
}

#ifdef CONFIG_X86_64
/*
 * The following functions are only needed for x86_64, mostly due to
 * differences in the arch-specific code.
 * The additional ns_to_XXX functions are here due to
 * BITS_PER_LONG == 64.
 */
unsigned long copy_user_generic(void *to, const void *from, unsigned len)
{
    DEBUG_PRINT();
    memcpy(to, from, len);
    return 0;
}

/* asm/string_64.h on x86_64 has a memcpy() macro, which calls __memcpy */
void *__memcpy(void *d, const void *s, size_t len)
{
	return nsc_memcpy(d,s,len);
}


/**
 * set_normalized_timespec - set timespec sec and nsec parts and normalize
 *
 * @ts:         pointer to timespec variable to be set
 * @sec:        seconds to set
 * @nsec:       nanoseconds to set
 *
 * Set seconds and nanoseconds field of a timespec variable and
 * normalize to the timespec storage format
 *
 * Note: The tv_nsec part is always in the range of
 *      0 <= tv_nsec < NSEC_PER_SEC
 * For negative values only the tv_sec field is negative !
 */
void set_normalized_timespec(struct timespec *ts, time_t sec, long nsec)
{
    while (nsec >= NSEC_PER_SEC) {
        nsec -= NSEC_PER_SEC;
        ++sec;
    }
    while (nsec < 0) {
        nsec += NSEC_PER_SEC;
        --sec;
    }
    ts->tv_sec = sec;
    ts->tv_nsec = nsec;
}

/**
 * ns_to_timespec - Convert nanoseconds to timespec
 * @nsec:       the nanoseconds value to be converted
 *
 * Returns the timespec representation of the nsec parameter.
 */
struct timespec ns_to_timespec(const s64 nsec)
{
	struct timespec ts;
	s32 rem;

	if (!nsec)
	        return (struct timespec) {0, 0};

	ts.tv_sec = div_s64_rem(nsec, NSEC_PER_SEC, &rem);
	if (unlikely(rem < 0)) {
		ts.tv_sec--;
		rem += NSEC_PER_SEC;
	}
	ts.tv_nsec = rem;
	return ts;
}


/**
 * ns_to_timeval - Convert nanoseconds to timeval
 * @nsec:       the nanoseconds value to be converted
 *  
 * Returns the timeval representation of the nsec parameter.
 */
struct timeval ns_to_timeval(const s64 nsec)
{
	struct timespec ts = ns_to_timespec(nsec);
	struct timeval tv;

	tv.tv_sec = ts.tv_sec;
	tv.tv_usec = (suseconds_t) ts.tv_nsec / 1000;
	return tv;
}
#endif


// arch/i386/kernel/time.c
extern void nsc_gettime(unsigned int *, unsigned int *);
void do_gettimeofday(struct timeval *tv)
{
    unsigned int sec, usec;
    nsc_gettime(&sec, &usec);
    tv->tv_sec = sec;
    tv->tv_usec = usec;

    DEBUG_PRINT();
}

#if 0
long kernel_thread(int (*fn)(void *), void * arg, unsigned long flags)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

void yield(void)
{
    UNIMPLEMENTED_NOASSERT();
}

// fs/inode.c
void iput(struct inode *inode)
{
    kfree(inode);
    //UNIMPLEMENTED_NOASSERT();
}

int in_egroup_p(gid_t grp)
{
    UNIMPLEMENTED_NOASSERT();
    return 1;
}

// fs/open.c
int get_unused_fd(void)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

// fs/file_table.c
struct file * get_empty_filp(void)
{
    struct file *f;
    
    UNIMPLEMENTED_NOASSERT();

    f = (struct file *)malloc(sizeof(struct file));
    memset(f, 0, sizeof(struct file));
    
    return f;
}

// fs/dcache.c
struct dentry * d_alloc(struct dentry * parent, const struct qstr *name)
{
    UNIMPLEMENTED_NOASSERT();
    return (struct dentry *)malloc(sizeof(struct dentry));
}

// fs/file_table.c 
void put_filp(struct file *file)
{
    UNIMPLEMENTED_NOASSERT();
}

void d_instantiate(struct dentry *entry, struct inode * inode)
{
    UNIMPLEMENTED_NOASSERT();
}

void d_rehash(struct dentry * entry)
{
    UNIMPLEMENTED_NOASSERT();
}

// fs/open.c
void fd_install(unsigned int fd, struct file * file)
{
    UNIMPLEMENTED_NOASSERT();
}

#endif

int __sched cond_resched_softirq(void)
{
	        return 0;
}

int _cond_resched(void)
{
    return 0;
}

// Note: the below has been hacked up a bit to work. The '10000' numbers are COMPLETELY
// arbitrary and should probably be something else, but I'm not sure what.
 /*
  * allocate a large system hash table from bootmem
  * - it is assumed that the hash table must contain an exact power-of-2
  *   quantity of entries
  * - limit is the number of hash buckets, not the total allocation size
  */
unsigned long nr_all_pages = 100000;
unsigned long totalram_pages = 100000;


void *__init alloc_large_system_hash(const char *tablename,
                                      unsigned long bucketsize,
                                      unsigned long numentries,
                                      int scale,
                                      int flags,
                                      unsigned int *_hash_shift,
                                      unsigned int *_hash_mask,
                                      unsigned long limit)
{
    unsigned long long max = limit;
    unsigned long log2qty, size;
    void *table = NULL;

    /* allow the kernel cmdline to have a say */
    if (!numentries) {
        /* round applicable memory size up to nearest megabyte */
	numentries = nr_all_pages;
        numentries += (1UL << (20 - PAGE_SHIFT)) - 1;
        numentries >>= 20 - PAGE_SHIFT;
        numentries <<= 20 - PAGE_SHIFT;

        /* limit to 1 bucket per 2^scale bytes of low memory */
        if (scale > PAGE_SHIFT)
            numentries >>= (scale - PAGE_SHIFT);
        else
            numentries <<= (PAGE_SHIFT - scale);
    }
    /* rounded up to nearest power of 2 in size */
    numentries = roundup_pow_of_two(numentries);

    /* limit allocation size to 1/16 total memory by default */
    if (max == 0) {
        max = ((unsigned long long)nr_all_pages << PAGE_SHIFT) >> 4;
        do_div(max, bucketsize);
    }

    if (numentries > max)
        numentries = max;

    log2qty = ilog2(numentries);

    do {
        size = bucketsize << log2qty;
        if (flags & HASH_EARLY)
            table = kmalloc(size, 0); // XXX
/*        else if (hashdist)
            table = kmalloc(size, 0); // XXX*/
        else {
            unsigned long order;
            for (order = 0; ((1UL << order) << PAGE_SHIFT) < size; order++)
                ;
            table = (void*) __get_free_pages(GFP_ATOMIC, order);
        }
    } while (!table && size > PAGE_SIZE && --log2qty);

    if (!table)
        panic("Failed to allocate %s hash table\n", tablename);

    printk(KERN_INFO "%s hash table entries: %d (order: %d, %lu bytes)\n",
            tablename,
            (1U << log2qty),
            ilog2(size) - PAGE_SHIFT,
            size);

    if (_hash_shift)
        *_hash_shift = log2qty;
    if (_hash_mask)
        *_hash_mask = (1 << log2qty) - 1;

    return table;
}


int capable (int cap)
{
	return 1;
}

void put_page (struct page *page)
{
}


unsigned int hweight32 (unsigned int w)
{
        unsigned int res = w - ((w >> 1) & 0x55555555);
        res = (res & 0x33333333) + ((res >> 2) & 0x33333333);
        res = (res + (res >> 4)) & 0x0F0F0F0F;
        res = res + (res >> 8);
        return (res + (res >> 16)) & 0x000000FF;
}
#if 0
unsigned int hweight16(unsigned int w)
{
        unsigned int res = w - ((w >> 1) & 0x5555);
        res = (res & 0x3333) + ((res >> 2) & 0x3333);
        res = (res + (res >> 4)) & 0x0F0F;
        return (res + (res >> 8)) & 0x00FF;
}

unsigned int hweight8(unsigned int w)
{
        unsigned int res = w - ((w >> 1) & 0x55);
        res = (res & 0x33) + ((res >> 2) & 0x33);
        return (res + (res >> 4)) & 0x0F;
}

unsigned long hweight64(__u64 w)
{
#if BITS_PER_LONG == 32
        return hweight32((unsigned int)(w >> 32)) + hweight32((unsigned int)w);
#elif BITS_PER_LONG == 64
        __u64 res = w - ((w >> 1) & 0x5555555555555555ul);
        res = (res & 0x3333333333333333ul) + ((res >> 2) & 0x3333333333333333ul);
        res = (res + (res >> 4)) & 0x0F0F0F0F0F0F0F0Ful;
        res = res + (res >> 8);
        res = res + (res >> 16);
        return (res + (res >> 32)) & 0x00000000000000FFul;
#else
#error BITS_PER_LONG not defined
#endif
}
#endif


unsigned long nr_active (void)
{
	return 1;
}


#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/cryptohash.h>

/* F, G and H are basic MD4 functions: selection, majority, parity */
#define F(x, y, z) ((z) ^ ((x) & ((y) ^ (z))))
#define G(x, y, z) (((x) & (y)) + (((x) ^ (y)) & (z)))
#define H(x, y, z) ((x) ^ (y) ^ (z))

/*
 * The generic round function.  The application is so specific that
 * we don't bother protecting all the arguments with parens, as is generally
 * good macro practice, in favor of extra legibility.
 * Rotation is separate from addition to prevent recomputation
 */
#define ROUND(f, a, b, c, d, x, s)				\
  (a += f(b, c, d) + x, a = (a << s) | (a >> (32 - s)))
#define K1 0
#define K2 013240474631UL
#define K3 015666365641UL

/*
 * Basic cut-down MD4 transform.  Returns only 32 bits of result.
 */
__u32 half_md4_transform(__u32 buf[4], __u32 const in[8])
{
        __u32 a = buf[0], b = buf[1], c = buf[2], d = buf[3];

        /* Round 1 */
        ROUND(F, a, b, c, d, in[0] + K1,  3);
        ROUND(F, d, a, b, c, in[1] + K1,  7);
        ROUND(F, c, d, a, b, in[2] + K1, 11);
        ROUND(F, b, c, d, a, in[3] + K1, 19);
        ROUND(F, a, b, c, d, in[4] + K1,  3);
        ROUND(F, d, a, b, c, in[5] + K1,  7);
        ROUND(F, c, d, a, b, in[6] + K1, 11);
        ROUND(F, b, c, d, a, in[7] + K1, 19);

        /* Round 2 */
        ROUND(G, a, b, c, d, in[1] + K2,  3);
        ROUND(G, d, a, b, c, in[3] + K2,  5);
        ROUND(G, c, d, a, b, in[5] + K2,  9);
        ROUND(G, b, c, d, a, in[7] + K2, 13);
        ROUND(G, a, b, c, d, in[0] + K2,  3);
        ROUND(G, d, a, b, c, in[2] + K2,  5);
        ROUND(G, c, d, a, b, in[4] + K2,  9);
        ROUND(G, b, c, d, a, in[6] + K2, 13);

        /* Round 3 */
        ROUND(H, a, b, c, d, in[3] + K3,  3);
        ROUND(H, d, a, b, c, in[7] + K3,  9);
        ROUND(H, c, d, a, b, in[2] + K3, 11);
        ROUND(H, b, c, d, a, in[6] + K3, 15);
        ROUND(H, a, b, c, d, in[1] + K3,  3);
        ROUND(H, d, a, b, c, in[5] + K3,  9);
        ROUND(H, c, d, a, b, in[0] + K3, 11);
        ROUND(H, b, c, d, a, in[4] + K3, 15);

        buf[0] += a;
        buf[1] += b;
        buf[2] += c;
        buf[3] += d;

        return buf[1]; /* "most hashed" word */
}
EXPORT_SYMBOL(half_md4_transform);

DEFINE_PER_CPU(struct rcu_data, rcu_data) = { 0L };
DEFINE_PER_CPU(struct rcu_data, rcu_bh_data) = { 0L };

void  call_rcu (struct rcu_head *head,
			void (*func)(struct rcu_head *rcu))
{
  head->func = func;
  head->next = NULL;
  head->func(head);
}

void  call_rcu_bh (struct rcu_head *head, 
			   void (*func)(struct rcu_head *rcu))
{
  head->func = func;
  head->next = NULL;
  head->func(head);
}

void rcu_barrier (void)
{
}

int rcu_pending(int cpu)
{
  return 0; /* no immediate RCU-related work for current CPU */
}

void rcu_check_callbacks (int cpu, int user)
{
}

void synchronize_rcu (void)
{
}

/*
 * sha_init: initialize the vectors for a SHA1 digest
 *
 * @buf: vector to initialize
 */
void sha_init(__u32 *buf)
{
        buf[0] = 0x67452301;
        buf[1] = 0xefcdab89;
        buf[2] = 0x98badcfe;
        buf[3] = 0x10325476;
        buf[4] = 0xc3d2e1f0;
}

/*
 * SHA transform algorithm, originally taken from code written by
 * Peter Gutmann, and placed in the public domain.
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/cryptohash.h>

/* The SHA f()-functions.  */

#define f1(x,y,z)   (z ^ (x & (y ^ z)))         /* x ? y : z */
#define f2(x,y,z)   (x ^ y ^ z)                 /* XOR */
#define f3(x,y,z)   ((x & y) + (z & (x ^ y)))   /* majority */

/* The SHA Mysterious Constants */

#undef K1
#undef K2
#undef K3
#define K1  0x5A827999L                 /* Rounds  0-19: sqrt(2) * 2^30 */
#define K2  0x6ED9EBA1L                 /* Rounds 20-39: sqrt(3) * 2^30 */
#define K3  0x8F1BBCDCL                 /* Rounds 40-59: sqrt(5) * 2^30 */
#define K4  0xCA62C1D6L                 /* Rounds 60-79: sqrt(10) * 2^30 */

/*
* sha_transform: single block SHA1 transform
 *
 * @digest: 160 bit digest to update
 * @data:   512 bits of data to hash
 * @W:      80 words of workspace (see note)
 *
 * This function generates a SHA1 digest for a single 512-bit block.
 * Be warned, it does not handle padding and message digest, do not
 * confuse it with the full FIPS 180-1 digest algorithm for variable
 * length messages.
 *
 * Note: If the hash is security sensitive, the caller should be sure
 * to clear the workspace. This is left to the caller to avoid
 * unnecessary clears between chained hashing operations.
 */
void sha_transform(__u32 *digest, const char *in, __u32 *W)
{
        __u32 a, b, c, d, e, t, i;

        for (i = 0; i < 16; i++)
                W[i] = be32_to_cpu(((const __be32 *)in)[i]);

        for (i = 0; i < 64; i++)
                W[i+16] = rol32(W[i+13] ^ W[i+8] ^ W[i+2] ^ W[i], 1);

        a = digest[0];
        b = digest[1];
        c = digest[2];
        d = digest[3];
        e = digest[4];

        for (i = 0; i < 20; i++) {
                t = f1(b, c, d) + K1 + rol32(a, 5) + e + W[i];
                e = d; d = c; c = rol32(b, 30); b = a; a = t;
        }

        for (; i < 40; i ++) {
                t = f2(b, c, d) + K2 + rol32(a, 5) + e + W[i];
                e = d; d = c; c = rol32(b, 30); b = a; a = t;
        }

        for (; i < 60; i ++) {
                t = f3(b, c, d) + K3 + rol32(a, 5) + e + W[i];
                e = d; d = c; c = rol32(b, 30); b = a; a = t;
        }
        for (; i < 80; i ++) {
                t = f2(b, c, d) + K4 + rol32(a, 5) + e + W[i];
                e = d; d = c; c = rol32(b, 30); b = a; a = t;
        }

        digest[0] += a;
        digest[1] += b;
        digest[2] += c;
        digest[3] += d;
        digest[4] += e;
}

struct timespec current_kernel_time(void)
{
  const int nanoSecsInMicroSec = 1000;
  struct timespec xtime;
  unsigned int sec, usec;

  nsc_gettime(&sec, &usec);

  xtime.tv_sec = sec;
  xtime.tv_nsec = usec * nanoSecsInMicroSec;

  return xtime;
}

ktime_t ktime_get(void)
{
	struct timespec ts = current_kernel_time();
	return timespec_to_ktime(ts);
}

ktime_t ktime_get_real(void)
{
   return ktime_get();
}

int cap_netlink_send (struct sock *sk, struct sk_buff *skb)
{
  UNIMPLEMENTED_NOASSERT();
  return 0;
}

int cap_netlink_recv (struct sk_buff *skb, int cap)
{
  UNIMPLEMENTED_NOASSERT();
  return 0;
}

void  mutex_lock(struct mutex *lock)
{
 atomic_inc(&lock->count);
}

void  mutex_unlock(struct mutex *lock)
{
 atomic_dec(&lock->count);
}


void warn_on_slowpath(const char *file, int line)
{
	printk(KERN_WARNING "------------[ cut here ]------------\n");
	printk(KERN_WARNING "WARNING: at %s:%d\n", file, line);
}

#if BITS_PER_LONG == 32
u64 div64_u64(u64 dividend, u64 divisor)
{
	u32 high, d;

	high = divisor >> 32;
	if (high) {
		unsigned int shift = fls(high);

		d = divisor >> shift;
		dividend >>= shift;
	} else
		d = divisor;

	return div_u64(dividend, d);
}
#endif

int scnprintf(char * buf, size_t size, const char *fmt, ...)
{
	va_list args;
	int i;
	va_start(args, fmt);
	i = vsnprintf(buf, size, fmt, args);
	va_end(args);
	return (i >= size) ? (size - 1) : i;
}


struct vfsmount *kern_mount_data(struct file_system_type *type, void *data)
{
	struct vfsmount *mnt = kzalloc(sizeof(*mnt), 0);
	nsc_assert(mnt != NULL, __func__);

	atomic_set(&mnt->mnt_count, 1);
	if (type->name)
		mnt->mnt_devname = kstrdup(type->name, 0);
	return mnt;
}


void __mutex_init(struct mutex *lock, const char *name, struct lock_class_key *key)
{
}

static void delayed_work_timer_fn(unsigned long __data)
{
	struct delayed_work *dwork = (struct delayed_work *) __data;
	struct work_struct *work = &dwork->work;

	schedule_work(work);
}

int schedule_delayed_work(struct delayed_work *dwork, unsigned long delay)
{

	struct timer_list *timer = &dwork->timer;
        struct work_struct *work = &dwork->work;
	int ret = 0;

	if (!test_and_set_bit(WORK_STRUCT_PENDING, work_data_bits(work))) {
		timer->expires = jiffies + delay;
		timer->data = (unsigned long)dwork;
		timer->function = delayed_work_timer_fn;

		add_timer(timer);
		ret = 1;
	}
	return ret;
}

int schedule_work(struct work_struct *work)
{
	work->func(work);
	return 0;
}

void srandom32(u32 seed)
{
}

u32 random32(void)
{
   return 0;
}

unsigned long get_seconds(void)
{
  unsigned int sec, usec;

  nsc_gettime(&sec, &usec);

  return sec;
}

/* from kernel/time.c */
unsigned int jiffies_to_usecs(const unsigned long j)
{
#if HZ <= USEC_PER_SEC && !(USEC_PER_SEC % HZ)
        return (USEC_PER_SEC / HZ) * j;
#elif HZ > USEC_PER_SEC && !(HZ % USEC_PER_SEC)
        return (j + (HZ / USEC_PER_SEC) - 1)/(HZ / USEC_PER_SEC);
#else
# if BITS_PER_LONG == 32
        return (HZ_TO_USEC_MUL32 * j) >> HZ_TO_USEC_SHR32;
# else
        return (j * HZ_TO_USEC_NUM) / HZ_TO_USEC_DEN;
# endif
#endif
}

#if 0
unsigned int jiffies_to_msecs(const unsigned long j)
{
#if HZ <= MSEC_PER_SEC && !(MSEC_PER_SEC % HZ)
        return (MSEC_PER_SEC / HZ) * j;
#elif HZ > MSEC_PER_SEC && !(HZ % MSEC_PER_SEC)
        return (j + (HZ / MSEC_PER_SEC) - 1)/(HZ / MSEC_PER_SEC);
#else
# if BITS_PER_LONG == 32
        return (HZ_TO_MSEC_MUL32 * j) >> HZ_TO_MSEC_SHR32;
# else
        return (j * HZ_TO_MSEC_NUM) / HZ_TO_MSEC_DEN;
# endif
#endif
}
#endif

unsigned long msecs_to_jiffies(const unsigned int m) 
{ 
        /* 
         * Negative value, means infinite timeout: 
         */ 
        if ((int)m < 0) 
                return MAX_JIFFY_OFFSET; 
 
#if HZ <= MSEC_PER_SEC && !(MSEC_PER_SEC % HZ) 
        /* 
         * HZ is equal to or smaller than 1000, and 1000 is a nice 
         * round multiple of HZ, divide with the factor between them, 
         * but round upwards: 
         */ 
        return (m + (MSEC_PER_SEC / HZ) - 1) / (MSEC_PER_SEC / HZ); 
#elif HZ > MSEC_PER_SEC && !(HZ % MSEC_PER_SEC) 
        /* 
         * HZ is larger than 1000, and HZ is a nice round multiple of 
         * 1000 - simply multiply with the factor between them. 
         * 
         * But first make sure the multiplication result cannot 
         * overflow: 
         */ 
        if (m > jiffies_to_msecs(MAX_JIFFY_OFFSET)) 
                return MAX_JIFFY_OFFSET; 
 
        return m * (HZ / MSEC_PER_SEC); 
#else 
        /* 
         * Generic case - multiply, round and divide. But first 
         * check that if we are doing a net multiplication, that 
         * we wouldn't overflow: 
         */ 
        if (HZ > MSEC_PER_SEC && m > jiffies_to_msecs(MAX_JIFFY_OFFSET)) 
                return MAX_JIFFY_OFFSET; 
 
        return (MSEC_TO_HZ_MUL32 * m + MSEC_TO_HZ_ADJ32) 
                >> MSEC_TO_HZ_SHR32; 
#endif 
} 



unsigned long usecs_to_jiffies(const unsigned int u)
{
        if (u > jiffies_to_usecs(MAX_JIFFY_OFFSET)) 
                return MAX_JIFFY_OFFSET;
#if HZ <= USEC_PER_SEC && !(USEC_PER_SEC % HZ)
        return (u + (USEC_PER_SEC / HZ) - 1) / (USEC_PER_SEC / HZ);
#elif HZ > USEC_PER_SEC && !(HZ % USEC_PER_SEC)
        return u * (HZ / USEC_PER_SEC);
#else   
        return (USEC_TO_HZ_MUL32 * u + USEC_TO_HZ_ADJ32)
                >> USEC_TO_HZ_SHR32;
#endif
}


void kill_fasync(struct fasync_struct **fp, int sig, int band)
{
}

void update_wall_time(void)
{
}
void device_initialize(struct device *dev)
{
}
int device_add(struct device *dev)
{
	return 0;
}

pid_t pid_vnr(struct pid* pid)
{
    return 0;
}
