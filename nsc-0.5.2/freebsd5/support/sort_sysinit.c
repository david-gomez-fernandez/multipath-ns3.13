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

#include <machine/param.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/param.h>
#include <sys/sockio.h>
#include <sys/mbuf.h>
#include <sys/kernel.h>
#include <net/if_types.h>
#include <netinet/in.h>
#include <net/if.h>
#include <net/if_var.h>
#include <netinet/in_var.h>
#include <net/netisr.h>
#include <netinet/in_systm.h> /* for n_long */
#include <netinet/ip.h>

#include <netinet/in_var.h>

#include <sys/types.h>
#include <net/bpf.h>
#include <net/ethernet.h>

#include <sys/linker_set.h>

/** Sort the sysinit array and call the functions in it. The main reason
 * we need to modify the kernel implementation of this function is because
 * we need to copy the sysinit array into our own buffer before sorting.
 * This is because the sysinit array is stored in a special segment in the
 * executable file which we are not allowed to modify in user space (memory
 * protection prevents this; we either get a segmentation fault or a bus
 * error).
 *
 * In kernel space this wasn't the case, of course, there isn't really
 * memory protection in the kernel.
 * */
void sort_sysinit(struct sysinit **start, struct sysinit **end,
		struct sysinit **ne)
{
    struct sysinit **sipp;
    struct sysinit *sysinit_array[10000];
    int sysinit_array_len = 0;
    int count;

    // Copy sysinit array
    for(sipp = start; sipp < end; sipp++)
        sysinit_array[sysinit_array_len++] = *sipp;

	// Sort the array
    {
        struct sysinit **xipp, *save;

        for (sipp = sysinit_array; sipp < &sysinit_array[sysinit_array_len]; 
                sipp++) {
            for (xipp = sipp + 1; xipp < &sysinit_array[sysinit_array_len]; 
                    xipp++) {
                if ((*sipp)->subsystem < (*xipp)->subsystem ||
                    ((*sipp)->subsystem == (*xipp)->subsystem &&
                    (*sipp)->order <= (*xipp)->order))
                    continue;   /* skip */
                save = *sipp;
                *sipp = *xipp;
                *xipp = save;
            }
        }
    }
    
	/*
	 * Traverse the (now) ordered list of system initialization tasks.
	 * Perform each task, and continue on to the next task.
	 *
	 * The last item on the list is expected to be the scheduler,
	 * which will not return. (NOT ANYMORE).
	 */
    for (count = 0, sipp = &sysinit_array[0]; count < sysinit_array_len; 
            count++, sipp = &sysinit_array[count]) {

		if ((*sipp)->subsystem == SI_SUB_DUMMY)
			continue;	/* skip dummy task(s)*/

		if ((*sipp)->subsystem == SI_SUB_DONE)
			continue;

		
		// The following checks should not be needed anymore, now that the
		// ending condition bug is fixed.
		if((*sipp)->func == NULL) {
		} /*else if((void *)(*sipp)->func < (void *)0x8000000 ||
				(void *)(*sipp)->func > (void *)0xf000000 ) {
			if(init_verbose)
				printf("WARN: possible invalid function.\n"); 
        }*/
		else {
			/* Call function */
			(*((*sipp)->func))((*sipp)->udata);
		}

#if 0
		/* Check off the one we're just done */
		if(		(*sipp)->subsystem == SI_SUB_INIT_IF
			||	(*sipp)->subsystem == SI_SUB_PROTO_DOMAIN
			||	(*sipp)->subsystem == SI_SUB_PSEUDO
				) {
			
			/* Don't check of things that need to be initialised by each
			 * thread. This is nasty... shouldn't really be needed. */
		} else {
			(*sipp)->subsystem = SI_SUB_DONE;
		}
#else
                /*(*sipp)->subsystem = SI_SUB_DONE;*/
#endif
	}

}
