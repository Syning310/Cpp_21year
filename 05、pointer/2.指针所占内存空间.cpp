#include<iostream>
using namespace std;


int main() {

	int a = 20;
	
//	int* p;  //����һ��ָ��
//	p = &a;  //������ϵ
	int* p = &a;

	//������ʲô�������ͣ���32Ϊ����ϵͳ�£�ָ��ռ4���ֽڣ���64Ϊ����ϵͳ�£�ָ��ռ8���ֽ�
	cout << "sizeof (int *) = " << sizeof(int*) << endl;
	cout << "sizeof (int *) = " << sizeof(float*) << endl;
	cout << "sizeof (int *) = " << sizeof(double*) << endl;
	cout << "sizeof (int *) = " << sizeof(char*) << endl;




	system("pause");
	return 0;
}