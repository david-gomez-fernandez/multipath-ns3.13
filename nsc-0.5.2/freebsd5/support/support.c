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
#include <sys/proc.h>
#include <sys/lock.h>
#include <sys/mutex.h>
#include <sys/kernel.h>
#include <sys/socket.h>
#include <sys/socketvar.h>
#include <net/if.h>
#include <net/if_types.h>
#include <netinet/in.h>
#include <netinet/in_pcb.h>
#include <netinet/tcp_var.h>


#include "support/support.h"
#include "num_stacks.h"

#include <sys/linker_set.h>
#include <sys/copyright.h>

#include "sim_errno.h"
#include "nsc_sockaddr_stack.h"

struct sysinit **sysinit = NULL, **sysinit_end, **newsysinit, **newsysinit_end;
SET_DECLARE(sysinit_set, struct sysinit);

// exported from support/sort_sysinit.c:
extern void sort_sysinit(struct sysinit **start, struct sysinit **,struct sysinit **);
// ?

// Get rid of warnings by declaring some functions:
extern void init_systm();
extern void nsc_assert(int);

//! Silly little copyright notice. In bright green!
char nsc_copyright[] =
"\033[1;32;40mNetwork Simulation Cradle\033[0m\n"
"Copyright (c) 2003 Sam Jansen.\n";

SYSINIT(placeholder, SI_SUB_DUMMY, SI_ORDER_ANY, NULL, NULL)
/** Used during kernel initialisation normally. We used it to print the
 * normal copyright notices + our own. */
static void
print_caddr_t(void *data __unused)
{
    printf("%s", (char *)data);
}
SYSINIT(announce, SI_SUB_COPYRIGHT, SI_ORDER_FIRST, print_caddr_t, copyright)
SYSINIT(version, SI_SUB_COPYRIGHT, SI_ORDER_SECOND, print_caddr_t, nsc_copyright)

/** Call all the system intialisation functions (the sysinit set) */
void kern_init()
{
    register struct sysinit **sipp, **ne;
    // The following would normally happen in some vm setup stuff, we
    // dont include all the vm code (doesn't really make sense in
    // userspace).
    unsigned int size = kern_timeout_callwheel_alloc(NULL);
    kern_timeout_callwheel_alloc(malloc(size, 0, 0));
    kern_timeout_callwheel_init();

    // Lets initialise ticks to 1 -- 0 is often a special value and can be
    // interpreted in various undesirable ways. A machine would never have
    // ticks equal to 0 after booting up anyway.
    ticks = 1;

    // Taken from kern_main.c in FreeBSD 5.0
    if (sysinit == NULL) {
        sysinit = SET_BEGIN(sysinit_set);
        sysinit_end = SET_LIMIT(sysinit_set);
    }

    sort_sysinit(sysinit, sysinit_end, ne);
}

int cur_stack = 0;
int num_stacks = 0;

int new_stack_id()
{
    return num_stacks++;
}

int get_stack_id()
{
    return cur_stack;
}

void set_stack_id(int id)
{
    cur_stack = id;
}

/** Legacy function that was used when we needed locking for threads.
 * Has been left in for now, though it serves no purpose. */
void lock_stack()
{
}

/** Legacy function that has no purpose. */
void unlock_stack()
{
    assert(get_stack_id() != -1);
}

/* ---------------------------------------------------------------- */
/* Socket stuff
*/
#include <sys/uio.h>
#include <sys/socket.h>
#include <sys/socketvar.h>
#include <sys/protosw.h>
#include <netinet/in.h>

void nsc_socket_upcall(struct socket *so, void *arg, int waitflag)
{
  extern void nsc_wakeup();
  nsc_wakeup();
}

void nsc_wakeup_enable(struct socket *s)
{
    /* Set the wait flags to make the kernel think there is an application 
     * waiting on the socket */
    (s)->so_rcv.sb_flags |= SB_UPCALL;
    (s)->so_snd.sb_flags |= SB_UPCALL;
    (s)->so_upcall = nsc_socket_upcall;
}

