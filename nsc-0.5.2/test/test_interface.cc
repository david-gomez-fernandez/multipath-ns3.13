#include "sim.h"
#include "net.h"
#include "nsc_support.h"
#include "simple_test.h"

ST_TEST(TestNewLinuxInterface) {
  // Test designed by Linux 2.6.18, Linux 2.6.26
  // TODO: At the time of writing it will only work with 2.6.18 due to the
  // 'tc' not working in 2.6.26 (assert failure due to undefined functions).
  const char stack_name[] = "liblinux2.6.18.so";
  Simulator sim;

  NIC* nic = new NIC();
  NetStackOperations* ops = new NetStackOperations(nic);
  ST_ASSERT(ops->Load(stack_name) == 0);

  ops->InitStack("192.168.0.1", "255.255.255.0", "192.168.0.240", 1500);

  // Test sysctls

  // tcp_congestion_control, strings
  ST_ASSERT(ops->Sysctl("net.ipv4.tcp_congestion_control", "reno") == 0);
  ST_ASSERT(ops->GetSysctl("net.ipv4.tcp_congestion_control") == "reno");
  ST_ASSERT(ops->Sysctl("net.ipv4.tcp_congestion_control", "bic") == 0);
  ST_ASSERT(ops->GetSysctl("net.ipv4.tcp_congestion_control") == "bic");
  ST_ASSERT(ops->Sysctl("net.ipv4.tcp_congestion_control", "lp") == 0);
  ST_ASSERT(ops->GetSysctl("net.ipv4.tcp_congestion_control") == "lp");

  // Some TCP metrics, ints
  ST_ASSERT(ops->Sysctl("net.ipv4.tcp_low_latency", "1") == 0);
  ST_ASSERT(ops->GetSysctl("net.ipv4.tcp_low_latency") == "1");
  ST_ASSERT(ops->Sysctl("net.ipv4.tcp_ecn", "1") == 0);
  ST_ASSERT(ops->GetSysctl("net.ipv4.tcp_ecn") == "1");
  ST_ASSERT(ops->Sysctl("net.ipv4.tcp_ecn", "0") == 0);
  ST_ASSERT(ops->GetSysctl("net.ipv4.tcp_ecn") == "0");
  ST_ASSERT(ops->Sysctl("net.core.wmem_max", "256000") == 0);
  ST_ASSERT(ops->GetSysctl("net.core.wmem_max") == "256000");

  // Memory, int[3]
  ST_ASSERT(ops->Sysctl("net.ipv4.tcp_wmem", "8192 87380 2097152") == 0);
  ST_ASSERT(ops->GetSysctl("net.ipv4.tcp_wmem") == "8192 87380 2097152");
  
  // Test some invalid sysctls
  // Invalid sysctl names
  ST_ASSERT(ops->Sysctl("net.ipv4.xxx", "bogus") != 0);
  ST_ASSERT(ops->Sysctl("xxx.ipv4.yyy", "0") != 0);
  // Invalid sysctl values
  ST_ASSERT(ops->Sysctl("net.core.wmem_max", "string_instead_of_int") != 0);
  // TODO: enable this test when we've rebuilt linux-2.6.18; it would 
  // previously allow this even though the parsing failed.
  //ST_ASSERT(ops->Sysctl("net.ipv4.tcp_wmem", "0 1") != 0);

  // Test cmd
  ST_ASSERT(ops->Cmd("tc qdisc add dev nsc0 root handle 1: htb default 2") == 0);
  ST_ASSERT(ops->Cmd("set_cpuset_netclass_id 0") == 0);
  ST_ASSERT(ops->Cmd("invalid") != 0);
  // Unfortunately we cannot test invalid tc commands, as they just assert
}

#ifdef __i386__
// FreeBSD only builds in 32-bit mode, so we only enable the test in that mode
ST_TEST(TestFreeBSDInterface) {
  const char stack_name[] = "libfreebsd5.3.so";
  Simulator sim;

  NIC* nic = new NIC();
  NetStackOperations* ops = new NetStackOperations(nic);
  ST_ASSERT(ops->Load(stack_name) == 0);

  ops->InitStack("192.168.0.1", "255.255.255.0", "192.168.0.240", 1500);
  
  // Test sysctls
  // Valid sysctls
  ST_EXPECT(ops->Sysctl("net.inet.tcp.rfc1323", "0") == 0);
  ST_EXPECT(ops->GetSysctl("net.inet.tcp.rfc1323") == "0");
  ST_EXPECT(ops->Sysctl("net.inet.tcp.sack.enable", "0") == 0);
  ST_EXPECT(ops->GetSysctl("net.inet.tcp.sack.enable") == "0");
  ST_EXPECT(ops->Sysctl("net.inet.tcp.sack.enable", "1") == 0);
  ST_EXPECT(ops->GetSysctl("net.inet.tcp.sack.enable") == "1");

  // Invalid sysctls
  ST_EXPECT(ops->Sysctl("net.inet.tcp.BOGUS", "xxx") != 0);
  ST_EXPECT(ops->Sysctl("net.inet.tcp.rfc1323", "a string!") != 0);
  ST_EXPECT(ops->Sysctl("net.inet.BOGUS", "1") != 0);

  ST_EXPECT(ops->GetSysctl("net.BOGUS") == "ERROR");
}

ST_TEST(TestOpenBSDInterface) {
  const char stack_name[] = "libopenbsd3.5.so";
  Simulator sim;

  NIC* nic = new NIC();
  NetStackOperations* ops = new NetStackOperations(nic);
  ST_ASSERT(ops->Load(stack_name) == 0);

  ops->InitStack("192.168.0.1", "255.255.255.0", "192.168.0.240", 1500);
  
  // Test sysctls
  // Valid sysctls
  ST_EXPECT(ops->Sysctl("net/inet/tcp/recvspace", "20000") == 0);
  ST_EXPECT(ops->GetSysctl("net/inet/tcp/recvspace") == "20000");
  ST_EXPECT(ops->Sysctl("net/inet/tcp/sack", "0") == 0);
  ST_EXPECT(ops->GetSysctl("net/inet/tcp/sack") == "0");
  ST_EXPECT(ops->Sysctl("net/inet/tcp/sack", "1") == 0);
  ST_EXPECT(ops->GetSysctl("net/inet/tcp/sack") == "1");

  // Invalid sysctls
  ST_EXPECT(ops->Sysctl("BOGUS/bogus", "0") != 0);
  ST_EXPECT(ops->Sysctl("net/inet/tcp/sack", "bogus") != 0);
  ST_EXPECT(ops->GetSysctl("bogus") == "ERROR");
}

ST_TEST(TestLwipInterface) {
  const char stack_name[] = "liblwip.so";
  Simulator sim;

  NIC* nic = new NIC();
  NetStackOperations* ops = new NetStackOperations(nic);
  ST_ASSERT(ops->Load(stack_name) == 0);

  ops->InitStack("192.168.0.1", "255.255.255.0", "192.168.0.240", 1500);
}
#endif

int main() {
  return ST_RunTests();
}
