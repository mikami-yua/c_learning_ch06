#include <iostream>
using namespace std;
#include<string>


/*多态------一般是说动态多态
* 静态多态
*	函数重载和运算符重载
*	函数地址实行早绑定：在编译阶段确定函数地址
* 动态多态
*	派生类和虚函数实现的运行时多态
*	函数地址实行晚绑定：运行时确定函数地址
*	
*	满足条件：
*		1.继承关系
*		2.子类重写父类的虚函数
*	
*	动态多态的使用：
*		父类指针或者引用指向子类对象
* 
* 多态的深入剖析：
*	Animal的大小是1（不加virtual）
*	加收virtual之后是4（这四个字节是指针）
*	写上virtual之后，Animal内部会有一个vfptr指针（虚函数指针）---指向一个虚函数表
*		vftable中存放的是记录虚函数的地址
*	继承时所有东西都继承一份，虚函数表也继承，当发生重写时，子类中的虚函数表内部会，
*	替换成子类的虚函数
* 
*	由于虚函数表的替换，实现了动态多态
* 
* 纯虚函数（后面直接写=0）------一般父类的方法都不会被调用
*	virtual void speak()=0；
*	类中有一个纯虚函数，这个类被称为抽象类
*		抽象类不能实例化对象
*		子类必须重写父类中的纯虚函数

* 虚析构和纯虚析构
*	子类中有属性开辟到堆区，父类指针无法在释放时调用子类的析构代码
*	父类指针在析构的时候，不会调用子类中的析构函数，导致子类堆区数据出现内存泄露
*	解决办法：在析构函数前加virtual
* 
*	纯虚析构也能解决这个问题，纯虚析构也需要代码的实现。有了纯虚析构也是抽象类了
* 
*/
class Animal {
public:
	virtual void speak() {
		cout << "animal is speaking" << endl;
	}
};
class Cat :public Animal {
public:
	void speak() {
		cout << "miao miao miao" << endl;
	}
};

/*
地址早绑定在编译阶段就确定了函数地址，无论传什么对象都是执行animal is speaking
需要进行地址晚绑定(父类中函数使用virtual修饰)
*/
void doSpeak(Animal &a) {
	a.speak();
}
int fun15() {
	Cat c;
	doSpeak(c);

	system("pause");
	return 0;
}