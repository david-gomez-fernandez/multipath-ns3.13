#ifndef LWIPOPTS_H
#define  LWIPOPTS_H

#undef NO_SYS
#define NO_SYS 1

#define TCP_MSS         1460
#define TCP_SND_BUF     (63*1024)
#define TCP_WND         (63*1024)

#define LWIP_RAW 1
#define LWIP_IGMP 1
#define LWIP_TCP 1
#define LWIP_UDP 1
#define LWIP_NETCONN 1

#define LWIP_ARP    0

#define MEM_LIBC_MALLOC 1

// Uncomment the following for very verbose debugging on stdout. Useful if
// weird stuff happens...
/*
#define LWIP_DEBUG
#define IP_DEBUG                DBG_ON
#define TCP_DEBUG               DBG_ON
#define TCP_INPUT_DEBUG         DBG_ON
#define TCP_FR_DEBUG            DBG_ON
#define TCP_RTO_DEBUG           DBG_ON
#define TCP_CWND_DEBUG          DBG_ON
#define TCP_OUTPUT_DEBUG        DBG_ON
#define TCP_RST_DEBUG           DBG_ON
#define TCP_QLEN_DEBUG          DBG_ON
#define TCP_UDP_DEBUG           DBG_ON
#define TCPIP_DEBUG             DBG_ON
#define DBG_MIN_LEVEL           0
#define DBG_TYPES_ON            DBG_ON 
*/

#endif
