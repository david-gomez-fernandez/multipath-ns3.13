# 1 "globaliser/test/misc.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "globaliser/test/misc.c"
#include "num_stacks.h"
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

static inline  __attribute__((always_inline)) int write_tryseqlock(seqlock_t *sl)
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

typedef  struct pglist_data   _GLOBAL_0_T; extern  _GLOBAL_0_T  global_contig_page_data[NUM_STACKS];    

extern struct page *
__alloc_pages(gfp_t, unsigned int, struct zonelist *) __attribute__((regparm(3))) ;

static inline  __attribute__((always_inline)) struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
        unsigned int order)
{
    if (__builtin_expect(!!(order >= 11), 0))
        return ((void *)0);


    if (nid < 0)
        nid = ((0));

    return __alloc_pages(gfp_mask, order,
            (&global_contig_page_data[get_stack_id()])->node_zonelists + gfp_zone(gfp_mask));
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
typedef  struct net_proto_family  _GLOBAL_1_T;  _GLOBAL_1_T  _GLOBAL_0_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_1_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_2_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_3_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_4_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_5_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_6_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_7_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_8_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_9_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_10_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_11_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_12_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_13_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_14_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_15_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_16_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_17_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_18_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_19_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_20_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_21_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_22_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_23_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_24_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_25_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_26_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_27_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_28_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_29_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_30_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_31_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_32_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_33_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_34_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_35_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_36_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_37_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_38_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_39_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_40_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_41_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_42_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_43_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_44_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_45_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_46_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_47_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_48_net_families_I [ 10 ] ;  _GLOBAL_1_T  _GLOBAL_49_net_families_I [ 10 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_net_families_I) *_GLOBAL_net_families_0_A[NUM_STACKS] = { &_GLOBAL_0_net_families_I, &_GLOBAL_1_net_families_I, &_GLOBAL_2_net_families_I, &_GLOBAL_3_net_families_I, &_GLOBAL_4_net_families_I, &_GLOBAL_5_net_families_I, &_GLOBAL_6_net_families_I, &_GLOBAL_7_net_families_I, &_GLOBAL_8_net_families_I, &_GLOBAL_9_net_families_I, &_GLOBAL_10_net_families_I, &_GLOBAL_11_net_families_I, &_GLOBAL_12_net_families_I, &_GLOBAL_13_net_families_I, &_GLOBAL_14_net_families_I, &_GLOBAL_15_net_families_I, &_GLOBAL_16_net_families_I, &_GLOBAL_17_net_families_I, &_GLOBAL_18_net_families_I, &_GLOBAL_19_net_families_I, &_GLOBAL_20_net_families_I, &_GLOBAL_21_net_families_I, &_GLOBAL_22_net_families_I, &_GLOBAL_23_net_families_I, &_GLOBAL_24_net_families_I, &_GLOBAL_25_net_families_I, &_GLOBAL_26_net_families_I, &_GLOBAL_27_net_families_I, &_GLOBAL_28_net_families_I, &_GLOBAL_29_net_families_I, &_GLOBAL_30_net_families_I, &_GLOBAL_31_net_families_I, &_GLOBAL_32_net_families_I, &_GLOBAL_33_net_families_I, &_GLOBAL_34_net_families_I, &_GLOBAL_35_net_families_I, &_GLOBAL_36_net_families_I, &_GLOBAL_37_net_families_I, &_GLOBAL_38_net_families_I, &_GLOBAL_39_net_families_I, &_GLOBAL_40_net_families_I, &_GLOBAL_41_net_families_I, &_GLOBAL_42_net_families_I, &_GLOBAL_43_net_families_I, &_GLOBAL_44_net_families_I, &_GLOBAL_45_net_families_I, &_GLOBAL_46_net_families_I, &_GLOBAL_47_net_families_I, &_GLOBAL_48_net_families_I, &_GLOBAL_49_net_families_I, };  

void sam() {
    int family = 0;
    int err = 0;
    struct socket *sock = 0;
    int protocol = 1;

    (*_GLOBAL_net_families_0_A[get_stack_id()])[0].authentication = 0;

    (&(*_GLOBAL_net_families_0_A[get_stack_id()])[family])->create(sock, protocol);
}


typedef  int   ( *_GLOBAL_3_T  )  ( unsigned int   cmd  , void  * arg    ) ; static  _GLOBAL_3_T global_br_ioctl_hook[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };         

void somefunc() {
    global_br_ioctl_hook[get_stack_id()] = 0;
}

typedef unsigned size_t;

typedef int ctl_handler (int *table, int *name, int nlen,
        void *oldval, size_t *oldlenp,
        void *newval, size_t newlen,
        void **context);

extern ctl_handler sysctl_string;

typedef  ctl_handler _GLOBAL_4_T;  _GLOBAL_4_T  * global_some_var[NUM_STACKS] = {  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  & sysctl_string ,  };    

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

typedef  struct bio_ops { int  ( * io_prewrite  )  ( struct vnode   *  , struct buf   *   )  ;  void  ( * io_start  )  ( struct buf   *  )  ;   void  ( * io_complete  )  ( struct buf   *  )  ;   void  ( * io_deallocate  )  ( struct buf   *  )  ;   void  ( * io_movedeps  )  ( struct buf   *  , struct buf   *   )  ;   int  ( * io_countdeps  )  ( struct buf   *  , int   )  ;   }   _GLOBAL_5_T; extern  _GLOBAL_5_T  global_bioops[NUM_STACKS];    
          
       
       
       
          
        
 

struct proc;
typedef int register_t;
typedef int sy_call_t(struct proc *, void *, register_t *);

typedef  struct sysent { short  sy_narg ;  short  sy_argsize ;   sy_call_t  * sy_call  ;   }   _GLOBAL_6_T; extern  _GLOBAL_6_T  _GLOBAL_0_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_1_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_2_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_3_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_4_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_5_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_6_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_7_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_8_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_9_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_10_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_11_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_12_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_13_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_14_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_15_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_16_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_17_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_18_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_19_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_20_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_21_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_22_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_23_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_24_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_25_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_26_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_27_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_28_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_29_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_30_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_31_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_32_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_33_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_34_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_35_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_36_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_37_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_38_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_39_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_40_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_41_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_42_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_43_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_44_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_45_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_46_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_47_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_48_sysent_I [ ] ; extern  _GLOBAL_6_T  _GLOBAL_49_sysent_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysent_I) *_GLOBAL_sysent_1_A[NUM_STACKS];   
     
     
     
 


