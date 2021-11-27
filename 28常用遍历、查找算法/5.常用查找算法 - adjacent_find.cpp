#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//函数原型：  adjacent_find(iterator beg, iterator end);
//查找相邻重复元素，返回相邻元素的第一个迭代器

void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(3); v.push_back(3); v.push_back(4); v.push_back(5); v.push_back(4);

	vector<int>::iterator i = adjacent_find(v.begin(), v.end());
	if (i == v.end()) {
		cout << "未找到相邻重复的元素" << endl;
	}
	else {
		cout << *i << endl;
	}

}
int main() {
	test01();
	system("pause");
	return 0;
}