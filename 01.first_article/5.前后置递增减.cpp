#include <iostream>
using namespace std;

int main() {
	//1��ǰ�õ���
	int a = 10;
	++a;
	cout << "a = " << a << endl;

	//2�����õ���
	int b = 10;
	b++;
	cout << "b = " << b << endl;

	//3��ǰ�úͺ��õ�����
	//ǰ�õ���  ���ñ���+1���ٽ��б��ʽ����
	int c = 10;
	int d = ++c * 10;
	cout << "c=" << c << endl;
	cout << "d = " << d << endl;

	//���õ���  �Ƚ��б��ʽ���㣬���ñ���+1
	int c1 = 10;
	int d1 = c1++ * 10;
	cout << "c1 = " << c << endl;
	cout << "d1 = " << d1 << endl;

	//ǰ�õݼ�
	int a = 11;
	--a;
	cout << "a = " << a << endl;

	//���õݼ�
	int c = 11;
	c--;
	cout << "c = " << c << endl;

	//ǰ�õݼ��ͺ��õݼ�������
	int q = 11;
	//int d = --q * 10;
	int e = q-- * 10;
	//cout << "d = " << d << endl;
	
	cout << "q = " << q << endl;
	cout << "e = " << e << endl;

	system("pause");
	return 0;
}