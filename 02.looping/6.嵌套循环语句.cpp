#include <iostream>
using namespace std;



  //����Ƕ��ѭ������ӡ*ͼ
int main() {
	//��ѭ��ִ��һ�Σ���ѭ��ִ��һ��
	//��ѭ��
	int b = 0;
	while (b < 10) {
		//��ӡһ��*ͼ   //��ѭ��
		for (int a = 0; a < 10; a++) {
			cout << "* ";

		}
		cout << endl;
		b++;
	}
	system("pause");
	return 0;
}



  //����Ƕ��ѭ������ӡ���žų˷���
  //���� * ���� = ������
  //���� <= ��ǰ����
int main() {

	for (int i = 1; i <= 9; i++) {

		for (int j = 1; j <= i; j++) {
			cout << j << "*" << i << "=" << j * i << "	";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}