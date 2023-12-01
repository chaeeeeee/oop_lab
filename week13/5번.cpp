#include <iostream>
#include <string>
using namespace std;

class Circle {
    string name;
    double radius;

public:
    Circle(string name, double radius) : name(name), radius(radius) {}
    double getRadius() { return radius; }
    string getName() { return name; }

    bool operator > (Circle& other) {
        return radius > other.radius;
    }

    friend ostream& operator<<(ostream& os, const Circle& circle) {
        os << circle.name;
        return os;
    }
};

template <class T>
T larger(T a, T b) {
    return (a > b) ? a : b;
}
string larger(Circle& a, Circle& b) {
    if (a > b) {
        return a.getName();
    }
    else {
        return b.getName();
    }
}
int main() {
    cout << larger(5, 6) << endl;                   // T larger() 호출됨
    cout << larger('A', 'B') << endl;               // T larger() 호출됨
    cout << larger(5.6, 3.2) << endl;               // T larger() 호출됨
    cout << larger("Hello", "Happy") << endl;       // T larger() 호출됨

    Circle waffle("Waffle", 10), pizza("Pizza", 20);
    cout << larger(waffle, pizza) << endl;          // string larger() 호출됨 -> 연산자중복 호출되지 않음.

    return 0;
}
