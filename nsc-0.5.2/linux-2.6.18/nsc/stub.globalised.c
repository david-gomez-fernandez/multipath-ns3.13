# 1 "linux-2.6.18/nsc/stub.c"
# 1 "/media/sda4/GIT/network-coding-ns-3-13/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "linux-2.6.18/include/linux/config.h" 1





# 1 "linux-2.6.18/include/linux/autoconf.h" 1
# 7 "linux-2.6.18/include/linux/config.h" 2
# 1 "<command-line>" 2
# 1 "linux-2.6.18/nsc/nsc_override.h" 1




#include "num_stacks.h"
static inline struct task_struct * get_nsc_task(void)
{
  typedef  struct task_struct   _GLOBAL_0_T; extern  _GLOBAL_0_T  * global_nsc_task[NUM_STACKS];    
  return global_nsc_task[get_stack_id()];
}
# 1 "<command-line>" 2
# 1 "linux-2.6.18/nsc/stub.c"
# 21 "linux-2.6.18/nsc/stub.c"
extern void nsc_assert(int, const char *);

void __down_read(void) { nsc_assert(0, __func__); }
void __down_read_trylock(void) { nsc_assert(0, __func__); }
void __down_write(void) { nsc_assert(0, __func__); }
void __down_write_trylock(void) { nsc_assert(0, __func__); }
void __downgrade_write(void) { nsc_assert(0, __func__); }
void seq_printf(void) { nsc_assert(0, __func__); }
void preempt_schedule(void) { nsc_assert(0, __func__); }
void seq_read(void) { nsc_assert(0, __func__); }
void seq_lseek(void) { nsc_assert(0, __func__); }
void seq_open(void) { nsc_assert(0, __func__); }
void remove_proc_entry(void) { nsc_assert(0, __func__); }
void diskmon_pop_curr_file(void) { nsc_assert(0, __func__); }
void proc_nmi_enabled(void) { nsc_assert(0, __func__); }
void diskmon_push_curr_file(void) { nsc_assert(0, __func__); }
void nr_running_cpu(void) { nsc_assert(0, __func__); }
void set_netdump_dest_multicast_or_broadcast(void) { nsc_assert(0, __func__); }
void set_netdump_dest_unicast(void) { nsc_assert(0, __func__); }
void disable_netdump(void) { nsc_assert(0, __func__); }
void drop_caches_sysctl_string(void) { nsc_assert(0, __func__); }
void simple_rename(void) { nsc_assert(0, __func__); }
void get_pid_task(void) { nsc_assert(0, __func__); }
void kill_litter_super(void) { nsc_assert(0, __func__); }
void sort(void) { nsc_assert(0, __func__); }
void __up_read(void) { nsc_assert(0, __func__); }
void __up_write(void) { nsc_assert(0, __func__); }
void param_set_int(void) { nsc_assert(0, __func__); }
void param_get_int(void) { nsc_assert(0, __func__); }
void get_task_mm(void) { nsc_assert(0, __func__); }
void mmput(void) { nsc_assert(0, __func__); }
void __put_task_struct(void) { nsc_assert(0, __func__); }
void generic_delete_inode(void) { nsc_assert(0, __func__); }
void generic_file_llseek(void) { nsc_assert(0, __func__); }
void generic_file_open(void) { nsc_assert(0, __func__); }
void d_alloc_root(void) { nsc_assert(0, __func__); }
void get_sb_single(void) { nsc_assert(0, __func__); }
void call_usermodehelper_keys(void) { nsc_assert(0, __func__); }
void find_task_by_pid_type(void) { nsc_assert(0, __func__); }
void simple_read_from_buffer(void) { nsc_assert(0, __func__); }
void __bitmap_and(void) { nsc_assert(0, __func__); }
void __bitmap_andnot(void) { nsc_assert(0, __func__); }
void __bitmap_empty(void) { nsc_assert(0, __func__); }
void __bitmap_equal(void) { nsc_assert(0, __func__); }
void __bitmap_intersects(void) { nsc_assert(0, __func__); }
void __bitmap_or(void) { nsc_assert(0, __func__); }
void __bitmap_subset(void) { nsc_assert(0, __func__); }
void partition_sched_domains(void) { nsc_assert(0, __func__); }
void bitmap_parselist(void) { nsc_assert(0, __func__); }
void bitmap_scnlistprintf(void) { nsc_assert(0, __func__); }
void bitmap_scnprintf(void) { nsc_assert(0, __func__); }
void lookup_one_len(void) { nsc_assert(0, __func__); }
void d_delete(void) { nsc_assert(0, __func__); }
void simple_rmdir(void) { nsc_assert(0, __func__); }
void dput(void) { nsc_assert(0, __func__); }
void dget_locked(void) { nsc_assert(0, __func__); }
void simple_unlink(void) { nsc_assert(0, __func__); }
void simple_lookup(void) { nsc_assert(0, __func__); }
void touch_atime(void) { nsc_assert(0, __func__); }
void percpu_pagelist_fraction_sysctl_handler(void) { nsc_assert(0, __func__); }
void proc_nr_files(void) { nsc_assert(0, __func__); }
void rwsem_downgrade_wake(void) { nsc_assert(0, __func__); }
void set_process_cpu_timer(void) { nsc_assert(0, __func__); }
void hrtimer_start(void) { nsc_assert(0, __func__); }
void hrtimer_try_to_cancel(void) { nsc_assert(0, __func__); }
void idle_cpu(void) { nsc_assert(0, __func__); }
void hrtimer_forward(void) { nsc_assert(0, __func__); }
void hrtimer_get_remaining(void) { nsc_assert(0, __func__); }
void drop_caches_sysctl_handler(void) { nsc_assert(0, __func__); }
void run_posix_cpu_timers(void) { nsc_assert(0, __func__); }
void generic_splice_sendpage(void) { nsc_assert(0, __func__); }
void current_fs_time(void) { nsc_assert(0, __func__); }
void class_device_initialize(void) { nsc_assert(0, __func__); }
void class_device_add(void) { nsc_assert(0, __func__); }
void xfrm_replay_notify(void) { nsc_assert(0, __func__); }
void __mark_inode_dirty(void) { nsc_assert(0, __func__); }
void get_netdump_dest(void) { nsc_assert(0, __func__); }
void set_netdump_dest(void) { nsc_assert(0, __func__); }
void account_user_time(void) { nsc_assert(0, __func__); }
void account_system_time(void) { nsc_assert(0, __func__); }
void cond_resched_lock(void) { nsc_assert(0, __func__); }
void strncpy_from_user(void) { nsc_assert(0, __func__); }
void lowmem_reserve_ratio_sysctl_handler(void) { nsc_assert(0, __func__); }
void check_tcp_syn_cookie(void) { nsc_assert(0, __func__); }
void class_device_del(void) { nsc_assert(0, __func__); }
void class_device_unregister(void) { nsc_assert(0, __func__); }
void class_device_rename(void) { nsc_assert(0, __func__); }
void class_device_put(void) { nsc_assert(0, __func__); }
void complete(void) { nsc_assert(0, __func__); }
void add_wait_queue(void) { nsc_assert(0, __func__); }
void add_wait_queue_exclusive(void) { nsc_assert(0, __func__); }
void __copy_from_user_ll(void) { nsc_assert(0, __func__); }
void __down_failed_interruptible(void) { nsc_assert(0, __func__); }
void __free_pages(void) { nsc_assert(0, __func__); }
void __bitmap_weight(void) { nsc_assert(0, __func__); }
void d_rehash(void) { nsc_assert(0, __func__); }
void d_instantiate(void) { nsc_assert(0, __func__); }
void d_alloc(void) { nsc_assert(0, __func__); }
void dirty_writeback_centisecs_handler(void) { nsc_assert(0, __func__); }
void get_sb_pseudo(void) { nsc_assert(0, __func__); }
void get_options(void) { nsc_assert(0, __func__); }
void get_empty_filp(void) { nsc_assert(0, __func__); }
void idr_remove(void) { nsc_assert(0, __func__); }
void idr_pre_get(void) { nsc_assert(0, __func__); }
void idr_get_new_above(void) { nsc_assert(0, __func__); }
void idr_find(void) { nsc_assert(0, __func__); }
void getnstimeofday(void) { nsc_assert(0, __func__); }
void kthread_create(void) { nsc_assert(0, __func__); }
void kthread_bind(void) { nsc_assert(0, __func__); }
void kill_anon_super(void) { nsc_assert(0, __func__); }
void ipv6_ext_hdr(void) { nsc_assert(0, __func__); }
void in_egroup_p(void) { nsc_assert(0, __func__); }
void lower_zone_protection_sysctl_handler(void) { nsc_assert(0, __func__); }
void min_free_kbytes_sysctl_handler(void) { nsc_assert(0, __func__); }
void no_llseek(void) { nsc_assert(0, __func__); }
void proc_unknown_nmi_panic(void) { nsc_assert(0, __func__); }
void put_filp(void) { nsc_assert(0, __func__); }
void secure_tcp_syn_cookie(void) { nsc_assert(0, __func__); }
void rwsem_down_write_failed(void) { nsc_assert(0, __func__); }
void rwsem_down_read_failed(void) { nsc_assert(0, __func__); }
void set_user_nice(void) { nsc_assert(0, __func__); }
void send_sigurg(void) { nsc_assert(0, __func__); }
void send_group_sig_info(void) { nsc_assert(0, __func__); }
void simple_statfs(void) { nsc_assert(0, __func__); }
void si_swapinfo(void) { nsc_assert(0, __func__); }
void crypto_hmac_init(void) { nsc_assert(0, __func__); }
void crypto_hmac_final(void) { nsc_assert(0, __func__); }
void __kill_fasync(void) { nsc_assert(0, __func__); }
void xfrm_state_insert(void) { nsc_assert(0, __func__); }
void xfrm_state_delete_tunnel(void) { nsc_assert(0, __func__); }
void wait_for_completion(void) { nsc_assert(0, __func__); }
void fget(void) { nsc_assert(0, __func__); }
void fget_light(void) { nsc_assert(0, __func__); }
void fd_install(void) { nsc_assert(0, __func__); }
void default_wake_function(void) { nsc_assert(0, __func__); }
void crypto_hmac_update(void) { nsc_assert(0, __func__); }
void get_unused_fd(void) { nsc_assert(0, __func__); }
void rwsem_wake(void) { nsc_assert(0, __func__); }
void remove_wait_queue(void) { nsc_assert(0, __func__); }
void register_cpu_notifier(void) { nsc_assert(0, __func__); }
void pskb_put(void) { nsc_assert(0, __func__); }
void kthread_should_stop(void) { nsc_assert(0, __func__); }
void ipv6_skip_exthdr(void) { nsc_assert(0, __func__); }
void crypto_hmac(void) { nsc_assert(0, __func__); }
void __xfrm_state_destroy(void) { nsc_assert(0, __func__); }
void __page_cache_release(void) { nsc_assert(0, __func__); }
void xfrm_aalg_get_byname(void) { nsc_assert(0, __func__); }
void xfrm4_tunnel_deregister(void) { nsc_assert(0, __func__); }
void wait_on_sync_kiocb(void) { nsc_assert(0, __func__); }
void skb_to_sgvec(void) { nsc_assert(0, __func__); }
void skb_icv_walk(void) { nsc_assert(0, __func__); }
void skb_cow_data(void) { nsc_assert(0, __func__); }
void __alloc_pages(void) { nsc_assert(0, __func__); }
void xfrm4_rcv(void) { nsc_assert(0, __func__); }
void sys_close(void) { nsc_assert(0, __func__); }
void put_unused_fd(void) { nsc_assert(0, __func__); }
void seq_putc(void) { nsc_assert(0, __func__); }
void xfrm_unregister_type(void) { nsc_assert(0, __func__); }
void simple_strtoul(void) { nsc_assert(0, __func__); }
void crypto_alloc_tfm(void) { nsc_assert(0, __func__); }
void yield(void) { nsc_assert(0, __func__); }
void xfrm_state_lookup(void) { nsc_assert(0, __func__); }
void wake_up_process(void) { nsc_assert(0, __func__); }
void seq_release(void) { nsc_assert(0, __func__); }
void kmem_cache_destroy(void) { nsc_assert(0, __func__); }
void fput(void) { nsc_assert(0, __func__); }
void crypto_free_tfm(void) { nsc_assert(0, __func__); }
void single_release(void) { nsc_assert(0, __func__); }
void single_open(void) { nsc_assert(0, __func__); }
void autoremove_wake_function(void) { nsc_assert(0, __func__); }
void seq_release_private(void) { nsc_assert(0, __func__); }
void seq_puts(void) { nsc_assert(0, __func__); }
void km_new_mapping(void) { nsc_assert(0, __func__); }
void f_setown(void) { nsc_assert(0, __func__); }

