#include <iostream>
using namespace std;

//1、不要返回局部变量  因为局部变量保存在四区内存中的栈区
int& test01() {
	int a = 10;  //局部变量存放在内存四区中的栈区，只会被编译器保存一次
	return a;
}

int& test02() {
	static int a = 20;//加上static就变成静态变量，存放在全局区，全局区里的数据在程序结束后系统释放
	return a;  //返回的是a的引用
}

//2、函数的调用可以作为左值
int main() {
	//int& ret = test01();
	//cout << "ret= " << ret << endl;//第一次结果正确，是因为编译器做了保留
	//cout << "ret= " << ret << endl;//第二次结果错误，是因为栈区中的数据已被释放

	//左值
	int& ret1 = test02();  //相当于int& ret1 = a;
	cout << "ret1= " << ret1 << endl;
	cout << "ret1= " << ret1 << endl;

	test02() = 1000;  //a = 1000;
	//如果函数的返回值是引用，这个函数调用可以作为左值 
    cout << "ret1= " << ret1 << endl;  //ret1 是a的别名
	cout << "ret1= " << ret1 << endl;


	system("pause");
	return 0;
}