#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/netdevice.h>
#include <linux/delay.h>
#include <linux/rtnetlink.h>
#include <linux/in.h>

#include <net/sock.h>

// For TC macros and such
#include <linux/pkt_sched.h>
#include <linux/pkt_cls.h>
// And related netlink stuff
#include <linux/rtnetlink.h>

#include "../nsc/nsc.h"


#define NLMSG_TAIL(nmsg) \
	((struct rtattr *) (((void *) (nmsg)) + NLMSG_ALIGN((nmsg)->nlmsg_len)))

#define TCA_BUF_MAX	(64*1024)

extern char *strdup(const char *);
extern void free(void *);
extern unsigned long int strtoul(const char *, char **, int);

static int addattr_l(struct nlmsghdr *n, int maxlen, int type, const void *data,
	      int alen)
{
  int len = RTA_LENGTH(alen);
  struct rtattr *rta;

  if (NLMSG_ALIGN(n->nlmsg_len) + RTA_ALIGN(len) > maxlen) {
    nsc_assert(0, "addattr_l ERROR: message exceeded bound");
    return -1;
  }
  rta = NLMSG_TAIL(n);
  rta->rta_type = type;
  rta->rta_len = len;
  memcpy(RTA_DATA(rta), data, alen);
  n->nlmsg_len = NLMSG_ALIGN(n->nlmsg_len) + RTA_ALIGN(len);
  return 0;
}

static long tc_core_usec2tick(long usec)
{
  return usec * 1;
  /* Really want to read psched_tick_per_us but its a static variable in
   * net/sched/sch_api.c. The devision below will probably result in '1'
   * anyway, but I'm not 100% certain of that.
   * TODO: investigate fixing this */
  //((double)psched_tick_per_us / psched_us_per_tick);
}

static int tc_calc_rtable(unsigned bps, __u32 *rtab, int cell_log, unsigned mtu,
                          unsigned mpu)
{
  int i;
  unsigned overhead = (mpu >> 8) & 0xFF;
  mpu = mpu & 0xFF;

  if (mtu == 0)
    mtu = 2047;

  if (cell_log < 0) {
    cell_log = 0;
    while ((mtu>>cell_log) > 255)
      cell_log++;
  }
  for (i=0; i<256; i++) {
    unsigned sz = (i<<cell_log);
    if (overhead)
      sz += overhead;
    if (sz < mpu)
      sz = mpu;
    rtab[i] = tc_core_usec2tick(1000000*((double)sz/bps));
  }
  return cell_log;
}

static unsigned tc_calc_xmittime(unsigned rate, unsigned size)
{
  return tc_core_usec2tick(1000000*((double)size/rate));
}

static int get_hz(void)
{
  return HZ;
}

static char *get_token(char **str, char sep)
{
  for (; **str == sep && **str; (*str)++)
    ;

  char *tok = *str;

  for (; **str != sep && **str; (*str)++)
    ;

  if (**str)
  {
    **str = '\0';
    (*str)++;
  }

  return tok;
}

static void parse_classid(char *word, unsigned *classid)
{
  char *num = get_token(&word, ':');
  *classid = strtoul(num, NULL, 10) << 16;
  
  if (*word)
  {
    num = get_token(&word, ':');
    *classid |= strtoul(num, NULL, 10);
  }
}

static struct socket *nsc_create_netlink_socket(void)
{
  struct socket *so;
  struct sockaddr_nl local;
  int sndbuf = 32768;
  int rcvbuf = 32768;

  nsc_assert(
      sock_create(AF_NETLINK, SOCK_RAW, NETLINK_ROUTE, &so)
      == 0, "sock_create failed for AF_NETLINK socket");

  // XXX: check 2nd arg: should it be SOL_SOCKET ?
  // XXX: should these return '0' on success?
  nsc_assert(
      sock_setsockopt(so, 0, SO_SNDBUF, (void *) &sndbuf, sizeof(sndbuf))
      == 0, "sock_setsockopt failed in nsc_do_tc for SO_SNDBUF");

