#include<iostream>
using namespace std;

//template       ��������ģ��
// teypename     ���������ķ�����һ���������ͣ�������class����
// T             ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д��ĸ
//

template<typename NameType,typename AgeType>
class Person {
public:
	Person(NameType name,AgeType age) {
		this->m_Age = age;
		this->m_Name = name;
	}
	void showPerson() {
		cout << "������  " << this->m_Name << endl;
		cout << "���䣺  " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};
void test01() {  
	Person<string, int> p1("������", 2000);  //< > ģ��Ĳ����б�д�����ͺ��������м�
	p1.showPerson();

}

int main() {
	test01();

	system("pause");
	return 0;
}