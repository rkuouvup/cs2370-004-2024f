#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Business {
protected:
    string name;
    string address;
public:
    void SetName(string name) {this->name = name;}
    void SetAddress(string address) {this->address = address;}
    virtual string GetDescription() const = 0;/* {
        return name + " -- " + address;
    }*/
};

class Restaurant : public Business {
private:
    int rating;
public:
    void SetRating(int rating) {this->rating = rating;}
    int GetRating() const {return rating;}
    string GetDescription() const override {
        //return Business::GetDescription() +
        return "\n  rating: " + to_string(rating);
    }
    /*void PrintDescription () const {
        cout << name << " -- " << address << ": " << rating << endl;
    }*/
};

class Foo{
public:
    string GetDescription() const {return "foo";}
};



void DriveTo(Business* bptr) {
    cout << "Drive to " << bptr->GetDescription() << endl;
}


/*int main() {
    vector<Business*> v;
    
    //Business *vptr = new Business;
    //vptr->SetName("my business");
    //vptr->SetAddress("my address");
    //v.push_back(vptr);
    
    Restaurant *rptr1 = new Restaurant;
    rptr1->SetName("Give Guys");
    rptr1->SetAddress("University Place");
    rptr1->SetRating(5);
    v.push_back(rptr1);
    
    Restaurant *rptr2 = new Restaurant;
    rptr2->SetName("Lovely Pho");
    rptr2->SetAddress("heading to provo");
    rptr2->SetRating(4);
    v.push_back(rptr2);
    
    
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i)->GetDescription() << endl;
    }
    
    
    
    //Business b;
    //Restaurant r1;
    //b.SetName("my business");
    //b.SetAddress("my address");
    
    //r1.SetName("Give Guys");
    //r1.SetAddress("University Place");
    //r1.SetRating(5);
    
    //DriveTo(&b);
    //DriveTo(&r1);
    
    //Foo f;
    //DriveTo(&f);
    
    //cout << b.GetDescription() << endl;
    //cout << r1.GetDescription() << endl;
    //r1.PrintDescription();
    
    return 0;
}*/

