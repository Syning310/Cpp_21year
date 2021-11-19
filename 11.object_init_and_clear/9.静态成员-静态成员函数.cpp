#include<iostream>
using namespace std;

//静态成员函数特点：1、所有对象都共享同一个函数；2、静态成员函数只能访问静态成员变量

class person {
public:
	static void func()  //静态成员函数
	{
		A = 500;  //静态成员函数可以访问 静态成员变量
		//B = 200;  //静态成员函数不可以访问 非静态成员变量;因为无法区分到底是哪个对象的B属性
		cout << "static void func的调用 " << endl;
	}

	static int A;  //静态成员变量
	int B;
	//静态成员函数也是有访问权限的

};
int person::A = 0;  

void test01() {
	//1、通过对象访问
	person p;
	p.func();
	//2、通过类名访问         ::的意思是在某某作用域下
	person::func();
}

int main() {
	test01();


	system("pause");
	return 0;
}