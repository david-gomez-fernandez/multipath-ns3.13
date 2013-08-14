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
/* $Id$ */
#include <sys/param.h>
#include <sys/systm.h>
#include <sys/mbuf.h>
#include <sys/proc.h>
#include <sys/socket.h>
#include <sys/socketvar.h>
#include <sys/protosw.h>
#include <sys/kernel.h>
#include <sys/ioctl.h>
#include <sys/domain.h>

#include <net/if.h>
#include <net/if_dl.h>
#include <net/route.h>
#include <net/if_llc.h>
#include <net/if_types.h>
#include <net/netisr.h>


#ifdef INET
#include <netinet/in.h>
#include <netinet/in_var.h>
#include <netinet/if_ether.h>
#include <netinet/igmp.h>
#ifdef MROUTING
#include <netinet/ip_mroute.h>
#endif
#endif

#ifdef INET6
#ifndef INET
#include <netinet/in.h>
#endif
#include <netinet6/in6_ifattach.h>
#include <netinet6/nd6.h>
#endif

#include "support/nsc.h"

/* Functions in this file */
void fake_ether_init(void *vp);
int fake_ether_output(struct ifnet *ifp, struct mbuf *m, 
        struct sockaddr *dst, struct rtentry *rtp);
int fake_ether_ioctl(struct ifnet *ifp, u_long cmd, caddr_t data);
static void fake_ether_set_addr(struct ifnet *ifp, char *ifname, 
        uint32_t ipn, uint32_t ip_maskn);

// ------------------------------------------------------------------------
#define ROUNDUP(a) \
    ((a) > 0 ? (1 + (((a) - 1) | (sizeof(long) - 1))) : sizeof(long))
#define ADVANCE(x, n) (x += ROUNDUP((n)->sa_len))
#define NEXTADDR(w, u) \
    if (rtm_addrs & (w)) {\
        l = ROUNDUP(u.sa.sa_len); memmove(cp, &(u), l); cp += l;\
            if (verbose) sodump(&(u),"u");\
    }


