#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//sizeof
int main()
{
	short a = 1;
	int ab = 10;
	long long aB = 20;
	
	cout << "short������ռ�ڴ�ռ�Ϊ��" << sizeof(a) << endl;
	cout << "int������ռ�ڴ�ռ�Ϊ��" << sizeof(ab) << endl;
	cout << "long long������ռ�ڴ�ռ�Ϊ��" << sizeof(aB) << endl;

	system("pause");
	return 0;
}