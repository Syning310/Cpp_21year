#include <iostream>
using namespace std;

//ע�����
//1��������Ϊ��������

void func(int& a) {  //����������һ��������Ҳ�Ϳɶ���д��ִ���������
	cout << "func(int& a) �ĵ���" << endl;
}
void func(const int& a) {  //����������һ��������Ҳ��ֻ����ִ���������
	cout << "func(const int& a) �ĵ���" << endl;
}


//2��������������Ĭ��ֵ
void func2(int a) {  //��Ҫ��һ������
	cout << "func2(int a) �ĵ���" << endl;
}
void func2(int a, int b, int c = 10) {  //��Ҫ������������������ֵ����int b����ô��������֪����ִ���ĸ�����
	cout << "func2(int a, int b) �ĵ���" << endl;
}
int main() {

	int a = 10;
	//func(a);  //a �Ǳ������ɶ���д
	//func(10); //10 �ǳ�����ֻ�ܶ�
	const int& a = 10;  //�൱��ϵͳ������һ����ʱ�ռ䣬int& aָ���Ǹ���ʱ�Ŀռ䣻��������﷨����

	func2(10);  //��������������Ĭ�ϲ��������ֶ����ԣ�������������

	system("pause");
	return 0;
}