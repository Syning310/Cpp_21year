#include<iostream>
using namespace std;


  //p�������ָ��ĵ�ַ��*p������ǽ����ã�Ҳ����ָ��ָ���ֵ
  //��ַ����
void swap(int* p1, int* p2) {

	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}

int main() {

	int a = 10;
	int b = 50;
	               //ֵ����    �����β���θı䶼�޷��ı�ʵ��
	swap(&a, &b);  //��ַ����  ����ǵ�ַ���ݿ������Σ��ı�ʵ��

	cout << "a=  " << a << endl;
	cout << "b=  " << b << endl;
	
	system("pause");
	return 0;
}