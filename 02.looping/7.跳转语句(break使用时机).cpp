#include <iostream>
using namespace std;

//break 语句使用时机  主要作用跳出选择结构，或者循环结构

  
//1、出现在switch语句中
int main() {
	cout << "请选择副本难度"<< endl;
	cout << "1、普通" << endl;
	cout << "2、一般" << endl;
	cout << "3、困难" << endl;

	int select = 0;  //创建选择结果的变量
	cin >> select;   //等待用户输入

	switch (select)
	{
	case 1:
		cout << "你选择的是普通难度" << endl; 
		break;  //退出switch语句
	case 2:
		cout << "你选择的是一般难度" << endl; 
		break;
	case 3:
		cout << "你选择的是困难难度" << endl; 
		break;

	default:
		break;
	}
	system("pause");
	return 0;
}


  //2、出现在循环语句中
int main() {

	for (int a = 0; a < 10; a++) {
		//如果i等于6，退出循环，不在执行程序
		if (a == 6) {
			break;
		}

		cout << a << endl;
	}

	system("pause");
	return 0;
}




  //3、出现在嵌套循环语句中
int main() {

	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}