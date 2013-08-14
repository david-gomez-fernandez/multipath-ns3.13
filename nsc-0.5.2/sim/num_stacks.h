#ifndef NUM_STACKS_H
#define NUM_STACKS_H
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

/* Change this to change the number of stacks supported. Remember to do a
 * full recompile and rebuild of the parser! */
#define NUM_STACKS 50

#ifdef __cplusplus
extern "C"
#endif 
int get_stack_id(void);

#endif
