#include<iostream>
using namespace std;
#include<list>

/*
    assign(beg(), end());                      //将[beg(), end()]区间中的数据拷贝赋值给本身
	assign(n,elem);                            //将n个elem拷贝赋值给本身
	list& operator=(const list& lst);          //重载等号运算符
	swap(lst);                                 //将lst与本身的元素互换
*/

void printList(const list<int>& l) {
	for (list<int>::const_iterator i = l.begin(); i != l.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01(){
	list<int> l1;
	l1.push_back(10); l1.push_back(20); l1.push_back(30); l1.push_back(40); l1.push_back(50);

	cout << "互换前：  " << endl;
	list<int> l2;
	//1、assign(beg(), end());                      //将[beg(), end()]区间中的数据拷贝赋值给本身
	l2.assign(l1.begin(), l1.end());
	cout << "l2 = " << endl;
	printList(l2);

	//2、assign(n, elem);                            //将n个elem拷贝赋值给本身
	list<int> l3;
	l3.assign(6, 6);
	//printList(l3);

	//3、list& operator=(const list & lst);          //重载等号运算符
	cout << "l4 = " << endl;
	list<int> l4 = l3;
	printList(l4);
	
	cout << "互换后" << endl;
	//4、swap(lst);                                 //将lst与本身的元素互换
	l4.swap(l2);
	cout << "l2 = " << endl;
	printList(l2);
	cout << "l4 = " << endl;
	printList(l4);


}
int main() {
	test01();

	system("pause");
	return 0;
}