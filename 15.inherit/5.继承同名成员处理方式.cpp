#include<iostream>
using namespace std;

//如果想通过子类对象访问子类中的同名成员  直接访问即可
//如果想访问父类中继承下来的同名成员      需要加父类的作用域
//如果没有同名，直接.访问即可

class Base {
public:
	Base() {
		m_A = 10;
	}
	int func() {
		return m_A += 10;
	}
	void func2() {
		cout << "基类中的func2()函数调用" << endl;
	}
	void func2(int a) {
		cout << "基类中的func2(int a)函数调用" << endl;
	}
	int m_A;
};

class son : public Base {
public:
	son() {
		m_A = 500;
	}
	int func() {
		return m_A += 10;
	}
	void func2() {
		cout << "派生类中的func2()函数调用" << endl;
	}
	int m_A;
};
void test01() {
	son s;
	s.m_A;
	s.Base::m_A;  //在m_A前加基类作用域即可访问继承下来的同名对象
	cout << "派生类中的m_A = " << s.m_A << endl;
	cout << "基类中的m_A = " << s.Base::m_A << endl;
}
//同名成员函数    同名函数和同名成员相同，加上基类作用域提示即可；
void test02() {
	son s1;
	int ret = s1.func();
	cout << ret << endl;
	int ret2 = s1.Base::func();
	cout << ret2 << endl;
	
}
void test03() {
	son s;
	s.func2();
	s.Base::func2();

	s.Base::func2(1);  //如果想访问父类中被隐藏的同名成员函数，就需要加作用域才能访问
	//如果子类中出现了和父类同名的成员函数，子类的同名成员函数会隐藏父类中所有的同名成员函数（所有同名重载的函数都会被隐藏）
}

int main() {
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}