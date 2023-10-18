//a~f

#include <iostream>
using namespace std;

class Complex {
public:
    double real, imag;
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {
        cout << "생성자 호출: ";
        print();
    }
    ~Complex() {
        cout << "소멸자 호출: ";
        print();
    }
    void print() {
        cout << real << "+" << imag << "i" << endl;
    }
    Complex(Complex& c) {
        real = c.real;
        imag = c.imag;
        cout << "복사생성자 호출: ";
        print();
    }
};
Complex add(Complex c1, Complex c2) { //외부함수, 반환 값의 타입은 Complex
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;

    return temp;
}
int main() {
    Complex c1(1, 2), c2(3, 4), t;

    t = add(c1, c2);
    t.print();

    return 0;
}

//값 전달인 경우
//생성자 4번: c1, c2, t 생성 시 3회 + add()에서 temp 생성 시 1
//소멸자 6번: add()에서 c1, c2 복사하여 사용 후 소멸 2회 + add()에서 temp 소멸 시 1회 + main() 종료 시 3회
//복사생성자: add()에서 Complex c1, Complex c2 전달될 때 함수에 전달되는 객체를 복사하기 때문에 2

//참조 타입인 경우
//생성자 4번:
//소멸자 4번:
//복사생성자 0번: 참조 타입 전달이라 복사가 안