  nsc_assert(
      sock_setsockopt(so, 0, SO_RCVBUF, (void *) &rcvbuf, sizeof(rcvbuf))
      == 0, "sock_setsockopt failed in nsc_do_tc for SO_RCVBUF");

  memset(&local, 0, sizeof(local));
  local.nl_family = AF_NETLINK;
  local.nl_groups = 0;

  nsc_assert(
      so->ops->bind(so, (struct sockaddr *)&local, sizeof(local))
      == 0, "bind failed in nsc_do_tc");

  return so;
}

struct tcmsgcmd {
  struct nlmsghdr     n;
  struct tcmsg        t;
  char                buf[TCA_BUF_MAX];
};

static int nsc_get_ifindex(char *ifname)
{
  struct net_device *netdev = NULL;
  
  nsc_assert(ifname != NULL, "no interface specified to lookup");

  netdev = dev_get_by_name(&init_net, ifname);

  if (netdev)
  {
    int ifindex = netdev->ifindex;
    dev_put(netdev);
    return ifindex;
  }

  return -1;
}

static void nsc_tc_qdisc(char *cmd, struct tcmsgcmd* req)
{
  char *dev = NULL, *action = NULL, *kind = NULL;
  unsigned parent = 0, handle = 0;
  int ifindex = -1;
  struct tc_htb_glob opt;
  struct rtattr *tail;

  action = get_token(&cmd, ' ');
  nsc_assert(strcmp(action, "add") == 0, "action must be 'add' for 'tc qdisc' command");

  while (cmd && *cmd)
  {
    char *word = get_token(&cmd, ' ');

    if (strcmp(word, "dev") == 0)
    {
      dev = get_token(&cmd, ' ');
    }
    else if (strcmp(word, "root") == 0)
    {
      parent = TC_H_ROOT;
    }
    else if (strcmp(word, "handle") == 0)
    {
      parse_classid(get_token(&cmd, ' '), &handle);
    }
    else
    {
      kind = word;
      break;
    }
  }

  nsc_assert(dev != NULL, "no device specified for 'tc qdisc' command");
  nsc_assert(parent != 0, "only 'root' is currently supported to set parent for 'tc qdisc' command");
  nsc_assert(handle != 0, "handle invalid for 'tc qdisc' command");
  nsc_assert(kind && strcmp(kind, "htb") == 0, "kind must be 'htb' for 'tc qdisc' command");

  ifindex = nsc_get_ifindex(dev);
  nsc_assert(ifindex >= 0, "device not found for 'tc qdisc' command");

  req->n.nlmsg_len = NLMSG_LENGTH(sizeof(struct tcmsg));
  req->n.nlmsg_flags = NLM_F_REQUEST | NLM_F_EXCL | NLM_F_CREATE;
  req->n.nlmsg_type = RTM_NEWQDISC;
  
  req->t.tcm_family = AF_UNSPEC;
  req->t.tcm_ifindex = ifindex;
  req->t.tcm_parent = parent;
  req->t.tcm_handle = handle;

  addattr_l(&req->n, sizeof(*req), TCA_KIND, kind, strlen(kind) + 1);

  memset(&opt, 0, sizeof(opt));
  opt.rate2quantum = 10;
  opt.version = 3;

  while (*cmd)
  {
    char *word = get_token(&cmd, ' ');

    if (strcmp(word, "default") == 0)
    {
      opt.defcls = strtoul(get_token(&cmd, ' '), NULL, 10);
    }
    else
    {
      nsc_assert(*word == '\0', "unknown option for htb qdisc");
    }
  }

  tail = NLMSG_TAIL(&req->n);
  addattr_l(&req->n, 1024, TCA_OPTIONS, NULL, 0);
  addattr_l(&req->n, 2024, TCA_HTB_INIT, &opt, NLMSG_ALIGN(sizeof(opt)));
  tail->rta_len = (void *) NLMSG_TAIL(&req->n) - (void *) tail;
}

