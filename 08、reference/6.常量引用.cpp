#include <iostream>
using namespace std;

//ʹ�ó��������������βΣ���ֹ�����
void printNum(const int& Num) {  //�൱��  const int& Num = &a;  
								 //����ָ�룬ָ���ֵ�����Ըģ���������������ָ���ָ��Ҳ�����Ը�
	//Num = 10000;  //����ָ�룬ָ��ָ���ֵ�����Ը�
	cout << "Num = " << Num << endl;
}
int main() {
	//int& ret = 10;//�������ñ�����һ��Ϸ����ڴ�ռ�

	//const int& ret = 10;//����const�󣬱������������޸�  int ������� = 10; const int& ret = �������;
	//ret = 20;//����const֮���Ϊֻ���������޸�

	int a = 100;
	printNum(a);


	system("pause");
	return 0;
}