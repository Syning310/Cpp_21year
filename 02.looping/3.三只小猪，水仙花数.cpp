#include <iostream>
using namespace std;

  //��ֻС������أ��ж���ֻ����
int main() {
	//1��������ֻС�����صı���
	int z1 = 0;
	int z2 = 0;
	int z3 = 0;

	//2��������ֻС�������
	cout << "������z1�����أ� " << endl;
	cin >> z1;
	cout << "������z2�����أ� " << endl;
	cin >> z2;
	cout << "������z3�����أ� " << endl;
	cin >> z3;

	cout << "С��z1������Ϊ�� " << z1 << endl;
	cout << "С��z2������Ϊ�� " << z2 << endl;
	cout << "С��z3������Ϊ�� " << z3 << endl;

	//3���Ƚ���ֻС������
    //�ȱȽ� z1��z2������
	if (z1 > z2)   // z1��z2�����Ƚ� ���z1����z2  ������������ţ���֮����
	{
		if (z1 > z3)  // Ƕ��if ��κ�z3���Ƚ� ���z1����z3
		{
			cout << "С��z1����" << endl;
		}
		else  
		{
			cout << "С��z3����" << endl;
		}
	}
	else  
	{
		if (z2 > z3)  //z2��z3���Ƚ�  ���z2����z3  ��������
		{
			cout << "С��z2����" << endl;
		}
		else
		{
			cout << "С��z3����" << endl;
		}
	}


	system("pause");
	return 0;
	}

int main() {
	
	int a = 153;
	cout << "a= " << a << endl;

    //������ȡģ�ڡ���%����10     ���Ի�ȡ��λ��
	int b = a % 10;  //��ȡa�ĸ�λ��
	cout << "aȡģ��10Ϊ�� " << b << endl;

	//����������10֮����ȡģ��10�õ� ʮλ
	int c = a / 10 % 10;  //��ȡa��ʮλ��
	cout << "a��ʮλ��Ϊ�� " << c << endl;

	//��ȡa�İ�λ��
	int d = a / 100 % 10;
	cout << "a�İ�λ��Ϊ�� " << d << endl;

	system("pause");
	return 0;
}


  //1��������λ���е�ˮ�ɻ���
  //2��ֻ��ӡˮ�ɻ���
int main() {

	int mun = 100;
      
	do {
		int a = 0;  
		int b = 0;
		int c = 0;

		a = mun % 10;        //��λ
		b = mun / 10 % 10;   //ʮλ
		c = mun / 100 % 10;  //��λ
		if (a*a*a + b*b*b + c*c*c == mun) {
			cout << mun << endl;

		}
		
		mun++;
	} 	while (mun < 1000);
	system("pause");
	return 0;
}