void nsc_default_gw_init(unsigned int gw_addr)
{
    struct socket *so = NULL;
    struct {
        struct rt_msghdr msg;
        unsigned char space[512];
    } rtm_msg;
    struct sockaddr_in *dst, *gtw, *mask;


#define rtm rtm_msg.msg
    
    assert(                       // IPPROTO_IP 
	socreate(PF_ROUTE, &so, SOCK_RAW, IPPROTO_IP)
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

    assert(
            nsc_sosend_blocking(so, 
                NULL, // XXX
                &rtm_msg, rtm.rtm_msglen)
            == 0
          );

    soclose(so); // calls sofree for us
    //def_gw_get();
}

void *nsc_if_attach(unsigned int addr, unsigned int mask, int mtu)
{
    struct ifnet *ifp = (struct ifnet *)nsc_malloc(sizeof(struct ifnet));

    memset(ifp, 0, sizeof(struct ifnet));
    bzero(ifp, sizeof(struct ifnet));

    strcpy(ifp->if_xname, "sa0");
    ifp->if_mtu = mtu;
    ifp->if_flags = IFF_SIMPLEX;
    ifp->if_type = IFT_ETHER;

    /* Set up function pointers */
    //ifp->if_init = fake_ether_init; // don't need an init function anyway
    ifp->if_output = fake_ether_output;
    ifp->if_ioctl = fake_ether_ioctl;

    /* Alpine says: "we have to set up a false output queue */
    ifp->if_snd.ifq_maxlen = 1000;
    //ifp->if_linkmib = ifp;

    /* Attach the interface */
    if_attach(ifp);

    // consider if_alloc_sadl

    fake_ether_set_addr(ifp, "sa0", addr, mask);
    
    return ifp;
}

void
fake_ether_set_addr(struct ifnet *ifp, char *ifname, uint32_t ipn,	  
	    uint32_t ip_maskn)
{
    /* The below function was originally from Alpine but has been modified
       since. */
    struct socket *so;
    struct ifreq ifr;
    struct sockaddr_in * sin;
    int err = 0;

    assert(
            socreate( AF_INET, &so, SOCK_DGRAM, IPPROTO_UDP )
            == 0);

    sin = (struct sockaddr_in *)&ifr.ifr_addr;

    /* copy in the name of the device */
    //bzero( &ifr, sizeof( struct ifreq ) );
    strcpy( ifr.ifr_name, ifname );
    sin->sin_addr.s_addr = ipn;

    sin->sin_len = sizeof( struct sockaddr_in );
    sin->sin_family = AF_INET;

    //err = ifioctl( so, SIOCSIFADDR, (caddr_t)&ifr, curthread );
    ifioctl( so, SIOCSIFADDR, (caddr_t)&ifr, curproc );
    assert(err == 0); 

    sin->sin_addr.s_addr = ip_maskn;
    //err = ifioctl( so, SIOCSIFNETMASK, (caddr_t)&ifr, curthread );
    ifioctl( so, SIOCSIFNETMASK, (caddr_t)&ifr, curproc );
    assert(err == 0);

    soclose( so );
}



void fake_ether_init(void *vp)
{
    assert(0);
}

int fake_ether_output(struct ifnet *ifp, struct mbuf *m, 
        struct sockaddr *dst, struct rtentry *rtp)
{
    struct sockaddr_in *si = (struct sockaddr_in *)dst;
    // dst will be the gateway destination
    nsc_debugf("fake_ether_output: ifp=%s dst:%d.%d.%d.%d m->m_pkthdr.len:%d\n",
            ifp->if_xname,
            si->sin_addr.s_addr & 0xff,
            (si->sin_addr.s_addr & 0xff00) >> 8,
            (si->sin_addr.s_addr & 0xff0000) >> 16,
            (si->sin_addr.s_addr & 0xff000000) >> 24,
            m->m_pkthdr.len
            );

    {
        char packetbuf[65535];
        int size = m->m_pkthdr.len;

        // XXX: @TODO: FIXME: this is a function that does a full data copy. It 
        // shouldn't be needed
        m_copydata(m, 0, size, packetbuf);
        /*for(i = 0; i < size; i++) {
            nsc_debugf("%02hhx ", packetbuf[i]);
            if(i % 8 == 7) nsc_debugf("\n");
        }
        nsc_debugf("\n");*/
        nsc_if_send_packet(ifp, packetbuf, size);

        m_freem(m);
    }

    return 0;
}

int fake_ether_ioctl(struct ifnet *ifp, u_long cmd, caddr_t data)
{
    nsc_debugf("fake_ether_ioctl: ifp=%s\n", ifp->if_xname);
    switch (cmd) {
        case SIOCSIFADDR:
                // We need to mark ourselves as 'UP' in this case
                ifp->if_flags |= IFF_UP;
    }
    return 0;
}

extern void netintr(void);

/** The input callback routine of our fake interface. This is called when
 * a packet is received from the wire or whatever. The routine copies the
 * packet into an mbuf and dispatches it to the network stack, which will
 * either process it straight away (likely, might always happen?) or 
 * queue it (unlikely). This function should be called (indirectly) when
 * the simulator has a packet for us. */
void fake_ether_input(void *vifp, const void *packetdata, int packetlen)
{
    struct mbuf *m = NULL;
    int size = packetlen;
    struct ifnet *ifp = (struct ifnet *)vifp;

    MGETHDR(m, M_DONTWAIT, MT_DATA);
    assert(m);

    /* I was getting crash errors when trying to only copy 100 bytes into
     * the packet then setting the length to be 100 (m_len=100). It's a
     * bad idea to do that. For now I just copy all the data. Not the end
     * of the world...
     */
    m->m_len = 0; //sizeof(m->M_dat.MH.MH_dat.MH_databuf);
    // This mbuf includes packet header stuff:
    m->m_flags |= M_PKTHDR;
    // The interface the packet was received on and the total length of the
    // packet.
    m->m_pkthdr.len = size;
    m->m_pkthdr.rcvif = ifp;

//    memcpy(mtod(m, caddr_t), packetdata, m->m_len);
    
    m_copyback(m, 0, size, packetdata);
    
    {
        struct ifqueue *inq;

        schednetisr(NETISR_IP);
        inq = &ipintrq;

        if (IF_QFULL(inq)) {
            //assert(0); // this should never trigger in simulation I believe
            //TODO: figure out why we are getting packet loss here! in sim!
            IF_DROP(inq);
            m_freem(m);
            return; // ENOBUFS;
        }
        IF_ENQUEUE(inq, m);

        // Force packet receipt here: I *think* this should happen, normally
        // we would have a soft interrupt scheduled ASAP?
        netintr();
    }

}
