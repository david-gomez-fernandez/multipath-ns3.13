/*
   Network Simulation Cradle

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

   provides a /sbin/sysctl-like interface.
*/

#include <linux/string.h>
#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/sysctl.h>

#include "../nsc/nsc.h"


long strtol(const char *cp, char **endp, unsigned int base);

/*
 * integer converters:
 * convert int to character representation, and vice versa.
 */
static size_t convert_strtoint(const char *value, void *res, size_t len)
{
  char *end;
  unsigned int i = strtol(value, &end, 10);

  if (*end != '\0')
    return 0;

  if (len > sizeof(i))
    len = sizeof(i);
  memcpy(res, &i, len);
  return sizeof(i);
}

static size_t convert_inttostr(const void *integer, size_t sizeof_int, char *out, size_t out_len)
{
  if (sizeof_int == sizeof(int)) {
    const int *ptr = integer;
    return snprintf(out, out_len, "%d", *ptr);
  }
  return 0;
}

/*
 * converters for an array of 2 integers. so int[2] { 0, 1 } <-> "0 1"
 */
static size_t convert_strtoint_2(const char *value, void *res, size_t len)
{
  const char *start = value;
  char *end;
  int converted[2];
  int i;

  if (len < sizeof(converted))
    return 0;

  for (i = 0; i < 2; i++) {
    converted[i] = strtol(start, &end, 10);
    start = end;
  }

  if (*end != '\0')
    return 0;

  memcpy(res, converted, sizeof(converted));
  return sizeof(converted);
}

static size_t convert_inttostr_2(const void *input, size_t input_size, char *out, size_t out_len)
{
  if (input_size == sizeof(int) * 2) {
    const int *ptr = input;
    return snprintf(out, out_len, "%d %d", ptr[0], ptr[1]);
  }
  return 0;
}

/*
 * converters for an array of 3 integers. so int[3] { 0, 1, 2 } <-> "0 1 3"
 */
static size_t convert_strtoint_3(const char *value, void *res, size_t len)
{
  const char *start = value;
  char *end;
  int converted[3];
  int i;

  if (len < sizeof(converted))
    return 0;

  for (i = 0; i < 3; i++) {
    converted[i] = strtol(start, &end, 10);
    start = end;
  }

  if (*end != '\0')
    return 0;

  memcpy(res, converted, sizeof(converted));
  return sizeof(converted);
}

static size_t convert_inttostr_3(const void *input, size_t input_size, char *out, size_t out_len)
{
  if (input_size == sizeof(int) * 3) {
    const int *ptr = input;
    return snprintf(out, out_len, "%d %d %d", ptr[0], ptr[1], ptr[2]);
  }
  return 0;
}

/*
 * string 'converters'. Used by tcp_congestion_control.
 * these don;t convert anything and just pass the string value
 * between the 'kernel' sysctl-interface and the nsc caller.
 */
static size_t convert_str_in(const char *value, void *res, size_t len)
{
  return strlcpy(res, value, len);
}

/* same for sysctl-to-nsc case */
static size_t convert_str_out(const void *str, size_t str_len, char *out, size_t out_len)
{
  return strlcpy(out, str, out_len);
}

static struct {
  /* pointer to full name of sysctl, as printed by "/sbin/sysctl -a" */
  const char *name;
  
  /* name converted to the integer/internal kernel version  */
  int int_name[3];
  
  /*
   * converts *value and stores result in *mem.
   * the result size (in bytes) is returned.
   * 0: conversion failed.
   * retval > mem_size: truncated and/or incomplete conversion.
   */
  size_t (*convert_w)(const char *value, void *mem, size_t mem_size);

