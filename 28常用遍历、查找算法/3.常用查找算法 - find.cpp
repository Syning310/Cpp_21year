#include<iostream>
using namespace std;
#include<vector>
/*
  �����㷨��飺
    find                       //����Ԫ��
	find_if                    //����������Ԫ��
	adjacent_find              //���������ظ�Ԫ��
	binary_search              //���ֲ��ҷ�
	count                      //ͳ��Ԫ�ظ���
	count_if                   //������ͳ��Ԫ�ظ���
*/

//�ܽ᣺����find�������������ҵ�ָ����Ԫ�أ�����ֵ�ǵ�����

//����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()
//����ԭ��find(iterator beg, iterator end, value);  //value�ǲ��ҵ�Ԫ��

void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(3); v.push_back(4); v.push_back(5);

	//����Ԫ���� 3 ���Ԫ��; ���ص���Ԫ�صĵ�����
	vector<int>::iterator i = find(v.begin(), v.end(), 3);
	if (i == v.end()) {
		cout << "û�и�Ԫ�أ�����" << endl;
	}
	else {
		cout << *i << endl;
	}
}

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	//��Ҫ���� == �õײ��find֪����ζԱ�Person����������
	bool operator==(const Person& p){
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
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
	vector<Person> v;
	Person p1("�쳾", 18);
	Person p2("����", 20);
	Person p3("����", 15);

	v.push_back(p1); v.push_back(p2); v.push_back(p3);
	
	Person pp("�쳾", 28);  //��Ϊ���䲻ͬ�������������в������Ԫ�ز��Ҳ���������������ͬ�Ļ��ͻ᷵�������ĵ�����
	vector<Person>::iterator i = find(v.begin(), v.end(), pp);

	if (i == v.end()) {
		cout << "û���ҵ�����" << endl;
	}
	else {
		cout << "������  " << i->m_Name << "���䣺  " << i->m_Age << endl;
	}
}
int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}