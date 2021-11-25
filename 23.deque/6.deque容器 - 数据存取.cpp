#include<iostream>
using namespace std;
#include<deque>

/*
  除了用迭代器获取deque容器中的元素，[]和at也可以
  函数原型： 
  at(int idx);                              //返回索引idx所指的数据
  operator[];                               //返回索引idx所指的数据
  front();                                  //返回容器中第一个数据元素
  back();                                   //返回容器中最后一个数据元素
*/

void test01() {
	deque<int> d;
	d.push_back(0);
	d.push_back(10);
	d.push_back(20);
	d.push_front(10);
	d.push_front(20);

	//2、operator[];                               //返回索引idx所指的数据
	//通过[]方式访问元素
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}cout << endl;

	//1、at(int idx);                              //返回索引idx所指的数据
	cout << "元素下标为2的为：  " << d.at(2) << endl;  //返回索引所指的数据

	//3、front();                                  //返回容器中第一个数据元素
	cout << "第一个元素为：  " << d.front() << endl;

	//4、back();                                   //返回容器中最后一个数据元素
	cout << "最后一个元素为：  " << d.front() << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}