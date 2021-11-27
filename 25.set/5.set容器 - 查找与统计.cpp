#include<iostream>
using namespace std;
#include<set>

//find(key);                         //查找key是否存在；若存在，返回该元素的迭代器；若不存在，返回set.end();
//count(key);                        //统计key的元素个数； count（统计，计数）
//因为set不能插入重复的数据，所以count对于set而言，个数不是0个就是1个，而对于multiset而言这个结果得看容器里的数据

void test01() {
	set<int> s;
	s.insert(1); s.insert(5); s.insert(7); s.insert(6); s.insert(2); s.insert(4); s.insert(3);
	
	set<int>::iterator p = s.find(3);
	if (p != s.end()) {
		cout << "成功找到元素：  " << *p << endl;
	}
	else {
		cout << "未找到元素！" << endl;
	}

	cout << s.count(10) << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}