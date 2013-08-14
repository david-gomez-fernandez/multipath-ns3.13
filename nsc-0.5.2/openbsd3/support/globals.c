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

#include <sys/device.h>
#include <sys/domain.h>

#include <sys/conf.h>


struct   timeval boottime;
struct cdevsw cdevsw[1];
struct cfdata cfdata[1];
struct devicelist alldevs;
int cpu_feature;
struct proc *curproc;               /* Current running proc. */
char hostname[MAXHOSTNAMELEN];
int hostnamelen;
int      hz;

struct vm_map sam_map;
struct vm_map *kernel_map = &sam_map;
struct vm_map *kmem_map;
int mblowat;     
int mcllowat;
volatile struct timeval mono_time;
int nchrdev = 1;
int netisr;                 /* scheduling bits for network */
int nmbclust;                   /* limit on the # of clusters */
int pentium_mhz;
int securelevel;
int splassert_ctl;
int tick;
int             ticks = 1;
int64_t tk_nin;
struct domain unixdomain;
struct uvm uvm;
struct uvmexp uvmexp;

// From kern/tty.c...

/* Symbolic sleep message strings. */
char ttclos[]	= "ttycls";
char ttopen[]	= "ttyopn";
char ttybg[]	= "ttybg";
char ttyin[]       = "ttyin";
char ttyout[]	= "ttyout";


int tty_count;

int64_t tk_cancc, tk_nin, tk_nout, tk_rawcc;

struct emul *emulsw[1];
int stackgap_random = 64*1024;
int  nprocs = 1;
int desiredvnodes;
const char version[] = "OpenBSD-NSC";
fixpt_t     ccpu = 0.95122942450071400909 * FSCALE;
char intrnames[1], eintrnames[1];
const char osversion[] = "${id}#${v}";
int nosuidcoredump = 1;
