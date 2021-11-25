#include<iostream>
using namespace std;

//插入和删除的起始下标都是从0开始（begin）

/*
 string& insert(int pos, const char* s);                     //插入字符串
 string& insert(int pos, const string& str);                 //插入字符串
 string& insert(int pos, int n, char c);                     //在指定位置插入n个字符c
 string& erase(int pos, int n = npos);                       //删除从Pos开始的n个字符
*/

void test01() {
	string str = "hold";

	//插入
	//1、string& insert(int pos, const char* s);                     //插入字符串
	str.insert(4, " on");  //从第几个下标开始，插入字符串
	cout << str << endl;

	//删除
	//string& erase(int pos, int n = npos);                       //删除从Pos开始的n个字符
	str.erase(4, 1);    //从第几个下标开始，删除几个
	cout << str << endl;

}

int main() {
    test01();

	system("pause");
	return 0;
}