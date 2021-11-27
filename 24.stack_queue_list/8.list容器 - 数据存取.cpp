#include<iostream>
using namespace std;
#include<list>

//liat不可以用[]访问容器中的元素，也不可以用at方式访问；因为list本质是链表，不是连续线性空间，迭代器也是不支持随机访问
//双向访问意思是，只支持 ++（前移），--（后移）；比支持跳跃式的访问

//front();  //返回第一个元素
//back();   //返回最后一个元素

void test01() {
	list<int> p;
	p.push_back(10);
	p.push_back(20);
	p.push_front(5);
	p.push_front(0);

	cout << "p的第一个元素是：  " << p.front() << endl;
	cout << "p的最后一个元素是：  " << p.back() << endl;

	//迭代器不支持随机访问
	list<int>::iterator i = p.begin();
	i++;
	i--;
	//i = i + 1;

}
int main() {
	test01();

	system("pause");
	return 0;
}