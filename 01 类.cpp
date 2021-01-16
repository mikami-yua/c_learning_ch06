// c_learning_ch06.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

const double PI=3.14;
/*
设计一个圆类求圆的周长：2*pi*r

*/

class Circle {
    //属性
public:
    int m_r;
    //行为
    double calculate() {
        return 2 * PI * m_r;
    }
};

int fun1()
{   
    //创建对象
    Circle c1;
    c1.m_r = 10;
    cout << c1.calculate() << endl;

    
    system("pause");
    return 0;
}


