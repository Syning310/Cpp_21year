#include <iostream>
using namespace std;
int main() {
	//�Ƚ������
	int a = 10;
	int b = 20;
	// == �����
	cout <<( a == b) << endl;
//
//	// ��= ������
//	cout << (a != b )<< endl;
//
//	// > ����
//	cout << (a > b) << endl;
//
//	// < С��
//	cout << (a < b) << endl;
//
//	// >= ���ڵ���
//	cout << (a >= b) << endl;
//
//	// <= С�ڵ���
//	cout << (a <= b) << endl;
//
	system("pause");
	return 0;
}

int main() {
	//�߼������
	// ! ��         ���٣��ٱ���
	int a = 10;
	cout << !a << endl;
	cout << !!a << endl;

	// && ��        ͬ��Ϊ�棬����Ϊ��      ����������Ϊ������Ϊ��
	int b = 0;
	int c = 20;
	cout << ( a && b ) << endl;
	cout << ( a && c ) << endl;

	// || ��        ͬ��Ϊ�٣�����Ϊ��      ���������ﵽ����һ��
	int q = 0;
	cout << ( a || b ) << endl;
	cout << ( a || q ) << endl;
	cout << ( b || q ) << endl;

	system("pause");
	return 0;
}
