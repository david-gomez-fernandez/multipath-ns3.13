struct tvec_base_s;

extern struct tvec_base_s boot_tvec_bases;

struct tvec_base_s *base = &boot_tvec_bases;

extern struct undef_type a;

void func() {
    &a;
}

struct task_struct* nsc_get_task() {
  extern struct task_struct *nsc_task;
  return nsc_task;
}

struct task_struct {
  int a;
};

struct task_struct *nsc_task;

void do_stuff() {
  nsc_task = 0;
}

