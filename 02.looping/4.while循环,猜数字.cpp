#include <iostream>
using namespace std;

//while ѭ������ do...while ѭ�������������� ���߻���ִ��һ�����ж�����



  //while ѭ�����
int main() {
	//����Ļ�д�ӡ 0 ~ 9 ��10������
	int a = 0;
	while (a < 10)  //while����������ѭ������
	{
		cout << a << endl;
		a++;
	}


	system("pause");
	return 0;
}


  //do...while ѭ�����
int main() {
	int a = 0;
	do {
		cout << "a= " << a << endl;
		a++;
	} 
	while (a < 10);

	system("pause");
	return 0;
}


  //������
int main() {
	//������������  ���������õ�ǰϵͳʱ�����������  ��ֹÿ���������һ��
	srand((unsigned int)time(NULL));

	//1��ϵͳҪ����һ�������
	int num = rand() % 100 + 1;
	//rand()��˼������һ������� ��rand����%100 ���� ����0 ~ 99 �������
	//rand( )%100 + 1 ��˼������ 0 +1 ~ 99 + 1 �������
	//cout << num << endl;
	
	//2����ҽ��в²�
	int val = 0;  //������������
	
	while (1) {
		cin >> val;
		//3���ж���Ҳ²�Դ�

		//�´�		��ʾ�µĽ��������С	���·��صڶ���
		if (val > num) {
			cout << "�´���" << endl;
		}
		else if (val < num) {
			cout << "��С��" << endl;
		}
		else {
			cout << "��ϲ��¶���" << endl;
			//�¶�		�˳���Ϸ
		break;  //break,�������ô˹ؼ������˳�ѭ��
		}
		
	}
	system("pause");
	return 0;
}