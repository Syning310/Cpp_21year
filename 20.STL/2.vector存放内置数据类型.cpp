#include<iostream>
using namespace std;
#include<vector>  //STL中的每个容器在使用的时候都要包含它的头文件
#include<algorithm>  //标准算法的头文件 —— 很重要

//容器：  vector
//算法：  for_each
//迭代器：  vector<int>::iterator


void myprint(int val) {
	cout << val << endl;
}


void test01() {
	//vector 可以理解为数组；
	vector<int> v;  //创建了一个vector容器

	
	v.push_back(10);//向容器中插入数据  //尾插法
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//通过迭代器来访问容器中的数据
	//vector<int>::iterator itBegin = v.begin();  //起始迭代器  指向容器中第一个元素
	//vector<int>::iterator itEnd = v.end();      //结束迭代器  指向容器中最后一个元素的下一个位置

	////第一种遍历方式：
	//while (itBegin != itEnd) {
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//第二种遍历方式  //把上面的那些代码写在一个for循环里
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
	//                     初始状态            循环条件       递增
		cout << *it << endl;
	}

	//第三种遍历方式  利用STL提供遍历算法
	for_each(v.begin(), v.end(), myprint);

}

int main() {
	test01();

	system("pause");
	return 0;
}