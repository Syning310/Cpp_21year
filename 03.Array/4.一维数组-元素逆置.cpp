#include<iostream>;
using namespace std;


int main() {
	//ʵ�������е�Ԫ������
	//1����������
	int arr[5] = { 1 , 3 , 2 , 5 , 4 };
	cout << "��������ǰ�� " << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << "  ";
	}cout<<endl;
	
	//2��ʵ������
	//2.1������ʼ�±��λ��
	//2.2���������±��λ��
	//2.3��ʼ�±�ͽ����±��Ԫ�ػ���
	//2.4��ʼλ��++    ����λ��--
	//2.5ѭ��ִ��2.1�Ĳ�����ֱ����ʼλ�� >= ����λ��

	int start = 0;                               //2.1������ʼ�±��λ��                         
	int end = sizeof(arr) / sizeof(arr[5]) - 1;  //2.2���������±��λ��  
	
	while (start <= end) {
		int temp = arr[start];         //����һ���������ݴ���Ԫ��(start)
		arr[start] = arr[end];         //���һ��Ԫ������Ԫ�ػ���
		arr[end] = temp;               //��ԭ������Ԫ�ش浽���һ��Ԫ�صĿռ�
		  //2.4��ʼλ��++    ����λ��--
		start++;
		end--;
	}
//3����ӡ���ú������
	cout << "�������ú�  " << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << "  ";
	}cout << endl;

	system("pause");
	return 0;
}