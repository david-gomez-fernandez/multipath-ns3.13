struct empty
{
};

struct malloc_type
{
    void *ptr;
    int a, b, c, d, e;
    int f;
    const char *name;
    struct empty g;
};

struct sysinit
{
    int a, b;
    void (*c)(void);
    void *m;
};

typedef void (*sysinit_cfunc_t)(void);
typedef void (*sysinit_nfunc_t)(void);

enum {
    SI_SUB_KMEM, SI_ORDER_SECOND, SI_ORDER_ANY,
};

void malloc_init(void)
{
}

extern void malloc_uninit(void);

static struct malloc_type M_MODULE[1] =
    { 
        { ((void *) 0), 0, 0, 0, 0, 0, 877983977, "module", {} } 
    };

static struct sysinit M_MODULE_init_sys_init =
    { 
        SI_SUB_KMEM, SI_ORDER_SECOND, 
        (sysinit_cfunc_t) (sysinit_nfunc_t) malloc_init, 
        ((void *) (M_MODULE)) 
    };

static void const *const __set_sysinit_set_sym_M_MODULE_init_sys_init
  __attribute__ ((__section__ ("set_" "sysinit_set")))
  __attribute__ ((__used__)) = &M_MODULE_init_sys_init;
  
static struct sysinit M_MODULE_uninit_sys_uninit =
    { 
        SI_SUB_KMEM, SI_ORDER_ANY,
        (sysinit_cfunc_t) (sysinit_nfunc_t) malloc_uninit, 
        ((void *) (M_MODULE)) 
    };

static void const *const __set_sysuninit_set_sym_M_MODULE_uninit_sys_uninit
  __attribute__ ((__section__ ("set_" "sysuninit_set")))
  __attribute__ ((__used__)) = &M_MODULE_uninit_sys_uninit;

extern void *  __start_set_sysinit_set  ;

void func()
{
    void *sam = __start_set_sysinit_set;
}

int main()
{
    return 0;
}

int get_stack_id() { return 0; }

// This should generate a warning from the globaliser
int notsection __attribute__ ((__section__ ("set_" "test"))) __attribute__((__used__)) = 0;
