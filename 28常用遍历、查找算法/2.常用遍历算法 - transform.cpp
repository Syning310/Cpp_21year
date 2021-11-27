#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


/*
  函数原型：
    transform(iterator beg1, iterator end1, iterator beg2, _func);
  beg1 原容器起始迭代器
  end1 原容器结束迭代器
  beg2 目标容器起始迭代器
  _func 普通函数或者函数对象（仿函数）
*/

class Target {  //transform搬运过程是把每个迭代器解引用放入到函数中，然后放入目标容器
public:
	int operator()(int val) {
		return val;  //直接return那就是不作任何操作
	}
};
class Myprint {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};
void test01() {
	vector<int> v1;
	v1.push_back(1); v1.push_back(2); v1.push_back(3); v1.push_back(4); v1.push_back(5); v1.push_back(6);

	vector<int> vTarget;  //目标容器
	vTarget.resize(v1.size());    //切记一定需要提前开辟空间

	//transform(iterator beg1, iterator end1, iterator beg2, _func);
	transform(v1.begin(), v1.end(), vTarget.begin(), Target());

	for_each(vTarget.begin(), vTarget.end(), Myprint());
	cout << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}