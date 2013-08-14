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
#include <linux/module.h>

#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/skbuff.h>
#include <linux/netdevice.h>
#include <linux/ioport.h>
#include <linux/delay.h>
#include <linux/slab.h>
#include <linux/init.h>
#include <linux/rtnetlink.h>
#include <linux/in.h>
#include <linux/timex.h>
#include <linux/route.h>

#include <net/icmp.h>
#include <net/tcp.h>

#include <linux/sysctl.h>
#include <linux/proc_fs.h>
#include <linux/nsproxy.h>
#include <linux/utsname.h>

#include "../nsc/nsc.h"
#include "sim_errno.h"
#include "nsc_sockaddr_stack.h"

extern void do_initcalls(void);
extern void init_timervecs (void);
extern void run_local_timers(void);
extern void softirq_init(void);

extern struct proc_dir_entry *proc_net, *proc_sys_root;
extern int nsc_g_l26_diagnostic;

struct task_struct *nsc_task;
static struct thread_info *nsc_thread_info;
void timekeeping_init(void);
struct uts_namespace init_uts_ns;

void nsc_init(void)
{
    extern int nsc_sock_init_inodecache(void);
    struct nsproxy *init_nsproxy;

    nsc_task = kmalloc(sizeof(*nsc_task), __GFP_ZERO);
    nsc_assert(nsc_task != NULL, "nsc_malloc");

    /*
     * kludge:
     * avoid segfault in kernel code that calls 'task_thread_info(current)'
     * and then dereferences the retval.
     */
    nsc_task->stack = get_zeroed_page(0);
    nsc_assert(nsc_task->stack != NULL, "nsc_malloc");
    nsc_task->group_leader = nsc_task;

    nsc_thread_info = kmalloc(sizeof(*nsc_thread_info), __GFP_ZERO);
    nsc_assert(nsc_thread_info != NULL, "nsc_malloc");
    init_nsproxy = kmalloc(sizeof(*init_nsproxy), __GFP_ZERO);
    nsc_assert(init_nsproxy != NULL, "nsc_malloc");
    init_nsproxy->uts_ns = &init_uts_ns;
    init_nsproxy->net_ns = &init_net;

    current->cap_effective = CAP_FULL_SET;
    current->euid = 0;
    current->nsproxy = init_nsproxy;
    current_thread_info()->addr_limit.seg = ~0; /* used by the kernels access_ok() and friends */

    init_timers();
    softirq_init();
    idr_init_cache();

    nsc_sock_init_inodecache();
    
    do_initcalls();


}


struct thread_info *nsc_get_current_thread_info(void)
{
    return nsc_thread_info;
}


extern volatile unsigned long jiffies;

void nsc_timer_tick(void)
{
  //    extern volatile unsigned long jiffies;
    //nsc_debugf("nsc_timer_tick\n");
    ++jiffies;
    do_timer(1);
}

void nsc_timer_interrupt(void)
{
    extern asmlinkage void do_softirq(void);

    //nsc_debugf("nsc_timer_interrupt\n");
    // XXX: 2.4 uses timer_bh:
    //timer_bh();
    run_local_timers();
    // solution on 2.6:
    do_softirq();
}

