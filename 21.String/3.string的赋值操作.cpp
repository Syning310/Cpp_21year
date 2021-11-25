#include<iostream>
using namespace std;

/*
  1��string operator=(const char* s);              char*�����ַ��� ��ֵ����ǰ���ַ���
  2��string& operator=(const string &s);           ���ַ���s������ǰ���ַ���
  3��string& operator=(char c);                    �ַ���ֵ����ǰ���ַ���
  4��string& assign(const char* s);                ���ַ���s������ǰ���ַ���
  5��string& assign(const char* s, int n);         ���ַ���s��ǰn���ַ�������ǰ���ַ���
  6��string& assign(const string& s);              ���ַ���s������ǰ�ַ���
  7��string& assign(int n, char c);                ��n���ַ�c������ǰ�ַ���
*/

//string�ĸ�ֵ��ʽ�ܶ࣬operator= ���ַ�ʽ�Ƚ�ʵ��

void test01() {
	//1��string operator=(const char* s);              char*�����ַ��� ��ֵ����ǰ���ַ���
	string str1;
	str1 = "help line differ turn cause";
	cout << "str1 = " << str1 << endl;

	//2��string& operator=(const string &s);           ���ַ���s������ǰ���ַ���
	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

	//3��string& operator=(char c);                    �ַ���ֵ����ǰ���ַ���
	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;

	//4��string& assign(const char* s);                ���ַ���s������ǰ���ַ���
	string str4;
	str4.assign("I see");
	cout << "str4 = " << str4 << endl;

	//5��string& assign(const char* s, int n);         ���ַ���s��ǰn���ַ�������ǰ���ַ���
	string str5;
	str5.assign("no way", 3);
	cout << "str5 = " << str5 << endl;

	//6��string & assign(const string& s);              ���ַ���s������ǰ�ַ���
	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;

	//7��string& assign(int n, char c);                ��n���ַ�c������ǰ�ַ���
	string str7;
	str7.assign(10, 'w');
	cout << "str7 = " << str7 << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}