#include<iostream>
using namespace std;

//总结：类模板中的成员函数并不是一开始就创建的，在调用时才去创建

//普通类中的成员函数一开始就创建；类模板中的成员函数在调用时才创建

class forfinger1 {
public:
	void showforfinger1() {
		cout << "forfinger 1  " << endl;
	}
};
class Person2 {
public:
	void showforfinger2() {
		cout << "forfinger 2 " << endl;
	}
};
template<typename T>
class Thumb {
public:
	T obj;

    //类模板中的成员函数
	void func1() {
		obj.showforfinger1();  //编译其无法确认是哪个类的数据类型，之所以没报错，是因为这两个成员函数只要没调用就还没创建
	}
	void func2() {
		obj.showforfinger2();
	}
};

void test01() {
	Thumb<forfinger1>m;
	m.func1();

}

int main() {
	test01();

	system("pause");
	return 0;
}