#include <iostream>
using namespace std;

class Dice {
private:
	int face;
public:
	Dice() {
		roll();
	}
	void roll() {
		face = rand() % 6 + 1;
	}
	int getFace() {
		return face;
	}
};
int main() {
	Dice d1, d2;
	int count12 = 0, count7 = 0;

	for (int i = 0; i < 1000; i++) {
		d1.roll();
		d2.roll();
		int sum = d1.getFace() + d2.getFace();
		if (sum == 12) {
			count12++;
		}
		else if (sum == 7) {
			count7++;
		}	
	}

	cout << "12가 나올 테스트 확률: " << (double)count12 / 1000 << endl;
	cout << "12가 나올 수학적 확률: " << 1.0 / 36.0 << endl;

	cout << endl;

	cout << "7가 나올 테스트 확률: " << (double)count7 / 1000 << endl;
	cout << "7가 나올 수학적 확률: " << 6.0 / 36.0 << endl;

	return 0;
}
