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
/** Quite an important file, this one implements all functions concerned with
 * out fake ethernet interface used for simulation. */
#include "opt_atalk.h"
#include "opt_inet.h"

#include <sys/param.h>
#include <sys/lock.h>
#include <sys/mutex.h>
#include <sys/kernel.h>
#include <sys/mac.h>
#include <sys/mbuf.h>
#include <sys/module.h>
#include <machine/bus.h>
#include <sys/rman.h>
#include <sys/socket.h>
#include <sys/socketvar.h>
#include <sys/sockio.h>
#include <sys/sysctl.h>
#include <sys/proc.h>
#include <sys/protosw.h>

#include <net/if.h>
#include <net/if_types.h>
#include <net/netisr.h>
#include <net/route.h>
#include <net/bpf.h>
#include <net/bpfdesc.h>

#include <netinet/in.h>
#include <netinet/in_var.h>

#include "support/support.h"

#include <net/pfil.h>
#include <net/if.h>
#include <net/if_types.h>
#include <net/if_var.h>
#include <net/if_dl.h>
#include <net/route.h>
#include <net/netisr.h>

#include <netinet/in.h>
#include <netinet/in_systm.h>
#include <netinet/in_var.h>
#include <netinet/ip.h>
#include <netinet/in_pcb.h>
#include <netinet/ip_var.h>
#include <netinet/ip_icmp.h>
#include <machine/in_cksum.h> // I wonder why this is included

#include "num_stacks.h"


/* Functions in this file */
void fake_ether_init(void *vp);
int fake_ether_output(struct ifnet *ifp, struct mbuf *m, 
        struct sockaddr *dst, struct rtentry *rtp);
int fake_ether_ioctl(struct ifnet *ifp, u_long cmd, caddr_t data);
void fake_ether_set_addr(struct ifnet *ifp, char *ifname, uint32_t ipn,
	    uint32_t ip_maskn);

/** Attaches an interface and sets its address.
 * @param ifp Pointer to the interface structure to be initialised and
 *   attached
 * @param addr IP address of this interface in network order
 * @param mask IP address mask of this interface in network order
 * @param mtu Maximum transfer unit of this interface
 * */
void
fake_ether_attach(struct ifnet *ifp, unsigned int addr, unsigned int mask, int mtu)
{
    ifp->if_dname = "sa"; /* change from name and unit to dname and dunit for 5.3 */
    ifp->if_dunit = 0;
    ifp->if_mtu = mtu;
    ifp->if_flags = IFF_SIMPLEX;
    ifp->if_type = IFT_ETHER;

    /* Set up function pointers */
    ifp->if_init = fake_ether_init;
    ifp->if_output = fake_ether_output;
    ifp->if_ioctl = fake_ether_ioctl;

    /* Alpine says: "we have to set up a false output queue */
    ifp->if_snd.ifq_maxlen = 1000;
    ifp->if_linkmib = ifp;

    /* Attach the interface */
    if_attach(ifp);

    //printf("Fake interface attached.\n");

    fake_ether_set_addr(ifp, "sa0", addr, mask);

}

/** Initialisation callback function of our fake interface. This does not
 * seem to ever get called. */
void
fake_ether_init(void *vp)
{
	assert(0);
}

extern void nsc_if_send_packet_mbuf(struct ifnet *ifp, struct mbuf *m);

/** Callback function called when our fake interface is supposed to output
 * a packet to the wire. At this point we need to tell the simulator a
 * packet is to be sent. */
int
fake_ether_output(struct ifnet *ifp, struct mbuf *m, struct sockaddr *dst,
		struct rtentry *rtp)
{
	char packetbuf[65535];
    int size = m->m_pkthdr.len;

    // XXX: @TODO: FIXME: this is a function that does a full data copy. It 
    // shouldn't be needed
	m_copydata(m, 0, size, packetbuf);
	nsc_if_send_packet(ifp, packetbuf, size);
    
	m_freem(m);
}

/** The input callback routine of our fake interface. This is called when
 * a packet is received from the wire or whatever. The routine copies the
 * packet into an mbuf and dispatches it to the network stack, which will
 * either process it straight away (likely, might always happen?) or 
 * queue it (unlikely). This function should be called (indirectly) when
 * the simulator has a packet for us. */
void fake_ether_input(struct ifnet *ifp, const void *packetdata, int packetlen)
{
    struct mbuf *m = NULL;
    int size = packetlen;

    MGETHDR(m, M_DONTWAIT, MT_DATA);
    assert(m);

    m->m_len = sizeof(m->M_dat.MH.MH_dat.MH_databuf);
    m->m_pkthdr.len = m->m_len;

    m->m_flags |= M_PKTHDR;
    //bcopy(packetdata, m->m_data, packetlen);
    //m->m_len = packetlen;
    //m->m_pkthdr.len = packetlen;
    m->m_pkthdr.rcvif = ifp;

    /* We don't need the entire packet. But the length of the mbuf needs
       to be correct. Hmm. 
       Lets just copy 100 bytes of data for now and see if it works.

       This works... but checksums will be wrong. I think. Hmm...
       */
    //if(size > 100) size = 100;
    m_copyback(m, 0, size, (void *)packetdata);
    // HACK HACK HACK
    //m->m_pkthdr.len = m->m_len = packetlen;

    //fprintf(stderr, "%d] m: %p m_len: %u m_pkthdr.len: %u\n",
    //		get_stack_id(), m, m->m_len, m->m_pkthdr.len);

    // Dispatch tries to send the packet right away, but may also end
    // up enqueing it. netisr_enqueue always enqueues.
    netisr_dispatch(NETISR_IP, m);

}

