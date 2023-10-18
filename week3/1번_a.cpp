#include <iostream>
using namespace std;

class Tower {
private:
	int height;
public:
	Tower(int h = 1) {
		height = h;
	}
	int getHeight() {
		return height;
	}
};
int main() {
	Tower myTower;
	Tower seoulTower(100);

	cout << "높이 " << myTower.getHeight() << endl;
	cout << "높이 " << seoulTower.getHeight() << endl;

	return 0;
}
