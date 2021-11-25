#include<iostream>
using namespace std;
#include<vector>


/*
  push_back(ele);                                     //尾部插入元素ele
  pop_back();                                         //删除最后一个元素
  insert(const_iterator pos, ele);                    //迭代器指向位置pos插入元素ele
  insert(const_iterator pos, int count,ele);          //迭代器指向位置pos插入count个元素ele
  erase(const_iterator pos);                          //删除迭代器指向的元素
  erase(const_iterator start, const_iterator end);    //删除迭代器从start到end之间的元素
  clear();                                            //删除容器中所有元素  
*/

void printvector(vector<int>& vec) {
	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}

void test01() {
	vector<int> v1;
	//1、push_back(ele);                                     //尾部插入元素ele
	v1.push_back(10);  //尾插法就是在容器中从数据的尾部插入数据，如暂时无数据则是从0下标开始
	v1.push_back(20);
    v1.push_back(30);
	printvector(v1);

	//2、pop_back();                                         //删除最后一个元素
	v1.pop_back();
	printvector(v1);

	//3、insert(const_iterator pos, ele);                    //迭代器指向位置pos插入元素ele
	v1.insert(v1.begin(), 0);  //第一个参数是迭代器
	printvector(v1);

	//4、insert(const_iterator pos, int count,ele);          //迭代器指向位置pos插入count个元素ele
	v1.insert(v1.begin(), 2, 6);//第一个参数是迭代器，第二个是个数，第三个是元素
	printvector(v1);

	//5、erase(const_iterator pos);                          //删除迭代器指向的元素
	v1.erase(v1.begin());  //erase是擦除的意思；参数也是迭代器
    printvector(v1);

	//6、erase(const_iterator start, const_iterator end);    //删除迭代器从start到end之间的元素
	v1.erase(v1.begin(), v1.end());
	printvector(v1);

	//7、clear();                                            //删除容器中所有元素
	v1.clear();
    printvector(v1);
}

int main() {
	test01();

	system("pause");
	return 0;
}

