#ifndef NSC_SUPPORT_H
#define NSC_SUPPORT_H

#include "sim.h"
#include "net.h"

// From NSC itself:
#include "sim_interface.h"

#include <list>
#include <string>

class WakeupListener {
public:
  virtual ~WakeupListener() {}
  virtual void Wakeup() = 0;
};

class NicQueueSpaceClosure : public Closure {
private:
  class NetStackOperations* stack_;
public:
  NicQueueSpaceClosure(class NetStackOperations*);
  virtual ~NicQueueSpaceClosure() {}
  virtual void Run();
};

class NetStackOperations : public ISendCallback, public IInterruptCallback,
                           public PacketReceiver {
public:
  struct INetStack* stack_;
  PacketReceiver* nic_;
  std::string ip_addr_str_;

  typedef std::list<class WakeupListener *> WakeupListenerList;
  WakeupListenerList wakeup_listeners_;

  NetStackOperations(PacketReceiver* nic);

  int Load(const char* stack_name);

  // ISendCallback
  virtual void send_callback(const void *data, int datalen);
  
  // IInterruptCallback
  virtual void interrupt();
  virtual void wakeup();
  virtual void gettime(unsigned int *, unsigned int *);

  // PacketReceiver
  virtual void Recv(Packet* p, struct PacketReceiver *from);

  // Internal
  void ScheduledWakeup();
  void InitStack(const char* ipAddr, const char* netmask, const char* default_gw, int mtu);
  void ScheduleSoftwareInterrupt();
  void SoftwareInterrupt();
  void RegisterWakeupListener(class WakeupListener*);
  void NicQueueSpace();
  int Sysctl(const char* syctl_name, const char* value);
  std::string GetSysctl(const char* sysctl_name);
  int Cmd(const char*);

  // Useful/utility
  const char* IpAddrString();
};


#endif
