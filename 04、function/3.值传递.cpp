#include<iostream>;
using namespace std;

//���ȶ��庯����ʵ���������ֽ��н���������
//�����������Ҫ����ֵ��������ʱ�����дvoid�����������ͣ�
void swap(int num1, int num2) {

	cout << "����ǰ�� " << endl;
	cout << "num1= " << num1 << endl;
	cout << "num2= " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1= " << num1 << endl;
	cout << "num2= " << num2 << endl;

	//return;  //����ֵ����Ҫ��ʱ�򣬿��Բ�дreturn
}




int main() {

	int a = 150;
	int b = 810;


    cout << "a= " << a << endl;
	cout << "b= " << b << endl;	
	//��������ֵ���ݵ�ʱ�򣬺������βη����ı䣬������Ӱ��ʵ��
	swap(a, b);
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;


	int i = 650;
	int q = 777;
	//swap(i, q);

	system("pause");
	return 0;
}