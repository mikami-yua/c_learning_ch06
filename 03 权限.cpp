#include <iostream>
using namespace std;
#include<string>


/*
访问权限
	public
		类内类外都能用
	private
		类内可以类外不能
	protected
		类内可以，继承关系可以访问
*/
class Person {
public:
	string name;
protected:
	string car;
private:
	int passwd;

public:
	void func() {
		name = "zhangsan";
		car = "benzi";
		passwd = 123;
	}
};

int fun3() {
	Person p1;
	p1.name = "lisi";


	system("pause");
	return 0;
}