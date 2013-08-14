#ifndef SIM_H
#define SIM_H

#include <vector>
#include <list>
#include <string>
#include <queue>
#include <cassert>
#include <iostream>
#include <stdint.h>

class Event {
private:
  int64_t time_;
  bool cancelled_;
  int64_t event_id_;
  static int64_t global_event_id;

public:
  Event(int64_t time);
  virtual ~Event();

  virtual void Run();
  virtual std::string ShortDesc() { return "Event"; }

  int64_t get_time() const { return time_; }
  bool get_cancelled() const { return cancelled_; }
  int64_t get_event_id() const { return event_id_; }
};

class Closure {
public:
  virtual ~Closure() {}
  virtual void Run() = 0;
};

class Simulator {
private:
  class Scheduler* scheduler_;
  int64_t time_;
  static Simulator* inst_;
  int64_t num_events_;
  bool stop_;

public:
  Simulator();
  ~Simulator();

  void Enqueue(Event* event);
  void Run();
  void Stop();

  int64_t get_time() const { return time_; }
  static Simulator* get() { return inst_; }
};

inline void AddEvent(Event* event) { Simulator::get()->Enqueue(event); }
inline int64_t Now() { return Simulator::get()->get_time(); }

void AddSimulatorStopEvent(int64_t time);

const int64_t kNanoSecondsInSecond = 1000000000;


#endif
