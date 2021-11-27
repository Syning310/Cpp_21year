#include<iostream>
using namespace std;
#include<set>

//�����Զ�����������ͣ�set����ָ���������ſ��Բ�������

class person {
public:
	person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

//�º���
class ComparePerson {
public:
	//�º�������ֵ�������Ͳ���
	bool operator()( person p1, person p2)const {    //vs2019��Ҫ�����ź������const�ѷº�����ɳ�������vs2019���ܼ�&
		//���������������
		return p1.m_Age < p2.m_Age;
	}
};

void test01() {
	//�Զ����������ͣ���Ҫ��ǰָ�������������޷����뵽set������
	//��Ϊset�������Զ����������Զ�������������Ҫ��ǰָ������������÷º���
	set<person, ComparePerson> s;
	person p1("�쳾", 18);
	person p2("����", 16);
	person p3("����", 20);
	person p4("����", 21);

	s.insert(p1); s.insert(p2); s.insert(p3); s.insert(p4);

	for (set<person, ComparePerson>::iterator i = s.begin(); i != s.end(); i++) {
		cout << "������  " << i->m_Name << "\t���䣺" << i->m_Age << endl;
	}

}
int main() {
	test01();


	system("pause");
	return 0;
}