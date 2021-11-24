#include<iostream>
using namespace std;

//template  ����  ��������ģ��
// typename ����  ���������ķ�����һ���������ͣ�������class����
// T        ����  ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д
//ͨ����˵���ǰ�����Ҳ�����������������

//��������
void swapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void swapDouble(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}
void test01() {
	int a = 10;
	int b = 20;
	swapInt(a, b);
	cout << "a =  " << a << endl;
	cout << "b =  " << b << endl;
	double c = 1.55;
	double d = 2.99;
	swapDouble(c, d);
	cout << "c =  " << c << endl;
	cout << "d =  " << d << endl;
}


template<typename T>    //����һ��ģ�壬���߱����������������ŵ�T��Ҫ����T��һ��ͨ����������
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

//���ú���ģ����н���    //���ַ�ʽʹ�ú���ģ��
void test02() {
	//1���Զ������Ƶ�
	int a = 100;
	int b = 500;
	mySwap(a, b);
	cout << "a =  " << a << endl;
	cout << "b =  " << b << endl;


	//2����ʾָ������
	double c = 1.99;
	double d = 9.11;
	mySwap<double>(c, d);    //ֱ�Ӹ��߱���������������
	cout << "c =  " << c << endl;
	cout << "d =  " << d << endl;

}

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}