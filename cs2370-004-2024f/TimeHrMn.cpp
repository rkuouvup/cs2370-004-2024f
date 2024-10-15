#include "TimeHrMn.h"

TimeHrMn::TimeHrMn(int hour, int minute) {
  int carry = 0;
  if (minute < 0) {
    this->minute = 0;
  } else if (minute >=0 && minute < 60) {
    this->minute = minute;
  } else {
    this->minute = minute % 60;
    carry = minute / 60;
  }
  this->hour = hour + carry;
}
TimeHrMn TimeHrMn::operator+(TimeHrMn other) {
  TimeHrMn t(this->hour + other.hour, this->minute + other.minute);
  return t;
}
TimeHrMn TimeHrMn::operator+(int hour){
  TimeHrMn t(this->hour + hour, this->minute);
  return t;
}

void TimeHrMn::Print() const {
  cout << "H: " << hour << ", M: " << minute << endl;
}


TimeHrMn operator+(int hour, TimeHrMn time) {
  TimeHrMn t(hour + time.hour, time.minute);
  return t;
}