/** This implements the ioctl callback function of our fake ethernet
 * interface. It doesn't do anything, and I don't believe it needs to
 * do anything. */
int
fake_ether_ioctl(
		struct ifnet *ifp,
		u_long cmd,
		caddr_t data)
{
	debugf("fake_ther_ioctl called cmd:%x data:%x\n", cmd, data);
	return 0;
}

/** Hardware specific interface ioctls. -- This replaces ifhwioctl because
 * that function wouldn't compile/link nicely. */
static int
new_ifhwioctl(u_long cmd, struct ifnet *ifp, caddr_t data, struct thread *td)
{
	struct ifreq *ifr;
	struct ifstat *ifs;
	int error = 0;
	int new_flags;

	ifr = (struct ifreq *)data;
	switch (cmd) {
	case SIOCGIFINDEX:
		ifr->ifr_index = ifp->if_index;
		break;

	case SIOCGIFFLAGS:
		ifr->ifr_flags = ifp->if_flags & 0xffff;
		ifr->ifr_flagshigh = ifp->if_flags >> 16;
		break;

	case SIOCGIFCAP:
		ifr->ifr_reqcap = ifp->if_capabilities;
		ifr->ifr_curcap = ifp->if_capenable;
		break;

#ifdef MAC
	case SIOCGIFMAC:
		error = mac_ioctl_ifnet_get(td->td_proc->p_ucred, ifr, ifp);
		break;
#endif

	case SIOCGIFMETRIC:
		ifr->ifr_metric = ifp->if_metric;
		break;

	case SIOCGIFMTU:
		ifr->ifr_mtu = ifp->if_mtu;
		break;

	case SIOCGIFPHYS:
		ifr->ifr_phys = ifp->if_physical;
		break;

	case SIOCSIFFLAGS:
		error = suser(td);
		if (error)
			return (error);
		new_flags = (ifr->ifr_flags & 0xffff) |
		    (ifr->ifr_flagshigh << 16);
		if (ifp->if_flags & IFF_SMART) {
			/* Smart drivers twiddle their own routes */
		} else if (ifp->if_flags & IFF_UP &&
		    (new_flags & IFF_UP) == 0) {
			//int s = splimp();
			if_down(ifp);
			//splx(s);
		} else if (new_flags & IFF_UP &&
		    (ifp->if_flags & IFF_UP) == 0) {
			//int s = splimp();
			if_up(ifp);
			//splx(s);
		}
		ifp->if_flags = (ifp->if_flags & IFF_CANTCHANGE) |
			(new_flags &~ IFF_CANTCHANGE);
		if (new_flags & IFF_PPROMISC) {
			/* Permanently promiscuous mode requested */
			ifp->if_flags |= IFF_PROMISC;
		} else if (ifp->if_pcount == 0) {
			ifp->if_flags &= ~IFF_PROMISC;
		}
		if (ifp->if_ioctl)
			(void) (*ifp->if_ioctl)(ifp, cmd, data);
		getmicrotime(&ifp->if_lastchange);
		break;

	case SIOCSIFCAP:
		error = suser(td);
		if (error)
			return (error);
		if (ifr->ifr_reqcap & ~ifp->if_capabilities)
			return (EINVAL);
		(void) (*ifp->if_ioctl)(ifp, cmd, data);
		break;

#ifdef MAC
	case SIOCSIFMAC:
		error = mac_ioctl_ifnet_set(td->td_proc->p_ucred, ifr, ifp);
		break;
#endif

	case SIOCSIFMETRIC:
		error = suser(td);
		if (error)
			return (error);
		ifp->if_metric = ifr->ifr_metric;
		getmicrotime(&ifp->if_lastchange);
		break;

	case SIOCSIFPHYS:
		error = suser(td);
		if (error)
			return error;
		if (!ifp->if_ioctl)
		        return EOPNOTSUPP;
		error = (*ifp->if_ioctl)(ifp, cmd, data);
		if (error == 0)
			getmicrotime(&ifp->if_lastchange);
		return(error);

	case SIOCSIFMTU:
	{
		u_long oldmtu = ifp->if_mtu;

		error = suser(td);
		if (error)
			return (error);
		if (ifr->ifr_mtu < IF_MINMTU || ifr->ifr_mtu > IF_MAXMTU)
			return (EINVAL);
		if (ifp->if_ioctl == NULL)
			return (EOPNOTSUPP);
		error = (*ifp->if_ioctl)(ifp, cmd, data);
		if (error == 0) {
			getmicrotime(&ifp->if_lastchange);
			rt_ifmsg(ifp);
		}
		/*
		 * If the link MTU changed, do network layer specific procedure.
		 */
		if (ifp->if_mtu != oldmtu) {
#ifdef INET6
			nd6_setmtu(ifp);
#endif
		}
		break;
	}

	case SIOCADDMULTI:
	case SIOCDELMULTI:
		error = suser(td);
		if (error)
			return (error);

		/* Don't allow group membership on non-multicast interfaces. */
		if ((ifp->if_flags & IFF_MULTICAST) == 0)
			return (EOPNOTSUPP);

		/* Don't let users screw up protocols' entries. */
		if (ifr->ifr_addr.sa_family != AF_LINK)
			return (EINVAL);

		if (cmd == SIOCADDMULTI) {
			struct ifmultiaddr *ifma;
			error = if_addmulti(ifp, &ifr->ifr_addr, &ifma);
		} else {
			error = if_delmulti(ifp, &ifr->ifr_addr);
		}
		if (error == 0)
			getmicrotime(&ifp->if_lastchange);
		break;

	case SIOCSIFPHYADDR:
	case SIOCDIFPHYADDR:
#ifdef INET6
	case SIOCSIFPHYADDR_IN6:
#endif
	case SIOCSLIFPHYADDR:
        case SIOCSIFMEDIA:
	case SIOCSIFGENERIC:
		error = suser(td);
		if (error)
			return (error);
		if (ifp->if_ioctl == NULL)
			return (EOPNOTSUPP);
		error = (*ifp->if_ioctl)(ifp, cmd, data);
		if (error == 0)
			getmicrotime(&ifp->if_lastchange);
		break;

	case SIOCGIFSTATUS:
		ifs = (struct ifstat *)data;
		ifs->ascii[0] = '\0';
		
	case SIOCGIFPSRCADDR:
	case SIOCGIFPDSTADDR:
	case SIOCGLIFPHYADDR:
	case SIOCGIFMEDIA:
	case SIOCGIFGENERIC:
		if (ifp->if_ioctl == 0)
			return (EOPNOTSUPP);
		error = (*ifp->if_ioctl)(ifp, cmd, data);
		break;

	case SIOCSIFLLADDR:
		error = suser(td);
		if (error)
			return (error);
		error = if_setlladdr(ifp,
		    ifr->ifr_addr.sa_data, ifr->ifr_addr.sa_len);
		break;

	default:
		error = ENOIOCTL;
		break;
	}
	return (error);
}

