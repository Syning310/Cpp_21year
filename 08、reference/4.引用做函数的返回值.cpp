#include <iostream>
using namespace std;

//1����Ҫ���ؾֲ�����  ��Ϊ�ֲ����������������ڴ��е�ջ��
int& test01() {
	int a = 10;  //�ֲ�����������ڴ������е�ջ����ֻ�ᱻ����������һ��
	return a;
}

int& test02() {
	static int a = 20;//����static�ͱ�ɾ�̬�����������ȫ������ȫ������������ڳ��������ϵͳ�ͷ�
	return a;  //���ص���a������
}

//2�������ĵ��ÿ�����Ϊ��ֵ
int main() {
	//int& ret = test01();
	//cout << "ret= " << ret << endl;//��һ�ν����ȷ������Ϊ���������˱���
	//cout << "ret= " << ret << endl;//�ڶ��ν����������Ϊջ���е������ѱ��ͷ�

	//��ֵ
	int& ret1 = test02();  //�൱��int& ret1 = a;
	cout << "ret1= " << ret1 << endl;
	cout << "ret1= " << ret1 << endl;

	test02() = 1000;  //a = 1000;
	//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ 
    cout << "ret1= " << ret1 << endl;  //ret1 ��a�ı���
	cout << "ret1= " << ret1 << endl;


	system("pause");
	return 0;
}