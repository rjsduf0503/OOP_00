#include <iostream>
using namespace std;

int i;

class A {
public:
	~A() {
		i = 10;
	}
};
int foo() {
	i = 3;
	A ob;
	ob.~A();//소멸자 명시적 호출
	return i;
}
int main() {
	cout << foo() << endl;
	return 0;
}