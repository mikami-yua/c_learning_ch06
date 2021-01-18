#include <iostream>
using namespace std;
#include<string>
/*
对于内置的数据类型，编译器知道怎么运算
对于自定义的数据类型，编译器不知道怎么运算，需要使用运算符重载，重新定义运算规则

*/
//加号重载
//座椅运算符重载
class Person7 {
public:
	//通过成员函数实现重载
	/*
	Person7 operator+(Person7& p) {
		Person7 temp;
		temp.a = this->a + p.a;
		temp.b = this->b + p.b;
		return temp;
	}
	*/

	int a;
	int b;
};
//通过全局函数重载
/*
Person7 operator+(Person7& p1, Person7& p2) {
	Person7 temp;
	temp.a = p1.a + p2.a;
	temp.b = p1.b + p2.b;
	return temp;
}
void test01() {
	Person7 p1;
	p1.a = 10;
	p1.b = 10;
	Person7 p2;
	p2.a = 10;
	p2.b = 10;
	Person7 p3 = p1 + p2;
	cout << p3.a << "  " << p3.b << endl;
}
/*
* 通常不用成员函数重载左移，因为cout在左边
* cout重载是还要返回cout
*/
/*
ostream & operator<<(ostream &cout, Person7& p) {
	cout << p.a << " " <<p.b<<endl;
	return cout;
}

void test02() {
	Person7 p1;
	p1.a = 10;
	p1.b = 10;
	//cout << p1 << endl;加endl会报错，如果还能返回一个cout类型就能使用endl了
	cout << p1 << endl ;
}
*/

int fun13() {
	//test01();
	//test02();
	system("pause");
	return 0;
}
//p122