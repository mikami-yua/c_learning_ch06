#include <iostream>
using namespace std;
#include<string>
class GoodGay;

class Building {
	//声明goodGay是building的好朋友
	//friend void goodGay(Building& build);

	//friend class GoodGay;

	
	//friend void GoodGay::visit2();
public:
	Building() {
		this->settingRoom = "setting room";
		this->bedRoom = "bed room";
	}
	string settingRoom;
private:
	string bedRoom;
};
class GoodGay {
public:
	GoodGay();

	void visit(); //访问属性
	void visit2();//可以访问私有成员


	Building* building;

};
//类外实现函数
GoodGay::GoodGay() {
	//创建一个建筑物
	building = new Building;

}
void GoodGay::visit() {
	cout << building->settingRoom << endl;
}

void GoodGay::visit2() {
	//cout << building->bedRoom << endl;
}

/*
class GoodGay {
public:
	GoodGay();

	void visit(); //访问属性

	
	Building* building;

};
//类外实现函数
GoodGay::GoodGay() {
	//创建一个建筑物
	building = new Building;

}
void GoodGay::visit() {
	cout << building->settingRoom << endl;
	cout << building->bedRoom << endl;
}
*/

//
////全局函数
//void goodGay(Building& build) {
//	cout << build.settingRoom << endl;
//	cout << build.bedRoom << endl;
//}

int fun12() {
	/*
	Building b;
	goodGay(b);
	*/
	/*
	GoodGay gg;
	gg.visit();
	*/
	GoodGay gg;
	gg.visit();
	gg.visit2();

	system("pause");
	return 0;
}