#include <iostream>
using namespace std;

//break ���ʹ��ʱ��  ��Ҫ��������ѡ��ṹ������ѭ���ṹ

  
//1��������switch�����
int main() {
	cout << "��ѡ�񸱱��Ѷ�"<< endl;
	cout << "1����ͨ" << endl;
	cout << "2��һ��" << endl;
	cout << "3������" << endl;

	int select = 0;  //����ѡ�����ı���
	cin >> select;   //�ȴ��û�����

	switch (select)
	{
	case 1:
		cout << "��ѡ�������ͨ�Ѷ�" << endl; 
		break;  //�˳�switch���
	case 2:
		cout << "��ѡ�����һ���Ѷ�" << endl; 
		break;
	case 3:
		cout << "��ѡ����������Ѷ�" << endl; 
		break;

	default:
		break;
	}
	system("pause");
	return 0;
}


  //2��������ѭ�������
int main() {

	for (int a = 0; a < 10; a++) {
		//���i����6���˳�ѭ��������ִ�г���
		if (a == 6) {
			break;
		}

		cout << a << endl;
	}

	system("pause");
	return 0;
}




  //3��������Ƕ��ѭ�������
int main() {

	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}