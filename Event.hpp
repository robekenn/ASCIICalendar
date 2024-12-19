#ifndef EVENT_HPP
#define EVENT_HPP

#include <iostream>
#include "time.hpp"
class event{
private:
    std::string name;
    Time start;
    Time end;
    bool allDay;
public:
    event(std::string name, bool allDay, std::string start, std::string end) : name(name), allDay(allDay) start(start), end(end){};
    void print_name();
    ~event();
};
#endif