#include<iostream>
using namespace std;
#include<list>

//�ܽ᣺�����Զ����������ͣ�����Ҫָ��������򣬷����������֪����ν�������
//�߼�����ֻ��������������ڽ���һ���߼�����ָ��

//������������Person�Զ����������ͽ�������Person�����������������䡢���
//������򣺰�����������������������ͬ������߽�������

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

//ָ���������
bool comparePerson(person& p1, person& p2) {
	//�������� ����
	//������ͬ������£�������� ����
	if (p1.m_Age == p2.m_Age) {
		return p1.m_Height < p2.m_Height;  //������ͬ������£�������߽�����������
	}
	else {
	return p1.m_Age < p2.m_Age;
	}

}
void test01() {
	list<person> l1;
	person p1("����", 2500, 189);
	person p2("����", 150000, 185);
	person p3("���", 4000, 183);
	person p4("�ށo", 2500, 188);
	person p5("��ϣ", 2500, 180);
	person p6("����", 3200, 182);
	l1.push_back(p1); l1.push_back(p2); l1.push_back(p3); l1.push_back(p4); l1.push_back(p5); l1.push_back(p6);
	cout << "����ǰ����������������������������������������" << endl;
	for (list<person>::iterator i = l1.begin(); i != l1.end(); i++) {
		cout << "������  " << i->m_Name << "\t���䣺  " << i->m_Age << "\t��ߣ�  " << i->m_Height << endl;
	}

	cout << "����󡪡�������������������������������������" << endl;
	l1.sort(comparePerson);  //ֱ�ӵ�������ĳ�Ա�������޷�֪���ð������������������������Ҫ����һ���ص����������Ƿº���
	for (list<person>::iterator i = l1.begin(); i != l1.end(); i++) {
		cout << "������  " << i->m_Name << "\t���䣺  " << i->m_Age << "\t��ߣ�  " << i->m_Height << endl;
	}


}
int main() {
	test01();

	system("pause");
	return 0;
}