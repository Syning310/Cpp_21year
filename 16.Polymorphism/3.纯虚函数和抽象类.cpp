#include<iostream>
using namespace std;

//���麯���﷨��
//virtual ����ֵ���� ������ ( �����б� ) = 0;
//���������˴��麯���������Ҳ��Ϊ�����ࣻ��������ص㣺
//�޷�ʵ�����������������д�������еĴ��麯��������Ҳ���ڳ�����

class Base {  //�����ࣻ�޷�ʵ�������󣬾����޷���������
public:
	virtual void func() = 0;  //ֻҪ��һ�����麯���������ͳ�Ϊ�����ࣻ�ص㣺�޷�ʵ��������

};
class Son : public Base {
public:

};
class Son1 : public Base {
public:
	virtual void func() {
		cout << "Son1��func��������" << endl;
	}
};
void test01() {
	//Base b;    //�������޷�ʵ��������
	//new Base;  //�������޷�ʵ��������

	//Son s;     //������û����д�����е��麯������������Ҳ�̳г�����
	Son1 s1;     //�����������д�����е��麯�����ſ���ʵ��������
	Base* base = new Son1;
	base->func();  //��˼��ͬ
	s1.func();
}

int main() {
	test01();

	system("pause");
	return 0;
}