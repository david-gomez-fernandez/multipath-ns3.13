#include "app.h"
#include "nsc_support.h"

TcpApp::TcpApp(NetStackOperations* ops) 
    : ops_(ops), sock_(NULL), accepted_(NULL), state_(Invalid), 
      stats_accepted_(0), stats_sent_bytes_(0), stats_read_bytes_(0)
{
}

void TcpApp::Connect(const char* ipAddr, int port)
{
  assert(ops_);
  assert(!sock_);

  ops_->RegisterWakeupListener(this);

  sock_ = ops_->stack_->new_tcp_socket();
  sock_->connect(ipAddr, port);

  state_ = Sending;
}

void TcpApp::Listen(int port)
{
  assert(ops_);
  assert(!sock_);

  ops_->RegisterWakeupListener(this);

  sock_ = ops_->stack_->new_tcp_socket();
  sock_->listen(port);

  state_ = Listening;
}

void TcpApp::Wakeup()
{
  switch (state_)
  {
    case Invalid: assert(0); break;
    case Listening:
      if (sock_->accept(&accepted_) == 0)
      {
        stats_accepted_++;
        state_ = ReadingOnAccepted;
        Wakeup();
      }
      break;
    case Sending:
      {
        char buffer[65535];
        const int send_size = sizeof(buffer); // XXX hardcoded

        if (!sock_->is_connected())
          break;

        int error = 0;

        do {
          error = sock_->send_data(buffer, send_size);

          if (error > 0) {
            stats_sent_bytes_ += error;
          }
        } while (error > 0);
      }
      break;
    case ReadingOnAccepted:
      {
        char buffer[65536];

        while (true) {
          int buflen = sizeof(buffer);
          int error = accepted_->read_data(buffer, &buflen);

          if (buflen && error == 0) {
            stats_read_bytes_ += buflen;
          } else {
            break;
          }
        }
      }
      break;
  }

}
