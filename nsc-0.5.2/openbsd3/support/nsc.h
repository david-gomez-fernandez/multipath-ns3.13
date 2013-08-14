#ifndef NSC_H
#define NSC_H
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

#ifdef __cplusplus
extern "C" {
#endif

// Forward declarations:
struct socket;
struct sockaddr_in;
struct nsc_sockaddr;

// support/support.c:
void nsc_init(int);
void nsc_timer_interrupt(void);
int nsc_get_ticks(void);
int nsc_get_hz(void);
int nsc_sysctl(const char *sysctl_name, void *oldval, size_t *oldlenp,
        void *newval, size_t newlen);
int nsc_convert_syserr_to_nscerr(int syserr);

// support/socket.c:
void nsc_soconnect(void *so, int port, unsigned int addr);
void *nsc_socreate_tcp(void);
int nsc_sosend_blocking(void *so, struct sockaddr_in *dest,
        const void *data, unsigned int datalen);
int nsc_sosend(void *so, struct sockaddr_in *dest,
        const void *data, unsigned int datalen);
void nsc_sodisconnect(void *so);
int nsc_soisconnected(void *so);
int nsc_soreceive(void *socket, unsigned char *buf, int *buflen);
void nsc_solisten(void *socket, int port);
int nsc_soaccept(void *socket, void **asock);
int nsc_islistening(void *socket);
int nsc_setsockopt(void *socket, char *optname, void *val, size_t valsize);
int nsc_get_tcp_var(void *, const char *, char *, int);
int nsc_getsockpeername(void *, struct nsc_sockaddr *, int);

// supprt/sim_support.cpp:
void * nsc_malloc(size_t);
unsigned int nsc_random(void);
void nsc_debugf(const char *fmt, ...);
void nsc_if_send_packet(void *, void *, unsigned int);
void nsc_wakeup(void);

// support/interface.c:
void *nsc_if_attach(unsigned int addr, unsigned int mask, int mtu);
void nsc_default_gw_init(unsigned int addr);
void fake_ether_input(void *vifp, const void *packetdata, int packetlen);

#ifdef __cplusplus
}
#endif

#endif // NSC_H
