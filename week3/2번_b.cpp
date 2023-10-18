#include <iostream>
using namespace std;

class Dice {
private:
	int face;
public:
	void roll() {
		face = rand() % 6 + 1;
	}
	int getFace() {
		return face;
	}
};
int main() {
	Dice d;
	int count = 0;

	for (int i = 0; i < 1000; i++) {
		d.roll();
		if (d.getFace() == 3) {
			count++;
		}	
	}
	cout << "테스트 확률: " << (double)count / 1000 << endl;
	cout << "수학적 확률: " << 1.0 / 6.0 << endl;

	return 0;
}
