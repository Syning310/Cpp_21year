#include<iostream>
using namespace std;
#include<deque>

//总结：deque赋值操作与vector基本完全相同

/*
  deque& operator=(const deque& deq);             //重载等号运算符
  assign(beg, end);                               //将(beg, end)区间中的数据拷贝赋值给本身
  assign(n, elem);                                //将n个elem拷贝赋值给本身
*/

void printDeque(const deque<int>& deq) {
	for (deque<int>::const_iterator i = deq.begin(); i != deq.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque(d1);

	//1、deque& operator=(const deque& deq);             //重载等号运算符
	deque<int> d2 = d1;
	printDeque(d2);

	//2、assign(beg, end);                               //将(beg, end)区间中的数据拷贝赋值给本身
	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	printDeque(d3);

	//3、assign(n, elem);                                //将n个elem拷贝赋值给本身
	deque<int> d4;
	d4.assign(6, 6);  //assign 赋值
	printDeque(d4);
}

int main() {
	test01();

	system("pause");
	return 0;
}