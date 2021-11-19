#include <iostream>
using namespace std;
//静态成员就是在成员变量和成员函数前加上static，称为静态成员  静态成员分为两种
//1、静态成员变量  1.1所有对象共享同一份数据；1.2在编译阶段分配内存；1.3类内声明，类外初始化
// 1.1如果a访问结果是100，b重新赋值为200，那么a和b访问结果都会变为200
//2、静态成员函数  1.1所有对象共享同一个函数；1.2静态成员函数只能访问静态成员变量

class person {
public:

	static int m_A;  //1.1、所有对象都共享同一份数据；1.2、在编译阶段分配内存；
   //(类内声明）     //1.3、类内声明，类外初始化

	//静态成员变量也是有访问权限的
private:
	static int B;  //类内声明
};

int person::m_A = 100;  //（类外初始化）
int person::B = 500;   //类外初始化


void test01() {
	person p;
	cout << p.m_A << endl;

	person p2;
	p.m_A = 800;
	cout << p.m_A << endl;  //访问同一个对象，结果不同了，因为所有数据共享同一份数据，p2和p访问的是同一个对象
}
void test02() {
	//静态成员变量，不属于某个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式
	
	//1、通过对象进行访问  如：
	person p;
	cout << p.m_A << endl;
	//2、通过类名进行访问    类名::静态成员变量
	cout << person::m_A << endl;

	//cout << person::B << endl;  //错误，类外访问不到私有的静态成员变量
}

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}