typedef struct ctl_table ctl_table;
struct ctl_table
{
    int ctl_name;
    const char *procname;
    void *data;
    int maxlen;





    void *extra1;
    void *extra2;
};

struct ctl_table_header
{
    ctl_table *ctl_table;

};


typedef  struct devinet_sysctl_table { struct ctl_table_header   * sysctl_header  ;  ctl_table  devinet_vars [ 20 ]  ;   ctl_table  devinet_dev [ 2 ]  ;   ctl_table  devinet_conf_dir [ 2 ]  ;   ctl_table  devinet_proto_dir [ 2 ]  ;   ctl_table  devinet_root_dir [ 2 ]  ;   }   _GLOBAL_7_T; static  _GLOBAL_7_T  global_devinet_sysctl[NUM_STACKS];   

      
     
     
     
     
     
 

typedef  int _GLOBAL_8_T;  _GLOBAL_8_T  global_sams_global[NUM_STACKS];  


static inline  __attribute__((always_inline)) long
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

typedef  struct s2  _GLOBAL_9_T;  _GLOBAL_9_T  global_struct_in_struct[NUM_STACKS] = {  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  { . a . b   = 1  } ,  };         

typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  _GLOBAL_0_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_1_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_2_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_3_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_4_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_5_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_6_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_7_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_8_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_9_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_10_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_11_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_12_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_13_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_14_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_15_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_16_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_17_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_18_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_19_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_20_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_21_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_22_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_23_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_24_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_25_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_26_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_27_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_28_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_29_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_30_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_31_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_32_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_33_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_34_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_35_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_36_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_37_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_38_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_39_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_40_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_41_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_42_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_43_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_44_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_45_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_46_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_47_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_48_an_extern_global_I [ ] ; extern  _GLOBAL_10_T  _GLOBAL_49_an_extern_global_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_an_extern_global_I) *_GLOBAL_an_extern_global_2_A[NUM_STACKS] = { &_GLOBAL_0_an_extern_global_I, &_GLOBAL_1_an_extern_global_I, &_GLOBAL_2_an_extern_global_I, &_GLOBAL_3_an_extern_global_I, &_GLOBAL_4_an_extern_global_I, &_GLOBAL_5_an_extern_global_I, &_GLOBAL_6_an_extern_global_I, &_GLOBAL_7_an_extern_global_I, &_GLOBAL_8_an_extern_global_I, &_GLOBAL_9_an_extern_global_I, &_GLOBAL_10_an_extern_global_I, &_GLOBAL_11_an_extern_global_I, &_GLOBAL_12_an_extern_global_I, &_GLOBAL_13_an_extern_global_I, &_GLOBAL_14_an_extern_global_I, &_GLOBAL_15_an_extern_global_I, &_GLOBAL_16_an_extern_global_I, &_GLOBAL_17_an_extern_global_I, &_GLOBAL_18_an_extern_global_I, &_GLOBAL_19_an_extern_global_I, &_GLOBAL_20_an_extern_global_I, &_GLOBAL_21_an_extern_global_I, &_GLOBAL_22_an_extern_global_I, &_GLOBAL_23_an_extern_global_I, &_GLOBAL_24_an_extern_global_I, &_GLOBAL_25_an_extern_global_I, &_GLOBAL_26_an_extern_global_I, &_GLOBAL_27_an_extern_global_I, &_GLOBAL_28_an_extern_global_I, &_GLOBAL_29_an_extern_global_I, &_GLOBAL_30_an_extern_global_I, &_GLOBAL_31_an_extern_global_I, &_GLOBAL_32_an_extern_global_I, &_GLOBAL_33_an_extern_global_I, &_GLOBAL_34_an_extern_global_I, &_GLOBAL_35_an_extern_global_I, &_GLOBAL_36_an_extern_global_I, &_GLOBAL_37_an_extern_global_I, &_GLOBAL_38_an_extern_global_I, &_GLOBAL_39_an_extern_global_I, &_GLOBAL_40_an_extern_global_I, &_GLOBAL_41_an_extern_global_I, &_GLOBAL_42_an_extern_global_I, &_GLOBAL_43_an_extern_global_I, &_GLOBAL_44_an_extern_global_I, &_GLOBAL_45_an_extern_global_I, &_GLOBAL_46_an_extern_global_I, &_GLOBAL_47_an_extern_global_I, &_GLOBAL_48_an_extern_global_I, &_GLOBAL_49_an_extern_global_I, };  



void sams_func() {
  typedef  int  _GLOBAL_11_T; extern  _GLOBAL_11_T  _GLOBAL_0_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_1_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_2_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_3_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_4_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_5_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_6_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_7_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_8_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_9_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_10_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_11_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_12_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_13_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_14_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_15_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_16_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_17_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_18_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_19_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_20_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_21_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_22_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_23_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_24_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_25_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_26_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_27_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_28_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_29_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_30_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_31_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_32_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_33_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_34_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_35_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_36_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_37_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_38_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_39_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_40_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_41_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_42_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_43_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_44_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_45_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_46_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_47_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_48_a_local_extern_global_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_49_a_local_extern_global_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_a_local_extern_global_I) *_GLOBAL_a_local_extern_global_3_A[NUM_STACKS];  

  &(*_GLOBAL_an_extern_global_2_A[get_stack_id()]);
}

