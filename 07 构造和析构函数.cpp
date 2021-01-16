#include <iostream>
using namespace std;
#include<string>
/*
对象的初始化和清理
构造函数

	分类：
		有参构造
		无参构造（无参和有参都属于普通构造函数）

		普通构造
		拷贝构造
			需要使用const：避免拷贝的时候影响本题
			使用地址传递的方式：省内存空间
			调用时机：
				拷贝对象
				值传递的方式给函数赋值
				值的方式返回局部对象
	调用：
	
	【注意】：使用默认构造函数时，不要加（）
		因为编译器会认为是函数的声明，不会认为是在创建对象
	【注意】：不要使用拷贝构造函数初始化匿名对象
		Person1(p2)；//编译器认为Person1 p2会认为是对象的声明
析构函数

不写的话编辑器自动实现一个空函数
*/
class Person1 {
public:
	Person1() {//无参构造
		cout << "constrt function" << endl;
	}
	Person1(int a,int height) {//有参构造
		age = a;
		this->height = new int(height);
		cout << "can constrt function" << endl;
	}
	//拷贝构造函数
	Person1(const Person1 &p) {//
		age = p.age;//将传入的对象的所有属性都拷贝一份
		//深拷贝
		this->height = new int(*p.height);
		cout << "copy constrt function" << endl;
	}

	//析构函数，没有返回值，不可以有参数,对象销毁前自动调用析构函数
	~Person1() {
		/*
		将堆区的数据需要手动释放
		*/
		if (height != NULL) {
			delete height;
			height = NULL;
		}
		cout << "~ is running " << endl;
	}

	int age;
	int* height;
};

void func7() {
	Person1 p1;//默认调用
	/*
	* 在栈上的数据，函数执行完就会自动释放这个对象
	* 对象释放自动调用析构函数
	*/
}
void func72() {
	//构造函数的调用
	//1.括号法
	//Person1 p1(10);
	//Person1 p2(20);
	//Person1 p3(p2);//拷贝构造函数
	//2.显示法
	//Person1 p1;
	//Person1 p2 = Person1(10);//显示   Person1(10):匿名对象，当前执行后，系统会马上回收匿名对象
	//Person1 p3 = Person1(p2);

	//3.隐式转换法
	//Person1 p1 = 10;//编译器转换为显示法
}

//值传递的方式给函数赋值
void doWork(Person1 p) {//实参传给形参时，使用拷贝构造函数构造新的对象作为形参
	
}

void func73() {
	Person1 p1;
	doWork(p1);
}

//值的方式返回局部对象
Person1 doWork2() {
	Person1 p;
	return p;//并不是返回的p，而是拷贝了一个新的对象赋值给外面
}
void func74() {
	Person1 p1=doWork2();
}

void func75() {
	Person1 p1(18,160);
	cout << p1.age <<"  "<<*p1.height<< endl;
	Person1 p2(p1);
	/*
	拷贝构造函数，只是把身高的指针逐字节的拷贝到新对对象，堆区的数据并没有复制
	析构p2先被释放（先进后出）先析构
	p1执行析构时，指针已经被释放过了。
	浅拷贝带来的问题是：堆区内存的重复释放
	浅拷贝的问题使用深拷贝解决
	*/
	cout << p2.age << "  " << *p2.height << endl;
}

int fun7() {
	func7();
	Person1 p2;
	/*
	main函数中的不会打印析构函数
	在main执行结束才会执行析构函数
	*/

	//func72();
	//func73();
	//func74();
	func75();

	system("pause");
	return 0;
}