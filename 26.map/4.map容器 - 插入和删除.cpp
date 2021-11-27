#include<iostream>
using namespace std;
#include<map>


/*
  insert(elem);                     //在容器中插入元素
  clear();                          //清楚所有元素
  erase(pos);                       //删除pos迭代器所指的元素，返回下一个元素的迭代器
  erase(beg, end);                  //删除区间[beg, end]的所有元素，返回下一个元素的迭代器
  erase(key);                       //删除容器中键值为key的元素
*/

void printMap(const map<int, int>& p) {
	for (map<int, int>::const_iterator i = p.begin(); i != p.end(); i++) {
		cout << "key = " << i->first << "\tvalue = " << i->second << endl;
	}
}
void test01() {
	map<int, int> p;
	//insert(elem);                     //在容器中插入元素
	// 
	//第一种
	p.insert(pair<int, int>(1, 10));

	//第二种
	p.insert(make_pair(2, 20));   //推荐使用
	
	//第三种
	p.insert(map<int, int>::value_type(3, 30));

	//第四种  //重载中括号，不过不建议使用这个方法
	p[4] = 40;

	//cout << p[5] << endl;  //不建议使用中括号插入元素的原因，因为如果没有找到key值为5，他会自动创建然后赋值value为0
	//[]用途，利用key访问到value
	printMap(p);

	//erase(pos);                       //删除pos迭代器所指的元素，返回下一个元素的迭代器
	p.erase(p.begin());
	printMap(p);

	//erase(key);                       //删除容器中键值为key的元素
	p.erase(3);  //通过key值来删除元素
	printMap(p);

	p.clear();  //清空
	printMap(p);

}
int main() {
	test01(); 

	system("pause");
	return 0;
}