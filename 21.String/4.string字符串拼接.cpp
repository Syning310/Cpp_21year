#include<iostream>
using namespace std;

/*
 1、string& operator+=(const char* str);                   //重载+=操作符
 2、string& operator+=(const char c);                      //重载+=操作符
 3、string& operator+=(const string& str);                 //重载+=操作符
 4、string& append(const char* s);                         //把字符串s连接到当前字符串结尾
 5、string& append(const char* s, int n);                  //把字符串s的前n个字符连接到当前字符串结尾
 6、string& append(const string& s);                       //同operator+=(const string& str)
 7、string& append(const string& s, int pos, int n);       //字符串s中从pos开始的n个字符连接到字符串结尾
*/

void test01() {
	//1、string& operator+=(const char* str);                   //重载+=操作符；追加一串字符
	string str1 = "would";
	str1 += " you mind helping me";
	cout << "str1 = " << str1 << endl;

	//2、string& operator+=(const char c);                      //重载+=操作符；追加一个字符
	str1 += "?";
	cout << "str1 = " << str1 << endl;

	//3、string & operator+=(const string & str);                 //重载+=操作符；追加一个string同类型对象
	string str2 = "  please ";
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	//4、string & append(const char* s);                         //把字符串s连接到当前字符串结尾
	string str4 = "they";
	str4.append(" are twins ");
	cout << "str4 = " << str4 << endl;

	//5、string& append(const char* s, int n);                  //把字符串s的前n个字符连接到当前字符串结尾
	str4.append("but their personalities differ",10);
	cout << "str4 = " << str4 << endl;

	//6、string& append(const string& s);                       //同operator+=(const string& str)
	string str5 = "personalities differ";
	str4.append(str5);
	cout << "str4 = " << str4 << endl;

	//7、string& append(const string& s, int pos, int n);       //字符串s中从pos开始的n个字符连接到字符串结尾
	str4.append(str1, 14, 11);       //从第几个下标开始截取多少个
	cout << "str4 = " << str4 << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}