#include<iostream>
using namespace std;

//��C++�� struct �� class Ψһ����������� Ĭ�ϵķ���Ȩ�޲�ͬ
//struct Ĭ��Ȩ��Ϊ����
//class  Ĭ��Ȩ��Ϊ˽��

class S1 {
	string Name;  //Ĭ��Ȩ�� ��˽��Ȩ��
};

struct S2 {
	string Name;  //Ĭ��Ȩ�� �ǹ���Ȩ��
    
	int a;
	int b;
	int S() {  //�󳤷��ε����
		return a * b;
	}
};


int main() {
	S1 c1;
	//c1.Name;  //Ĭ��Ȩ����˽�У������޷�����

	S2 c2;
	c2.Name = "������";  //Ĭ��Ȩ���ǹ��������Կ��Է���
	c2.a = 5;
	c2.b = 10;
	cout << c2.S() << endl;

	system("pause");
	return 0;
}