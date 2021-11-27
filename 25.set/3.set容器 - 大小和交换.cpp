#include<iostream>
using namespace std;
#include<set>



/*
  size();                            //返回容器中元素的个数
  empty();                           //判断容器是否为空；为空的话返回true，不为空的话返回false
  swap(st);                          //交换两个集合容器
 */

void printSet(const set<int>& s) {
	for (set<int>::const_iterator i = s.begin(); i != s.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	set<int> s1;
	s1.insert(1); s1.insert(4); s1.insert(5); s1.insert(6); s1.insert(2); s1.insert(3); s1.insert(7);
	printSet(s1);

	//1.size();                            //返回容器中元素的个数
	cout << "s1的大小为：  " << s1.size() << endl;

	//2.empty();                           //判断容器是否为空；为空的话返回true，不为空的话返回false
	if (!s1.empty()) {
		cout << "s1容器不为空！！！" << endl;
	}
	else {
		cout << "s1容器为空！！！" << endl;
	}

	set<int> s2;
	s2.insert(11); s2.insert(14); s2.insert(15); s2.insert(16); s2.insert(12); s2.insert(13); s2.insert(17);
	printSet(s2);

	//3、swap(st);                          //交换两个集合容器
	s1.swap(s2);
	cout << "交换后：" << endl;
	printSet(s1);
	printSet(s2);


}
int main() {
	test01();

	system("pause");
	return 0;
}