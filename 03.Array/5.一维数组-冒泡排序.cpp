#include<iostream>;
using namespace std;


int main() {
	//利用冒泡排序实现升序序列
	int arr[] = { 5,3,7,1,0,8,9,6,2,4 };
	cout << "排序前： " << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "  ";
	}cout << endl;

	//开始冒泡排序; 排序总轮数 = 元素个数 - 1; 
	for (int i = 0; i < 10 - 1; i++) {
		//内层循环对比;    每轮对比次数 = 元素个数 - 排序轮数 - 1
		for (int j = 0; j < 10 - i - 1; ++j) {
			//如果第一个数字，比第二个数字大，那么交换两个数字
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			
		}

	}
	//排序后的结果
	cout << "排序后： " << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "  ";
	}cout << endl;


	system("pause");
	return 0;
}