static void nsc_if_set_addr(unsigned int ip_addr, unsigned int ip_mask)
{
    struct socket *sock;
    struct ifreq ifr;
    struct sockaddr_in *sin;
    int error;
    const char ifname[] = "nsc0";

    nsc_assert( 
            sock_create( AF_INET, SOCK_DGRAM, IPPROTO_UDP, &sock)
            == 0, "sock_create failed in nsc_if_set_addr");

    // setup sin
    sin = (struct sockaddr_in *)&ifr.ifr_addr;

    /* copy in the name of the device */
    //bzero( &ifr, sizeof( struct ifreq ) );
    strcpy( ifr.ifr_name, ifname );
    sin->sin_addr.s_addr = ip_addr;

    //sin->sin_len = sizeof( struct sockaddr_in );
    sin->sin_family = AF_INET;

    nsc_assert(
            sock->ops->ioctl(sock, SIOCSIFADDR, (unsigned long)&ifr)
            == 0, "socket ioctl(SIOCSIFADDR) failed in nsc_if_set_addr");

    sin->sin_addr.s_addr = ip_mask;

    error = sock->ops->ioctl(sock, SIOCSIFNETMASK, (unsigned long)&ifr);
    if(error) {
        nsc_debugf("ioctl error: %d\n", error);
        nsc_assert(0, "ioctl");
    }

    ifr.ifr_flags = IFF_UP | IFF_RUNNING;
    error = sock->ops->ioctl(sock, SIOCSIFFLAGS, (unsigned long)&ifr);
    if(error) {
        nsc_debugf("ioctl(SIOCSIFFLAGS) error: %x (%u) (%d)\n", error, 
                error, error);
        nsc_assert(0, "ioctl");
    }
    

}

void nsc_if_receive_packet(void *dev, const void *data, unsigned int datalen)
{
    struct sk_buff *skb;
    // To be consistent with the eepro100 driver.
    const unsigned int skbuff_size = 1536;

    // Bit of a hack...
    // Note that the size allocated here effects the offered window somewhat.
    // I've got this heuristic here to try and match up with what we observe
    // on the emulation network and by looking at the driver code of the
    // eepro100. In both cases we allocate enough space for our packet, which
    // is the important thing. The amount of slack at the end can make linux
    // decide the grow the window differently. This is quite subtle, but the
    // code in question is in the tcp_grow_window function. It checks
    // skb->truesize, which is the size of the skbuff allocated for the 
    // incoming data packet -- what we are allocating right now!
    if(datalen < 1200) {
        skb = dev_alloc_skb(datalen + 36);
    } else if(datalen <= 1500) {
        skb = dev_alloc_skb(skbuff_size);
    } else {
        skb = dev_alloc_skb(datalen + 36);
    }
    
    //alloc_skb(datalen, GFP_KERNEL);
    nsc_assert((int)skb, "alloc_skb failed in nsc_if_receive_packet");

    memcpy(skb_put(skb, datalen), data, datalen);

    skb->dev = (struct net_device *)dev;
    skb->protocol = 0x08; // IP
    skb->ip_summed = CHECKSUM_UNNECESSARY; // Stops the TCP checksum
    
    // _ni means "non-interrupt"
    netif_rx_ni(skb);
}

static int nsc_if_xmit(struct sk_buff *skb, struct net_device *dev)
{
    int size = skb->len;
    unsigned char *packetbuf;

    nsc_debugf("nsc_if_xmit: len: %d data_len: %d\n",
            skb->len, skb->data_len);

    packetbuf = skb->data;

    /* We stop the dev here as we start transmitting. We rely on the simulator
       to inform us of when we can start transmitting again. */
    netif_stop_queue(dev);

    nsc_if_send_packet(dev, packetbuf, size);

    dev_kfree_skb(skb);

    return 0;
}

void nsc_if_xmit_finished(void *dev)
{
    netif_wake_queue((struct net_device *)dev);
}

static void nsc_netdev_setup(struct net_device *a)
{
    // Nothing
}

void *nsc_newif(unsigned int addr, unsigned int mask, int mtu)
{
    struct net_device *ifp;
    int error;

    ifp = alloc_netdev(0, "nsc%d", &nsc_netdev_setup);
    nsc_assert(ifp != 0, "alloc_netdev failed");

    error = dev_alloc_name(ifp, ifp->name);
    nsc_assert(error == 0, "dev_alloc_name failed");

    ifp->mtu = mtu; // XXX: Check this works
    //ifp->features = NETIF_F_HW_CSUM;

    //ifp->init            = NULL;
    ifp->hard_start_xmit = nsc_if_xmit;
    //ifp->open            = NULL;
    //ifp->stop            = NULL;
    //ifp->do_ioctl        = NULL;
    //ifp->get_stats       = NULL;

    error = register_netdevice(ifp);
    nsc_assert(error == 0, "register_netdevice failed");

    nsc_if_set_addr(addr, mask);
    return ifp;
}

