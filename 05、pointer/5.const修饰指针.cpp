#include<iostream>
using namespace std;



 //   看const右侧紧跟着的是指针还是常量，是指针就是常量指针，是常量就是指针常量
int main() {	
	int a = 10;
	int b = 20;

 
 //1、const修饰指针    常量指针
	const int* p = &a;  //指针指向的值不可以改，但指针的指向可以改
	//*p = 20;  //错误，指针指向的值不可以改
	p = &b;     //正确，指针的指向可以改

	//2、const修饰常量    指针常量
	int* const p2 = &a;  //指针指向的值可以改，但指针的指向不可以改
	//p2 = &b;  //错误，指针的指向不可以改
	*p2 = 50;   //正确，指针指向的值可以改

	//3、const修饰指针和常量  //指针的指向和指针指向的值都不可以改
	const int* const p3 = &a;
	//*p3 = 100;  //错误，指针指向的值不可以改
	//p3 = &b;    //错误，指针的指向也不可以改

	system("pause");
	return 0;
}
