#include <iostream>
using namespace std;
//������������� " << "

class Bike {
	friend ostream& operator<<(ostream& cout, Bike& b);
	friend void test01();
	//˽�г�Ա�޷����ʾͰ���������CV�����ඥ�㣬����friend������ǳ�Ա�����ǵü�������

	//ͨ���������ó�Ա���������������������Ϊ�޷�ʵ��cout�����
private:
	int m_A;
	int m_B;
};
//ostream����˼�ǣ����������cout�Ǳ�׼����������󣬶����������ȫ��ֻ����һ������Ҫ��"&"�������õķ�ʽ����
//ֻ������ȫ�ֺ����������������
ostream& operator<<(ostream& cout, Bike& b)  //���� operator<< (cout, b) ���� cout << b
{
	cout << "m_A = " << b.m_A << "    m_B = " << b.m_B ;
	return cout;
}
void test01() {
	Bike b1;
	b1.m_A = 50;
	b1.m_B = 10;
	//cout << b1;//������operator<< (cout ,b1);��operator��<<�Ǻ���������cout��b1���Ǵ���Ĳ���
	//��Ϊ�����������ֵ��void���Ժ��治�ܼӡ� <<endl; ����


	cout << b1 << "    hello world" << endl; 
	//���ȫ�ֺ�����return cout �ǾͿ��Լ� <<endl ��Ҳ�Ϳ�������׷������������ݣ���ʽ��̣�
}

int main() {
	test01();

	system("pause");
	return 0;
}