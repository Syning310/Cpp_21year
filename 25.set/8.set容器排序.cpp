#include<iostream>
using namespace std;
#include<set>

//set容器默认排序规则是从大到小，利用仿函数，可以改变排序规则

class myCompare {  //仿函数本质上是一个类型；把仿函数卸载一个类中
public:
	bool operator()(int v1, int v2) const{    //第一个小括号是重载，第二个小括号才是参数列表;参数列表后面要加const
		return v1 > v2;  //当第一个数大于第二个数时，返回ture；否则返回false
	}
};

void test01() {
	set<int> s1;

	s1.insert(10); s1.insert(50); s1.insert(40); s1.insert(30); s1.insert(20);
	for (set<int>::iterator i = s1.begin(); i != s1.end(); i++) {
		cout << *i << " ";
	}cout << endl;

	//指定排序规则为从大到小
	set<int,myCompare> s2;  //模板参数列表中只能放数据类型，所以仿函数得卸载一个类中

    //应在插入数据之前就告诉它，从大到小的排序
	s2.insert(10); s2.insert(50); s2.insert(40); s2.insert(30); s2.insert(20);

	for (set<int, myCompare>::iterator i = s2.begin(); i != s2.end(); i++) {
		cout << *i << " ";
	}cout << endl;


}

int main() {
	test01();

	system("pause");
	return 0;
}