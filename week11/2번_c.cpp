#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class A {
	int a;
public:
	A() { a = 0; cout << "생성자 A: " << a << endl; }
	~A() { cout << "소멸자 A" << endl; }
	void f() { cout << " f() in A" << endl; }
	virtual void v() { cout << " v() in A" << endl; }
};
class B : public A {
	int b;
public:
	B() { b = 0; cout << "생성자 B: " << b << endl; }
	~B() { cout << "소멸자 B" << endl; }
	void f() { cout << " f() in B" << endl; }
	void v() { cout << " v() in B" << endl; }
};
class C : public B {
	int c;
public:
	C() { c = 0; cout << "생성자C: " << c << endl; }
	~C() { cout << "소멸자 C" << endl; }
	void f() { cout << " f() in C" << endl; }
	void v() { cout << " v() in C" << endl; }
};
int main() {
	A a;
	B b;
	C c;
	A* pa;
	C* pc;
	pa = &b;
	pa->f();		// 1)
	pa->v();		// 2)
	pc = new C();
	pa = pc;
	pa->f();		// 3)
	pa->v();		// 4)
	delete pa;		// 5)
	return 0;
}
