#include "sim.h"
#include "net.h"
#include "nsc_support.h"
#include "simple_test.h"
#include "app.h"

// #define DEBUG_TRACE 1

ST_TEST(TestTcpStream) {
#ifdef __x86_64__
  const int num_stacks = 2;
#else
  const int num_stacks = 6;
#endif
  const char stack_names[num_stacks][512] = {
    "liblinux2.6.18.so",
    "liblinux2.6.26.so",
#ifndef __x86_64__
    "liblinux2.6.10.so",
    "libfreebsd5.3.so",
    "libopenbsd3.5.so",
    "liblwip.so",
#endif
  };

  // Directly connect 2 NICs via 2 simplex links

  for (int i = 0; i < num_stacks; i++) {
    const char* stack_name = stack_names[i];

    int64_t delay_ns = 100;
    int nic_q_size = 512;  // In packets
    int bw_bps = 1000000;  // 1Mb/s
    const char stack_1_addr[] = "192.168.0.1";
    const char stack_2_addr[] = "192.168.0.2";
    const char netmask[] = "255.255.255.0";
    const char gateway[] = "192.168.0.254";
    int mtu = 1500;

    Simulator sim;

    NIC* nic_1 = new NIC();
    NIC* nic_2 = new NIC();

#ifdef DEBUG_TRACE
    nic_1->pcap_tracer_.TraceEnable((std::string(stack_name) + "_1.pcap").c_str());
    nic_2->pcap_tracer_.TraceEnable((std::string(stack_name) + "_2.pcap").c_str());
#endif

    SimplexLink* link_1 = new SimplexLink(nic_1, delay_ns);
    SimplexLink* link_2 = new SimplexLink(nic_2, delay_ns);

    NetStackOperations* stack_1 = new NetStackOperations(nic_1);
    NetStackOperations* stack_2 = new NetStackOperations(nic_2);

    ST_ASSERT(stack_1->Load(stack_name) == 0);
    ST_ASSERT(stack_2->Load(stack_name) == 0);

    nic_1->Connect(link_2, stack_1, GetIpAddress(stack_1_addr), nic_q_size,
                   bw_bps, new NicQueueSpaceClosure(stack_1));
    nic_2->Connect(link_1, stack_2, GetIpAddress(stack_2_addr), nic_q_size,
                   bw_bps, new NicQueueSpaceClosure(stack_2));

    stack_1->InitStack(stack_1_addr, netmask, gateway, mtu);
    stack_2->InitStack(stack_2_addr, netmask, gateway, mtu);

    TcpApp* app_listen = new TcpApp(stack_2);
    app_listen->Listen(6000);

    TcpApp* app_send = new TcpApp(stack_1);
    app_send->Connect(stack_2_addr, 6000);

    AddSimulatorStopEvent(2000000000);

    sim.Run();

    ST_ANNOTATE(stack_name);
    ST_EXPECT(app_send->stats_sent_bytes_ > 10000);
    ST_EXPECT(app_listen->stats_accepted_ == 1);
    ST_EXPECT(app_listen->stats_read_bytes_ > 10000);

    /*std::cerr
      << app_send->stats_sent_bytes_ << " "
      << app_listen->stats_accepted_ << " "
      << app_listen->stats_read_bytes_ << " "
      << std::endl;*/
  }
}

int main() {
  return ST_RunTests();
}
