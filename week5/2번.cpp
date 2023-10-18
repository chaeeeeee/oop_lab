#include <iostream>
#include <vector>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(int r=0) : radius(r) {
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
		Circle c(i);	//생성자 3번 호출
		v.push_back(c);	//(i=1)Circle 객체가 복사되어 저장되고 Circle 객체 소멸 -> 소멸자 1회 호출
				/*(i=2)이전 벡터에 저장된 객체가 복사되어 이동, 새로운 Circle 객체가 복사되어 저장
				  -> 이전 벡터 저장된 객체와 새로 생성된 Circle 객체 소멸 -> 소멸자 2회 호출*/
				/* (i=3)이전 벡터에 저장된 객체 2개가 복사되어 이동, 새로운 Circle 객체가 복사되어 저장
    			 	  -> 이전에 저장된 객체(2개)와 새로 생성된 Circle 객체 소멸 -> 소멸자 3회 호출*/
				//총 소멸자 6회 호출

	for (auto& c : v) {
		cout << c.getRadius() << endl;
	}

	return 0;		//main 함수 종료시 소멸자 3회 호출
				//!! 총 생성자 3번, 소멸자 9번
}
