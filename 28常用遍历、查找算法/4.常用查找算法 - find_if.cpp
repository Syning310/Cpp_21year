#include<iostream>
using namespace std;
#include<vector>


//����ԭ�ͣ�  find_if(iterator beg, iterator end, _Pred);
//��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������
//_Pred ������ν�ʣ�����bool���͵ķº�����

class GreaterFive {
public:
	bool operator()(int val) {
		return val > 5;
	}
};
void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(3); v.push_back(4); v.push_back(5); v.push_back(6); v.push_back(7);

	vector<int>::iterator i = find_if(v.begin(), v.end(), GreaterFive());
	if (i == v.end()) {
		cout << "û���ҵ���Ԫ�أ�����" << endl;
	}
	else {
		cout << *i << endl;
	}
}


class Person {
public:
	Person(string name, int age) {
		this->m_Namel = name;
		this->m_Age = age;
	}
	string m_Namel;
	int m_Age;
};
//ν��
class Greater10 {
public:
	bool operator()(Person& p) {
		return p.m_Age > 100000;
	}
};
void test02() {
	vector<Person> v;
	Person p1("����", 150000);
	Person p2("����", 140000);
	Person p3("����", 4000);
	Person p4("���", 4000);
	v.push_back(p1); v.push_back(p2); v.push_back(p3); v.push_back(p4);
	
	//���������100000
	vector<Person>::iterator i = find_if(v.begin(), v.end(), Greater10());
	if (i == v.end()) {
		cout << "û���������������" << endl;
	}
	else {
		cout << "������  " << i->m_Namel << "\t���䣺  " << i->m_Age << endl;
	}

}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}