void *nsc_socreate_tcp()
{
    struct socket *sock;

    nsc_assert(
            sock_create(AF_INET, SOCK_STREAM, IPPROTO_TCP, &sock)
            == 0, "sock_create failed in nsc_socreate_tcp");

    /* This is a hack. We're trying to set up the sk_sleep wait queue so it has
     * something in it. This will mean that when we check it, we'll end up
     * calling wakeup. Note that 'wait' below goes out of scope and so the
     * pointer becomes invalid, making this a rather nasty hack. However, it is
     * not used due to us not implementing actual waiting code. We just want
     * wakeup to be called in sock_def_wakeup
     */
    DEFINE_WAIT(wait);
    __add_wait_queue(sock->sk->sk_sleep, &wait);

    return sock;
}

void *nsc_socreate_sctp()
{
    struct socket *sock;

    nsc_assert(
            sock_create(AF_INET, SOCK_STREAM, IPPROTO_SCTP, &sock)
            == 0, "sock_create failed in nsc_socreate_tcp");

    return sock;
}

int nsc_soconnect(void *so, unsigned int dest, unsigned short port)
{
    struct socket *sock = (struct socket *)so;
    struct sockaddr_in addr;
    int error, addrlen;
 
    nsc_debugf("nsc_soconnect to dest %x, port: %d\n", dest, port);

    addr.sin_family = AF_INET;
    addr.sin_port = port;
    addr.sin_addr.s_addr = dest;

    addrlen = sizeof(struct sockaddr_in);
    error = sock->ops->connect(sock, (struct sockaddr *)&addr, addrlen, O_NONBLOCK);

    nsc_debugf("nsc_soconnect returned: %d\n", error);
    return error;
}

void nsc_sodisconnect(void *so)
{
    sock_release((struct socket *)so);
}

void nsc_solisten(void *so, unsigned short port)
{
    struct socket *sock = (struct socket *)so;
    struct sockaddr_in addr;
    int error;

    addr.sin_family = AF_INET;
    addr.sin_port = port;
    addr.sin_addr.s_addr = 0;

    error = sock->ops->bind(sock, (struct sockaddr *)&addr, 
            sizeof(struct sockaddr));

    nsc_debugf("nsc_solisten: bind: error=%d\n", error);
    nsc_assert(error == 0, "nsc_solisten");
    
    error = sock->ops->listen(sock, SOMAXCONN);

    nsc_debugf("nsc_solisten: listen: error=%d\n", error);
    nsc_assert(error == 0, "nsc_solisten");
}

int nsc_accept(void *so, void **a)
{
    struct socket *sock = (struct socket *)so, *newsock;
    int error;

    newsock = nsc_socreate_tcp();

    newsock->type = sock->type;
    newsock->ops = sock->ops;
 
    // Note: we don't have sock->file->f_flags for the last argument to
    // the following function. We kinda don't support files... The last
    // argument just means the accepted socket inherits flags from so. We
    // don't really care about this.
    error = sock->ops->accept(sock, newsock, O_NONBLOCK);
    
    if(error < 0) {
        sock_release(newsock);
        return error;
    }

    // We could use newsock->ops->getname() to get the other end of
    // the connection. But we don't care.
    *a = newsock;
    return 0;
}

int nsc_getsockpeername(void *so, struct nsc_sockaddr *sa, int getpeername)
{
	struct socket *sock = so;
	struct sockaddr_storage ss;
	int salen = sizeof(ss);

	int ret = sock->ops->getname(sock, (struct sockaddr *) &ss, &salen, getpeername);
	if (ret == 0)
		nsc_convert_sockaddr((struct sockaddr *) &ss, sa);
	nsc_assert(ret == 0, "sock->ops->getname error");
	return ret;
}

