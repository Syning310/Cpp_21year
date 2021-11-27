#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//作用：将容器中指定范围的旧元素修改为新元素
//函数原型：  replace(iterator beg, iterator end, oldvalue, newvalue);

void myPrint(int val) {
	cout << val << " ";
}
void test01() {
	vector<int> v;
	v.push_back(10); v.push_back(20); v.push_back(20); v.push_back(70); v.push_back(30); v.push_back(20);

	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), myPrint); cout << endl;

	cout << "替换后：" << endl;
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), myPrint); cout << endl;


}
int main() {
	test01();
	system("pause");
	return 0;
}