#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
	double area;

public:
	Circle(int r = 10) : radius(r) {
		cout << "Circle with radius " << radius << " is created" << endl;
	}
	~Circle() {
		cout << "Circle with radius " << radius << " is dying" << endl;
	}
	void setRadius(int r) {
		radius = r;
	}
	void calcArea() {
		area = 3.14 * radius * radius;
	}	
	void print() {
		cout << "Donuts Size: " << radius << endl;
		cout << "Donuts Area: " << area << endl;
	}
};
int main() {
	Circle donut;

	donut.calcArea();
	donut.print();

	donut.setRadius(30);
	donut.calcArea();
	donut.print();
	
	return 0;
}
