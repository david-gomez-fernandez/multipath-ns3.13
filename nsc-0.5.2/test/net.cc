#include "sim.h"
#include "net.h"

#include <sstream>
#include <cassert>
#include <cstdio>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>

class PacketReceivedEvent : public Event {
private:
  Packet* packet_;
  PacketReceiver* dest_;
  PacketReceiver* from_;
public:
  PacketReceivedEvent(int64_t time, Packet* p, PacketReceiver* dest,
                      PacketReceiver* from)
      : Event(time), packet_(p), dest_(dest), from_(from) {
  }
  virtual void Run() {
    dest_->Recv(packet_, from_);
  }
  virtual std::string ShortDesc() {
    std::ostringstream oss;
    oss << "PacketReceivedEvent(from=" << from_->ShortDesc()
      << ",to=" << dest_->ShortDesc() << ",packet="
      << packet_->ShortDesc() << ")";
    return oss.str();
  }
};

class QueueFinishSendEvent : public Event {
private:
  Queue* q_;
public:
  QueueFinishSendEvent(int64_t time, Queue* q) : Event(time), q_(q) {}
  virtual void Run() { q_->FinishSend(); }
  virtual std::string ShortDesc() {
    std::ostringstream oss;
    oss << "QueueFinishSendEvent(" << q_->ShortDesc() << ")";
    return oss.str();
  }
};

/////////////////////////////////////////////////////////////////////////////

uint32_t GetSrcIpAddress(const Packet* p) {
  assert(p->get_size() >= 20);
  uint32_t *d = static_cast<uint32_t*>(p->get_data());
  // The src IP address if the 4th 32-bit (d)word
  return d[3];
}

uint32_t GetDstIpAddress(const Packet* p) {
  assert(p->get_size() >= 20);
  uint32_t *d = static_cast<uint32_t*>(p->get_data());
  // The dst IP address if the 5th 32-bit (d)word
  return d[4];
}

uint32_t GetIpAddress(const char* ip_addr) {
  return inet_addr(ip_addr);
}

std::string IpToStr(const uint32_t ip) {
  struct in_addr addr;
  addr.s_addr = ip;
  return inet_ntoa(addr);
}

void AddPacketRecvEvent(int64_t time, Packet* p, PacketReceiver *pr,
                        PacketReceiver *from) {
  AddEvent(new PacketReceivedEvent(time, p, pr, from));
}

void AddQueueFinishSendEvent(int64_t time, Queue* q) {
  AddEvent(new QueueFinishSendEvent(time, q));
}

/////////////////////////////////////////////////////////////////////////////

Packet::Packet(const void* data, int size) {
  size_ = size;
  data_ = new char [size_];
  memcpy(data_, data, size_);
}

Packet::Packet(const Packet* p) {
  size_ = p->get_size();
  data_ = new char [size_];
  memcpy(data_, p->get_data(), size_);
}

Packet::~Packet() {
  FreeData();
}

void Packet::FreeData() {
  if (size_ > 0) {
    delete [] data_;
    size_ = 0;
  }
}

std::string Packet::ShortDesc() {
  uint32_t *d = static_cast<uint32_t*>(get_data());
  std::ostringstream oss;
  oss << "Packet(" << this << ",src=" << IpToStr(d[3]) << ",dst="
    << IpToStr(d[4]) << ")";
  return oss.str();
}

/////////////////////////////////////////////////////////////////////////////

PcapTrace::PcapTrace() : pcap_file_(NULL) {
}

PcapTrace::~PcapTrace() {
  if (pcap_file_)
    fclose(pcap_file_);
}

void PcapTrace::TraceEnable(const char* filename) {
  pcap_file_ = fopen(filename, "w");
  if (pcap_file_) {
    struct pcap_file_header hdr;
    hdr.magic = 0xa1b2c3d4;
    hdr.version_major = 2;
    hdr.version_minor = 4;
    hdr.thiszone = 0;
    hdr.sigfigs = 0;
    hdr.snaplen = 70;
    hdr.linktype = 12;  // DLT_RAW
    fwrite(&hdr, sizeof(hdr), 1, pcap_file_);
  }
}

void PcapTrace::Trace(Packet* p) {
  const int snaplen = 70;

  if (!pcap_file_)
    return;

  void *d = p->get_data();
  int size = p->get_size();

  int64_t local_time = Now();
  struct pcap_pkthdr header;

  // Try to avoid getting negative times due to TZ issues
  local_time += 60 * 60 * 24 * kNanoSecondsInSecond;

  header.tv_sec = (unsigned)(local_time / kNanoSecondsInSecond);
  header.tv_usec = (unsigned)(
      (local_time % kNanoSecondsInSecond) / 1000);
  header.caplen = size > snaplen ? snaplen : size;
  header.len = size;

  fwrite(&header, sizeof(header), 1, pcap_file_);
  fwrite(d, header.caplen, 1, pcap_file_);
  fflush(pcap_file_);

}

/////////////////////////////////////////////////////////////////////////////

SimplexLink::SimplexLink(PacketReceiver* pr, int64_t propagation_delay)
   : dest_(pr), propagation_delay_(propagation_delay) {
}

