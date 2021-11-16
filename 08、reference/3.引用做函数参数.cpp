#include<iostream>
using namespace std;

//交换函数
//1、值传递
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}
//2、地址传递
void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "*a= " << *a << endl;
	cout << "*b= " << *b << endl;
}

//3、引用传递     //意思是int&a = num5;   int& b = num6;
void mySwap03(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}

int main() {
    //1、值传递
	int num1 = 10;
	int num2 = 50;
	//mySwap01(num1, num2);  //形参不会影响实参
	//cout << "num1= " << num1 << endl;
	//cout << "num2= " << num2 << endl;
	int num3 = 100;
	int num4 = 680;
	
	//mySwap02(&num3, &num4);  //形参改变实参也会跟着改变  引用传递和地址传递效果是一样的
	//cout << "num3= " << num3 << endl;
	//cout << "num4= " << num4 << endl;

	int num5 = 9;
	int num6 = 1;
	mySwap03(num5, num6);  //引用本质和指针一样，形参改变实参也会跟着改变
	cout << "num5= " << num5 << endl;
	cout << "num6= " << num6 << endl;

	system("pause");
	return 0;
}