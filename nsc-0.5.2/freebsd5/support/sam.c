/*
 * Copyright (c) 1982, 1986, 1988, 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */
/* $Id$ */
/** This file contains lots of ugly hacks and stuff to make the first stage of
  initialisation work. The file name REALLY needs to change.
  */
#include <sys/param.h>
#include <sys/systm.h>
#include <sys/kernel.h>
#include <sys/exec.h>
#include <sys/file.h>
#include <sys/filedesc.h>
#include <sys/ktr.h>
#include <sys/lock.h>
#include <sys/mac.h>
#include <sys/mount.h>
#include <sys/mutex.h>
#include <sys/syscallsubr.h>
#include <sys/sysctl.h>
#include <sys/proc.h>
#include <sys/resourcevar.h>
#include <sys/systm.h>
#include <sys/signalvar.h>
#include <sys/vnode.h>
#include <sys/sysent.h>
#include <sys/reboot.h>
#include <sys/sched.h>
#include <sys/sx.h>
#include <sys/sysproto.h>
#include <sys/vmmeter.h>
#include <sys/unistd.h>
#include <sys/malloc.h>
#include <sys/conf.h>

#include <machine/cpu.h>

#include <vm/vm.h>
#include <vm/vm_param.h>
#include <vm/pmap.h>
#include <vm/vm_map.h>
#include <sys/user.h>

#include "support/support.h"

void
init386(int);

static struct session session0;
static struct pgrp pgrp0;
//struct	kse kse0;
struct	ksegrp ksegrp0;
//static struct procsig procsig0;
//static struct filedesc0 filedesc0;
static struct plimit limit0;
static struct vmspace vmspace0;
struct	proc *initproc;

int cmask = CMASK;

// Hax by Sam
static struct pstats p_stats; /** "Hax by Sam". I guess it is needed below. */

/** Stolen from the FreeBSD init code and modified heavily: stuff got commented
  out that made the program crash. Not much is left, and even some of the stuff
  left is probably not important at all. Oh well.
 */
