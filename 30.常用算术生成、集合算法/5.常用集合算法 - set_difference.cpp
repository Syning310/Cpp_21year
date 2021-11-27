#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//差集即，两个容器不是交集的数
//总结：必须是两个有序的序列，目标容器需从两个容器取较大值，set_difference返回值是差集中最后一个元素的位置
//min 最小    max 最大

//function: 求容器的差集；差集是相对的，v1和v2之间的差集，求出的是v1在v2中不重复的elem；v2和v1之间的差集，求出的是v2在v1中不重复的elem

//the function prototype : set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2. iterator dest);

class myprint {
public:
	void operator()(int value) {
		cout << value << " ";
	}
};
void test01() {
	vector<int> v1;
	vector<int> v2;
	vector<int> traget;//必须提前开辟空间；最特殊的情况是两个容器之间没有差集，所以开辟空间取：最大的那个容器为目标容器的空间
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 4);
	}
	cout << "求差集前：" << endl;
	for_each(v1.begin(), v1.end(), myprint()); cout << endl;
	for_each(v2.begin(), v2.end(), myprint()); cout << endl;

	cout << "v1和v2的差集：" << endl;
	traget.resize(max(v1.size(), v2.size()));  //max()返回的是求两个数之间最大的值
	vector<int>::iterator i = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), traget.begin());
	for_each(traget.begin(), i, myprint()); cout << endl;

	cout << "v2和v1的差集：" << endl;
	vector<int> traget2;
	traget2.resize(max(v1.size(), v2.size()));
	vector<int>::iterator e = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), traget2.begin());
	for_each(traget2.begin(), e, myprint()); cout << endl;

}
int main() {

	test01();

	system("pause");
	return 0;
}