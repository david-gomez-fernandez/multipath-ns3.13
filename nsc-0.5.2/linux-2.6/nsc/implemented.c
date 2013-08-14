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
extern void nsc_free(void *);
extern void *nsc_memcpy(void *to, const void *from, unsigned len);
extern void nsc_wakeup(void);

// lib/brlock.c
#include <linux/config.h>
#include <linux/sched.h>
//#include <linux/brlock.h>
// mm/page_alloc.c
//#include <linux/config.h>
#include <linux/mm.h>
#include <linux/swap.h>
//#include <linux/swapctl.h>
#include <linux/interrupt.h>
#include <linux/pagemap.h>
#include <linux/bootmem.h>
#include <linux/slab.h>
#include <linux/module.h>
// fs/fcntl.c
#include <linux/init.h>
#include <linux/mount.h>
//#include <linux/mm.h>
#include <linux/slab.h>
#include <linux/file.h>
#include <linux/dnotify.h>
#include <linux/smp_lock.h>
#include <linux/slab.h>
//#include <linux/iobuf.h>
#include <linux/ptrace.h>
// kernel/sysctl.c
#include <linux/config.h>
#include <linux/slab.h>
#include <linux/sysctl.h>
//#include <linux/swapctl.h>
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
//#include <linux/tqueue.h>
// kernel/timer.c
#include <linux/config.h>
#include <linux/mm.h>
#include <linux/timex.h>
#include <linux/delay.h>
#include <linux/smp_lock.h>
#include <linux/interrupt.h>
#include <linux/kernel_stat.h>
// kernel/sys.c
#include <linux/notifier.h>

#include <linux/device.h>
#include <net/xfrm.h>
#include <linux/idr.h>

#define UNIMPLEMENTED_NOASSERT() /* empty */
/*nsc_debugf("Unimplemented '%s'" \
        " called.\n", __func__);*/


void kfree (const void *objp)
{
    UNIMPLEMENTED_NOASSERT();
    nsc_free((void *)objp);
}

struct proc_dir_entry *proc_mkdir(const char *name, struct proc_dir_entry *parent)
{
    struct proc_dir_entry *pde = __kmalloc(sizeof(struct proc_dir_entry), 0);

    memset(pde, 0, sizeof(*pde));
    
    pde->name = name;
    if(parent) {
        pde->next = parent->subdir;
        parent->subdir = pde;
    } 

    return pde;
}

void * __kmalloc (size_t size, int flags)
{
    UNIMPLEMENTED_NOASSERT();
    // Flags are unimportant here.
    return nsc_malloc(size);
}

//
struct proc_dir_entry *create_proc_entry(const char *name, mode_t mode,
        struct proc_dir_entry *parent)
{
    struct proc_dir_entry *pde = __kmalloc(sizeof(struct proc_dir_entry), 0);

    memset(pde, 0, sizeof(*pde));
    
    pde->name = name; // XXX: is this ok?!?!?! //strdup(name);
    pde->mode = mode;

    if(parent) {
        pde->next = parent->subdir;
        parent->subdir = pde;
        pde->parent = parent;
    }
    
    return pde;
}

int proc_match(int len, const char *name,struct proc_dir_entry * de)
{
    UNIMPLEMENTED_NOASSERT();
    if (!de || !de->low_ino)
            return 0;
    if (de->namelen != len)
            return 0;
    return !memcmp(name, de->name, len);
}

void init_irq_proc (void)
{
    UNIMPLEMENTED_NOASSERT();
}

/* from mm/slab.c; stj 6 Jan 2005 */
/*
 * The slab lists of all objects.
 * Hopefully reduce the internal fragmentation
 * NUMA: The spinlock could be moved from the kmem_cache_t
 * into this structure, too. Figure out what causes
 * fewer cross-node spinlock operations.
 */
struct kmem_list3 {
	struct list_head	slabs_partial;	/* partial list first, better asm code */
	struct list_head	slabs_full;
	struct list_head	slabs_free;
	unsigned long	free_objects;
	int		free_touched;
	unsigned long	next_reap;
	struct array_cache	*shared;
};

/*
 * kmem_cache_t
 *
 * manages a cache.
 */
	
