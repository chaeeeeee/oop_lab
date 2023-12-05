#include <iostream>
#include <vector>
using namespace std;

class A {
	int a;
public:
	A() { 
		a = 0; 
		cout << "생성자 A: " << a << endl; 
	}
	virtual ~A() { 
		cout << "소멸자 A" << endl; 
	}
	void f() { 
		cout << " f() in A" << endl; 
	}
	virtual void v() { 
		cout << " v() in A" << endl; 
	}
};
class B : public A {
	int b;
public:
	B() { 
		b = 0; 
		cout << "생성자 B: " << b << endl; 
	}
	~B() { 
		cout << "소멸자 B" << endl; 
	}
	void f() { 
		cout << " f() in B" << endl; 
	}
	void v() { 
		cout << " v() in B" << endl; 
	}
};
class C : public B {
	int c;
public:
	C() { 
		c = 0;
		cout << "생성자 C: " << c << endl; 
	}
	~C() { 
		cout << "소멸자 C" << endl; 
	}
	void f() { 
		cout << " f() in C" << endl; 
	}
	void v() { 
		cout << " v() in C" << endl; 
	}
};
int main() {
	vector<A*> v;

	A* a = new A();
	B* b = new B();
	C* c = new C();

	v.push_back(a);
	v.push_back(b);
	v.push_back(c);

	for (A* obj : v) {
		obj->f();
		obj->v();
	}

	for (A* obj : v) {
		delete obj;
	}
	
	return 0;
}
