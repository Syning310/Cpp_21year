#include<iostream>
using namespace std;

/*
  char& operator[](int n);      //ͨ��[]��ʽȡ�ַ�
  char& at(int n);              //ͨ��at������ȡ�ַ�
*/

void test01() {
	string str1 = "differ";
	cout << "str1 = " << str1 << endl;
	cout << "str1�ĳ���Ϊ��  " << str1.size() << endl;      //str1.size()  �����ַ�������

	//1��char& operator[](int n);      //ͨ��[]��ʽȡ�ַ�
	for (int i = 0; i < str1.size(); i++) {
		cout << str1[i] << "  ";
	}cout << endl;

	//2��char& at(int n);              //ͨ��at������ȡ�ַ�
	for (int i = 0; i < str1.size(); i++) {
		cout << str1.at(i) << "\t";
	}cout << endl;

	//�޸ĵ����ַ�
	str1[0] = 'b';
	cout << str1 << endl;

	str1.at(0) = 'd';
	cout << str1 << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}