/** Here to replace ifioctl because ifioctl wouldn't compile and link
 * nicely. */
int new_ifioctl(
		struct socket *so,
		u_long cmd,
		caddr_t data,
		struct thread *td,
		struct ifnet *ifp)
{
	struct ifreq *ifr;
	int error;
	int oif_flags;

	ifr = (struct ifreq *)data;

	error = new_ifhwioctl(cmd, ifp, data, td);
	if (error != ENOIOCTL)
		return (error);

	oif_flags = ifp->if_flags;
	if (so->so_proto == 0)
		return (EOPNOTSUPP);
	error = ((*so->so_proto->pr_usrreqs->pru_control)(so, cmd,
								 data,
								 ifp, td));
	assert(error == 0);

	return error;
}


/** Sets the address of a 'fake' interface. Originally from Alpine, but
 * modified a lot since.
 *
 * @param ifp The interface which will have it's address set
 * @param ifname The naem of said interface: for example, if the interface
 *   is named 'sa' this might be 'sa0'
 * @param ipn The IP address as an unsigned integer in network order
 * @param ip_maskn The IP adderss mask as an unsigned integer in network
 *   order */
void
fake_ether_set_addr(struct ifnet *ifp, char *ifname, uint32_t ipn,	  
	    uint32_t ip_maskn)
{
	/* The below function was originally from Alpine but has been modified
	   since. */
	struct socket * so;
	struct ifreq ifr;
	struct sockaddr_in * sin;
	int err = 0;

	assert(
		socreate( AF_INET, &so, SOCK_DGRAM, IPPROTO_UDP, proc0.p_ucred, 
			curthread )
		== 0);

	sin = (struct sockaddr_in *)&ifr.ifr_addr;

	/* copy in the name of the device */
	//bzero( &ifr, sizeof( struct ifreq ) );
	strcpy( ifr.ifr_name, ifname );
	sin->sin_addr.s_addr = ipn;

	sin->sin_len = sizeof( struct sockaddr_in );
	sin->sin_family = AF_INET;

	//err = ifioctl( so, SIOCSIFADDR, (caddr_t)&ifr, curthread );
	new_ifioctl( so, SIOCSIFADDR, (caddr_t)&ifr, curthread, ifp );
	assert(err == 0); 

	sin->sin_addr.s_addr = ip_maskn;
	//err = ifioctl( so, SIOCSIFNETMASK, (caddr_t)&ifr, curthread );
	new_ifioctl( so, SIOCSIFNETMASK, (caddr_t)&ifr, curthread, ifp );
	assert(err == 0);

	soclose( so );
}
