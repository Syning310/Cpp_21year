#include<iostream>;
using namespace std;



int main() {
	//五只小猪体重
	int arr[5] = { 300,350,200,400,250 };

	//2、从数组中找到最大值
	int max = 0;//创建一个最大值变量为0


	//访问数组中的每个元素，如果这个元素比我认定的最大值要大，那么更新最大值
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	//3、打印最大值
	cout << "最重的小猪体重为： " << max << endl;

	system("pause");
	return 0;
}