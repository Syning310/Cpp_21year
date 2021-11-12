#include <iostream>
using namespace std;



  //利用嵌套循环语句打印*图
int main() {
	//外循环执行一次，内循环执行一周
	//外循环
	int b = 0;
	while (b < 10) {
		//打印一行*图   //内循环
		for (int a = 0; a < 10; a++) {
			cout << "* ";

		}
		cout << endl;
		b++;
	}
	system("pause");
	return 0;
}



  //利用嵌套循环，打印出九九乘法表
  //列数 * 行数 = 计算结果
  //列数 <= 当前行数
int main() {

	for (int i = 1; i <= 9; i++) {

		for (int j = 1; j <= i; j++) {
			cout << j << "*" << i << "=" << j * i << "	";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}