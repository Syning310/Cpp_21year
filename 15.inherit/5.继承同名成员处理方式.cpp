#include<iostream>
using namespace std;

//�����ͨ�����������������е�ͬ����Ա  ֱ�ӷ��ʼ���
//�������ʸ����м̳�������ͬ����Ա      ��Ҫ�Ӹ����������
//���û��ͬ����ֱ��.���ʼ���

class Base {
public:
	Base() {
		m_A = 10;
	}
	int func() {
		return m_A += 10;
	}
	void func2() {
		cout << "�����е�func2()��������" << endl;
	}
	void func2(int a) {
		cout << "�����е�func2(int a)��������" << endl;
	}
	int m_A;
};

class son : public Base {
public:
	son() {
		m_A = 500;
	}
	int func() {
		return m_A += 10;
	}
	void func2() {
		cout << "�������е�func2()��������" << endl;
	}
	int m_A;
};
void test01() {
	son s;
	s.m_A;
	s.Base::m_A;  //��m_Aǰ�ӻ��������򼴿ɷ��ʼ̳�������ͬ������
	cout << "�������е�m_A = " << s.m_A << endl;
	cout << "�����е�m_A = " << s.Base::m_A << endl;
}
//ͬ����Ա����    ͬ��������ͬ����Ա��ͬ�����ϻ�����������ʾ���ɣ�
void test02() {
	son s1;
	int ret = s1.func();
	cout << ret << endl;
	int ret2 = s1.Base::func();
	cout << ret2 << endl;
	
}
void test03() {
	son s;
	s.func2();
	s.Base::func2();

	s.Base::func2(1);  //�������ʸ����б����ص�ͬ����Ա����������Ҫ����������ܷ���
	//��������г����˺͸���ͬ���ĳ�Ա�����������ͬ����Ա���������ظ��������е�ͬ����Ա����������ͬ�����صĺ������ᱻ���أ�
}

int main() {
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}