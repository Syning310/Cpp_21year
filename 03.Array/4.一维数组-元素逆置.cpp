#include<iostream>;
using namespace std;


int main() {
	//实现数组中的元素逆置
	//1、创建数组
	int arr[5] = { 1 , 3 , 2 , 5 , 4 };
	cout << "数组逆置前： " << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << "  ";
	}cout<<endl;
	
	//2、实现逆置
	//2.1创建起始下标的位置
	//2.2创建结束下标的位置
	//2.3起始下标和结束下标的元素互换
	//2.4起始位置++    结束位置--
	//2.5循环执行2.1的操作，直到起始位置 >= 结束位置

	int start = 0;                               //2.1创建起始下标的位置                         
	int end = sizeof(arr) / sizeof(arr[5]) - 1;  //2.2创建结束下标的位置  
	
	while (start <= end) {
		int temp = arr[start];         //创建一个变量，暂存首元素(start)
		arr[start] = arr[end];         //最后一个元素与首元素互换
		arr[end] = temp;               //把原本的首元素存到最后一个元素的空间
		  //2.4起始位置++    结束位置--
		start++;
		end--;
	}
//3、打印逆置后的数组
	cout << "数组逆置后：  " << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << "  ";
	}cout << endl;

	system("pause");
	return 0;
}