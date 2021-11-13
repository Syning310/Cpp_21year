#include<iostream>;
using namespace std;


  //函数的声明可以多次，但定义只能有一次

  //比较函数，实现两个整型数字进行比较，返回较大的值

  //提前告诉编辑器函数的存在，可以利用函数声明
int max(int a, int b);  //函数的声明 
int max(int a, int b);
int max(int a, int b);  //声明可以多次


int main() {

	int q = 150;
	int w = 300;
	cout << max(q, w) << endl;


	system("pause");
	return 0;
}

//定义  —— 定义只能有一次
int max(int a, int b) {

	return a > b ? a : b;  //如果a大于b，那么返回a，否则返回b
}



