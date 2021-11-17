#include<iostream>
using namespace std;


//如果我们传入数据，那么无视初始值，如果没传入，那么使用初始值
//语法：  返回值类型 函数名（形参 = 初始值）
int func(int a, int b = 100, int c = 30) {
	cout << a + b + c << endl;
	return a + b + c;
}
//注意事项：
//1、如果某个形参赋予了初始值，那么从这个形参往后，从左到右都必须赋予初始值
//int func2(int a = 1, int b, int c, int d, int e) {
//	return a + b + c + d + e;
//}
//2、如果函数声明有默认值，函数实现就不能有默认参数
//函数声明和函数实现只能有一个默认参数
int fale(int a = 10, int b = 20);
int fale(int a = 10, int b = 20) {  //错误，重新定义了参数，函数声明和函数实现只能有一个默认参数
	return a + b;
}

int main() {
	
	cout << func(10,10) << endl;
	cout << fale() << endl;

	system("pause");
	return 0;
}