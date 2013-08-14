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
#include <sys/param.h>
#include <sys/filedesc.h>
#include <sys/file.h>
#include <sys/errno.h>
#include <sys/exec.h>
#include <sys/kernel.h>
#include <sys/kthread.h>
#include <sys/mount.h>
#include <sys/proc.h>
#include <sys/resourcevar.h>
#include <sys/signalvar.h>
#include <sys/systm.h>
#include <sys/namei.h>
#include <sys/vnode.h>
#include <sys/tty.h>
#include <sys/conf.h>
#include <sys/buf.h>
#include <sys/device.h>
#include <sys/socketvar.h>
#include <sys/lockf.h>
#include <sys/protosw.h>
#include <sys/reboot.h>
#include <sys/user.h>
#ifdef SYSVSHM
#include <sys/shm.h>
#endif
#ifdef SYSVSEM
#include <sys/sem.h>
#endif
#ifdef SYSVMSG
#include <sys/msg.h>
#endif
#include <sys/domain.h>
#include <sys/mbuf.h>
#include <sys/pipe.h>

#include <sys/syscall.h>
#include <sys/syscallargs.h>

#include <dev/rndvar.h>

#include <machine/cpu.h>

#include <uvm/uvm.h>

#include <net/if.h>
#include <net/raw_cb.h>

#if defined(CRYPTO)
#include <crypto/cryptodev.h>
#include <crypto/cryptosoft.h>
#endif

#include "support/nsc.h"
#include "sim_errno.h"

const char	copyright[] =
"Copyright (c) 1982, 1986, 1989, 1991, 1993\n"
"\tThe Regents of the University of California.  All rights reserved.\n"
"Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n";


struct	proc proc0;
struct pcred cred0;
struct ucred ucred0;
struct user proc0paddr;

extern int ticks;
//
#define UNIMPLEMENTED_NOASSERT() \
	nsc_debugf("%s:%d: Function %s unimplemented.\n", \
		__FILE__, __LINE__, __FUNCTION__);
// ------------------------------------------------------------------------
// function prototypes:
void enqueue_randomness(int a, int b);

// ------------------------------------------------------------------------

