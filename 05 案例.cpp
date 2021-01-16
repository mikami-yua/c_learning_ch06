#include <iostream>
using namespace std;
#include<string>

class Cube {
public:
	void setL(int l) {
		m_L = l;
	}
	int getL() {
		return m_L;
	}
	void setW(int w) {
		m_W = w;
	}
	int getW() {
		return m_W;
	}
	void setH(int h) {
		m_H = h;
	}
	int getH() {
		return m_H;
	}
	//计算表面积
	int calculateS() {
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}
	//计算体积
	int calculateV() {
		return m_L * m_W * m_H;
	}
	//成员函数判断是否相等
	bool isSame(Cube& c2) {
		if (m_H == c2.getH() && m_L == c2.getL() &&m_W== c2.getW()) {
			return true;
		}
		else {
			return false;
		}
	}
private:
	int m_L;
	int  m_W;
	int m_H;
};

//全局函数判断是否相等
bool isSame(Cube& c1, Cube& c2) {
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW()) {
		return true;
	}
	else {
		return false;
	}
}

int fun5() {
	Cube c1;
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);
	cout << c1.calculateS() << endl;
	cout << c1.calculateV() << endl;

	Cube c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(11);

	cout << isSame(c1, c2) << endl;//0
	cout << c1.isSame(c2) << endl;

	system("pause");
	return 0;
}