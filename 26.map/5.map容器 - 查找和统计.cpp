#include<iostream>
using namespace std;
#include<map>

/*
  find(key);                           //查找key是否存在，若存在，返回键的元素的迭代器；若不存在，返回set.end();
  count(key);                          //统计key的元素个数；对于map来说只有一个key，因为map不允许插入重复的key
  map不允许插入重复key值的元素，如果后面插入重复key值的元素，会插不进去
*/

void test01() {
	map<int, int> p;
	p.insert(make_pair(1, 10));
	p.insert(make_pair(3, 30));
	p.insert(make_pair(2, 20));
	p.insert(make_pair(5, 50));
	p.insert(make_pair(4, 40));

	//find(key);                           //查找key是否存在，若存在，返回键的元素的迭代器；若不存在，返回set.end();
	map<int, int>::iterator i = p.find(2);
	if (i != p.end()) {
		cout << "value = "<< i->second << endl;
	}
	else {
        cout << "未找到该key值" << endl;
	}

	

	//count(key);                          //统计key的元素个数；对于map来说只有一个key，因为map不允许插入重复的key
	int a = p.count(2);
	cout << a << endl;

	multimap<int, int> mp;
	mp.insert(make_pair(1, 100));
	mp.insert(make_pair(1, 200));
	mp.insert(make_pair(1, 300));
	mp.insert(make_pair(1, 400));
	mp.insert(make_pair(1, 500));
	for (multimap<int, int>::iterator i = mp.begin(); i != mp.end(); i++) {
		cout << "key = " << i->first << "\tvalue = " << i->second << endl;
	}
	int q = mp.count(1);
	cout << "multimap中key值为1的有： " << q << "个" << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}