void
proc0_init(void *dummy __unused)
{
	register struct proc		*p;
	register struct filedesc0	*fdp;
	register unsigned i;
	struct thread *td;
	struct ksegrp *kg;
	//struct kse *ke;

	init386(0);
	

	GIANT_REQUIRED;
	p = &proc0;
	td = &thread0;
	//ke = &kse0; // 5.3
	kg = &ksegrp0;
/*
	ke->ke_sched = kse0_sched;
	kg->kg_sched = ksegrp0_sched;
	p->p_sched = proc0_sched;
	td->td_sched = thread0_sched;*/

	/*
	 * Initialize magic number.
	 */
	p->p_magic = P_MAGIC;

	/*
	 * Initialize thread, process and pgrp structures.
	 */
	//procinit();
	//threadinit();


	/*
	 * Create process 0 (the swapper).
	 */
	/*LIST_INSERT_HEAD(&allproc, p, p_list);
	LIST_INSERT_HEAD(PIDHASH(0), p, p_hash);
	mtx_init(&pgrp0.pg_mtx, "process group", NULL, MTX_DEF | MTX_DUPOK);
	p->p_pgrp = &pgrp0;
	LIST_INSERT_HEAD(PGRPHASH(0), &pgrp0, pg_hash);
	LIST_INIT(&pgrp0.pg_members);
	LIST_INSERT_HEAD(&pgrp0.pg_members, p, p_pglist);

	pgrp0.pg_session = &session0;
	mtx_init(&session0.s_mtx, "session", NULL, MTX_DEF);
	session0.s_count = 1;
	session0.s_leader = p;*/

	//p->p_sysent = &null_sysvec;

	/*
	 * proc_linkup was already done in init_i386() or alphainit() etc.
	 * because the earlier code needed to follow td->td_proc. Otherwise
	 * I would have done it here.. maybe this means this should be
	 * done earlier too.
	 */
    // New:
    td->td_proc = &proc0;
    
	p->p_flag = P_SYSTEM;
	p->p_sflag = PS_INMEM;
	p->p_state = PRS_NORMAL;
	td->td_state = TDS_RUNNING;
//	kg->kg_nice = NZERO; // 5.3 change
	kg->kg_pri_class = PRI_TIMESHARE;
	kg->kg_user_pri = PUSER;
	td->td_priority = PVM;
	td->td_base_pri = PUSER;
	//td->td_kse = ke; /* XXXKSE */  // 5.3 change
	//ke->ke_oncpu = 0;
	//ke->ke_state = KES_THREAD;
	//ke->ke_thread = td;
	p->p_peers = 0;
	p->p_leader = p;


	bcopy("swapper", p->p_comm, sizeof ("swapper"));


	/* Create credentials. */
	p->p_ucred = crget();
	p->p_ucred->cr_ngroups = 1;	/* group 0 */
	//p->p_ucred->cr_uidinfo = uifind(0);
	//p->p_ucred->cr_ruidinfo = uifind(0);
	p->p_ucred->cr_prison = NULL;	/* Don't jail it. */
#ifdef MAC
	mac_create_proc0(p->p_ucred);
#endif
	td->td_ucred = crhold(p->p_ucred);

	/* Create procsig. */
	//p->p_procsig = &procsig0;
	//p->p_procsig->ps_refcnt = 1;

	/* Initialize signal state for process 0. */
	//siginit(&proc0);


	/* Create the limits structures. */
	/*p->p_limit = &limit0;
	for (i = 0; i < sizeof(p->p_rlimit)/sizeof(p->p_rlimit[0]); i++)
		limit0.pl_rlimit[i].rlim_cur =
		    limit0.pl_rlimit[i].rlim_max = RLIM_INFINITY;
	limit0.pl_rlimit[RLIMIT_NOFILE].rlim_cur =
	    limit0.pl_rlimit[RLIMIT_NOFILE].rlim_max = maxfiles;
	limit0.pl_rlimit[RLIMIT_NPROC].rlim_cur =
	    limit0.pl_rlimit[RLIMIT_NPROC].rlim_max = maxproc;
	i = ptoa(cnt.v_free_count);
	limit0.pl_rlimit[RLIMIT_RSS].rlim_max = i;
	limit0.pl_rlimit[RLIMIT_MEMLOCK].rlim_max = i;
	limit0.pl_rlimit[RLIMIT_MEMLOCK].rlim_cur = i / 3;
	limit0.p_refcnt = 1;
	p->p_cpulimit = RLIM_INFINITY;*/


	p->p_stats = &p_stats;
	/*
	 * Charge root for one process.
	 */
	//(void)chgproccnt(p->p_ucred->cr_ruidinfo, 1, 0);

	//PCPU_SET(curthread, &thread0);
//	curthread = thread0;
}
SYSINIT(p0init, SI_SUB_INTRINSIC, SI_ORDER_FIRST, proc0_init, NULL)



static struct pcpu *cpuid_to_pcpu[MAXCPU]; /** No idea... */
struct cpuhead cpuhead = SLIST_HEAD_INITIALIZER(cpuhead); /** Probably not used? */

/** Another function stolen with bits commented out so it works and doesn't
  crash. Again, I don't know if it is really needed, but its here anyway, and
  it works.
 */
void
ksegrp_link(struct ksegrp *kg, struct proc *p)
{

	TAILQ_INIT(&kg->kg_threads);
	TAILQ_INIT(&kg->kg_runq);	/* links with td_runq */
	TAILQ_INIT(&kg->kg_slpq);	/* links with td_runq */
	//TAILQ_INIT(&kg->kg_kseq);	/* all kses in ksegrp */ // 5.3 change
	//TAILQ_INIT(&kg->kg_iq);		/* idle kses in ksegrp */
	//TAILQ_INIT(&kg->kg_lq);		/* loan kses in ksegrp */
	kg->kg_proc	= p;
/* the following counters are in the -zero- section and may not need clearing */
	kg->kg_numthreads = 0;
	kg->kg_runnable = 0;
	//kg->kg_kses = 0;
	//kg->kg_idle_kses = 0;
	//kg->kg_loan_kses = 0;
	//kg->kg_runq_kses = 0; /* XXXKSE change name */
/* link it in now that it's consistent */
	p->p_numksegrps++;
	TAILQ_INSERT_HEAD(&p->p_ksegrps, kg, kg_ksegrp);
}