void nsc_socreate_udp(struct socket **so)
{
    assert(
        socreate(AF_INET, so, SOCK_DGRAM, IPPROTO_UDP, proc0.p_ucred, 
            curthread)
        == 0);
}


void nsc_socreate_tcp(struct socket **so)
{
    assert(
        socreate(AF_INET, so, SOCK_STREAM, IPPROTO_TCP, proc0.p_ucred, 
            curthread)
        == 0);

    nsc_wakeup_enable(*so);
}

void nsc_soconnect(struct socket *so, unsigned int addr, int port)
{
    struct sockaddr_in s_dest;
    
    memset(&s_dest, 0, sizeof(struct sockaddr_in));
    s_dest.sin_family = AF_INET;          
    s_dest.sin_len = sizeof(struct sockaddr_in);          
    s_dest.sin_port = port;
    s_dest.sin_addr.s_addr = addr;
        
    soconnect(so, (struct sockaddr *)&s_dest, curthread);
}

void nsc_soclose(struct socket *so)
{
    soclose(so);
}

int nsc_sosend_blocking(struct socket *so, struct sockaddr_in *dest,
        const void *data, unsigned int datalen)
{

    struct msghdr msg;
    struct iovec aiov;
    struct uio auio;

    msg.msg_namelen = 0;
    msg.msg_name = (struct sockaddr *)dest;
    msg.msg_iov = &aiov;
    msg.msg_iovlen = 1;
    msg.msg_control = 0;
    msg.msg_flags = 0;
    
    aiov.iov_base = (void *)data;
    aiov.iov_len = datalen;

    auio.uio_iov = msg.msg_iov;
    auio.uio_iovcnt = msg.msg_iovlen;
    auio.uio_segflg = UIO_USERSPACE;
    auio.uio_rw = UIO_WRITE;
    auio.uio_td = curthread;
    auio.uio_offset = 0; 
    auio.uio_resid = aiov.iov_len;

    // Make sure the socket is blocking
    so->so_state &= ~SS_NBIO;

    return so->so_proto->pr_usrreqs->pru_sosend(
            so,                    // struct socket *so
            msg.msg_name,        // struct sockaddr *addr
            &auio,                // struct uio *uio
            (struct mbuf *)0,    // struct mbuf *top
            (struct mbuf *)0,   // struct mbuf *control
            0,                    // int flags 
            curthread);            // struct thread *td
}

int nsc_sosend(struct socket *so, struct sockaddr_in *dest, 
        const void *data, int *datalen)
{
    struct msghdr msg;
    struct iovec aiov;
    struct uio auio;
        int error;

    msg.msg_namelen = 0;
    msg.msg_name = (struct sockaddr *)dest;
    msg.msg_iov = &aiov;
    msg.msg_iovlen = 1;
    msg.msg_control = 0;
    msg.msg_flags = 0;
    
    aiov.iov_base = (void *)data;
    aiov.iov_len = *datalen;

    auio.uio_iov = msg.msg_iov;
    auio.uio_iovcnt = msg.msg_iovlen;
    auio.uio_segflg = UIO_USERSPACE;
    auio.uio_rw = UIO_WRITE;
    auio.uio_td = curthread;
    auio.uio_offset = 0;   
    auio.uio_resid = aiov.iov_len;

    // Make sure the socket is non-blocking, so we dont try and msleep()
    so->so_state |= SS_NBIO;

    error = so->so_proto->pr_usrreqs->pru_sosend(
            so,                    // struct socket *so
            msg.msg_name,        // struct sockaddr *addr
            &auio,                // struct uio *uio
            (struct mbuf *)0,    // struct mbuf *top
            (struct mbuf *)0,   // struct mbuf *control
            0,                    // int flags 
            curthread);            // struct thread *td
        
        *datalen = auio.uio_offset;

        return error;
}

