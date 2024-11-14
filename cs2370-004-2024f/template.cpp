#include <iostream>
using namespace std;

template<typename T>
class mypair {
private:
    T a;
    T b;
public:
    mypair(T first, T second) : a(first), b(second) {}
    T getmin();
};

template<typename T>
T mypair<T>::getmin() {
    T result = a < b ? a : b;
    return result;
}


int main() {
    mypair<int> p1(1, 2);
    mypair<char> p2('a', 'Z');
    
    cout << "min int: " << p1.getmin() << endl;
    cout << "min char: " << p2.getmin() << endl;
    
    return 0;
}




/*int TripleMin(int e1, int e2, int e3) {
    int t = e1;
    if (e2 < t)
        t = e2;
    if (e3 < t)
        t = e3;
    return t;
}

double TripleMin(double e1, double e2, double e3) {
    double t = e1;
    if (e2 < t)
        t = e2;
    if (e3 < t)
        t = e3;
    return t;
}*/
/*template<typename T1, typename T2>    // template<typename TheType>
T1 TripleMin(T1 e1, T1 e2, T2 e3) {
    T1 t = e1;
    if (e2 < t)
        t = e2;
    if (e3 < t)
        t = e3;
    return t;
}


int main() {
    int i1 = 5;
    int i2 = 2;
    int i3 = 7;
    
    double d1 = 2.6;
    double d2 = 1.3;
    double d3 = -5.6;
    
    cout << "min int: " << TripleMin(i1, i2, i3) << endl;
    cout << "min double: " << TripleMin(d1, d2, i3) << endl;
    
    
    return 0;
}*/
