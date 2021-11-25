#include<iostream>
using namespace std;
#include<deque>

/*    
  两端插入操作：
  push_back(elem);                              //在容器尾部添加一个数据
  push_front(elem);                             //在容器头部插入一个数据
  pop_back();                                   //删除容器最后一个数据
  pop_front();                                  //删除容器第一个数据

  指定位置操作：   //通过迭代器指定的位置： begin()  end()
  insert(pos, elem);                            //在pos位置插入一个elem元素的拷贝，返回新数据的位置
  insert(pos, n, elem);                         //在pos位置插入n个elem数据，无返回值
  insert(pos, beg(), end());                    //在pos位置插入[beg, end]区间的数据，无返回值
  clear();                                      //清空容器中的所有数据
  erase(beg(), end());                          //删除[beg, end]区间的数据，返回下一个数据的位置
  erase(pos);                                   //删除pos位置的数据，返回下一个数据的位置
*/

void printdeque(const deque<int>& d) {
	for (deque<int>::const_iterator i = d.begin(); i != d.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	deque<int> d1;
	//1、push_back(elem);                              //在容器尾部添加一个数据
	d1.push_back(10); d1.push_back(20); d1.push_back(30); d1.push_back(40); d1.push_back(50);
	
	//2、push_front(elem);                             //在容器头部插入一个数据
	d1.push_front(100), d1.push_front(110), d1.push_front(120), d1.push_front(130), d1.push_front(140);
		printdeque(d1);

	//3、pop_back();                                   //删除容器最后一个数据
		d1.pop_back();
	//4、pop_front();                                  //删除容器第一个数据
		d1.pop_front();
		printdeque(d1);
}


void test02() {
	deque<int> d;
	d.push_back(10);
	d.push_back(15);
	d.push_front(100);
	d.push_front(200);
	printdeque(d);

	//5、insert(pos, elem);                            //在pos位置插入一个elem元素的拷贝，返回新数据的位置
	d.insert(d.begin(), 1000);
	printdeque(d);

	//6、insert(pos, n, elem);                         //在pos位置插入n个elem数据，无返回值
	d.insert(d.begin(), 2, 5);
	printdeque(d);

	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	//7、insert(pos, beg(), end());                    //在pos位置插入[beg, end]区间的数据，无返回值
	//按照区间来进行插入
	d.insert(d.begin(), d2.begin(), d2.end());
	printdeque(d);

	//10、erase(pos);                                   //删除pos位置的数据，返回下一个数据的位置
	deque<int>::iterator i = d.begin();
	i += 5;
	d.erase(i);
	printdeque(d);

	//9、erase(beg(), end());                          //删除[beg, end]区间的数据，返回下一个数据的位置
	d.erase(d.begin(), d.end());
	printdeque(d);

	//8、clear();                                      //清空容器中的所有数据
	d.clear();
	printdeque(d);

}
int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}