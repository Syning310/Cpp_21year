#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main(){
	//1������
	int a = 0;
	cout << "������α�����ֵ:" << endl;
	cin >> a;
	cout << "���α���a = " << a << endl;
	
	//2��������
	float b = 3.14f;
	cout << "��������ͱ�����ֵ��" << endl;
	cin >> b;
	cout << "�����ͱ���f = " << b << endl;
	
	//3���ַ���
	char c = 'a';
	cout << "����ַ��ͱ���c��ֵ��" << endl;
	cin >> c;
	cout << "�ַ��ͱ���c = " << c << endl;

	//4���ַ�����
	string d = "syning";
	cout << "����ַ���������ֵ��" << endl;
	cin >> d;
	cout << "�ַ����ͱ���d = " << d << endl;

	//5����������
	bool e = false;
	cout << "����������͸�ֵ��" << endl;
	cin >> e;  //bool����  ֻҪ�Ƿ�0��ֵ��Ϊ��
	cout << "��������e = " << e << endl;


		

	system("pause");
	return 0;
}