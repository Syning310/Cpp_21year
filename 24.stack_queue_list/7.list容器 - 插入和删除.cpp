#include<iostream>
using namespace std;
#include<list>

/*
  push_back(elem);                                     //在容器尾部插入一个元素
  pop_back();                                          //删除容器中最后一个元素
  push_front(elem);                                    //在容器开头插入一个元素
  pop_front();                                         //从容器开头移除第一个元素
  insert(pos, elem);                                   //在pos位置插入elem元素的拷贝，返回新数据的位置；pos是迭代器
  insert(pos, n, elem);                                //在pos位置插入n个elem元素的拷贝，无返回值
  insert(pos, beg(), end());                           //在pos位置插入[beg(), end()]区间的数据，无返回值
  clear();                                             //移除容器中的所有数据
  erase(beg(), end());                                 //删除[beg(), end()]区间的数据，返回下一个数据的位置
  erase(pos);                                          //删除pos位置的数据，返回下一个数据的位置
  remove(elem);                                        //删除容器中所有与elem值匹配的元素

  erase 擦除；remove 移除； insert 插入
*/
void printlist(const list<int>& l) {
	for (list<int>::const_iterator i = l.begin(); i != l.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	list<int> l;
	//push_front(elem);                                    //在容器开头插入一个元素
	l.push_front(10); l.push_front(20); l.push_front(30); l.push_front(40); l.push_front(50);
	printlist(l);

	//insert(pos, elem);                                   //在pos位置插入elem元素的拷贝，返回新数据的位置；pos是迭代器
	list<int>::iterator it = l.begin();
	l.insert(++it, 100);
	printlist(l);

	//erase(pos);                                          //删除pos位置的数据，返回下一个数据的位置
	it = l.begin();
	l.erase(it);
	printlist(l);

	//remove(elem);                                        //删除容器中所有与elem值匹配的元素;remove 移除
	l.remove(100);
	printlist(l);

	//clear();                                             //移除容器中的所有数据
	l.clear();
	printlist(l);

}
int main() {
	test01();


	system("pause");
	return 0;
}