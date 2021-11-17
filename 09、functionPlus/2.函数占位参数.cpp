#include <iostream>
using namespace std;

////语法
////返回值类型 函数名（数据类型）{}
void helloworld(int a, int) {  //占位参数 还可以有默认参数
	cout << "hello world" << endl;
}

int main() {
	helloworld(10,20);

	system("pause");
	return 0;
}