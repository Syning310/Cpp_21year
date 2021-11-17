#include<iostream>
using namespace std;

//作用：可以让函数名相同，提高复用率

//函数重载的满足条件         类似于多音字不同语境不同读音
//1、同一作用域下
//2、函数名称相同
//3、函数参数类型不同、个数不同、顺序不同

void func() {
	cout << "func 的调用" << endl;
}
//类型不同
void func(int) {
	cout << "func(int) 的调用" << endl;
}
void func(double) {
	cout << "func(double) 的调用" << endl;
}

//顺序不同
void func(int a, double b) {
	cout << "func(int a, double b) 的调用" << endl;
 }
void func(double a, int b) {
	cout << "func(double a, int b) 的调用" << endl;
}

int main() {
	//func(3.14);
	func(3.14,1);

	system("pause");
	return 0;
}

//注意：函数的返回值不可以作为函数重载的条件