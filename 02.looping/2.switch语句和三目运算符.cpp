#include <iostream>
using namespace std;


  //��Ŀ�����
int main() {
	//������������ a b c 
	int a = 10;
	int b = 20;
	int c = 0;
	//        ��  ��
	c = (a > b ? a : b);//��Ŀ����������a > b���棬��ôa��ֵ��c������Ǽ٣���ôb��ֵ��c
	cout << "c= " << c << endl;

	//��C++����Ŀ��������ص��Ǳ��������Լ�����ֵ
	(a > b ? a : b) = 1000;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	system("pause");
	return 0;
}


  switch���  switch���ʽ����ֻ�������λ����ַ��ͣ�case�����û��break�������һֱ����ִ��
  if �� switch ������
  switch ��ȱ�㣺�ж�ʱ��ֻ�������λ����ַ��ͣ���������һ�����䣻
  switch ���ŵ㣺�ṹ������ִ��Ч�ʸߣ�
int main() {
	//����Ӱ���
	//10 ~ 9  �ǳ���
	//8  ~ 7  ����
	//6  ~ 5  һ��
	//5������ ��Ƭ

	//1����ʾ�û�����Ӱ����
	cout << "�����Ӱ���" << endl;
	//2���û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "�������Ϊ�� " << score << endl;
	//3�������û�����ķ������������û����Ľ��

	switch (score)
	{
	case 10:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;  //�˳���ǰ��֧
	case 9:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ�ܾ���" << endl;
		break;
	case 7:
		cout << "����Ϊ��Ӱ�ܾ���" << endl;
		break;
	case 6:
		cout << "����Ϊ��Ӱ��һ��" << endl;
		break;
	case 5:
		cout << "����Ϊ��Ӱ��һ��" << endl;
		break;
	default:
		cout << "����Ϊ���Ӱ�Ǹ���Ƭ" << endl;
		break;
	}

	system("pause");
	return 0;
}

 
  
  
  