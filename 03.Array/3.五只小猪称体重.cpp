#include<iostream>;
using namespace std;



int main() {
	//��ֻС������
	int arr[5] = { 300,350,200,400,250 };

	//2�����������ҵ����ֵ
	int max = 0;//����һ�����ֵ����Ϊ0


	//���������е�ÿ��Ԫ�أ�������Ԫ�ر����϶������ֵҪ����ô�������ֵ
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	//3����ӡ���ֵ
	cout << "���ص�С������Ϊ�� " << max << endl;

	system("pause");
	return 0;
}