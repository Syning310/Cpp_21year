#include <iostream>
using namespace std;
//�﷨�����캯��()������1��ֵ1��������2��ֵ2�� ... {}

class person {
public:
	//��ͳ��ʼ������  �������캯��˳������Ը�ֵ
	/*person(int a, int b, int c) {
		m_A = a;
		m_B = b;
		m_C = c;
	}*/
	person(int q, int w ,int e) :m_A(q), m_B(w), m_C(e) {  //Ϊ������ÿ��԰�ֵ1��ֵ2���滻���β�

	}

	int m_A;
	int m_B;
	int m_C;
};

void test01() {
	/*person p(10, 20, 30);*/
	person p2(100,200,300);  //���ù��캯����ʼ���б�
	/*cout << "m_A = " << p.m_A << "  m_B = " << p.m_B << "  m_C = " << p.m_C << endl;*/
	cout << "m_A = " << p2.m_A << "  m_B = " << p2.m_B << "  m_C = " << p2.m_C << endl;

}


int main() {
	test01();
    

	system("pause");
	return 0;
}