void nsc_init(int hz_)
{
    struct proc *p;
    /*struct pdevinit *pdev;*/
    struct timeval rtv;
    /*quad_t lim;*/
    int s;/*, i;*/
    /*register_t rval[2];*/
    /*extern struct pdevinit pdevinit[];*/
    extern void scheduler_start(void);
    extern void disk_init(void);
    extern void endtsleep(void *);
    extern void realitexpire(void *);

    hz = hz_;
    tick = 1000000 / hz;
    ticks = 1;

    /*
     * Initialize the current process pointer (curproc) before
     * any possible traps/probes to simplify trap processing.
     */
    curproc = p = &proc0;

    /*
     * Initialize timeouts.
     */
    timeout_startup();

    /*
     * Attempt to find console and initialize
     * in case of early panic or other messages.
     */
    /*config_init();*/		/* init autoconfiguration data structures */
    /*consinit();*/
    //printf("%s\n", copyright);

#if 0
    uvm_init();
    disk_init();		/* must come before autoconfiguration */
    tty_init();		/* initialise tty's */
    cpu_startup();
#endif

    /*
     * Initialize mbuf's.  Do this now because we might attempt to
     * allocate mbufs or mbuf clusters during autoconfiguration.
     */
    mbinit();

    /* Initalize sockets. */
    soinit();

    /* Initialize sysctls (must be done before any processes run) */
    /*sysctl_init();*/

    /*
     * Initialize process and pgrp structures.
     */
    /*procinit();*/

    /* Initialize file locking. */
    /*lf_init();*/

    /*
     * Initialize filedescriptors.
     */
    /*filedesc_init();*/

    /*
     * Initialize pipes.
     */
    /*pipe_init();*/

    /*
     * Create process 0 (the swapper).
     */
    /*LIST_INSERT_HEAD(&allproc, p, p_list);
    p->p_pgrp = &pgrp0;
    LIST_INSERT_HEAD(PIDHASH(0), p, p_hash);
    LIST_INSERT_HEAD(PGRPHASH(0), &pgrp0, pg_hash);
    LIST_INIT(&pgrp0.pg_members);
    LIST_INSERT_HEAD(&pgrp0.pg_members, p, p_pglist);

    pgrp0.pg_session = &session0;
    session0.s_count = 1;
    session0.s_leader = p;

    p->p_flag = P_INMEM | P_SYSTEM | P_NOCLDWAIT;
    p->p_stat = SRUN;
    p->p_nice = NZERO;
    p->p_emul = &emul_native;
    bcopy("swapper", p->p_comm, sizeof ("swapper"));*/

    /* Init timeouts. */
    /*timeout_set(&p->p_sleep_to, endtsleep, p);*/
    /*timeout_set(&p->p_realit_to, realitexpire, p);*/

    /* Create credentials. */
    cred0.p_refcnt = 1;
    // EDIT: p to curpoc.
    curproc->p_cred = &cred0;
    curproc->p_ucred = &ucred0; //crget();
    bzero(curproc->p_ucred, sizeof(struct ucred));
    curproc->p_ucred->cr_ngroups = 1;	/* group 0 */

    /* Initialize signal state for process 0. */
    /*signal_init();
    p->p_sigacts = &sigacts0;
    siginit(p);*/

    /* Create the file descriptor table. */
    /*p->p_fd = fdinit(NULL);*/

    /* Create the limits structures. */
    /*p->p_limit = &limit0;
    for (i = 0; i < sizeof(p->p_rlimit)/sizeof(p->p_rlimit[0]); i++)
        limit0.pl_rlimit[i].rlim_cur =
            limit0.pl_rlimit[i].rlim_max = RLIM_INFINITY;
    limit0.pl_rlimit[RLIMIT_NOFILE].rlim_cur = NOFILE;
    limit0.pl_rlimit[RLIMIT_NOFILE].rlim_max = MIN(NOFILE_MAX,
            (maxfiles - NOFILE > NOFILE) ?  maxfiles - NOFILE : NOFILE);
    limit0.pl_rlimit[RLIMIT_NPROC].rlim_cur = MAXUPRC;
    lim = ptoa(uvmexp.free);
    limit0.pl_rlimit[RLIMIT_RSS].rlim_max = lim;
    limit0.pl_rlimit[RLIMIT_MEMLOCK].rlim_max = lim;
    limit0.pl_rlimit[RLIMIT_MEMLOCK].rlim_cur = lim / 3;
    limit0.p_refcnt = 1;*/

    /* Allocate a prototype map so we have something to fork. */
    /*uvmspace_init(&vmspace0, pmap_kernel(), round_page(VM_MIN_ADDRESS),
            trunc_page(VM_MAX_ADDRESS), TRUE);
    p->p_vmspace = &vmspace0;
    */
    p->p_addr = &proc0paddr;				/* XXX */

    /*
     * We continue to place resource usage info in the
     * user struct so they're pageable.
     */
    p->p_stats = &p->p_addr->u_stats;

    /*
     * Charge root for one process.
     */
    /*(void)chgproccnt(0, 1);*/

    /* Initialize run queues */
    /*rqinit();*/

    /* Configure the devices */
    /*cpu_configure();*/

    /* Configure virtual memory system, set vm rlimits. */
    /*uvm_init_limits(p);*/

    /* Initialize the file systems. */
#if defined(NFSSERVER) || defined(NFSCLIENT)
    /*nfs_init();*/			/* initialize server/shared data */
#endif
    /*vfsinit();*/

    /* Start real time and statistics clocks. */
    /*initclocks();*/

#ifdef SYSVSHM
    /* Initialize System V style shared memory. */
    /*shminit();*/
#endif

#ifdef SYSVSEM
    /* Initialize System V style semaphores. */
    /*seminit();*/
#endif

#ifdef SYSVMSG
    /* Initialize System V style message queues. */
    /*msginit();*/
#endif

    /* Attach pseudo-devices. */
    /*randomattach();
    for (pdev = pdevinit; pdev->pdev_attach != NULL; pdev++)
        if (pdev->pdev_count > 0)
            (*pdev->pdev_attach)(pdev->pdev_count);*/

#ifdef CRYPTO
    swcr_init();
#endif /* CRYPTO */

    /*
     * Initialize protocols.  Block reception of incoming packets
     * until everything is ready.
     */
    s = splimp();
    ifinit();
    domaininit();
    if_attachdomain();
    splx(s);

#ifdef GPROF
    /* Initialize kernel profiling. */
    kmstartup();
#endif

#if !defined(NO_PROPOLICE)
    /*arc4random_bytes(__guard, sizeof(__guard));*/
#endif

    /* init exec and emul */
    /*init_exec();*/

    /* Start the scheduler */
    /*scheduler_start();*/

    dostartuphooks();

    /* Configure root/swap devices */
    /*if (md_diskconf)
        (*md_diskconf)();*/

    /* Mount the root file system. */
    /*if (vfs_mountroot())
        panic("cannot mount root");
    CIRCLEQ_FIRST(&mountlist)->mnt_flag |= MNT_ROOTFS;*/

    /* Get the vnode for '/'.  Set p->p_fd->fd_cdir to reference it. */
    /*if (VFS_ROOT(mountlist.cqh_first, &rootvnode))
        panic("cannot find root vnode");
    p->p_fd->fd_cdir = rootvnode;
    VREF(p->p_fd->fd_cdir);
    VOP_UNLOCK(rootvnode, 0, p);
    p->p_fd->fd_rdir = NULL;*/

    /*uvm_swap_init();*/

    /*
     * Now can look at time, having had a chance to verify the time
     * from the file system.  Reset p->p_rtime as it may have been
     * munched in mi_switch() after the time got set.
     */
    /*p->p_stats->p_start = runtime = mono_time = boottime = time;
    p->p_rtime.tv_sec = p->p_rtime.tv_usec = 0;*/
#if 0
    /* Create process 1 (init(8)). */
    if (fork1(p, SIGCHLD, FORK_FORK, NULL, 0, start_init, NULL, rval))
        panic("fork init");

    /* Create process 2, the pageout daemon kernel thread. */
    if (kthread_create(uvm_pageout, NULL, NULL, "pagedaemon"))
        panic("fork pagedaemon");

    /* Create process 3, the reaper daemon kernel thread. */
    if (kthread_create(start_reaper, NULL, NULL, "reaper"))
        panic("fork reaper");

    /* Create process 4, the cleaner daemon kernel thread. */
    if (kthread_create(start_cleaner, NULL, NULL, "cleaner"))
        panic("fork cleaner");

    /* Create process 5, the update daemon kernel thread. */
    if (kthread_create(start_update, NULL, NULL, "update"))
        panic("fork update");

    /* Create process 6, the aiodone daemon kernel thread. */ 
    if (kthread_create(uvm_aiodone_daemon, NULL, NULL, "aiodoned"))
        panic("fork aiodoned");

#ifdef CRYPTO
    /* Create process 7, the crypto kernel thread. */
    if (kthread_create(start_crypto, NULL, NULL, "crypto"))
        panic("crypto thread");
#endif /* CRYPTO */

    /* Create any other deferred kernel threads. */
    kthread_run_deferred_queue();
#endif

    microtime(&rtv);
    srandom((u_long)(rtv.tv_sec ^ rtv.tv_usec));

    /*randompid = 1;*/
    /* The scheduler is an infinite loop. */
    /*uvm_scheduler();*/
    /* NOTREACHED */
}

