#include<iostream>
using namespace std;


int main() {
	//continue ��� 

	for (int a = 0; a <= 100; a++) {
		//������ӡ��ż������ӡ
		if (a % 2 == 0 || 0) {
			continue;  //ִ�е��˲������£�ֱ�ӽ�����һ��ѭ��
			           //break��ֱ���˳�ѭ������continue����ʹ����ѭ����ֹ
		}
		 cout << a << endl;
	}


	system("pause");
	return 0;
}




  //  go to ���
int main() {

	cout << "�쳾����¥" << endl;
	goto QQQ;
	cout << "��ϼ���ɹ�" << endl;

	cout << "��ʯ������" << endl;
	QQQ:
	cout << "��ɽ���Ƹ�" << endl;

	system("pause");
	return 0;
}