#include<iostream>
using namespace std;

//���ã������ú�������ͬ����߸�����

//�������ص���������         �����ڶ����ֲ�ͬ�ﾳ��ͬ����
//1��ͬһ��������
//2������������ͬ
//3�������������Ͳ�ͬ��������ͬ��˳��ͬ

void func() {
	cout << "func �ĵ���" << endl;
}
//���Ͳ�ͬ
void func(int) {
	cout << "func(int) �ĵ���" << endl;
}
void func(double) {
	cout << "func(double) �ĵ���" << endl;
}

//˳��ͬ
void func(int a, double b) {
	cout << "func(int a, double b) �ĵ���" << endl;
 }
void func(double a, int b) {
	cout << "func(double a, int b) �ĵ���" << endl;
}

int main() {
	//func(3.14);
	func(3.14,1);

	system("pause");
	return 0;
}

//ע�⣺�����ķ���ֵ��������Ϊ�������ص�����