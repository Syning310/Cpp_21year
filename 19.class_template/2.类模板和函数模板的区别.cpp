#include<iostream>
using namespace std;

//1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//2����ģ����ģ������б��п�����Ĭ�ϲ���
                                
template<typename NameType, typename AgeType = int>  //2����ģ����ģ������б��п�����Ĭ�ϲ���
class Person {                                       //ģ������б��п��Ը�ģ������������ǰȷ������������
public:
	Person(NameType name, AgeType age) {
		this->m_Name = name;
		this->m_age = age;
	}
	void showPerson() {
		cout << "������  " << this->m_Name << endl;
		cout << "���䣺  " << this->m_age << endl;
	}

	NameType m_Name;
	AgeType m_age;
};

void test01() {
	//Person p("������", 2000);//����  //1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
	Person<string, int> p1("������", 2000);  //ֻ������ʾָ������
	p1.showPerson();

	Person<string> p2("����", 130000);  //ֻ����ģ��ſ�����ǰĬ�ϲ���
	p2.showPerson();
}


int main() {
	test01();


	system("pause");
	return 0;
}