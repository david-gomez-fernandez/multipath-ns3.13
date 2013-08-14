int my_glob = sizeof(my_glob);

// From net/core/...
struct list_head {
        struct list_head *next, *prev;
};

struct work_struct {
        unsigned long pending;
        struct list_head entry;
        void (*func)(void *);
        void *data;
        void *wq_data;
        //struct timer_list timer;
};

static void linkwatch_event(void *dummy);

static struct work_struct linkwatch_work = { 
    .entry = { &(linkwatch_work).entry, &(linkwatch_work).entry },
    .func = (linkwatch_event),
    .data = (((void *)0)),
    //.timer = { .function = (((void *)0)), .expires = (0), .data = (0), .base = &__init_timer_base, .magic = 0x4b87ad6e, },
};
