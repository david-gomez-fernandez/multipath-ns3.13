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

/* define to use local random routines */
/* define LOCAL_RANDOM 1 */

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


#include <linux/init.h>
void __init do_initcalls(void)
{
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


void kfree (const void *objp)
{
    DEBUG_PRINT();
    nsc_free((void *)objp);
}

#ifdef __x86_64__
void *__memcpy(void *to, const void *from, size_t len)
{
  return nsc_memcpy(to, from, len);
}
#endif

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

void * __kmalloc (size_t size, gfp_t flags)
{
    DEBUG_PRINT();
  // Flags are unimportant here.
    return nsc_malloc(size);
}

void *__kzalloc(size_t size, gfp_t flags)
{
	void *ret = __kmalloc(size, flags);
	if (ret)
		memset(ret, 0, size);
	return ret;
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
  DEBUG_PRINT();
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
	
struct kmem_cache {
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
    
    DEBUG_PRINT();

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

// fs/super.c
struct vfsmount *kern_mount(struct file_system_type *type)
{
    struct vfsmount *v;
    
    DEBUG_PRINT();
    v = nsc_malloc(sizeof(struct vfsmount)); // XXX: leak
    v->mnt_sb = (struct super_block *)nsc_malloc(sizeof(struct super_block));

    return v;
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

fastcall unsigned long get_zeroed_page(unsigned int gfp_mask)
{
    void *buf = nsc_malloc(PAGE_SIZE);
    DEBUG_PRINT();
    memset(buf, 0, PAGE_SIZE);
    return (unsigned long)buf;
}

/* extern void free_pages(unsigned long addr, unsigned int order) __attribute__((regparm(3))); */
/*void free_pages(unsigned long addr, unsigned int order)
    __attribute__((regparm(3))) */
fastcall void free_pages(unsigned long addr, unsigned int order)
{
  DEBUG_PRINT();
    nsc_free((void *)addr);
}

size_t strlcpy(char *dest, const char *src, size_t size)
{
    extern char *strcpy(char *, const char *);
    DEBUG_PRINT();
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
    
    DEBUG_PRINT();
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

void * kmem_cache_alloc (kmem_cache_t *cachep, gfp_t flags)
{
    void *o;
    
    DEBUG_PRINT();
    
    o = nsc_malloc(cachep->objsize);
    if(cachep->ctor)
        (cachep->ctor)(o, cachep, SLAB_CTOR_CONSTRUCTOR);
    return o;
}

void *kmem_cache_zalloc(struct kmem_cache *cache, gfp_t flags)
{
        void *ret = kmem_cache_alloc(cache, flags);
        if (ret)
                memset(ret, 0, cache->objsize);
        return ret;
}

/*void FASTCALL(__wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key))*/
void fastcall __wake_up(wait_queue_head_t *q, unsigned int mode,
				int nr_exclusive, void *key)
{
  DEBUG_PRINT();
    nsc_wakeup();
}

int notifier_chain_unregister(struct notifier_block **nl,
			      struct notifier_block *n);
int notifier_call_chain(struct notifier_block **n, unsigned long val, void *v);


int notifier_chain_register(struct notifier_block **list, struct notifier_block *n)
{
  DEBUG_PRINT();
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

int atomic_notifier_chain_register (struct atomic_notifier_head *nh,
				    struct notifier_block *n)
{
	return notifier_chain_register(&nh->head, n);
}

int atomic_notifier_chain_unregister (struct atomic_notifier_head *nh,
				      struct notifier_block *n)
{
	return notifier_chain_unregister(&nh->head, n);
}

int atomic_notifier_call_chain (struct atomic_notifier_head *nh,
				unsigned long val, void *v)
{
	return notifier_call_chain(&nh->head, val, v);
}

int blocking_notifier_call_chain (struct blocking_notifier_head *nh,
				  unsigned long val, void *v)
{
	return notifier_call_chain(&nh->head, val, v);
}

int blocking_notifier_chain_register (struct blocking_notifier_head *nh,
				      struct notifier_block *n)
{
	return notifier_chain_register(&nh->head, n);
}

int blocking_notifier_chain_unregister(struct blocking_notifier_head *nh,
				       struct notifier_block *n)
{
	return notifier_chain_unregister(&nh->head, n);
}

int raw_notifier_chain_register(struct raw_notifier_head *nh,
		                struct notifier_block *n)
{
	        return notifier_chain_register(&nh->head, n);
}

int notifier_chain_unregister(struct notifier_block **nl,
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

int raw_notifier_chain_unregister(struct raw_notifier_head *nh,
		                struct notifier_block *n)
{
	        return notifier_chain_unregister(&nh->head, n);
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
  DEBUG_PRINT();
    nsc_debugf("__get_free_pages: order=%u\n", order);

    // XXX: this cuts down on wasted memory. Everything still works, just
    // doesn't use quite as much memory.

    //    if(order > 3) return 0; 
    if(order > 6) return 0; 

    return (unsigned long)nsc_malloc( PAGE_SIZE * (1UL << order) );
}

void synchronize_kernel(void)
{
    UNIMPLEMENTED_NOASSERT();
}

#ifdef LOCAL_RANDOM
// drivers/char/random.c
void get_random_bytes(void *buf, int nbytes)
{
    UNIMPLEMENTED_NOASSERT();
    memset(buf, 1, nbytes);
}
#endif

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

int raw_notifier_call_chain(struct raw_notifier_head *nh,
		                unsigned long val, void *v)
{
	        return notifier_call_chain(&nh->head, val, v);
}

void kmem_cache_free (kmem_cache_t *cachep, void *objp)
{
  DEBUG_PRINT();
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

void idr_init(struct idr *idp)
{
    UNIMPLEMENTED_NOASSERT();
}

fastcall void __down_failed(void /* special register calling convention */)
{
    UNIMPLEMENTED_NOASSERT();
}

#ifdef LOCAL_RANDOM
__u32 secure_tcp_sequence_number(__u32 saddr, __u32 daddr,
				 __u16 sport, __u16 dport)
{  
    UNIMPLEMENTED_NOASSERT();
    return 0;
}
#endif

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

//void scheduler_tick(int user_ticks, int sys_ticks)
void scheduler_tick(void)
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

extern void __do_softirq(void);

void do_softirq(void)
{
    __u32 pending;
    unsigned long flags;

    DEBUG_PRINT();

    if (in_interrupt())
            return;

    local_irq_save(flags);

    pending = local_softirq_pending();

    if (pending)
            __do_softirq();

    local_irq_restore(flags);
}

void fastcall
prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state)
{
    UNIMPLEMENTED_NOASSERT();
}

unsigned long
__copy_to_user_ll(void *to, const void __user *from, unsigned long n)
{
  DEBUG_PRINT();
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
  DEBUG_PRINT();
    // XXX: are flags important here?
    return nsc_malloc(size);
}

#include <linux/init.h>
void __init do_initcalls(void)
{
    initcall_t *call;

    DEBUG_PRINT0();
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
  DEBUG_PRINT();
    __add_wait_queue(q, wait);
}

void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t * wait)
{
  DEBUG_PRINT();
    __add_wait_queue(q, wait);
}

signed long schedule_timeout(signed long timeout)
{
    UNIMPLEMENTED_NOASSERT();
    return 0;
}

void remove_wait_queue(wait_queue_head_t *q, wait_queue_t * wait)
{
  DEBUG_PRINT();
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
  DEBUG_PRINT();
    return 1; // 0 says module is not present
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

/**
 * ns_to_timespec - Convert nanoseconds to timespec
 * @nsec:       the nanoseconds value to be converted
 *
 * Returns the timespec representation of the nsec parameter.
 */
struct timespec ns_to_timespec(const s64 nsec)
{
    struct timespec ts;

    if (!nsec)
        return (struct timespec) {0, 0};

    ts.tv_sec = div_long_long_rem_signed(nsec, NSEC_PER_SEC, &ts.tv_nsec);
    if (unlikely(nsec < 0))
        set_normalized_timespec(&ts, ts.tv_sec, ts.tv_nsec);

    return ts;
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
  DEBUG_PRINT();
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

int __sched cond_resched_softirq(void)
{
	        return 0;
}

unsigned long nr_all_pages = 100000;

// Note: the below has been hacked up a bit to work. The '10000' numbers are COMPLETELY
// arbitrary and should probably be something else, but I'm not sure what.
 /*
  * allocate a large system hash table from bootmem
  * - it is assumed that the hash table must contain an exact power-of-2
  *   quantity of entries
  * - limit is the number of hash buckets, not the total allocation size
  */
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
    numentries = 1UL << (long_log2(numentries) + 1);

    /* limit allocation size to 1/16 total memory by default */
    if (max == 0) {
        max = ((unsigned long long)nr_all_pages << PAGE_SHIFT) >> 4;
        do_div(max, bucketsize);
    }

    if (numentries > max)
        numentries = max;

    log2qty = long_log2(numentries);

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

    printk("%s hash table entries: %d (order: %d, %lu bytes)\n",
            tablename,
            (1U << log2qty),
            long_log2(size) - PAGE_SHIFT,
            size);

    if (_hash_shift)
        *_hash_shift = log2qty;
    if (_hash_mask)
        *_hash_mask = (1 << log2qty) - 1;

    return table;
}

u32 secure_tcp_port_ephemeral(__u32 saddr, __u32 daddr, __u16 dport)
{
    UNIMPLEMENTED_NOASSERT();
    return 1234;
}

int capable (int cap)
{
	return 1;
}

int __capable (struct task_struct *t, int cap)
{
	return 1;
}

void put_page (struct page *page)
{
	return;
}

unsigned int hweight32 (unsigned int w)
{
        unsigned int res = w - ((w >> 1) & 0x55555555);
        res = (res & 0x33333333) + ((res >> 2) & 0x33333333);
        res = (res + (res >> 4)) & 0x0F0F0F0F;
        res = res + (res >> 8);
        return (res + (res >> 16)) & 0x000000FF;
}

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

void fastcall call_rcu (struct rcu_head *head,
			void (*func)(struct rcu_head *rcu))
{
  head->func = func;
  head->next = NULL;
  head->func(head);
}

void fastcall call_rcu_bh (struct rcu_head *head, 
			   void (*func)(struct rcu_head *rcu))
{
  head->func = func;
  head->next = NULL;
  head->func(head);
}

static long rcu_completed=-300;
static long rcu_bh_completed = -300;

long rcu_batches_completed(void)
{
  return rcu_completed;
}

long rcu_batches_completed_bh(void)
{
  return rcu_bh_completed;
}

void rcu_barrier (void)
{
}

int rcu_pending(int cpu)
{
  return 0; /* no immediate RCU-related work for current CPU */
}


int rcu_needs_cpu(int cpu)
{
  return 0; /* no future RCU-related work */
}

void rcu_check_callbacks (int cpu, int user)
{
}

void __init rcu_init (void)
{
  /* register_cpu_notifier? */
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

int fastcall schedule_work(struct work_struct *work)
{
  work->timer.function(work->timer.data);
  return 1;
}


static void delayed_work_timer_fn(unsigned long __data)
{
	(void) __data;
}

int fastcall schedule_delayed_work(struct work_struct *work, unsigned long delay)
{
  struct timer_list *timer = &work->timer;

  timer->expires = jiffies + delay;
  /* if this is not set, the next work queue timer
   * expiry causes segfault, because ->function callback is NULL */
  timer->function = delayed_work_timer_fn;
  add_timer(timer);
  return 1;
}

static u64 nsc_clock_ns=0;

int nsc_clock_update(void)
{
  nsc_clock_ns++;
  return 1;
}

u64 nsc_clock_read(void)
{
  u64 clock;
  static u64 old_jiffies=0;

  clock = jiffies*(1000000/CONFIG_HZ) + nsc_clock_ns;
  if (old_jiffies == jiffies)
    clock++;
  else
    old_jiffies = jiffies;
  return clock;
}

struct clocksource nsc_clocksource = {
	"nsc_clock",
	{NULL, NULL},
	400,
	nsc_clock_read,
	-1LL,
	1,
	0,
	nsc_clock_update,
	0,
	0, 0, 0, 0, 0
};

struct clocksource *clocksource_get_next(void)
{
  return &nsc_clocksource;
}

void softlockup_tick(void)
{
}

// The following are new as of Oct-12-07, will need some work yet
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

void __sched __cond_resched(void)
{
  UNIMPLEMENTED_NOASSERT();
}

int __sched cond_resched(void)
{
  UNIMPLEMENTED_NOASSERT();
  return 0;
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

/* This function is all we need to support cpusets for networking. It is used
 * to set the 'priority' field of a socket during socket creation; which in
 * turn is used during classification in the scheduling/queuing QoS code. */
int nsc_cpuset_netclass_id = (1 << 16) | 1; /* classid 1:1 */

int cpuset_netclass_id(void) 
{ 
  return nsc_cpuset_netclass_id;
}


void fastcall mutex_lock(struct mutex *lock)
{
  UNIMPLEMENTED_NOASSERT();
}

int fastcall mutex_trylock(struct mutex *lock)
{
  UNIMPLEMENTED_NOASSERT();
  return 0;
}

void fastcall mutex_unlock(struct mutex *lock)
{
  UNIMPLEMENTED_NOASSERT();
}


void hrtimer_run_queues(void)
{
  UNIMPLEMENTED_NOASSERT();
}

int sysdev_class_register(struct sysdev_class *class)
{
  UNIMPLEMENTED_NOASSERT();
  return 1;
}

int sysdev_register(struct sys_device *dev)
{
  UNIMPLEMENTED_NOASSERT();
  return 1;
}

int __printk_ratelimit(int ratelimit_jiffies, int ratelimit_burst)
{
  UNIMPLEMENTED_NOASSERT();
  return 1;
}

// I *think* the return convention for these functions is:
//
// "Returns 0 for success, otherwise, returns number of bytes not transferred."
//
// This is from examples of usage I found in arch/parisc/lib/memcpy.c. I'm not
// sure if this is documented anywhere else.
#ifdef __i386
unsigned long copy_from_user(void *to, const void __user *from, unsigned long n)
{
    memcpy(to, from, n);
    DEBUG_PRINT();
    return 0;
}

unsigned long copy_to_user(void __user *to, const void *from, unsigned long n)
{
  DEBUG_PRINT();
    memcpy(to, from, n);
    return 0;
}


#else
unsigned long copy_from_user(void *to, const void __user *from, unsigned n)
{
    memcpy(to, from, n);
    DEBUG_PRINT();
    return 0;
}

unsigned long copy_to_user(void __user *to, const void *from, unsigned n)
{
  DEBUG_PRINT();
    memcpy(to, from, n);
    return 0;
}

unsigned long copy_user_generic(void *to, const void *from, unsigned len)
{
    DEBUG_PRINT();
    memcpy(to, from, len);
    return 0;
}

#endif

