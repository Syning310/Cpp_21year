#include<iostream>
using namespace std;

//��̬��Ա�����ص㣺1�����ж��󶼹���ͬһ��������2����̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class person {
public:
	static void func()  //��̬��Ա����
	{
		A = 500;  //��̬��Ա�������Է��� ��̬��Ա����
		//B = 200;  //��̬��Ա���������Է��� �Ǿ�̬��Ա����;��Ϊ�޷����ֵ������ĸ������B����
		cout << "static void func�ĵ��� " << endl;
	}

	static int A;  //��̬��Ա����
	int B;
	//��̬��Ա����Ҳ���з���Ȩ�޵�

};
int person::A = 0;  

void test01() {
	//1��ͨ���������
	person p;
	p.func();
	//2��ͨ����������         ::����˼����ĳĳ��������
	person::func();
}

int main() {
	test01();


	system("pause");
	return 0;
}