#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	//1、字符型变量创建方式
	char qq = 'a';
		cout <<qq << endl;
	//2、字符型变量所占内存大小
		char ww = '@';
		cout << "字符型内存所占的内存： " << sizeof(ww) << endl;
	//3、字符型变量对应ASCII编码值
		cout << (int)ww << endl;
	system("pause");
	return 0;
}

int main()
{

	//char ch[] = "abcd";——C语言风格字符串
	//string qq = "qwer";——C++风格字符串
	string ww = "haha haha";
	cout << ww << endl;
	system("pause");
	return 0;
}