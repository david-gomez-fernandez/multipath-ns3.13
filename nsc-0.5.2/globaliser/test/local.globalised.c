# 1 "globaliser/test/local.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "globaliser/test/local.c"
#include "num_stacks.h"
static int ip6_dst_gc()
{
        typedef  unsigned long   _GLOBAL_0_T; static  _GLOBAL_0_T  global_last_gc[NUM_STACKS];    

        global_last_gc[get_stack_id()] = 1;

        return 0;
}

