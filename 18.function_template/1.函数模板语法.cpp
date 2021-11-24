#include<iostream>
using namespace std;

//template  ——  声明创建模板
// typename ——  表明其后面的符号是一种数据类型，可以用class代替
// T        ——  通用的数据类型，名称可以替换，通常为大写
//通俗来说就是把类型也给参数化，抽象出来

//交换函数
void swapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void swapDouble(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}
void test01() {
	int a = 10;
	int b = 20;
	swapInt(a, b);
	cout << "a =  " << a << endl;
	cout << "b =  " << b << endl;
	double c = 1.55;
	double d = 2.99;
	swapDouble(c, d);
	cout << "c =  " << c << endl;
	cout << "d =  " << d << endl;
}


template<typename T>    //声明一个模板，告诉编译器后面代码紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

//利用函数模板进行交换    //两种方式使用函数模板
void test02() {
	//1、自动类型推导
	int a = 100;
	int b = 500;
	mySwap(a, b);
	cout << "a =  " << a << endl;
	cout << "b =  " << b << endl;


	//2、显示指定类型
	double c = 1.99;
	double d = 9.11;
	mySwap<double>(c, d);    //直接告诉编译器，数据类型
	cout << "c =  " << c << endl;
	cout << "d =  " << d << endl;

}

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}