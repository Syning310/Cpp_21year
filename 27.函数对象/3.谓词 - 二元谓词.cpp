#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


void PrintVector(const vector<int>& vc) {
	for (vector<int>::const_iterator i = vc.begin(); i != vc.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
class MyCompare {
public:
	bool operator()(int val1, int val2) {
		return val1 > val2;
	}
};
void test01() {
	vector<int> v;
	v.push_back(10); v.push_back(40); v.push_back(30); v.push_back(50); v.push_back(20);
	sort(v.begin(), v.end());  //排序算法,默认就是大到小
	PrintVector(v);

	//可以使用仿函数，来改变算法的默认排序方式
	sort(v.begin(), v.end(), MyCompare());  //匿名函数对象
	PrintVector(v);
}
int main() {
	test01();

	system("pause");
	return 0;
}