#include<iostream>
using namespace std;

//��������ظ�������е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������
//���������������ͣ�������֪����ν������㣻��int double long
//�Ӻ���������������֣�1��ͨ����Ա��������+�ţ�2��ͨ��ȫ�ֺ�������+��
//�﷨:  ����ֵ���� operator+ () {}

//�ܽ᣺�������õ��������͵ı��ʽ��������ǲ����ܸı��    ͨ�׵���˼�ǣ��������õ����������Ǹı䲻�˵�
//��Ҫ�������������



class America {
public:
	//1����Ա��������+��
	//America operator+(America& a) {  //��Ա�����ı����ǣ�America a3 = a1.operator+(a2);
	//	America temp;
	//	temp.m_A = this->m_A + a.m_A;  //thisָ�����a1����Ϊ��a1�����������
	//	temp.m_B = this->m_B + a.m_B;
	//	return temp;	
	//}

	int m_A;
	int m_B;
};
//ȫ�ֺ�������+��
America operator+(America& p1, America& p2) {
	America temp;
	temp.m_A = p1.m_A + p2.m_B;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

void test01() {
	America a1;
	a1.m_A = 10;
	a1.m_B = 10;
	America a2;
	a2.m_A = 10;
	a2.m_B = 10;
	//��Ա�������صı����ǣ�
	//America a3 = a1.operator+(a2);  
	//ȫ�ֺ������صı����ǣ�
	//America a3 = operator+(a1, a2);

	America a3 = a1 + a2;  //��Ա������ȫ�ֺ����ļ򻯰汾������������
	
	cout << "a3.m_A = " << a3.m_A << endl;
	cout << "a3.m_b = " << a3.m_B << endl;

    //America a4 = a1 + 10;  //America + int  ����
}


int main() {
	test01();

	system("pause");
	return 0;
}