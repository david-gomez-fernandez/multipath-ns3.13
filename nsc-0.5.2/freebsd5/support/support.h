#ifndef __SUPPORT_H__
#define __SUPPORT_H__
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

extern int debugf(const char * fmt, ...);
extern int get_thread_id();

#ifdef _KERNEL
#define assert(x) nsc_assert(x)
#endif

#define UNIMPLEMENED_NOASSERT() /*\
	debugf("%s:%d: %d] Function %s unimplemented. Called from: %x %x\n", \
			__FILE__, __LINE__, get_stack_id(), __FUNCTION__, \
			__builtin_return_address(0), __builtin_return_address(1));*/

#endif // __SUPPORT_H__

