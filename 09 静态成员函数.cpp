#include <iostream>
using namespace std;
#include<string>
/*
静态成员函数：
	所有对象共享同一个函数
	静态成员函数值能访问静态成员变量
		非静态成员，函数不能区分哪个对象的属性
	
	静态成员函数也是有访问权限的
*/
class Person3{
public:
	static void func() {
		m_a = 100;
		cout << "static running" << endl;
	}
	static int m_a;
};
int Person3::m_a = 0;

void func91() {
	//1.通过对象
	Person3 p;
	p.func();
	//2.通过类
	Person3::func();
}

int fun9() {
	func91();


	system("pause");
	return 0;
}