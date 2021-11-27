#include<iostream>
using namespace std;

//pair的两个数据访问方式，第一个数据：first（第一）；第二个数据：second（第二）

/*
  功能：
    成对出现的数据，利用对组可以返回两个数据
  两种创建方式：
    pair<type, type> p ( value, value2 );
	pair<type, type> p = make_pair( value1, value2 );

*/
void test01() {
	//pair<type, type> p ( value, value2 );
	pair<string, int> p("红尘", 20);
	cout << "姓名：  " << p.first << "\t年龄：   " << p.second << endl;

	//pair<type, type> p = make_pair( value1, value2 );
	pair<string, int> w = make_pair("羽烟", 18);
    cout << "姓名：  " << w.first << "\t年龄：   " << w.second << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}