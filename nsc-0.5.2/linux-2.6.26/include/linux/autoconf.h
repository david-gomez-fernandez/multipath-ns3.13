/*
 * Manually generated C config: do edit
 * Linux kernel version: 2.6.26-rc6
 * Wed Jul 16 17:54:36 CEST 2008
 */
#define AUTOCONF_INCLUDED

/*
 * core infrastructure. x86 and x86-64 are unified,
 * CONFIG_X86_32 (or _64) picks 64 or 32 bit specific code.
 * Its is set using -DCONFIG_X86_XX=1 from SConscript.
 */
#define CONFIG_X86 1

/* kernel memory map configuration (CONF_HIGHMEM etc). */
#define CONFIG_PAGE_OFFSET 0xC0000000

/*
 * need a processor type on plain x86 to prevent
 * #error unknown processor family
 * so, pick one.
 */
#define CONFIG_M386 1

/*
 * linux-2.6.26/include/asm/processor.h:152:1: warning: "cache_line_size" redefined
 * aside from getting rid of that warning this has no effect.
 */
#define CONFIG_ARCH_HAS_CACHE_LINE_SIZE


/* SLAB defines struct kmem_cache local to mm/slab.c and not in a header,
 * SLUB does; so this allows us to 'malloc(sizeof(*kmem_cache_struct))' */
#define CONFIG_SLUB 1

/* needed to avoid #error checks */
#define CONFIG_X86_L1_CACHE_SHIFT 5

/* if this is not defined, 2.6.26 defaults to preemptible RCU */
#define CONFIG_CLASSIC_RCU 1

/* nsc maps this to printf, makes BUG() and WARN_ON more useful */
#define CONFIG_PRINTK 1
#define CONFIG_BUG 1
#define CONFIG_GENERIC_BUG 1

/* disable x86 asm rwlock implementation */
#define CONFIG_RWSEM_GENERIC_SPINLOCK 1

/* use generic C implementation */
#define CONFIG_GENERIC_FIND_FIRST_BIT 1
#define CONFIG_GENERIC_FIND_NEXT_BIT 1

/* pick a mem model */
#define CONFIG_FLATMEM 1

/* want to be able to tune tcp/ip stack at run time */
#define CONFIG_SYSCTL 1
/* and we use the sysctl() syscall to do this */
#define CONFIG_SYSCTL_SYSCALL 1

/* network configuration */
#define CONFIG_NET 1

/* internet protocol */
#define CONFIG_INET 1

#define CONFIG_IPV6  1
#define CONFIG_IP_SCTP 1

/* Datagram congestion control protocol */
// This doesn't work yet 100%, so its disabled for now.
//#define CONFIG_IP_DCCP 1
//#define CONFIG_IP_DCCP_ACKVEC 1

#define CONFIG_TCP_CONG_CUBIC 1
/* error: `CONFIG_DEFAULT_TCP_CONG' undeclared (first use in this function) */
#define CONFIG_DEFAULT_TCP_CONG "cubic" /* taken from 2.6.26 defconfig */

/* enables extra checks/run-time configuration in ipv6 neighbor discovery (net/ipv6/ndisc.c)
 * This is enabled by default in 2.6.26 defconfig. */
#define CONFIG_IPV6_NDISC_NODETYPE 1

/*
 * TCP Syn Cookies.
 * Note: This only builds syncookies, they are disabled by default
 * and need to be enabled using the 'net.ipv4.tcp_syncookies' sysctl.
 *
 * If you want to test syncookies, you might want to hac^W edit
 * net/ipv4/tcp_ipv4.c:tcp_v4_conn_request() to always use cookies
 * instead of the normal syn queue by setting 'want_cookie=1'
 * unconditionally.
 */
#define CONFIG_SYN_COOKIES 1

/* needed to get tc support */
#define CONFIG_NET_SCHED 1

#define CONFIG_HZ 1000

/* used in macros of type '#define FOO_MAX (CONFIG_BASE_SMALL ? 23 : 42)' */
#define CONFIG_BASE_SMALL 0

/* redirects the 'current' macro to nsc_get_task_struct */
#define CONFIG_NSC 1

