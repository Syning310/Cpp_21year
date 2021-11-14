#include<iostream>
using namespace std;

  // 1、先创建数组
  // 2、创建函数，实现冒泡排序
  // 3、打印排序后的数组

//冒泡排序函数
void bubbleSort(int * arr, int len)  //参数1是数组的首地址，参数2是数组的长度
{
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			//如果j > j+1的值  那么交换数字
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//打印数组
void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << "  ";
	}cout << endl;
}


int main() {
    int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };  //创建数组

	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, len);

	printArray(arr, len);

	system("pause");
	return 0;
}





//  //冒泡排序
//int main() {
//
//	
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << "  ";
//	}cout << endl;
//
//	//排序轮数 = 元素个数 - 1
//	for (int q = 0; q < 10; q++) {
//		//每轮内排序次数 = 元素个数 - 当前排序轮数 - 1
//		for (int w = 0; w < 10 - q - 1; w++) {
//			if (arr[w] > arr[w + 1]) {
//				int temp = arr[w];
//				arr[w] = arr[w + 1];
//				arr[w + 1] = temp;
//			}
//		}
//
//	}
//  
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << "  ";
//	}cout << endl;
//
//	system("pause");
//	return 0;
//}