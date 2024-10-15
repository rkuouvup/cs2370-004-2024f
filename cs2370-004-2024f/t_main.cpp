#include "TimeHrMn.h"
#include <iostream>
using namespace std;

int main() {
  TimeHrMn t1(2, 34);
  TimeHrMn t2(3, 15);
  TimeHrMn t3 = t1 + t2;
             // t1.operator+(t2);
  TimeHrMn t4 = t1 + 3; // 5, 34
             // t1.operator+(3)
  TimeHrMn t5 = 3 + t1; // 5, 34
             // operator+(3, t1)

  t1.Print();
  t2.Print();
  t3.Print();
  t4.Print();
  t5.Print();

  return 0;
}