/*
  Network Simulation Cradle
  Copyright (C) 2003-2008 Sam Jansen

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
/* $Id: implemented.c 1018 2006-01-16 05:26:00Z stj2 $ */
/* Functions that have a body, whether empty or fully implemented. Functions
 * move from stub.c into implemented.c when they are required for operation. 
 */
#include <sys/param.h>
#include <sys/systm.h>
#include <sys/mac.h>
#include <sys/mbuf.h>
#include <sys/malloc.h>
#include <sys/domain.h>
#include <sys/protosw.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/kernel.h>
#include <sys/syslog.h>
#include <sys/sysctl.h>
#include <sys/bus.h>
#include <sys/interrupt.h>
#include <sys/random.h>
#include <sys/event.h>
#include <sys/ucred.h>
#include <sys/lock.h>
#include <sys/mutex.h>
#include <sys/bio.h>
#include <sys/namei.h>


#include <machine/stdarg.h>

#include <vm/vm.h>
#include <vm/vm_object.h>
#include <vm/vm_page.h>
#include <vm/vm_param.h>
#include <vm/vm_map.h>
#include <vm/vm_kern.h>
#include <vm/vm_extern.h>
#include <vm/vm_kern.h>
#include <vm/uma.h>
#include <vm/uma_int.h>
#include <vm/uma_dbg.h>

#include <sys/resourcevar.h>
#include <sys/limits.h>
#include <crypto/blowfish/blowfish.h>

#include "support/support.h"

extern int nsc_random();
extern void nsc_assert();
extern void nsc_wakeup();

struct linesw;
struct ipsecrequest;
struct selinfo;
struct sigio;

// --------------------------------------------------------------------------
// All functions at the top of this file are partially or fully implemented
// --------------------------------------------------------------------------

/**
 * "Return an integer value from an environment variable."
 *
 * @todo: Consider implementing this function.
 * Note that implementing this function would make it possible to set up
 * kernel vars easily. For example, this gets called with kern.hz as a
 * parameter, so we could use it to set up the hz value without having to
 * modify kern/subr_param.c all the time.
 */
int getenv_int(const char *name, int *data)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

/*
 * Shortcut to hide contents of struct td and struct proc from the
 * caller, promoting binary compatibility.
 */
int suser(struct thread *td)
{
  UNIMPLEMENED_NOASSERT();
  // Returning 0 here means we are the super-user
  return 0;
}

int resource_string_value(const char *name, int unit, const char *resname,
    const char **result)
{
  UNIMPLEMENED_NOASSERT();
  return (int)1;
}

/*
 * err = resource_find_dev(&anchor, name, &unit, res, value);
 * Iterate through a list of devices, returning their unit numbers.
 * res and value are optional restrictions.  eg: "at", "scbus0".
 * *unit is set to the value.
 * set *anchor to zero before starting.
 */
int resource_find_dev(int *anchor, const char *name, int *unit,
    const char *resname, const char *value)
{
  UNIMPLEMENED_NOASSERT();
  return (int)1;
}

/*
 * Kernel version which takes radix argument vsnprintf(3).
 */
int vsnrprintf(char *str, size_t size, int radix, const char *format, 
    va_list ap)
{
  UNIMPLEMENED_NOASSERT();
  return 1;
}

/*
 * Change the total socket buffer size a user has used.
 */
int chgsbsize(struct  uidinfo *uip, u_int* hiwat, u_int to, rlim_t  max)
{
  UNIMPLEMENED_NOASSERT();
  /*	
        rlim_t new;
        int s;

        s = splnet();
        UIDINFO_LOCK(uip);
        new = uip->ui_sbsize + to - *hiwat;
  // don't allow them to exceed max, but allow subtraction
  if (to > *hiwat && new > max) {
  splx(s);
  UIDINFO_UNLOCK(uip);
  return (0);
  }
  uip->ui_sbsize = new;*/
  *hiwat = to;
  /*if (uip->ui_sbsize < 0)
    printf("negative sbsize for uid = %d\n", uip->ui_uid);
    splx(s);
    UIDINFO_UNLOCK(uip);*/
  return (1);
}

