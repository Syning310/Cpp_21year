#include<iostream>
using namespace std;



//指针就是一个地址


int main() {
	//1、定义指针
	int a = 10;
	//1.1  指针定义的语法： 数据类型 * 指针变量名；
	int* p;   //数据类型 * 指针变量名；  
	
    //1.2  让指针记录变量a的地址
	p = &a;
	cout << "a的地址为：  " << int(&a) << endl;
	cout << "指针p为：    " << int(p) << endl;

	//2、使用指针
	//可以通过解引用的方式来找到指针指向的内存
	//指针前加 * 代表解引用，意思是找到指针指向的内存中的数据
    *p;  //10
	cout << *p << endl;

	*p = 1500;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;


	system("pause");
	return 0;
}