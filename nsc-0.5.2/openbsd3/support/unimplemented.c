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
/* boottime
 * cdevsw
 * cfdata
 * alldevs
 * Xspllower
 * cpu_feature
 * curproc
 * delay
 * hostname
 * hostnamelen
 * hz
 * kernel_map
 * kmem_map
 * mblowat
 * mcllowat
 * mono_time
 * nchrdev
 * netisr
 * nmbclust
 * pentium_mhz
 * securelevel
 * splassert_ctl
 * tick
 * ticks
 * tk_nin
 * ttyin
 * unixdomain
 * uvm
 * uvmexp
 */
#include <sys/param.h>
#include <sys/systm.h>
#include <sys/proc.h>
 

#include <sys/signalvar.h>
#include <sys/resourcevar.h>
#include <sys/queue.h>
#include <sys/namei.h>
#include <sys/vnode.h>
#include <sys/event.h>
#include <sys/timeb.h>
#include <sys/times.h>
#include <sys/buf.h>
#include <sys/acct.h>
#include <sys/file.h>
#include <sys/kernel.h>
#include <sys/wait.h>
#include <sys/ktrace.h>
#include <sys/syslog.h>
#include <sys/stat.h>  
#include <sys/core.h>
#include <sys/malloc.h>
#include <sys/pool.h>
#include <sys/ioctl.h>
#include <sys/tty.h>
#include <sys/ptrace.h>
#include <sys/mount.h>
#include <sys/syscallargs.h>

#include <machine/cpu.h>

#include <uvm/uvm_extern.h>
#include <sys/user.h>

#include <uvm/uvm.h>

#include <sys/md5k.h>

#include <machine/db_machdep.h> 

#include <ddb/db_lex.h>
#include <ddb/db_sym.h>
#include <ddb/db_output.h>
#include <ddb/db_extern.h>
#include <ddb/db_command.h>

#define UNIMPLEMENTED()     assert(0);
#define UNIMPLEMENTED_NOASSERT() ;

// Prototypes:
int        falloc(struct proc *p, struct file **resultfp, int *resultfd);
void get_random_bytes(void *a, size_t b);
// 

void MD5Final(unsigned char a[16], MD5_CTX *b)
{
    UNIMPLEMENTED();
}

void MD5Init(MD5_CTX *a)
{
    UNIMPLEMENTED();
}

void MD5Update(MD5_CTX *a, unsigned char *b, unsigned int c)
{
    UNIMPLEMENTED();
}


int        addlog(const char *a, ...)
{
    UNIMPLEMENTED();
}


int         b_to_q(u_char *cp, int cc, struct clist *q)
{
    UNIMPLEMENTED();
}

int        clalloc(struct clist *a, int b, int c)
{
    UNIMPLEMENTED();
}

void      csignal(pid_t pgid, int signum, uid_t uid, uid_t euid)
{
    UNIMPLEMENTED();
}

int db_printf(const char *a, ...)
{
    UNIMPLEMENTED();
}

db_sym_t db_search_symbol(db_addr_t a, db_strategy_t b, db_expr_t *c)
{
    UNIMPLEMENTED();
}

void db_symbol_values(db_sym_t a, char **b, db_expr_t *c)
{
    UNIMPLEMENTED();
}

int        falloc(struct proc *p, struct file **resultfp, int *resultfd)
{
    UNIMPLEMENTED();
}

int        hzto(struct timeval *a)
{
    UNIMPLEMENTED();
}

int        kcopy(const void *a, void *b, size_t c)
{
    UNIMPLEMENTED();
}

void        klist_invalidate(struct klist *a)
{
    UNIMPLEMENTED();
}

int        ltsleep(void *chan, int pri, const char *wmesg, int timo, volatile struct simplelock *interlock)
{
    UNIMPLEMENTED();
}

void       ovbcopy(const void *a, void *b, size_t c)
{
    UNIMPLEMENTED();
}

void       preempt(struct proc *a)
{
    UNIMPLEMENTED();
}

int        ratecheck(struct timeval *a, const struct timeval *b)
{
    UNIMPLEMENTED();
}

void       selrecord(struct proc *selector, struct selinfo *b)
{
    UNIMPLEMENTED();
}

int        seltrue(dev_t dev, int which, struct proc *a)
{
    UNIMPLEMENTED();
}

void splassert_check(int a, const char *b)
{
    UNIMPLEMENTED();
}

size_t       strlcat(char *a, const char *b, size_t c)
{
    UNIMPLEMENTED();
}

int sysctl_rdint(void *a, size_t *b, void *c, int d)
{
    UNIMPLEMENTED();
}

int sysctl_rdstring(void *a, size_t *b, void *c, const char *d)
{
    UNIMPLEMENTED();
}

int sysctl_rdstruct(void *a, size_t *b, void *c, const void *d, int e)
{
    UNIMPLEMENTED();
}

int sysctl_struct(void *a, size_t *b, void *c, size_t d, void *e, int f)
{
    UNIMPLEMENTED();
}

int sysctl_tstring(void *a, size_t *b, void *c, size_t d, char *e, int f)
{
    UNIMPLEMENTED();
}

void        ttwakeup(struct tty *tp)
{
    UNIMPLEMENTED();
}

void        ttyflush(struct tty *tp, int rw)
{
    UNIMPLEMENTED();
}

int         ttysleep(struct tty *tp, void *chan, int pri, char *wmesg, int timo)
{
    UNIMPLEMENTED();
}

int         ttywflush(struct tty *tp)
{
    UNIMPLEMENTED();
}

int        tvtohz(struct timeval *a)
{
    UNIMPLEMENTED();
}

int         unputc(struct clist *q)
{
    UNIMPLEMENTED();
}

vaddr_t                    uvm_km_alloc_poolpage1(vm_map_t a, struct uvm_object *b, boolean_t c)
{
    UNIMPLEMENTED();
}

void                        uvm_km_free_poolpage1(vm_map_t a, vaddr_t b)
{
    UNIMPLEMENTED();
}

struct vm_map *uvm_km_suballoc(vm_map_t map, vaddr_t *min, vaddr_t *max, 
        vsize_t size, int flags, boolean_t fixed, struct vm_map *submap)
{
    UNIMPLEMENTED_NOASSERT();
    return NULL;
}

void       vdevgone(int a, int b, int c, enum vtype d)
{
    UNIMPLEMENTED();
}

void    wakeup_n(void *chan, int b)
{
    UNIMPLEMENTED();
}

void Xspllower(void)
{
    UNIMPLEMENTED();
}

void       clfree(struct clist *a)
{
    UNIMPLEMENTED();
}

void delay(int d)
{
    UNIMPLEMENTED();
}
