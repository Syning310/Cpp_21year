#include <iostream>
using namespace std;

int main() {
	//1、前置递增
	int a = 10;
	++a;
	cout << "a = " << a << endl;

	//2、后置递增
	int b = 10;
	b++;
	cout << "b = " << b << endl;

	//3、前置和后置的区别
	//前置递增  先让变量+1，再进行表达式运算
	int c = 10;
	int d = ++c * 10;
	cout << "c=" << c << endl;
	cout << "d = " << d << endl;

	//后置递增  先进行表达式运算，在让变量+1
	int c1 = 10;
	int d1 = c1++ * 10;
	cout << "c1 = " << c << endl;
	cout << "d1 = " << d1 << endl;

	//前置递减
	int a = 11;
	--a;
	cout << "a = " << a << endl;

	//后置递减
	int c = 11;
	c--;
	cout << "c = " << c << endl;

	//前置递减和后置递减的区别
	int q = 11;
	//int d = --q * 10;
	int e = q-- * 10;
	//cout << "d = " << d << endl;
	
	cout << "q = " << q << endl;
	cout << "e = " << e << endl;

	system("pause");
	return 0;
}