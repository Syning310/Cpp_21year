#include<iostream>
using namespace std;
#include<vector>

//vector容器的迭代器是支持随机访问的迭代器

/*
  vector<T> V;                          //采用模板实现类实现，默认构造函数
  vector(v.begin(), v.end());           //将v[begin(), end()]区间中的元素拷贝给本身
  vector(n, elem);                      //构造函数将n个elem拷贝给本身         elem —— 元素
  vector(const vector& vec);            //拷贝构造函数
*/


void printVector(vector<int>& vec) {    //vector<int>::iterator是一个迭代器，可以把他理解为一个指针类型
	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}

void test01() {
	//1、vector<T> V;                          //采用模板实现类实现，默认构造函数
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	//2、vector(v.begin(), v.end());           //将v[begin(), end()]区间中的元素拷贝给本身
	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);


	//3、vector(n, elem);                      //构造函数将n个elem拷贝给本身         elem —— 元素
	vector<int> v3(6, 6);
	printVector(v3);

	//4、vector(const vector& vec);            //拷贝构造函数
	vector<int> v4(v3);
	printVector(v4);
}

int main() {
	test01();

	system("pause");
	return 0;
}