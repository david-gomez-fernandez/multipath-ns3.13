#ifndef NSC_OVERRIDE_H
#define NSC_OVERRIDE_H

// Override include/asm/current.h
static inline struct task_struct * get_nsc_task(void)
{
  extern struct task_struct *nsc_task;
  return nsc_task;
}

#define _I386_CURRENT_H
#define current get_nsc_task()

// IRQ flags override
#define local_irq_enable()
#define local_irq_disable()
#define irqs_disabled() (1)
#define local_irq_restore(flags) (void)(flags)
#define local_irq_save(flags) (void)(flags)
#define local_save_flags(flags) (void)(flags)


#endif
