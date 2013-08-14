# 1 "globaliser/test/goto.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "globaliser/test/goto.c"
#include "num_stacks.h"
extern void f(const char *);

int tcv_exts_dump()
{
  f("hello world\n");
rtattr_failure: 
  __attribute__ ((unused)) return -1;
}

