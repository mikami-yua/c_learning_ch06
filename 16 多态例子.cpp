#include <iostream>
using namespace std;
#include<string>

class Caluculator {
public:
	virtual int getResult() {
		return 0;
	}
	int num1;
	int num2;
};
class Add:public Caluculator {
public:
	int getResult() {
		return this->num1 + this->num2;
	}
};
class Sub :public Caluculator {
public:
	int getResult() {
		return this->num1 - this->num2;
	}
};
class Mul :public Caluculator {
public:
	int getResult() {
		return this->num1 * this->num2;
	}
};
class Div :public Caluculator {
public:
	int getResult() {
		return this->num1 / this->num2;
	}
};
//15中使用地址多态，本例中使用指针多态
void test16() {
	Caluculator* abc = new Mul;//像java一样
	abc->num1 = 10;
	abc->num2 = 10;
	cout << abc->getResult() << endl;
}

int fun16() {
	test16();


	system("pause");
	return 0;
}