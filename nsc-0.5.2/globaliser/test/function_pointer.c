void (*func1)(void);

void (*func2)(void) = 0;

void (*func3[2])(void);

void (*func4[2])(void) = { 0, 0 };

int (*func5)(int, char, char **) = 0;

typedef int (*GLOBAL_func5_T)(int a, char b, char **c);

void stuff()
{
    func1 = func2;

    func3[0] = func4[0];
}

typedef void (fo_rdwr_t)();

static __inline fo_rdwr_t       fo_read;

struct socket;
struct mbuf;
struct sadb_msghdr;


static int (*key_typesw[])(struct socket *, struct mbuf *,
        const struct sadb_msghdr *) = {
    0,           /* SADB_RESERVED */
    0,    /* SADB_GETSPI */
    0,    /* SADB_UPDATE */
    0,       /* SADB_ADD */
    0,    /* SADB_DELETE */
    0,       /* SADB_GET */
    0,  /* SADB_ACQUIRE */
    0,  /* SADB_REGISTER */
    0,           /* SADB_EXPIRE */
    0,     /* SADB_FLUSH */
    0,      /* SADB_DUMP */
    0,   /* SADB_X_PROMISC */
    0,           /* SADB_X_PCHANGE */
    0,    /* SADB_X_SPDUPDATE */
    0,    /* SADB_X_SPDADD */
    0, /* SADB_X_SPDDELETE */
    0,    /* SADB_X_SPDGET */
    0,           /* SADB_X_SPDACQUIRE */
    0,   /* SADB_X_SPDDUMP */
    0   /* SADB_X_SPDFLUSH */
};
