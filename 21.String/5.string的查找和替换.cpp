#include<iostream>
using namespace std;

/*
              find查找是从左往后，rfind从右往左
              find找到字符串后返回查找到的第一个字符位置，找不到返回-1
              replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串
*/

/*
 1、int find(const string& str, int pos = 0) const;         //查找str第一次出现位置,从pos开始查找
 2、int find(const char* s, int pos = 0) const;             //查找s第一次出现位置,从pos开始查找
 3、int find(const char* s, int pos, int n) const;          //从pos位置查找s的前n个字符第一次位置
 4、int find(const char c, int pos = 0) const;              //查找字符c第一次出现位置
 5、int rfind(const string& str, int pos = npos) const;     //查找str最后一次位置,从pos开始查找
 6、int rfind(const char* s, int pos = npos) const;         //查找s最后一次出现位置,从pos开始查找
 7、int rfind(const char* s, int pos, int n) const;         //从pos查找s的前n个字符最后一次位置
 8、int rfind(const char c, int pos = 0) const;             //查找字符c最后一次出现位置
 9、string& replace(int pos, int n, const string& str);     //替换从pos开始n个字符为字符串str
 10、string& replace(int pos, int n,const char* s);         //替换从pos开始的n个字符为字符串s
*/

//查找：查找指定字符串是否存在
//替换：在指定的位置替换字符串

void test01() {
	//查找
	//1、int find(const string & str, int pos = 0) const;         //查找str第一次出现位置,从pos开始查找
	string str1 = "differ nature";
	int i = str1.find("ff");
	cout << "i = " << i << endl;
	int j = str1.find("fr");
	cout << "j = " << j << endl;  //没有fr返回-1

	//5、int rfind(const string & str, int pos = npos) const;     //查找str最后一次位置,从pos开始查找
	int p = str1.rfind("na");    //rfind和find的区别；rfind从右往左查找 find从左往右查找
	cout << "p = " << p << endl;
}

void test02() {
	//替换
	string str = "differ natrre";
	//9、string& replace(int pos, int n, const string& str);     //替换从pos开始n个字符为字符串str
	str.replace(10, 1, "uuuu");  //从第10个位置起，1个字符，替换成"uuuu"
	cout << "str = " << str << endl;

}

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}