struct pool_allocator pool_allocator_nointr;/* = {
	pool_page_alloc_nointr, pool_page_free_nointr, 0,
};*/

/*
 * Initialize the given pool resource structure.
 *
 * We export this routine to allow other kernel parts to declare
 * static pools that must be initialized before malloc() is available.
 */
void
pool_init(struct pool *pp, size_t size, u_int align, u_int ioff, int flags,
    const char *wchan, struct pool_allocator *palloc)
{
    pp->pr_size = size;
}

/*
 * De-commision a pool resource.
 */
void
pool_destroy(struct pool *pp)
{
    // TODO ?
}

/*
 * Grab an item from the pool; must be called at appropriate spl level
 */
void *
#ifdef POOL_DIAGNOSTIC
_pool_get(struct pool *pp, int flags, const char *file, long line)
#else
pool_get(struct pool *pp, int flags)
#endif
{
    void *m = nsc_malloc(pp->pr_size);
    return m;
}

void
pool_put(struct pool *pp, void *v)
{
    nsc_free(v);
}

void
pool_set_drain_hook(struct pool *pp, void (*fn)(void *, int), void *arg)
{
	/* XXX no locking -- must be used just after pool_init() */
#ifdef DIAGNOSTIC
	if (pp->pr_drain_hook != NULL)
		panic("pool_set_drain_hook(%s): already set", pp->pr_wchan);
#endif
	pp->pr_drain_hook = fn;
	pp->pr_drain_hook_arg = arg;
}

