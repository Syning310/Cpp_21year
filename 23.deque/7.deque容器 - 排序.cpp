#include<iostream>
using namespace std;
#include<deque>
#include<algorithm> //标准算法的头文件

//算法：  sort(iterator beg, iterator end);         //对beg和end区间内的元素进行排序
//排序  默认排序规则  从小到大  升序
//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
//vector容器也可以利用 sort进行排序


void test01() {
	deque<int> d;
	d.push_back(10);
	d.push_back(15);
	d.push_back(20);
	d.push_front(30);
	d.push_front(25);
	d.push_front(0);
	cout << "排序前：  " << endl;
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}cout << endl;
	cout << "排序后：  " << endl;

	sort(d.begin(), d.end());
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}cout << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}