int nsc_accept_sctp(void *so, void **a)
{
    struct socket *sock = (struct socket *)so, *newsock;
    int error;

    newsock = nsc_socreate_sctp();

    newsock->type = sock->type;
    newsock->ops = sock->ops;
 
    // Note: we don't have sock->file->f_flags for the last argument to
    // the following function. We kinda don't support files... The last
    // argument just means the accepted socket inherits flags from so. We
    // don't really care about this.
    error = sock->ops->accept(sock, newsock, O_NONBLOCK);
   
    if(error < 0) {
        sock_release(newsock);
        return error;
    }

    // We could use newsock->ops->getname() to get the other end of
    // the connection. But we don't care.
    *a = newsock;
    return 0;

}

int nsc_sosend(void *so, void *data, unsigned int datalen)
{
    struct msghdr msg;
    struct socket *sock;
    struct iovec iov;

    sock = (struct socket *)so;

    msg.msg_name = NULL;
    msg.msg_namelen = 0;
    msg.msg_control = NULL;
    msg.msg_controllen = 0;
    msg.msg_iov = (struct iovec *)&iov;
    msg.msg_iovlen = 1;
    msg.msg_flags = MSG_DONTWAIT;// : 0;

    if (sock->type == SOCK_SEQPACKET)
        msg.msg_flags |= MSG_EOR;

    iov.iov_base = (void *)data;
    iov.iov_len = datalen;

    return sock_sendmsg(sock, &msg, datalen);
}

#define MAX_SOCK_ADDR	128
int nsc_soreceive(void *so, void *buf, int *buflen)
{
    struct socket *sock = (struct socket *)so;
    struct iovec iov;
    struct msghdr msg;
    char address[MAX_SOCK_ADDR];
    int error, flags = 0;

    memset(&iov, 0, sizeof(iov));
    memset(&msg, 0, sizeof(msg));

    msg.msg_control = NULL;
    msg.msg_controllen = 0;
    msg.msg_iovlen = 1;
    msg.msg_iov = &iov;
    iov.iov_len = *buflen;
    iov.iov_base = buf;
    msg.msg_name = address;
    msg.msg_namelen = MAX_SOCK_ADDR;

    flags = MSG_DONTWAIT;
    
    error = sock_recvmsg(sock, &msg, *buflen, flags);
    if(error > 0) {
        *buflen = error;
        return 0;
    } else {
        *buflen = 0;
    }
    return error;
}

int nsc_is_connected(void *so)
{
    /*
     * The following is a bit of a hack. When we are not connected, the 
     * simulator continuously polls us to check if we are connected. In the
     * Linux stack, we just call the inet_stream_connect function to check
     * if the endpoint is connected.
     */
    int error = nsc_soconnect(so, 0, 0);
    if (error == -EISCONN) {
      return 1;
    }
    /* nsc_soconnect will return 0 when it transitions from unconnected to
     * connected. The code below handles this case correctly so we return that
     * we are connected. If we didn't transition state, the check earlier for
     * -EISCONN is triggered. */
    if (error == 0) {
      return 1;
    }
    return 0;
}

int nsc_get_hz()
{
  return HZ;
}

// ------------------------------------------------------------------------
#define ROUNDUP(a) \
    ((a) > 0 ? (1 + (((a) - 1) | (sizeof(long) - 1))) : sizeof(long))
#define ADVANCE(x, n) (x += ROUNDUP((n)->sa_len))
#define NEXTADDR(w, u) \
    if (rtm_addrs & (w)) {\
        l = ROUNDUP(u.sa.sa_len); memmove(cp, &(u), l); cp += l;\
            if (verbose) sodump(&(u),"u");\
    }