struct kmem_cache_s {
/* 1) per-cpu data, touched during every alloc/free */
	struct array_cache	*array[NR_CPUS];
	unsigned int		batchcount;
	unsigned int		limit;
/* 2) touched by every alloc & free from the backend */
	struct kmem_list3	lists;
	/* NUMA: kmem_3list_t	*nodelists[MAX_NUMNODES] */
	unsigned int		objsize;
	unsigned int	 	flags;	/* constant flags */
	unsigned int		num;	/* # of objs per slab */
	unsigned int		free_limit; /* upper limit of objects in the lists */
	spinlock_t		spinlock;

/* 3) cache_grow/shrink */
	/* order of pgs per slab (2^n) */
	unsigned int		gfporder;

	/* force GFP flags, e.g. GFP_DMA */
	unsigned int		gfpflags;

	size_t			colour;		/* cache colouring range */
	unsigned int		colour_off;	/* colour offset */
	unsigned int		colour_next;	/* cache colouring */
	kmem_cache_t		*slabp_cache;
	unsigned int		slab_size;
	unsigned int		dflags;		/* dynamic flags */

	/* constructor func */
	void (*ctor)(void *, kmem_cache_t *, unsigned long);

	/* de-constructor func */
	void (*dtor)(void *, kmem_cache_t *, unsigned long);

/* 4) cache creation/removal */
	const char		*name;
	struct list_head	next;

/* 5) statistics */
#if STATS
	unsigned long		num_active;
	unsigned long		num_allocations;
	unsigned long		high_mark;
	unsigned long		grown;
	unsigned long		reaped;
	unsigned long 		errors;
	unsigned long		max_freeable;
	atomic_t		allochit;
	atomic_t		allocmiss;
	atomic_t		freehit;
	atomic_t		freemiss;
#endif
#if DEBUG
	int			dbghead;
	int			reallen;
#endif
};



kmem_cache_t *
kmem_cache_create (const char *name, size_t size, size_t offset,
	unsigned long flags, void (*ctor)(void*, kmem_cache_t *, unsigned long),
	void (*dtor)(void*, kmem_cache_t *, unsigned long))
{
    kmem_cache_t *cache;
    
    UNIMPLEMENTED_NOASSERT();

    cache = nsc_malloc(sizeof(kmem_cache_t));
    nsc_assert(cache != NULL, "cache");

    cache->objsize = size;
    cache->ctor = ctor;
    cache->dtor = dtor;
    cache->flags = flags;
    cache->name = name; // XXX: is this correct?
//    strcpy(cache->name, name);
    
    return cache;
}

// fs/super.c
int register_filesystem(struct file_system_type * fs)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

// fs/super.c
struct vfsmount *kern_mount(struct file_system_type *type)
{
    struct vfsmount *v;
    
    UNIMPLEMENTED_NOASSERT();
    v = nsc_malloc(sizeof(struct vfsmount)); // XXX: leak
    v->mnt_sb = (struct super_block *)nsc_malloc(sizeof(struct super_block));

    return v;
}

extern char *strchr(const char *, int);
char *strnchr(const char *s, size_t count, int c)
{
    const char *n = strchr(s, c);
    UNIMPLEMENTED_NOASSERT();
    if(n - s < count) 
        return (char *)n;
    return 0;
}

fastcall unsigned long get_zeroed_page(unsigned int gfp_mask)
{
    void *buf = nsc_malloc(PAGE_SIZE);
    UNIMPLEMENTED_NOASSERT();
    memset(buf, 0, PAGE_SIZE);
    return (unsigned long)buf;
}

/* extern void free_pages(unsigned long addr, unsigned int order) __attribute__((regparm(3))); */
/*void free_pages(unsigned long addr, unsigned int order)
    __attribute__((regparm(3))) */
fastcall void free_pages(unsigned long addr, unsigned int order)
{
    UNIMPLEMENTED_NOASSERT();
    nsc_free((void *)addr);
}

size_t strlcpy(char *dest, const char *src, size_t size)
{
    extern char *strcpy(char *, const char *);
    UNIMPLEMENTED_NOASSERT();
    return strlen(strcpy(dest, src));
}

/* These static functions are copied for net/socket.c .... damn static funcs!
 * If they weren't static we could just extern and call them. Oh well, copying
 * them here works for now. */
static kmem_cache_t * sock_inode_cachep;

static struct inode *sock_alloc_inode(struct super_block *sb)
{
	struct socket_alloc *ei;
	ei = (struct socket_alloc *)kmem_cache_alloc(sock_inode_cachep, SLAB_KERNEL);
	if (!ei)
		return NULL;
	init_waitqueue_head(&ei->socket.wait);
	
