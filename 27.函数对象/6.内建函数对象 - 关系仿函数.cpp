#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

/*
  template<typename T> bool equal_to<T>            //等于
  template<typename T> bool not_equal_to<T>        //不等于
  template<typename T> bool greater<T>             //大于
  template<typename T> bool greater_equal<T>       //大于等于
  template<typename T> bool less<T>                //小于
  template<typename T> bool less_equal<T>          //小于等于

  关系仿函数中最常用的的是  greater<T>()
*/

class Compare {
public:
	bool operator()(int v1, int v2) const{
		return v1 > v2;
	}
};
void test01() {
	vector<int> v;
	v.push_back(10); v.push_back(40); v.push_back(50); v.push_back(20); v.push_back(30);
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		cout << *i << " ";
	}cout << endl;

	//sort(v.begin(), v.end());  //默认从小到大，因为里面的第三个参数默认的是less<T>()
	//sort(v.begin(), v.end(), Compare());  //我们可以自己写一个大于的仿函数
	sort(v.begin(), v.end(), greater<int>());  //greater<T>()是STL提供的内建函数对象，和自己写的compare效果一样

	for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
int main() {
	test01();

	system("pause");
}