#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//总结：目标容器需要开辟的空间为两个容器相加
//set_union返回值是并集中最后一个elem的位置

//注意：两个容器必须是有序序列
//function: 求出两个容器的并集

//并集为两个容器中不重复的elem + (重复的元素只留一个)，就是并集

//the function prototype : set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);

class myprint {
public:
	void operator()(int value) {
		cout << value << " ";
	}
};
void test01() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 1; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 4);
	}
	cout << "并集前：" << endl;
	for_each(v1.begin(), v1.end(), myprint()); cout << endl;
	for_each(v2.begin(), v2.end(), myprint()); cout << endl;

	cout << "the conmity of v1 and v2 :" << endl;
	vector<int> traget;  //必须提前开辟空间；求两个容器的并集，最特殊的情况就是两个容器之间没有任何并集；所以开辟空间为两个容器相加
	traget.resize(v1.size() + v2.size());  //开辟两个容器内存空间相加；因为最特殊的情况是，两个容器之间没有任何并集

	vector<int>::iterator i = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), traget.begin());
	for_each(traget.begin(), i, myprint()); cout << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}