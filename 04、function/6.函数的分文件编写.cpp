#include<iostream>;
using namespace std;
#include "swap.h"


  //实现两个数字进行交换的函数
//函数的声明
void swap(int a, int b);
//函数的定义
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
	//1、创建.h后缀名的头文件
 //   2、创建.cpp后缀名的源文件
 //   3、在头文件中写函数的声明
 //   4、在源文件中写函数的定义


int main() {

	int q = 10;
	int w = 20;
	swap(q, w);



	system("pause");
	return 0;
}