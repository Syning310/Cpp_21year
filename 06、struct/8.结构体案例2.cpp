#include<iostream>
using namespace std;

struct hero {
	string name;
	int age;
	string sex;  //�Ա�
};
//ð������ʵ���������������
void bubbleSort(hero heroArray[], int len) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (heroArray[j].age > heroArray[j + 1].age) {
				hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}	
}

void printHero(hero heroArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "Ӣ�������� " << heroArray[i].name 
			 << "  ����:  " << heroArray[i].age 
			 << "  �Ա�  " << heroArray[i].sex << endl;
	}

}

int main() {
	//1������һ��������5��Ӣ��
	hero heroArray[5] = {
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	}; cout << "����ǰ��  " << endl;
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < len; i++) {
		cout << "Ӣ�������� " << heroArray[i].name
			<< "  ����:  " << heroArray[i].age
			<< "  �Ա�  " << heroArray[i].sex << endl;
	}
	cout << "�����  " << endl;
	//3��������������򣬰������������������
	bubbleSort(heroArray, len);

	//4����ӡ������Ӣ����Ϣ
	printHero(heroArray, len);

	
	system("pause");
	return 0;
}