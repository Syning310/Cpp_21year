#include<iostream>
using namespace std;
#include<vector>
/*
  查找算法简介：
    find                       //查找元素
	find_if                    //按条件查找元素
	adjacent_find              //查找相邻重复元素
	binary_search              //二分查找法
	count                      //统计元素个数
	count_if                   //按条件统计元素个数
*/

//总结：利用find可以在容器中找到指定的元素，返回值是迭代器

//查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()
//函数原型find(iterator beg, iterator end, value);  //value是查找的元素

void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(3); v.push_back(4); v.push_back(5);

	//查找元素中 3 这个元素; 返回的是元素的迭代器
	vector<int>::iterator i = find(v.begin(), v.end(), 3);
	if (i == v.end()) {
		cout << "没有该元素！！！" << endl;
	}
	else {
		cout << *i << endl;
	}
}

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	//需要重载 == 让底层的find知道如何对比Person的数据类型
	bool operator==(const Person& p){
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		}
		else {
			return false;
		}
	}
	string m_Name;
	int m_Age;
};
void test02() {
	vector<Person> v;
	Person p1("红尘", 18);
	Person p2("孔乐", 20);
	Person p3("羽烟", 15);

	v.push_back(p1); v.push_back(p2); v.push_back(p3);
	
	Person pp("红尘", 28);  //因为年龄不同，所在在容器中查找这个元素查找不到；姓名年龄相同的话就会返回容器的迭代器
	vector<Person>::iterator i = find(v.begin(), v.end(), pp);

	if (i == v.end()) {
		cout << "没有找到该人" << endl;
	}
	else {
		cout << "姓名：  " << i->m_Name << "年龄：  " << i->m_Age << endl;
	}
}
int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}