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
#include <sys/filedesc.h>
#include <sys/proc.h>
#include <sys/file.h>
#include <sys/buf.h>
#include <sys/malloc.h>
#include <sys/event.h>
#include <sys/mbuf.h>
#include <sys/protosw.h>
#include <sys/socket.h>
#include <sys/socketvar.h>
#include <sys/signalvar.h>
#include <sys/unpcb.h>
#include <sys/un.h>

#include <netinet/in.h>

#include "support/nsc.h"
#include "nsc_sockaddr_stack.h"

void nsc_soconnect(void *so, int port, unsigned int addr)
{	
    struct sockaddr_in s_dest;
    struct mbuf *m;
    const int slen = sizeof(struct sockaddr_in);

    memset(&s_dest, 0, slen);
    s_dest.sin_family = AF_INET;	 	 
    s_dest.sin_len = slen;
    s_dest.sin_port = port;
    s_dest.sin_addr.s_addr = addr;

    m = m_get(M_WAIT, MT_SONAME);
    assert(slen < MLEN);

    m->m_len = slen;

    memcpy(mtod(m, caddr_t), &s_dest, slen);

    // Mark our socket so wait we'd like to be notified
    ((struct socket *)so)->so_rcv.sb_flags |= SB_WAIT;
    ((struct socket *)so)->so_snd.sb_flags |= SB_WAIT;

    soconnect((struct socket *)so, m);
}

void *nsc_socreate_tcp()
{
    struct socket *so;
    assert(
        socreate(AF_INET, &so, SOCK_STREAM, IPPROTO_TCP)
    == 0);
    return so;
}

int nsc_sosend_blocking(void *socket, struct sockaddr_in *dest,
        const void *data, unsigned int datalen)
{
    struct msghdr msg;
    struct iovec aiov;
    struct uio auio;
    struct mbuf *addr;
    struct socket *so = (struct socket *)socket;
    int error = 0;

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
    auio.uio_offset = 0; 
    auio.uio_resid = aiov.iov_len;
    auio.uio_procp = curproc;

    // Make sure the socket is blocking
    so->so_state &= ~SS_NBIO;

    // It's not so nice having to do this every time. Perhaps a better
    // interface is in order.
    if(dest) {
        addr = m_get(M_WAIT, MT_DATA);
        memcpy(mtod(addr, void *), dest, sizeof(*dest));
    } else
        addr = NULL;

    error = sosend(so, addr, &auio, NULL, NULL, 0);

    if(addr)
        m_free(addr);

    return error;
}

int nsc_sosend(void *socket, struct sockaddr_in *dest,
        const void *data, unsigned int datalen)
{
    struct msghdr msg;
    struct iovec aiov;
    struct uio auio;
    struct mbuf *addr;
    struct socket *so = (struct socket *)socket;
    int error = 0;

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
    auio.uio_offset = 0; 
    auio.uio_resid = aiov.iov_len;
    auio.uio_procp = curproc;

    // Make sure the socket is non blocking
    so->so_state |= SS_NBIO;

    // It's not so nice having to do this every time. Perhaps a better
    // interface is in order.
    if(dest) {
        addr = m_get(M_WAIT, MT_DATA);
        memcpy(mtod(addr, void *), dest, sizeof(*dest));
    } else
        addr = NULL;

    // Mark our socket so wait we'd like to be notified
    so->so_rcv.sb_flags |= SB_WAIT;
    so->so_snd.sb_flags |= SB_WAIT;

    error = sosend(so, addr, &auio, NULL, NULL, 0);

    if(addr)
        m_free(addr);

    nsc_debugf("sosend: error=%d offset=%d\n", error, auio.uio_offset);

    if(error == 0 || (error == EAGAIN && auio.uio_offset > 0))
        return auio.uio_offset; // Length of data written

    return error > 0 ? -error : error;
}

int nsc_soreceive(void *socket, unsigned char *buf, int *buflen)
{
    struct iovec aiov;
    struct uio auio;
    struct socket *so = (struct socket *)socket;
    struct mbuf *paddr = NULL;
    int error;

    aiov.iov_base = buf;
    aiov.iov_len = *buflen;

    auio.uio_iov = &aiov;
    auio.uio_iovcnt = 1;
    auio.uio_segflg = UIO_USERSPACE;
    auio.uio_rw = UIO_READ; 
    auio.uio_offset = 0;      
    auio.uio_resid = *buflen;
    auio.uio_procp = curproc;

    // Make sure the socket is non blocking
    so->so_state |= SS_NBIO;

    // Mark our socket so wait we'd like to be notified
    so->so_rcv.sb_flags |= SB_WAIT;
    so->so_snd.sb_flags |= SB_WAIT;

    error = soreceive(so,
            &paddr,
            &auio,
            NULL, NULL, 0);

    buf = aiov.iov_base - auio.uio_offset;
    *buflen = auio.uio_offset;

    nsc_debugf("soreceive: error=%d buflen=%d\n",
            error, *buflen);

    return error;
}


void nsc_sodisconnect(void *socket)
{
    struct socket *so = (struct socket *)socket;
    // Mark our socket so wait we'd like to be notified
    so->so_rcv.sb_flags |= SB_WAIT;
    so->so_snd.sb_flags |= SB_WAIT;
    sodisconnect(so);
}

int nsc_soisconnected(void *socket)
{
    struct socket *so = (struct socket *)socket;
    return (so->so_state & SS_ISCONNECTED) > 0;
}

