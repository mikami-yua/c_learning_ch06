#include <iostream>
using namespace std;
#include<string>

class Person {
public:
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return this->name;
	}

	int getAge() {
		this->age = 0;
		return this->age;
	}

	void setLover(string lover) {
		this->lover = lover;
	}
private:
	string name;//rw
	int age;//r
	string lover;//w
};


int fun4() {
	Person p;
	p.setName("zhangsan");
	cout << p.getName() << endl;
	cout << p.getAge() << endl;

	system("pause");
	return 0;
}