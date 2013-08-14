# 1 "linux-2.6.26/nsc/stub.c"
# 1 "/media/sda4/GIT/network-coding-ns-3-13/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "linux-2.6.26/include/linux/config.h" 1





# 1 "linux-2.6.26/include/linux/autoconf.h" 1
# 7 "linux-2.6.26/include/linux/config.h" 2
# 1 "<command-line>" 2
# 1 "linux-2.6.26/nsc/nsc_override.h" 1




#include "num_stacks.h"
static inline struct task_struct * nsc_get_task(void)
{
  typedef  struct task_struct   _GLOBAL_0_T; extern  _GLOBAL_0_T  * _GLOBAL_0_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_1_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_2_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_3_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_4_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_5_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_6_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_7_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_8_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_9_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_10_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_11_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_12_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_13_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_14_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_15_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_16_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_17_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_18_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_19_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_20_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_21_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_22_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_23_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_24_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_25_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_26_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_27_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_28_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_29_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_30_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_31_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_32_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_33_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_34_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_35_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_36_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_37_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_38_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_39_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_40_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_41_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_42_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_43_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_44_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_45_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_46_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_47_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_48_nsc_task_I ; extern  _GLOBAL_0_T  * _GLOBAL_49_nsc_task_I ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_nsc_task_I) *_GLOBAL_nsc_task_0_A[NUM_STACKS] = { &_GLOBAL_0_nsc_task_I, &_GLOBAL_1_nsc_task_I, &_GLOBAL_2_nsc_task_I, &_GLOBAL_3_nsc_task_I, &_GLOBAL_4_nsc_task_I, &_GLOBAL_5_nsc_task_I, &_GLOBAL_6_nsc_task_I, &_GLOBAL_7_nsc_task_I, &_GLOBAL_8_nsc_task_I, &_GLOBAL_9_nsc_task_I, &_GLOBAL_10_nsc_task_I, &_GLOBAL_11_nsc_task_I, &_GLOBAL_12_nsc_task_I, &_GLOBAL_13_nsc_task_I, &_GLOBAL_14_nsc_task_I, &_GLOBAL_15_nsc_task_I, &_GLOBAL_16_nsc_task_I, &_GLOBAL_17_nsc_task_I, &_GLOBAL_18_nsc_task_I, &_GLOBAL_19_nsc_task_I, &_GLOBAL_20_nsc_task_I, &_GLOBAL_21_nsc_task_I, &_GLOBAL_22_nsc_task_I, &_GLOBAL_23_nsc_task_I, &_GLOBAL_24_nsc_task_I, &_GLOBAL_25_nsc_task_I, &_GLOBAL_26_nsc_task_I, &_GLOBAL_27_nsc_task_I, &_GLOBAL_28_nsc_task_I, &_GLOBAL_29_nsc_task_I, &_GLOBAL_30_nsc_task_I, &_GLOBAL_31_nsc_task_I, &_GLOBAL_32_nsc_task_I, &_GLOBAL_33_nsc_task_I, &_GLOBAL_34_nsc_task_I, &_GLOBAL_35_nsc_task_I, &_GLOBAL_36_nsc_task_I, &_GLOBAL_37_nsc_task_I, &_GLOBAL_38_nsc_task_I, &_GLOBAL_39_nsc_task_I, &_GLOBAL_40_nsc_task_I, &_GLOBAL_41_nsc_task_I, &_GLOBAL_42_nsc_task_I, &_GLOBAL_43_nsc_task_I, &_GLOBAL_44_nsc_task_I, &_GLOBAL_45_nsc_task_I, &_GLOBAL_46_nsc_task_I, &_GLOBAL_47_nsc_task_I, &_GLOBAL_48_nsc_task_I, &_GLOBAL_49_nsc_task_I, };   
  return (*_GLOBAL_nsc_task_0_A[get_stack_id()]);
}
# 1 "<command-line>" 2
# 1 "linux-2.6.26/nsc/stub.c"
# 21 "linux-2.6.26/nsc/stub.c"
extern void nsc_assert(int, const char *);

