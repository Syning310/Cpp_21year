#include<iostream>
using namespace std;
#include<deque>

/*
  deque<T> deqT;                      //默认构造函数
  deque(beg, end);                    //构造函数将(beg, end)区间中的元素拷贝给本身
  deque(n, elem);                     //构造函数将n个elem拷贝给本身
  deque(const deque& deq);            //拷贝构造函数
*/

void printDeque(const deque<int>& deq) {                                     //因为在类型前加了const变为只读
	for (deque<int>::const_iterator i = deq.begin(); i != deq.end(); i++) {  //在迭代器前加上const_
		//*i = 10;  //因为类型前加了const变成了只能读不能写，不是可修改的左值
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	deque<int> d;
	for (int i = 0; i < 10; i++) {
		d.push_back(i);
	}
	printDeque(d);

	//2、 deque(beg, end);                    //构造函数将(beg, end)区间中的元素拷贝给本身
	deque<int>d2(d.begin(), d.end());
	printDeque(d2);

	//3、deque(n, elem);                     //构造函数将n个elem拷贝给本身
	deque<int> d3(6, 6);
	printDeque(d3);

	//4、deque(const deque& deq);            //拷贝构造函数
	deque<int>d4(d3);
    printDeque(d4);
}
int main() {
	test01();

	system("pause");
	return 0;
}