#include <iostream>
using namespace std;
#include<string>
/*
继承
	减少重复代码
	子类也成为派生类 父类也称为基类

	继承的方式：（父类的private任何方式都不能继承）
		public
			父类的公有和保护类型不变的移动到子类
		private
			父类的公有和保护类型在子类中变为私有类型
		protected
			父类的公有和保护类型在子类中变为保护类型

		父类中所有非静态的成员属性都会被子类继承，父类中私有成员被编译器隐藏了，
			编译器是访问不到的，但是确实被继承了

	利用开发人员命令提示工具
		跳转盘符： E：
		跳转文件路径 cd 具体路径
		查看命令 cl /d1 reportSingleClassLayout想看的类名 “cpp文件名”

	继承中构造和析构的顺序：
		创建子类对象时是先有父类对象还是先有子类对象
		先构造父类在构造子类
		析构与构造顺序相反

	继承中同名属性的处理方式：（函数和属性的用法相同）
		子类函数，直接.就可以使用
		父类函数，需要：：指明作用域（父类中的所有数据都有）
			s.S::integer

			子类可以重写父类函数，子类的的同名成员函数会隐藏所有的父类同名函数
			即：函数以子类中写的为准，子类可以重写父类的函数不能重载父类的函数
				加作用域可以访问父类被重写的函数
	
	静态成员的继承（与非静态成员的使用方式相同）
		访问子类同名成员，直接访问
		访问父类同名成员，加上作用域

	多继承-----实际开发中不建议使用多继承
		多继承中会引发父类同名属性或函数的问题，解决办法是使用作用域区分

		子类会保存所有父类的，占有的内存大小也可以反应这个问题

	菱形继承（类似兄妹结婚的近亲繁殖）
		菱形继承导致资源有两份，浪费资源
		使用virtual 为虚基类
		数据只有一个，也不需要作用域了

*/
class BasePage1 {
public:
	void header() {
		cout << "header" << endl;
	}
	void footer() {
		cout << "footer" << endl;
	}
	void left() {
		cout << "left" << endl;
	}
};
class BasePage {
public:
	void header() {
		cout << "header" << endl;
	}
	void footer() {
		cout << "footer" << endl;
	}
	void left() {
		cout << "left" << endl;
	}
	
};
class Java :public BasePage {
public:
	void content() {
		cout << "java" << endl;
	}
};

class CPP :public BasePage {
public:
	void content() {
		cout << "c++" << endl;
	}
};
//多继承
class Son :public BasePage, public BasePage1 {
public:

};


void test01() {
	cout << "java:" << endl;
	Java j;
	j.header();
	j.footer();
	j.content();
	j.left();
	cout << "c++:" << endl;
	CPP c;
	c.header();
	c.footer();
	c.content();
	c.left();

	Son s;
	s.BasePage::footer();//使用作用域区分不同父类的成员函数
	
}

int fun14() {
	test01();


	system("pause");
	return 0;
}
//130