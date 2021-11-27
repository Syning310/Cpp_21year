#include<iostream>
using namespace std;
#include<list>

//总结：list构造方式，同其他几个STL常用容器基本一致

/*
    list<T> lst;                      //list采用模板类实现，对象的默认构造形式
	list(beg, end);                   //构造函数将[beg, end]区间中的元素拷贝给本身
	list(n, elem);                    //构造函数将n个elem拷贝给本身
	list(const list& lst);            //拷贝构造函数
*/

void printList(const list<int>& lis) {
	for (list<int>::const_iterator i = lis.begin(); i != lis.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	//1、list<T> lst;                      //list采用模板类实现，对象的默认构造形式
	list<int> l1;
	l1.push_back(10); l1.push_back(20); l1.push_back(30); l1.push_back(40); l1.push_back(50);

	printList(l1);  //遍历容器

	//2、list(beg, end);                   //构造函数将[beg, end]区间中的元素拷贝给本身
	list<int>l2(l1.begin(), l1.end());
	printList(l2);

	//3、list(n, elem);                    //构造函数将n个elem拷贝给本身
	list<int> l3(6, 6);
	printList(l3);

	//4、list(const list& lst);            //拷贝构造函数
	list<int> l4(l3);
	printList(l4);
}
int main() {
	test01();


	system("pause");
	return 0;
}