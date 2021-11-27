#include<iostream>
using namespace std;
#include<set>

//对于自定义的数据类型，set必须指定排序规则才可以插入数据

class person {
public:
	person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

//仿函数
class ComparePerson {
public:
	//仿函数返回值数据类型布尔
	bool operator()( person p1, person p2)const {    //vs2019需要在括号后面加上const把仿函数变成常函数；vs2019不能加&
		//按照年龄进行升序
		return p1.m_Age < p2.m_Age;
	}
};

void test01() {
	//自定义数据类型，需要提前指定排序规则；则否无法插入到set容器中
	//因为set容器会自动排序，所以自定义数据类型需要提前指定如何排序；利用仿函数
	set<person, ComparePerson> s;
	person p1("红尘", 18);
	person p2("羽烟", 16);
	person p3("孔乐", 20);
	person p4("昆仑", 21);

	s.insert(p1); s.insert(p2); s.insert(p3); s.insert(p4);

	for (set<person, ComparePerson>::iterator i = s.begin(); i != s.end(); i++) {
		cout << "姓名：  " << i->m_Name << "\t年龄：" << i->m_Age << endl;
	}

}
int main() {
	test01();


	system("pause");
	return 0;
}