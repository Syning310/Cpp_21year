#include <iostream>
using namespace std;

//����Ȩ�������֣�
//public     ����Ȩ��    ��Ա ���ڿ��Է���  ����Ҳ���Է���
//protected  ����Ȩ��    ��Ա ���ڿ��Է���  ���ⲻ���Է���  //���ӿ��Է��ʸ����еı������ݣ���ž��Ǹ������ö����õ���Ϊ����
//private    ˽��Ȩ��    ��Ա ���ڿ��Է���  ���ⲻ���Է���  //���Ӳ����Է��ʸ��׵�˽�����ݣ���ž��Ǹ��ײ����ö����õ���Ϊ˽��

class Person {

public:  //����Ȩ��
	string m_Name;

protected://����Ȩ��
	string m_Car;

private:  //˽��Ȩ��
	int m_passwork;

public:
	void func() {
		m_Name = "����";
		m_Car = "������";
		m_passwork = 2250;
	}
	
};


int main() {
	Person p1;  //ʵ�����������

	p1.m_Name = "����";
	//p1.m_Car = "����";  //����Ȩ�޵����ݣ���������ʲ����������ⲻ�ɷ���
	//p1.m_passwork = 161616;  //˽��Ȩ�޵����ݣ�������Ҳ�Ƿ��ʲ����������ⲻ�ɷ���
	
	//cout << p1.m_Car << endl;  //����Ȩ�ޣ������ⲻ�ɷ���
	//cout << p1.m_passwork << endl;  //˽��Ȩ�������ⲻ�ɷ���



	system("pause");
	return 0;
}