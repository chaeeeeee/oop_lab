#include <iostream>
#include <vector>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(int r) : radius(r) {
		cout << "Crying" << endl;
	}
	~Circle() {
		cout << "Dying" << endl;
	}
	int getRadius() {
		return radius;
	}
};
int main() {
	vector<Circle> v;

	for (int i = 1; i < 4; i++) {
		Circle c(i);
		v.push_back(c);
	}

	for (auto& c : v) {
		cout << c.getRadius() << endl;
	}

	return 0;
}
