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
#include <sys/proc.h>
#include <sys/lock.h>
#include <sys/mutex.h>
#include <sys/kernel.h>
#include <sys/socket.h>
#include <sys/socketvar.h>

#include <net/if.h>
#include <net/route.h>
#include <net/if_dl.h>
#include <netinet/in.h>
#include <netinet/if_ether.h>
#include <netatalk/at.h>
#include <arpa/inet.h>
#include <netdb.h>

#include "support/support.h"
#include "num_stacks.h"


static void def_gw_get();

#define ROUNDUP(a) \
    ((a) > 0 ? (1 + (((a) - 1) | (sizeof(long) - 1))) : sizeof(long))
#define ADVANCE(x, n) (x += ROUNDUP((n)->sa_len))
#define NEXTADDR(w, u) \
    if (rtm_addrs & (w)) {\
        l = ROUNDUP(u.sa.sa_len); memmove(cp, &(u), l); cp += l;\
            if (verbose) sodump(&(u),"u");\
    }


/** Creates a default route to the address specified. Creates and uses a
 * routing socket to do such.
 */
int def_gw_init(unsigned int gw_addr)
{
    struct socket *so = NULL;
    struct {
        struct rt_msghdr msg;
        unsigned char space[512];
    } rtm_msg;
    struct sockaddr_in *dst, *gtw, *mask;
    int i, datalen;

#define rtm rtm_msg.msg
    
    assert(                       // IPPROTO_IP
	socreate(PF_ROUTE, &so, SOCK_RAW, AF_INET, proc0.p_ucred, curthread)
	== 0);

    memset(&rtm_msg, 0, sizeof(rtm_msg));
    
    rtm.rtm_msglen = 128; // hmm...
    rtm.rtm_version = RTM_VERSION; 
    rtm.rtm_type = RTM_ADD;
    rtm.rtm_flags = 2051; // hmm... what are these???
    rtm.rtm_addrs = RTA_DST | RTA_GATEWAY | RTA_NETMASK; // == 7
    rtm.rtm_seq = 1;
    rtm.rtm_inits = 0;
    //rtm.rtm_pid = 0;
    //msg.rtm_index = 0;  
    
    dst = (struct sockaddr_in *)rtm_msg.space;
    dst->sin_len = sizeof(struct sockaddr_in);
    dst->sin_family = AF_INET;

    gtw = (struct sockaddr_in *)&rtm_msg.space[ ROUNDUP(dst->sin_len) ];
    gtw->sin_len = sizeof(struct sockaddr_in);
    gtw->sin_family = AF_INET;
    gtw->sin_addr.s_addr = gw_addr;
        
    mask = (struct sockaddr_in *)&rtm_msg.space[ ROUNDUP(dst->sin_len) +
        ROUNDUP(gtw->sin_len) ];
    mask->sin_len = sizeof(struct sockaddr_in);
    mask->sin_family = AF_INET;

    rtm.rtm_msglen = sizeof(struct rt_msghdr) + ROUNDUP(dst->sin_len)*3;

    /*for(i = 0; i < rtm.rtm_msglen - sizeof(struct rt_msghdr); i++)
        printf("%0hhx ", rtm_msg.space[i]);
    printf("\n");*/

    datalen = rtm.rtm_msglen;

    assert(
            nsc_sosend(so, NULL, &rtm_msg, &datalen)
            == 0
          );

    soclose(so); // calls sofree for us
    //def_gw_get();
}

/** Nasty hacky function used to debug default gateways. Prints out the
 * default gateway when called (ish). Definitely only for debugging.
 */
void def_gw_get()
{
    struct socket *so = NULL;
    struct {
        struct rt_msghdr msg;
        unsigned char space[512];
    } rtm_msg;
    char buf[1024];
    size_t buflen = 1024;
    struct rt_msghdr *r;
    struct sockaddr *sa;
    int i, datalen;

#define rtm rtm_msg.msg
    
    assert(                       // IPPROTO_IP
	socreate(PF_ROUTE, &so, SOCK_RAW, AF_INET, proc0.p_ucred, curthread)
	== 0);

    memset(&rtm_msg, 0, sizeof(rtm_msg));
    
    rtm.rtm_msglen = 168; // hmm...
    rtm.rtm_version = RTM_VERSION; 
    rtm.rtm_type = RTM_GET;
    rtm.rtm_flags = 2051; // hmm... what are these???
    rtm.rtm_addrs = 21; // == 21
    rtm.rtm_seq = 2;
    rtm.rtm_inits = 0;
    //rtm.rtm_pid = 0;
    //msg.rtm_index = 0;  
    
    // This is seriously hax
    rtm_msg.space[0] = 10; 
    rtm_msg.space[1] = 2; 
    rtm_msg.space[16] = 2; 
    rtm_msg.space[17] = 2; 
    
    // IP addr
    rtm_msg.space[20] = 36; 
    rtm_msg.space[21] = 12; 
    
    datalen = 168;
    assert(
            nsc_sosend(so, NULL, &rtm_msg, &datalen) == 0
          );

    assert(
            nsc_soreceive_blocking(so, buf, &buflen, NULL) == 0
          );

    r = (struct rt_msghdr *)buf;
    sa = (struct sockaddr *)(r + 1);
    printf("%s: read says:\n", __FUNCTION__);
    for(i = 0; i < (r->rtm_msglen - sizeof(struct rt_msghdr)); i++) {
        printf("%02hhx ", ((unsigned char *)sa)[i]);
    }

    soclose(so);
    sofree(so);
}
