#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class A {
	int a;
public:
	A() { a = 0; cout << "생성자 A: " << a << endl; }
	~A() { cout << "소멸자 A" << endl; }
};
class B : public A {
	int b;
public:
	B() { b = 0; cout << "생성자 B: " << b << endl; }
	~B() { cout << "소멸자 B" << endl; }
};
class C : public B {
	int c;
public:
	C() { c = 0; cout << "생성자 C: " << c << endl; }
	~C() { cout << "소멸자 C" << endl; }
};
int main() {
	A a;
	B b;
	C c;
	return 0;
}
