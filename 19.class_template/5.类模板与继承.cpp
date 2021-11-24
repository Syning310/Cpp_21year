#include<iostream>
using namespace std;

//如果父类是类模板，子类必须指定出父类中T的数据类型

//1、当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
//2、如果不指定，编译器无法给子类分配内存
//3、如果想灵活指定出父类中T的类型，子类也需变为类模板

template<typename T>
class Base {
public:
	Base() {
		cout << "T = " << typeid(T).name() << endl;
	}
	T m;
}; 
//class son : public Base  //必须要知道父类中T的数据类型，才能继承给子类，否则编译器不知道该分配多少内存空间
class son : public Base<int> {    //1、当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
public:

};

//3、如果想灵活指定出父类中T的类型，子类也需变为类模板
template<typename T1, typename T2>
class son2 : public Base<T1> {
public:
	son2() {
		cout << "T1 = " << typeid(T1).name() << endl;
		cout << "T2 = " << typeid(T2).name() << endl;
	}
	T2 obj;
};

void test01() {
	
	Base<double>b;
	son2<int, char>s2;
}


int main() {
	test01();

	system("pause");
	return 0;
}