#include "freebsd/usr/include/machine/pcpu.h"
#undef curthread
#define curthread __pcpu.pc_curthread
