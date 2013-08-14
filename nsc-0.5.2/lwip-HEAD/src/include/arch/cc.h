// bleh
#ifndef CC_H
#define CC_H

#include <assert.h>
//#include <stdlib.h>

#define PACK_STRUCT_STRUCT __attribute__ (( __packed__ ))
#define LWIP_PLATFORM_ASSERT(c) assert(c)
#define LWIP_PLATFORM_DIAG(c) printf("%u] ", get_stack_id()); printf c

#ifndef BYTE_ORDER 
#define BYTE_ORDER LITTLE_ENDIAN
#endif

typedef unsigned int mem_ptr_t;

#ifndef u8_t
typedef unsigned char u8_t;
#endif

#ifndef u16_t
typedef unsigned short u16_t;
#endif

#ifndef u32_t
typedef unsigned long u32_t;
#endif

// ---

#ifndef s8_t
typedef signed char s8_t;
#endif

#ifndef s16_t
typedef signed short s16_t;
#endif

#ifndef s32_t
typedef signed long s32_t;
#endif

#endif
