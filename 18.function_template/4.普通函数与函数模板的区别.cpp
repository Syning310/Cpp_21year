#include<iostream>
using namespace std;

//区别：
// 1、普通函数调用时可以发生自动类型转换（隐式类型转换）
// 2、函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
// 3、如果利用显示指定类型的方式，可以发生隐式类型转换

//普通函数
int myAdd(int a, int b) {
	return a + b;
}
//模板函数
template<typename T>
T myAdd2(T a, T b) {
	return a + b;
}

void test01() {
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd(a, c) << endl;  //隐式类型转换，传入char到普通函数中，自动转换成int类型的数值，ASCII码值表
	
	//自动类型推导    只能传入相同的数据类型
	//cout << myAdd2(a, c) << endl;   //错误

	//显示指定类型    可以指定数据类型，会发生隐式类型转换，传入char到模板函数中，隐式转换成int类型的数值，ASCII码值表
	cout << myAdd2<int>(a, c) << endl;
 

}
int main() {
	test01();

	system("pause");
	return 0;
}

