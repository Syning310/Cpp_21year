#include <iostream>
using namespace std;


  //for ѭ����ӡ 0 ~ 9
  //for (��ʼ���ʽ; �������ʽ; ĩβѭ����;) { ѭ�����; }
int main() {

	for (int a = 0; a < 10; a++) {
		cout << "a= " << a << endl;
	}


	system("pause");
	return 0;
}



  //������
  //1��������� 1~100
  //2����100���������ҵ��������֣���ӡ"������"
  //  ����� 7�ı�������λ��7������ʮλ��7����ӡ������
int main() {

	for (int a = 1; a <= 100;a++ ) {
		
		//  ����� 7�ı�����   ��λ��7��    ����ʮλ��7    
		if ( a % 7 == 0 || a % 10 == 7 || a / 10 % 10 == 7 )      //  "||"  �߼���
		{
			cout << "������" << endl;  //��ӡ������
		}
		else {
			cout << a << endl;
		}
	}

	system("pause");
	return 0;

}



