#include<iostream>;
using namespace std;

int main() {
	
	//1、可以查看占用内存空间大小
	int arr[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};
	cout << "二维数组占用的内存空间为： " << sizeof(arr) << endl;
	cout << "二维数组第一行占用的内存为： " << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用的内存为： " << sizeof(arr[0][0]) << endl;

	//二维数组占用内存空间 / 第一行占用的内存空间 = 这组二维数组的行数
	cout << "二维数组行数为： " << sizeof(arr) / sizeof(arr[0]) << endl;
	//二维数组单行占用的内存 / 单个元素占用的内存 = 这组二维数组的列数
	cout << "二维数组的列数为： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2、可以查看二维数组的首地址
	cout << "二维数组的首地址为： " << arr << endl;  //十六进制，加int打印十进制
	cout << "二维数组第一行首地址为： " << arr[0] << endl;
	cout << "二维数组第二行首地址为： " << arr[1] << endl;

	cout << "二维数组第一个元素首地址为： " << (int)&arr[0][0] << endl;
	cout << "二维数组第二个元素首地址为： " << (int)&arr[0][1] << endl;

	system("pause");
	return 0;
}