extern void f(const char *);

int tcv_exts_dump()
{
  f("hello world\n");
rtattr_failure: __attribute__ ((unused))
  return -1;
}
