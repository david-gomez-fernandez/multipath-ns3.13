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
/* $Id$ */
#include <sys/param.h>
#include <sys/mac.h>
#include <sys/mbuf.h>
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

#include <machine/stdarg.h>

#include "support/support.h"
#include "num_stacks.h"

//! Software interrupt function callback type
typedef  void (*swi_handler_t)(void *);
//! Global software interrupt function callback
swi_handler_t swi_handler;
//! Global software interrupt function callback argument
void *swi_handler_arg;

// other stuff:
extern int hz;

/** Used to add a software interrupt. Currently looks for the call that sets
 * up the network software interrupt and sets that one interrupt up. Ignores
 * any other call. */
int
swi_add(struct ithd **ithdp, const char *name, driver_intr_t handler, 
            void *arg, int pri, enum intr_type flags, void **cookiep)
{
    /* We only want to emulate the networking software
       interrupt */
    if (strncmp(name, "net", 3) == 0) {
        swi_handler = handler;
        swi_handler_arg = arg;

    }
    debugf("swi_add: %0x \"%s\" %0x %0x %i %i %0x\n",
            ithdp, name, handler, arg, pri, flags, cookiep);

    return (int)NULL;
}

/**
 * "Schedule a heavyweight software interrupt process."
 *
 * In simulation, it only makes sense for this to be called on the
 * network stack interrupt. So we just assume this applies to the
 * network stack.
 */
void
swi_sched(void *cookie, int flags)
{
    nsc_schedule_nsi();    
}

/** New ! Make sure ticks and softticks are increased. We need this so TCP
 * can calculate RTTs.
 *
 * This MUST be called once every tick (by default once every 10ms). */
void nsc_increment_ticks()
{
	//global_ticks[get_stack_id()]++;
        ticks++;
        softclock(NULL);
}

/** This should be called once every tick. It can also be called at other
 * times, as it causes packets in the queue to be processed. However, it
 * should not need to be called at any other time I believe. */
void
timer_interrupt()
{
	swi_handler(swi_handler_arg);
}
