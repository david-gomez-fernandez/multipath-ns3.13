struct page {
        unsigned long flags;

        union {
            struct {
                unsigned long private;
                
                int *mapping;
            };
        };
        unsigned long index;
};




typedef struct { } raw_spinlock_t;

typedef struct {
  raw_spinlock_t raw_lock;
} spinlock_t;

struct list_head {
  struct list_head* prev;
  struct list_head* next;
};

struct __wait_queue_head {
        spinlock_t lock;
        struct list_head task_list;
};
typedef struct __wait_queue_head wait_queue_head_t;

static wait_queue_head_t random_read_wait = { 
  .lock = (spinlock_t) { .raw_lock = { }, }, 
  .task_list = { 
    &(random_read_wait).task_list, 
    &(random_read_wait).task_list 
  }
};