/**
 * KSE is linked onto the idle queue.
 */
void
kse_link(struct kse *ke, struct ksegrp *kg)
{
	struct proc *p = kg->kg_proc;

	//TAILQ_INSERT_HEAD(&kg->kg_kseq, ke, ke_kglist); // all commented out for 5.3
	/*kg->kg_kses++;
	ke->ke_state = KES_UNQUEUED;
	ke->ke_proc	= p;
	ke->ke_ksegrp	= kg;
	ke->ke_thread	= NULL;
	ke->ke_oncpu = NOCPU;*/
}

/**
 * Link a thread to a process.
 * set up anything that needs to be initialized for it to
 * be used by the process.
 *
 * Note that we do not link to the proc's ucred here.
 * The thread is linked as if running but no KSE assigned.
 */
void
thread_link(struct thread *td, struct ksegrp *kg)
{
	struct proc *p;

	p = kg->kg_proc;
	td->td_state = TDS_INACTIVE;
	td->td_proc	= p;
	td->td_ksegrp	= kg;
	//td->td_last_kse	= NULL;

	LIST_INIT(&td->td_contested);
	callout_init(&td->td_slpcallout, 1);
	TAILQ_INSERT_HEAD(&p->p_threads, td, td_plist);
	TAILQ_INSERT_HEAD(&kg->kg_threads, td, td_kglist);
	p->p_numthreads++;
	kg->kg_numthreads++;
	//td->td_kse	= NULL;
}



/**
 * for a newly created process,
 * link up a the structure and its initial threads etc.
 */
void
proc_linkup(struct proc *p, struct ksegrp *kg,
			struct thread *td)
{

	TAILQ_INIT(&p->p_ksegrps);	     /* all ksegrps in proc */
	TAILQ_INIT(&p->p_threads);	     /* all threads in proc */
	TAILQ_INIT(&p->p_suspended);	     /* Threads suspended */
	p->p_numksegrps = 0;
	p->p_numthreads = 0;

	ksegrp_link(kg, p);
//	kse_link(ke, kg);
	thread_link(td, kg);
}


	
/**
 * Initialize the MI portions of a struct pcpu.
 */
void
pcpu_init(struct pcpu *pcpu, int cpuid, size_t size)
{

	bzero(pcpu, size);
	KASSERT(cpuid >= 0 && cpuid < MAXCPU,
	    ("pcpu_init: invalid cpuid %d", cpuid));
	pcpu->pc_cpuid = cpuid;
	pcpu->pc_cpumask = 1 << cpuid;
	cpuid_to_pcpu[cpuid] = pcpu;
	SLIST_INSERT_HEAD(&cpuhead, pcpu, pc_allcpu);
	//cpu_pcpu_init(pcpu, cpuid, size);
}

struct pcpu __pcpu; /** Used init init386 and possibly other per-cpu stuff. */

/** Heavily modified version of the original init386 function. Things were
  commented out until it ran basically. Chances are, very little of this is
  important at all these days. I am not really sure though...
  */
