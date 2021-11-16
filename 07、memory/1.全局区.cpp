#include<iostream>
using namespace std;

//存储在全局区中的数据类型有：1、全局变量，2、静态变量，3、字符串常量，4、const修饰的全局变量（全局常量）
//1、局部变量，2、const修饰的局部变量（局部常量），不存储于全局区

//C++在程序运行前分为全局变量和代码区
//代码区的特点是共享和只读
//全局区中存放全局变量、静态变量、常量（不包括局部常量）

int c = 10;  //全局变量    不在main函数中的变量就是全局变量
int d = 10;

const int c_g_a = 10;  //const 修饰的全局变量  变量c_g_a就变成了全局常量
const int c_g_b = 10;


int main() {

	int a = 10;  //普通局部变量    在main函数中的变量就是局部变量
	int b = 10;
	cout << "局部变量a的地址为：\t\t\t" << (int)&a << endl;
	cout << "局部变量b的地址为：\t\t\t" << (int)&b << endl;

	cout << "全局变量c的地址为：\t\t\t" << (int)&c << endl;
	cout << "全局变量d的地址为：\t\t\t" << (int)&d << endl;

	//静态变量  在普通变量前加static，属于静态变量
	static int g_a = 10;
	static int g_b = 10;
	cout << "静态变量g_a的地址为：\t\t\t" << (int)&g_a << endl;
	cout << "静态变量g_b的地址为：\t\t\t" << (int)&g_b << endl;

	//常量  分为两种  1、字符串常量  2、const修饰的变量
	cout << "字符串常量的地址为：\t\t\t" << (int)&"hello world" << endl;  //"hello world"  字符串常量

	//const修饰的变量  也分为两种：1、const修饰的全局变量，2、const修饰的局部变量
	const int c_l_a = 10;  //const修饰的局部变量  变量c_l_a就变成局部常量
	cout << "const修饰的全局变量c_g_a的地址为：\t" << (int)&c_g_a << endl;
    cout << "const修饰的全局变量c_g_b的地址为：\t" << (int)&c_g_b << endl;
	cout << "const修饰的局部变量c_l_a的地址为：\t" << (int)&c_l_a << endl;

	system("pause");
	return 0;
}