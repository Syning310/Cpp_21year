#include<iostream>
using namespace std;

//����
// 1����ͨ��������ʱ���Է����Զ�����ת������ʽ����ת����
// 2������ģ�����ʱ����������Զ������Ƶ������ᷢ����ʽ����ת��
// 3�����������ʾָ�����͵ķ�ʽ�����Է�����ʽ����ת��

//��ͨ����
int myAdd(int a, int b) {
	return a + b;
}
//ģ�庯��
template<typename T>
T myAdd2(T a, T b) {
	return a + b;
}

void test01() {
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd(a, c) << endl;  //��ʽ����ת��������char����ͨ�����У��Զ�ת����int���͵���ֵ��ASCII��ֵ��
	
	//�Զ������Ƶ�    ֻ�ܴ�����ͬ����������
	//cout << myAdd2(a, c) << endl;   //����

	//��ʾָ������    ����ָ���������ͣ��ᷢ����ʽ����ת��������char��ģ�庯���У���ʽת����int���͵���ֵ��ASCII��ֵ��
	cout << myAdd2<int>(a, c) << endl;
 

}
int main() {
	test01();

	system("pause");
	return 0;
}

