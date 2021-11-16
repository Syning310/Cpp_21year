#include<iostream>
using namespace std;

//堆区：  由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
//在C++中主要利用new在堆区开辟内存


int* func() {
    //指针  本质也是局部变量，放在栈上，指针保存的数据是放在堆区
	int* p = new int(10);
	cout << p << endl;  //指向堆区的地址
	return p;
}

int main() {
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;


	system("pause");
	return 0;
}