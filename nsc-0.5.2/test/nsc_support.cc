#include "nsc_support.h"

#include <iostream>
#include <string>
#include <sstream>
#include <dlfcn.h>

class WakeupEvent : public Event {
private:
  NetStackOperations* stack_;
public:
  WakeupEvent(int64_t time, NetStackOperations* stack)
      : Event(time), stack_(stack) {
  }
  virtual void Run() {
    stack_->ScheduledWakeup();
  }
  virtual std::string ShortDesc() {
    std::ostringstream oss;
    oss << "WakeupEvent(" << stack_ << ")";
    return oss.str();
  }
};

class SoftwareInterruptEvent : public Event {
private:
  NetStackOperations* stack_;
public:
  SoftwareInterruptEvent(int64_t time, NetStackOperations* stack)
      : Event(time), stack_(stack) {
  }
  virtual void Run() {
    stack_->SoftwareInterrupt();
  }
  virtual std::string ShortDesc() {
    std::ostringstream oss;
    oss << "SoftwareInterruptEvent(" << stack_ << ")";
    return oss.str();
  }
};

NicQueueSpaceClosure::NicQueueSpaceClosure(NetStackOperations* stack)
    : stack_(stack) {
}

void NicQueueSpaceClosure::Run() {
  stack_->NicQueueSpace();
}

NetStackOperations::NetStackOperations(PacketReceiver *nic)
    : stack_(NULL), nic_(nic) {
}

int NetStackOperations::Load(const char* shared_lib) {
  void *handle = dlopen(shared_lib, RTLD_NOW);
  if (!handle) {
	std::cerr << dlerror() << std::endl;
	return -1;
  }

  FCreateStack create_func = reinterpret_cast<FCreateStack>(dlsym(handle, 
        "nsc_create_stack"));
  assert(create_func);

  stack_ = create_func(this, this, NULL);

  return 0;
}

void NetStackOperations::send_callback(const void *data, int datalen) {
  // A packet needs to be output to the NIC (i.e., send into the simulator)
  Packet* p(new Packet(data, datalen));
  Recv(p, this);
}

void NetStackOperations::interrupt() {
  // Not used with NSC >= 0.3.0
  // should possibly call stack_->timer_interrupt()
  // and read data?
  assert(0);
}

void NetStackOperations::wakeup() {
  // Called when an event on a socket would wake up an application (e.g., there
  // are bytes to read) Note that we dont want to call into applications here,
  // they should run on their own thread.  Practically this means scheduling an
  // event for them to wakeup in a very short amount of time.  should schedule
  // the application to read/write at this point
  AddEvent(new WakeupEvent(Now(), this));
}

void NetStackOperations::ScheduledWakeup() {
  for (WakeupListenerList::iterator i = wakeup_listeners_.begin();
      i != wakeup_listeners_.end(); ++i) {
    (*i)->Wakeup();
  }
}

void NetStackOperations::gettime(unsigned int* sec, unsigned int* usec) {
  int64_t time = Now();

  *sec = static_cast<int>(time / kNanoSecondsInSecond);
  *usec = static_cast<int>((time % kNanoSecondsInSecond) / 1000);
}

void NetStackOperations::Recv(Packet* p, PacketReceiver *from) {
  // We received a packet from the simulator
  if (from == nic_) {
    // Packet received from the NIC intended for the stack
    // The '0' is the NIC index, we only support 1 nic right now
    stack_->if_receive_packet(0, p->get_data(), p->get_size());

    // XXX: We used to call wakeup() here. These days stacks should be set up
    // correctly so this automatically happens, but when testing new stacks or
    // protocols it might make sense to re-add this call. It was always done
    // this way in the ns-2 implementation, but then, it was always a hack.
  } else {
    nic_->Recv(p, this);
  }
}

void NetStackOperations::InitStack(const char* ipAddr, const char* netmask,
                                   const char* default_gw, int mtu) {
  assert(stack_);

  // We save out IP as its useful to be able to query it later when connecting
  // applications
  ip_addr_str_ = ipAddr;

  stack_->init(stack_->get_hz());
  stack_->if_attach(ipAddr, netmask, mtu);
  stack_->add_default_gateway(default_gw);

  ScheduleSoftwareInterrupt();
}

void NetStackOperations::ScheduleSoftwareInterrupt() {
  int64_t time = Now() + kNanoSecondsInSecond / stack_->get_hz();
  AddEvent(new SoftwareInterruptEvent(time, this));
}

void NetStackOperations::SoftwareInterrupt() {
  assert(stack_);

  // we need to call both these functions every 1/hz seconds
  stack_->increment_ticks();
  stack_->timer_interrupt();

  ScheduleSoftwareInterrupt();
}

void NetStackOperations::RegisterWakeupListener(WakeupListener* wl) {
  wakeup_listeners_.push_back(wl);
}

void NetStackOperations::NicQueueSpace() {
  // For NSC >= 0.3.0
  // we need to call if_send_finish() after any call to if_send_packet if there is till
  // buffer space on the NIC
  stack_->if_send_finish(0); // XXX: hardcoded interface id
}

int NetStackOperations::Sysctl(const char* sysctl_name, const char* value) {
  return stack_->sysctl_set(sysctl_name, value);
}

std::string NetStackOperations::GetSysctl(const char* sysctl_name) {
  char buffer[4096];
  if (stack_->sysctl_get(sysctl_name, buffer, sizeof(buffer)) >= 0) {
    return std::string(buffer);
  }
  return std::string("ERROR");
}

int NetStackOperations::Cmd(const char* cmd) {
  return stack_->cmd(cmd);
}

const char* NetStackOperations::IpAddrString() {
  return ip_addr_str_.c_str();
}
