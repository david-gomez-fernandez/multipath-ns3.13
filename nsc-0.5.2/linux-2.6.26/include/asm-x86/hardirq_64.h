#ifndef __ASM_HARDIRQ_H
#define __ASM_HARDIRQ_H
/* For CONFIG_NSC, just ignore this stuff... Fall back... */
#ifndef CONFIG_NSC

#include <linux/threads.h>
#include <linux/irq.h>
#include <asm/pda.h>
#include <asm/apic.h>

/* We can have at most NR_VECTORS irqs routed to a cpu at a time */
#define MAX_HARDIRQS_PER_CPU NR_VECTORS

#define __ARCH_IRQ_STAT 1

#define local_softirq_pending() read_pda(__softirq_pending)

#define __ARCH_SET_SOFTIRQ_PENDING 1

#define set_softirq_pending(x) write_pda(__softirq_pending, (x))
#define or_softirq_pending(x)  or_pda(__softirq_pending, (x))

extern void ack_bad_irq(unsigned int irq);
#else // NSC

#include <linux/threads.h>
#include <linux/irq.h>

typedef struct {
        unsigned int __softirq_pending;
        unsigned long idle_timestamp;
        unsigned int __nmi_count;       /* arch dependent */
        unsigned int apic_timer_irqs;   /* arch dependent */
} ____cacheline_aligned irq_cpustat_t;

DECLARE_PER_CPU(irq_cpustat_t, irq_stat);
extern irq_cpustat_t irq_stat[];

#define __ARCH_IRQ_STAT
#define __IRQ_STAT(cpu, member) (per_cpu(irq_stat, cpu).member)

#include <linux/irq_cpustat.h>

#endif // CONFIG_NSC
#endif /* __ASM_HARDIRQ_H */
