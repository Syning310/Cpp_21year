#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	//1���ַ��ͱ���������ʽ
	char qq = 'a';
		cout <<qq << endl;
	//2���ַ��ͱ�����ռ�ڴ��С
		char ww = '@';
		cout << "�ַ����ڴ���ռ���ڴ棺 " << sizeof(ww) << endl;
	//3���ַ��ͱ�����ӦASCII����ֵ
		cout << (int)ww << endl;
	system("pause");
	return 0;
}

int main()
{

	//char ch[] = "abcd";����C���Է���ַ���
	//string qq = "qwer";����C++����ַ���
	string ww = "haha haha";
	cout << ww << endl;
	system("pause");
	return 0;
}