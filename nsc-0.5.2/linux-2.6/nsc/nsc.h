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
#ifndef NSC_H
#define NSC_H

#ifdef __cplusplus
extern "C" {
#endif

void nsc_assert(int x, const char *str);
void nsc_init(void);
void *nsc_newif(unsigned int, unsigned int, int mtu);
void *nsc_socreate_tcp(void);
void *nsc_socreate_sctp(void);
void nsc_soconnect(void *, unsigned int, unsigned short);
void nsc_if_send_packet(void *ifp, void *data, unsigned int size);
void nsc_if_receive_packet(void *dev, const void *data, unsigned int datalen);
int nsc_sosend(void *so, void *data, unsigned int datalen);
void *nsc_malloc(int size);
void nsc_debugf(const char *, ...);
void nsc_sodisconnect(void *so);
void nsc_solisten(void *so, unsigned short port);
int nsc_accept(void *so, void **a);
int nsc_accept_sctp(void *so, void **a);
int nsc_soreceive(void *so, void *buf, int *buflen);
int nsc_is_connected(void *so);
void nsc_timer_tick(void);
void nsc_timer_interrupt(void);
void nsc_add_default_gw(unsigned int);
int nsc_do_sysctl(const char *sysctl_name, void *oldval, size_t *oldlenp,
        void *newval, size_t newlen);
int nsc_setsockopt(void *so, char *optname, void *val, size_t valsize);
int nsc_get_tcp_var(void *, const char *, char *, int);

/*
 * maps negative values to NSC_E* constants from sim_error.h.
 * values >= are returned unchanged.
 */
int nsc_convert_syserr_to_nscerr(int syserr);
#ifdef __cplusplus
}
#endif

#endif
