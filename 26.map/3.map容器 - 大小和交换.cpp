#include<iostream>
using namespace std;
#include<map>

/*
  size();                   //返回容器中元素的数目
  empty();                  //判断容器是否为空
  swap(st);                 //交换两个集合容器
*/
void printmap(const map<int, int>& p) {
	for (map<int, int>::const_iterator i = p.begin(); i != p.end(); i++) {
		cout << "key = " << i->first << "\tvalue = " << i->second << endl;
	}
}
void test01() {
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(5, 50));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));

	if (m.empty()) {
		cout << "m容器为空！！！" << endl;
	}
	else {
		cout << "m容器不为空！！！" << endl;
		cout << "m容器的大小为：  " << m.size() << endl;
	}

	map<int, int> m2;
	m2.insert(pair<int, int>(1, 100));
	m2.insert(pair<int, int>(4, 400));
	m2.insert(pair<int, int>(5, 500));
	m2.insert(pair<int, int>(3, 300));
	m2.insert(pair<int, int>(2, 200));

	cout << "交换前：" << endl;
	printmap(m);
	cout << "————————————————————" << endl;
	printmap(m2);
	cout << "交换后：" << endl;
	m.swap(m2);
	printmap(m);
    cout << "————————————————————" << endl;
	printmap(m2);
}
int main() {
	test01();

	system("pause");
	return 0;
}