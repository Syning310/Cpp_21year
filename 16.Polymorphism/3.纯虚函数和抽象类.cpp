#include<iostream>
using namespace std;

//纯虚函数语法：
//virtual 返回值类型 函数名 ( 参数列表 ) = 0;
//当类中有了纯虚函数，这个类也称为抽象类；抽象类的特点：
//无法实例化对象；子类必须重写抽象类中的纯虚函数，否则也属于抽象类

class Base {  //抽象类；无法实例化对象，就是无法创建对象
public:
	virtual void func() = 0;  //只要有一个纯虚函数，这个类就称为抽象类；特点：无法实例化对象

};
class Son : public Base {
public:

};
class Son1 : public Base {
public:
	virtual void func() {
		cout << "Son1的func函数调用" << endl;
	}
};
void test01() {
	//Base b;    //抽象类无法实例化对象
	//new Base;  //抽象类无法实例化对象

	//Son s;     //子类里没有重写父类中的虚函数，所以子类也继承抽象类
	Son1 s1;     //子类里必须重写父类中的虚函数，才可以实例化对象
	Base* base = new Son1;
	base->func();  //意思相同
	s1.func();
}

int main() {
	test01();

	system("pause");
	return 0;
}