u_long random(void) 
{
  return nsc_random();
}

int read_random(void *buf, int count)
{
  unsigned int* int_buf = (unsigned int*)buf;
  unsigned char* uc_buf = (unsigned char*)buf;

  int i, j;

  for(i = 0; i < count; i += sizeof(int)) {
    if(count - i < sizeof(int)) {
      for(j = 0; j < count - i; j++)
        uc_buf[i + j] = (unsigned char)(nsc_random() % 256);
    } else
      int_buf[i >> 2] = nsc_random();
  }
  return count;
}

void panic(const char *fmt,...)
{
  va_list ap;
  char p[256];
  va_start(ap, fmt);
  vsnprintf(p, 256, fmt, ap);
  va_end(ap);
  printf("PANIC: %s\n", p);

  assert(0);
  while(1) ;
}

void nsc_log(int a, const char *b, ...) 
{
  printf("log: '%s'\n", b);
}


/*
 * Scaled down version of printf(3).
 *
 * Two additional formats:
 *
 * The format %b is supported to decode error registers.
 * Its usage is:
 *
 *      printf("reg=%b\n", regval, "<base><arg>*");
 *
 * where <base> is the output base expressed as a control character, e.g.
 * \10 gives octal; \20 gives hex.  Each arg is a sequence of characters,
 * the first of which gives the bit number to be inspected (origin 1), and
 * the next characters (up to a control character, i.e. a character <= 32),
 * give the name of the register.  Thus:
 *
 *      kvprintf("reg=%b\n", 3, "\10\2BITTWO\1BITONE\n");
 *
 * would produce output:
 *
 *      reg=3<BITTWO,BITONE>
 *
 * XXX:  %D  -- Hexdump, takes pointer and separator string:
 *              ("%6D", ptr, ":")   -> XX:XX:XX:XX:XX:XX
 *              ("%*D", len, ptr, " " -> XX XX XX XX ...
 */
int kvprintf(char const *fmt, void (*func)(int, void*), void *arg, int radix, 
    va_list ap)
{
  printf("kvprintf: %s\n", fmt);
  return (int)NULL;
}

/*
 * Claim another reference to a ucred structure.
 */
struct ucred *crhold(struct ucred *cr)
{
  cr->cr_ref++;
  mtx_unlock(cr->cr_mtxp);
  return (cr);
}

/*
 * Allocate a zeroed cred structure.
 */
static MALLOC_DEFINE(M_CRED, "cred", "credentials");

struct ucred *crget(void)
{
  register struct ucred *cr;

  MALLOC(cr, struct ucred *, sizeof(*cr), M_CRED, M_WAITOK | M_ZERO);
  cr->cr_ref = 1;
  cr->cr_mtxp = mtx_pool_find(mtxpool_sleep, cr);
#ifdef MAC
  mac_init_cred(cr);
#endif
  return (cr);
}

void uma_zfree_arg(uma_zone_t zone, void *item, void *udata)
{
  if(zone->uz_dtor)
    zone->uz_dtor(item, zone->uz_keg->uk_size, udata);

  if(zone->uz_fini)
    zone->uz_fini(item, zone->uz_keg->uk_size);

  free(((unsigned char *)item) - 4, 0);
}

uma_zone_t uma_zcreate(char *name, size_t size, uma_ctor ctor, uma_dtor dtor,
    uma_init uminit, uma_fini fini, int align, u_int16_t flags)
{
  uma_zone_t zone = (uma_zone_t)malloc(sizeof(struct uma_zone),0,0);
  zone->uz_keg = (uma_keg_t)malloc(sizeof(struct uma_keg),0,0);

  debugf("Creating uma zone '%s' (size=%d)\n", name, size);

  zone->uz_name = name;
  zone->uz_ctor = ctor;
  zone->uz_dtor = dtor;
  zone->uz_init = uminit;
  zone->uz_fini = fini;

  zone->uz_keg->uk_size = size;
  zone->uz_keg->uk_align = align;
  zone->uz_keg->uk_flags = flags;

  return zone;
}

