typedef struct { unsigned long bits[(((1)+32 -1)/32)]; } cpumask_t;

void func()
{
  cpumask_t cspan;

  cspan = (cpumask_t) { { [0 ... (((1)+32 -1)/32) -1] = 0UL } };
}

typedef struct {
    unsigned sequence;
    int lock;
} seqlock_t;

static inline __attribute__((always_inline)) int write_tryseqlock(seqlock_t *sl)
{
    int ret = (({ do { do { } while (0); (void)0; (void)(&sl->lock); } while (0); 1; }));

    if (ret) {
        ++sl->sequence;
        __asm__ __volatile__("": : :"memory");
    }
    return ret;
}

struct zonelist { int sam; };

typedef struct pglist_data {
    int node_zones[4];
    struct zonelist* node_zonelists;
    int nr_zones;

    int *bdata;
    unsigned long node_start_pfn;
    unsigned long node_present_pages;
    unsigned long node_spanned_pages;

    int node_id;
    int kswapd_wait;
    struct task_struct *kswapd;
    int kswapd_max_order;
} pg_data_t;

typedef int gfp_t;

static inline  __attribute__((always_inline)) int gfp_zone(gfp_t gfp)
{
    int zone = 0x07 & ( int) gfp;
    do { if (zone >= ((0x07 + 1) / 2 + 1)) ; } while(0);
    return zone;
}

extern struct pglist_data contig_page_data;

extern struct page *
__alloc_pages(gfp_t, unsigned int, struct zonelist *) __attribute__((regparm(3)));

static inline  __attribute__((always_inline)) struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
        unsigned int order)
{
    if (__builtin_expect(!!(order >= 11), 0))
        return ((void *)0);


    if (nid < 0)
        nid = ((0));

    return __alloc_pages(gfp_mask, order,
            (&contig_page_data)->node_zonelists + gfp_zone(gfp_mask));
}

struct socket {
    int mysock;
};

struct net_proto_family {
    int family;
    int (*create)(struct socket *sock, int protocol);


    short authentication;
    short encryption;
    short encrypt_net;
    struct module *owner;
};
struct net_proto_family net_families[10];

void sam() {
    int family = 0;
    int err = 0;
    struct socket *sock = 0;
    int protocol = 1;
    
    net_families[0].authentication = 0;

    (&net_families[family])->create(sock, protocol);
}


static int (*br_ioctl_hook)(unsigned int cmd, void *arg) = 0;

void somefunc() {
    br_ioctl_hook = 0;
}

typedef unsigned size_t;

typedef int ctl_handler (int *table, int *name, int nlen,
        void *oldval, size_t *oldlenp,
        void *newval, size_t newlen,
        void **context);

extern ctl_handler sysctl_string;

ctl_handler* some_var = &sysctl_string;

int sysctl_string(int *table, int *name, int nlen,
        void *oldval, size_t *oldlenp,
        void *newval, size_t newlen, void **context)
{
    return 0;
}

extern void i_am_an_extern_void;

typedef void typeddefed_void;
extern typeddefed_void i_am_another_extern_void;
struct buf;
struct vnode;

extern struct bio_ops {
    int (*io_prewrite)(struct vnode *, struct buf *);
    void (*io_start)(struct buf *);
    void (*io_complete)(struct buf *);
    void (*io_deallocate)(struct buf *);
    void (*io_movedeps)(struct buf *, struct buf *);
    int (*io_countdeps)(struct buf *, int);
} bioops;

struct proc;
typedef int register_t;
typedef int sy_call_t(struct proc *, void *, register_t *);

extern struct sysent {
    short sy_narg;
    short sy_argsize;
    sy_call_t *sy_call;
} sysent[];


typedef struct ctl_table ctl_table;
struct ctl_table
{
    int ctl_name;
    const char *procname;
    void *data;
    int maxlen;
/*    mode_t mode;
    ctl_table *child;
    proc_handler *proc_handler;
    ctl_handler *strategy;
    struct proc_dir_entry *de;*/
    void *extra1;
    void *extra2;
};

struct ctl_table_header
{
    ctl_table *ctl_table;
/*    struct list_head ctl_entry;*/
};


static struct devinet_sysctl_table
{
    struct ctl_table_header *sysctl_header;
    ctl_table devinet_vars[20];
    ctl_table devinet_dev[2];
    ctl_table devinet_conf_dir[2];
    ctl_table devinet_proto_dir[2];
    ctl_table devinet_root_dir[2];
} devinet_sysctl; /* = { ... } */

int sams_global;


static inline __attribute__((always_inline)) long
__find_first_zero_bit(const unsigned long * addr, unsigned long size)
{
    long d0, d1, d2;
    long res;
    size += 63;
    size >>= 6;
    if (!size)
        return 0;
    asm volatile(
            "  repe; scasq\n"
            "  je 1f\n"
            "  xorq -8(%%rdi),%%rax\n"
            "  subq $8,%%rdi\n"
            "  bsfq %%rax,%%rdx\n"
            "1:  subq %[addr],%%rdi\n"
            "  shlq $3,%%rdi\n"
            "  addq %%rdi,%%rdx"
            :"=d" (res), "=&c" (d0), "=&D" (d1), "=&a" (d2)
            :"0" (0ULL), "1" (size), "2" (addr), "3" (-1ULL),
            [addr] "S" (addr) : "memory");

    return res;
}

struct s1 {
  int b;
};

struct s2 {
  struct s1 a;
};

struct s2 struct_in_struct = { .a.b = 1 };

extern int an_extern_global[];

//void* sams_samsam = sysent;

void sams_func() {
  extern int a_local_extern_global[];

  &an_extern_global;
}
