#include<iostream>
using namespace std;


//总结：灵活的运用求子串功能，可以在实际开发中获取有效的信息

//功能：  从字符串中获取想要的子串

//函数原型：  string substr(int pos = 0; int n = npos) const;    //返回由pos开始的n个字符组成的字符串

void test01() {
	string str = "Syning310@outlook.com";
	
	int i = str.find("@");    //利用查找的函数找到@的下标，这个函数返回值是int

	string email = str.substr(0, i);
	cout << "我的邮箱为：  " << email << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}