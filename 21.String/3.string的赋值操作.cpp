#include<iostream>
using namespace std;

/*
  1、string operator=(const char* s);              char*类型字符串 赋值给当前的字符串
  2、string& operator=(const string &s);           把字符串s赋给当前的字符串
  3、string& operator=(char c);                    字符赋值给当前的字符串
  4、string& assign(const char* s);                把字符串s赋给当前的字符串
  5、string& assign(const char* s, int n);         把字符串s的前n个字符赋给当前的字符串
  6、string& assign(const string& s);              把字符串s赋给当前字符串
  7、string& assign(int n, char c);                用n个字符c赋给当前字符串
*/

//string的赋值方式很多，operator= 这种方式比较实用

void test01() {
	//1、string operator=(const char* s);              char*类型字符串 赋值给当前的字符串
	string str1;
	str1 = "help line differ turn cause";
	cout << "str1 = " << str1 << endl;

	//2、string& operator=(const string &s);           把字符串s赋给当前的字符串
	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

	//3、string& operator=(char c);                    字符赋值给当前的字符串
	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;

	//4、string& assign(const char* s);                把字符串s赋给当前的字符串
	string str4;
	str4.assign("I see");
	cout << "str4 = " << str4 << endl;

	//5、string& assign(const char* s, int n);         把字符串s的前n个字符赋给当前的字符串
	string str5;
	str5.assign("no way", 3);
	cout << "str5 = " << str5 << endl;

	//6、string & assign(const string& s);              把字符串s赋给当前字符串
	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;

	//7、string& assign(int n, char c);                用n个字符c赋给当前字符串
	string str7;
	str7.assign(10, 'w');
	cout << "str7 = " << str7 << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}