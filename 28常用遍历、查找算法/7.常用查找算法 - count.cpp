#include<iostream>
using namespace std;
#include<vector>

//函数原型：count(iterator beg, iterator end, value);

void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(2); v.push_back(2); v.push_back(5); v.push_back(4);
	int ret = count(v.begin(), v.end(), 2);
	cout << "元素为2的元素有 " << ret << " 个" << endl;

}

class person {
public:
	person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	//重载 == 运算符
	bool operator==(const person& p) {
		if (this->m_Age == p.m_Age) {
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
	person p1("红尘", 20);
	person p2("孔乐", 20);
	person p3("羽烟", 18);
	person p4("青青", 20);
	person p5("卿儿", 25);
	vector<person> v;
	v.push_back(p1); v.push_back(p2); v.push_back(p3); v.push_back(p4); v.push_back(p5); 

	person p("寒雪", 20);

	int ret = count(v.begin(), v.end(), p);
	cout << "与寒雪年龄相同的有 " << ret << " 个" << endl;

}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}