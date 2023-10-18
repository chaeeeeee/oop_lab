#include <iostream>
using namespace std;

class Circle {
public:
    int radius;

public:
    Circle(int r = 0) : radius(r) {
        cout << "Circle with " << radius << " is created" << endl;
    }
    ~Circle() {
        cout << "Circle with " << radius << " is dying" << endl;
    }
    void print() {
        cout << "radius: " << radius << endl;
    }    
};
int main() {
    Circle arrCir[3];    //생성자 3회 호출 + 소멸자 3회 호출 (배열 소멸되면서)

    for (Circle c : arrCir)    //소멸자 3회 호출
        c.radius = rand() % 100 + 1;

    for (Circle c : arrCir)    //소멸자 3회 호출
        c.print();

    return 0;
}
