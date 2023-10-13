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
    Circle arrCir[3];

    for (Circle c : arrCir)
        c.radius = rand() % 100 + 1;

    for (Circle c : arrCir)
        c.print();

    return 0;
}
