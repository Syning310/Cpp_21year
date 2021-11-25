#include<iostream>
using namespace std;

//总结：字符串对比主要是用于比较两个字符是否相等，判断谁打谁小的意义并不是很大

/*
  字符串比较是按字符的ASCLL码进行比较
   =  返回0
   >  返回1   大于返回1
   <  返回-1  小于返回-1

   函数原型：
   int compare(const string& s) const;     //与字符串s比较
   int compare(const char* s) const;       //与字符串s比较
*/

void test01() {
	string str1 = "hello";
	string str2 = "hello";

	if (str1.compare(str2) == 0) {
		cout << "str1 等于 str2" << endl;
	}
	else if (str1.compare(str2) == 1) {
		cout << "str1 大于 str2" << endl;
	}
	else if (str1.compare(str2) == -1) {
		cout << "str1 小于 str2" << endl;
	}

}

int main() {
	test01();

	system("pause");
	return 0;
}