void nsc_add_default_gw(unsigned int gw_addr)
{
#if 0
    struct socket *so = NULL;
    struct {
        struct rt_msghdr msg;
        unsigned char space[512];
    } rtm_msg;
    struct sockaddr_in *dst, *gtw, *mask;


#define rtm rtm_msg.msg
    
    
    memset(&rtm_msg, 0, sizeof(rtm_msg));
    
    rtm.rtm_version = RTM_VERSION; 
    rtm.rtm_type = RTM_ADD;
    rtm.rtm_flags = 2051; // hmm... what are these???
    rtm.rtm_addrs = RTA_DST | RTA_GATEWAY | RTA_NETMASK; // == 7
    rtm.rtm_seq = 1;
    rtm.rtm_inits = 0;
    //rtm.rtm_pid = 0;
    //msg.rtm_index = 0;  
    
    dst = (struct sockaddr_in *)rtm_msg.space;
    dst->sin_family = AF_INET;

    gtw = (struct sockaddr_in *)&rtm_msg.space[ ROUNDUP(dst->sin_len) ];
    gtw->sin_family = AF_INET;
    memcpy(&gtw->sin_addr, &gw_addr, 4);
        
    mask = (struct sockaddr_in *)&rtm_msg.space[ ROUNDUP(dst->sin_len) +
        ROUNDUP(gtw->sin_len) ];
    mask->sin_family = AF_INET;

    rtm.rtm_msglen = sizeof(struct rt_msghdr) + ROUNDUP(dst->sin_len)*3;

    assert(
            nsc_sosend(so, &rtm_msg, rtm.rtm_msglen)
            == 0
          );

    nsc_sodisconnect(so);

#endif

#if 0

    struct {
        struct nlmsghdr nh;
        struct rtmsg    rt;
        char            attrbuf[512];
    } req;
    struct rtattr *rta;
    struct socket *so;
    struct sockaddr_in gw, dst;
    int error;
    
    nsc_assert( 
        sock_create(PF_NETLINK, SOCK_DGRAM, NETLINK_ROUTE, &so)
	== 0, "sock_create failed in nsc_add_default_gw");


    memset(&req, 0, sizeof(req));
    req.nh.nlmsg_len = NLMSG_LENGTH(sizeof(struct rtmsg));
    req.nh.nlmsg_flags = NLM_F_REQUEST/**/|NLM_F_CREATE|NLM_F_APPEND;
    req.nh.nlmsg_type = RTM_NEWROUTE;

    req.rt.rtm_family = AF_INET;
    req.rt.rtm_dst_len = 0; //sizeof(struct sockaddr_in);
    req.rt.rtm_src_len = 0;
    //req.rt.rtm_tos = 0;

    req.rt.rtm_table = RT_TABLE_DEFAULT;
    req.rt.rtm_protocol = RTPROT_KERNEL;
    req.rt.rtm_scope = 0; //RT_SCOPE_UNIVERSE;
    req.rt.rtm_type = RTN_UNICAST;
    
    req.rt.rtm_flags = 0;

    gw.sin_family = AF_INET;
    memcpy(&gw.sin_addr, &gw_addr, 4);
    
    rta = (struct rtattr *)(((char *) &req) + NLMSG_ALIGN(req.nh.nlmsg_len));
    rta->rta_type = RTA_GATEWAY;
    rta->rta_len = RTA_LENGTH(sizeof(struct sockaddr_in));
    memcpy(RTA_DATA(rta), &gw, sizeof(struct sockaddr_in));

    /*rta = (struct rtattr *)((char *)rta + RTA_ALIGN(rta->rta_len));
    rta->rta_type = RTA_DST;
    rta->rta_len = RTA_LENGTH(sizeof(struct sockaddr_in));
    memcpy(RTA_DATA(rta), &dst, sizeof(struct sockaddr_in));*/

    req.nh.nlmsg_len = NLMSG_ALIGN(req.nh.nlmsg_len) + 
        RTA_LENGTH(sizeof(struct sockaddr_in));
    
    error = nsc_sosend(so, &req, req.nh.nlmsg_len);
    //nsc_assert(error == 0, "Unable to add default route");
    
    //send(rtnetlink_sk, &req, req.n.nlmsg_len);
#endif
	struct socket *so;
	struct rtentry entry;
	struct sockaddr_in *g, *d, *m;
	int error;

	nsc_assert(sock_create(PF_INET, SOCK_DGRAM, IPPROTO_IP, &so) == 0,
				"sock_create failed in nsc_add_default_gw");

	memset(&entry, 0, sizeof(entry));
	g = (struct sockaddr_in *)&entry.rt_gateway;
	d = (struct sockaddr_in *)&entry.rt_dst;
	m = (struct sockaddr_in *)&entry.rt_genmask;

	g->sin_addr.s_addr = gw_addr;
	g->sin_family = AF_INET;
	m->sin_family = AF_INET;
	d->sin_family = AF_INET;

	/* see include/linux/route.h for all rt_flags.*/
	entry.rt_flags = RTF_UP | RTF_GATEWAY;

	error = so->ops->ioctl(so, SIOCADDRT, (unsigned long)&entry);
	if (error) {
		nsc_debugf("ioctl(SIOCADDRT) error: %d\n", error);
		nsc_assert(0, "ioctl");
	}

	nsc_sodisconnect(so);
}


