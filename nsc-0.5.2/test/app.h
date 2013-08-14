#ifndef APP_H
#define APP_H

#include "sim.h"
#include "nsc_support.h"

class TcpApp : public WakeupListener
{
public:
  class NetStackOperations* ops_;
  class INetStreamSocket* sock_, *accepted_;
  enum {
    Invalid, Listening, Sending, ReadingOnAccepted,
  } state_;
  int64_t stats_accepted_;
  int64_t stats_sent_bytes_;
  int64_t stats_read_bytes_;

  TcpApp(class NetStackOperations* ops);
  virtual ~TcpApp() {}
  void Connect(const char* ipAddr, int port);
  void Listen(int port);
  virtual void Wakeup();

};


#endif // APP_H
