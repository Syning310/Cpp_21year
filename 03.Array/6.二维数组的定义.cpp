#include<iostream>;
using namespace std;

int main() {
	//��ά�������ֶ��巽ʽ
	//1���������� ������[ ���� ][ ���� ];
	int arr[2][3];
	arr[0][0] = 0;
	arr[0][1] = 1;
	arr[0][2] = 2;
	arr[1][0] = 3;
	arr[1][1] = 4;
	arr[1][2] = 5;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << "  ";
		}
	}cout << endl;

	//2���������� ������[ ���� ][ ���� ] = { { ����1, ����2}, { ����3, ����4 } };
	int arr2[2][3] = {
		{1,2,3},
		{4,5,6}

	};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr2[i][j] << "  ";
		}cout << endl;
	}

	//3���������� ������[����][����] = { ����1�� ����2������3�� ����4 };
	int arr3[2][3] = { 9,8,7,6,5,4 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr3[i][j] << "  ";
		}cout << endl;
	}

	//4���������� ������[  ][ ���� ] = { ����1�� ����2�� ����3�� ����4 };
	int arr4[][3] = { 6,5,4,3,2,1 };	 
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr4[i][j] << "  ";
		}cout << endl;
	}
	system("pause");
	return 0;
}