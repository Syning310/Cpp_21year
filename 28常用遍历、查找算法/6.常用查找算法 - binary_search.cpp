#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
/*
  功能： 查找指定元素是否存在；查到返回true，未查到返回false
  函数原型：bool binary_search(iterator beg, iterator end, value);
  注意：在无序的序列中不可使用
*/

void test01() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	bool ret = binary_search(v.begin(), v.end(), 19);  //这个容器必须是一个有序的序列，否则结果未知！混乱！
	if (ret) {
		cout << "找到元素" << endl;
	}
	else {
		cout << "未找到元素" << endl;
	}
}
int main() {
	test01();

	system("pause");
	return 0;
}