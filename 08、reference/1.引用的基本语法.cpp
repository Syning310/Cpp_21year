#include<iostream>
using namespace std;

//���õ��﷨��
//  ��������  &���� = ԭ��

int main() {

	int a = 10;
	int& b = a;   //��������
	
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	b = 50;
    cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	system("pause");
	return 0;
}