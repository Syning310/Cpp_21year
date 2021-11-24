#include<iostream>
using namespace std;

//总结：既然提供了函数模板，最好就不要提供普通函数，否则容易出现二义性

//1、如果函数模板和普通函数都可以调用，优先调用普通函数
// 2、可以通过空模板参数列表 强制调用 函数模板
// 3、函数模板可以发生函数重载
// 4、如果函数模板可以产生更好的匹配，优先调用函数模板

void myPrint(int a, int b) {
	cout << "普通函数的调用" << endl;
}
template<typename T>
void myPrint(T a, T b) {
	cout << "1、函数模板的调用" << endl;
}
template<typename T>
void myPrint(T a, T b,T c) {
	cout << "2、函数模板的调用" << endl;
}

void test01() {
	int a = 10;
	int b = 20;
	//myPrint(a, b);  //1、如果函数模板和普通函数都可以调用，优先调用普通函数；
	//myPrint<>(a, b);  // 2、可以通过空模板参数列表 强制调用 函数模板;模板参数列表就是：< >
	//myPrint(a, b, 100);  // 3、函数模板可以发生函数重载
	
	
	// 4、如果函数模板可以产生更好的匹配，优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2);  //相比于普通函数char隐式转换成int，函数模板的推导更快，所以调用的是函数模板

}

int main() {
	test01();

	system("pause");
	return 0;
}