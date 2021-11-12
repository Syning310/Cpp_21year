#include<iostream>
using namespace std;


int main() {
	//continue 语句 

	for (int a = 0; a <= 100; a++) {
		//奇数打印，偶数不打印
		if (a % 2 == 0 || 0) {
			continue;  //执行到此不再往下，直接进行下一次循环
			           //break是直接退出循环，而continue不会使整个循环终止
		}
		 cout << a << endl;
	}


	system("pause");
	return 0;
}




  //  go to 语句
int main() {

	cout << "红尘绝世楼" << endl;
	goto QQQ;
	cout << "赤霞飞仙谷" << endl;

	cout << "海石星天外" << endl;
	QQQ:
	cout << "神山惊云阁" << endl;

	system("pause");
	return 0;
}