int nsc_soreceive_blocking(struct socket *so, unsigned char *buf, int *buflen,
        struct sockaddr **from)
{

    struct msghdr msg;
    struct iovec aiov;
    struct uio auio;
    int error;
    
    msg.msg_namelen = 0;
    msg.msg_name = (caddr_t)0; // from ... ?
    msg.msg_iov = &aiov;
    msg.msg_iovlen = 1;
    msg.msg_control = 0;
    msg.msg_flags = 0;
    aiov.iov_base = buf;
    aiov.iov_len = *buflen;

    auio.uio_iov = msg.msg_iov;
    auio.uio_iovcnt = msg.msg_iovlen;
    auio.uio_segflg = UIO_USERSPACE;
    auio.uio_rw = UIO_READ; 
    auio.uio_td = curthread;
    auio.uio_offset = 0;      
    auio.uio_resid = *buflen;

    error = so->so_proto->pr_usrreqs->pru_soreceive(
                so, from, &auio, (struct mbuf **)0, 
                (struct mbuf **)0,
                &msg.msg_flags);

    buf = aiov.iov_base - auio.uio_offset;
    *buflen = auio.uio_offset;

    return error;
}

int nsc_soreceive(struct socket *so, unsigned char *buf, int *buflen,
        struct sockaddr **from)
{
    struct msghdr msg;
    struct iovec aiov;
    struct uio auio;
    int error;
    
    msg.msg_namelen = 0;
    msg.msg_name = (caddr_t)0; // from ... ?
    msg.msg_iov = &aiov;
    msg.msg_iovlen = 1;
    msg.msg_control = 0;
    msg.msg_flags = MSG_DONTWAIT; // DONTWAIT: nonblocking

    aiov.iov_base = buf;
    aiov.iov_len = *buflen;

    auio.uio_iov = msg.msg_iov;
    auio.uio_iovcnt = msg.msg_iovlen;
    auio.uio_segflg = UIO_USERSPACE;
    auio.uio_rw = UIO_READ; 
    auio.uio_td = curthread;
    auio.uio_offset = 0;      
    auio.uio_resid = aiov.iov_len;

    debugf("%s: buf:%p len:%d\n", __FUNCTION__, buf, *buflen);

    error = so->so_proto->pr_usrreqs->pru_soreceive(
                so, from, &auio, (struct mbuf **)0, 
                (struct mbuf **)0,
                &msg.msg_flags);

    buf = aiov.iov_base - auio.uio_offset;
    *buflen = auio.uio_offset;

    return error;
}

int nsc_getsockpeername(struct socket *so, struct nsc_sockaddr *sa, int peername)
{
    struct sockaddr *sa_kern;
    int ret;

    if (peername)
        ret = so->so_proto->pr_usrreqs->pru_peeraddr(so, &sa_kern);
    else
        ret = so->so_proto->pr_usrreqs->pru_sockaddr(so, &sa_kern);

    nsc_assert(ret == 0);
    if (ret == 0) {
        nsc_convert_sockaddr(sa_kern, sa);
        nsc_free(sa_kern, 0);
    }
    return ret;
}


#include <sys/sysctl.h>
int nsc_sysctl(const char *sysctl_name, void *oldval, size_t *oldlenp,
    void *newval, size_t newlen)
{
    int retval = 0;
    int error = kernel_sysctlbyname(curthread, sysctl_name, oldval, oldlenp,
            newval, newlen, &retval);
    return error;
}

extern int hz;

void nsc_set_hz(int i_hz)
{
    hz = i_hz;
}


/* exported from support/interface.c */
void
fake_ether_attach(struct ifnet *ifp, unsigned int addr, unsigned int mask, int);

extern int  inet_aton(const char *cp, struct in_addr *pin);


