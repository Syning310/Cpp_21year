#include<iostream>
using namespace std;

//�ܽ᣺ֻ�зǾ�̬��Ա����������Ķ����ϣ��������󶼲�����
//�ն����ռ�õ��ڴ�ռ���1���ֽ�

class person {

};
class America {
public:
	
	int A;  //�Ǿ�̬��Ա����  ������Ķ�����

	static int m_B;  //��̬��Ա����  ��������Ķ�����   ��ȫ������

	void func(){}  //�Ǿ�̬��Ա����  ��������Ķ�����

	static void func2(){}  //��̬��Ա����  Ҳ��������Ķ�����  ��ȫ������

};
int America::m_B = 500;

void test01() {
	person p;
	cout << "p��ռ���ڴ�ռ䣺  " << sizeof(p) << endl;  //�ն���ռ�ÿռ�Ϊ��1���ֽ�
	//C++���������ÿ���ն���Ҳ����һ���ֽڵ��ڴ�ռ䣬��Ϊ�����ֿն�����ռ�ڴ��λ��
	//ÿһ���ն�����һ����һ�޶����ڴ��ַ
}
void test02() {
	America a1;
	cout << "a1��ռ���ڴ�ռ䣺  " << sizeof(a1) << endl;  //�ĸ��ֽ�  
}

int main() {
	//test01();
	test02();


	system("pause");
	return 0;
}