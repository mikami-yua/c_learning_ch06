#include <iostream>
using namespace std;
#include<string>

/*
成员函数加const后称这种函数为常函数
常函数不能修改成员属性
成员属性声明时加mutable后，再常函数中可以修改

常对象只能调用常函数
	避免间接修改属性
*/

class Person6 {
public:
	/*
	this指针的本质：指针常量，指针的指向不能修改
	this指向的值可以修改
	*/
	void showPerson() const {//这个const加上之后连指向的值也不能修改了
		this->b = 100;
			//this->a = 100;
	}

	int a;
	mutable int b;//常函数，常对象中也可以修改
};

void func111() {
	const Person6 p;
	//p.a = 100;报错
	p.b = 100;
}

int fun11() {
	
	system("pause");
	return 0;
}
//p118