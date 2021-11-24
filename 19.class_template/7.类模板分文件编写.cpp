#include<iostream>
using namespace std;

//#include"index.cpp"
//包含源文件的原因：因为类模板中的成员函数创建时机是，在函数被调用时才创建；
//如果包含的是头文件"index.h"，那么编译器就看不到写在"index.cpp"中的函数实现

//通常是使用第二种解决方案：将声明和实现写到同一个文件中，并更改后缀名为.hpp;   .hpp是约定的名称，并不是强制
#include"index.hpp"  //主流的方法

//问题：类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
// 解决方案：1、直接包含.cpp源文件
//           2、将声明和实现写到同一个文件中，并更改后缀名为.hpp， .hpp是约定的名称，并不是强制


void test01() {
	index<string, int>i("无月", 150000);
	i.showIndex();
}

int main() {
	test01();

	system("pause");
	return 0;
}