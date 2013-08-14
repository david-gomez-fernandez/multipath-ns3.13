#ifndef NET_H
#define NET_H

#include "sim.h"
#include <queue>
#include <string>
#include <map>
#include <list>

class Packet {
private:
  char *data_;
  int size_;

public:
  Packet(const void *data, int size);
  Packet(const Packet* p);
  ~Packet();
  void FreeData();
  std::string ShortDesc();

  int get_size() const { return size_; }
  void* get_data() const { return data_; }
};

uint32_t GetSrcIpAddress(const Packet* p);
uint32_t GetDstIpAddress(const Packet* p);
uint32_t GetIpAddress(const char* ip_addr);

class PacketReceiver {
public:
  virtual void Recv(Packet* p, struct PacketReceiver *from) = 0;
  virtual std::string ShortDesc() const { return "PacketReceiver"; }
  virtual ~PacketReceiver() {}
};

class PcapTrace {
public:
  struct pcap_file_header {
    uint32_t magic;
    uint16_t version_major;
    uint16_t version_minor;
    int32_t thiszone;	/* gmt to local correction */
    uint32_t sigfigs;	/* accuracy of timestamps */
    uint32_t snaplen;	/* max length saved portion of each pkt */
    uint32_t linktype;	/* data link type (LINKTYPE_*) */
  };
  struct pcap_pkthdr {
    uint32_t tv_sec;
    uint32_t tv_usec;
    int32_t caplen;	/* length of portion present */
    int32_t len;	/* length this packet (off wire) */
  };
  FILE* pcap_file_;

  PcapTrace();
  ~PcapTrace();
  void TraceEnable(const char* filename);
  void Trace(Packet* p);
};

class SimplexLink : public PacketReceiver {
public:
  PacketReceiver* dest_;
  int64_t propagation_delay_;

  SimplexLink(PacketReceiver* pr, int64_t propagation_delay);
  virtual ~SimplexLink() {}

  virtual void Recv(Packet* p, struct PacketReceiver *from);
  virtual std::string ShortDesc() const;
  int64_t PropagationDelay() const;
};

class Queue : public PacketReceiver {
public:
  Queue(int max_queue_len, int64_t bw_bps, Closure* space_callback, PacketReceiver* next);
  virtual ~Queue();
  virtual void Recv(Packet* p, struct PacketReceiver *from);
  virtual std::string ShortDesc() const;

  void FinishSend();
  void TryToSend();
  bool HasRoomInQueue() const;
  int64_t SerialiseTime(int bytes) const;
  
  bool busy_;
  size_t max_queue_len_;
  int64_t bw_bps_;
  Closure* queue_space_callback_;
  PacketReceiver* next_;
  std::queue<Packet*> queue_;
  int64_t stats_drops_;
  int64_t stats_recvd_;
};

class NIC : public PacketReceiver {
public:
  PacketReceiver* up_;
  Queue* output_queue_;
  uint32_t ip_address_;
  PcapTrace pcap_tracer_;

  NIC();
  virtual ~NIC();

  virtual void Recv(Packet* p, struct PacketReceiver *from);
  virtual std::string ShortDesc() const;
  void Connect(PacketReceiver *down, PacketReceiver* up, uint32_t ip_address, 
      int queue_size, int64_t bw_bps, Closure* space_callback);
};

class Switch : public PacketReceiver {
public:
  struct Port {
    PacketReceiver *first_, *second_;
    Queue* q_;
  };
  typedef std::map<uint32_t, Queue*> DestMap;
  typedef std::list<Port> PortList;

  DestMap dests_;
  PortList ports_;
  int64_t bw_bps_;
  size_t queue_size_;

  Switch(int64_t bw_bps, size_t queue_size);
  virtual ~Switch();
  virtual void Recv(Packet* p, struct PacketReceiver *from);
  virtual std::string ShortDesc() const;
  void AddLink(PacketReceiver* from_me, PacketReceiver* to_me);
};


#endif
