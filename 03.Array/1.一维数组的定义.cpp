#include<iostream>;
using namespace std;

int main() {

	//数组
	//1、数据类型  数组名 [ 数组长度 ]
	int arr[5];  //int类型 数组名arr [ 5个元素 ]
	//给数组中的元素进行赋值
	arr[0] = 10;  //数组中的元素下标从0开始索引
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
    //访问元素
	//cout << arr[0] << endl;



	//2、数据类型 数组名[ 数组长度 ] = { 值1， 值2， ... }；
	int arr2[5] = { 10,20,30,40,50 };  //如果初始赋值时，没有填写完，会用0来填补剩余的数据
	//利用循环 输出数组中的元素
	//for (int a = 0; a < 5; a++) {
	//	cout << arr2[a] << endl;
	//}



	//3、数据类型 数组名[ ] = { 值1， 值2， ...}；
	int arr3[ ] = { 90,80,70,60,50,40,30,20,10 };
	
	for (int i = 0; i < 9; i++) {
		cout << arr3[i] << endl;
	}



	system("pause");
	return 0;
}