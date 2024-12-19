#ifndef TIME_HPP
#define TIME_HPP

#include <iostream>
struct Time
{
    int hour;
    int min;
	Time():hour(0), min(0){};
	Time(std::string stringTime);
};
#endif