int nsc_do_sysctl(const char *sysctl_name, void *oldval, size_t *oldlenp,
        void *newval, size_t newlen)
{
    int name[10];
    int nlen = 0; 
    const char *s = sysctl_name;

    do {
        if (s[0] == '.')
            s++;

        if(strncmp(s, "net.", 4) == 0) {
            name[nlen++] = CTL_NET;
	} else if(strncmp(s, "ipv4.", 5) == 0) {
            name[nlen++] = NET_IPV4;
        } else if(strncmp(s, "core.", 5) == 0) {
            name[nlen++] = NET_CORE;
	} else if (strncmp(s, "tcp_congestion_control", 22) == 0) {
	  name[nlen++] = NET_TCP_CONG_CONTROL;
	  if(nlen != 3) return -1;
	  break;
	} else if (strcmp(s, "tcp_allowed_congestion_control") == 0) {
	  name[nlen++] = NET_TCP_ALLOWED_CONG_CONTROL;
	  if (nlen != 3) return -1;
	  break;
        } else if(strncmp(s, "wmem_max", 8) == 0) {
            name[nlen++] = NET_CORE_WMEM_MAX;
            // net/core/wmem_max
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "rmem_max", 8) == 0) {
            name[nlen++] = NET_CORE_RMEM_MAX;
            // net/core/rmem_max
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "rmem_default", 12) == 0) {
            name[nlen++] = NET_CORE_RMEM_DEFAULT;
            // net/core/rmem_default
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "wmem_default", 12) == 0) {
            name[nlen++] = NET_CORE_WMEM_DEFAULT;
            // net/core/wmem_default
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "tcp_retrans_collapse", 18) == 0) {
            name[nlen++] = NET_IPV4_TCP_RETRANS_COLLAPSE;
            // net/ipv4/tcp_retrans_collapse
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "tcp_sack", 8) == 0) {
            name[nlen++] = NET_IPV4_TCP_SACK;
            // net/ipv4/tcp_sack
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "tcp_window_scaling", 18) == 0) {
            name[nlen++] = NET_IPV4_TCP_WINDOW_SCALING;
            // net/ipv4/tcp_window_scaling
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "tcp_timestamps", 14) == 0) {
            name[nlen++] = NET_IPV4_TCP_TIMESTAMPS;
            // net/ipv4/tcp_timestamps
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "tcp_rfc1337", 11) == 0) {
            name[nlen++] = NET_TCP_RFC1337;
            // net/ipv4/tcp_rfc1337
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "tcp_stdurg", 10) == 0) {
            name[nlen++] = NET_TCP_STDURG;
            // net/ipv4/tcp_stdurg
            if(nlen != 3) return -1;
            break;
        } else if(strcmp(s, "tcp_reordering") == 0) {
            name[nlen++] = NET_TCP_REORDERING;
            // net/ipv4/tcp_reordering
            if(nlen != 3) return -1;
            break;
        } else if(strcmp(s, "tcp_frto") == 0) {
            name[nlen++] = NET_TCP_FRTO;
            if(nlen != 3) return -1;
            break;
        } else if(strcmp(s, "tcp_syncookies") == 0) {
            name[nlen++] = NET_TCP_SYNCOOKIES;
            if(nlen != 3) return -1;
            break;
        } else if(strcmp(s, "tcp_frto_response") == 0) {
            name[nlen++] = NET_TCP_FRTO_RESPONSE;
            if(nlen != 3) return -1;
            break;
        } else if(strcmp(s, "tcp_max_ssthresh") == 0) {
            name[nlen++] = NET_TCP_MAX_SSTHRESH;
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "tcp_fack", 8) == 0) {
            name[nlen++] = NET_TCP_FACK;
            // net/ipv4/tcp_fack
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "tcp_dsack", 8) == 0) {
            name[nlen++] = NET_TCP_DSACK;
            // net/ipv4/tcp_dsack
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "tcp_ecn", 7) == 0) {
            name[nlen++] = NET_TCP_ECN;
            // net/ipv4/tcp_ecn
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "tcp_adv_win_scale", 17) == 0) {
            name[nlen++] = NET_TCP_ADV_WIN_SCALE;
            // net/ipv4/tcp_adv_win_scale
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "tcp_app_win", 11) == 0) {
            name[nlen++] = NET_TCP_APP_WIN;
            // net/ipv4/tcp_app_win
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "tcp_rmem", 8) == 0) {
            name[nlen++] = NET_TCP_RMEM;
            // net/ipv4/tcp_rmem
            if(nlen != 3) return -1;
            break;
        } else if(strncmp(s, "tcp_wmem", 8) == 0) {
            name[nlen++] = NET_TCP_WMEM;
            // net/ipv4/tcp_wmem
            if(nlen != 3) return -1;
            break;
        }

    } while( (s = strchr(s, '.')) );

    if (s != NULL)
       return do_sysctl(name, nlen, oldval, oldlenp, newval, newlen);
    nsc_debugf("%s: sysctl \"%s\" not recognized by cradle glue\n", __func__, sysctl_name);
    return -ENOTDIR; // yes, ENOTDIR, see sysctl(2) man page
}