	ei->socket.fasync_list = NULL;
	ei->socket.state = SS_UNCONNECTED;
	ei->socket.flags = 0;
	ei->socket.ops = NULL;
	ei->socket.sk = NULL;
	ei->socket.file = NULL;
	ei->socket.passcred = 0;

	return &ei->vfs_inode;
}

static void sock_destroy_inode(struct inode *inode)
{
	kmem_cache_free(sock_inode_cachep,
			container_of(inode, struct socket_alloc, vfs_inode));
}

static void init_once(void * foo, kmem_cache_t * cachep, unsigned long flags)
{
	struct socket_alloc *ei = (struct socket_alloc *) foo;

	if ((flags & (SLAB_CTOR_VERIFY|SLAB_CTOR_CONSTRUCTOR)) ==
	    SLAB_CTOR_CONSTRUCTOR)
		inode_init_once(&ei->vfs_inode);
}
 
int nsc_sock_init_inodecache(void)
{
	sock_inode_cachep = kmem_cache_create("sock_inode_cache",
				sizeof(struct socket_alloc),
				0, SLAB_HWCACHE_ALIGN|SLAB_RECLAIM_ACCOUNT,
				init_once, NULL);
	if (sock_inode_cachep == NULL)
		return -ENOMEM;
	return 0;
}


struct inode * new_inode(struct super_block *sb)
{
    struct inode *i;
    
    UNIMPLEMENTED_NOASSERT();
    /* Normally the procedure of new_inode goes through quite a few levels of
     * indirection and complexity. The only bit that is important to us is
     * getting enough memory allocated really; sock_alloc_inode does this for
     * us correctly. Note that we cannot just malloc the size of an inode, the
     * system is more complex than this; what really happens is
     * */
    i = sock_alloc_inode(NULL);

    /* memset( SOCKET_I(i)->sk_lock, 0, sizeof(SOCKET_I(i)->sk_lock) ); */

    return i;
}

void * kmem_cache_alloc (kmem_cache_t *cachep, int flags)
{
    void *o;
    
    UNIMPLEMENTED_NOASSERT();
    
    o = nsc_malloc(cachep->objsize);
    if(cachep->ctor)
        (cachep->ctor)(o, cachep, SLAB_CTOR_CONSTRUCTOR);
    return o;
}

/*void FASTCALL(__wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key))*/
void fastcall __wake_up(wait_queue_head_t *q, unsigned int mode,
				int nr_exclusive, void *key)
{
    UNIMPLEMENTED_NOASSERT();
    nsc_wakeup();
}

int notifier_chain_register(struct notifier_block **list, struct notifier_block *n)
{
    UNIMPLEMENTED_NOASSERT();
    // XXX: I think we might need this
    while(*list)
    {
        if(n->priority > (*list)->priority)
            break;
        list= &((*list)->next);
    }
    n->next = *list;
    *list=n;

    return 0L;
}

int class_register(struct class * cls)
{
    UNIMPLEMENTED_NOASSERT();
    nsc_debugf("class_register: '%s'\n", cls->name);
    return 0;
}

/*unsigned long FASTCALL(__get_free_pages(unsigned int gfp_mask, unsigned int order))*/
fastcall unsigned long __get_free_pages(unsigned int gfp_mask, unsigned int order)
{
    UNIMPLEMENTED_NOASSERT();
    nsc_debugf("__get_free_pages: order=%u\n", order);

    // XXX: this cuts down on wasted memory. Everything still works, just
    // doesn't use quite as much memory.
    if(order > 3) return 0;

    return (unsigned long)nsc_malloc( PAGE_SIZE * (1UL << order) );
}

void synchronize_kernel(void)
{
    UNIMPLEMENTED_NOASSERT();
}

// drivers/char/random.c
void get_random_bytes(void *buf, int nbytes)
{
    UNIMPLEMENTED_NOASSERT();
    memset(buf, 1, nbytes);
}

//
void si_meminfo(struct sysinfo *val)
{
    UNIMPLEMENTED_NOASSERT();
    memset(val, 0, sizeof(*val));
}

int xfrm_register_type(struct xfrm_type *type, unsigned short family)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

fastcall int  __down_failed_trylock(void  /* params in registers */)
{
    UNIMPLEMENTED_NOASSERT();
    return 1;
}

