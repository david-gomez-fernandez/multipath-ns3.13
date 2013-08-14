#ifndef _I386_CURRENT_H
#define _I386_CURRENT_H

#include <linux/thread_info.h>

struct task_struct;

/* EDIT: Sam: can't use current_thread_info in NSC. */
extern struct task_struct *nsc_task;
static inline struct task_struct * get_current(void)
{
	/* return current_thread_info()->task; */
        return nsc_task;
}
 
#define current get_current()

#endif /* !(_I386_CURRENT_H) */
