#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>
#include <cstdlib>
using namespace std;

class Restaurant {
  private:
    string name;
    int rating;
    const int id;
    static int nextid;
  public:
    //Restaurant();
    Restaurant(string name = "no name", int rating = -1);
    string GetName() const;
    void SetName(string name);
    void SetRating(int rating);
    static int GetNextId();
    void Print();
// void Print() {cout << id << ": "<< name << "--" << rating << endl;}
};


#endif