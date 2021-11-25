#include<iostream>
using namespace std;

/*
  char& operator[](int n);      //通过[]方式取字符
  char& at(int n);              //通过at方法获取字符
*/

void test01() {
	string str1 = "differ";
	cout << "str1 = " << str1 << endl;
	cout << "str1的长度为：  " << str1.size() << endl;      //str1.size()  访问字符串长度

	//1、char& operator[](int n);      //通过[]方式取字符
	for (int i = 0; i < str1.size(); i++) {
		cout << str1[i] << "  ";
	}cout << endl;

	//2、char& at(int n);              //通过at方法获取字符
	for (int i = 0; i < str1.size(); i++) {
		cout << str1.at(i) << "\t";
	}cout << endl;

	//修改单个字符
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