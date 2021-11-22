#include<iostream>
using namespace std;

//运算符重载概念：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
//对于内置数据类型，编译器知道如何进行运算；如int double long
//加号运算符重载有两种：1、通过成员函数重载+号；2、通过全局函数重载+号
//语法:  返回值类型 operator+ () {}

//总结：对于内置的数据类型的表达式的运算符是不可能改变的    通俗的意思是：对于内置的数据类型是改变不了的
//不要滥用运算符重载



class America {
public:
	//1、成员函数重载+号
	//America operator+(America& a) {  //成员函数的本质是：America a3 = a1.operator+(a2);
	//	America temp;
	//	temp.m_A = this->m_A + a.m_A;  //this指向的是a1，因为是a1调用这个函数
	//	temp.m_B = this->m_B + a.m_B;
	//	return temp;	
	//}

	int m_A;
	int m_B;
};
//全局函数重载+号
America operator+(America& p1, America& p2) {
	America temp;
	temp.m_A = p1.m_A + p2.m_B;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

void test01() {
	America a1;
	a1.m_A = 10;
	a1.m_B = 10;
	America a2;
	a2.m_A = 10;
	a2.m_B = 10;
	//成员函数重载的本质是：
	//America a3 = a1.operator+(a2);  
	//全局函数重载的本质是：
	//America a3 = operator+(a1, a2);

	America a3 = a1 + a2;  //成员函数和全局函数的简化版本，本质在上面
	
	cout << "a3.m_A = " << a3.m_A << endl;
	cout << "a3.m_b = " << a3.m_B << endl;

    //America a4 = a1 + 10;  //America + int  错误
}


int main() {
	test01();

	system("pause");
	return 0;
}