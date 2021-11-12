#include<iostream>;
using namespace std;



int main() {

	//数组名的用途
	//1、可以通过数组名来统计整个数组占用内存的大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  //一个int类型占4个字节
	cout << "整个数组占用内存空间为： " << sizeof(arr) << endl;  //10个int类型就是占用40个字节
	cout << "每个元素占用内存空间为： " << sizeof(arr[0]) << endl;
	cout << "数组中元素个数为： " << sizeof(arr) / sizeof(arr[0]) << endl;

	//2、可以通过数组名查看数组首地址
	cout << "数组的首地址为：  " << arr << endl;       //得到的地址名是十六进制
	cout << "数组的首地址为：  " << int(arr) << endl;  //得到的地址名是十进制
	cout << "数组中第一个元素的地址为：  " << &arr[0] << endl;//获取数组的单一元素的地址前需要加取地址符号 &
	//整个数组的首地址与第一个元素的地址是重合的
	cout << "数组中第二个元素的地址为：  " << &arr[1] << endl;


	//arr = 100; 错误，数组名是一个常量，不可以进行赋值操作

	system("pause");
	return 0;
}