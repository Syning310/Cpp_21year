#include<iostream>
using namespace std;
#include<vector>


//功能：  实现两个容器内元素进行互换
//函数原型：
//  swap(vec);    //将vec与本身的元素互换


void printVector(vector<int>& v) {
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}

void test01() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	cout << "互换前：  " << endl;
	printVector(v1);

	vector<int> v2;
	for (int i = 9; i > -1; i--) {
		v2.push_back(i);
	}
	printVector(v2);

	v1.swap(v2);
	cout << "互换后：  " << endl;
	printVector(v1);
	printVector(v2);
}
//2、实际用途
//巧用swap可以收缩内存空间
void test02() {
	vector<int> v;
	for (int i = 0; i < 10000; i++) {
		v.push_back(i);
	}

	cout << "v的容量为：  " << v.capacity() << endl;
	cout << "v的大小为：  " << v.size() << endl;

	v.resize(5);
	cout << "v的容量为：  " << v.capacity() << endl;
	cout << "v的大小为：  " << v.size() << endl;

	//巧用swap收缩内存
	vector<int>(v).swap(v);
	cout << "v的容量为：  " << v.capacity() << endl;
	cout << "v的大小为：  " << v.size() << endl;

	//vector<int>(v)：匿名对象，相当于调用了拷贝构造函数创建了一个新的对象，这个新的对象没有名
	//按照v给它做初始化的操作，他会按照v目前所用的元素个数（size），来初始化这个匿名的对象的大小
	//所以这个匿名对象一开始的容量只有三，大小也只有三
	//最后互换之后，v和匿名对象的指向进行了交换
    
	//匿名对象的特点，当前行代码执行完，系统会自动回收
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}