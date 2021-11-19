#include<iostream>
using namespace std;
//书写一个类，默认情况下，C++编译器至少给一个类添加3个函数
//1、默认构造函数（无参，函数体为空）
//2、默认析构函数（无参，函数体为空）
//3、默认拷贝构造函数，对属性进行赋值拷贝（值拷贝）

//构造函数调用规则为：
//如果用户定义有参构造函数，C++不会再提供无参构造函数，但是会提供拷贝构造函数
//如果用户定义拷贝构造函数，C++就不会再提供其他构造函数

class person {
public:
	/*person() {
		cout << "person的默认构造函数调用" << endl;
	}*/
	person(int age) {
		cout << "person的有参构造函数调用" << endl;
		m_Age = age;
	}
	/*person(const person& p) {
		cout << "person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}*/

	~person() {
		cout << "person的析构函数调用" << endl;
	}

	int m_Age;
};

//void test01() {
//	person p;
//	p.m_Age = 21;
//
//	person p2(p);  //注释掉创建的拷贝构造函数p2的年龄依然是21；
//                   //因为编译器会提供一个默认拷贝构造函数，进行值传递对传入的类进行所有属性的拷贝
//	cout << "p2的年龄为：  " << p2.m_Age << endl;
//}

void test02() {
	person p(2400);
	person p2(p);  //如果我们定义有参构造函数，C++不会再提供无参构造函数，但是依然会提供拷贝构造函数
	cout << "p2的年龄为：  " << p2.m_Age << endl;
}
//如果我们定义拷贝构造函数，C++就不会再提供其他构造函数

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}