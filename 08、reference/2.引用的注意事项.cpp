#include<iostream>
using namespace std;

int main() {   
	int a = 10;
    //1�����ñ���Ҫ��ʼ����
	//int& q;  //������䣬���ñ���Ҫ��ʼ��
	int& b = a;

	//2������һ����ʼ���Ͳ����Ը����ˣ�
	int c = 20;

	b = c;  //���Ǹ�ֵ���������Ǹ�������



	system("pause");
	return 0;
}