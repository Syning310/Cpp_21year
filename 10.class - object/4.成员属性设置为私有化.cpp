#include <iostream>
using namespace std;

//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��

class Person {
public:
	//���������ɶ���д
	void setName(string name) {
		m_Name = name;
	}
	string getName() {
		return m_Name;
	}
	//��������  ֻ��
	int getAge() {
		m_Age = 2400;
		return m_Age;
	}
	//��������  ֻд
	void setLover(string lover) {
		m_Lover = lover;
	}
private:
	string m_Name;  //����
	int m_Age;      //����
	string m_Lover; //����
};

int main() {
	Person p;
	p.setName("����");
	cout << "������  " << p.getName() << endl;
	cout << "���䣺  " << p.getAge() << endl;
	p.setLover("����");
	//cout << "���ˣ�  " << p.setLover() << endl;  //ֻд���ԣ����ɶ�ȡ


	system("pause");
	return 0;
}