fastcall void __up_wakeup(void /* special register calling convention */)
{
    UNIMPLEMENTED_NOASSERT();
}

void dump_stack(void)
{
    UNIMPLEMENTED_NOASSERT();
}

// kernel/sys.c
int notifier_call_chain(struct notifier_block **n, unsigned long val, void *v)
{
    // This function definitely needs to be implemented. This is the normal
    // kernel version.
    int ret=NOTIFY_DONE;
    struct notifier_block *nb = *n;

    while(nb)
    {
            ret=nb->notifier_call(nb,val,v);
            if(ret&NOTIFY_STOP_MASK)
            {
                    return ret;
            }
            nb=nb->next;
    }
    return ret;
}

void kmem_cache_free (kmem_cache_t *cachep, void *objp)
{
    UNIMPLEMENTED_NOASSERT();
    if(cachep->dtor)
        (cachep->dtor)(objp, cachep, 0);
    nsc_free(objp);
}

int class_device_register(struct class_device *class_dev)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

int class_device_create_file(struct class_device * class_dev,
			     const struct class_device_attribute * attr)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

int sysfs_create_group(struct kobject * k, const struct attribute_group *g)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

void idr_init(struct idr *idp)
{
    UNIMPLEMENTED_NOASSERT();
}

unsigned long copy_from_user(void *to, const void __user *from, unsigned long n)
{
    memcpy(to, from, n);
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

fastcall void __down_failed(void /* special register calling convention */)
{
    UNIMPLEMENTED_NOASSERT();
}

__u32 secure_tcp_sequence_number(__u32 saddr, __u32 daddr,
				 __u16 sport, __u16 dport)
{  
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

void inode_init_once(struct inode *inode)
{
    UNIMPLEMENTED_NOASSERT();
}

void iput(struct inode *inode)
{
    UNIMPLEMENTED_NOASSERT();

    // The following wasn't here for some time, creating a memory leak whenever
    // we allocated a new inode (which happened on every attempt to accept()).
    // This fixes the memory leak. 2006-04-20 stj2
    sock_destroy_inode(inode);
}

void fastcall prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state)
{
    UNIMPLEMENTED_NOASSERT();
}

asmlinkage void __sched schedule(void)
{
    UNIMPLEMENTED_NOASSERT();
}

void fastcall finish_wait(wait_queue_head_t *q, wait_queue_t *wait)
{
    UNIMPLEMENTED_NOASSERT();
}

int
send_sig(int sig, struct task_struct *p, int priv)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

void scheduler_tick(int user_ticks, int sys_ticks)
{
    UNIMPLEMENTED_NOASSERT();
}

unsigned long nr_running(void)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

unsigned long nr_uninterruptible(void)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

void do_softirq(void)
{
    __u32 pending;
    unsigned long flags;

    UNIMPLEMENTED_NOASSERT();

    if (in_interrupt())
            return;

    local_irq_save(flags);

    pending = local_softirq_pending();

    if (pending)
            __do_softirq();

    local_irq_restore(flags);
}

void fastcall call_rcu_bh(struct rcu_head *head,
        void (*func)(struct rcu_head *rcu))
{
    UNIMPLEMENTED_NOASSERT();

    // Just call the function straight away for now. This would normally
    // be delayed till we leave the softirq context or whatever.
    func(head);
}

void fastcall
prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state)
{
    UNIMPLEMENTED_NOASSERT();
}

unsigned long copy_to_user(void __user *to, const void *from, unsigned long n)
{
    UNIMPLEMENTED_NOASSERT();
    memcpy(to, from, n);
    return 0;
}

unsigned long
__copy_to_user_ll(void *to, const void __user *from, unsigned long n)
{
    UNIMPLEMENTED_NOASSERT();
    memcpy(to, from, n);
    return 0;
}


#if 0

// mm/slab.c
#define CACHE_NAMELEN	20	/* max name length for a slab cache */

struct kmem_cache_s {
/* 1) each alloc & free */
	/* full, partial first, then free */
	struct list_head	slabs_full;
	struct list_head	slabs_partial;
	struct list_head	slabs_free;
	unsigned int		objsize;
	unsigned int	 	flags;	/* constant flags */
	unsigned int		num;	/* # of objs per slab */
	spinlock_t		spinlock;
#ifdef CONFIG_SMP
	unsigned int		batchcount;
#endif

/* 2) slab additions /removals */
	/* order of pgs per slab (2^n) */
	unsigned int		gfporder;

