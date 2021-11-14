#include<iostream>
using namespace std;


  //p代表的是指向的地址，*p代表的是解引用，也就是指针指向的值
  //地址传递
void swap(int* p1, int* p2) {

	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}

int main() {

	int a = 10;
	int b = 50;
	               //值传递    无论形参如何改变都无法改变实参
	swap(&a, &b);  //地址传递  如果是地址传递可以修饰，改变实参

	cout << "a=  " << a << endl;
	cout << "b=  " << b << endl;
	
	system("pause");
	return 0;
}