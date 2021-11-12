#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//sizeof
int main()
{
	short a = 1;
	int ab = 10;
	long long aB = 20;
	
	cout << "short类型所占内存空间为：" << sizeof(a) << endl;
	cout << "int类型所占内存空间为：" << sizeof(ab) << endl;
	cout << "long long类型所占内存空间为：" << sizeof(aB) << endl;

	system("pause");
	return 0;
}