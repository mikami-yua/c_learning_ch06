#include <iostream>
using namespace std;
#include<string>

class Person2 {
public:
	/*Person2(int a, int b, int c) {
		m_a = a;
		m_b = b;
		m_c = c;
	}*/
	//初始化列表
	Person2():m_a(10), m_b(20), m_c(30) {

	}

	int m_a;
	int m_b;
	int m_c;
};

void func81() {
	//Person2 p(10, 20, 30);
	Person2 p;
	cout << p.m_a << endl;
	cout << p.m_b << endl;
	cout << p.m_c << endl;
}

int fun8() {
	
	func81();

	system("pause");
	return 0;
}