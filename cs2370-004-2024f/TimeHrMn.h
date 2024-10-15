#ifndef TIMEHRMN_H
#define TIMEHRMN_H
#include <iostream>
using namespace std;

class TimeHrMn {
private:
  int hour;
  int minute;

public:
  TimeHrMn(int hour = 0, int minute = 0);
  TimeHrMn operator+(TimeHrMn other);
  TimeHrMn operator+(int hour);
  void Print() const;

friend TimeHrMn operator+(int hour, TimeHrMn time);
};
TimeHrMn operator+(int hour, TimeHrMn time);

#endif