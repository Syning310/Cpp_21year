#include<iostream>
using namespace std;

  // 1���ȴ�������
  // 2������������ʵ��ð������
  // 3����ӡ����������

//ð��������
void bubbleSort(int * arr, int len)  //����1��������׵�ַ������2������ĳ���
{
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			//���j > j+1��ֵ  ��ô��������
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//��ӡ����
void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << "  ";
	}cout << endl;
}


int main() {
    int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };  //��������

	//���鳤��
	int len = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, len);

	printArray(arr, len);

	system("pause");
	return 0;
}





//  //ð������
//int main() {
//
//	
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << "  ";
//	}cout << endl;
//
//	//�������� = Ԫ�ظ��� - 1
//	for (int q = 0; q < 10; q++) {
//		//ÿ����������� = Ԫ�ظ��� - ��ǰ�������� - 1
//		for (int w = 0; w < 10 - q - 1; w++) {
//			if (arr[w] > arr[w + 1]) {
//				int temp = arr[w];
//				arr[w] = arr[w + 1];
//				arr[w + 1] = temp;
//			}
//		}
//
//	}
//  
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << "  ";
//	}cout << endl;
//
//	system("pause");
//	return 0;
//}