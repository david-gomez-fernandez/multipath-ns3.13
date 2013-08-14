#include "sim.h"
#include <cassert>
#include <iostream>

/////////////////////////////////////////////////////////////////////////////

bool EventPtrLessReverse(const Event* a, const Event* b) {
  // Order here is deliberately reversed to make priority_queue have the lowest
  // appear at the front of the queue
  if (a->get_time() == b->get_time()) {
    return b->get_event_id() < a->get_event_id();
  }
  return b->get_time() < a->get_time();
}

class Scheduler {
private:
  typedef bool (*CompareEventPtrsFunc)(const Event* a, const Event* b);
  typedef std::priority_queue<Event*, std::vector<Event*>,
          CompareEventPtrsFunc> EventList;
  EventList event_list_;

public:
  Scheduler() : event_list_(&EventPtrLessReverse) {}
  void Enqueue(Event* event) { event_list_.push(event); }
  bool HasEvents() const { return !event_list_.empty(); }
  Event* NextEvent() {
    Event* event = event_list_.top();
    event_list_.pop();
    return event;
  }
};

/////////////////////////////////////////////////////////////////////////////

class StopEvent : public Event {
public:
  StopEvent(int64_t time) : Event(time) {}
  virtual ~StopEvent() {}
  virtual void Run() {
    Simulator::get()->Stop();
  }
  virtual std::string ShortDesc() {
    return "StopEvent";
  }
};

void AddSimulatorStopEvent(int64_t time) {
  AddEvent(new StopEvent(time));
}

/////////////////////////////////////////////////////////////////////////////

int64_t Event::global_event_id = 1;

Event::Event(int64_t time) : time_(time), cancelled_(false) {
  event_id_ = global_event_id++;
}

Event::~Event() {
}

void Event::Run() {
  assert(0);
}

/////////////////////////////////////////////////////////////////////////////

Simulator* Simulator::inst_ = NULL;

Simulator::Simulator()
    : time_(0), num_events_(0), stop_(false) {
  scheduler_ = new Scheduler();
  inst_ = this;
}

Simulator::~Simulator() {
  delete scheduler_;
}

void Simulator::Enqueue(Event* e) {
  scheduler_->Enqueue(e);
}

void Simulator::Run() {
  while (scheduler_->HasEvents() && !stop_) {
    Event* event = scheduler_->NextEvent();

    if (!event->get_cancelled()) {
      assert(event->get_time() >= time_);
      time_ = event->get_time();

      //std::cout << time_ << " " << event->ShortDesc() << std::endl;

      event->Run();
    }

    delete event;
  }
  stop_ = false;
}

void Simulator::Stop() {
  stop_ = true;
}
