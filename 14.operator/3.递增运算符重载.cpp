#include <iostream>
using namespace std;
//����������� " ++ "
//���ص�������������֣�1��ǰ�õ����������2�����õ��������
//������������ز�Ҫд�ڳ�Ա�����У�������������ؿ���д�ڳ�Ա������

class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger m);
public:
	MyInteger();
	//1������ǰ�õ��������
	MyInteger& operator++() {  //����������Ϊ��һֱ��һ�����ݽ��е�������
		++m_A;  //�Ƚ���++����
		return* this;  //�ٷ�������
	}
    //2�����غ��õ��������
	MyInteger operator++(int) {  //int �������ռλ���������ں������أ�����ǰ�õ����ͺ��õ���
		MyInteger temp = *this;  //�� ��¼��ǰ���
		m_A++;                  //�� ���к��õ�������
		return temp;             //��� ���������
	}

private:
	int m_A;
};
  MyInteger::MyInteger() {
	m_A = 0;
}
  ostream& operator<<(ostream& cout, MyInteger m) {  //�������������,��д��ȫ�ֺ�����
	  cout << m.m_A;
	  return cout;
  }

  //ǰ�õ���
  void test01() {
	  MyInteger myint;
	  cout << ++(++myint) << endl;
	  cout << myint << endl;
  }
  //���õ���
  void test02() {
	  MyInteger myint1;
	  cout << myint1++ << endl;
	  cout << myint1 << endl;
	  //��������Ĵ����൱�ڣ�
	  //int a = 0;
	  //cout << a++ << endl;  //0
	  //cout << a << endl;    //1
  }

int main() {
	//test01();
	test02();


	//int a = 10;
    //����ǣ�++д��ǰ�棺 ++a��
	//cout << ++a << endl; //11
	//cout << a << endl;   //11
	//ǰ�õ��������������������������ʽ

	//����ǣ�++д�ں��棺 a++��
	//cout << a++ << endl;  //10
	//cout << a << endl;    //11
	//���õ������������ʽ��������������

	system("pause");
	return 0;
}