#include<iostream>
using namespace std;
#include<vector>
#include<map>

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
	
};

void test01() {
	Person p1("����", 150000);
	Person p2("��ϣ", 2500);
	Person p3("���", 4000);
	Person p4("���", 3000);
	Person p5("�弧", 3000);
	Person p6("����", 5000);
	Person p7("�ށo", 2500);
	Person p8("����", 3100);
	vector<Person> vp;
	vp.push_back(p1);vp.push_back(p2);vp.push_back(p3);vp.push_back(p4);vp.push_back(p5);vp.push_back(p6);vp.push_back(p7);vp.push_back(p8);	
	/*for (vector<Person>::iterator i = vp.begin(); i != vp.end(); i++) {
		cout << "������  " << i->m_Name << "\t���䣺" << i->m_Age << endl;
	}*/
	
	multimap<string, Person> mp;
	mp.insert(make_pair("����", p1)); mp.insert(make_pair("����", p2)); mp.insert(make_pair("�Ǻ���", p3)); mp.insert(make_pair("����", p4));
	mp.insert(make_pair("�Ǻ���", p5)); mp.insert(make_pair("��ͥ", p6)); mp.insert(make_pair("����", p7)); mp.insert(make_pair("��ͥ", p8));
	
	for (multimap<string, Person>::iterator i = mp.begin(); i != mp.end(); i++) {
		cout << "������" << i->first << "\t������  " << i->second.m_Name << "\t���䣺  " << i->second.m_Age << endl;
	}
	

}
int main() {
	test01();

	system("pause");
	return 0;
}