int nsc_islistening(void *socket)
{
    struct socket *so = (struct socket *)socket;
    return (so->so_options & SO_ACCEPTCONN) > 0;
}

void nsc_solisten(void *socket, int port)
{
    struct socket *so = (struct socket *)socket;
    struct sockaddr_in nam;
    struct mbuf *m;
    int error;

    // Bind socket
    memset(&nam, 0, sizeof(struct sockaddr_in));
    nam.sin_len = sizeof(struct sockaddr_in);
    nam.sin_family = AF_INET;
    nam.sin_port = htons((unsigned short)port);
    nam.sin_addr.s_addr = INADDR_ANY;

    m = m_get(M_WAIT, MT_SONAME);
    m->m_len = nam.sin_len; // hmm...
    memcpy(mtod(m, void *), &nam, sizeof(nam));

    // Mark our socket so wait we'd like to be notified
    so->so_rcv.sb_flags |= SB_WAIT;
    so->so_snd.sb_flags |= SB_WAIT;
    
    error = sobind(so, m);
    assert(error == 0);
        
    error = solisten(so, 5);
    assert(error == 0);
}

int nsc_soaccept(void *socket, void **asock)
{
    struct mbuf *nam;
    int error;
    struct socket *head, *so;

    head = (struct socket *)socket;
    // !!!
    head->so_state |= SS_NBIO;

    if ((head->so_options & SO_ACCEPTCONN) == 0) {
        error = EINVAL;
        goto bad;
    }
    if ((head->so_state & SS_NBIO) && head->so_qlen == 0) {
        error = EWOULDBLOCK;
        goto bad;
    }
    while (head->so_qlen == 0 && head->so_error == 0) {
        if (head->so_state & SS_CANTRCVMORE) {
            head->so_error = ECONNABORTED;
            break;
        }
        error = tsleep(&head->so_timeo, PSOCK | PCATCH, netcon, 0);
        if (error) {
            goto bad;
        }
    }
    if (head->so_error) {
        error = head->so_error;
        head->so_error = 0;
        goto bad;
    }
    /*
     * At this point we know that there is at least one connection
     * ready to be accepted. Remove it from the queue prior to
     * allocating the file descriptor for it since falloc() may
     * block allowing another process to accept the connection
     * instead.
     */
    so = TAILQ_FIRST(&head->so_q);
    if (soqremque(so, 1) == 0)
        panic("accept");

    *asock = so;

    /* connection has been removed from the listen queue */
    KNOTE(&head->so_rcv.sb_sel.si_note, 0);

    nam = m_get(M_WAIT, MT_SONAME);
    error = soaccept(so, nam);
    m_freem(nam);
bad:
    return (error);

}

#include <net/if.h>
#include <net/route.h>
#include <netinet/in.h>
#include <netinet/in_systm.h>
#include <netinet/in_var.h>
#include <netinet/ip.h>
#include <netinet/in_pcb.h>
#include <netinet/ip_var.h>
#include <netinet/tcp.h>
#include <netinet/tcp_fsm.h>
#include <netinet/tcp_seq.h>
#include <netinet/tcp_timer.h>
#include <netinet/tcp_var.h>
#include <netinet/tcpip.h>
#include <netinet/tcp_debug.h>

extern int hz;

int nsc_get_tcp_var(void *socket, const char *var, char *result, int rlen)
{
    // Perform common functions: get at a TCP structure:
    struct socket *so = (struct socket *)socket;
    struct inpcb *inp;
    struct tcpcb *tp;
    //float t_to_s = 1.0f / (float)hz; // ticks to seconds

    inp = sotoinpcb(so);
    if (inp == 0) {
        return NULL;
    }
    tp = intotcpcb(inp);
    // --- 

         if(strcmp(var, "srtt_") == 0)  // in ticks
    {
        snprintf(result, rlen, "%f", (float)tp->t_srtt / (float)TCP_RTT_SCALE
                );
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

int nsc_setsockopt(void *socket, char *optname, void *val, size_t valsize)
{
    struct socket *so = (struct socket *)socket;
    int err, level, name;
    struct mbuf *m;

    level = SOL_SOCKET;
    
    if(strcmp(optname, "SO_SNDBUF") == 0) {
        name = SO_SNDBUF;
    } else if(strcmp(optname, "SO_RCVBUF") == 0) {
        name = SO_RCVBUF;
    } else {
        // Unsupport setsockopt 'optname'
        return -1;
    }

    if(valsize) {
        m = m_get(M_WAIT, MT_SOOPTS);
        if(valsize > MLEN) {
            MCLGET(m, M_DONTWAIT);
        }
        err = copyin(val, mtod(m, caddr_t), valsize);
        m->m_len = valsize;
    }

    err = sosetopt(so, level, name, m);

    return err;
}

int nsc_getsockpeername(void *socket, struct nsc_sockaddr *sa, int getpeername)
{
	struct sockaddr *sa_kern;
	struct socket *so = socket;
	struct mbuf *m = m_get(M_WAIT, MT_SONAME);
	struct inpcb *inp = sotoinpcb(so);

	if (getpeername)
		in_setpeeraddr(inp, m);
	else
		in_setsockaddr(inp, m);

	sa_kern = mtod(m, struct sockaddr*);
	nsc_convert_sockaddr(sa_kern, sa);
	m_free(m);
	return 0;
}