	/* force GFP flags, e.g. GFP_DMA */
	unsigned int		gfpflags;

	size_t			colour;		/* cache colouring range */
	unsigned int		colour_off;	/* colour offset */
	unsigned int		colour_next;	/* cache colouring */
	kmem_cache_t		*slabp_cache;
	unsigned int		growing;
	unsigned int		dflags;		/* dynamic flags */

	/* constructor func */
	void (*ctor)(void *, kmem_cache_t *, unsigned long);

	/* de-constructor func */
	void (*dtor)(void *, kmem_cache_t *, unsigned long);

	unsigned long		failures;

/* 3) cache creation/removal */
	char			name[CACHE_NAMELEN];
	struct list_head	next;
#ifdef CONFIG_SMP
/* 4) per-cpu data */
	//cpucache_t		*cpudata[NR_CPUS];
#endif
#if STATS
	unsigned long		num_active;
	unsigned long		num_allocations;
	unsigned long		high_mark;
	unsigned long		grown;
	unsigned long		reaped;
	unsigned long 		errors;
#ifdef CONFIG_SMP
	atomic_t		allochit;
	atomic_t		allocmiss;
	atomic_t		freehit;
	atomic_t		freemiss;
#endif
#endif
};


void * kmalloc (size_t size, int flags)
{
    UNIMPLEMENTED_NOASSERT();
    // XXX: are flags important here?
    return nsc_malloc(size);
}

#include <linux/init.h>
void __init do_initcalls(void)
{
    initcall_t *call;

    call = &__initcall_start;
    do {
        (*call)();
        call++;
    } while (call < &__initcall_end);

    /* Make sure there is no pending stuff from the initcall sequence */
    //flush_scheduled_tasks();
}

// fs/proc/generic.c

void __br_write_lock (enum brlock_indices idx)
{
    //UNIMPLEMENTED_NOASSERT();
}

void __br_write_unlock (enum brlock_indices idx)
{
    //UNIMPLEMENTED_NOASSERT();
}

void add_wait_queue(wait_queue_head_t *q, wait_queue_t * wait)
{
    UNIMPLEMENTED_NOASSERT();
    __add_wait_queue(q, wait);
}

void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t * wait)
{
    UNIMPLEMENTED_NOASSERT();
    __add_wait_queue(q, wait);
}

signed long schedule_timeout(signed long timeout)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

void remove_wait_queue(wait_queue_head_t *q, wait_queue_t * wait)
{
    UNIMPLEMENTED_NOASSERT();
    __remove_wait_queue(q, wait);
}


// arch/i386/lib/mmx.c
void *_mmx_memcpy(void *to, const void *from, unsigned len)
{
    return nsc_memcpy(to, from, len);
}


// drivers/net/setup.c 
void __init net_device_init(void)
{
    UNIMPLEMENTED_NOASSERT();
}

// kernel/kmod.c  
void dev_probe_lock(void)
{
    UNIMPLEMENTED_NOASSERT();
}

void dev_probe_unlock(void)
{
    UNIMPLEMENTED_NOASSERT();
}

// kernel/module.c
int try_inc_mod_count(struct module *mod)
{
    UNIMPLEMENTED_NOASSERT();
    return 1; // 0 says module is not present
}
#endif

// arch/i386/kernel/time.c
extern nsc_gettime(unsigned int *, unsigned int *);
void do_gettimeofday(struct timeval *tv)
{
    unsigned int sec, usec;
    nsc_gettime(&sec, &usec);
    tv->tv_sec = sec;
    tv->tv_usec = usec;

    UNIMPLEMENTED_NOASSERT();
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

unsigned long __generic_copy_to_user(void *to, const void *from, 
        unsigned long n)
{
    UNIMPLEMENTED_NOASSERT();
    memcpy(to, from, n);
    return 0;
}

void remove_proc_entry(const char *name, struct proc_dir_entry *parent)
{
    UNIMPLEMENTED_NOASSERT();
}



int in_egroup_p(gid_t grp)
{
    UNIMPLEMENTED_NOASSERT();
    return 1;
}

// Used to send SIGPIPE and so on. Ignore for now.
int
send_sig(int sig, struct task_struct *p, int priv)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
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