void
init386(first)
	int first;
{
	struct gate_descriptor *gdp;
	int gsel_tss, metadata_missing, off, x;
	struct pcpu *pc;

	//proc0.p_uarea = proc0uarea;
	//thread0.td_kstack = proc0kstack;
	thread0.td_pcb = (struct pcb *)
	   (thread0.td_kstack + KSTACK_PAGES * PAGE_SIZE) - 1;
	//atdevbase = ISA_HOLE_START + KERNBASE;

	/*
 	 * This may be done better later if it gets more high level
 	 * components in it. If so just link td->td_proc here.
	 */
	//proc_linkup(&proc0, &ksegrp0, &kse0, &thread0);

/*	if (envmode == 1)
		kern_envp = static_env;
	else if (bootinfo.bi_envp)
		kern_envp = (caddr_t)bootinfo.bi_envp + KERNBASE;*/

	/* Init basic tunables, hz etc */
	//init_param1();

	pc = &__pcpu;

	pcpu_init(pc, 0, sizeof(struct pcpu));
	//PCPU_SET(prvspace, pc);
	//PCPU_SET(curthread, &thread0);

	// PCPU_SET is _horrible_. It does nasty stuff with segments and
	// offsets with assembler code. Yuck yuck yuck.
	pc->pc_curthread = &thread0;

	/*
	 * Initialize mutexes.
	 *
	 * icu_lock: in order to allow an interrupt to occur in a critical
	 * 	     section, to set pcpu->ipending (etc...) properly, we
	 *	     must be able to get the icu lock, so it can't be
	 *	     under witness.
	 */
	//mutex_init();
	//mtx_init(&clock_lock, "clk", NULL, MTX_SPIN | MTX_RECURSE);
	//mtx_init(&icu_lock, "icu", NULL, MTX_SPIN | MTX_NOWITNESS);


	/* setup proc 0's pcb */
	//thread0.td_pcb->pcb_flags = 0; /* XXXKSE */
//	thread0.td_pcb->pcb_cr3 = (int)IdlePTD;
//	thread0.td_pcb->pcb_ext = 0;
//	thread0.td_frame = &proc0_tf;
}

/** The following function normally copies data between kernel space and user
   space. In the Network Simulation Cradle, kernel space no longer exists so
   this function only really needs to do a simple memcpy and doesn't really
   need to worry about much.
 */
int
uiomove(void *cp, int n, struct uio *uio)
{
	struct thread *td = curthread;
	struct iovec *iov;
	u_int cnt;
	int error = 0;
	int save = 0;

	debugf("uiomove: cp:%p iov_base:%p n:%d iov_len:%d uio:%x segflg:%d\n", 
            cp, 
            uio->uio_iov->iov_base,
            n, uio->uio_iov->iov_len,
            uio, uio->uio_segflg);

	KASSERT(uio->uio_rw == UIO_READ || uio->uio_rw == UIO_WRITE,
	    ("uiomove: mode"));
	KASSERT(uio->uio_segflg != UIO_USERSPACE || uio->uio_td == curthread,
	    ("uiomove proc"));

	if (td) {
		//mtx_lock_spin(&sched_lock);
		//save = td->td_flags & TDF_DEADLKTREAT; // 5.3 change
		//td->td_flags |= TDF_DEADLKTREAT;
		//mtx_unlock_spin(&sched_lock);
	}

	while (n > 0 && uio->uio_resid) {
		iov = uio->uio_iov;
		cnt = iov->iov_len;
		if (cnt == 0) {
			uio->uio_iov++;
			uio->uio_iovcnt--;
			continue;
		}
		if (cnt > n)
			cnt = n;

		switch (uio->uio_segflg) {

		case UIO_USERSPACE:
			KASSERT(0, ("userspace")); // EDIT: by Sam
			if (uio->uio_rw == UIO_READ)
				bcopy(cp, iov->iov_base, cnt);
			else
				bcopy(iov->iov_base, cp, cnt);
			break;

		case UIO_SYSSPACE:
			if (uio->uio_rw == UIO_READ)
				bcopy(cp, iov->iov_base, cnt);
			else
				bcopy(iov->iov_base, cp, cnt);
			break;
		case UIO_NOCOPY:
			break;
		}
		iov->iov_base = (char *)iov->iov_base + cnt;
		iov->iov_len -= cnt;
		uio->uio_resid -= cnt;
		uio->uio_offset += cnt;
		cp = (char *)cp + cnt;
		n -= cnt;
	}
out:
	if (td && save == 0) {
		//mtx_lock_spin(&sched_lock);
		//td->td_flags &= ~TDF_DEADLKTREAT;
		//mtx_unlock_spin(&sched_lock);
	}
	return (error);
}

