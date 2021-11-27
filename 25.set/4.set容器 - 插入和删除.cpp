#include<iostream>
using namespace std;
#include<set>



/*
  insert(elem);                               //在容器中插入元素
  clear();                                    //清除所有元素
  erase(pos);                                 //删除pos迭代器所指的元素，返回下一个元素的迭代器
  erase(beg, end);                            //删除[beg, end]区间的所有元素，返回下一个迭代器
  erase(elem);                                //删除容器中值为elem的元素
*/

void printSet(set<int>& s) {
	for (set<int>::iterator i = s.begin(); i != s.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	set<int> s1;
	//insert(elem);                               //在容器中插入元素
	s1.insert(4); s1.insert(2); s1.insert(5); s1.insert(3); s1.insert(1); s1.insert(6);
	printSet(s1);

	//erase(pos);                                 //删除pos迭代器所指的元素，返回下一个元素的迭代器
	s1.erase(s1.begin());
	printSet(s1);

	//erase(elem);                                //删除容器中值为elem的元素
	s1.erase(6);
	printSet(s1);

	//clear();                                    //清除所有元素
	s1.clear();
	printSet(s1);
}
int main() {
	test01();


	system("pause");
	return 0;
}