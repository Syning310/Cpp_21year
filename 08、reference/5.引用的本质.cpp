#include <iostream>
using namespace std;

//���õı�����C++�ڲ�ʵ����һ��  ָ�볣����ָ���ָ���ܸģ�ָ��ĳ������Ը�

void func(int& rel) {  //���������ã�ת��Ϊ int* const rel = &a;
	rel = 100;         //rel�����ã�ת��Ϊ*rel = 100;
}

int main() {
	int a = 10;

	//�Զ�ת��Ϊ int* const ret = &a;  ָ�볣����ָ���ָ�򲻿ɸģ�Ҳ˵�����ò��ɸ���
	int& ret = a;
	ret = 20;  //�ڲ�����ref�����ã��Զ�������ת��Ϊ:"*ret = 20"

	cout << "a= " << a << endl;
	cout << "ret= " << ret << endl;

	func(a);

	system("pause");
	return 0;
}