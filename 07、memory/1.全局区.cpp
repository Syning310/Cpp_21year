#include<iostream>
using namespace std;

//�洢��ȫ�����е����������У�1��ȫ�ֱ�����2����̬������3���ַ���������4��const���ε�ȫ�ֱ�����ȫ�ֳ�����
//1���ֲ�������2��const���εľֲ��������ֲ������������洢��ȫ����

//C++�ڳ�������ǰ��Ϊȫ�ֱ����ʹ�����
//���������ص��ǹ����ֻ��
//ȫ�����д��ȫ�ֱ�������̬�������������������ֲ�������

int c = 10;  //ȫ�ֱ���    ����main�����еı�������ȫ�ֱ���
int d = 10;

const int c_g_a = 10;  //const ���ε�ȫ�ֱ���  ����c_g_a�ͱ����ȫ�ֳ���
const int c_g_b = 10;


int main() {

	int a = 10;  //��ͨ�ֲ�����    ��main�����еı������Ǿֲ�����
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַΪ��\t\t\t" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��\t\t\t" << (int)&b << endl;

	cout << "ȫ�ֱ���c�ĵ�ַΪ��\t\t\t" << (int)&c << endl;
	cout << "ȫ�ֱ���d�ĵ�ַΪ��\t\t\t" << (int)&d << endl;

	//��̬����  ����ͨ����ǰ��static�����ھ�̬����
	static int g_a = 10;
	static int g_b = 10;
	cout << "��̬����g_a�ĵ�ַΪ��\t\t\t" << (int)&g_a << endl;
	cout << "��̬����g_b�ĵ�ַΪ��\t\t\t" << (int)&g_b << endl;

	//����  ��Ϊ����  1���ַ�������  2��const���εı���
	cout << "�ַ��������ĵ�ַΪ��\t\t\t" << (int)&"hello world" << endl;  //"hello world"  �ַ�������

	//const���εı���  Ҳ��Ϊ���֣�1��const���ε�ȫ�ֱ�����2��const���εľֲ�����
	const int c_l_a = 10;  //const���εľֲ�����  ����c_l_a�ͱ�ɾֲ�����
	cout << "const���ε�ȫ�ֱ���c_g_a�ĵ�ַΪ��\t" << (int)&c_g_a << endl;
    cout << "const���ε�ȫ�ֱ���c_g_b�ĵ�ַΪ��\t" << (int)&c_g_b << endl;
	cout << "const���εľֲ�����c_l_a�ĵ�ַΪ��\t" << (int)&c_l_a << endl;

	system("pause");
	return 0;
}