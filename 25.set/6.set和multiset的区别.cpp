#include<iostream>
using namespace std;
#include<set>

//总结：如果不允许插入重复数据可以利用set
//      如果需要插入重复数据可以利用multiset

/*
  区别：
	set（集合）不可以插入重复数据，而multiset（多功能集合）
    set插入数据的同时会返回插入结果，表示插入是否成功
	multiset不会检测数据，因此可以插入重复数据
*/

void test01() {
	set<int> s;
	
	pair<set<int>::iterator, bool> ret = s.insert(10);
	
	if (ret.second) {
		cout << "第一次插入成功" << endl;
	}
	else {
		cout << "第一次插入失败" << endl;
	}
	
	ret = s.insert(10);
	if (ret.second) {
		cout << "第二次插入成功" << endl;
	}
	else {
		cout << "第二次插入失败" << endl;
	}

	//multiset可以插入插入重复数据，插入数据返回结果是一个迭代器
	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);
	for (multiset<int>::iterator i = ms.begin(); i != ms.end(); i++) {
		cout << *i << " ";
	}cout << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}