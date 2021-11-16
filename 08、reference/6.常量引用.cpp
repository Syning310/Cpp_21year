#include <iostream>
using namespace std;

//使用场景：用来修饰形参，防止误操作
void printNum(const int& Num) {  //相当于  const int& Num = &a;  
								 //常量指针，指向的值不可以改，加上是引用所以指针的指向也不可以改
	//Num = 10000;  //常量指针，指针指向的值不可以改
	cout << "Num = " << Num << endl;
}
int main() {
	//int& ret = 10;//错误，引用必须引一块合法的内存空间

	//const int& ret = 10;//加上const后，编译器将代码修改  int 随机名称 = 10; const int& ret = 随机名称;
	//ret = 20;//加入const之后变为只读，不可修改

	int a = 100;
	printNum(a);


	system("pause");
	return 0;
}