void *new_interface(unsigned int addr, unsigned int mask, int mtu)
{
    struct ifnet *ifp = (struct ifnet *)malloc(sizeof(struct ifnet), 0, 0);

    memset(ifp, 0, sizeof(struct ifnet));

    // Tell the stack we have a new interface
    fake_ether_attach(ifp, addr, mask, mtu);

    return ifp;
}

void tcplisten(void *socket, int port)
{
    struct socket *so = (struct socket *)socket;
    struct sockaddr_in nam;
    int error;

    // Bind socket
    memset(&nam, 0, sizeof(struct sockaddr_in));
    nam.sin_len = sizeof(struct sockaddr_in);
    nam.sin_family = AF_INET;
    nam.sin_port = htons((short)port);
    nam.sin_addr.s_addr = INADDR_ANY;

    error =
        sobind(so, (struct sockaddr *)&nam, curthread);

    assert(!error);

    // set the socket to be in a listening state
    error =
        solisten(so, 5, curthread);

    assert(!error);

    // The socket still needs to be set into an accepting state at this
    // point.
}

int tcp_accept_low(struct socket *so, struct socket **s, struct sockaddr **nam)
{
    int error = 0;
    struct socket *ts;

    if(!so)
        return ENOTCONN;
    
    if (TAILQ_EMPTY(&so->so_comp) && so->so_error == 0)
        return EAGAIN;

    if(so->so_error) {
        error = so->so_error;
        so->so_error = 0;
        return error;
    }

    /*
     * At this point we know that there is at least one connection
     * ready to be accepted. Remove it from the queue prior to
     * allocating the file descriptor for it since falloc() may
     * block allowing another process to accept the connection
     * instead.
     */
    ts = TAILQ_FIRST(&so->so_comp);
    TAILQ_REMOVE(&so->so_comp, ts, so_list);
    so->so_qlen--;

    /* connection has been removed from the listen queue */
    KNOTE_UNLOCKED(&so->so_rcv.sb_sel.si_note, 0);

    /* ts->so_state &= ~SS_COMP; */ /* Remove for 5.3 */
    ts->so_head = NULL;

    error = soaccept(ts, nam);

    *s = ts;
    
    return error;
}

void *tcpaccept(void *socket, int *err)
{
    struct socket *s;
    int e = 0;
    struct sockaddr *nam;

    if( (e = tcp_accept_low((struct socket *)socket, &s, &nam)) == 0 ) {
        extern void nsc_wakeup_enable(struct socket *s);
        nsc_wakeup_enable(s);
        return s;
    }

    *err = e;

    return NULL;
}

void tcpdisconnect(void *socket)
{
    struct socket *so = (struct socket *)socket;

    sodisconnect(so);
}

int tcpisconnecting(void *socket)
{
    struct socket *so = (struct socket *)socket;

    return (so->so_state & SS_ISCONNECTING) && so->so_error == 0;
}

int tcpisconnected(void *socket)
{
    struct socket *so = (struct socket *)socket;

    return (so->so_state & SS_ISCONNECTED) > 0;
}

int nsc_setsockopt(void *socket, char *optname, void *val, size_t valsize)
{
    int opt;
    struct socket *so = (struct socket *)socket; 
    struct sockopt sopt;

    if( strcmp(optname, "SO_SNDBUF") == 0 ) opt = SO_SNDBUF;
    else if( strcmp(optname, "SO_RCVBUF") == 0 ) opt = SO_RCVBUF;
    else return 1;
    
    sopt.sopt_name = opt;
    sopt.sopt_dir = SOPT_SET;
    sopt.sopt_level = SOL_SOCKET;
    sopt.sopt_val = val;
    sopt.sopt_valsize = valsize;
    sopt.sopt_td = NULL;
    
    return sosetopt(so, &sopt);
}

