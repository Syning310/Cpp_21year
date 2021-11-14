#include<iostream>
using namespace std;


int main() {

	//利用指针访问数组中的元素
	int arr[] = { 11,12,13,14,15,16,17,18,19,20 };

	//cout << "第一个元素为：  " << arr[0] << endl;

	int * p = arr;  //arr 就是数组的首地址
	//cout << "利用指针访问第一个元素:  " << *p << endl;

	//利用指针访问第二个元素
	//p++;  //让指针向后偏移四个字节，int（四个字节）

	//cout << "利用指针访问第二个元素:  " << *p << endl;

	for (int i = 0; i < 10; i++) {

		cout << "第" << i << "个元素为：  " << *p << endl;
		p++;
	}





	system("pause");
	return 0;
}