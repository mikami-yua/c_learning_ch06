#include <iostream>
using namespace std;
#include<string>

class Student {
public:
	string m_Name;
	int m_Id;

	void display() {
		cout << m_Name << " "<<m_Id << endl;
	}

	void setName(string name) {
		this->m_Name = name;
	}
};
/*
类中的属性和行为都称为成员
成员变量
成员函数

*/

int fun2() {
	Student s1;
	s1.m_Name = "zhangsan";
	s1.m_Id = 1;
	s1.display();
	s1.setName("lisi");
	s1.display();

	system("pause");
	return 0;
}