int nsc_setsockopt(void *so, char *optname, void *val, size_t valsize)
{
    struct socket *sock = (struct socket *)so;
    int opt;

    if( strcmp(optname, "SO_SNDBUF") == 0 ) opt = SO_SNDBUF;
    else if( strcmp(optname, "SO_RCVBUF") == 0 ) opt = SO_RCVBUF;
    else return -1;
    
    return sock_setsockopt(sock, 0, opt, (char *)val, valsize);
}

int nsc_get_tcp_var(void *so, const char *var, char *result, int rlen)
{
    struct sock *sock = ((struct socket *)so)->sk;
    struct tcp_sock *tp = tcp_sk(sock);

         if(strcmp(var, "srtt_") == 0)  // in ticks
    {
        snprintf(result, rlen, "%f", (float)(tp->srtt >> 3));
        return 1;
    }
    else if(strcmp(var, "rttvar_") == 0) // in ticks
    {
        snprintf(result, rlen, "%f", (float)tp->rttvar);
        return 1;
    }
    /*
    else if(strcmp(var, "backoff_") == 0) 
    {
    }*/
    else if(strcmp(var, "cwnd_") == 0)
    {
        snprintf(result, rlen, "%u", tp->snd_cwnd);
        return 1;
    }
    else if(strcmp(var, "ssthresh_") == 0)
    {
        snprintf(result, rlen, "%u", tp->snd_ssthresh);
        return 1;
    }
    else if(strcmp(var, "seqno_") == 0)
    {
        snprintf(result, rlen, "%u", tp->snd_nxt);
        return 1;
    }
    else if(strcmp(var, "ack_") == 0)
    {
        snprintf(result, rlen, "%u", tp->rcv_nxt);
        return 1;
    }
#if 0 /* XXX: need to change */
    else if(strcmp(var, "rxtcur_") == 0)
    {
        snprintf(result, rlen, "%f", (float)tp->rto);
        return 1;
    }
#endif

    return 0;
}