void SimplexLink::Recv(Packet* packet, PacketReceiver *from) {
  int64_t arrival_time = Now() + PropagationDelay();
  AddPacketRecvEvent(arrival_time, packet, dest_, this);
}

std::string SimplexLink::ShortDesc() const {
  std::ostringstream oss;
  oss << "SimplexLink(dst=" << dest_->ShortDesc() << ")";
  return oss.str();
}

int64_t SimplexLink::PropagationDelay() const {
  return propagation_delay_;
}

/////////////////////////////////////////////////////////////////////////////

Queue::Queue(int max_queue_len, int64_t bw_bps, Closure* space_callback,
             PacketReceiver* next) 
    : busy_(false), max_queue_len_(max_queue_len), bw_bps_(bw_bps),
      queue_space_callback_(space_callback), next_(next), stats_drops_(0),
      stats_recvd_(0) {
}

Queue::~Queue() {
  delete queue_space_callback_;
}

void Queue::Recv(Packet* p, struct PacketReceiver *from) {
  stats_recvd_++;
  if (!HasRoomInQueue()) {
    // Drop
/*    TRACE(Now() << " " << ShortDesc() << " DROP " << p->ShortDesc() << ": from " 
        << from->ShortDesc() << " to " << next_->ShortDesc()
        << std::endl); */
    delete p;
    stats_drops_++;
    return;
  }

  queue_.push(p);
  TryToSend();
}

std::string Queue::ShortDesc() const {
  std::ostringstream oss;
  oss << "Queue(" << this << ")";
  return oss.str();
}

void Queue::FinishSend() {
  busy_ = false;
  TryToSend();
}

void Queue::TryToSend() {
  if (HasRoomInQueue()) {
    if (queue_space_callback_) {
      queue_space_callback_->Run();
    }
  }

  if (busy_ || queue_.empty()) {
    return;
  }

  Packet* p = queue_.front(); queue_.pop();
  const int64_t t = Now() + SerialiseTime(p->get_size());

  AddPacketRecvEvent(t, p, next_, this);
  AddQueueFinishSendEvent(t, this);

  busy_ = true;
}

bool Queue::HasRoomInQueue() const {
  return queue_.size() < max_queue_len_;
}

int64_t Queue::SerialiseTime(int bytes) const {
  return kNanoSecondsInSecond * bytes * 8LL / bw_bps_;
}

/////////////////////////////////////////////////////////////////////////////

NIC::NIC() : up_(NULL), output_queue_(0), ip_address_(0) {
}

NIC::~NIC() {
  delete output_queue_;
}

void NIC::Recv(Packet* p, PacketReceiver *from) {
  const uint32_t dst = GetDstIpAddress(p);

  pcap_tracer_.Trace(p);

  if (dst == ip_address_) {
    assert(up_);
    up_->Recv(p, this);
    delete p;
  } else {
    if (GetSrcIpAddress(p) == ip_address_)
      output_queue_->Recv(p, from);
    else {
      delete p;
    }
  }
}

std::string NIC::ShortDesc() const {
  std::ostringstream oss;
  oss << "NIC(ip=" << IpToStr(ip_address_) << ",stack=" << up_ << ",q="
    << output_queue_->ShortDesc() << ")";
  return oss.str();
}

void NIC::Connect(PacketReceiver *down, PacketReceiver* up, 
                  uint32_t ip_address, int queue_size, int64_t bw_bps,
                  Closure* space_callback) {
  ip_address_ = ip_address;
  output_queue_ = new Queue(queue_size, bw_bps, space_callback, down);
  up_ = up;
}

/////////////////////////////////////////////////////////////////////////////

Switch::Switch(int64_t bw_bps, size_t queue_size)
    : bw_bps_(bw_bps), queue_size_(queue_size) {
}

Switch::~Switch() {
  PortList::const_iterator j = ports_.begin();
  for (; j != ports_.end(); ++j) {
    delete j->q_;
  }
}

void Switch::Recv(Packet* p, PacketReceiver *from) {
  const uint32_t src_ip = GetSrcIpAddress(p);
  const uint32_t dst_ip = GetDstIpAddress(p);
  DestMap::const_iterator i;

  if ((i = dests_.find(src_ip)) == dests_.end()) {
    PortList::const_iterator j = ports_.begin();
    for (; j != ports_.end(); ++j) {
      if (j->first_ == from) {
        dests_[src_ip] = j->q_;
        break;
      }
    }
  }

  i = dests_.find(dst_ip);
  if (i != dests_.end()) {
    i->second->Recv(p, this);
  } else {
    // Echo out to all the other ports like a hub
    PortList::const_iterator j = ports_.begin();
    for (; j != ports_.end(); ++j) {
      if (j->first_ != from) {
        j->q_->Recv(new Packet(p), this);
      } else {
        // nop
      }
    }
    delete p;
  }
}

std::string Switch::ShortDesc() const {
  std::ostringstream oss;
  oss << "Switch(" << this << ")";
  return oss.str();
}

void Switch::AddLink(PacketReceiver *to_me, PacketReceiver *from_me) {
  Port p;
  p.first_ = to_me;
  p.second_ = from_me;
  p.q_ = new Queue(queue_size_, bw_bps_, NULL, from_me); 
  ports_.push_back(p);
}

