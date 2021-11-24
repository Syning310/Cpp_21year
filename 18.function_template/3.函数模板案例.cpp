#include<iostream>
using namespace std;


template<typename T>
void Sort(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		int max = i;  //�϶����ֵ

		for (int j = i + 1; j < len; j++) {
			if (arr[max] < arr[j]) {  //������϶������ֵ�ȱ�������ֵС����ô˵��j�±��Ԫ�ز������������ֵ
				max = j;  //�������ֵ���±�
			}
		}
		if (max != i) {
			T temp = arr[i];
			arr[i] = arr[max];
			arr[max] = temp;
		}
	}
}
//�ṩ��ӡ�����ģ��
template<typename T>
void printArr(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << "  ";
	}cout << endl;

}

void test01() {
	char charArr[] = "qwertyuioplkjhgfdsazxcvbnm";
	int ret = sizeof(charArr) / sizeof(char);
	Sort(charArr, ret);
	printArr(charArr,ret);
}

void test02() {
	int intArr[] = { 5,8,7,9,6,3,1,4,2 };
	int ret = sizeof(intArr) / sizeof(int);
	Sort(intArr, ret);
	printArr(intArr,ret);
}

int main() {

	test01();
	test02();
	system("pause");
	return 0;
}