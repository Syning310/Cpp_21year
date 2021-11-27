#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//replace_if ���������ң��������÷º�����flexibility��ɸѡ��������
//replace ���� ȡ��
//������������������elem���滻��ָ��elem
//the function prototype : replace_if(iterator beg, iterator end, _Pred, newvalue);


class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	void operator== (Person& p) {
		//this->m_Name = this->m_Name;
		this->m_Age = p.m_Age;
	}
	string m_Name;
	int m_Age;
};
class Greater {
public:
	bool operator()(const Person& p) {
		return p.m_Age > 100000;
	}
};
class myPrint {
public:
	void operator()(Person& p) {
		cout << "������  " << p.m_Name << "\t���䣺  " << p.m_Age << endl;
	}
};
void test01() {
	vector<Person> v;
	Person p1("����", 150000);
	Person p2("����", 140000);
	Person p3("����", 3200);
	Person p4("���", 4000);
	Person p5("����", 130000);

	v.push_back(p1); v.push_back(p2); v.push_back(p3); v.push_back(p4); v.push_back(p5);
	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), myPrint());

	Person p("��", 100000);

	cout << "�滻��" << endl;
	replace_if(v.begin(), v.end(), Greater(), p);
	for_each(v.begin(), v.end(), myPrint());

}


class less40 {
public:
	bool operator()(int value) {
		return value <= 40;
	}
};
class printInt {  //�º���һ����operator()��һ��������С������������м��м��м�
public:
	void operator()(int val) {
		cout << val << " ";
	}
};
void test02() {
	vector<int> v;
	v.push_back(10); v.push_back(30); v.push_back(50); v.push_back(70); v.push_back(90); v.push_back(120);
	v.push_back(20); v.push_back(40); v.push_back(60); v.push_back(80); v.push_back(100); v.push_back(110);
	sort(v.begin(), v.end(), greater<int>());    //ʹ���ڽ��������º���������Ҫ����ģ������б�
	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), printInt()); cout << endl;

	cout << "�滻��" << endl;
	replace_if(v.begin(), v.end(), less40(), 50);
	for_each(v.begin(), v.end(), printInt()); cout << endl;

}
int main() {
	test01();
	//test02();

	system("pause");
	return 0;
}