#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//函数原型：sort(iterator beg, iterator end, _Pred);  //_Pred是谓词；默认是less 从小到大；从大到小填入内建仿函数：greater<T>()
                                                                                          //一定记得加模板参数列表

class Greater {
public:
	bool operator()(int& v1, int v2)const {
		return v1 > v2;
	}
};
void printVector(int val) {
	cout << val << " ";
}
void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(5); v.push_back(4); v.push_back(3); v.push_back(6); v.push_back(7);
	
	cout << "排序前：" << endl;
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		cout << *i << " ";
	}cout << endl;

	cout << "排序后：" << endl;
	sort(v.begin(), v.end(),greater<int>());  //也可以用自己写的仿函数：Greater()
	for_each(v.begin(), v.end(), printVector); cout << endl;
}
int main() {
	test01();

	system("pause");
	return 0;
}