int
pool_sethardlimit(struct pool *pp, unsigned n, const char *warnmess, int ratecap)
{
    return 0;
}

void
pool_setlowat(struct pool *pp, int n)
{
}

void
pool_sethiwat(struct pool *pp, int n)
{
}

u_int32_t arc4random(void)
{
    return nsc_random();
}

size_t strlcpy(char *dst, const char *src, size_t c)
{
    int slen = strlen(src);

    if( slen + 1 <= c ) {
        strcpy(dst, src);
        return slen;
    }

    assert(0);
    return 0;
}

void microtime(struct timeval *a)
{
    // TODO: hrm. Do we really need this?
    UNIMPLEMENTED_NOASSERT();
}

void       selwakeup(struct selinfo *a)
{
    nsc_wakeup();
}

void        knote(struct klist *list, long hint)
{
    UNIMPLEMENTED_NOASSERT();
}

void get_random_bytes(void *a, size_t b)
{
    for(; b; --b) {
        ((unsigned char *)a)[b-1] = (unsigned char)(nsc_random() % 255);
    }
}

int        copyin(const void *a, void *b, size_t c)
{
    memcpy(b, a, c);
    return 0;
}

int        copyout(const void *a, void *b, size_t c)
{
    memcpy(b, a, c);
    return 0;
}

void    wakeup(void *chan)
{
    nsc_wakeup();
}

int                suser(struct proc *p, u_int flags)
{
    return 0; // Makes us root
}

void enqueue_randomness(int a, int b)
{
    UNIMPLEMENTED_NOASSERT();
}

int ppsratecheck(struct timeval *lasttime, int *curpps, int maxpps)
{
    UNIMPLEMENTED_NOASSERT();
    return 0; // Never drop the packet due to ppsratecheck
}


#include <net/netisr.h>
extern int ticks;
int netisr;

void netintr(void);

void
netintr()
{       
#define DONETISR(bit, fn) \
        do { \
                if (netisr & (1 << (bit))) { \
                        netisr &= ~(1 << (bit)); \
                        (fn)(); \
                } \
        } while (0) 
#include <net/netisr_dispatch.h>
#undef  DONETISR        
}                       

void       log(int a, const char *b, ...)
{
    UNIMPLEMENTED_NOASSERT();
    nsc_debugf(b);
}

void nsc_timer_interrupt()
{
    // The only important thing hardclock would do for us:
    ticks++;
    
    if(timeout_hardclock_update())
        softclock();

    netintr();
}

int nsc_get_ticks(void)
{
    return ticks;
}

int nsc_get_hz(void)
{
    return hz;
}

#include <sys/sysctl.h>
#include <sys/mount.h>
#include <dev/rndvar.h>