void __alloc_pages(void) { nsc_assert(0, __func__); }
void __copy_from_user_ll(void) { nsc_assert(0, __func__); }
void __down_read(void) { nsc_assert(0, __func__); }
void __down_read_trylock(void) { nsc_assert(0, __func__); }
void __down_write(void) { nsc_assert(0, __func__); }
void __down_write_trylock(void) { nsc_assert(0, __func__); }
void __downgrade_write(void) { nsc_assert(0, __func__); }
void __free_pages(void) { nsc_assert(0, __func__); }
void __kill_fasync(void) { nsc_assert(0, __func__); }
void __mark_inode_dirty(void) { nsc_assert(0, __func__); }
void __up_read(void) { nsc_assert(0, __func__); }
void __up_write(void) { nsc_assert(0, __func__); }
void __vmalloc(void) { nsc_assert(0, __func__); }
void __xfrm_state_destroy(void) { nsc_assert(0, __func__); }
void account_system_time(void) { nsc_assert(0, __func__); }
void account_system_time_scaled(void) { nsc_assert(0, __func__); }
void account_user_time(void) { nsc_assert(0, __func__); }
void account_user_time_scaled(void) { nsc_assert(0, __func__); }
void add_wait_queue(void) { nsc_assert(0, __func__); }
void add_wait_queue_exclusive(void) { nsc_assert(0, __func__); }
void autoremove_wake_function(void) { nsc_assert(0, __func__); }
void clock_t_to_jiffies(void) { nsc_assert(0, __func__); }
void cmpxchg_386_u16(void) { nsc_assert(0, __func__); }
void cmpxchg_386_u32(void) { nsc_assert(0, __func__); }
void cmpxchg_386_u8(void) { nsc_assert(0, __func__); }
void complete(void) { nsc_assert(0, __func__); }
void crypto_aead_setauthsize(void) { nsc_assert(0, __func__); }
void crypto_alloc_aead(void) { nsc_assert(0, __func__); }
void crypto_alloc_base(void) { nsc_assert(0, __func__); }
void current_fs_time(void) { nsc_assert(0, __func__); }
void d_alloc(void) { nsc_assert(0, __func__); }
void d_instantiate(void) { nsc_assert(0, __func__); }
void default_wake_function(void) { nsc_assert(0, __func__); }
void device_del(void) { nsc_assert(0, __func__); }
void device_rename(void) { nsc_assert(0, __func__); }
void dirty_ratio_handler(void) { nsc_assert(0, __func__); }
void dirty_writeback_centisecs_handler(void) { nsc_assert(0, __func__); }
void drop_caches_sysctl_handler(void) { nsc_assert(0, __func__); }
void dynamic_dname(void) { nsc_assert(0, __func__); }
void f_getown(void) { nsc_assert(0, __func__); }
void f_setown(void) { nsc_assert(0, __func__); }
void fasync_helper(void) { nsc_assert(0, __func__); }
void fd_install(void) { nsc_assert(0, __func__); }
void fget(void) { nsc_assert(0, __func__); }
void fget_light(void) { nsc_assert(0, __func__); }
void find_task_by_vpid(void) { nsc_assert(0, __func__); }
void fput(void) { nsc_assert(0, __func__); }
void generic_pipe_buf_confirm(void) { nsc_assert(0, __func__); }
void generic_pipe_buf_map(void) { nsc_assert(0, __func__); }
void generic_pipe_buf_unmap(void) { nsc_assert(0, __func__); }
void generic_splice_sendpage(void) { nsc_assert(0, __func__); }
void get_empty_filp(void) { nsc_assert(0, __func__); }
void get_options(void) { nsc_assert(0, __func__); }
void get_sb_pseudo(void) { nsc_assert(0, __func__); }
void get_unused_fd(void) { nsc_assert(0, __func__); }
void get_unused_fd_flags(void) { nsc_assert(0, __func__); }
void getnstimeofday(void) { nsc_assert(0, __func__); }
void hrtimer_cancel(void) { nsc_assert(0, __func__); }
void hrtimer_get_remaining(void) { nsc_assert(0, __func__); }
void hrtimer_init(void) { nsc_assert(0, __func__); }
void hrtimer_start(void) { nsc_assert(0, __func__); }
void hrtimer_try_to_cancel(void) { nsc_assert(0, __func__); }
void in_egroup_p(void) { nsc_assert(0, __func__); }
void init_file(void) { nsc_assert(0, __func__); }
void ip6_mroute_getsockopt(void) { nsc_assert(0, __func__); }
void ip6_mroute_setsockopt(void) { nsc_assert(0, __func__); }
void ipv6_ext_hdr(void) { nsc_assert(0, __func__); }
void ipv6_skip_exthdr(void) { nsc_assert(0, __func__); }
void jiffies_to_clock_t(void) { nsc_assert(0, __func__); }
void jiffies_to_msecs(void) { nsc_assert(0, __func__); }
void jiffies_to_timeval(void) { nsc_assert(0, __func__); }
void kill_anon_super(void) { nsc_assert(0, __func__); }
void kill_pid_info(void) { nsc_assert(0, __func__); }
void km_new_mapping(void) { nsc_assert(0, __func__); }
void kmem_cache_destroy(void) { nsc_assert(0, __func__); }
void kobject_get(void) { nsc_assert(0, __func__); }
void kobject_put(void) { nsc_assert(0, __func__); }
void kthread_bind(void) { nsc_assert(0, __func__); }
void kthread_create(void) { nsc_assert(0, __func__); }
void kthread_should_stop(void) { nsc_assert(0, __func__); }
void lowmem_reserve_ratio_sysctl_handler(void) { nsc_assert(0, __func__); }
void min_free_kbytes_sysctl_handler(void) { nsc_assert(0, __func__); }
void monotonic_to_bootbased(void) { nsc_assert(0, __func__); }
void mutex_trylock(void) { nsc_assert(0, __func__); }
void native_read_tsc(void) { nsc_assert(0, __func__); }
void no_llseek(void) { nsc_assert(0, __func__); }
void param_get_int(void) { nsc_assert(0, __func__); }
void param_set_int(void) { nsc_assert(0, __func__); }
void percpu_pagelist_fraction_sysctl_handler(void) { nsc_assert(0, __func__); }
void proc_nr_files(void) { nsc_assert(0, __func__); }
void pskb_put(void) { nsc_assert(0, __func__); }
void put_device(void) { nsc_assert(0, __func__); }
void put_filp(void) { nsc_assert(0, __func__); }
void put_unused_fd(void) { nsc_assert(0, __func__); }
void remove_wait_queue(void) { nsc_assert(0, __func__); }
void run_posix_cpu_timers(void) { nsc_assert(0, __func__); }
void sched_rt_handler(void) { nsc_assert(0, __func__); }
void send_sigurg(void) { nsc_assert(0, __func__); }
void seq_printf(void) { nsc_assert(0, __func__); }
void set_process_cpu_timer(void) { nsc_assert(0, __func__); }
void sg_init_one(void) { nsc_assert(0, __func__); }
void sg_init_table(void) { nsc_assert(0, __func__); }
void simple_lookup(void) { nsc_assert(0, __func__); }
void simple_statfs(void) { nsc_assert(0, __func__); }
void simple_strtoul(void) { nsc_assert(0, __func__); }
void skb_icv_walk(void) { nsc_assert(0, __func__); }
void splice_to_pipe(void) { nsc_assert(0, __func__); }
void strncpy_from_user(void) { nsc_assert(0, __func__); }
void sys_close(void) { nsc_assert(0, __func__); }
void timeval_to_jiffies(void) { nsc_assert(0, __func__); }
void touch_atime(void) { nsc_assert(0, __func__); }
void vfree(void) { nsc_assert(0, __func__); }
void wait_for_completion(void) { nsc_assert(0, __func__); }
void wait_on_sync_kiocb(void) { nsc_assert(0, __func__); }
void wake_up_process(void) { nsc_assert(0, __func__); }
void xfrm4_rcv(void) { nsc_assert(0, __func__); }
void xfrm_aalg_get_byname(void) { nsc_assert(0, __func__); }
void xfrm_input_resume(void) { nsc_assert(0, __func__); }
void xfrm_output_resume(void) { nsc_assert(0, __func__); }
void xfrm_state_lookup(void) { nsc_assert(0, __func__); }
void xfrm_unregister_type(void) { nsc_assert(0, __func__); }
void yield(void) { nsc_assert(0, __func__); }

