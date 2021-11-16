#include<iostream>
using namespace std;

int main() {   
	int a = 10;
    //1、引用必须要初始化：
	//int& q;  //错误语句，引用必须要初始化
	int& b = a;

	//2、引用一旦初始化就不可以更改了：
	int c = 20;

	b = c;  //这是赋值操作，不是更改引用



	system("pause");
	return 0;
}