#include<iostream>;
using namespace std;


  //�������������Զ�Σ�������ֻ����һ��

  //�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ

  //��ǰ���߱༭�������Ĵ��ڣ��������ú�������
int max(int a, int b);  //���������� 
int max(int a, int b);
int max(int a, int b);  //�������Զ��


int main() {

	int q = 150;
	int w = 300;
	cout << max(q, w) << endl;


	system("pause");
	return 0;
}

//����  ���� ����ֻ����һ��
int max(int a, int b) {

	return a > b ? a : b;  //���a����b����ô����a�����򷵻�b
}



