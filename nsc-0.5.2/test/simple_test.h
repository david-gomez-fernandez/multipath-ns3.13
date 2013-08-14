#ifndef SIMPLE_TEST_H
#define SIMPLE_TEST_H

#include <string>
#include <iostream>

#define STRINGIZE_INT(x) #x
#define STRINGIZE(x) STRINGIZE_INT(x)

#define ST_ASSERT(x) if (!(x)) { ST_test_info->failed++; \
  ST_test_info->fail_string += __FILE__ ":" STRINGIZE(__LINE__) \
      ": assertion '" #x "' failed.\n"; \
  return; }

#define ST_EXPECT(x) if (!(x)) { ST_test_info->failed++; \
  ST_test_info->fail_string += __FILE__ ":" STRINGIZE(__LINE__) \
      ": assertion '" #x "' failed.\n"; \
  }

#define ST_ANNOTATE(x) do { ST_test_info->fail_string += x; \
  ST_test_info->fail_string += "\n"; } while(0)

#define ST_TEST(name) void name(ST_TestInfo*); \
  struct name##__test_init { \
    name##__test_init() { ST_RegisterTest(#name, name); } \
  } name##__test_initialiser __attribute__((unused)); \
  void name(ST_TestInfo* ST_test_info)

struct ST_TestInfo {
  std::string name;
  void (*func)(ST_TestInfo*);
  int failed;
  std::string fail_string;
  struct ST_TestInfo* next;
  ST_TestInfo() : func(0), failed(0), next(0) {}
};

void ST_RegisterTest(const char* name, void (*func)(ST_TestInfo*));
int ST_RunTests();

#endif // SIMPLE_TEST_H