  /*
   * converts a *mem blob returned from the sysctl call to human-readable form.
   * retval > outbuf_len: result was truncated.
   */
  size_t (*convert_r)(const void *mem, size_t mem_size, char *outbuf, size_t outbuf_len);
} nsc_linux_sysctl_map[] = {
  /* See include/linux/sysctl.h to find the integer representations of sysctl.
   * /sbin/sysctl -a will list possible sysctls. The list below attempts to include
   * useful networking sysctls but there will be many missing.
   */

  { "net.core.wmem_max", { CTL_NET, NET_CORE, NET_CORE_WMEM_MAX },
    convert_strtoint, convert_inttostr },
  { "net.core.rmem_max", { CTL_NET, NET_CORE, NET_CORE_RMEM_MAX },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_timestamps", { CTL_NET, NET_IPV4, NET_IPV4_TCP_TIMESTAMPS },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_window_scaling", { CTL_NET, NET_IPV4, NET_IPV4_TCP_WINDOW_SCALING },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_sack", { CTL_NET, NET_IPV4, NET_IPV4_TCP_SACK },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_retrans_collapse", { CTL_NET, NET_IPV4, NET_IPV4_TCP_RETRANS_COLLAPSE },
    convert_strtoint, convert_inttostr },
  /* "net.ipv4.ip_forward" */
  { "net.ipv4.ip_default_ttl", { CTL_NET, NET_IPV4, NET_IPV4_DEFAULT_TTL },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.ip_no_pmtu_disc", { CTL_NET, NET_IPV4, NET_IPV4_NO_PMTU_DISC },
    convert_strtoint, convert_inttostr },
  /* "net.ipv4.ip_nonlocal_bind" */
  { "net.ipv4.tcp_syn_retries", { CTL_NET, NET_IPV4, NET_IPV4_TCP_SYN_RETRIES },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_synack_retries", { CTL_NET, NET_IPV4, NET_TCP_SYNACK_RETRIES },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_max_orphans", { CTL_NET, NET_IPV4, NET_TCP_MAX_ORPHANS },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_max_tw_buckets", { CTL_NET, NET_IPV4, NET_TCP_MAX_TW_BUCKETS },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.ipfrag_high_thresh", { CTL_NET, NET_IPV4, NET_IPV4_IPFRAG_HIGH_THRESH },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.ipfrag_low_thresh", { CTL_NET, NET_IPV4, NET_IPV4_IPFRAG_LOW_THRESH },
    convert_strtoint, convert_inttostr },
  /* DECLARE_SYSCTL_INTVEC("net.ipv4.ip_dynaddr"), */
  { "net.ipv4.ipfrag_time", { CTL_NET, NET_IPV4, NET_IPV4_IPFRAG_TIME },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_keepalive_time", { CTL_NET, NET_IPV4, NET_IPV4_TCP_KEEPALIVE_TIME },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_keepalive_intvl", { CTL_NET, NET_IPV4, NET_IPV4_TCP_KEEPALIVE_INTVL },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_retries1", { CTL_NET, NET_IPV4, NET_IPV4_TCP_RETRIES1 },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_retries2", { CTL_NET, NET_IPV4, NET_IPV4_TCP_RETRIES2 },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_fin_timeout", { CTL_NET, NET_IPV4, NET_IPV4_TCP_FIN_TIMEOUT },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_syncookies", { CTL_NET, NET_IPV4, NET_TCP_SYNCOOKIES },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_tw_recycle", { CTL_NET, NET_IPV4, NET_TCP_TW_RECYCLE },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_abort_on_overflow", { CTL_NET, NET_IPV4, NET_TCP_ABORT_ON_OVERFLOW },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_stdurg", { CTL_NET, NET_IPV4, NET_TCP_STDURG },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_rfc1337", { CTL_NET, NET_IPV4, NET_TCP_RFC1337 },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_max_syn_backlog", { CTL_NET, NET_IPV4, NET_TCP_MAX_SYN_BACKLOG },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.ip_local_port_range", { CTL_NET, NET_IPV4, NET_IPV4_LOCAL_PORT_RANGE },
    convert_strtoint_2, convert_inttostr_2 },
  { "net.ipv4.icmp_echo_ignore_all", { CTL_NET, NET_IPV4, NET_IPV4_ICMP_ECHO_IGNORE_ALL },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.icmp_echo_ignore_broadcasts", { CTL_NET, NET_IPV4, NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.icmp_ignore_bogus_error_responses", { CTL_NET, NET_IPV4, NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.icmp_errors_use_inbound_ifaddr", { CTL_NET, NET_IPV4, NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.igmp_max_memberships", { CTL_NET, NET_IPV4, NET_IPV4_IGMP_MAX_MEMBERSHIPS },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.igmp_max_msf", { CTL_NET, NET_IPV4, NET_IPV4_IGMP_MAX_MSF },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.inet_peer_threshold", { CTL_NET, NET_IPV4, NET_IPV4_INET_PEER_THRESHOLD },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.inet_peer_minttl", { CTL_NET, NET_IPV4, NET_IPV4_INET_PEER_MINTTL },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.inet_peer_maxttl", { CTL_NET, NET_IPV4, NET_IPV4_INET_PEER_MAXTTL },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.inet_peer_gc_mintime", { CTL_NET, NET_IPV4, NET_IPV4_INET_PEER_GC_MINTIME },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.inet_peer_gc_maxtime", { CTL_NET, NET_IPV4, NET_IPV4_INET_PEER_GC_MAXTIME },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_orphan_retries", { CTL_NET, NET_IPV4, NET_TCP_ORPHAN_RETRIES },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_fack", { CTL_NET, NET_IPV4, NET_TCP_FACK },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_reordering", { CTL_NET, NET_IPV4, NET_TCP_REORDERING },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_ecn", { CTL_NET, NET_IPV4, NET_TCP_ECN },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_dsack", { CTL_NET, NET_IPV4, NET_TCP_DSACK },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_mem", { CTL_NET, NET_IPV4, NET_TCP_MEM },
    convert_strtoint_3, convert_inttostr_3 },
  { "net.ipv4.tcp_wmem", { CTL_NET, NET_IPV4, NET_TCP_WMEM },
    convert_strtoint_3, convert_inttostr_3 },
  { "net.ipv4.tcp_rmem", { CTL_NET, NET_IPV4, NET_TCP_RMEM },
    convert_strtoint_3, convert_inttostr_3 },
  { "net.ipv4.tcp_app_win", { CTL_NET, NET_IPV4, NET_TCP_APP_WIN },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_adv_win_scale", { CTL_NET, NET_IPV4, NET_TCP_ADV_WIN_SCALE },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.icmp_ratelimit", { CTL_NET, NET_IPV4, NET_IPV4_ICMP_RATELIMIT },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.icmp_ratemask", { CTL_NET, NET_IPV4, NET_IPV4_ICMP_RATEMASK },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_tw_reuse", { CTL_NET, NET_IPV4, NET_TCP_TW_REUSE },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_frto", { CTL_NET, NET_IPV4, NET_TCP_FRTO },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_low_latency", { CTL_NET, NET_IPV4, NET_TCP_LOW_LATENCY },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.ipfrag_secret_interval", { CTL_NET, NET_IPV4, NET_IPV4_IPFRAG_SECRET_INTERVAL },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.ipfrag_max_dist", { CTL_NET, NET_IPV4, NET_IPV4_IPFRAG_MAX_DIST },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_no_metrics_save", { CTL_NET, NET_IPV4, NET_TCP_NO_METRICS_SAVE },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_moderate_rcvbuf", { CTL_NET, NET_IPV4, NET_TCP_MODERATE_RCVBUF },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_tso_win_divisor", { CTL_NET, NET_IPV4, NET_TCP_TSO_WIN_DIVISOR },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_congestion_control", { CTL_NET, NET_IPV4, NET_TCP_CONG_CONTROL },
    convert_str_in, convert_str_out },
  { "net.ipv4.tcp_abc", { CTL_NET, NET_IPV4, NET_TCP_ABC },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_mtu_probing", { CTL_NET, NET_IPV4, NET_TCP_MTU_PROBING },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_base_mss", { CTL_NET, NET_IPV4, NET_TCP_BASE_MSS },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_workaround_signed_windows", { CTL_NET, NET_IPV4, NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS },
    convert_strtoint, convert_inttostr },
  { "net.ipv4.tcp_slow_start_after_idle", { CTL_NET, NET_IPV4, NET_TCP_SLOW_START_AFTER_IDLE },
    convert_strtoint, convert_inttostr },
};


int nsc_sysctl_util_get(const char *name, char *value, size_t len)
{
  size_t i;

  for (i=0; i < ARRAY_SIZE(nsc_linux_sysctl_map); i++) {
    size_t buflen;
    int ret;
    char buf[512];
    if (strcmp(nsc_linux_sysctl_map[i].name, name) != 0)
      continue;
    buflen = sizeof(buf);
    ret = do_sysctl(nsc_linux_sysctl_map[i].int_name, 3, buf, &buflen, NULL, 0);
    if (ret == 0) {
      ret = nsc_linux_sysctl_map[i].convert_r(buf, buflen, value, len);
      if (ret > 0) {
        return ret;
      }
    }
    
    return -1;
  }
  return -1;
}

int nsc_sysctl_util_set(const char *name, const char *value)
{
  size_t i;

  for (i=0; i < ARRAY_SIZE(nsc_linux_sysctl_map); i++) {
    size_t ret;
    char buf[512];
    if (strcmp(nsc_linux_sysctl_map[i].name, name) != 0)
      continue;
    ret = nsc_linux_sysctl_map[i].convert_w(value, buf, sizeof(buf));
    if (ret == 0) /* conversion failed */
      break;
    if (ret <= sizeof(buf)) {
      return do_sysctl(nsc_linux_sysctl_map[i].int_name, 3, NULL, NULL, buf, ret);
    }
    /* else could malloc() the needed amount, but sizeof(buf) should be large enough */
    return -1;
  }
  return -1;
}

int nsc_sysctl_util_getnum(size_t idx, char *name, size_t len)
{
  if (idx >= ARRAY_SIZE(nsc_linux_sysctl_map))
    return -1;

  return strlcpy(name, nsc_linux_sysctl_map[idx].name, len);
}

