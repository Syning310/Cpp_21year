#include<iostream>
using namespace std;

class Thumb {
public:
	Thumb(string name,int age) {
		m_Name = name;
		m_Age = age;
	}
	//重载关系运算符
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
	Thumb p1("大拇指", 21);
	Thumb p2("大拇指", 21);
	
	if (p1 == p2) {
		cout << "p1和p2是相等的！" << endl;
	}
	else {
		cout << "p1和p2是不相等的！" << endl;
	}

	if (p1 != p2) {
		cout << "p1和p2是不相等的！" << endl;
	}
	else {
		cout << "p1和p2是相等的！" << endl;
	}
}
int main() {
	test01();

	system("pause");
	return 0;
}