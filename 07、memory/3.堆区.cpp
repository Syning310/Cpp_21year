#include<iostream>
using namespace std;

//������  �ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ�ɲ���ϵͳ����
//��C++����Ҫ����new�ڶ��������ڴ�


int* func() {
    //ָ��  ����Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
	int* p = new int(10);
	cout << p << endl;  //ָ������ĵ�ַ
	return p;
}

int main() {
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;


	system("pause");
	return 0;
}