uma_zone_t uma_zsecond_create(char *name, uma_ctor ctor, uma_dtor dtor,
    uma_init zinit, uma_fini zfini, uma_zone_t master)
{
  uma_zone_t zone = (uma_zone_t)malloc(sizeof(struct uma_zone),0,0);

  zone->uz_keg = master->uz_keg;

  zone->uz_name = name;
  zone->uz_ctor = ctor;
  zone->uz_dtor = dtor;
  zone->uz_init = zinit;
  zone->uz_fini = zfini;

  return zone;
}

void *uma_zalloc_arg(uma_zone_t zone, void *udata, int flags)
{
  unsigned char *m = NULL;
  unsigned int size = zone->uz_keg->uk_size;

  debugf("Allocating %u bytes in %s. zone='%s' (%s:%d) ", 
      size, __FUNCTION__,
      zone->uz_name,
      __FILE__,__LINE__);

  m = (unsigned char *)malloc(size + 4, 0, flags);
  m += 4;
  assert(m);

  debugf("= %p\n", m);

  if(zone->uz_init)
    zone->uz_init(m, size, flags);
  if(zone->uz_ctor)
    zone->uz_ctor(m, size, udata, flags);
  if(flags & M_ZERO)
    bzero(m, size);

  return m;
}

u_int32_t *uma_find_refcnt(uma_zone_t zone, void *item)
{
  unsigned char *m = (unsigned char *)item;
  return (u_int32_t *)(m - 4);
}

/*
 * The important part of mtx_trylock{,_flags}()
 * Tries to acquire lock `m.' We do NOT handle recursion here.  If this
 * function is called on a recursed mutex, it will return failure and
 * will not recursively acquire the lock.  You are expected to know what
 * you are doing.
 */
int _mtx_trylock(struct mtx *m, int opts, const char *file, int line)
{
  UNIMPLEMENED_NOASSERT();
  // XXX: What is reasonable to return here?
  // Kinda hard to figure out, it is the result of _obtain_lock which
  // is just a list of some assembler. Lovely.
  return 1;
}

/*
 * General routine to allocate a hash table.
 */
void *hashinit(int elements, struct malloc_type *type, u_long *hashmask)
{
  long hashsize;
  LIST_HEAD(generic, generic) *hashtbl;
  int i;

  if (elements <= 0)
    panic("hashinit: bad elements");
  for (hashsize = 1; hashsize <= elements; hashsize <<= 1)
    continue;
  hashsize >>= 1;
  hashtbl = malloc((u_long)hashsize * sizeof(*hashtbl), type, M_WAITOK);
  for (i = 0; i < hashsize; i++)
    LIST_INIT(&hashtbl[i]);
  *hashmask = hashsize - 1;
  return (hashtbl);
}

/*
 * ldisc_register: Register a line discipline.
 *
 * discipline: Index for discipline to load, or LDISC_LOAD for us to choose.
 * linesw_p:   Pointer to linesw_p.
 *
 * Returns: Index used or -1 on failure.
 */
int ldisc_register(int discipline, struct linesw *linesw_p)
{
  UNIMPLEMENED_NOASSERT();
  return (int)-1;
}

/*
 * Compute number of ticks in the specified amount of time.
 */
