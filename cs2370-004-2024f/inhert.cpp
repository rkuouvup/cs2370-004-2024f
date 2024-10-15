#include <iostream>
#include <string>
using namespace std;

class Business {
protected:
    string name;
    string address;
public:
    void SetName(string name) {this->name = name;}
    void SetAddress(string address) {this->address = address;}
    string GetDescription() const {
        return name + " -- " + address;
    }
};

class Restaurant : public Business {
private:
    int rating;
public:
    void SetRating(int rating) {this->rating = rating;}
    int GetRating() const {return rating;}
    void PrintDescription () const {
        cout << name << " -- " << address << ": " << rating << endl;
    }
};

int main() {
    Business b;
    Restaurant r1;
    b.SetName("my business");
    b.SetAddress("my address");
    
    r1.SetName("Give Guys");
    r1.SetAddress("University Place");
    r1.SetRating(5);
    
    cout << b.GetDescription() << endl;
    cout << r1.GetDescription() << endl;
    r1.PrintDescription();
    
    return 0;
}

