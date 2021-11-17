#include <iostream>
using namespace std;

//注意事项：
//1、引用作为重载条件

void func(int& a) {  //如果传入的是一个变量，也就可读可写，执行这个函数
	cout << "func(int& a) 的调用" << endl;
}
void func(const int& a) {  //如果传入的是一个常量，也就只读，执行这个函数
	cout << "func(const int& a) 的调用" << endl;
}


//2、函数重载碰见默认值
void func2(int a) {  //需要传一个参数
	cout << "func2(int a) 的调用" << endl;
}
void func2(int a, int b, int c = 10) {  //需要传两个参数，如若赋值的是int b，那么编译器不知道该执行哪个函数
	cout << "func2(int a, int b) 的调用" << endl;
}
int main() {

	int a = 10;
	//func(a);  //a 是变量，可读可写
	//func(10); //10 是常量，只能读
	const int& a = 10;  //相当于系统创建了一个临时空间，int& a指向那个临时的空间；所以这个语法可行

	func2(10);  //当函数重载碰到默认参数，出现二义性，报错，尽量避免

	system("pause");
	return 0;
}