#include "simple_test.h"
#include <list>
#include <string>
#include <iostream>

ST_TestInfo* global_test_list = 0;
ST_TestInfo* global_test_list_tail = 0;

void ST_RegisterTest(const char* name, void (*func)(ST_TestInfo*)) {
  ST_TestInfo* info = new ST_TestInfo;
  info->name = name;
  info->func = func;

  if (global_test_list_tail) {
    global_test_list_tail->next = info;
    global_test_list_tail = info;
  } else {
    global_test_list = global_test_list_tail = info;
  }
}

int ST_RunTests() {
  ST_TestInfo* iterator = global_test_list;
  int passed = 0;
  int failed = 0;
  for (; iterator; iterator = iterator->next) {
    std::cerr << "TEST: " << iterator->name << " ... ";
    iterator->func(iterator);
    if (iterator->failed != 0) {
      std::cerr << "FAIL" << std::endl;
      if (!iterator->fail_string.empty()) {
        // This will already have end lines in it.
        std::cerr << iterator->fail_string;
      }
      failed++;
    } else {
      std::cerr << "PASS" << std::endl;
      passed++;
    }
  }

  // 0 failed means we return 0, which is "success" as this should be returned
  // from the main function.
  return failed;
}
