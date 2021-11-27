#include<iostream>
using namespace std;
#include<vector>
#include<numeric>

/*
  算术生成算法属于小型算法，使用时包含头文件#include<numeric>
    accumulate   ——  计算容器元素累计总和
	fill         ——  向容器中添加元素
*/

//作用：计算区间内 容器元素累计总和
//the function prototype : accumulate(iterator beg, iterator end, value);   value -> 起始的累加值，如果不需要就写0

void test01() {
	vector<int> v;
	for (int i = 0; i <= 100; i++) {
		v.push_back(i);
	}
	
	int total = accumulate(v.begin(), v.end(), 1000);  //第三个参数是起始的累加值
	cout << "total = " << total << endl;

}
int main() {
	test01();


	system("pause");
	return 0;
}