int nsc_get_tcp_var(void *socket, const char *var, char *result, int rlen)
{
    // Perform common functions: get at a TCP structure:
    struct socket *so = (struct socket *)socket;
    struct inpcb *inp;
    struct tcpcb *tp;
    float t_to_s = 1.0f / (float)hz; // ticks to seconds

    inp = sotoinpcb(so);
    if (inp == 0) {
        return 0;
    }
    tp = intotcpcb(inp);
    // --- 

         if(strcmp(var, "srtt_") == 0)  // in ticks
    {
        snprintf(result, rlen, "%f", (float)tp->t_srtt / 
                (float)TCP_RTT_SCALE);
        return 1;
    }
    else if(strcmp(var, "rttvar_") == 0) // in ticks
    {
        snprintf(result, rlen, "%f", (float)tp->t_rttvar / 
                (float)TCP_RTTVAR_SCALE);
        return 1;
    }
    /*
    // Don't really care about backoff for now; if we ever do the code below
    // almost works. Probably just need to find out where tcp_backoff is
    // defined.
    else if(strcmp(var, "backoff_") == 0) 
    {
        snprintf(result, rlen, "%lu", tcp_backoff[tp->t_rxtshift]);
        return 1;
    }*/
    else if(strcmp(var, "cwnd_") == 0)
    {
        snprintf(result, rlen, "%lu", tp->snd_cwnd);
        return 1;
    }
    else if(strcmp(var, "ssthresh_") == 0)
    {
        snprintf(result, rlen, "%lu", tp->snd_ssthresh);
        return 1;
    }
    else if(strcmp(var, "seqno_") == 0)
    {
        snprintf(result, rlen, "%lu", (u_long)(tp->snd_nxt - tp->iss));
        return 1;
    }
    else if(strcmp(var, "ack_") == 0)
    {
        snprintf(result, rlen, "%lu", (u_long)(tp->rcv_nxt - tp->irs));
        return 1;
    }
    else if(strcmp(var, "rxtcur_") == 0)
    {
        snprintf(result, rlen, "%f", (float)tp->t_rxtcur);
        return 1;
    }

    return 0;
}


/*
 * Test whether the specified credentials imply "super-user" privilege.
 * Return 0 or EPERM.  The flag argument is currently used only to
 * specify jail interaction.
 */
int
suser_cred(struct ucred *cred, int flag)
/* [<][>][^][v][top][bottom][index][help] */
{
    return 0;
}


int nsc_convert_syserr_to_nscerr(int syserr)
{
/*
 * we assume 0 is a success indicator that doesn't require any mapping.
 * NSC_E* constants are always < 0.
 */
    if (syserr == 0)
        return syserr;

    switch (syserr) {
    case ERESTART: // fallthrough
    case EAGAIN: return NSC_EAGAIN;
    case EADDRINUSE: return NSC_EADDRINUSE;
    case EADDRNOTAVAIL: return NSC_EADDRNOTAVAIL;
    case EALREADY: return NSC_EALREADY;
    case ECONNREFUSED: return NSC_ECONNREFUSED;
    case ECONNRESET: return NSC_ECONNRESET;
    case EHOSTDOWN: return NSC_EHOSTDOWN;
    case EHOSTUNREACH: return NSC_EHOSTUNREACH;
    case EINPROGRESS: return NSC_EINPROGRESS;
    case EISCONN: return NSC_EISCONN;
    case EMSGSIZE: return NSC_EMSGSIZE;
    case ENETUNREACH: return NSC_ENETUNREACH;
    case ENOTCONN: return NSC_ENOTCONN;
    case ESHUTDOWN: return NSC_ESHUTDOWN;
    case ETIMEDOUT: return NSC_ETIMEDOUT;
    /* Error conditions that we should never see */
    case EPROTONOSUPPORT:
    case EDESTADDRREQ:
    case EPROTOTYPE:
    case ENOBUFS:
    case EOVERFLOW: nsc_assert(0 && "network stack returned fatal error");
    }

    nsc_printf("%s: Unhandled error number %d\n", __func__, syserr);
    return NSC_EUNKNOWN;
}
