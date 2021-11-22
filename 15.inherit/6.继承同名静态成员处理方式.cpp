#include<iostream>
using namespace std;

//静态成员变量特点：所有对象都共享同一份数据；编译阶段就分配内存；类内声明内外初始化
//静态成员函数特点：只能访问静态成员变量，不能访问非静态成员变量；所有的对象都共享同一份函数实例

class Base {
public:
	static void func() {
		cout << "父类中的静态成员函数func的调用" << endl;
	}

    static int m_A;
};
int Base::m_A = 100;
class son : public Base {
public:
	static void func() {
	    cout << "子类中的静态成员函数func的调用" << endl;
	}

    static int m_A;
};
int son::m_A = 50;

//void test01() {
//	//1、通过对象访问
//	son s;
//	cout << "子类中的静态成员变量：  " << s.m_A << endl;
//	cout << "父类中的静态成员变量：  " << s.Base::m_A << endl;
//	//2、通过类名访问
//	cout << "通过子类名访问子类下的静态成员变量：  " << son::m_A << endl;  //第一个::表示通过类名方式访问
//	cout << "通过子类名访问父类下的静态成员变量：  " << son::Base::m_A << endl;  //第二个::表示访问父类作用域下
//}
void test02() {
	//1、通过对象的方式
	son p;
	p.func();
	p.Base::func();
	//2、通过类名的方式
	son::func();
	son::Base::func();
	//如果子类中出现了和父类同名的成员函数，子类的同名成员函数会隐藏父类中所有的同名成员函数（所有同名重载的函数都会被隐藏）
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}