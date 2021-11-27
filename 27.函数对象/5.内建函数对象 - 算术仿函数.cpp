#include<iostream>
using namespace std;
#include<functional>  //内建函数对象头文件

/*
  仿函数原型：
    template<typename T> T plus<T>                  //加法仿函数
	template<typename T> T minus<T>                 //减法仿函数
	template<typename T> T multiplies<T>            //乘法仿函数
	template<typename T> T divides<T>               //除法仿函数
	template<typename T> T modulus<T>               //取模仿函数
	template<typename T> T negate<T>                //取反仿函数

	实现四则运算
	其中negate是一元运算（一元谓词），其他都是二元运算 
*/

void test01() {
	//template<typename T> T negate<T>                //取反仿函数
	negate<int> n;
	cout << n(50) << endl;
	//negate是一个STL提供的类；类中写了一个重载()的取反仿函数

	//template<typename T> T plus<T>                  //加法仿函数
	plus<int> p;
	cout << p(10, 20) << endl;

}
int main() {
	test01();
	int a = 10;
	double b = 3.14;


	system("pause");
	return 0;
}