static void nsc_tc_class(char *cmd, struct tcmsgcmd* req)
{
  // tc class add dev eth0 parent 1: classid 1:1 htb rate <network_bandwidth> ceil <network_bandwidth>
  char *kind = NULL, *action = NULL;
  unsigned parent = 0, classid = 0;
  int ifindex = -1;

  action = get_token(&cmd, ' ');
  nsc_assert(strcmp(action, "add") == 0, "action must be 'add' for 'tc class' command");

  while (*cmd)
  {
    char *word = get_token(&cmd, ' ');

    if (strcmp(word, "parent") == 0)
    {
      parse_classid(get_token(&cmd, ' '), &parent);
    }
    else if (strcmp(word, "classid") == 0)
    {
      parse_classid(get_token(&cmd, ' '), &classid);
    }
    else if (strcmp(word, "dev") == 0)
    {
      ifindex = nsc_get_ifindex(get_token(&cmd, ' '));
    }
    else
    {
      kind = word;
      break;
    }
  }

  nsc_assert(parent != 0, "no parent specified for tc command");
  nsc_assert(classid != 0, "no classid specified for tc command");
  nsc_assert(ifindex > 0, "no interface specified for tc command");
  nsc_assert(strcmp(kind, "htb") == 0, "unknown kind for 'tc class add'");
  
  req->n.nlmsg_len = NLMSG_LENGTH(sizeof(struct tcmsg));
  req->n.nlmsg_flags = NLM_F_REQUEST | NLM_F_EXCL | NLM_F_CREATE;
  req->n.nlmsg_type = RTM_NEWTCLASS;

  req->t.tcm_family = AF_UNSPEC;
  req->t.tcm_ifindex = ifindex;
  req->t.tcm_parent = parent;
  req->t.tcm_handle = classid;

  addattr_l(&req->n, sizeof(*req), TCA_KIND, kind, strlen(kind) + 1);

  struct tc_htb_opt opt;
  int mtu = 1600;
  unsigned buffer = 0;
  unsigned cbuffer = 0;

  memset(&opt, 0, sizeof(opt));

  while (*cmd)
  {
    char *word = get_token(&cmd, ' ');

    if (strcmp(word, "prio") == 0)
    {
      int prio = strtoul(get_token(&cmd, ' '), NULL, 0);

      opt.prio = prio;
    }
    else if (strcmp(word, "rate") == 0)
    {
      unsigned long rate = strtoul(get_token(&cmd, ' '), NULL, 10);

      opt.rate.rate = rate;
    }
    else if (strcmp(word, "ceil") == 0)
    {
      unsigned long ceil = strtoul(get_token(&cmd, ' '), NULL, 10);

      opt.ceil.rate = ceil;
    }

    /* 'tc' parses a lot more here: mtu, mpu, cbuffer, buffer, quantum,
     * overhead. We could add support for these in the future if required.
     */
  }

  nsc_assert(opt.rate.rate != 0, "rate not specified for htb class");

  if (!opt.ceil.rate) opt.ceil = opt.rate;

  if (!buffer) buffer = opt.rate.rate / get_hz() + mtu;
  if (!cbuffer) cbuffer = opt.ceil.rate / get_hz() + mtu;

  int mpu = 0;

  opt.ceil.mpu = mpu;
  opt.rate.mpu = mpu;

  __u32 rtab[256], ctab[256];

  int cell_log = -1;
  cell_log = tc_calc_rtable(opt.rate.rate, rtab, cell_log, mtu, mpu);
  
  opt.buffer = tc_calc_xmittime(opt.rate.rate, buffer);
  opt.rate.cell_log = cell_log;

  int ccell_log = -1;
  ccell_log = tc_calc_rtable(opt.ceil.rate, ctab, cell_log, mtu, mpu);

  opt.cbuffer = tc_calc_xmittime(opt.ceil.rate, cbuffer);
  opt.ceil.cell_log = ccell_log;

  struct rtattr *tail = NLMSG_TAIL(&req->n);
  addattr_l(&req->n, 1024, TCA_OPTIONS, NULL, 0);
  addattr_l(&req->n, 2024, TCA_HTB_PARMS, &opt, sizeof(opt));
  addattr_l(&req->n, 3024, TCA_HTB_RTAB, rtab, 1024);
  addattr_l(&req->n, 4024, TCA_HTB_CTAB, ctab, 1024);
  tail->rta_len = (void *) NLMSG_TAIL(&req->n) - (void *) tail;
}