int tvtohz(struct timeval *tv)
{
  register unsigned long ticks;
  register long sec, usec;

  /*
   * If the number of usecs in the whole seconds part of the time
   * difference fits in a long, then the total number of usecs will
   * fit in an unsigned long.  Compute the total and convert it to
   * ticks, rounding up and adding 1 to allow for the current tick
   * to expire.  Rounding also depends on unsigned long arithmetic
   * to avoid overflow.
   *
   * Otherwise, if the number of ticks in the whole seconds part of
   * the time difference fits in a long, then convert the parts to
   * ticks separately and add, using similar rounding methods and
   * overflow avoidance.  This method would work in the previous
   * case but it is slightly slower and assumes that hz is integral.
   *
   * Otherwise, round the time difference down to the maximum
   * representable value.
   *
   * If ints have 32 bits, then the maximum value for any timeout in
   * 10ms ticks is 248 days.
   */
  sec = tv->tv_sec;
  usec = tv->tv_usec;
  if (usec < 0) {
    sec--;
    usec += 1000000;
  }
  if (sec < 0) {
#ifdef DIAGNOSTIC
    if (usec > 0) {
      sec++;
      usec -= 1000000;
    }
    printf("tvotohz: negative time difference %ld sec %ld usec\n",
        sec, usec);
#endif
    ticks = 1;
  } else if (sec <= LONG_MAX / 1000000)
    ticks = (sec * 1000000 + (unsigned long)usec + (tick - 1))
      / tick + 1;
  else if (sec <= LONG_MAX / hz)
    ticks = sec * hz
      + ((unsigned long)usec + (tick - 1)) / tick + 1;
  else
    ticks = LONG_MAX;
  if (ticks > INT_MAX)
    ticks = INT_MAX;
  return ((int)ticks);
}


/*
 * Make all processes sleeping on the specified identifier runnable.
 */
void wakeup(register void *ident)
{
  nsc_wakeup(ident);
}

/*
 * Make a process sleeping on the specified identifier runnable.
 * May wake more than one process if a target process is currently
 * swapped out.
 */
void wakeup_one(register void *ident)
{
  nsc_wakeup(ident);
}

vm_offset_t kmem_malloc(vm_map_t map, vm_size_t size, int flags)
{
  vm_offset_t ptr;
  UNIMPLEMENED_NOASSERT();

  ptr = (vm_offset_t)malloc(size, 0, flags);

  return ptr;
}

void timer_expire(void *cc)
{
  struct callout *c = (struct callout *)cc;

  c->c_flags &= ~CALLOUT_PENDING;

  if(c->c_func) {
    c->c_func(c->c_arg);
  }
}

// --------------------------------------------------------------------------
// All functions below are non-void empty stubs, returning 0
// --------------------------------------------------------------------------

const struct ah_algorithm *ah_algorithm_lookup(int idx)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

/*
 * compute AH header size.
 * transport mode only.  for tunnel mode, we should implement
 * virtual interface, and control MTU/MSS by the interface MTU.
 */
size_t ah_hdrsiz(struct ipsecrequest *isr)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

/*
 * Fill in the Authentication Header and calculate checksum.
 */
int ah6_output(struct mbuf *m, u_char *nexthdrp, struct mbuf *md,
    struct ipsecrequest *isr)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

/*
 * Modify the packet so that it includes the authentication data.
 * The mbuf passed must start with IPv4 header.
 *
 * assumes that the first mbuf contains IPv4 header + option only.
 * the function does not modify m.
 */
int ah4_output(struct mbuf *m, struct ipsecrequest *isr)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

int knlist_empty(struct knlist *knl)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

/*
 * Create a kernel process/thread/whatever.  It shares its address space
 * with proc0 - ie: kernel only.
 *
 * func is the function to start.
 * arg is the parameter to pass to function on first startup.
 * newpp is the return value pointing to the thread's struct proc.
 * flags are flags to fork1 (in unistd.h)
 * fmt and following will be *printf'd into (*newpp)->p_comm (for ps, etc.).
 */
int kthread_create(void (*func)(void *), void *arg,
    struct proc **newpp, int flags, int pages, const char *fmt, ...)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

/*
 * Return a quad_t value from an environment variable.
 */
int getenv_quad(const char *name, quad_t *data)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

int ttykqfilter(struct cdev *dev, struct knote *kn)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

int ttywrite(struct cdev *dev, struct uio *uio, int flag)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

int ttyread(struct cdev *dev, struct uio *uio, int flag)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

int ttypoll(struct cdev *dev, int events, struct thread *td)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

int ttyioctl(struct cdev *dev, u_long cmd, caddr_t data, int flag, 
    struct thread *td)       
{
  UNIMPLEMENED_NOASSERT();
  return 0;   
}

