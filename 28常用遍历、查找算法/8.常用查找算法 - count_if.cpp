#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


//函数原型：  count_if(iterator beg, iterator end, _Pred);      _Pred  谓词


class greater20 {
public:
	bool operator()(int val) {
		return val > 20;
	}
};
void test01() {
	vector<int> v;
	v.push_back(10); v.push_back(30); v.push_back(50); v.push_back(40); v.push_back(60); v.push_back(70);

	int ret = count_if(v.begin(), v.end(), greater20());  //仿函数

	cout << "大于20的元素有 " << ret << " 个" << endl;
}


class person {
public:
	person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class greater30 {
public:
	bool operator()(const person& p) {
		return p.m_Age >= 30;
	}
};
void test02() {
	vector<person> v;
	person p1("青青", 25);
	person p2("无月", 30);
	person p3("卿儿", 25);
	person p4("梵心", 34);
	person p5("池瑶", 28);
	v.push_back(p1); v.push_back(p2); v.push_back(p3); v.push_back(p4); v.push_back(p5);
	
	//统计年龄大于30 的人员个数
	int ret = count_if(v.begin(), v.end(), greater30());
	cout << "年龄大于30的人有 " << ret << " 个" << endl;
}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}