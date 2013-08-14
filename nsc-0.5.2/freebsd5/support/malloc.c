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
#include <sys/types.h>
#undef _KERNEL
#include <sys/malloc.h>
#undef malloc
#undef free
#undef calloc
#undef realloc
#undef offsetof

// The external malloc defined in libc:
extern void * malloc(unsigned int);
extern void free(void *);
extern void bcopy(const void *, void *, size_t);

#include "support/support.h"

/** A newer, much nicer way to re-implement malloc for use in the kernel. The
 * previous way was a HUGE hack and was very nasty indeed. Now we use a -D
 * flag in the Makefile to make sure malloc is redefined to new_malloc, and
 * just undefine malloc in this file so we can implement new_malloc and
 * include stdlib.h. We also had to undefine _KERNEL before including 
 * sys/malloc.h so it does not define versions of free, realloc and possibly
 * calloc that clash with stdlib.h.
 * - Sam 01-07-2003 
 */
void *nsc_malloc(unsigned long size, struct malloc_type *type, int flags) {
  void *ret = NULL;

  ret = (void *) malloc(size);

  /* This is horribly inneficient... I don't think too many things 
   * actually use this, so lets ignore that fact for now. */
  if((flags & M_ZERO) && ret) {
    /* We cannot rely upon the bzero function pointer being set
     * up at this point. */
    while(size--)
      ((unsigned char *)ret)[size] = 0;
  }

  return ret;
}

/** nsc version of free to call the libc free() */
void nsc_free(void *arg, struct malloc_type *type) {
  free(arg);
}

/** nsc version of realloc, uses nsc_malloc and nsc_free and bcopy rather
 * then the libc realloc for some reason... I don't know why! */
void *nsc_realloc(void *addr, unsigned long size, struct malloc_type *type,
                  int flags) {
  void *newaddr;

  /* realloc(NULL, ...) is equivalent to malloc(...) */
  if (addr == NULL)
    return (nsc_malloc(size, type, flags));

  /* Allocate a new, bigger (or smaller) block */
  if ((newaddr = nsc_malloc(size, type, flags)) == NULL)
    return (NULL);

  /* Copy over original contents */
  bcopy(addr, newaddr, size);
  nsc_free(addr, type);

  return (newaddr);
}

