#include<iostream>
using namespace std;


int main() {

	//����ָ����������е�Ԫ��
	int arr[] = { 11,12,13,14,15,16,17,18,19,20 };

	//cout << "��һ��Ԫ��Ϊ��  " << arr[0] << endl;

	int * p = arr;  //arr ����������׵�ַ
	//cout << "����ָ����ʵ�һ��Ԫ��:  " << *p << endl;

	//����ָ����ʵڶ���Ԫ��
	//p++;  //��ָ�����ƫ���ĸ��ֽڣ�int���ĸ��ֽڣ�

	//cout << "����ָ����ʵڶ���Ԫ��:  " << *p << endl;

	for (int i = 0; i < 10; i++) {

		cout << "��" << i << "��Ԫ��Ϊ��  " << *p << endl;
		p++;
	}





	system("pause");
	return 0;
}