/*
 * Return the current (soft) limit for a particular system resource.
 * The which parameter which specifies the index into the rlimit array
 */
rlim_t lim_cur(struct proc *p, int which)
{
  UNIMPLEMENED_NOASSERT();
  return RLIM_INFINITY;
}

int namei(struct nameidata *ndp)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

int vn_lock(struct vnode *vp, int flags, struct thread *td)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

int change_dir(struct vnode *vp, struct thread *td)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

int change_root(struct vnode *vp, struct thread *td)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

int securelevel_gt(struct ucred *cr, int level)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

int useracc(void *a, int b, int c)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

int vslock(void *a, size_t b)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

/*-
 * Determine if u1 "can see" the subject specified by u2.
 * Returns: 0 for permitted, an errno value otherwise
 * Locks: none
 * References: *u1 and *u2 must not change during the call
 *             u1 may equal u2, in which case only one reference is required
 */
int cr_cansee(struct ucred *u1, struct ucred *u2)
{
  UNIMPLEMENED_NOASSERT();
  return 0;
}

// --------------------------------------------------------------------------
// All functions below are empty stubs, returning void
// --------------------------------------------------------------------------

void _mtx_lock_flags(struct mtx *m, int opts, const char *file, int line)
{
  UNIMPLEMENED_NOASSERT();
}

void _mtx_unlock_flags(struct mtx *m, int opts, const char *file, int line)
{
  UNIMPLEMENED_NOASSERT();
}

void _mtx_lock_spin(struct mtx *m, struct thread *td, int opts, 
    const char *file, int line)
{
  UNIMPLEMENED_NOASSERT();
}

void _mtx_lock_spin_flags(struct mtx *m, int opts, const char *file, int line)
{
  UNIMPLEMENED_NOASSERT();
}

void _mtx_unlock_spin_flags(struct mtx *m, int opts, const char *file, int line)
{
  UNIMPLEMENED_NOASSERT();
}

void _mtx_unlock_sleep(struct mtx *m, int opts, const char *file, int line)
{
  UNIMPLEMENED_NOASSERT();
}

/*
 * _mtx_lock_sleep: the tougher part of acquiring an MTX_DEF lock.
 *
 * We call this if the lock is either contested (i.e. we need to go to
 * sleep waiting for it), or if we need to recurse on it.
 */
void _mtx_lock_sleep(struct mtx *m, struct thread *td, int opts, 
    const char *file, int line)
{
  UNIMPLEMENED_NOASSERT();
}

void mtx_destroy(struct mtx *m)
{
  UNIMPLEMENED_NOASSERT();
}

void mtx_init(struct mtx *m, const char *name, const char *type, int opts)
{
  UNIMPLEMENED_NOASSERT();
}

void uma_zone_set_max(uma_zone_t zone, int nitems)
{
  UNIMPLEMENED_NOASSERT();
}

/*
 * walk down a list of knotes, activating them if their event has triggered.
 */
void knote(struct knlist *list, long hint, int islocked)
{
  UNIMPLEMENED_NOASSERT();
}

void disk_dev_synth(dev_t dev)
{
  UNIMPLEMENED_NOASSERT();
}

/*
 * Signal a condition variable, wakes up one waiting thread.  Will also wakeup
 * the swapper if the process is not in memory, so that it can bring the
 * sleeping process in.  Note that this may also result in additional threads
 * being made runnable.  Should be called with the same mutex as was passed to
 * cv_wait held.
 */
void cv_signal(struct cv *cvp)
{
  UNIMPLEMENED_NOASSERT();
}

/*
 * Initialize a condition variable.  Must be called before use.
 */
void cv_init(struct cv *cvp, const char *desc)
{
  UNIMPLEMENED_NOASSERT();
}

void critical_exit(void)
{
  UNIMPLEMENED_NOASSERT();
}

/* Critical sections that prevent preemption. */
void critical_enter(void)
{
  UNIMPLEMENED_NOASSERT();
}

/*
 * Free a cred structure.
 * Throws away space when ref count gets to 0.
 */
