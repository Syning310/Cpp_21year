#include<iostream>
using namespace std;

//��̬��Ա�����ص㣺���ж��󶼹���ͬһ�����ݣ�����׶ξͷ����ڴ棻�������������ʼ��
//��̬��Ա�����ص㣺ֻ�ܷ��ʾ�̬��Ա���������ܷ��ʷǾ�̬��Ա���������еĶ��󶼹���ͬһ�ݺ���ʵ��

class Base {
public:
	static void func() {
		cout << "�����еľ�̬��Ա����func�ĵ���" << endl;
	}

    static int m_A;
};
int Base::m_A = 100;
class son : public Base {
public:
	static void func() {
	    cout << "�����еľ�̬��Ա����func�ĵ���" << endl;
	}

    static int m_A;
};
int son::m_A = 50;

//void test01() {
//	//1��ͨ���������
//	son s;
//	cout << "�����еľ�̬��Ա������  " << s.m_A << endl;
//	cout << "�����еľ�̬��Ա������  " << s.Base::m_A << endl;
//	//2��ͨ����������
//	cout << "ͨ�����������������µľ�̬��Ա������  " << son::m_A << endl;  //��һ��::��ʾͨ��������ʽ����
//	cout << "ͨ�����������ʸ����µľ�̬��Ա������  " << son::Base::m_A << endl;  //�ڶ���::��ʾ���ʸ�����������
//}
void test02() {
	//1��ͨ������ķ�ʽ
	son p;
	p.func();
	p.Base::func();
	//2��ͨ�������ķ�ʽ
	son::func();
	son::Base::func();
	//��������г����˺͸���ͬ���ĳ�Ա�����������ͬ����Ա���������ظ��������е�ͬ����Ա����������ͬ�����صĺ������ᱻ���أ�
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}