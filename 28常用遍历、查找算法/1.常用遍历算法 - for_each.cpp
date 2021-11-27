#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//总结：第三个参数普通函数直接放函数名即可，可以不用参数列表；仿函数需要加()

/*
  算法主要是由头文件#include<algorithm> <functional> <numeric> 组成
  <algorithm> 是所有STL头文件中最大的一个，范围涉及到比较、交换、查找、遍历、复制、修改等等
  <numeric> 体积很小，只包括几个在序列上面进行简单数学运算的模板
  <functional> 定义了一些模板类，用以声明函数对象  内建函数对象
*/

//函数原型：  for_each(iterator beg, iterator end, _func); 起始迭代器，结束迭代器，仿函数或者普通函数都可以

//普通函数
void print(int val) {
	cout << val << " ";

}
//仿函数
class Myprint {
public:
	void operator()(int val) {
		cout << val << " " ;
	}
};
void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(3); v.push_back(4); v.push_back(5); v.push_back(6);

	//函数原型：  for_each(iterator beg, iterator end, _func); 起始迭代器，结束迭代器，仿函数或者普通函数都可以
	for_each(v.begin(), v.end(), print);  //普通函数直接放入函数名就可，不需要参数列表
	cout << endl;

	for_each(v.begin(), v.end(), Myprint());  //因为这个是函数对象，上面没有创建对象，这里就要加()，创建匿名的函数对象
	//仿函数需要把函数对象放入
	cout << endl;



}
int main() {
	test01();

	system("pause");
	return 0;
}