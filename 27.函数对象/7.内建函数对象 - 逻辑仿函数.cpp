#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>

/*
  template<typename T> bool logical_and<T>         //逻辑与    两个同时为真，才为真，其余情况为假
  template<typename T> bool logical_or<T>          //逻辑或    两个同时为假，才为假，如果有一个为真即为真
  template<typename T> bool logical_not<T>         //逻辑非    取反，真变假，假变真
*/

void test01() {
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(true);
	v.push_back(true);
	v.push_back(false);
	for (vector<bool>::iterator i = v.begin(); i != v.end(); i++) {
		cout << *i << " ";
	}cout << endl;

	//利用逻辑非  将容器v搬运到容器v2中  并执行取反操作
	vector<bool> v2;
	v2.resize(v.size());  //搬运前必须先开辟空间，不然无法搬运

	//template<typename T> bool logical_not<T>         //逻辑非    取反，真变假，假变真
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator i = v2.begin(); i != v2.end(); i++) {
		cout << *i << " ";
	}cout << endl;

	//transform()是把容器v搬运到容器v2的算法，参数列表中第一个提供原容器起始迭代器，第二个结束迭代器
	//第三个提供搬运目标容器的起始迭代器，最后一个是仿函数

}

int main() {
	test01();

	system("pause");
	return 0;
}