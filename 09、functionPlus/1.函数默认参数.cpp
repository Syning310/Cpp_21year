#include<iostream>
using namespace std;


//������Ǵ������ݣ���ô���ӳ�ʼֵ�����û���룬��ôʹ�ó�ʼֵ
//�﷨��  ����ֵ���� ���������β� = ��ʼֵ��
int func(int a, int b = 100, int c = 30) {
	cout << a + b + c << endl;
	return a + b + c;
}
//ע�����
//1�����ĳ���βθ����˳�ʼֵ����ô������β����󣬴����Ҷ����븳���ʼֵ
//int func2(int a = 1, int b, int c, int d, int e) {
//	return a + b + c + d + e;
//}
//2���������������Ĭ��ֵ������ʵ�־Ͳ�����Ĭ�ϲ���
//���������ͺ���ʵ��ֻ����һ��Ĭ�ϲ���
int fale(int a = 10, int b = 20);
int fale(int a = 10, int b = 20) {  //�������¶����˲��������������ͺ���ʵ��ֻ����һ��Ĭ�ϲ���
	return a + b;
}

int main() {
	
	cout << func(10,10) << endl;
	cout << fale() << endl;

	system("pause");
	return 0;
}