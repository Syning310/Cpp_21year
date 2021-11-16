#include<iostream>
using namespace std;

//1、new的基本语法
int* func() {
	int* p = new int(10);  //new返回的是该数据类型的指针，所以要用指针接收它
	return p;
}
void test01() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据  由程序员管理开辟，程序员管理释放
	//如果想释放堆区的数据，用关键字  delete
	delete p;
	//cout << *p << endl;  //错误指针p已经被释放，无法再访问
}

//2、在堆区开辟数组
void test02() {
	//创建10个整形数据的数组，在堆区
	int* arr = new int[10];  //10代表数组中有10个元素，返回的是首地址，也要用指针接收
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;  //给元素赋值  100 ~ 109
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	//释放堆区的数组
	delete[] arr;  //释放数组的时候要加[]才可以
}


int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}