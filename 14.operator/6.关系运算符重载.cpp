#include<iostream>
using namespace std;

class Thumb {
public:
	Thumb(string name,int age) {
		m_Name = name;
		m_Age = age;
	}
	//���ع�ϵ�����
	bool operator==(Thumb& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		}
		return false;
	}
	bool operator!=(Thumb& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return false;
		}
		return true;
	}

	string m_Name;
	int m_Age;
};

void test01() {
	Thumb p1("��Ĵָ", 21);
	Thumb p2("��Ĵָ", 21);
	
	if (p1 == p2) {
		cout << "p1��p2����ȵģ�" << endl;
	}
	else {
		cout << "p1��p2�ǲ���ȵģ�" << endl;
	}

	if (p1 != p2) {
		cout << "p1��p2�ǲ���ȵģ�" << endl;
	}
	else {
		cout << "p1��p2����ȵģ�" << endl;
	}
}
int main() {
	test01();

	system("pause");
	return 0;
}