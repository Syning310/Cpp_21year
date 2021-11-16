#include <iostream>
using namespace std;

//引用的本质在C++内部实现是一个  指针常量：指针的指向不能改，指向的常量可以改

void func(int& rel) {  //发现是引用，转换为 int* const rel = &a;
	rel = 100;         //rel是引用，转换为*rel = 100;
}

int main() {
	int a = 10;

	//自动转换为 int* const ret = &a;  指针常量是指针的指向不可改，也说明引用不可更改
	int& ret = a;
	ret = 20;  //内部发现ref是引用，自动帮我们转换为:"*ret = 20"

	cout << "a= " << a << endl;
	cout << "ret= " << ret << endl;

	func(a);

	system("pause");
	return 0;
}