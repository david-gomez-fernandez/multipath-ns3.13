static void
dummynet(void * __attribute__((__unused__)) unused)
{
}

int sc_fpstate[128] __attribute__((__aligned__(16))) = { 0 } ;

static __attribute__ ((__section__ ("set_" "sysinit_set")))
    __attribute__ ((__used__))
    int *sam;

extern void func(void) __attribute__((__noreturn__));

void func2(a)   
    int a;
{
    
}

void panic(const char *, ...) 
    __attribute__((__noreturn__)) 
    __attribute__((__format__ (__printf__, 1, 2)))
    ;

static void splx(int ipl __attribute__((__unused__))) { return; }

struct segment_descriptor {
    unsigned sd_lolimit:16 ;
    unsigned sd_lobase:24 __attribute__((__packed__));
    unsigned sd_type:5 ;
    unsigned sd_dpl:2 ;
    unsigned sd_p:1 ;
    unsigned sd_hilimit:4 ;
    unsigned sd_xx:2 ;
    unsigned sd_def32:1 ;
    unsigned sd_gran:1 ;
    unsigned sd_hibase:8 ;
} ;

struct cdev {
    int filler;
};

struct thread {
    float filler;
};

static int
no_poll(struct cdev *dev __attribute__((__unused__)), int events, 
        struct thread *td __attribute__((__unused__)))
{
  return (0x0020);
}

int fake __attribute__((__used__)) = 0;

typedef struct cdev pt_entry_t;

pt_entry_t *pmap_pte(int, char) __attribute__((__const__));

void __mutex_fastpath_lock_retval(int *i, int __attribute__(( regparm(3) )) j)
{
}
