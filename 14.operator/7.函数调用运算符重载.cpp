#include <iostream>
using namespace std;

//函数调用运算符()也可以重载
//由于重载后使用的方式非常像函数的调用，因此称为仿函数
//仿函数没有固定的写法，非常灵活

//打印输出类
class MyPrint {
public:
	//重载的函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void test02(string test) {
	cout << test << endl;
}
void test01() {
	MyPrint m1;
		
	m1("hello world");  //调用的是重载运算符；由于使用起来非常像函数调用，因此称为仿函数
	test02("hello world");  //调用的是全局函数
}

//仿函数非常灵活，没有固定的写法
//加法类
class MyAdd {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};
void test03() {
	MyAdd add1;
	int sum = add1(100, 100);  //仿函数没有固定的写法，非常灵活
	cout << "sum = " << sum << endl;

	//匿名函数对象:通过一个类名加上一个小括号创造出匿名对象；特点：当前行执行完，立即被释放
	cout << MyAdd()(100, 500) << endl;  //可以认为它没有名
	//因为它重载了小括号，所以是仿函数
}
int main() {

	//test01();
	test03();

	system("pause");
	return 0;
}