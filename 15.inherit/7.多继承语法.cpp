#include <iostream>
using namespace std;

//һ�������϶����  �﷨��
//class ���� : �̳з�ʽ ����1 , �̳з�ʽ ����2�� ......
//��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������

class Father1 {
public:
	Father1() {
		m_A = 10;
	}
	int m_A;
};
class Father2 {
public:
	Father2() {
		m_A = 20;
	}
	int m_A;
};
class son : public Father1, public Father2 {
public:
	son() {
		m_C = 30;
		m_D = 40;
	}
	int m_C;
	int m_D;
};
void test01() {
	son s;
	cout << "����ռ���ڴ�ռ�" << sizeof(s) << endl;  
	cout << "father1�е� m_A = " << s.Father1::m_A << endl;  //���ֶ����ԣ���Ҫ��������
}

int main() {
	test01();


	system("pause");
	return 0;
}