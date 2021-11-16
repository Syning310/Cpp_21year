#include<iostream>
using namespace std;

//引用的语法：
//  数据类型  &别名 = 原名

int main() {

	int a = 10;
	int& b = a;   //创建引用
	
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	b = 50;
    cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	system("pause");
	return 0;
}