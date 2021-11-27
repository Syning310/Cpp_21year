#include<iostream>
using namespace std;
#include<vector>


//函数原型：  find_if(iterator beg, iterator end, _Pred);
//按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器
//_Pred 函数或谓词（返回bool类型的仿函数）

class GreaterFive {
public:
	bool operator()(int val) {
		return val > 5;
	}
};
void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(3); v.push_back(4); v.push_back(5); v.push_back(6); v.push_back(7);

	vector<int>::iterator i = find_if(v.begin(), v.end(), GreaterFive());
	if (i == v.end()) {
		cout << "没有找到该元素！！！" << endl;
	}
	else {
		cout << *i << endl;
	}
}


class Person {
public:
	Person(string name, int age) {
		this->m_Namel = name;
		this->m_Age = age;
	}
	string m_Namel;
	int m_Age;
};
//谓词
class Greater10 {
public:
	bool operator()(Person& p) {
		return p.m_Age > 100000;
	}
};
void test02() {
	vector<Person> v;
	Person p1("无月", 150000);
	Person p2("青青", 140000);
	Person p3("梵心", 4000);
	Person p4("卿儿", 4000);
	v.push_back(p1); v.push_back(p2); v.push_back(p3); v.push_back(p4);
	
	//找年龄大于100000
	vector<Person>::iterator i = find_if(v.begin(), v.end(), Greater10());
	if (i == v.end()) {
		cout << "没有满足该条件的人" << endl;
	}
	else {
		cout << "姓名：  " << i->m_Namel << "\t年龄：  " << i->m_Age << endl;
	}

}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}