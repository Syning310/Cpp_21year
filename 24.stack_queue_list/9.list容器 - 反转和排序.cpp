#include<iostream>
using namespace std;
#include<list>

//总结：所有不支持随机访问迭代器的容器，不可以用标准算法；
//不支持随机访问迭代器的容器，内部会提供对应的一些算法（成员函数）

//reverse();    //反转链表；将容器中的元素反转
//sort();       //链表排序；将容器中的数据进行排序；默认排序规则从小到大，升序；降序要写成员函数

bool myCompare(int v1, int v2) {
	//降序就让   第一个数 > 第二个数
	return v1 > v2;  //如果第一个数大于第二个数，就返回true，如果第一个数不大于第二个数，就返回false
}

void printlist(const list<int>& l) {
	for (list<int>::const_iterator i = l.begin(); i != l.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	list<int> l1;
	l1.push_back(1); l1.push_back(2); l1.push_back(3); l1.push_back(4); l1.push_back(5);
	printlist(l1);
	//reverse();    //反转链表；将容器中的元素反转
	l1.reverse();
	printlist(l1);

	list<int> p;
	p.push_back(10); p.push_back(3); p.push_back(1); p.push_back(5); p.push_back(6);
	p.push_back(2); p.push_back(8); p.push_back(7); p.push_back(4); p.push_back(9);
	printlist(p);

	//sort();       //链表排序；将容器中的数据进行排序
	p.sort(myCompare);
	printlist(p);
}

int main() {
	test01();

	system("pause");
	return 0;
}