void crfree(struct ucred *cr)
{
  UNIMPLEMENED_NOASSERT();
}

void devfs_create(dev_t dev)
{
  UNIMPLEMENED_NOASSERT();
}

void devfs_destroy(dev_t dev)
{
  UNIMPLEMENED_NOASSERT();
}

void biofinish(struct bio *bp, struct devstat *stat, int error)
{
  UNIMPLEMENED_NOASSERT();
}

void mtx_sysinit(void *arg)
{
  UNIMPLEMENED_NOASSERT();
}

void revoke_and_destroy_dev(dev_t dev)
{
  UNIMPLEMENED_NOASSERT();
}

void vsunlock(void *a, u_int b)
{
  UNIMPLEMENED_NOASSERT();
}

void tunable_int_init(void *data)
{
  UNIMPLEMENED_NOASSERT();
}

void sx_init(struct sx *sx, const char *description)
{
  UNIMPLEMENED_NOASSERT();
}

void _sx_slock(struct sx *sx, const char *file, int line)
{
  UNIMPLEMENED_NOASSERT();
}

void _sx_xlock(struct sx *sx, const char *file, int line)
{
  UNIMPLEMENED_NOASSERT();
}

void _sx_sunlock(struct sx *sx, const char *file, int line)
{
  UNIMPLEMENED_NOASSERT();
}

void _sx_xunlock(struct sx *sx, const char *file, int line)
{
  UNIMPLEMENED_NOASSERT();
}

void knlist_init(struct knlist *knl, struct mtx *mtx)
{
  UNIMPLEMENED_NOASSERT();
}

void vrele(struct vnode *vp)
{
  UNIMPLEMENED_NOASSERT();
}

void cv_broadcastpri(struct cv *cvp, int pri)
{
  UNIMPLEMENED_NOASSERT();
}

void knlist_cleardel(struct knlist *knl, struct thread *td,
    int islocked, int killkn)
{
  UNIMPLEMENED_NOASSERT();
}

void knlist_destroy(struct knlist *knl)
{
  UNIMPLEMENED_NOASSERT();
}


/*
 * remove all knotes from a specified klist
 */
void knlist_remove(struct knlist *knl, struct knote *kn, int islocked)
{
  UNIMPLEMENED_NOASSERT();
}

/*
 * remove knote from a specified klist while in f_event handler.
 */
void knlist_remove_inevent(struct knlist *knl, struct knote *kn)
{
  UNIMPLEMENED_NOASSERT();
}

void setsugid(struct proc *p)
{
  UNIMPLEMENED_NOASSERT();
}

/*
 * Transform the running time and tick information in proc p into user,
 * system, and interrupt time usage.
 */
void calcru(struct proc *p, struct timeval *up, struct timeval *sp,
    struct timeval *ip)
{
  UNIMPLEMENED_NOASSERT();
}

/*
 * Write system time back to RTC
 */
void resettodr()
{
  UNIMPLEMENED_NOASSERT();
}

void NDFREE(struct nameidata *a, const u_int b)
{
  UNIMPLEMENED_NOASSERT();
}

void BF_ecb_encrypt(const unsigned char *in, unsigned char *out,
	     BF_KEY *key, int encrypt)
{
  UNIMPLEMENED_NOASSERT();
}

/*
 * add a knote to a knlist
 */
void knlist_add(struct knlist *knl, struct knote *kn, int islocked)
{
  UNIMPLEMENED_NOASSERT();
}

/* Wake up a selecting thread, and set its priority. */
void selwakeuppri(struct selinfo *sip, int pri)
{
  UNIMPLEMENED_NOASSERT();
}

void malloc_uninit(void *data)
{
  UNIMPLEMENED_NOASSERT();
}

void malloc_init(void *data)
{
  UNIMPLEMENED_NOASSERT();
}

/*
 * If sigio is on the list associated with a process or process group,
 * disable signalling from the device, remove sigio from the list and
 * free sigio.
 */
void funsetown(struct sigio **sigiop)
{
  UNIMPLEMENED_NOASSERT();
}
