#include<iostream>
using namespace std;

//1��new�Ļ����﷨
int* func() {
	int* p = new int(10);  //new���ص��Ǹ��������͵�ָ�룬����Ҫ��ָ�������
	return p;
}
void test01() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	//����������  �ɳ���Ա�����٣�����Ա�����ͷ�
	//������ͷŶ��������ݣ��ùؼ���  delete
	delete p;
	//cout << *p << endl;  //����ָ��p�Ѿ����ͷţ��޷��ٷ���
}

//2���ڶ�����������
void test02() {
	//����10���������ݵ����飬�ڶ���
	int* arr = new int[10];  //10������������10��Ԫ�أ����ص����׵�ַ��ҲҪ��ָ�����
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;  //��Ԫ�ظ�ֵ  100 ~ 109
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	//�ͷŶ���������
	delete[] arr;  //�ͷ������ʱ��Ҫ��[]�ſ���
}


int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}