#include <net/route.h>
#include <net/if.h>
#include <netinet/in.h>
#include <netinet/in_systm.h>
#include <netinet/ip.h>
#include <netinet/ip_var.h>
#include <netinet/ip_icmp.h>
#include <netinet/tcp.h>
#include <netinet/tcp_fsm.h>
#include <netinet/tcp_seq.h>
#include <netinet/tcp_timer.h>
#include <netinet/tcp_var.h>
int nsc_sysctl(const char *sysctl_name, void *oldval, size_t *oldlenp,
        void *newval, size_t newlen)
{
    register_t retval;
    int name[CTL_MAXNAME], nlen = 0, err = 0;
    const char *s = sysctl_name;
    sysctlfn *fn;
    
    do {
        if(s[0] == '/') s++;

        if(strncmp(s, "net/", 4) == 0) {
            fn = net_sysctl;
        } else if(strncmp(s, "inet/", 5) == 0) {
            name[nlen++] = AF_INET;
        } else if(strncmp(s, "tcp/", 4) == 0) {
            name[nlen++] = IPPROTO_TCP;
        } else if(strncmp(s, "sack", 4) == 0) {
            name[nlen++] = TCPCTL_SACK;
        } else if(strncmp(s, "sendspace", 8) == 0) {
            name[nlen++] = TCPCTL_SENDSPACE;
        } else if(strncmp(s, "recvspace", 8) == 0) {
            name[nlen++] = TCPCTL_RECVSPACE;
        }
    } while( (s = strchr(s, '/')) );

    if(!fn)
        return -1;

    err = (*fn)(name, nlen, oldval, oldlenp, newval, newlen, curproc);
    return err;
}

/*
 * Validate parameters and get old / set new parameters
 * for an integer-valued sysctl function.
 */
int
sysctl_int(oldp, oldlenp, newp, newlen, valp)
	void *oldp;
	size_t *oldlenp;
	void *newp;
	size_t newlen;
	int *valp;
{
	int error = 0;

	if (oldp && *oldlenp < sizeof(int))
		return (ENOMEM);
	if (newp && newlen != sizeof(int))
		return (EINVAL);
	*oldlenp = sizeof(int);
	if (oldp)
		error = copyout(valp, oldp, sizeof(int));
	if (error == 0 && newp)
		error = copyin(newp, valp, sizeof(int));
	return (error);
}


int sysctl_int_arr(valpp, name, namelen, oldp, oldlenp, newp, newlen)
	int **valpp;
	int *name;
	u_int namelen;
	void *oldp;
	size_t *oldlenp;
	void *newp;
	size_t newlen;
{
    if (namelen > 1)
        return (ENOTDIR);
    if (name[0] < 0 || valpp[name[0]] == NULL)
        return (EOPNOTSUPP);
    return (sysctl_int(oldp, oldlenp, newp, newlen, valpp[name[0]]));
}


int nsc_convert_syserr_to_nscerr(int syserr)
{
/*
 * we assume 0 is a success indicator that doesn't require any mapping.
 * NSC_E* constants are always < 0.
 */
	if (syserr == 0)
		return syserr;

	switch (syserr) {
	case ERESTART: // fallthrough
	case EAGAIN: return NSC_EAGAIN;
	case EADDRINUSE: return NSC_EADDRINUSE;
	case EADDRNOTAVAIL: return NSC_EADDRNOTAVAIL;
	case EALREADY: return NSC_EALREADY;
	case ECONNREFUSED: return NSC_ECONNREFUSED;
	case ECONNRESET: return NSC_ECONNRESET;
	case EHOSTDOWN: return NSC_EHOSTDOWN;
	case EHOSTUNREACH: return NSC_EHOSTUNREACH;
	case EINPROGRESS: return NSC_EINPROGRESS;
	case EISCONN: return NSC_EISCONN;
	case EMSGSIZE: return NSC_EMSGSIZE;
	case ENETUNREACH: return NSC_ENETUNREACH;
	case ENOTCONN: return NSC_ENOTCONN;
	case ESHUTDOWN: return NSC_ESHUTDOWN;
	case ETIMEDOUT: return NSC_ETIMEDOUT;
        case EISDIR: return NSC_ENOTDIR;
	/* Error conditions that we should never see */
	case EPROTONOSUPPORT:
	case EDESTADDRREQ:
	case EPROTOTYPE:
	case ENOBUFS:
		assert(0);
	}

	printf("%s: Unhandled error number %d\n", __func__, syserr);
	return NSC_EUNKNOWN;
}