int nsc_printk_get_prio(const char *s)
{
	int prio = -1;
#define is_errlevel(a, err)	(strncmp((a), (err), sizeof(err) -1) == 0)
	if (is_errlevel(s, KERN_ALERT))
		prio = 1;
	else if (is_errlevel(s, KERN_CRIT))
		prio = 2;
	else if (is_errlevel(s, KERN_ERR))
		prio = 3;
	else if (is_errlevel(s, KERN_WARNING))
		prio = 4;
	else if (is_errlevel(s, KERN_NOTICE))
		prio = 5;
	else if (is_errlevel(s, KERN_INFO))
		prio = 6;
	else if (is_errlevel(s, KERN_DEBUG))
		prio = 7;
#undef is_errlevel
	return prio;
}


void init_waitqueue_head(wait_queue_head_t *q)
{
  q->lock = SPIN_LOCK_UNLOCKED;
  INIT_LIST_HEAD(&q->task_list);
}

int nsc_convert_syserr_to_nscerr(int syserr)
{
/*
 * Linux uses negative values for errors, so
 * we assume >= 0 is a success indicator that doesn't require any mapping.
 * NSC_E* constants are always < 0.
 */
	if (syserr >= 0)
		return syserr;

	switch (syserr) {
	case -ERESTART: // fallthrough
	case -EAGAIN: return NSC_EAGAIN;
	case -EADDRINUSE: return NSC_EADDRINUSE;
	case -EADDRNOTAVAIL: return NSC_EADDRNOTAVAIL;
	case -EALREADY: return NSC_EALREADY;
	case -ECONNREFUSED: return NSC_ECONNREFUSED;
	case -ECONNRESET: return NSC_ECONNRESET;
	case -EHOSTDOWN: return NSC_EHOSTDOWN;
	case -EHOSTUNREACH: return NSC_EHOSTUNREACH;
	case -EINPROGRESS: return NSC_EINPROGRESS;
	case -EISCONN: return NSC_EISCONN;
	case -EMSGSIZE: return NSC_EMSGSIZE;
	case -ENETUNREACH: return NSC_ENETUNREACH;
	case -ENOTCONN: return NSC_ENOTCONN;
	case -ESHUTDOWN: return NSC_ESHUTDOWN;
	case -ETIMEDOUT: return NSC_ETIMEDOUT;

	case -ENOTDIR: // used by sysctl and sysctl cradle code
		printk(KERN_INFO "%s: Saw ENOTDIR\n", __func__);
		return NSC_ENOTDIR;
	/* Error conditions that we should never see */
	case -EPROTONOSUPPORT:
	case -EDESTADDRREQ:
	case -EPROTOTYPE:
	case -ENOBUFS:
	case -ENONET:
	case -EPROTO:
	case -EOVERFLOW: nsc_assert(0, "network stack returned fatal error");
	}

	printk(KERN_WARNING "%s: Unhandled error number %d\n", __func__, syserr);
	return NSC_EUNKNOWN;
}
