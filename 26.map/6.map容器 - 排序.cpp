#include<iostream>
using namespace std;
#include<map>

//总结：利用仿函数可以指定map容器的排序规则；
//对于自定义数据类型，map必须要指定排序规则，同set容器一样


class Compare {
public:
	//记得函数参数列表后面要加上const防止数据丢失
	bool operator()(int v1, int v2) const{  //第一个小括号是重载的运算符，第二个小括号才是函数的参数列表
		//因为是降序，所以要第一个数比第二个数大，才返回true
		return v1 > v2;
	}
};
void printmap(const map<int, int, Compare>& m) {
	for (map<int, int>::const_iterator i = m.begin(); i != m.end(); i++) {
		cout << "key = " << i->first << "\tvalue = " << i->second << endl;
	}
}
void test01() {
	map<int, int, Compare> p; //跟set容器一样，要改变排序规则就必须插入元素之前改变它的默认排序规则；
	//改变排序规则的方法是在容器的参数列表中插入仿函数
	p.insert(make_pair(1, 10));
	p.insert(make_pair(2, 20));
	p.insert(make_pair(3, 30));
	p.insert(make_pair(4, 40));
	p.insert(make_pair(5, 50));
	printmap(p);
}
int main() {
	test01();

	system("pause");
	return 0;
}