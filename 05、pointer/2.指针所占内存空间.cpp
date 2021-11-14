#include<iostream>
using namespace std;


int main() {

	int a = 20;
	
//	int* p;  //创建一个指针
//	p = &a;  //建立关系
	int* p = &a;

	//不管是什么数据类型，在32为操作系统下，指针占4个字节；在64为操作系统下，指针占8个字节
	cout << "sizeof (int *) = " << sizeof(int*) << endl;
	cout << "sizeof (int *) = " << sizeof(float*) << endl;
	cout << "sizeof (int *) = " << sizeof(double*) << endl;
	cout << "sizeof (int *) = " << sizeof(char*) << endl;




	system("pause");
	return 0;
}