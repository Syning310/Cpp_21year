#include<iostream>;
using namespace std;


int main() {
	//����ð������ʵ����������
	int arr[] = { 5,3,7,1,0,8,9,6,2,4 };
	cout << "����ǰ�� " << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "  ";
	}cout << endl;

	//��ʼð������; ���������� = Ԫ�ظ��� - 1; 
	for (int i = 0; i < 10 - 1; i++) {
		//�ڲ�ѭ���Ա�;    ÿ�ֶԱȴ��� = Ԫ�ظ��� - �������� - 1
		for (int j = 0; j < 10 - i - 1; ++j) {
			//�����һ�����֣��ȵڶ������ִ���ô������������
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			
		}

	}
	//�����Ľ��
	cout << "����� " << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "  ";
	}cout << endl;


	system("pause");
	return 0;
}