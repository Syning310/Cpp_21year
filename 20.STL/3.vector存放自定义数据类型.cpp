#include<iostream>
using namespace std;
#include<vector>


class east {
public:
	east(string name, int age) {
		this->m_Age = age;
		this->m_Name = name;
	}
	
	string m_Name;
	int m_Age;
};
void test01() {
	vector<east> e;
	east p1("����", 25);
	east p2("�쳾", 10);
	east p3("����", 40);
	east p4("����", 50);
	east p5("��ϣ", 20);

	//����β�巨�����������������
	e.push_back(p1);
	e.push_back(p2);
	e.push_back(p3);
	e.push_back(p4);
	e.push_back(p5);

	//���������е�����      i�͸�ָ��һ���������ó������������;���<east>����������ͣ�ʹ�÷���Ҳ���� i->m_Name
	for (vector<east>::iterator i = e.begin(); i < e.end(); i++) {
		//cout << "������  " << (*i).m_Name << "\t���䣺  " << (*i).m_Age << endl;
		cout << "������  " << i->m_Name << "\t���䣺  " << i->m_Age << endl;
	}

}

//����Զ�����������  ָ��
void test02() {
	vector<east*> e;
	east p1("����", 25);
	east p2("�쳾", 10);
	east p3("����", 40);
	east p4("����", 50);
	east p5("��ϣ", 20);

	//����β�巨�����������������
	e.push_back(&p1);
	e.push_back(&p2);
	e.push_back(&p3);
	e.push_back(&p4);
	e.push_back(&p5);

	//��������            //i��һ��ָ�� �����ó�������������Ҳ����һ��ָ�룬����Ҫ���������β����ó���ַ�е�����
	for (vector<east*>::iterator i = e.begin(); i < e.end(); i++) {
		//cout << "������  " << (*(*i)).m_Name << "\t���䣺  " <<(*(*i)).m_Age << endl;  //����
		cout << "������  " << (*i)->m_Name << "\t���䣺  " << (*i)->m_Age << endl;

	}

}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}