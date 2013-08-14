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

/* This file is hacked from kern/kern_linker.c

   It makes sure our modules get registered.
*/

#include <sys/cdefs.h>

#include "opt_ddb.h"
#include "opt_mac.h"

#include <sys/param.h>
#include <sys/kernel.h>
#include <sys/systm.h>
#include <sys/malloc.h>
#include <sys/sysproto.h>
#include <sys/sysent.h>
#include <sys/proc.h>
#include <sys/lock.h>
#include <sys/mutex.h>
#include <sys/sx.h>
#include <sys/mac.h>
#include <sys/module.h>
#include <sys/linker.h>
#include <sys/fcntl.h>
#include <sys/libkern.h>
#include <sys/namei.h>
#include <sys/vnode.h>
#include <sys/sysctl.h>

/* Metadata from the static kernel */
SET_DECLARE(modmetadata_set, struct mod_metadata);

linker_file_t	linker_kernel_file = NULL;
    
static int
linker_file_register_modules()
{
	struct mod_metadata **start, **stop, **mdp;
	const moduledata_t *moddata;
	int error;


    // EDIT: We can ignore the extra logic that used to be here; as we
    // do not actually support multiple modules.
			start = SET_BEGIN(modmetadata_set);
			stop = SET_LIMIT(modmetadata_set);
        
	for (mdp = start; mdp < stop; mdp++) {
		if ((*mdp)->md_type != MDT_MODULE)
			continue;
		moddata = (*mdp)->md_data;
		KLD_DPF(FILE, ("Registering module %s in kernel\n",
		    moddata->name));
		error = module_register(moddata, linker_kernel_file);
		if (error)
			printf("Module %s failed to register: %d\n",
			    moddata->name, error);
	}
	return (0);
}

static void
linker_init_kernel_modules(void)
{

	linker_file_register_modules();
}

SYSINIT(linker_kernel, SI_SUB_KLD, SI_ORDER_ANY, linker_init_kernel_modules, 0)
