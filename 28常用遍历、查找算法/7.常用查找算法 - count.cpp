#include<iostream>
using namespace std;
#include<vector>

//����ԭ�ͣ�count(iterator beg, iterator end, value);

void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(2); v.push_back(2); v.push_back(5); v.push_back(4);
	int ret = count(v.begin(), v.end(), 2);
	cout << "Ԫ��Ϊ2��Ԫ���� " << ret << " ��" << endl;

}

class person {
public:
	person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	//���� == �����
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
	person p1("�쳾", 20);
	person p2("����", 20);
	person p3("����", 18);
	person p4("����", 20);
	person p5("���", 25);
	vector<person> v;
	v.push_back(p1); v.push_back(p2); v.push_back(p3); v.push_back(p4); v.push_back(p5); 

	person p("��ѩ", 20);

	int ret = count(v.begin(), v.end(), p);
	cout << "�뺮ѩ������ͬ���� " << ret << " ��" << endl;

}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}