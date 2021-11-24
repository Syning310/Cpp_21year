#include<iostream>
using namespace std;

//总结：使用模板时必须确定出通用数据类型T，并且能够推导出一致的数据类型

//1、自动类型推导，必须推导出一致的数据类型T才可以使用
//2、模板必须要确定出T的数据类型，才可以使用

template<typename T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
void test01() {
	int a = 10;
	int b = 20;
	double c = 3.14;
//1、自动类型推导，必须推导出一致的数据类型T才可以使用
	mySwap(a, b);  //正确！传入两个整形，编译器可以推导出整形类型
	//mySwap(a, c);  //错误！传入两个不同的类型，编译器推导不出一致的数据类型，所以无法运行
}


//2、模板必须要确定出T的数据类型，才可以使用
template<class T>
void func() {
	cout << "func  调用" << endl;
}
void test02() {
	//func();  //错误必须要确定出T的数据类型，才可以使用

	func<int >();  //必须告诉编译器一个数据类型
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}