static void nsc_tc_filter(char *cmd, struct tcmsgcmd* req)
{
  nsc_assert(0, "TODO: implement filter command");
}

static void nsc_send_netlink_command(struct socket *so, struct tcmsgcmd *req)
{
  struct sockaddr_nl nladdr;
  struct iovec iov = {
    .iov_base = (void*) &req->n,
    .iov_len = req->n.nlmsg_len
  };
  struct msghdr msg = {
    .msg_name = &nladdr,
    .msg_namelen = sizeof(nladdr),
    .msg_iov = &iov,
    .msg_iovlen = 1,
  };

  memset(&nladdr, 0, sizeof(nladdr));
  nladdr.nl_family = AF_NETLINK;
  nladdr.nl_pid = 0;
  nladdr.nl_groups = 0;

  req->n.nlmsg_flags |= NLM_F_ACK;

  nsc_assert(
      sock_sendmsg(so, &msg, req->n.nlmsg_len)
      == req->n.nlmsg_len, "sock_sendmsg failed");
}

static int nsc_get_netlink_error(struct socket *so)
{
  char buf[16384];
  struct sockaddr_nl nladdr;
  struct iovec iov = {
    .iov_base = buf,
    .iov_len = sizeof(buf)
  };
  struct msghdr msg = {
    .msg_name = &nladdr,
    .msg_namelen = sizeof(nladdr),
    .msg_iov = &iov,
    .msg_iovlen = 1,
  };

  memset(buf, 0, sizeof(buf));

  int recved = 0;
  nsc_assert(
      (recved = sock_recvmsg(so, &msg, sizeof(buf), MSG_DONTWAIT))
      >= sizeof(struct nlmsghdr), "sock_recvmsg failed");

  nsc_assert(
      msg.msg_namelen == sizeof(nladdr),
      "sender address length invalid");

  struct nlmsghdr *h = (struct nlmsghdr *)buf;

  if (h->nlmsg_type == NLMSG_ERROR)
  {
    struct nlmsgerr *err = (struct nlmsgerr *)NLMSG_DATA(h);

    // 0 means OK
    return err->error;
  }

  nsc_assert(0, "unknown return from netlink");
  return 1;
}

static void nsc_tc_cmd(struct socket *so, void (*build_nl_req)(char *, struct tcmsgcmd *), char *cmd)
{
  struct tcmsgcmd req;
  int error;

  build_nl_req(cmd, &req);
  nsc_send_netlink_command(so, &req);
  error = nsc_get_netlink_error(so);
  nsc_assert(error == 0, "error from netlink in qdisc add");
}

void nsc_tc(const char *ccmd)
{
  struct socket *so = NULL;
  char *tc = NULL, *action = NULL;
  int found = 0, i = 0;
  char *cmd = strdup(ccmd), *old_cmd = cmd;

  struct
  {
    char name[256];
    void (*func)(char *, struct tcmsgcmd *);
  } tc_actions[] = {
    { "qdisc", nsc_tc_qdisc },
    { "class", nsc_tc_class },
    { "filter", nsc_tc_filter }
  };
  int num_actions = sizeof(tc_actions) / sizeof(tc_actions[0]);

  tc = get_token(&cmd, ' ');
  nsc_assert(strcmp(tc, "tc") == 0, "invalid input to tc");

  action = get_token(&cmd, ' ');
  
  so = nsc_create_netlink_socket();

  for (i = 0; i < num_actions; ++i)
  {
    if (strcmp(tc_actions[i].name, action) == 0)
    {
      nsc_tc_cmd(so, tc_actions[i].func, cmd);
      found = 1;
      break;
    }
  }

  nsc_assert(found != 0, "invalid 'tc' action");

  sock_release(so);
  free(old_cmd);
}
