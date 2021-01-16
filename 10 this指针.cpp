#include <iostream>
using namespace std;
#include<string>



class Person4 {
	int m_a;
	static int m_b;
};
int Person4:: m_b = 1;

void func101() {
	Person4 p;
	cout << sizeof(p) << endl;//1
	/*
	c++编译器给每个空对象也分配一个字节的空间，是为了区分空对象占内存的位置
	每个空对象，也应该有个独一无二的内存地址
	*/
}

void func102() {
	Person4 p;
	cout << sizeof(p) << endl;//4
	/*
	c++编译器给每个空对象也分配一个字节的空间，是为了区分空对象占内存的位置
	每个空对象，也应该有个独一无二的内存地址
	*/
}

class Person5 {
public:
	Person5(int age) {
		this->age = age;
	}

	Person5& PersonAddPerson(Person5 &p) {//返回本题需要使用引用的方式返回
		this->age += p.age;
		return *this;//p2的本体
	}

	int age;
};
void func103() {
	Person5 p1(10);
	Person5 p2(10);
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);//链式编程
	cout << p2.age << endl;
}

int fun10() {
	func102();
	func103();

	system("pause");
	return 0;
}