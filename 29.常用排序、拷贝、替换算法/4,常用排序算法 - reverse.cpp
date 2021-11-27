#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//作用：将容器内的元素进行反转
//函数原型：  reverse(iterator beg, iterator end);


void myprint(int val) {
	cout << val << " ";
}
void test01() {
	vector<int> v;
	v.push_back(2); v.push_back(5); v.push_back(3); v.push_back(1); v.push_back(4);

	cout << "反转前： " << endl;
	for_each(v.begin(), v.end(), myprint); cout << endl;

	cout << "反转后： " << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myprint); cout << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}