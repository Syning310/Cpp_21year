#include<iostream>
using namespace std;
#include<deque>

/*
  deque.empty();                          //判断容器是否为空   为空的话返回true，不为空则返回false
  deque.size();                           //返回容器中元素的个数
  deque.resize(num);                      //重新指定容器的长度为num，若容器变长，则以默认值填充新位置
                                          //如果容器变短，则末尾超出容器长度的元素被删除
  deque.resize(num, elem);                //重新指定容器的长度为num，若容器变长，则以elem值填充新位置
                                          //如果容器变短，则末尾超出容器长度的元素被删除
  deque没有容器的概念原因是，它靠中控器存储地址，缓存区存放数据,理论上可以无限加数据；并不需要像vector一样每一次都动态扩展
*/

void printdeque(const deque<int>& d) {
	for (deque<int>::const_iterator i = d.begin(); i != d.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printdeque(d1);

	//1、deque.empty();                          //判断容器是否为空   为空的话返回true，不为空则返回false
	if (d1.empty()) {
		cout << "d1为空！！！" << endl;
	}
	else {
		cout << "d1不为空" << endl;
		//deque.size();                           //返回容器中元素的个数
		cout << "d1的大小为：  " << d1.size() << endl;
	}

	//3、deque.resize(num);                       //重新指定容器的长度为num，若容器变长，则以默认值填充新位置
                                                  //如果容器变短，则末尾超出容器长度的元素被删除
	d1.resize(12);
	printdeque(d1);

	//4、deque.resize(num, elem);                 //重新指定容器的长度为num，若容器变长，则以elem值填充新位置
                                                  //如果容器变短，则末尾超出容器长度的元素被删除
	d1.resize(18, 6);
	printdeque(d1);

}

int main() {
	test01();


	system("pause");
	return 0;
}