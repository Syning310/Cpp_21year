#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//两个容器合并，并且储存到另一个容器中
//函数原型：  merge(iterator beg1, iterator end1, iterator beg2, iterator end2,iterator dest);  dest 为目标容器起始迭代器
//注意：两个容器必须是有序的；而且目标容器需要提前开辟空间
//beg1 为第一个容器起始迭代器；end1 为第一个容器结束迭代器；beg2 为第二个容器起始迭代器；end2 为第二个容器结束迭代器

void myprint(int val) {
	cout << val << " ";
}
void test01() {
	vector<int> v1;
	vector<int> v2;
	v1.push_back(1); v1.push_back(2); v1.push_back(3); v1.push_back(4); v1.push_back(5); v1.push_back(6);
	v2.push_back(1); v2.push_back(2); v2.push_back(3); v2.push_back(4); v2.push_back(5); v2.push_back(6);
	vector<int> v3;
	int space = v1.size() + v2.size();
	v3.resize(space);    //目标容器必须提前开辟space

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());  
	for_each(v3.begin(), v3.end(), myprint); cout << endl;    //两个有序序列，合并之后依然是一个有序序列

	random_shuffle(v3.begin(), v3.end());
	for_each(v3.begin(), v3.end(), myprint); cout << endl;
}
int main() {
	srand((unsigned int)time(NULL));
	test01();

	system("pause");
	return 0;
}