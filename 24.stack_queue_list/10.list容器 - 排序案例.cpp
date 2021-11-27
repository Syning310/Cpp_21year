#include<iostream>
using namespace std;
#include<list>

//总结：对于自定义数据类型，必须要指定排序规则，否则编译器不知道如何进行排序
//高级排序只是在排序规则上在进行一次逻辑规则指定

//排序描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
//排序规则：按照年龄进行升序，如果年龄相同则按照身高进行升序

class person {
public:
	person(string name, int age, int height) {
		this->m_Name = name;
		this->m_Height = height;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
	int m_Height;
};

//指定排序规则
bool comparePerson(person& p1, person& p2) {
	//按照年龄 升序
	//年龄相同的情况下，按照身高 升序
	if (p1.m_Age == p2.m_Age) {
		return p1.m_Height < p2.m_Height;  //年龄相同的情况下，按照身高进行升序排序
	}
	else {
	return p1.m_Age < p2.m_Age;
	}

}
void test01() {
	list<person> l1;
	person p1("亦宁", 2500, 189);
	person p2("无月", 150000, 185);
	person p3("卿儿", 4000, 183);
	person p4("罗乷", 2500, 188);
	person p5("灵希", 2500, 180);
	person p6("池瑶", 3200, 182);
	l1.push_back(p1); l1.push_back(p2); l1.push_back(p3); l1.push_back(p4); l1.push_back(p5); l1.push_back(p6);
	cout << "排序前————————————————————" << endl;
	for (list<person>::iterator i = l1.begin(); i != l1.end(); i++) {
		cout << "姓名：  " << i->m_Name << "\t年龄：  " << i->m_Age << "\t身高：  " << i->m_Height << endl;
	}

	cout << "排序后————————————————————" << endl;
	l1.sort(comparePerson);  //直接调用排序的成员函数它无法知晓该按年龄排序还是身高排序；所以需要插入一个回调函数或者是仿函数
	for (list<person>::iterator i = l1.begin(); i != l1.end(); i++) {
		cout << "姓名：  " << i->m_Name << "\t年龄：  " << i->m_Age << "\t身高：  " << i->m_Height << endl;
	}


}
int main() {
	test01();

	system("pause");
	return 0;
}